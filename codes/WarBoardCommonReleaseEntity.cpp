void __fastcall WarBoardCommonReleaseEntity___ctor(WarBoardCommonReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C25C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C25C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardCommonReleaseEntity__CreatePK(
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A5C25B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C25B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardCommonReleaseEntity__CreatePrimaryKey(
        WarBoardCommonReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardCommonReleaseEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}