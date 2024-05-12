void __fastcall CommonReleaseEntity___ctor(CommonReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4387583 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4387583 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.condGroup = 0LL;
  *(_QWORD *)&this->fields.condId = 0LL;
}


System_String_o *__fastcall CommonReleaseEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4387584 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4387584 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CommonReleaseEntity__CreatePrimaryKey(
        CommonReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CommonReleaseEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}