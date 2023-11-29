void __fastcall NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
        UserServantEntity_o *entity,
        UILabel_o *npNameLabel,
        UILabel_o *npRubyLabel,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t SvtId; // w22
  int32_t DispSelectLimitCount; // w23
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t ServantLimitCountSealAfter; // w23
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v18; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x22
  int32_t v20; // w0
  ServantEntity_o *v21; // x0
  System_String_o *OverwriteTDName; // x0
  const MethodInfo *v23; // x2
  System_String_o *OverwriteTDRuby; // x0
  const MethodInfo *v25; // x2
  ServantLimitAddEntity_o *entitya; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9340 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, npNameLabel);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F9340 = 1;
  }
  entitya = 0LL;
  if ( !entity )
    goto LABEL_19;
  SvtId = UserServantEntity__getSvtId(entity, 0LL);
  DispSelectLimitCount = UserServantEntity__getDispSelectLimitCount(entity, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 SvtId,
                                 DispSelectLimitCount,
                                 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !ServantLimitAddMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entitya,
          SvtId,
          ServantLimitCountSealAfter,
          0LL) )
    return;
  v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v18 )
    goto LABEL_19;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v18,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = UserServantEntity__getSvtId(entity, 0LL);
  if ( !v19 )
    goto LABEL_19;
  v21 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v19,
                             v20,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v21 )
    goto LABEL_19;
  if ( !ServantEntity__IsNameTrue(v21, 0LL) )
    return;
  if ( !entitya
    || (OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(entitya, 0LL),
        NoblePhantasmNameOverwriter__SetOverwriteText(npNameLabel, OverwriteTDName, v23),
        !entitya) )
  {
LABEL_19:
    sub_B170D4();
  }
  OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(entitya, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteText(npRubyLabel, OverwriteTDRuby, v25);
}


void __fastcall NoblePhantasmNameOverwriter__SetOverwriteText(
        UILabel_o *label,
        System_String_o *overwriteText,
        const MethodInfo *method)
{
  if ( !System_String__IsNullOrEmpty(overwriteText, 0LL) )
  {
    if ( !label )
      sub_B170D4();
    UILabel__set_text(label, overwriteText, 0LL);
  }
}