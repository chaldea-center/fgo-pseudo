void GachaReleaseEntity___ctor(GachaReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC76E1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC76E1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaReleaseEntity__CreatePK(
        int32_t gachaId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_4CC76DF & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CC76DF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           type,
           targetId,
           (const MethodInfo_3149724 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *GachaReleaseEntity__CreatePrimaryKey(GachaReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaReleaseEntity__CreatePK(this->fields.gachaId, this->fields.type, this->fields.targetId, v2);
}


bool GachaReleaseEntity__IsEnable(GachaReleaseEntity_o *this, const MethodInfo *method)
{
  int type; // w20
  int32_t targetId; // w21
  int64_t value; // x19
  int32_t v7; // w19

  if ( (byte_4CC76E0 & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    byte_4CC76E0 = 1;
  }
  type = this->fields.type;
  if ( type <= 46 )
  {
    if ( type != 1 && type != 46 )
      return 0;
LABEL_9:
    targetId = this->fields.targetId;
    value = this->fields.value;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpen(type, targetId, value, 0, 0, 0);
  }
  if ( type != 113 )
  {
    if ( type != 247 )
      return 0;
    goto LABEL_9;
  }
  v7 = this->fields.targetId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCommonRelease(v7, 0);
}