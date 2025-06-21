void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D352 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__, method);
    byte_4B1D352 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    98,
    (const MethodInfo_32C8038 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}