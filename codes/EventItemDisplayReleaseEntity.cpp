void __fastcall EventItemDisplayReleaseEntity___ctor(EventItemDisplayReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188D4A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4188D4A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4188D49 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    byte_4188D49 = 1;
  }
  condType = this->fields.condType;
  targetId = this->fields.targetId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, targetId, 0LL, 0, 0LL);
}