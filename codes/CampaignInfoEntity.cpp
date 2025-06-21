void __fastcall CampaignInfoEntity___ctor(CampaignInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C264 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1C264 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CampaignInfoEntity__CreatePrimaryKey(CampaignInfoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


CampaignInformation_array *__fastcall CampaignInfoEntity__GetInfromation(
        CampaignInfoEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.script;
}