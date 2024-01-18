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
  __int64 v19; // x1
  WarBoardData_o *warBoardData_k__BackingField; // x22
  int winCondId; // w23
  WarBoardStageDetailMaster_o *v22; // x21
  WarBoardStageDetailEntity_o *WarBoardStageDetailEntity; // x0
  WarBoardStageDetailEntity_o *v24; // x23
  bool HasNewWinCond; // w21
  System_Object_array *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **detailUrl; // x23
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x22
  __int64 v48; // x1
  NetworkManager_c *v49; // x0
  System_String_o *gameServerAddress; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x21
  System_String_o *v65; // x20
  System_String_o *v66; // x21
  __int64 v67; // x0
  __int64 v68; // x0
  _BOOL4 v69; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_41888E7 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v3);
    sub_B2C35C(&int_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&object___TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B2C35C(&Method_WarBoardUIUtility_ShowRuleDialog__, v11);
    sub_B2C35C(&WebViewManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_23656/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v13);
    sub_B2C35C(&StringLiteral_15371/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, v14);
    byte_41888E7 = 1;
  }
  v15 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 75) & 2) != 0 )
    v15 = (_QWORD *)sub_B2C364(Method_WarBoardUIUtility_ShowRuleDialog__);
  v16 = (System_Reflection_MethodBase_o *)sub_B2C340(v15, v15[3]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_WarQuestSelectionMaster )
    {
      MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          v22 = (WarBoardStageDetailMaster_o *)MasterData_WarQuestSelectionMaster;
          MasterData_WarQuestSelectionMaster = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0LL);
          if ( v22 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v22,
                                          MasterData_WarQuestSelectionMaster,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0LL);
            if ( !WarBoardStageDetailEntity )
              return;
            v24 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
            WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0LL);
            v26 = (System_Object_array *)sub_B2C374(object___TypeInfo, 5LL);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            MasterData_WarQuestSelectionMaster = (__int64)NetworkManager__getWebViewAddress_26285648(13, 0LL);
            if ( v26 )
            {
              v33 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
              if ( MasterData_WarQuestSelectionMaster )
              {
                MasterData_WarQuestSelectionMaster = sub_B2C41C(
                                                       MasterData_WarQuestSelectionMaster,
                                                       v26->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( !v26->max_length )
                goto LABEL_50;
              v26->m_Items[0] = (Il2CppObject *)v33;
              sub_B2C2F8((BattleServantConfConponent_o *)v26->m_Items, v33, v27, v28, v29, v30, v31, v32);
              detailUrl = (System_Int32_array **)v24->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_WarQuestSelectionMaster = sub_B2C41C(detailUrl, v26->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( v26->max_length <= 1 )
                goto LABEL_50;
              v26->m_Items[1] = (Il2CppObject *)detailUrl;
              sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[1], detailUrl, v34, v35, v36, v37, v38, v39);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              MasterData_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &id);
              v47 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
              if ( MasterData_WarQuestSelectionMaster )
              {
                MasterData_WarQuestSelectionMaster = sub_B2C41C(
                                                       MasterData_WarQuestSelectionMaster,
                                                       v26->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( v26->max_length <= 2 )
                goto LABEL_50;
              v26->m_Items[2] = (Il2CppObject *)v47;
              sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[2], v47, v41, v42, v43, v44, v45, v46);
              if ( !byte_41889AD )
              {
                sub_B2C35C(&NetworkManager_TypeInfo, v48);
                byte_41889AD = 1;
              }
              v49 = NetworkManager_TypeInfo;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v49 = NetworkManager_TypeInfo;
              }
              gameServerAddress = v49->static_fields->gameServerAddress;
              MasterData_WarQuestSelectionMaster = sub_B2C374(char___TypeInfo, 1LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                v19 = MasterData_WarQuestSelectionMaster;
                if ( !*(_DWORD *)(MasterData_WarQuestSelectionMaster + 24) )
                  goto LABEL_50;
                *(_WORD *)(MasterData_WarQuestSelectionMaster + 32) = 47;
                if ( gameServerAddress )
                {
                  MasterData_WarQuestSelectionMaster = (__int64)System_String__TrimEnd(
                                                                  gameServerAddress,
                                                                  (System_Char_array *)MasterData_WarQuestSelectionMaster,
                                                                  0LL);
                  v57 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
                  if ( !MasterData_WarQuestSelectionMaster
                    || (MasterData_WarQuestSelectionMaster = sub_B2C41C(
                                                               MasterData_WarQuestSelectionMaster,
                                                               v26->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v26->max_length <= 3 )
                      goto LABEL_50;
                    v26->m_Items[3] = (Il2CppObject *)v57;
                    sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[3], v57, v51, v52, v53, v54, v55, v56);
                    v69 = HasNewWinCond;
                    MasterData_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &v69);
                    v64 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
                    if ( !MasterData_WarQuestSelectionMaster
                      || (MasterData_WarQuestSelectionMaster = sub_B2C41C(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 v26->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( v26->max_length > 4 )
                      {
                        v26->m_Items[4] = (Il2CppObject *)v64;
                        sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[4], v64, v58, v59, v60, v61, v62, v63);
                        v65 = System_String__Format_44384256((System_String_o *)StringLiteral_23656/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v26, 0LL);
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_15371/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                        if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !WebViewManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                        }
                        WebViewManager__OpenView(v66, v65, callbackFunc, 0LL);
                        return;
                      }
LABEL_50:
                      v67 = sub_B2C460(MasterData_WarQuestSelectionMaster);
                      sub_B2C400(v67, 0LL);
                    }
                  }
LABEL_51:
                  v68 = sub_B2C454(MasterData_WarQuestSelectionMaster);
                  sub_B2C400(v68, 0LL);
                }
              }
            }
          }
        }
      }
    }
    sub_B2C434(MasterData_WarQuestSelectionMaster, v19);
  }
}