void __fastcall PickupUserFollowerMaster___ctor(PickupUserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEF35 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long___ctor__, method);
    byte_49FEF35 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    313,
    (const MethodInfo_30D6904 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long___ctor__);
}