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
  __int64 v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  WarBoardManager_o *Instance; // x20
  __int64 MasterData_WarQuestSelectionMaster; // x0
  WarBoardData_o *warBoardData_k__BackingField; // x22
  int winCondId; // w23
  WarBoardStageDetailMaster_o *v21; // x21
  WarBoardStageDetailEntity_o *WarBoardStageDetailEntity; // x0
  WarBoardStageDetailEntity_o *v23; // x23
  bool HasNewWinCond; // w21
  System_Object_array *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x24
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **detailUrl; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x22
  __int64 v47; // x1
  NetworkManager_c *v48; // x0
  System_String_o *gameServerAddress; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x21
  System_String_o *v64; // x20
  System_String_o *v65; // x21
  __int64 v66; // x0
  __int64 v67; // x0
  _BOOL4 v68; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4215652 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v3);
    sub_B0D8A4(&int_TypeInfo, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&object___TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B0D8A4(&Method_WarBoardUIUtility_ShowRuleDialog__, v11);
    sub_B0D8A4(&WebViewManager_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_23734/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v13);
    sub_B0D8A4(&StringLiteral_15418/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, v14);
    byte_4215652 = 1;
  }
  v15 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 75) & 2) != 0 )
    v15 = (_QWORD *)sub_B0D8AC(Method_WarBoardUIUtility_ShowRuleDialog__);
  v16 = (System_Reflection_MethodBase_o *)sub_B0D888(v15, v15[3]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_WarQuestSelectionMaster )
    {
      MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          v21 = (WarBoardStageDetailMaster_o *)MasterData_WarQuestSelectionMaster;
          MasterData_WarQuestSelectionMaster = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0LL);
          if ( v21 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v21,
                                          MasterData_WarQuestSelectionMaster,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0LL);
            if ( !WarBoardStageDetailEntity )
              return;
            v23 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
            WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0LL);
            v25 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 5LL);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            MasterData_WarQuestSelectionMaster = (__int64)NetworkManager__getWebViewAddress_25518740(13, 0LL);
            if ( v25 )
            {
              v32 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
              if ( MasterData_WarQuestSelectionMaster )
              {
                MasterData_WarQuestSelectionMaster = sub_B0D964(
                                                       MasterData_WarQuestSelectionMaster,
                                                       v25->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( !v25->max_length )
                goto LABEL_50;
              v25->m_Items[0] = (Il2CppObject *)v32;
              sub_B0D840((BattleServantConfConponent_o *)v25->m_Items, v32, v26, v27, v28, v29, v30, v31);
              detailUrl = (System_Int32_array **)v23->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_WarQuestSelectionMaster = sub_B0D964(detailUrl, v25->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( v25->max_length <= 1 )
                goto LABEL_50;
              v25->m_Items[1] = (Il2CppObject *)detailUrl;
              sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[1], detailUrl, v33, v34, v35, v36, v37, v38);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              MasterData_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &id);
              v46 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
              if ( MasterData_WarQuestSelectionMaster )
              {
                MasterData_WarQuestSelectionMaster = sub_B0D964(
                                                       MasterData_WarQuestSelectionMaster,
                                                       v25->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( v25->max_length <= 2 )
                goto LABEL_50;
              v25->m_Items[2] = (Il2CppObject *)v46;
              sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[2], v46, v40, v41, v42, v43, v44, v45);
              if ( !byte_4215718 )
              {
                sub_B0D8A4(&NetworkManager_TypeInfo, v47);
                byte_4215718 = 1;
              }
              v48 = NetworkManager_TypeInfo;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v48 = NetworkManager_TypeInfo;
              }
              gameServerAddress = v48->static_fields->gameServerAddress;
              MasterData_WarQuestSelectionMaster = sub_B0D8BC(char___TypeInfo, 1LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                if ( !*(_DWORD *)(MasterData_WarQuestSelectionMaster + 24) )
                  goto LABEL_50;
                *(_WORD *)(MasterData_WarQuestSelectionMaster + 32) = 47;
                if ( gameServerAddress )
                {
                  MasterData_WarQuestSelectionMaster = (__int64)System_String__TrimEnd(
                                                                  gameServerAddress,
                                                                  (System_Char_array *)MasterData_WarQuestSelectionMaster,
                                                                  0LL);
                  v56 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
                  if ( !MasterData_WarQuestSelectionMaster
                    || (MasterData_WarQuestSelectionMaster = sub_B0D964(
                                                               MasterData_WarQuestSelectionMaster,
                                                               v25->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v25->max_length <= 3 )
                      goto LABEL_50;
                    v25->m_Items[3] = (Il2CppObject *)v56;
                    sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[3], v56, v50, v51, v52, v53, v54, v55);
                    v68 = HasNewWinCond;
                    MasterData_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &v68);
                    v63 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
                    if ( !MasterData_WarQuestSelectionMaster
                      || (MasterData_WarQuestSelectionMaster = sub_B0D964(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 v25->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( v25->max_length > 4 )
                      {
                        v25->m_Items[4] = (Il2CppObject *)v63;
                        sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[4], v63, v57, v58, v59, v60, v61, v62);
                        v64 = System_String__Format_43928628((System_String_o *)StringLiteral_23734/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v25, 0LL);
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_15418/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                        if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !WebViewManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                        }
                        WebViewManager__OpenView(v65, v64, callbackFunc, 0LL);
                        return;
                      }
LABEL_50:
                      v66 = sub_B0D9A8(MasterData_WarQuestSelectionMaster);
                      sub_B0D948(v66, 0LL);
                    }
                  }
LABEL_51:
                  v67 = sub_B0D99C(MasterData_WarQuestSelectionMaster);
                  sub_B0D948(v67, 0LL);
                }
              }
            }
          }
        }
      }
    }
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
}