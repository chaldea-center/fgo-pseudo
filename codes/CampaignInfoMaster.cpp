void CampaignInfoMaster___ctor(CampaignInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2700F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__);
    byte_4C2700F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    233,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int___ctor__);
}


CampaignInformation_array *CampaignInfoMaster__GetInformationById(
        CampaignInfoMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  CampaignInformation_array *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27010 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__);
    byte_4C27010 = 1;
  }
  entity = 0;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__);
  result = 0;
  if ( v6 )
  {
    if ( !entity )
      sub_1C2D6EC(0, v5);
    return *(CampaignInformation_array **)((char *)&off_18 + (_QWORD)entity);
  }
  return result;
}