void __fastcall PickupUserFollowerMaster___ctor(PickupUserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7F01 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long___ctor__, method);
    byte_4BC7F01 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    317,
    (const MethodInfo_32488B0 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long___ctor__);
}