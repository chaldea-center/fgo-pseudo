void __fastcall EventLocationCampaignMaster___ctor(EventLocationCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C677 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int___ctor__);
    byte_438C677 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    225,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int___ctor__);
}