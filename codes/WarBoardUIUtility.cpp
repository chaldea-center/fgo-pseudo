void WarBoardUIUtility__ShowRuleDialog(System_Action_o *callbackFunc, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarBoardManager_o *Instance; // x20
  __int64 MasterData_object; // x0
  WarBoardData_o *warBoardData_k__BackingField; // x22
  int winCondId; // w23
  WarBoardStageDetailMaster_o *v9; // x21
  WarBoardStageDetailEntity_o *WarBoardStageDetailEntity; // x0
  WarBoardStageDetailEntity_o *v11; // x23
  bool HasNewWinCond; // w21
  __int64 v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_String_o *detailUrl; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x22
  NetworkManager_c *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x22
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x21
  System_String_o *v42; // x20
  System_String_o *v43; // x21
  __int64 v44; // x0
  int v45; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C40D03 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&Method_WarBoardUIUtility_ShowRuleDialog__);
    sub_1C37058(&WebViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_25209/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/);
    sub_1C37058(&StringLiteral_15557/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/);
    byte_4C40D03 = 1;
  }
  v3 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_WarBoardUIUtility_ShowRuleDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          v9 = (WarBoardStageDetailMaster_o *)MasterData_object;
          MasterData_object = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0);
          if ( v9 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v9,
                                          MasterData_object,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0);
            if ( !WarBoardStageDetailEntity )
              return;
            v11 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
            WarBoardManager__HideSimplePopup(Instance, 0, 0);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0);
            v13 = sub_1C37100(object___TypeInfo, 5);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_41379660(13, 0);
            if ( v13 )
            {
              v16 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C37194(MasterData_object, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !*(_DWORD *)(v13 + 24) )
                goto LABEL_43;
              *(_QWORD *)(v13 + 32) = v16;
              sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), v16, v14, v15);
              detailUrl = v11->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1C37194(detailUrl, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( *(_DWORD *)(v13 + 24) <= 1u )
                goto LABEL_43;
              *(_QWORD *)(v13 + 40) = detailUrl;
              sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 40), (int32_t)detailUrl, v17, v18);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id, v20, v21, v22, v23, v24, v25);
              v28 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C37194(MasterData_object, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( *(_DWORD *)(v13 + 24) <= 2u )
                goto LABEL_43;
              *(_QWORD *)(v13 + 48) = v28;
              sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 48), v28, v26, v27);
              if ( !byte_4C40DA6 )
              {
                sub_1C37058(&NetworkManager_TypeInfo);
                byte_4C40DA6 = 1;
              }
              v29 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v29 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v29->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_63618348(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0);
                v32 = MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1C37194(MasterData_object, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v13 + 24) <= 3u )
                    goto LABEL_43;
                  *(_QWORD *)(v13 + 56) = v32;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 56), v32, v30, v31);
                  v45 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v45, v33, v34, v35, v36, v37, v38);
                  v41 = MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1C37194(MasterData_object, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v13 + 24) > 4u )
                    {
                      *(_QWORD *)(v13 + 64) = v41;
                      sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 64), v41, v39, v40);
                      v42 = System_String__Format_63603084(
                              (System_String_o *)StringLiteral_25209/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/,
                              (System_Object_array *)v13,
                              0);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_15557/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                      WebViewManager__OpenView(v43, v42, callbackFunc, 0);
                      return;
                    }
LABEL_43:
                    sub_1C372BC(MasterData_object);
                  }
                }
LABEL_44:
                v44 = sub_1C372D8();
                sub_1C37180(v44, 0);
              }
            }
          }
        }
      }
    }
    sub_1C372B4(MasterData_object);
  }
}