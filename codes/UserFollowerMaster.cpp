void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF1CF & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__, method);
    byte_49FF1CF = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    94,
    (const MethodInfo_30D62EC *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}