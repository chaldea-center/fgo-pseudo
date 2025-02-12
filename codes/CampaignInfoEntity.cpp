void __fastcall CampaignInfoEntity___ctor(CampaignInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4436 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_int___ctor__, method);
    byte_4BB4436 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3236140 *)Method_DataEntityBase_int___ctor__);
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