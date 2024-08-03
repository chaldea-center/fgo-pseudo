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
  WarBoardData_o *warBoardData_k__BackingField; // x22
  int winCondId; // w23
  WarBoardStageDetailMaster_o *v20; // x21
  WarBoardStageDetailEntity_o *WarBoardStageDetailEntity; // x0
  WarBoardStageDetailEntity_o *v22; // x23
  bool HasNewWinCond; // w21
  System_Object_array *v24; // x20
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *detailUrl; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x22
  __int64 v35; // x1
  NetworkManager_c *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x21
  System_String_o *v43; // x20
  System_String_o *v44; // x21
  __int64 v45; // x0
  _BOOL4 v46; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FA3F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&object___TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B640C8(&Method_WarBoardUIUtility_ShowRuleDialog__, v10);
    sub_1B640C8(&WebViewManager_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_25008/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v12);
    sub_1B640C8(&StringLiteral_15487/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, v13);
    byte_49FA3F5 = 1;
  }
  v14 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B640E0(Method_WarBoardUIUtility_ShowRuleDialog__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B640AC(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          v20 = (WarBoardStageDetailMaster_o *)MasterData_object;
          MasterData_object = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0LL);
          if ( v20 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v20,
                                          MasterData_object,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0LL);
            if ( !WarBoardStageDetailEntity )
              return;
            v22 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
            WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0LL);
            v24 = (System_Object_array *)sub_1B64170(object___TypeInfo, 5LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_38174564(13, 0LL);
            if ( v24 )
            {
              v28 = (Il2CppObject *)MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1B64204(MasterData_object, v24->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !v24->max_length )
                goto LABEL_43;
              v24->m_Items[0] = v28;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)v24->m_Items, (int32_t)v28, v26, v27);
              detailUrl = (Il2CppObject *)v22->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1B64204(detailUrl, v24->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v24->max_length <= 1 )
                goto LABEL_43;
              v24->m_Items[1] = detailUrl;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->m_Items[1], (int32_t)detailUrl, v29, v30);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id);
              v34 = (Il2CppObject *)MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1B64204(MasterData_object, v24->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v24->max_length <= 2 )
                goto LABEL_43;
              v24->m_Items[2] = v34;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->m_Items[2], (int32_t)v34, v32, v33);
              if ( !byte_49FA3FF )
              {
                sub_1B640C8(&NetworkManager_TypeInfo, v35);
                byte_49FA3FF = 1;
              }
              v36 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v36 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v36->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_61405280(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0LL);
                v39 = (Il2CppObject *)MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1B64204(MasterData_object, v24->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v24->max_length <= 3 )
                    goto LABEL_43;
                  v24->m_Items[3] = v39;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->m_Items[3], (int32_t)v39, v37, v38);
                  v46 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v46);
                  v42 = (Il2CppObject *)MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1B64204(MasterData_object, v24->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v24->max_length > 4 )
                    {
                      v24->m_Items[4] = v42;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->m_Items[4], (int32_t)v42, v40, v41);
                      v43 = System_String__Format_61389904((System_String_o *)StringLiteral_25008/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v24, 0LL);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_15487/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                      WebViewManager__OpenView(v44, v43, callbackFunc, 0LL);
                      return;
                    }
LABEL_43:
                    sub_1B6432C(MasterData_object, v25);
                  }
                }
LABEL_44:
                v45 = sub_1B64348(MasterData_object);
                sub_1B641F0(v45, 0LL);
              }
            }
          }
        }
      }
    }
    sub_1B64324(MasterData_object);
  }
}