void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E3469 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__, method);
    byte_48E3469 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    93,
    (const MethodInfo_2FE6BB8 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}