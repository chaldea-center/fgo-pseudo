void WarBoardUIUtility__ShowRuleDialog(System_Action_o *callbackFunc, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarBoardManager_o *Instance; // x20
  __int64 MasterData_object; // x0
  __int64 v7; // x1
  WarBoardData_o *warBoardData_k__BackingField; // x22
  int winCondId; // w23
  WarBoardStageDetailMaster_o *v10; // x21
  WarBoardStageDetailEntity_o *WarBoardStageDetailEntity; // x0
  WarBoardStageDetailEntity_o *v12; // x23
  bool HasNewWinCond; // w21
  __int64 v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_String_o *detailUrl; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x22
  NetworkManager_c *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x21
  System_String_o *v31; // x20
  System_String_o *v32; // x21
  __int64 v33; // x0
  int v34; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CB3FF8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C6BA08(&Method_WarBoardUIUtility_ShowRuleDialog__);
    sub_1C6BA08(&WebViewManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_25319/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/);
    sub_1C6BA08(&StringLiteral_15554/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/);
    byte_4CB3FF8 = 1;
  }
  v3 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_WarBoardUIUtility_ShowRuleDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          v10 = (WarBoardStageDetailMaster_o *)MasterData_object;
          MasterData_object = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0);
          if ( v10 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v10,
                                          MasterData_object,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0);
            if ( !WarBoardStageDetailEntity )
              return;
            v12 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
            WarBoardManager__HideSimplePopup(Instance, 0, 0);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0);
            v14 = sub_1C6BAB0(object___TypeInfo, 5);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_41613056(13, 0);
            if ( v14 )
            {
              v17 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C6BB44(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !*(_DWORD *)(v14 + 24) )
                goto LABEL_43;
              *(_QWORD *)(v14 + 32) = v17;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 32), v17, v15, v16);
              detailUrl = v12->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1C6BB44(detailUrl, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( *(_DWORD *)(v14 + 24) <= 1u )
                goto LABEL_43;
              *(_QWORD *)(v14 + 40) = detailUrl;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 40), (int32_t)detailUrl, v18, v19);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id);
              v23 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C6BB44(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( *(_DWORD *)(v14 + 24) <= 2u )
                goto LABEL_43;
              *(_QWORD *)(v14 + 48) = v23;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 48), v23, v21, v22);
              if ( !byte_4CB409B )
              {
                sub_1C6BA08(&NetworkManager_TypeInfo);
                byte_4CB409B = 1;
              }
              v24 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v24 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v24->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_64023500(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0);
                v27 = MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1C6BB44(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v14 + 24) <= 3u )
                    goto LABEL_43;
                  *(_QWORD *)(v14 + 56) = v27;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 56), v27, v25, v26);
                  v34 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v34);
                  v30 = MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1C6BB44(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v14 + 24) > 4u )
                    {
                      *(_QWORD *)(v14 + 64) = v30;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 64), v30, v28, v29);
                      v31 = System_String__Format_64008236(
                              (System_String_o *)StringLiteral_25319/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/,
                              (System_Object_array *)v14,
                              0);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_15554/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                      WebViewManager__OpenView(v32, v31, callbackFunc, 0);
                      return;
                    }
LABEL_43:
                    sub_1C6BC68(MasterData_object);
                  }
                }
LABEL_44:
                v33 = sub_1C6BC84();
                sub_1C6BB30(v33, 0);
              }
            }
          }
        }
      }
    }
    sub_1C6BC60(MasterData_object, v7);
  }
}