void __fastcall UserClassBoardSquareEntity___ctor(UserClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6E4F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6E4F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserClassBoardSquareEntity__CreatePK(
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  if ( (byte_4AB6E4E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&classBoardBaseId);
    byte_4AB6E4E = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           classBoardBaseId,
           (const MethodInfo_2EC26A0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserClassBoardSquareEntity__CreatePrimaryKey(
        UserClassBoardSquareEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserClassBoardSquareEntity__CreatePK(this->fields.userId, this->fields.classBoardBaseId, v2);
}