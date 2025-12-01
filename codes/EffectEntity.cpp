void EffectEntity___ctor(EffectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7251 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC7251 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4CC7250 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&StringLiteral_24608/*"useNodePositionOnly"*/);
    byte_4CC7250 = 1;
  }
  entity = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24608/*"useNodePositionOnly"*/, 0, 0);
  v8 = IntValue == 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AuraEffectPosOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( AuraEffectPosOverwriteMaster__TryGetEntity(Master_object, &entity, this->fields.id, svtId, limitCount, 0) )
  {
    Master_object = (AuraEffectPosOverwriteMaster_o *)entity;
    if ( entity )
      return AuraEffectPosOverwriteEntity__IsUseNodePositionOnly(entity, IntValue == 1, 0);
LABEL_10:
    sub_1C71608(Master_object, v10);
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