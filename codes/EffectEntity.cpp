void EffectEntity___ctor(EffectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59384E2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59384E2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t EffectEntity__CreatePrimaryKey(EffectEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool EffectEntity__IsTurnAnimation(EffectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59384E1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25486/*"turnAnimation"*/);
    byte_59384E1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25486/*"turnAnimation"*/, 0, 0) == 1;
}


bool EffectEntity__IsUseNodePositionOnly(
        EffectEntity_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  int32_t IntValue; // w22
  bool v10; // w23
  AuraEffectPosOverwriteMaster_o *Master_object; // x0
  __int64 v12; // x1
  AuraEffectPosOverwriteEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59384E0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_25784/*"useNodePositionOnly"*/);
    byte_59384E0 = 1;
  }
  script = this->fields.script;
  entity = 0;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_25784/*"useNodePositionOnly"*/, 0, 0);
  v10 = IntValue == 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  Master_object = (AuraEffectPosOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( AuraEffectPosOverwriteMaster__TryGetEntity(Master_object, &entity, this->fields.id, svtId, limitCount, 0) )
  {
    Master_object = (AuraEffectPosOverwriteMaster_o *)entity;
    if ( entity )
      return AuraEffectPosOverwriteEntity__IsUseNodePositionOnly(entity, IntValue == 1, 0);
LABEL_10:
    sub_21FFECC(Master_object, v12);
  }
  return v10;
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