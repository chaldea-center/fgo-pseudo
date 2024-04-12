void __fastcall NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
        UserServantEntity_o *entity,
        UILabel_o *npNameLabel,
        UILabel_o *npRubyLabel,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x21
  int32_t SvtId; // w22
  int32_t DispSelectLimitCount; // w23
  int32_t ServantLimitCountSealAfter; // w23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  System_String_o *OverwriteTDName; // x0
  const MethodInfo *v12; // x2
  System_String_o *OverwriteTDRuby; // x0
  const MethodInfo *v14; // x2
  ServantLimitAddEntity_o *entitya; // [xsp+8h] [xbp-38h] BYREF

  v6 = entity;
  if ( (byte_42B0678 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    entity = (UserServantEntity_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0678 = 1;
  }
  entitya = 0LL;
  if ( !v6 )
    goto LABEL_19;
  SvtId = UserServantEntity__getSvtId(v6, 0LL);
  DispSelectLimitCount = UserServantEntity__getDispSelectLimitCount(v6, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !entity )
    goto LABEL_19;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)entity,
                                 SvtId,
                                 DispSelectLimitCount,
                                 0LL);
  entity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !entity )
    goto LABEL_19;
  entity = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)entity,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !entity )
    goto LABEL_19;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)entity,
          &entitya,
          SvtId,
          ServantLimitCountSealAfter,
          0LL) )
    return;
  entity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !entity )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)entity,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  entity = (UserServantEntity_o *)UserServantEntity__getSvtId(v6, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  entity = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int32_t)entity,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__IsNameTrue((ServantEntity_o *)entity, 0LL) )
    return;
  entity = (UserServantEntity_o *)entitya;
  if ( !entitya
    || (OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(entitya, 0LL),
        NoblePhantasmNameOverwriter__SetOverwriteText(npNameLabel, OverwriteTDName, v12),
        (entity = (UserServantEntity_o *)entitya) == 0LL) )
  {
LABEL_19:
    sub_B52A5C(entity, npNameLabel);
  }
  OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(entitya, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteText(npRubyLabel, OverwriteTDRuby, v14);
}


void __fastcall NoblePhantasmNameOverwriter__SetOverwriteText(
        UILabel_o *label,
        System_String_o *overwriteText,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1

  IsNullOrEmpty = System_String__IsNullOrEmpty(overwriteText, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !label )
      sub_B52A5C(IsNullOrEmpty, v6);
    UILabel__set_text(label, overwriteText, 0LL);
  }
}