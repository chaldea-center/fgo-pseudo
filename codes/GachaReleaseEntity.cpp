void __fastcall GachaReleaseEntity___ctor(GachaReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B3B38 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B3B38 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaReleaseEntity__CreatePK(
        int32_t gachaId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_42B3B36 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B3B36 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           type,
           targetId,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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

  if ( (byte_42B3B37 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    byte_42B3B37 = 1;
  }
  type = this->fields.type;
  if ( type != 46 && type != 1 )
    return 0;
  targetId = this->fields.targetId;
  value = this->fields.value;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(type, targetId, value, 0, 0LL);
}