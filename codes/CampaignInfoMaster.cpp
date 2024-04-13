void __fastcall CampaignInfoMaster___ctor(CampaignInfoMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB640 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EB640 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    226,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__);
}


CampaignInformation_array *__fastcall CampaignInfoMaster__GetInformationById(
        CampaignInfoMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  bool v7; // w8
  CampaignInformation_array *result; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB641 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__,
      id,
      (_DWORD)method,
      v3);
    byte_42EB641 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v7 )
  {
    if ( !entity )
      sub_B5D69C(0LL, v6);
    return (CampaignInformation_array *)entity->fields.age;
  }
  return result;
}