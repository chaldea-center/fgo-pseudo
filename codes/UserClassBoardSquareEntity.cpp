void __fastcall UserClassBoardSquareEntity___ctor(UserClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1488 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B1488 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserClassBoardSquareEntity__CreatePK(
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  if ( (byte_42B1487 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_42B1487 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           classBoardBaseId,
           (const MethodInfo_1A4E080 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserClassBoardSquareEntity__CreatePrimaryKey(
        UserClassBoardSquareEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserClassBoardSquareEntity__CreatePK(this->fields.userId, this->fields.classBoardBaseId, v2);
}