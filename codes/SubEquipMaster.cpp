void __fastcall SubEquipMaster___ctor(SubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F7C20 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__, method);
    byte_40F7C20 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    25,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
}