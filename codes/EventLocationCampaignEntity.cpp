void __fastcall EventLocationCampaignEntity___ctor(EventLocationCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1150 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B1150 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventLocationCampaignEntity__CreatePrimaryKey(
        EventLocationCampaignEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}