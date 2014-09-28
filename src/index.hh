<?hh

require 'Vector2.hh';
require 'Entity.hh';
require 'RenderSystem.hh';
require 'Engine.hh';
require 'Canvas.hh';

$engine = new Engine();

$asset = new Asset("yoshi.png");
$entity = new Entity($asset, 100, 100);

$engine->getRenderSystem()->addEntity($entity);

return $engine->render();
