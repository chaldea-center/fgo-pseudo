void MyroomAddBgDiffEntity___ctor(MyroomAddBgDiffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970DBA & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970DBA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MyroomAddBgDiffEntity__CreatePK(
        int32_t overwriteId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_5970DB9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5970DB9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           overwriteId,
           type,
           priority,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MyroomAddBgDiffEntity__CreatePrimaryKey(MyroomAddBgDiffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MyroomAddBgDiffEntity__CreatePK(this->fields.overwriteId, this->fields.type, this->fields.priority, v2);
}


bool MyroomAddBgDiffEntity__IsOpen(MyroomAddBgDiffEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condId; // w21
  int64_t condValue; // x19

  if ( (byte_5970DB8 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_5970DB8 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condValue = this->fields.condValue;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condId, condValue, 0, 0, 0);
}