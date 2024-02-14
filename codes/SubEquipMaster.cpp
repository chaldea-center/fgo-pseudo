void __fastcall SubEquipMaster___ctor(SubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42135D5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__, method);
    byte_42135D5 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    25,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
}