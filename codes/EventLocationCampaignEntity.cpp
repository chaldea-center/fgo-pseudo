void __fastcall EventLocationCampaignEntity___ctor(EventLocationCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5D26 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB5D26 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventLocationCampaignEntity__CreatePrimaryKey(
        EventLocationCampaignEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}