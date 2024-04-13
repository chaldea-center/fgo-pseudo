void __fastcall EventItemDisplayReleaseEntity___ctor(EventItemDisplayReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9AFF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E9AFF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventItemDisplayReleaseEntity__CreatePrimaryKey(
        EventItemDisplayReleaseEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall EventItemDisplayReleaseEntity__IsCondEnable(
        EventItemDisplayReleaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t targetId; // w19
  int32_t condType; // w20

  if ( (byte_42E9AFE & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9AFE = 1;
  }
  condType = this->fields.condType;
  targetId = this->fields.targetId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, targetId, 0LL, 0, 0LL);
}