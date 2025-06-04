void __fastcall EventItemDisplayReleaseEntity___ctor(EventItemDisplayReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01FF6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_int___ctor__, method);
    byte_4B01FF6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32ACB8C *)Method_DataEntityBase_int___ctor__);
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
  int32_t targetId; // w19
  int32_t condType; // w20

  if ( (byte_4B01FF5 & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, method);
    byte_4B01FF5 = 1;
  }
  condType = this->fields.condType;
  targetId = this->fields.targetId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, targetId, 0LL, 0, 0LL, 0LL);
}