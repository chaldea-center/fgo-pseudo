void __fastcall CampaignInfoMaster___ctor(CampaignInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A089 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__, method);
    byte_418A089 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    225,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CampaignInformation_array *__fastcall CampaignInfoMaster__GetInformationById(
        CampaignInfoMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  CampaignInformation_array *result; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A08A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__, *(_QWORD *)&id);
    byte_418A08A = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_24E412C *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_B2C434(0LL, v5);
    return (CampaignInformation_array *)entity->fields.age;
  }
  return result;
}