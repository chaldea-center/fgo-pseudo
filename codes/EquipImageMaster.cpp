void __fastcall EquipImageMaster___ctor(EquipImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC4ED & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__, method);
    byte_40FC4ED = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    109,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__);
}