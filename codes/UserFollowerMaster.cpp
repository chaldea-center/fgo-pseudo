void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__, method, v2);
    byte_4B16F04 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    94,
    (const MethodInfo_31B2FAC *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}