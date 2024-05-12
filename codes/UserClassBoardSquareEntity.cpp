void __fastcall UserClassBoardSquareEntity___ctor(UserClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438CAB5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438CAB5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserClassBoardSquareEntity__CreatePK(
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  if ( (byte_438CAB4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_438CAB4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           classBoardBaseId,
           (const MethodInfo_1D172EC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserClassBoardSquareEntity__CreatePrimaryKey(
        UserClassBoardSquareEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserClassBoardSquareEntity__CreatePK(this->fields.userId, this->fields.classBoardBaseId, v2);
}