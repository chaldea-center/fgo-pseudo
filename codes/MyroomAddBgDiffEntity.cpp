void MyroomAddBgDiffEntity___ctor(MyroomAddBgDiffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30F1B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30F1B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MyroomAddBgDiffEntity__CreatePK(
        int32_t overwriteId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4D30F1A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D30F1A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           overwriteId,
           type,
           priority,
           (const MethodInfo_31A3054 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MyroomAddBgDiffEntity__CreatePrimaryKey(MyroomAddBgDiffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MyroomAddBgDiffEntity__CreatePK(this->fields.overwriteId, this->fields.type, this->fields.priority, v2);
}


bool MyroomAddBgDiffEntity__IsOpen(MyroomAddBgDiffEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condValue; // x19

  if ( (byte_4D30F19 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    byte_4D30F19 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condValue = this->fields.condValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condValue, 0, 0, 0);
}