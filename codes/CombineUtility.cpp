bool __fastcall CombineUtility__CheckCombineNeedItemsEnough(
        UserServantEntity_o *userSvtEntity,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        int32_t haveQp,
        int32_t needQp,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x22
  WarQuestSelectionMaster_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x8
  bool v21; // w10
  UserServantEntity_o *v22; // x25
  bool v23; // w21
  unsigned __int64 v24; // x28
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x23
  int32_t v26; // w24
  int32_t v27; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x0
  WarEntity_o *v29; // x0
  __int128 v30; // q0
  int64_t v31; // x0
  __int64 v32; // x25
  __int64 v33; // x26
  int64_t v34; // x24
  int32_t v35; // w3
  _DWORD *v36; // x8
  __int128 v37; // q0
  int64_t v38; // x0
  UserSvtCoinMaster_o *v40; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+60h] [xbp-80h]
  UserSvtCoinEntity_o *entity; // [xsp+80h] [xbp-60h] BYREF
  UserItemEntity_o *v46; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_40FA526 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, needItemIds);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    byte_40FA526 = 1;
  }
  entity = 0LL;
  v46 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
  v17 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v40 = (UserSvtCoinMaster_o *)v17;
  if ( !needItemIds )
LABEL_41:
    sub_B170D4();
  v20 = *(_QWORD *)&needItemIds->max_length;
  v21 = needQp > haveQp;
  if ( (int)v20 >= 1 )
  {
    v22 = userSvtEntity;
    v23 = needQp != 0 && v21;
    v24 = 0LL;
    p_userId = &userSvtEntity->fields.userId;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v20 )
        goto LABEL_42;
      if ( !needItemNums )
        goto LABEL_41;
      if ( v24 >= needItemNums->max_length )
      {
LABEL_42:
        sub_B17100(v17, v18, v19);
        sub_B170A0();
      }
      if ( v23 )
        break;
      v26 = needItemIds->m_Items[v24 + 1];
      v27 = needItemNums->m_Items[v24 + 1];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v28 )
        goto LABEL_41;
      v29 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v28,
              v26,
              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v29 && v29->fields.bannerId == 29 )
      {
        if ( !v22 )
          goto LABEL_41;
        v30 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v44.fields.fakeValue = v30;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v42 = v44;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v42, 0LL);
        v33 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
        v32 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
        v34 = v31;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v47.fields.currentCryptoKey = v33;
        *(_QWORD *)&v47.fields.fakeValue = v32;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v47, 0LL);
        if ( !v40 )
          goto LABEL_41;
        v17 = (WarQuestSelectionMaster_o *)UserSvtCoinMaster__TryGetEntity(v40, &entity, v34, v35, 0LL);
        v22 = userSvtEntity;
        if ( ((unsigned __int8)v17 & 1) == 0 )
          return 0;
        v36 = entity;
        if ( !entity )
          goto LABEL_41;
      }
      else
      {
        if ( !v22 )
          goto LABEL_41;
        v37 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v44.fields.fakeValue = v37;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v43 = v44;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v43, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_41;
        v17 = (WarQuestSelectionMaster_o *)UserItemMaster__TryGetEntity(
                                             Master_WarQuestSelectionMaster,
                                             &v46,
                                             v38,
                                             v26,
                                             0LL);
        if ( ((unsigned __int8)v17 & 1) == 0 )
          return 0;
        v36 = v46;
        if ( !v46 )
          goto LABEL_41;
      }
      if ( v27 > v36[7] )
        return 0;
      LODWORD(v20) = needItemIds->max_length;
      if ( (__int64)++v24 >= (int)v20 )
        return 1;
    }
  }
  return 0;
}


void __fastcall CombineUtility__SetCommandCodeEquippedInfoLabel(
        UILabel_o *equipLabel,
        UILabel_o *nameLabel,
        int32_t attachSvtId,
        bool dispName,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_String_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v24; // x0
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserServantCollectionEntity_o *v27; // x0
  int32_t maxLimitCount; // w21
  struct System_String_o *Empty; // x22
  ServantChangeMaster_o *v30; // x0
  ServantChangeEntity_o *v31; // x0
  ServantLimitAddMaster_o *v32; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x0
  ServantLimitImageMaster_o *v35; // x0
  int32_t ServantLimitCountSealAfter; // w0
  System_String_o *v37; // x0
  float v38; // s8
  UnityEngine_GameObject_o *v39; // x0
  WarEntity_o *v40; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *v41; // [xsp+10h] [xbp-50h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40FA527 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantAddMaster___, nameLabel);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantChangeMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&string_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v20);
    sub_B16FFC(&StringLiteral_9316/*"NOT_SELECT_EQUIPED"*/, v21);
    byte_40FA527 = 1;
  }
  v41 = 0LL;
  entity = 0LL;
  v40 = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9316/*"NOT_SELECT_EQUIPED"*/, 0LL);
  if ( !equipLabel )
    goto LABEL_58;
  UILabel__set_text(equipLabel, v22, 0LL);
  if ( !nameLabel )
    goto LABEL_58;
  UILabel__set_text(nameLabel, string_TypeInfo->static_fields->Empty, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0LL);
  UILabel__set_spacingX(nameLabel, -2, 0LL);
  if ( !dispName )
    return;
  v24 = System_String__Concat_43743732(equipLabel->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(equipLabel, v24, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  v27 = UserServantCollectionMaster__GetEntity(Master_WarQuestSelectionMaster, UserId, attachSvtId, 0LL);
  if ( v27 )
    maxLimitCount = v27->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v30 = (ServantChangeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !v30 )
    goto LABEL_58;
  v31 = ServantChangeMaster__GetEnableEntity(v30, attachSvtId, 0LL);
  if ( v31 )
    Empty = v31->fields.name;
  v41 = 0LL;
  entity = 0LL;
  v40 = 0LL;
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v32 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !v32 )
      goto LABEL_58;
    if ( ServantLimitAddMaster__TryGetEntity(v32, &entity, attachSvtId, maxLimitCount, 0LL) )
    {
      if ( !entity )
        goto LABEL_58;
      Empty = ServantLimitAddEntity__GetOverwriteServantShortName(entity, 0LL);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !v33 )
      goto LABEL_58;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v33,
           &v41,
           attachSvtId,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      if ( !v41 )
        goto LABEL_58;
      Empty = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v41, 0LL);
    }
  }
  if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !v34 )
    goto LABEL_58;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v34,
          &v40,
          attachSvtId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v35 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !v35
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v35,
                                       attachSvtId,
                                       maxLimitCount,
                                       0LL),
        !v40) )
  {
LABEL_58:
    sub_B170D4();
  }
  Empty = ServantEntity__getName((ServantEntity_o *)v40, ServantLimitCountSealAfter, -1, 0LL);
LABEL_53:
  v37 = System_String__Concat_43743732((System_String_o *)StringLiteral_26/*"\n"*/, Empty, 0LL);
  UILabel__set_text(nameLabel, v37, 0LL);
  if ( !Empty )
    goto LABEL_58;
  if ( Empty->fields.m_stringLength >= 7 )
  {
    v38 = 110.0 / (float)nameLabel->fields.mWidth;
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(v39, v38, 0LL);
  }
  else
  {
    UILabel__set_spacingX(nameLabel, 0, 0LL);
  }
}