void __fastcall GachaReleaseEntity___ctor(GachaReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC628 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC628 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaReleaseEntity__CreatePK(
        int32_t gachaId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_42EC626 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, type, targetId, method);
    byte_42EC626 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           type,
           targetId,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall GachaReleaseEntity__CreatePrimaryKey(GachaReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaReleaseEntity__CreatePK(this->fields.gachaId, this->fields.type, this->fields.targetId, v2);
}


bool __fastcall GachaReleaseEntity__IsEnable(GachaReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t type; // w19
  int32_t targetId; // w21
  int64_t value; // x20

  if ( (byte_42EC627 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC627 = 1;
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