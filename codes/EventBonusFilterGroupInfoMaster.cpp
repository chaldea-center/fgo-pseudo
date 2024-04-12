void __fastcall EventBonusFilterGroupInfoMaster___ctor(
        EventBonusFilterGroupInfoMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B2695 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int___ctor__);
    byte_42B2695 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    276,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int___ctor__);
}