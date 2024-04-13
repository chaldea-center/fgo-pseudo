void __fastcall PickupUserFollowerEntity___ctor(PickupUserFollowerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E83D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, v2, v3);
    byte_42E83D9 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall PickupUserFollowerEntity__CreatePrimaryKey(
        PickupUserFollowerEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}


FollowerInfo_o *__fastcall PickupUserFollowerEntity__getFollowerInfo(
        PickupUserFollowerEntity_o *this,
        int64_t followerId,
        int32_t followerType,
        const MethodInfo *method)
{
  struct FollowerInfo_array *followerInfo; // x10
  int max_length; // w8
  __int64 v6; // x9
  FollowerInfo_o **m_Items; // x10
  __int64 v8; // x0

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0LL;
  max_length = followerInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0LL;
  m_Items = followerInfo->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
    {
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
    }
    this = (PickupUserFollowerEntity_o *)m_Items[v6];
    if ( !this )
      sub_B5D69C(0LL, followerId);
    if ( this->fields.followerInfo == (struct FollowerInfo_array *)followerId
      && (followerType == -1 || HIDWORD(this->fields.expireAt) == followerType) )
    {
      break;
    }
    if ( (int)++v6 >= max_length )
      return 0LL;
  }
  return (FollowerInfo_o *)this;
}