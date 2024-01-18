void __fastcall FriendshipEntity___ctor(FriendshipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A49D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A49D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall FriendshipEntity__CreatePK(int32_t id, int32_t rank, const MethodInfo *method)
{
  if ( (byte_418A49C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&rank);
    byte_418A49C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           rank,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall FriendshipEntity__CreatePrimaryKey(FriendshipEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return FriendshipEntity__CreatePK(this->fields.id, this->fields.rank, v2);
}