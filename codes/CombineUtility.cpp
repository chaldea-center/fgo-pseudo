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
  int64_t v17; // x0
  __int64 v18; // x8
  bool v19; // w10
  UserServantEntity_o *v20; // x25
  bool v21; // w21
  unsigned __int64 v22; // x28
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x23
  int32_t v24; // w24
  int32_t v25; // w27
  __int128 v26; // q0
  int64_t v27; // x0
  __int64 v28; // x25
  __int64 v29; // x26
  int64_t v30; // x24
  int32_t v31; // w3
  _DWORD *v32; // x8
  __int128 v33; // q0
  __int64 v35; // x0
  UserSvtCoinMaster_o *v36; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+60h] [xbp-80h]
  UserSvtCoinEntity_o *entity; // [xsp+80h] [xbp-60h] BYREF
  UserItemEntity_o *v42; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42147B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, needItemIds);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserItemMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    byte_42147B1 = 1;
  }
  entity = 0LL;
  v42 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserItemMaster___);
  v17 = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v36 = (UserSvtCoinMaster_o *)v17;
  if ( !needItemIds )
LABEL_41:
    sub_B0D97C(v17);
  v18 = *(_QWORD *)&needItemIds->max_length;
  v19 = needQp > haveQp;
  if ( (int)v18 >= 1 )
  {
    v20 = userSvtEntity;
    v21 = needQp != 0 && v19;
    v22 = 0LL;
    p_userId = &userSvtEntity->fields.userId;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v18 )
        goto LABEL_42;
      if ( !needItemNums )
        goto LABEL_41;
      if ( v22 >= needItemNums->max_length )
      {
LABEL_42:
        v35 = sub_B0D9A8(v17);
        sub_B0D948(v35, 0LL);
      }
      if ( v21 )
        break;
      v24 = needItemIds->m_Items[v22 + 1];
      v25 = needItemNums->m_Items[v22 + 1];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v17 = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v17 )
        goto LABEL_41;
      v17 = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)v17,
                       v24,
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v17 && *(_DWORD *)(v17 + 48) == 29 )
      {
        if ( !v20 )
          goto LABEL_41;
        v26 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v40.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v38 = v40;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v38, 0LL);
        v29 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
        v28 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
        v30 = v27;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v43.fields.currentCryptoKey = v29;
        *(_QWORD *)&v43.fields.fakeValue = v28;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v43, 0LL);
        v17 = (int64_t)v36;
        if ( !v36 )
          goto LABEL_41;
        v17 = UserSvtCoinMaster__TryGetEntity(v36, &entity, v30, v31, 0LL);
        v20 = userSvtEntity;
        if ( (v17 & 1) == 0 )
          return 0;
        v32 = entity;
        if ( !entity )
          goto LABEL_41;
      }
      else
      {
        if ( !v20 )
          goto LABEL_41;
        v33 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v40.fields.fakeValue = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v39 = v40;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v39, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_41;
        v17 = UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v42, v17, v24, 0LL);
        if ( (v17 & 1) == 0 )
          return 0;
        v32 = v42;
        if ( !v42 )
          goto LABEL_41;
      }
      if ( v25 > v32[7] )
        return 0;
      LODWORD(v18) = needItemIds->max_length;
      if ( (__int64)++v22 >= (int)v18 )
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
  int64_t UserId; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v24; // x0
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *v26; // x0
  int32_t maxLimitCount; // w21
  struct System_String_o *Empty; // x22
  ServantChangeEntity_o *v29; // x0
  System_String_o *v30; // x0
  float v31; // s8
  UnityEngine_GameObject_o *v32; // x0
  WarEntity_o *v33; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *v34; // [xsp+10h] [xbp-50h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42147B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantAddMaster___, nameLabel);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantChangeMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v15);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&NetworkManager_TypeInfo, v18);
    sub_B0D8A4(&string_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v20);
    sub_B0D8A4(&StringLiteral_9369/*"NOT_SELECT_EQUIPED"*/, v21);
    byte_42147B2 = 1;
  }
  v34 = 0LL;
  entity = 0LL;
  v33 = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9369/*"NOT_SELECT_EQUIPED"*/, 0LL);
  if ( !equipLabel )
    goto LABEL_58;
  UILabel__set_text(equipLabel, (System_String_o *)UserId, 0LL);
  if ( !nameLabel )
    goto LABEL_58;
  UILabel__set_text(nameLabel, string_TypeInfo->static_fields->Empty, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0LL);
  UILabel__set_spacingX(nameLabel, -2, 0LL);
  if ( !dispName )
    return;
  v24 = System_String__Concat_43849904(equipLabel->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(equipLabel, v24, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  v26 = UserServantCollectionMaster__GetEntity(Master_WarQuestSelectionMaster, UserId, attachSvtId, 0LL);
  if ( v26 )
    maxLimitCount = v26->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !UserId )
    goto LABEL_58;
  v29 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)UserId, attachSvtId, 0LL);
  if ( v29 )
    Empty = v29->fields.name;
  v34 = 0LL;
  entity = 0LL;
  v33 = 0LL;
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !UserId )
      goto LABEL_58;
    if ( ServantLimitAddMaster__TryGetEntity(
           (ServantLimitAddMaster_o *)UserId,
           &entity,
           attachSvtId,
           maxLimitCount,
           0LL) )
    {
      UserId = (int64_t)entity;
      if ( !entity )
        goto LABEL_58;
      Empty = ServantLimitAddEntity__GetOverwriteServantShortName(entity, 0LL);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !UserId )
      goto LABEL_58;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
           &v34,
           attachSvtId,
           (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      UserId = (int64_t)v34;
      if ( !v34 )
        goto LABEL_58;
      Empty = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v34, 0LL);
    }
  }
  if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !UserId )
    goto LABEL_58;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
          &v33,
          attachSvtId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !UserId
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   (ServantLimitImageMaster_o *)UserId,
                   attachSvtId,
                   maxLimitCount,
                   0LL),
        !v33) )
  {
LABEL_58:
    sub_B0D97C(UserId);
  }
  Empty = ServantEntity__getName((ServantEntity_o *)v33, UserId, -1, 0LL);
LABEL_53:
  v30 = System_String__Concat_43849904((System_String_o *)StringLiteral_26/*"\n"*/, Empty, 0LL);
  UILabel__set_text(nameLabel, v30, 0LL);
  if ( !Empty )
    goto LABEL_58;
  if ( Empty->fields.m_stringLength >= 7 )
  {
    v31 = 110.0 / (float)nameLabel->fields.mWidth;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(v32, v31, 0LL);
  }
  else
  {
    UILabel__set_spacingX(nameLabel, 0, 0LL);
  }
}