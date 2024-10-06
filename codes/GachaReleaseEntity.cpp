void __fastcall GachaReleaseEntity___ctor(GachaReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A70111 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, method);
    byte_4A70111 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaReleaseEntity__CreatePK(
        int32_t gachaId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_4A7010F & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4A7010F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           type,
           targetId,
           (const MethodInfo_2E8C8D0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall GachaReleaseEntity__CreatePrimaryKey(GachaReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaReleaseEntity__CreatePK(this->fields.gachaId, this->fields.type, this->fields.targetId, v2);
}


bool __fastcall GachaReleaseEntity__IsEnable(GachaReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w19
  int32_t targetId; // w21
  int64_t value; // x20

  if ( (byte_4A70110 & 1) == 0 )
  {
    sub_1B90010(&CondType_TypeInfo, method);
    byte_4A70110 = 1;
  }
  type = this->fields.type;
  if ( type != 46 && type != 1 )
    return 0;
  targetId = this->fields.targetId;
  value = this->fields.value;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(type, targetId, value, 0, 0LL, 0LL);
}