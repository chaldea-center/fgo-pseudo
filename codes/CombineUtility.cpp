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
  __int64 v18; // x1
  __int64 v19; // x8
  bool v20; // w10
  UserServantEntity_o *v21; // x25
  bool v22; // w21
  unsigned __int64 v23; // x28
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x23
  int32_t v25; // w24
  int32_t v26; // w27
  __int128 v27; // q0
  int64_t v28; // x0
  __int64 v29; // x25
  __int64 v30; // x26
  int64_t v31; // x24
  int32_t v32; // w3
  _DWORD *v33; // x8
  __int128 v34; // q0
  __int64 v36; // x0
  UserSvtCoinMaster_o *v37; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+60h] [xbp-80h]
  UserSvtCoinEntity_o *entity; // [xsp+80h] [xbp-60h] BYREF
  UserItemEntity_o *v43; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_418806F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, needItemIds);
    sub_B2C35C(&Method_DataManager_GetMaster_UserItemMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    byte_418806F = 1;
  }
  entity = 0LL;
  v43 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserItemMaster___);
  v17 = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v37 = (UserSvtCoinMaster_o *)v17;
  if ( !needItemIds )
LABEL_41:
    sub_B2C434(v17, v18);
  v19 = *(_QWORD *)&needItemIds->max_length;
  v20 = needQp > haveQp;
  if ( (int)v19 >= 1 )
  {
    v21 = userSvtEntity;
    v22 = needQp != 0 && v20;
    v23 = 0LL;
    p_userId = &userSvtEntity->fields.userId;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v19 )
        goto LABEL_42;
      if ( !needItemNums )
        goto LABEL_41;
      if ( v23 >= needItemNums->max_length )
      {
LABEL_42:
        v36 = sub_B2C460(v17);
        sub_B2C400(v36, 0LL);
      }
      if ( v22 )
        break;
      v25 = needItemIds->m_Items[v23 + 1];
      v26 = needItemNums->m_Items[v23 + 1];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v17 = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v17 )
        goto LABEL_41;
      v17 = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)v17,
                       v25,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v17 && *(_DWORD *)(v17 + 48) == 29 )
      {
        if ( !v21 )
          goto LABEL_41;
        v27 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v41.fields.fakeValue = v27;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v39 = v41;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v39, 0LL);
        v30 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
        v29 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
        v31 = v28;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v44.fields.currentCryptoKey = v30;
        *(_QWORD *)&v44.fields.fakeValue = v29;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v44, 0LL);
        v17 = (int64_t)v37;
        if ( !v37 )
          goto LABEL_41;
        v17 = UserSvtCoinMaster__TryGetEntity(v37, &entity, v31, v32, 0LL);
        v21 = userSvtEntity;
        if ( (v17 & 1) == 0 )
          return 0;
        v33 = entity;
        if ( !entity )
          goto LABEL_41;
      }
      else
      {
        if ( !v21 )
          goto LABEL_41;
        v34 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v41.fields.fakeValue = v34;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v40 = v41;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v40, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_41;
        v17 = UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v43, v17, v25, 0LL);
        if ( (v17 & 1) == 0 )
          return 0;
        v33 = v43;
        if ( !v43 )
          goto LABEL_41;
      }
      if ( v26 > v33[7] )
        return 0;
      LODWORD(v19) = needItemIds->max_length;
      if ( (__int64)++v23 >= (int)v19 )
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
  __int64 v23; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v25; // x0
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *v27; // x0
  int32_t maxLimitCount; // w21
  struct System_String_o *Empty; // x22
  ServantChangeEntity_o *v30; // x0
  System_String_o *v31; // x0
  float v32; // s8
  UnityEngine_GameObject_o *v33; // x0
  WarEntity_o *v34; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *v35; // [xsp+10h] [xbp-50h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4188070 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantAddMaster___, nameLabel);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantChangeMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v15);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&string_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v20);
    sub_B2C35C(&StringLiteral_9346/*"NOT_SELECT_EQUIPED"*/, v21);
    byte_4188070 = 1;
  }
  v35 = 0LL;
  entity = 0LL;
  v34 = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9346/*"NOT_SELECT_EQUIPED"*/, 0LL);
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
  v25 = System_String__Concat_44305532(equipLabel->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(equipLabel, v25, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !UserId )
    goto LABEL_58;
  v30 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)UserId, attachSvtId, 0LL);
  if ( v30 )
    Empty = v30->fields.name;
  v35 = 0LL;
  entity = 0LL;
  v34 = 0LL;
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
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
    UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !UserId )
      goto LABEL_58;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
           &v35,
           attachSvtId,
           (const MethodInfo_24E412C *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      UserId = (int64_t)v35;
      if ( !v35 )
        goto LABEL_58;
      Empty = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v35, 0LL);
    }
  }
  if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !UserId )
    goto LABEL_58;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
          &v34,
          attachSvtId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !UserId
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   (ServantLimitImageMaster_o *)UserId,
                   attachSvtId,
                   maxLimitCount,
                   0LL),
        !v34) )
  {
LABEL_58:
    sub_B2C434(UserId, v23);
  }
  Empty = ServantEntity__getName((ServantEntity_o *)v34, UserId, -1, 0LL);
LABEL_53:
  v31 = System_String__Concat_44305532((System_String_o *)StringLiteral_26/*"\n"*/, Empty, 0LL);
  UILabel__set_text(nameLabel, v31, 0LL);
  if ( !Empty )
    goto LABEL_58;
  if ( Empty->fields.m_stringLength >= 7 )
  {
    v32 = 110.0 / (float)nameLabel->fields.mWidth;
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(v33, v32, 0LL);
  }
  else
  {
    UILabel__set_spacingX(nameLabel, 0, 0LL);
  }
}