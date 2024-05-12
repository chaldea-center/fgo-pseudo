void __fastcall NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
        UserServantEntity_o *entity,
        UILabel_o *npNameLabel,
        UILabel_o *npRubyLabel,
        const MethodInfo *method)
{
  int32_t SvtId; // w22
  int32_t DispSelectLimitCount; // w0
  const MethodInfo *v9; // x4

  if ( !entity )
    sub_B7769C(0LL, npNameLabel);
  SvtId = UserServantEntity__getSvtId(entity, 0LL);
  DispSelectLimitCount = UserServantEntity__getDispSelectLimitCount(entity, 0, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel_26238760(SvtId, DispSelectLimitCount, npNameLabel, npRubyLabel, v9);
}


void __fastcall NoblePhantasmNameOverwriter__SetOverwriteNpLabel_26238760(
        int32_t servantId,
        int32_t dispLimitCount,
        UILabel_o *npNameLabel,
        UILabel_o *npRubyLabel,
        const MethodInfo *method)
{
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *OverwriteTDName; // x0
  const MethodInfo *v13; // x2
  System_String_o *OverwriteTDRuby; // x0
  const MethodInfo *v15; // x2
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438BA7E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BA7E = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 servantId,
                                 dispLimitCount,
                                 0LL);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Master_WarQuestSelectionMaster,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          servantId,
          ServantLimitCountSealAfter,
          0LL) )
    return;
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Master_WarQuestSelectionMaster,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  servantId,
                                                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( !ServantEntity__IsNameTrue((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL) )
    return;
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)entity;
  if ( !entity
    || (OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL),
        NoblePhantasmNameOverwriter__SetOverwriteText(npNameLabel, OverwriteTDName, v13),
        (Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)entity) == 0LL) )
  {
LABEL_18:
    sub_B7769C(Master_WarQuestSelectionMaster, v10);
  }
  OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteText(npRubyLabel, OverwriteTDRuby, v15);
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
      sub_B7769C(IsNullOrEmpty, v6);
    UILabel__set_text(label, overwriteText, 0LL);
  }
}