void __fastcall WarBoardUIUtility__ShowRuleDialog(System_Action_o *callbackFunc, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarBoardManager_o *Instance; // x20
  __int64 MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  WarBoardData_o *warBoardData_k__BackingField; // x22
  int winCondId; // w23
  WarBoardStageDetailMaster_o *v10; // x21
  WarBoardStageDetailEntity_o *WarBoardStageDetailEntity; // x0
  WarBoardStageDetailEntity_o *v12; // x23
  bool HasNewWinCond; // w21
  System_Object_array *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x24
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **detailUrl; // x23
  __int64 v29; // x2
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  NetworkManager_c *v37; // x0
  System_String_o *gameServerAddress; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x22
  __int64 v46; // x2
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x21
  System_String_o *v54; // x20
  System_String_o *v55; // x21
  __int64 v56; // x0
  __int64 v57; // x0
  _BOOL4 v58; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438BDE6 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Method_WarBoardUIUtility_ShowRuleDialog__);
    sub_B775C4(&WebViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_24144/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/);
    sub_B775C4(&StringLiteral_15662/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/);
    byte_438BDE6 = 1;
  }
  v3 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B775CC(Method_WarBoardUIUtility_ShowRuleDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    MasterData_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_WarQuestSelectionMaster )
    {
      MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          v10 = (WarBoardStageDetailMaster_o *)MasterData_WarQuestSelectionMaster;
          MasterData_WarQuestSelectionMaster = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0LL);
          if ( v10 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v10,
                                          MasterData_WarQuestSelectionMaster,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0LL);
            if ( !WarBoardStageDetailEntity )
              return;
            v12 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
            WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0LL);
            v14 = (System_Object_array *)sub_B775DC(object___TypeInfo, 5LL);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            MasterData_WarQuestSelectionMaster = (__int64)NetworkManager__getWebViewAddress_26221564(13, 0LL);
            if ( v14 )
            {
              v21 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
              if ( MasterData_WarQuestSelectionMaster )
              {
                MasterData_WarQuestSelectionMaster = sub_B77684(
                                                       MasterData_WarQuestSelectionMaster,
                                                       v14->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( !v14->max_length )
                goto LABEL_50;
              v14->m_Items[0] = (Il2CppObject *)v21;
              sub_B77560((BattleServantConfConponent_o *)v14->m_Items, v21, v15, v16, v17, v18, v19, v20);
              detailUrl = (System_Int32_array **)v12->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_WarQuestSelectionMaster = sub_B77684(detailUrl, v14->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( v14->max_length <= 1 )
                goto LABEL_50;
              v14->m_Items[1] = (Il2CppObject *)detailUrl;
              sub_B77560((BattleServantConfConponent_o *)&v14->m_Items[1], detailUrl, v22, v23, v24, v25, v26, v27);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              MasterData_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &id, v29);
              v36 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
              if ( MasterData_WarQuestSelectionMaster )
              {
                MasterData_WarQuestSelectionMaster = sub_B77684(
                                                       MasterData_WarQuestSelectionMaster,
                                                       v14->obj.klass->_1.element_class);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_51;
              }
              if ( v14->max_length <= 2 )
                goto LABEL_50;
              v14->m_Items[2] = (Il2CppObject *)v36;
              sub_B77560((BattleServantConfConponent_o *)&v14->m_Items[2], v36, v30, v31, v32, v33, v34, v35);
              if ( !byte_438BEB9 )
              {
                sub_B775C4(&NetworkManager_TypeInfo);
                byte_438BEB9 = 1;
              }
              v37 = NetworkManager_TypeInfo;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v37 = NetworkManager_TypeInfo;
              }
              gameServerAddress = v37->static_fields->gameServerAddress;
              MasterData_WarQuestSelectionMaster = sub_B775DC(char___TypeInfo, 1LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                v7 = MasterData_WarQuestSelectionMaster;
                if ( !*(_DWORD *)(MasterData_WarQuestSelectionMaster + 24) )
                  goto LABEL_50;
                *(_WORD *)(MasterData_WarQuestSelectionMaster + 32) = 47;
                if ( gameServerAddress )
                {
                  MasterData_WarQuestSelectionMaster = (__int64)System_String__TrimEnd(
                                                                  gameServerAddress,
                                                                  (System_Char_array *)MasterData_WarQuestSelectionMaster,
                                                                  0LL);
                  v45 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
                  if ( !MasterData_WarQuestSelectionMaster
                    || (MasterData_WarQuestSelectionMaster = sub_B77684(
                                                               MasterData_WarQuestSelectionMaster,
                                                               v14->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v14->max_length <= 3 )
                      goto LABEL_50;
                    v14->m_Items[3] = (Il2CppObject *)v45;
                    sub_B77560((BattleServantConfConponent_o *)&v14->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
                    v58 = HasNewWinCond;
                    MasterData_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &v58, v46);
                    v53 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
                    if ( !MasterData_WarQuestSelectionMaster
                      || (MasterData_WarQuestSelectionMaster = sub_B77684(
                                                                 MasterData_WarQuestSelectionMaster,
                                                                 v14->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( v14->max_length > 4 )
                      {
                        v14->m_Items[4] = (Il2CppObject *)v53;
                        sub_B77560((BattleServantConfConponent_o *)&v14->m_Items[4], v53, v47, v48, v49, v50, v51, v52);
                        v54 = System_String__Format_44980660((System_String_o *)StringLiteral_24144/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v14, 0LL);
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_15662/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                        if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !WebViewManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                        }
                        WebViewManager__OpenView(v55, v54, callbackFunc, 0LL);
                        return;
                      }
LABEL_50:
                      v56 = sub_B776C8(MasterData_WarQuestSelectionMaster);
                      sub_B77668(v56, 0LL);
                    }
                  }
LABEL_51:
                  v57 = sub_B776BC(MasterData_WarQuestSelectionMaster);
                  sub_B77668(v57, 0LL);
                }
              }
            }
          }
        }
      }
    }
    sub_B7769C(MasterData_WarQuestSelectionMaster, v7);
  }
}