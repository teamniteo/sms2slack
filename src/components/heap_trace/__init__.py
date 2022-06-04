import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

crash_ns = cg.esphome_ns.namespace('heap_trace')
HeapTrace = crash_ns.class_('HeapTrace', cg.Component)

DEPENDENCIES = ['logger']

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(HeapTrace),
}).extend(cv.polling_component_schema('1s'))

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)