void EffectEntity___ctor(EffectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3085A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D3085A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t EffectEntity__CreatePrimaryKey(EffectEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool EffectEntity__IsUseNodePositionOnly(
        EffectEntity_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t IntValue; // w22
  bool v8; // w23
  AuraEffectPosOverwriteMaster_o *Master_object; // x0
  __int64 v10; // x1
  AuraEffectPosOverwriteEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D30859 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_24798/*"useNodePositionOnly"*/);
    byte_4D30859 = 1;
  }
  entity = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24798/*"useNodePositionOnly"*/, 0, 0);
  v8 = IntValue == 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AuraEffectPosOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( AuraEffectPosOverwriteMaster__TryGetEntity(Master_object, &entity, this->fields.id, svtId, limitCount, 0) )
  {
    Master_object = (AuraEffectPosOverwriteMaster_o *)entity;
    if ( entity )
      return AuraEffectPosOverwriteEntity__IsUseNodePositionOnly(entity, IntValue == 1, 0);
LABEL_10:
    sub_1C93D2C(Master_object, v10);
  }
  return v8;
}


System_String_o *EffectEntity__getNodeName(EffectEntity_o *this, const MethodInfo *method)
{
  return this->fields.nodeName;
}


bool EffectEntity__isSe(EffectEntity_o *this, const MethodInfo *method)
{
  struct System_String_o *se; // x8

  se = this->fields.se;
  return se && se->fields._stringLength > 0;
}