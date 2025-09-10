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
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  __int64 v17; // x24
  const MethodInfo *v18; // x3
  struct System_String_o *detailUrl; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  const MethodInfo *v23; // x3
  __int64 v24; // x22
  NetworkManager_c *v25; // x0
  const MethodInfo *v26; // x3
  __int64 v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  const MethodInfo *v31; // x3
  __int64 v32; // x21
  System_String_o *v33; // x20
  System_String_o *v34; // x21
  __int64 v35; // x0
  int v36; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C25043 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardUIUtility_ShowRuleDialog__);
    sub_1C2D490(&WebViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_25186/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/);
    sub_1C2D490(&StringLiteral_15554/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/);
    byte_4C25043 = 1;
  }
  v3 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_WarBoardUIUtility_ShowRuleDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
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
            v14 = sub_1C2D538(object___TypeInfo, 5);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_41158236(13, 0);
            if ( v14 )
            {
              v17 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C2D5CC(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !*(_DWORD *)(v14 + 24) )
                goto LABEL_43;
              *(_QWORD *)(v14 + 32) = v17;
              sub_1C2D434((CGThumbnailListItem_o *)(v14 + 32), v17, v15, v16);
              detailUrl = v12->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1C2D5CC(detailUrl, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( *(_DWORD *)(v14 + 24) <= 1u )
                goto LABEL_43;
              *(_QWORD *)(v14 + 40) = detailUrl;
              sub_1C2D434((CGThumbnailListItem_o *)(v14 + 40), (int32_t)detailUrl, v15, v18);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id, v20, v21, v22);
              v24 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C2D5CC(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( *(_DWORD *)(v14 + 24) <= 2u )
                goto LABEL_43;
              *(_QWORD *)(v14 + 48) = v24;
              sub_1C2D434((CGThumbnailListItem_o *)(v14 + 48), v24, v15, v23);
              if ( !byte_4C250E6 )
              {
                sub_1C2D490(&NetworkManager_TypeInfo);
                byte_4C250E6 = 1;
              }
              v25 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v25 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v25->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_63514556(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0);
                v27 = MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1C2D5CC(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v14 + 24) <= 3u )
                    goto LABEL_43;
                  *(_QWORD *)(v14 + 56) = v27;
                  sub_1C2D434((CGThumbnailListItem_o *)(v14 + 56), v27, v15, v26);
                  v36 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v36, v28, v29, v30);
                  v32 = MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1C2D5CC(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v14 + 24) > 4u )
                    {
                      *(_QWORD *)(v14 + 64) = v32;
                      sub_1C2D434((CGThumbnailListItem_o *)(v14 + 64), v32, v15, v31);
                      v33 = System_String__Format_63499292(
                              (System_String_o *)StringLiteral_25186/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/,
                              (System_Object_array *)v14,
                              0);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_15554/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                      WebViewManager__OpenView(v34, v33, callbackFunc, 0);
                      return;
                    }
LABEL_43:
                    sub_1C2D6F4(MasterData_object, v7, v15);
                  }
                }
LABEL_44:
                v35 = sub_1C2D710();
                sub_1C2D5B8(v35, 0);
              }
            }
          }
        }
      }
    }
    sub_1C2D6EC(MasterData_object, v7);
  }
}