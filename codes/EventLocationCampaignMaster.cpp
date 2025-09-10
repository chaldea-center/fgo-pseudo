void EventLocationCampaignMaster___ctor(EventLocationCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C272A5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int___ctor__);
    byte_4C272A5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    232,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int___ctor__);
}