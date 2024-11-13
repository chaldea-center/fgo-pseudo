void __fastcall WarBoardUIUtility__ShowRuleDialog(System_Action_o *callbackFunc, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  __int64 v28; // x1
  WarBoardManager_o *Instance; // x20
  __int64 MasterData_object; // x0
  __int64 v31; // x1
  WarBoardData_o *warBoardData_k__BackingField; // x22
  int winCondId; // w23
  WarBoardStageDetailMaster_o *v34; // x21
  WarBoardStageDetailEntity_o *WarBoardStageDetailEntity; // x0
  WarBoardStageDetailEntity_o *v36; // x23
  bool HasNewWinCond; // w21
  __int64 v38; // x1
  System_Object_array *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x24
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t detailUrl; // x23
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x22
  __int64 v61; // x2
  NetworkManager_c *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x22
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x21
  __int64 v77; // x1
  System_String_o *v78; // x20
  __int64 v79; // x1
  System_String_o *v80; // x21
  __int64 v81; // x0
  _BOOL4 v82; // [xsp+8h] [xbp-48h] BYREF
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1413E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&object___TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_WarBoardUIUtility_ShowRuleDialog__, v18, v19);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_25364/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_15722/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, v24, v25);
    byte_4B1413E = 1;
  }
  v26 = Method_WarBoardUIUtility_ShowRuleDialog__;
  if ( (*((_BYTE *)Method_WarBoardUIUtility_ShowRuleDialog__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1BCA7F8(Method_WarBoardUIUtility_ShowRuleDialog__);
  v27 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MasterData_object )
    {
      MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)MasterData_object,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
      if ( Instance )
      {
        warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
        if ( warBoardData_k__BackingField )
        {
          winCondId = warBoardData_k__BackingField->fields.winCondId;
          v34 = (WarBoardStageDetailMaster_o *)MasterData_object;
          MasterData_object = WarBoardData__get_id(Instance->fields._warBoardData_k__BackingField, 0LL);
          if ( v34 )
          {
            WarBoardStageDetailEntity = WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
                                          v34,
                                          MasterData_object,
                                          winCondId & (unsigned int)~(winCondId >> 31),
                                          0LL);
            if ( !WarBoardStageDetailEntity )
              return;
            v36 = WarBoardStageDetailEntity;
            WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
            WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
            HasNewWinCond = WarBoardData__HasNewWinCond(warBoardData_k__BackingField, 0LL);
            v39 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 5LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38);
            MasterData_object = (__int64)NetworkManager__getWebViewAddress_39282648(13, 0LL);
            if ( v39 )
            {
              v46 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1BCA91C(MasterData_object, v39->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( !v39->max_length )
                goto LABEL_43;
              v39->m_Items[0] = (Il2CppObject *)v46;
              sub_1BCA784((PartyOrganizationUtility_o *)v39->m_Items, v46, v40, v41, v42, v43, v44, v45);
              detailUrl = (int64_t)v36->fields.detailUrl;
              if ( detailUrl )
              {
                MasterData_object = sub_1BCA91C(detailUrl, v39->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v39->max_length <= 1 )
                goto LABEL_43;
              v39->m_Items[1] = (Il2CppObject *)detailUrl;
              sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[1], detailUrl, v47, v48, v49, v50, v51, v52);
              id = WarBoardData__get_id(warBoardData_k__BackingField, 0LL);
              MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &id);
              v60 = MasterData_object;
              if ( MasterData_object )
              {
                MasterData_object = sub_1BCA91C(MasterData_object, v39->obj.klass->_1.element_class);
                if ( !MasterData_object )
                  goto LABEL_44;
              }
              if ( v39->max_length <= 2 )
                goto LABEL_43;
              v39->m_Items[2] = (Il2CppObject *)v60;
              sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[2], v60, v54, v55, v56, v57, v58, v59);
              if ( !byte_4B141E1 )
              {
                sub_1BCA7E0(&NetworkManager_TypeInfo, v31, v61);
                byte_4B141E1 = 1;
              }
              v62 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
                v62 = NetworkManager_TypeInfo;
              }
              MasterData_object = (__int64)v62->static_fields->gameServerAddress;
              if ( MasterData_object )
              {
                MasterData_object = (__int64)System_String__TrimEnd_62431112(
                                               (System_String_o *)MasterData_object,
                                               0x2Fu,
                                               0LL);
                v69 = MasterData_object;
                if ( !MasterData_object
                  || (MasterData_object = sub_1BCA91C(MasterData_object, v39->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v39->max_length <= 3 )
                    goto LABEL_43;
                  v39->m_Items[3] = (Il2CppObject *)v69;
                  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[3], v69, v63, v64, v65, v66, v67, v68);
                  v82 = HasNewWinCond;
                  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v82);
                  v76 = MasterData_object;
                  if ( !MasterData_object
                    || (MasterData_object = sub_1BCA91C(MasterData_object, v39->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v39->max_length > 4 )
                    {
                      v39->m_Items[4] = (Il2CppObject *)v76;
                      sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[4], v76, v70, v71, v72, v73, v74, v75);
                      v78 = System_String__Format_62415728((System_String_o *)StringLiteral_25364/*"{0}{1}?stageId={2}&gameDomain={3}&changeWinCond={4}"*/, v39, 0LL);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
                      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_15722/*"WEB_VIEW_TITLE_WARBOARD_RULE"*/, 0LL);
                      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v79);
                      WebViewManager__OpenView(v80, v78, callbackFunc, 0LL);
                      return;
                    }
LABEL_43:
                    sub_1BCAA44(MasterData_object, v31);
                  }
                }
LABEL_44:
                v81 = sub_1BCAA60(MasterData_object);
                sub_1BCA908(v81, 0LL);
              }
            }
          }
        }
      }
    }
    sub_1BCAA3C(MasterData_object, v31);
  }
}