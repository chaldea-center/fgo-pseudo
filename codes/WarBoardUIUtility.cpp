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
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *detailUrl; // x23
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x22
  NetworkManager_c *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x22
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x21
  System_String_o *v48; // x20
  System_String_o *v49; // x21
  __int64 v50; // x0
  _BOOL4 v51; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A1DA96 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, method);
    sub_1B715CC(&int_TypeInfo, v3);
    sub_1B715CC(&LocalizationManager_TypeInfo, v4);
    sub_1B715CC(&NetworkManager_TypeInfo, v5);
    sub_1B715CC(&object___TypeInfo, v6);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B715CC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B715CC(&Method_WarBoardUIUtility_ShowRuleDialog__, v10);
    sub_1B715CC(&WebViewManager_TypeInfo, v11);
    sub_1B715CC(&StringLiteral_25050/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v12);
    sub_1B715CC(&StringLiteral_15505/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, v13);
    byte_4A1DA96 = 1;
  }
  v14 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B715E4(Method_WarBoardUIUtility_ShowRuleDialog__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B715B0(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
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
            v25 = (System_Object_array *)sub_1B71674(object___TypeInfo, 5LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_38284340(13, 0LL);
            if ( v25 )
            {
              v28 = (Il2CppObject *)MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1B71708(MasterData_object, v25->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !v25->max_length )
                goto LABEL_43;
              v25->m_Items[0] = v28;
              sub_1B71570((ServantStatusBattleListViewItem_o *)v25->m_Items, (int32_t)v28, v26, v27);
              detailUrl = (Il2CppObject *)v23->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1B71708(detailUrl, v25->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v25->max_length <= 1 )
                goto LABEL_43;
              v25->m_Items[1] = detailUrl;
              sub_1B71570((ServantStatusBattleListViewItem_o *)&v25->m_Items[1], (int32_t)detailUrl, v29, v30);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id, v32, v33, v34);
              v37 = (Il2CppObject *)MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1B71708(MasterData_object, v25->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v25->max_length <= 2 )
                goto LABEL_43;
              v25->m_Items[2] = v37;
              sub_1B71570((ServantStatusBattleListViewItem_o *)&v25->m_Items[2], (int32_t)v37, v35, v36);
              if ( !byte_4A1DAA0 )
              {
                sub_1B715CC(&NetworkManager_TypeInfo, v18);
                byte_4A1DAA0 = 1;
              }
              v38 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v38 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v38->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_61535396(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0LL);
                v41 = (Il2CppObject *)MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1B71708(MasterData_object, v25->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v25->max_length <= 3 )
                    goto LABEL_43;
                  v25->m_Items[3] = v41;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)&v25->m_Items[3], (int32_t)v41, v39, v40);
                  v51 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v51, v42, v43, v44);
                  v47 = (Il2CppObject *)MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1B71708(MasterData_object, v25->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v25->max_length > 4 )
                    {
                      v25->m_Items[4] = v47;
                      sub_1B71570((ServantStatusBattleListViewItem_o *)&v25->m_Items[4], (int32_t)v47, v45, v46);
                      v48 = System_String__Format_61520012((System_String_o *)StringLiteral_25050/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v25, 0LL);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_15505/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                      WebViewManager__OpenView(v49, v48, callbackFunc, 0LL);
                      return;
                    }
LABEL_43:
                    sub_1B71830(MasterData_object, v18);
                  }
                }
LABEL_44:
                v50 = sub_1B7184C(MasterData_object);
                sub_1B716F4(v50, 0LL);
              }
            }
          }
        }
      }
    }
    sub_1B71828(MasterData_object, v18);
  }
}