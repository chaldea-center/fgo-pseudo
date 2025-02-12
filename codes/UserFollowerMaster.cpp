void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5420 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__, method);
    byte_4BB5420 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    98,
    (const MethodInfo_323885C *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}