void __fastcall CampaignInfoMaster___ctor(CampaignInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215D84 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__, method);
    byte_4215D84 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    225,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CampaignInformation_array *__fastcall CampaignInfoMaster__GetInformationById(
        CampaignInfoMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  bool v5; // w8
  CampaignInformation_array *result; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4215D85 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__, *(_QWORD *)&id);
    byte_4215D85 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v5 )
  {
    if ( !entity )
      sub_B0D97C(0LL);
    return (CampaignInformation_array *)entity->fields.age;
  }
  return result;
}