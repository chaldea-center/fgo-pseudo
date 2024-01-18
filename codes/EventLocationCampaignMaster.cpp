void __fastcall EventLocationCampaignMaster___ctor(EventLocationCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188D66 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int___ctor__, method);
    byte_4188D66 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    224,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int___ctor__);
}