void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE4F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
    byte_4A5BE4F = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    94,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}