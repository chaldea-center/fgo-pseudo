void __fastcall EventLocationCampaignMaster___ctor(EventLocationCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEB02 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int___ctor__, method);
    byte_49FEB02 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    226,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int___ctor__);
}