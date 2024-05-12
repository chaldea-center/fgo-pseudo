void __fastcall EventBonusFilterGroupInfoMaster___ctor(
        EventBonusFilterGroupInfoMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E83C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int___ctor__);
    byte_438E83C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    276,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int___ctor__);
}