void __fastcall SubEquipMaster___ctor(SubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A59D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
    byte_438A59D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    26,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
}