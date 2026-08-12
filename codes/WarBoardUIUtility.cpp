void WarBoardUIUtility__ShowRuleDialog(System_Action_o *callbackFunc, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  WarBoardManager_o *Instance; // x20
  __int64 MasterData_object; // x0
  __int64 v9; // x1
  WarBoardData_o *warBoardData_k__BackingField; // x22
  WarBoardStageDetailMaster_o *v11; // x21
  int winCondId; // w23
  WarBoardStageDetailEntity_o *WarBoardStageDetailEntity; // x0
  WarBoardStageDetailEntity_o *v14; // x23
  bool HasNewWinCond; // w21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x24
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_String_o *detailUrl; // x23
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x22
  __int64 v41; // x2
  NetworkManager_c *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x22
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 v56; // x21
  __int64 v57; // x1
  __int64 v58; // x2
  System_String_o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  System_String_o *v62; // x21
  __int64 v63; // x0
  int v64; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596E46A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardUIUtility_ShowRuleDialog__);
    sub_2213A60(&WebViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_26610/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/);
    sub_2213A60(&StringLiteral_16168/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/);
    byte_596E46A = 1;
  }
  v3 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardUIUtility_ShowRuleDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          v11 = (WarBoardStageDetailMaster_o *)MasterData_object;
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          MasterData_object = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0);
          if ( v11 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v11,
                                          MasterData_object,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0);
            if ( !WarBoardStageDetailEntity )
              return;
            v14 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
            WarBoardManager__HideSimplePopup(Instance, 0, 0);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0);
            v18 = sub_2213B20(object___TypeInfo, 5);
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16, v17);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_48359816(13, 0);
            if ( v18 )
            {
              v25 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_2213BB4(MasterData_object, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !*(_DWORD *)(v18 + 24) )
                goto LABEL_43;
              *(_QWORD *)(v18 + 32) = v25;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 32), v25, v19, v20, v21, v22, v23, v24);
              detailUrl = v14->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_2213BB4(detailUrl, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( (*(_DWORD *)(v18 + 24) & 0xFFFFFFFE) == 0 )
                goto LABEL_43;
              *(_QWORD *)(v18 + 40) = detailUrl;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v18 + 40),
                (int32_t)detailUrl,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0);
              MasterData_object = j_il2cpp_value_box_0(qword_5984348, &id);
              v40 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_2213BB4(MasterData_object, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( *(_DWORD *)(v18 + 24) <= 2u )
                goto LABEL_43;
              *(_QWORD *)(v18 + 48) = v40;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 48), v40, v34, v35, v36, v37, v38, v39);
              if ( !byte_596E50A )
              {
                sub_2213A60(&NetworkManager_TypeInfo);
                byte_596E50A = 1;
              }
              v42 = NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v41);
                v42 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v42->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_75713584(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0);
                v49 = MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_2213BB4(MasterData_object, *(_QWORD *)(*(_QWORD *)v18 + 64LL))) != 0 )
                {
                  if ( (*(_DWORD *)(v18 + 24) & 0xFFFFFFFC) == 0 )
                    goto LABEL_43;
                  *(_QWORD *)(v18 + 56) = v49;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 56), v49, v43, v44, v45, v46, v47, v48);
                  v64 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(qword_5984348, &v64);
                  v56 = MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_2213BB4(MasterData_object, *(_QWORD *)(*(_QWORD *)v18 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v18 + 24) > 4u )
                    {
                      *(_QWORD *)(v18 + 64) = v56;
                      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 64), v56, v50, v51, v52, v53, v54, v55);
                      v59 = System_String__Format_75698016(
                              (System_String_o *)StringLiteral_26610/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/,
                              (System_Object_array *)v18,
                              0);
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57, v58);
                      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_16168/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0);
                      if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v60, v61);
                      WebViewManager__OpenView(v62, v59, callbackFunc, 0);
                      return;
                    }
LABEL_43:
                    sub_2213CE4(MasterData_object);
                  }
                }
LABEL_44:
                v63 = sub_2213D00(MasterData_object, v26);
                sub_2213BA0(v63, 0);
              }
            }
          }
        }
      }
    }
    sub_2213CDC(MasterData_object, v9);
  }
}