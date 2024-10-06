void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70B5E & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__, method);
    byte_4A70B5E = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    94,
    (const MethodInfo_312C714 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}