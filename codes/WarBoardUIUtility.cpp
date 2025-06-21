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
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x24
  const MethodInfo *v29; // x3
  Il2CppObject *detailUrl; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x22
  NetworkManager_c *v36; // x0
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x21
  System_String_o *v44; // x20
  System_String_o *v45; // x21
  __int64 v46; // x0
  _BOOL4 v47; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1A2BF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, method);
    sub_1BCAFF8(&int_TypeInfo, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&object___TypeInfo, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1BCAFF8(&Method_WarBoardUIUtility_ShowRuleDialog__, v10);
    sub_1BCAFF8(&WebViewManager_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_24989/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v12);
    sub_1BCAFF8(&StringLiteral_15423/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, v13);
    byte_4B1A2BF = 1;
  }
  v14 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCB010(Method_WarBoardUIUtility_ShowRuleDialog__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
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
            v25 = (System_Object_array *)sub_1BCB0A0(object___TypeInfo, 5LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_40555476(13, 0LL);
            if ( v25 )
            {
              v28 = (Il2CppObject *)MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1BCB134(MasterData_object, v25->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !v25->max_length )
                goto LABEL_43;
              v25->m_Items[0] = v28;
              sub_1BCAF9C((CGThumbnailListItem_o *)v25->m_Items, (int32_t)v28, v26, v27);
              detailUrl = (Il2CppObject *)v23->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1BCB134(detailUrl, v25->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v25->max_length <= 1 )
                goto LABEL_43;
              v25->m_Items[1] = detailUrl;
              sub_1BCAF9C((CGThumbnailListItem_o *)&v25->m_Items[1], (int32_t)detailUrl, v26, v29);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id, v31, v32, v33);
              v35 = (Il2CppObject *)MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1BCB134(MasterData_object, v25->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v25->max_length <= 2 )
                goto LABEL_43;
              v25->m_Items[2] = v35;
              sub_1BCAF9C((CGThumbnailListItem_o *)&v25->m_Items[2], (int32_t)v35, v26, v34);
              if ( !byte_4B1A362 )
              {
                sub_1BCAFF8(&NetworkManager_TypeInfo, v18);
                byte_4B1A362 = 1;
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
                MasterData_object = (__int64)System_String__TrimEnd_62507116(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0LL);
                v38 = (Il2CppObject *)MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1BCB134(MasterData_object, v25->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v25->max_length <= 3 )
                    goto LABEL_43;
                  v25->m_Items[3] = v38;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&v25->m_Items[3], (int32_t)v38, v26, v37);
                  v47 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v47, v39, v40, v41);
                  v43 = (Il2CppObject *)MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1BCB134(MasterData_object, v25->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v25->max_length > 4 )
                    {
                      v25->m_Items[4] = v43;
                      sub_1BCAF9C((CGThumbnailListItem_o *)&v25->m_Items[4], (int32_t)v43, v26, v42);
                      v44 = System_String__Format_62491852((System_String_o *)StringLiteral_24989/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v25, 0LL);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_15423/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                      WebViewManager__OpenView(v45, v44, callbackFunc, 0LL);
                      return;
                    }
LABEL_43:
                    sub_1BCB25C(MasterData_object, v18, v26);
                  }
                }
LABEL_44:
                v46 = sub_1BCB278();
                sub_1BCB120(v46, 0LL);
              }
            }
          }
        }
      }
    }
    sub_1BCB254(MasterData_object, v18);
  }
}