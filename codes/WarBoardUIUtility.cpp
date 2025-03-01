void __fastcall WarBoardUIUtility__ShowRuleDialog(System_Action_o *callbackFunc, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  WarBoardManager_o *Instance; // x20
  __int64 MasterData_object; // x0
  __int64 v18; // x1
  WarBoardData_o *warBoardData_k__BackingField; // x22
  int winCondId; // w23
  WarBoardStageDetailMaster_o *v21; // x21
  WarBoardStageDetailEntity_o *WarBoardStageDetailEntity; // x0
  WarBoardStageDetailEntity_o *v23; // x23
  bool HasNewWinCond; // w21
  System_Object_array *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x24
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t detailUrl; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x22
  NetworkManager_c *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x22
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x21
  System_String_o *v68; // x20
  System_String_o *v69; // x21
  __int64 v70; // x0
  _BOOL4 v71; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BFB61F & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, method);
    sub_1C2E12C(&int_TypeInfo, v3);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v4);
    sub_1C2E12C(&NetworkManager_TypeInfo, v5);
    sub_1C2E12C(&object___TypeInfo, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1C2E12C(&Method_WarBoardUIUtility_ShowRuleDialog__, v10);
    sub_1C2E12C(&WebViewManager_TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_25582/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v12);
    sub_1C2E12C(&StringLiteral_15836/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, v13);
    byte_4BFB61F = 1;
  }
  v14 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C2E144(Method_WarBoardUIUtility_ShowRuleDialog__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C2E110(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          v21 = (WarBoardStageDetailMaster_o *)MasterData_object;
          MasterData_object = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0LL);
          if ( v21 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v21,
                                          MasterData_object,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0LL);
            if ( !WarBoardStageDetailEntity )
              return;
            v23 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
            WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0LL);
            v25 = (System_Object_array *)sub_1C2E1D4(object___TypeInfo, 5LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_39890152(13, 0LL);
            if ( v25 )
            {
              v32 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C2E268(MasterData_object, v25->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !v25->max_length )
                goto LABEL_43;
              v25->m_Items[0] = (Il2CppObject *)v32;
              sub_1C2E0D0((PartyOrganizationUtility_o *)v25->m_Items, v32, v26, v27, v28, v29, v30, v31);
              detailUrl = (int64_t)v23->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1C2E268(detailUrl, v25->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v25->max_length <= 1 )
                goto LABEL_43;
              v25->m_Items[1] = (Il2CppObject *)detailUrl;
              sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[1], detailUrl, v33, v34, v35, v36, v37, v38);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id, v40, v41, v42);
              v49 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1C2E268(MasterData_object, v25->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v25->max_length <= 2 )
                goto LABEL_43;
              v25->m_Items[2] = (Il2CppObject *)v49;
              sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[2], v49, v43, v44, v45, v46, v47, v48);
              if ( !byte_4BFB6C2 )
              {
                sub_1C2E12C(&NetworkManager_TypeInfo, v18);
                byte_4BFB6C2 = 1;
              }
              v50 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v50 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v50->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_63265476(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0LL);
                v57 = MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1C2E268(MasterData_object, v25->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v25->max_length <= 3 )
                    goto LABEL_43;
                  v25->m_Items[3] = (Il2CppObject *)v57;
                  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[3], v57, v51, v52, v53, v54, v55, v56);
                  v71 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v71, v58, v59, v60);
                  v67 = MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1C2E268(MasterData_object, v25->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v25->max_length > 4 )
                    {
                      v25->m_Items[4] = (Il2CppObject *)v67;
                      sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[4], v67, v61, v62, v63, v64, v65, v66);
                      v68 = System_String__Format_63250092((System_String_o *)StringLiteral_25582/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v25, 0LL);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_15836/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                      WebViewManager__OpenView(v69, v68, callbackFunc, 0LL);
                      return;
                    }
LABEL_43:
                    sub_1C2E390(MasterData_object, v18);
                  }
                }
LABEL_44:
                v70 = sub_1C2E3AC();
                sub_1C2E254(v70, 0LL);
              }
            }
          }
        }
      }
    }
    sub_1C2E388(MasterData_object, v18);
  }
}