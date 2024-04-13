void __fastcall WarBoardUIUtility__ShowRuleDialog(System_Action_o *callbackFunc, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  WarBoardManager_o *Instance; // x20
  __int64 MasterData_WarQuestSelectionMaster; // x0
  __int64 v45; // x1
  WarBoardData_o *warBoardData_k__BackingField; // x22
  int winCondId; // w23
  WarBoardStageDetailMaster_o *v48; // x21
  WarBoardStageDetailEntity_o *WarBoardStageDetailEntity; // x0
  WarBoardStageDetailEntity_o *v50; // x23
  bool HasNewWinCond; // w21
  System_Object_array *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x24
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **detailUrl; // x23
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x22
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  NetworkManager_c *v77; // x0
  System_String_o *gameServerAddress; // x22
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x22
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x21
  System_String_o *v93; // x20
  System_String_o *v94; // x21
  __int64 v95; // x0
  __int64 v96; // x0
  _BOOL4 v97; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9343 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&object___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardUIUtility_ShowRuleDialog__, v29, v30, v31);
    sub_B5D5C4(&WebViewManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_23968/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_15561/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, v38, v39, v40);
    byte_42E9343 = 1;
  }
  v41 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 75) & 2) != 0 )
    v41 = (_QWORD *)sub_B5D5CC(Method_WarBoardUIUtility_ShowRuleDialog__);
  v42 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v41, v41[3]);
  OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_WarQuestSelectionMaster )
    {
      MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          v48 = (WarBoardStageDetailMaster_o *)MasterData_WarQuestSelectionMaster;
          MasterData_WarQuestSelectionMaster = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0LL);
          if ( v48 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v48,
                                          MasterData_WarQuestSelectionMaster,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0LL);
            if ( !WarBoardStageDetailEntity )
              return;
            v50 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
            WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0LL);
            v52 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 5LL);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            MasterData_WarQuestSelectionMaster = (__int64)NetworkManager__getWebViewAddress_26091648(13, 0LL);
            if ( v52 )
            {
              v59 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
              if ( MasterData_WarQuestSelectionMaster )
              {
                MasterData_WarQuestSelectionMaster = sub_B5D684(
                                                       MasterData_WarQuestSelectionMaster,
                                                       v52->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( !v52->max_length )
                goto LABEL_50;
              v52->m_Items[0] = (Il2CppObject *)v59;
              sub_B5D560((BattleServantConfConponent_o *)v52->m_Items, v59, v53, v54, v55, v56, v57, v58);
              detailUrl = (System_Int32_array **)v50->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_WarQuestSelectionMaster = sub_B5D684(detailUrl, v52->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( v52->max_length <= 1 )
                goto LABEL_50;
              v52->m_Items[1] = (Il2CppObject *)detailUrl;
              sub_B5D560((BattleServantConfConponent_o *)&v52->m_Items[1], detailUrl, v60, v61, v62, v63, v64, v65);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              MasterData_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &id);
              v73 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
              if ( MasterData_WarQuestSelectionMaster )
              {
                MasterData_WarQuestSelectionMaster = sub_B5D684(
                                                       MasterData_WarQuestSelectionMaster,
                                                       v52->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( v52->max_length <= 2 )
                goto LABEL_50;
              v52->m_Items[2] = (Il2CppObject *)v73;
              sub_B5D560((BattleServantConfConponent_o *)&v52->m_Items[2], v73, v67, v68, v69, v70, v71, v72);
              if ( !byte_42E9416 )
              {
                sub_B5D5C4(&NetworkManager_TypeInfo, v74, v75, v76);
                byte_42E9416 = 1;
              }
              v77 = NetworkManager_TypeInfo;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v77 = NetworkManager_TypeInfo;
              }
              gameServerAddress = v77->static_fields->gameServerAddress;
              MasterData_WarQuestSelectionMaster = sub_B5D5DC(char___TypeInfo, 1LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                v45 = MasterData_WarQuestSelectionMaster;
                if ( !*(_DWORD *)(MasterData_WarQuestSelectionMaster + 24) )
                  goto LABEL_50;
                *(_WORD *)(MasterData_WarQuestSelectionMaster + 32) = 47;
                if ( gameServerAddress )
                {
                  MasterData_WarQuestSelectionMaster = (__int64)System_String__TrimEnd(
                                                                  gameServerAddress,
                                                                  (System_Char_array *)MasterData_WarQuestSelectionMaster,
                                                                  0LL);
                  v85 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
                  if ( !MasterData_WarQuestSelectionMaster
                    || (MasterData_WarQuestSelectionMaster = sub_B5D684(
                                                               MasterData_WarQuestSelectionMaster,
                                                               v52->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v52->max_length <= 3 )
                      goto LABEL_50;
                    v52->m_Items[3] = (Il2CppObject *)v85;
                    sub_B5D560((BattleServantConfConponent_o *)&v52->m_Items[3], v85, v79, v80, v81, v82, v83, v84);
                    v97 = HasNewWinCond;
                    MasterData_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &v97);
                    v92 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
                    if ( !MasterData_WarQuestSelectionMaster
                      || (MasterData_WarQuestSelectionMaster = sub_B5D684(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 v52->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( v52->max_length > 4 )
                      {
                        v52->m_Items[4] = (Il2CppObject *)v92;
                        sub_B5D560((BattleServantConfConponent_o *)&v52->m_Items[4], v92, v86, v87, v88, v89, v90, v91);
                        v93 = System_String__Format_44656512((System_String_o *)StringLiteral_23968/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v52, 0LL);
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_15561/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                        if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !WebViewManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                        }
                        WebViewManager__OpenView(v94, v93, callbackFunc, 0LL);
                        return;
                      }
LABEL_50:
                      v95 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
                      sub_B5D668(v95, 0LL);
                    }
                  }
LABEL_51:
                  v96 = sub_B5D6BC(MasterData_WarQuestSelectionMaster);
                  sub_B5D668(v96, 0LL);
                }
              }
            }
          }
        }
      }
    }
    sub_B5D69C(MasterData_WarQuestSelectionMaster, v45);
  }
}