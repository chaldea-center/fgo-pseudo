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
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *detailUrl; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x22
  NetworkManager_c *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x21
  System_String_o *v37; // x20
  System_String_o *v38; // x21
  __int64 v39; // x0
  _BOOL4 v40; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A591B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardUIUtility_ShowRuleDialog__);
    sub_1B885B0(&WebViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_25109/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/);
    sub_1B885B0(&StringLiteral_15555/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/);
    byte_4A591B3 = 1;
  }
  v3 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardUIUtility_ShowRuleDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
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
            v14 = (System_Object_array *)sub_1B88658(object___TypeInfo, 5LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_38491324(13, 0LL);
            if ( v14 )
            {
              v17 = (Il2CppObject *)MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1B886EC(MasterData_object, v14->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !v14->max_length )
                goto LABEL_43;
              v14->m_Items[0] = v17;
              sub_1B88554((ServantStatusBattleListViewItem_o *)v14->m_Items, (int32_t)v17, v15, v16);
              detailUrl = (Il2CppObject *)v12->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1B886EC(detailUrl, v14->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v14->max_length <= 1 )
                goto LABEL_43;
              v14->m_Items[1] = detailUrl;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[1], (int32_t)detailUrl, v18, v19);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id, v21, v22, v23);
              v26 = (Il2CppObject *)MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1B886EC(MasterData_object, v14->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v14->max_length <= 2 )
                goto LABEL_43;
              v14->m_Items[2] = v26;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[2], (int32_t)v26, v24, v25);
              if ( !byte_4A591BD )
              {
                sub_1B885B0(&NetworkManager_TypeInfo);
                byte_4A591BD = 1;
              }
              v27 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v27 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v27->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_61736924(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0LL);
                v30 = (Il2CppObject *)MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1B886EC(MasterData_object, v14->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v14->max_length <= 3 )
                    goto LABEL_43;
                  v14->m_Items[3] = v30;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[3], (int32_t)v30, v28, v29);
                  v40 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v40, v31, v32, v33);
                  v36 = (Il2CppObject *)MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1B886EC(MasterData_object, v14->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v14->max_length > 4 )
                    {
                      v14->m_Items[4] = v36;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[4], (int32_t)v36, v34, v35);
                      v37 = System_String__Format_61721540((System_String_o *)StringLiteral_25109/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v14, 0LL);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_15555/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                      WebViewManager__OpenView(v38, v37, callbackFunc, 0LL);
                      return;
                    }
LABEL_43:
                    sub_1B88814(MasterData_object, v7);
                  }
                }
LABEL_44:
                v39 = sub_1B88830(MasterData_object);
                sub_1B886D8(v39, 0LL);
              }
            }
          }
        }
      }
    }
    sub_1B8880C(MasterData_object, v7);
  }
}