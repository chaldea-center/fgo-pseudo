void __fastcall PickupUserFollowerMaster___ctor(PickupUserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186AFE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long___ctor__, method);
    byte_4186AFE = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    311,
    (const MethodInfo_24E425C *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long___ctor__);
}