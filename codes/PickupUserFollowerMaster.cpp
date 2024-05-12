void __fastcall PickupUserFollowerMaster___ctor(PickupUserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438B324 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long___ctor__);
    byte_438B324 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    312,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long___ctor__);
}