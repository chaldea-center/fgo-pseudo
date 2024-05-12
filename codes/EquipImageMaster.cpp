void __fastcall EquipImageMaster___ctor(EquipImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438E7D0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__);
    byte_438E7D0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    110,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__);
}