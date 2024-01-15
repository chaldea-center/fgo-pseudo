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
  WebViewManager_o *v18; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarBoardData_o *warBoardData_k__BackingField; // x22
  int winCondId; // w23
  WarBoardStageDetailMaster_o *v22; // x21
  int32_t id; // w0
  WarBoardStageDetailEntity_o *WarBoardStageDetailEntity; // x0
  WarBoardStageDetailEntity_o *v25; // x23
  bool HasNewWinCond; // w21
  __int64 v27; // x2
  System_Object_array *v28; // x20
  System_Char_array *WebViewAddress_23699452; // x0
  System_Char_array *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x24
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **detailUrl; // x23
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  NetworkManager_c *v52; // x0
  System_String_o *gameServerAddress; // x22
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x22
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x21
  System_String_o *v66; // x20
  System_String_o *v67; // x21
  _BOOL4 v68; // [xsp+8h] [xbp-38h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FA909 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v3);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&object___TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B16FFC(&Method_WarBoardUIUtility_ShowRuleDialog__, v11);
    sub_B16FFC(&WebViewManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_23562/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v13);
    sub_B16FFC(&StringLiteral_15309/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, v14);
    byte_40FA909 = 1;
  }
  v15 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 75) & 2) != 0 )
    v15 = (_QWORD *)sub_B17004(Method_WarBoardUIUtility_ShowRuleDialog__);
  v16 = (System_Reflection_MethodBase_o *)sub_B16FE0(v15, v15[3]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v18 )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v18,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          v22 = (WarBoardStageDetailMaster_o *)MasterData_WarQuestSelectionMaster;
          id = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0LL);
          if ( v22 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v22,
                                          id,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0LL);
            if ( !WarBoardStageDetailEntity )
              return;
            v25 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
            WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0LL);
            v28 = (System_Object_array *)sub_B17014(object___TypeInfo, 5LL, v27);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            WebViewAddress_23699452 = (System_Char_array *)NetworkManager__getWebViewAddress_23699452(13, 0LL);
            if ( v28 )
            {
              v37 = (System_Int32_array **)WebViewAddress_23699452;
              if ( WebViewAddress_23699452 )
              {
                WebViewAddress_23699452 = (System_Char_array *)sub_B170BC(
                                                                 WebViewAddress_23699452,
                                                                 v28->obj.klass->_1.element_class);
                if ( !WebViewAddress_23699452 )
                  goto LABEL_51;
              }
              if ( !v28->max_length )
                goto LABEL_50;
              v28->m_Items[0] = (Il2CppObject *)v37;
              sub_B16F98((BattleServantConfConponent_o *)v28->m_Items, v37, v31, v32, v33, v34, v35, v36);
              detailUrl = (System_Int32_array **)v25->fields.detailUrl;
              if ( detailUrl )
              {
                WebViewAddress_23699452 = (System_Char_array *)sub_B170BC(detailUrl, v28->obj.klass->_1.element_class);
                if ( !WebViewAddress_23699452 )
                  goto LABEL_51;
              }
              if ( v28->max_length <= 1 )
                goto LABEL_50;
              v28->m_Items[1] = (Il2CppObject *)detailUrl;
              sub_B16F98((BattleServantConfConponent_o *)&v28->m_Items[1], detailUrl, v31, v38, v39, v40, v41, v42);
              v69 = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              WebViewAddress_23699452 = (System_Char_array *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
              v49 = (System_Int32_array **)WebViewAddress_23699452;
              if ( WebViewAddress_23699452 )
              {
                WebViewAddress_23699452 = (System_Char_array *)sub_B170BC(
                                                                 WebViewAddress_23699452,
                                                                 v28->obj.klass->_1.element_class);
                if ( !WebViewAddress_23699452 )
                  goto LABEL_51;
              }
              if ( v28->max_length <= 2 )
                goto LABEL_50;
              v28->m_Items[2] = (Il2CppObject *)v49;
              sub_B16F98((BattleServantConfConponent_o *)&v28->m_Items[2], v49, v31, v44, v45, v46, v47, v48);
              if ( !byte_40FA9CF )
              {
                sub_B16FFC(&NetworkManager_TypeInfo, v50);
                byte_40FA9CF = 1;
              }
              v52 = NetworkManager_TypeInfo;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v52 = NetworkManager_TypeInfo;
              }
              gameServerAddress = v52->static_fields->gameServerAddress;
              WebViewAddress_23699452 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v51);
              if ( WebViewAddress_23699452 )
              {
                v30 = WebViewAddress_23699452;
                if ( !WebViewAddress_23699452->max_length )
                  goto LABEL_50;
                WebViewAddress_23699452->m_Items[2] = 47;
                if ( gameServerAddress )
                {
                  WebViewAddress_23699452 = (System_Char_array *)System_String__TrimEnd(
                                                                   gameServerAddress,
                                                                   WebViewAddress_23699452,
                                                                   0LL);
                  v59 = (System_Int32_array **)WebViewAddress_23699452;
                  if ( !WebViewAddress_23699452
                    || (WebViewAddress_23699452 = (System_Char_array *)sub_B170BC(
                                                                         WebViewAddress_23699452,
                                                                         v28->obj.klass->_1.element_class)) != 0LL )
                  {
                    if ( v28->max_length <= 3 )
                      goto LABEL_50;
                    v28->m_Items[3] = (Il2CppObject *)v59;
                    sub_B16F98((BattleServantConfConponent_o *)&v28->m_Items[3], v59, v31, v54, v55, v56, v57, v58);
                    v68 = HasNewWinCond;
                    WebViewAddress_23699452 = (System_Char_array *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
                    v65 = (System_Int32_array **)WebViewAddress_23699452;
                    if ( !WebViewAddress_23699452
                      || (WebViewAddress_23699452 = (System_Char_array *)sub_B170BC(
                                                                           WebViewAddress_23699452,
                                                                           v28->obj.klass->_1.element_class)) != 0LL )
                    {
                      if ( v28->max_length > 4 )
                      {
                        v28->m_Items[4] = (Il2CppObject *)v65;
                        sub_B16F98((BattleServantConfConponent_o *)&v28->m_Items[4], v65, v31, v60, v61, v62, v63, v64);
                        v66 = System_String__Format_43822456((System_String_o *)StringLiteral_23562/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v28, 0LL);
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v67 = LocalizationManager__Get((System_String_o *)StringLiteral_15309/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                        if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !WebViewManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                        }
                        WebViewManager__OpenView(v67, v66, callbackFunc, 0LL);
                        return;
                      }
LABEL_50:
                      sub_B17100(WebViewAddress_23699452, v30, v31);
                      sub_B170A0();
                    }
                  }
LABEL_51:
                  sub_B170F4(WebViewAddress_23699452);
                  sub_B170A0();
                }
              }
            }
          }
        }
      }
    }
    sub_B170D4();
  }
}