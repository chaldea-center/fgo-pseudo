void __fastcall WarBoardUIUtility__ShowRuleDialog(System_Action_o *callbackFunc, const MethodInfo *method)
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
  System_Object_array *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x24
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t detailUrl; // x23
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x22
  NetworkManager_c *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x21
  System_String_o *v57; // x20
  System_String_o *v58; // x21
  __int64 v59; // x0
  _BOOL4 v60; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDA430 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&Method_WarBoardUIUtility_ShowRuleDialog__);
    sub_1C21E38(&WebViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_25556/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/);
    sub_1C21E38(&StringLiteral_15823/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/);
    byte_4BDA430 = 1;
  }
  v3 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_WarBoardUIUtility_ShowRuleDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          v10 = (WarBoardStageDetailMaster_o *)MasterData_object;
          MasterData_object = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0LL);
          if ( v10 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v10,
                                          MasterData_object,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0LL);
            if ( !WarBoardStageDetailEntity )
              return;
            v12 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
            WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0LL);
            v14 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 5LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_39819560(13, 0LL);
            if ( v14 )
            {
              v21 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C21F74(MasterData_object, v14->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !v14->max_length )
                goto LABEL_43;
              v14->m_Items[0] = (Il2CppObject *)v21;
              sub_1C21DDC((PartyOrganizationUtility_o *)v14->m_Items, v21, v15, v16, v17, v18, v19, v20);
              detailUrl = (int64_t)v12->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1C21F74(detailUrl, v14->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v14->max_length <= 1 )
                goto LABEL_43;
              v14->m_Items[1] = (Il2CppObject *)detailUrl;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[1], detailUrl, v22, v23, v24, v25, v26, v27);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id, v29, v30, v31);
              v38 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C21F74(MasterData_object, v14->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v14->max_length <= 2 )
                goto LABEL_43;
              v14->m_Items[2] = (Il2CppObject *)v38;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
              if ( !byte_4BDA4D3 )
              {
                sub_1C21E38(&NetworkManager_TypeInfo);
                byte_4BDA4D3 = 1;
              }
              v39 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v39 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v39->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_63145368(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0LL);
                v46 = MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1C21F74(MasterData_object, v14->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v14->max_length <= 3 )
                    goto LABEL_43;
                  v14->m_Items[3] = (Il2CppObject *)v46;
                  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
                  v60 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v60, v47, v48, v49);
                  v56 = MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1C21F74(MasterData_object, v14->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v14->max_length > 4 )
                    {
                      v14->m_Items[4] = (Il2CppObject *)v56;
                      sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[4], v56, v50, v51, v52, v53, v54, v55);
                      v57 = System_String__Format_63129984((System_String_o *)StringLiteral_25556/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v14, 0LL);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v58 = LocalizationManager__Get((System_String_o *)StringLiteral_15823/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                      WebViewManager__OpenView(v58, v57, callbackFunc, 0LL);
                      return;
                    }
LABEL_43:
                    sub_1C2209C(MasterData_object, v7);
                  }
                }
LABEL_44:
                v59 = sub_1C220B8();
                sub_1C21F60(v59, 0LL);
              }
            }
          }
        }
      }
    }
    sub_1C22094(MasterData_object, v7);
  }
}