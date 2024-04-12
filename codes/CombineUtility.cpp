bool __fastcall CombineUtility__CheckCombineNeedItemsEnough(
        UserServantEntity_o *userSvtEntity,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        int32_t haveQp,
        int32_t needQp,
        const MethodInfo *method)
{
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t v11; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  bool v14; // w10
  UserServantEntity_o *v15; // x25
  bool v16; // w21
  unsigned __int64 v17; // x28
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x23
  int32_t v19; // w24
  int32_t v20; // w27
  __int128 v21; // q0
  int64_t v22; // x0
  __int64 v23; // x25
  __int64 v24; // x26
  int64_t v25; // x24
  int32_t v26; // w3
  _DWORD *v27; // x8
  __int128 v28; // q0
  __int64 v30; // x0
  UserSvtCoinMaster_o *v31; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-80h]
  UserSvtCoinEntity_o *entity; // [xsp+80h] [xbp-60h] BYREF
  UserItemEntity_o *v37; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_42B0079 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B0079 = 1;
  }
  entity = 0LL;
  v37 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserItemMaster___);
  v11 = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v31 = (UserSvtCoinMaster_o *)v11;
  if ( !needItemIds )
LABEL_41:
    sub_B52A5C(v11, v12);
  v13 = *(_QWORD *)&needItemIds->max_length;
  v14 = needQp > haveQp;
  if ( (int)v13 >= 1 )
  {
    v15 = userSvtEntity;
    v16 = needQp != 0 && v14;
    v17 = 0LL;
    p_userId = &userSvtEntity->fields.userId;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v13 )
        goto LABEL_42;
      if ( !needItemNums )
        goto LABEL_41;
      if ( v17 >= needItemNums->max_length )
      {
LABEL_42:
        v30 = sub_B52A88(v11);
        sub_B52A28(v30, 0LL);
      }
      if ( v16 )
        break;
      v19 = needItemIds->m_Items[v17 + 1];
      v20 = needItemNums->m_Items[v17 + 1];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v11 = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v11 )
        goto LABEL_41;
      v11 = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)v11,
                       v19,
                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v11 && *(_DWORD *)(v11 + 48) == 29 )
      {
        if ( !v15 )
          goto LABEL_41;
        v21 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v35.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v33 = v35;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v33, 0LL);
        v24 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
        v25 = v22;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v38.fields.currentCryptoKey = v24;
        *(_QWORD *)&v38.fields.fakeValue = v23;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v38, 0LL);
        v11 = (int64_t)v31;
        if ( !v31 )
          goto LABEL_41;
        v11 = UserSvtCoinMaster__TryGetEntity(v31, &entity, v25, v26, 0LL);
        v15 = userSvtEntity;
        if ( (v11 & 1) == 0 )
          return 0;
        v27 = entity;
        if ( !entity )
          goto LABEL_41;
      }
      else
      {
        if ( !v15 )
          goto LABEL_41;
        v28 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v35.fields.fakeValue = v28;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v35;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v34, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_41;
        v11 = UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v37, v11, v19, 0LL);
        if ( (v11 & 1) == 0 )
          return 0;
        v27 = v37;
        if ( !v37 )
          goto LABEL_41;
      }
      if ( v20 > v27[7] )
        return 0;
      LODWORD(v13) = needItemIds->max_length;
      if ( (__int64)++v17 >= (int)v13 )
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
  int64_t UserId; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v12; // x0
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *v14; // x0
  int32_t maxLimitCount; // w21
  struct System_String_o *Empty; // x22
  ServantChangeEntity_o *v17; // x0
  System_String_o *v18; // x0
  float v19; // s8
  UnityEngine_GameObject_o *v20; // x0
  WarEntity_o *v21; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *v22; // [xsp+10h] [xbp-50h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42B007A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantChangeMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_9403/*"NOT_SELECT_EQUIPED"*/);
    byte_42B007A = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  v21 = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9403/*"NOT_SELECT_EQUIPED"*/, 0LL);
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
  v12 = System_String__Concat_44568316(equipLabel->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(equipLabel, v12, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  v14 = UserServantCollectionMaster__GetEntity(Master_WarQuestSelectionMaster, UserId, attachSvtId, 0LL);
  if ( v14 )
    maxLimitCount = v14->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !UserId )
    goto LABEL_58;
  v17 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)UserId, attachSvtId, 0LL);
  if ( v17 )
    Empty = v17->fields.name;
  v22 = 0LL;
  entity = 0LL;
  v21 = 0LL;
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
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
    UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !UserId )
      goto LABEL_58;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
           &v22,
           attachSvtId,
           (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      UserId = (int64_t)v22;
      if ( !v22 )
        goto LABEL_58;
      Empty = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v22, 0LL);
    }
  }
  if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !UserId )
    goto LABEL_58;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
          &v21,
          attachSvtId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !UserId
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   (ServantLimitImageMaster_o *)UserId,
                   attachSvtId,
                   maxLimitCount,
                   0LL),
        !v21) )
  {
LABEL_58:
    sub_B52A5C(UserId, v10);
  }
  Empty = ServantEntity__getName((ServantEntity_o *)v21, UserId, -1, 0LL);
LABEL_53:
  v18 = System_String__Concat_44568316((System_String_o *)StringLiteral_26/*"\n"*/, Empty, 0LL);
  UILabel__set_text(nameLabel, v18, 0LL);
  if ( !Empty )
    goto LABEL_58;
  if ( Empty->fields.m_stringLength >= 7 )
  {
    v19 = 110.0 / (float)nameLabel->fields.mWidth;
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(v20, v19, 0LL);
  }
  else
  {
    UILabel__set_spacingX(nameLabel, 0, 0LL);
  }
}