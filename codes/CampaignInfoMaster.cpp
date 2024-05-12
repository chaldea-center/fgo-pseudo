void __fastcall CampaignInfoMaster___ctor(CampaignInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438E3DD & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__);
    byte_438E3DD = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    226,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__);
}


CampaignInformation_array *__fastcall CampaignInfoMaster__GetInformationById(
        CampaignInfoMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  CampaignInformation_array *result; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E3DE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__);
    byte_438E3DE = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_B7769C(0LL, v5);
    return (CampaignInformation_array *)entity->fields.age;
  }
  return result;
}