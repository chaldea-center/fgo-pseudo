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
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x22
  NetworkManager_c *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x21
  System_String_o *v43; // x20
  System_String_o *v44; // x21
  __int64 v45; // x0
  int v46; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C54AA0 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&Method_WarBoardUIUtility_ShowRuleDialog__);
    sub_1C3E564(&WebViewManager_TypeInfo);
    sub_1C3E564(&StringLiteral_25229/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/);
    sub_1C3E564(&StringLiteral_15567/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/);
    byte_4C54AA0 = 1;
  }
  v3 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_WarBoardUIUtility_ShowRuleDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
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
            v14 = sub_1C3E60C(object___TypeInfo, 5);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_41428188(13, 0);
            if ( v14 )
            {
              v17 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C3E6A0(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !*(_DWORD *)(v14 + 24) )
                goto LABEL_43;
              *(_QWORD *)(v14 + 32) = v17;
              sub_1C3E508((CGThumbnailListItem_o *)(v14 + 32), v17, v15, v16);
              detailUrl = v12->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1C3E6A0(detailUrl, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( *(_DWORD *)(v14 + 24) <= 1u )
                goto LABEL_43;
              *(_QWORD *)(v14 + 40) = detailUrl;
              sub_1C3E508((CGThumbnailListItem_o *)(v14 + 40), (int32_t)detailUrl, v18, v19);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id, v21, v22, v23, v24, v25, v26);
              v29 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C3E6A0(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( *(_DWORD *)(v14 + 24) <= 2u )
                goto LABEL_43;
              *(_QWORD *)(v14 + 48) = v29;
              sub_1C3E508((CGThumbnailListItem_o *)(v14 + 48), v29, v27, v28);
              if ( !byte_4C54B43 )
              {
                sub_1C3E564(&NetworkManager_TypeInfo);
                byte_4C54B43 = 1;
              }
              v30 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v30 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v30->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_63693160(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0);
                v33 = MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1C3E6A0(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v14 + 24) <= 3u )
                    goto LABEL_43;
                  *(_QWORD *)(v14 + 56) = v33;
                  sub_1C3E508((CGThumbnailListItem_o *)(v14 + 56), v33, v31, v32);
                  v46 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v46, v34, v35, v36, v37, v38, v39);
                  v42 = MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1C3E6A0(MasterData_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v14 + 24) > 4u )
                    {
                      *(_QWORD *)(v14 + 64) = v42;
                      sub_1C3E508((CGThumbnailListItem_o *)(v14 + 64), v42, v40, v41);
                      v43 = System_String__Format_63677896(
                              (System_String_o *)StringLiteral_25229/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/,
                              (System_Object_array *)v14,
                              0);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_15567/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                      WebViewManager__OpenView(v44, v43, callbackFunc, 0);
                      return;
                    }
LABEL_43:
                    sub_1C3E7C8(MasterData_object, v7);
                  }
                }
LABEL_44:
                v45 = sub_1C3E7E4();
                sub_1C3E68C(v45, 0);
              }
            }
          }
        }
      }
    }
    sub_1C3E7C0(MasterData_object, v7);
  }
}