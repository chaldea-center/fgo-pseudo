void __fastcall CampaignInfoMaster___ctor(CampaignInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AED0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__);
    byte_4A5AED0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    227,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__);
}


CampaignInformation_array *__fastcall CampaignInfoMaster__GetInformationById(
        CampaignInfoMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  CampaignInformation_array *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5AED1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__);
    byte_4A5AED1 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_311D988 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_1B8880C(0LL, v5);
    return (CampaignInformation_array *)entity[1].monitor;
  }
  return result;
}