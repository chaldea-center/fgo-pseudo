void __fastcall CampaignInfoEntity___ctor(CampaignInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E3D9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438E3D9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
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