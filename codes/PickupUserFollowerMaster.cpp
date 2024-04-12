void __fastcall PickupUserFollowerMaster___ctor(PickupUserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AF7C4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long___ctor__);
    byte_42AF7C4 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    312,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long___ctor__);
}