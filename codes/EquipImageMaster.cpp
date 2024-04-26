void __fastcall EquipImageMaster___ctor(EquipImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_435506D & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__);
    byte_435506D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    110,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int___ctor__);
}