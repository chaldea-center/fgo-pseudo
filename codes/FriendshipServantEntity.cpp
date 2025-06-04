void __fastcall FriendshipServantEntity___ctor(FriendshipServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B0324B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B0324B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall FriendshipServantEntity__CreatePK(int32_t svtId, int32_t rank, const MethodInfo *method)
{
  if ( (byte_4B0324A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&rank);
    byte_4B0324A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           rank,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall FriendshipServantEntity__CreatePrimaryKey(
        FriendshipServantEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return FriendshipServantEntity__CreatePK(this->fields.svtId, this->fields.rank, v2);
}