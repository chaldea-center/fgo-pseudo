void __fastcall SubEquipMaster___ctor(SubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEDF1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
    byte_42AEDF1 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    26,
    (const MethodInfo_23E223C *)Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
}