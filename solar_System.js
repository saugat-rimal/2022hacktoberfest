const scene = new THREE.Scene();
const canvas = document.querySelector("#canva");
const renderer = new THREE.WebGLRenderer({canvas});
renderer.setSize(window.innerWidth,window.innerHeight);


const camera = new THREE.PerspectiveCamera(75, 2, 0.1,1000);
camera.position.set(0, 50, 0);
camera.up.set(0, 0, 1);
camera.lookAt(0, 0, 0);

const objects = [];
const speed_control = [];
 
// use just one sphere for everything
const radius = 1;
const widthSegments = 100000;
const heightSegments = 6;
const sphereGeometry = new THREE.SphereGeometry(
    radius, widthSegments, heightSegments);

//for solar system:
const solarSystem = new THREE.Object3D();
scene.add(solarSystem);
objects.push(solarSystem)


//for planet mercury
const mercuryOrbit = new THREE.Object3D();
mercuryOrbit.position.x = 7;
solarSystem.add(mercuryOrbit);
objects.push(mercuryOrbit);
//for planet mercury mesh
const mercuryMaterial = new THREE.MeshPhongMaterial({color: 0x708090, emissive: 0x112244});
const mercuryMesh = new THREE.Mesh(sphereGeometry, mercuryMaterial);
mercuryMesh.scale.set(2/3,2/3,2/3);
scene.add(mercuryMesh);
objects.push(mercuryMesh);
mercuryOrbit.add(mercuryMesh);


//for planet venus
const venusOrbit = new THREE.Object3D();
venusOrbit.position.x = 12;
venusOrbit.position.z = 2;
solarSystem.add(venusOrbit);
objects.push(venusOrbit);
//for planet venus mesh
const venusMaterial = new THREE.MeshPhongMaterial({color: 0xFFFFF06, emissive: 0x112244});
const venusMesh = new THREE.Mesh(sphereGeometry, venusMaterial);
scene.add(venusMesh);
venusMesh.scale.set(1.7,1.7,1.7);
objects.push(venusMesh);
venusOrbit.add(venusMesh);
 

//for planer EARTH
const earthOrbit = new THREE.Object3D();
earthOrbit.position.x = 20;
earthOrbit.position.z = 10;
solarSystem.add(earthOrbit);
objects.push(earthOrbit);
//for earth mesh
const earthMaterial = new THREE.MeshPhongMaterial({color: 0x2233FF, emissive: 0x112244});
const earthMesh = new THREE.Mesh(sphereGeometry, earthMaterial);
earthMesh.scale.set(2,2,2);
//scene.add(earthMesh);
objects.push(earthMesh);
earthOrbit.add(earthMesh);

//for planet MARS
const marsOrbit = new THREE.Object3D();
marsOrbit.position.x = 30;
marsOrbit.position.z = 17;

solarSystem.add(marsOrbit);
objects.push(marsOrbit);
//for planet MARS mesh
const marsMaterial = new THREE.MeshPhongMaterial({color: 0xFF0000, emissive: 0x112244});
const marsMesh = new THREE.Mesh(sphereGeometry, marsMaterial);
marsMesh.scale.set(1,1,1);
scene.add(marsMesh);
objects.push(marsMesh);
marsOrbit.add(marsMesh);
 

//for sun mesh
const sunMaterial = new THREE.MeshPhongMaterial({emissive: 0xFFFF00});
const sunMesh = new THREE.Mesh(sphereGeometry, sunMaterial);
sunMesh.scale.set(5, 5, 5);  // make the sun large
solarSystem.add(sunMesh);
objects.push(sunMesh);


//for lighting of sun:
const color = 0xFFFFFF;
const intensity = 3;
const light = new THREE.PointLight(color, intensity);
scene.add(light);


function moon(){
    //for moon mesh:
    const moonOrbit = new THREE.Object3D();
    moonOrbit.position.x = 3.5;

    const moonMaterial = new THREE.MeshPhongMaterial({color: 0x888888, emissive: 0x222222});
    const moonMesh = new THREE.Mesh(sphereGeometry, moonMaterial);
    moonMesh.scale.set(.5, .5, .5);
    moonOrbit.add(moonMesh);
    objects.push(moonMesh);
    return moonOrbit;
}

earthOrbit.add(moon());
marsOrbit.add(moon());
sec_moon = moon();
sec_moon.position.z=-2;
marsOrbit.add(sec_moon);




function animate(){
    time = 0.05;
    requestAnimationFrame(animate);
    for(obj of objects){
        obj.rotation.y+=time;
        //time-=0.01;
    }
    renderer.render(scene,camera);
}
animate();