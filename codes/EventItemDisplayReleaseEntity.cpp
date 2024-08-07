void __fastcall EventItemDisplayReleaseEntity___ctor(EventItemDisplayReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEAFF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FEAFF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_49FEAFE & 1) == 0 )
  {
    sub_1B64A00(&CondType_TypeInfo, method);
    byte_49FEAFE = 1;
  }
  condType = this->fields.condType;
  targetId = this->fields.targetId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, targetId, 0LL, 0, 0LL);
}