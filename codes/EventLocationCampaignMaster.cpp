void __fastcall EventLocationCampaignMaster___ctor(EventLocationCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66B91 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int___ctor__, method);
    byte_4B66B91 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    230,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int___ctor__);
}