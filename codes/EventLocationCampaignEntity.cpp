void __fastcall EventLocationCampaignEntity___ctor(EventLocationCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C676 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438C676 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventLocationCampaignEntity__CreatePrimaryKey(
        EventLocationCampaignEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}