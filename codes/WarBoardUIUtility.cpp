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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x24
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_String_o *detailUrl; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  __int64 v35; // x22
  NetworkManager_c *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  __int64 v50; // x21
  System_String_o *v51; // x20
  System_String_o *v52; // x21
  __int64 v53; // x0
  int v54; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2E6F5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardUIUtility_ShowRuleDialog__);
    sub_1C93AD4(&WebViewManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_25535/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/);
    sub_1C93AD4(&StringLiteral_15656/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/);
    byte_4D2E6F5 = 1;
  }
  v3 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardUIUtility_ShowRuleDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
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
            v14 = sub_1C93B7C(object___TypeInfo, 5);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_42109268(13, 0);
            if ( v14 )
            {
              v21 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C93C10(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !*(_DWORD *)(v14 + 24) )
                goto LABEL_43;
              *(_QWORD *)(v14 + 32) = v21;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 32), v21, v15, v16, v17, v18, v19, v20);
              detailUrl = v12->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1C93C10(detailUrl, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( *(_DWORD *)(v14 + 24) <= 1u )
                goto LABEL_43;
              *(_QWORD *)(v14 + 40) = detailUrl;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 40), (int32_t)detailUrl, v22, v23, v24, v25, v26, v27);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id);
              v35 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C93C10(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( *(_DWORD *)(v14 + 24) <= 2u )
                goto LABEL_43;
              *(_QWORD *)(v14 + 48) = v35;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 48), v35, v29, v30, v31, v32, v33, v34);
              if ( !byte_4D2E796 )
              {
                sub_1C93AD4(&NetworkManager_TypeInfo);
                byte_4D2E796 = 1;
              }
              v36 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v36 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v36->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_64482432(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0);
                v43 = MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1C93C10(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v14 + 24) <= 3u )
                    goto LABEL_43;
                  *(_QWORD *)(v14 + 56) = v43;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 56), v43, v37, v38, v39, v40, v41, v42);
                  v54 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v54);
                  v50 = MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1C93C10(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v14 + 24) > 4u )
                    {
                      *(_QWORD *)(v14 + 64) = v50;
                      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 64), v50, v44, v45, v46, v47, v48, v49);
                      v51 = System_String__Format_64467168(
                              (System_String_o *)StringLiteral_25535/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/,
                              (System_Object_array *)v14,
                              0);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_15656/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                      WebViewManager__OpenView(v52, v51, callbackFunc, 0);
                      return;
                    }
LABEL_43:
                    sub_1C93D34(MasterData_object);
                  }
                }
LABEL_44:
                v53 = sub_1C93D50();
                sub_1C93BFC(v53, 0);
              }
            }
          }
        }
      }
    }
    sub_1C93D2C(MasterData_object, v7);
  }
}