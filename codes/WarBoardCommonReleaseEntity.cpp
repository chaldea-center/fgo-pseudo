void __fastcall WarBoardCommonReleaseEntity___ctor(WarBoardCommonReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43899F3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_43899F3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardCommonReleaseEntity__CreatePK(
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_43899F2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_43899F2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardCommonReleaseEntity__CreatePrimaryKey(
        WarBoardCommonReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardCommonReleaseEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}