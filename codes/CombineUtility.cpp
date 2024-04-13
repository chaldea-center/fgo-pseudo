// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineUtility__CheckCombineNeedItemsEnough(
        UserServantEntity_o *userSvtEntity,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        int32_t haveQp,
        int32_t needQp,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t v29; // x0
  __int64 v30; // x1
  __int64 v31; // x8
  bool v32; // w10
  UserServantEntity_o *v33; // x25
  bool v34; // w21
  unsigned __int64 v35; // x28
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x23
  int32_t v37; // w24
  int32_t v38; // w27
  __int128 v39; // q0
  int64_t v40; // x0
  __int64 v41; // x25
  __int64 v42; // x26
  int64_t v43; // x24
  int32_t v44; // w3
  _DWORD *v45; // x8
  __int128 v46; // q0
  __int64 v48; // x0
  UserSvtCoinMaster_o *v49; // [xsp+0h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+60h] [xbp-80h]
  UserSvtCoinEntity_o *entity; // [xsp+80h] [xbp-60h] BYREF
  UserItemEntity_o *v55; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_42E8B5A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ItemMaster___,
      (_DWORD)needItemIds,
      (_DWORD)needItemNums,
      *(_QWORD *)&haveQp);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25, v26, v27);
    byte_42E8B5A = 1;
  }
  entity = 0LL;
  v55 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
  v29 = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v49 = (UserSvtCoinMaster_o *)v29;
  if ( !needItemIds )
LABEL_41:
    sub_B5D69C(v29, v30);
  v31 = *(_QWORD *)&needItemIds->max_length;
  v32 = needQp > haveQp;
  if ( (int)v31 >= 1 )
  {
    v33 = userSvtEntity;
    v34 = needQp != 0 && v32;
    v35 = 0LL;
    p_userId = &userSvtEntity->fields.userId;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v31 )
        goto LABEL_42;
      if ( !needItemNums )
        goto LABEL_41;
      if ( v35 >= needItemNums->max_length )
      {
LABEL_42:
        v48 = sub_B5D6C8(v29);
        sub_B5D668(v48, 0LL);
      }
      if ( v34 )
        break;
      v37 = needItemIds->m_Items[v35 + 1];
      v38 = needItemNums->m_Items[v35 + 1];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v29 = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v29 )
        goto LABEL_41;
      v29 = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)v29,
                       v37,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v29 && *(_DWORD *)(v29 + 48) == 29 )
      {
        if ( !v33 )
          goto LABEL_41;
        v39 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v53.fields.fakeValue = v39;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v51 = v53;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v51, 0LL);
        v42 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
        v41 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
        v43 = v40;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v56.fields.currentCryptoKey = v42;
        *(_QWORD *)&v56.fields.fakeValue = v41;
        v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v56, 0LL);
        v29 = (int64_t)v49;
        if ( !v49 )
          goto LABEL_41;
        v29 = UserSvtCoinMaster__TryGetEntity(v49, &entity, v43, v44, 0LL);
        v33 = userSvtEntity;
        if ( (v29 & 1) == 0 )
          return 0;
        v45 = entity;
        if ( !entity )
          goto LABEL_41;
      }
      else
      {
        if ( !v33 )
          goto LABEL_41;
        v46 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v53.fields.fakeValue = v46;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v52 = v53;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v52, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_41;
        v29 = UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v55, v29, v37, 0LL);
        if ( (v29 & 1) == 0 )
          return 0;
        v45 = v55;
        if ( !v55 )
          goto LABEL_41;
      }
      if ( v38 > v45[7] )
        return 0;
      LODWORD(v31) = needItemIds->max_length;
      if ( (__int64)++v35 >= (int)v31 )
        return 1;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineUtility__SetCommandCodeEquippedInfoLabel(
        UILabel_o *equipLabel,
        UILabel_o *nameLabel,
        int32_t attachSvtId,
        bool dispName,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int64_t UserId; // x0
  __int64 v49; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v51; // x0
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *v53; // x0
  int32_t maxLimitCount; // w21
  struct System_String_o *Empty; // x22
  ServantChangeEntity_o *v56; // x0
  System_String_o *v57; // x0
  float v58; // s8
  UnityEngine_GameObject_o *v59; // x0
  WarEntity_o *v60; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *v61; // [xsp+10h] [xbp-50h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42E8B5B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantAddMaster___, (_DWORD)nameLabel, attachSvtId, dispName);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantChangeMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v21, v22, v23);
    sub_B5D5C4(&DataManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v27, v28, v29);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v30, v31, v32);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&NetworkManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&string_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_9442/*"NOT_SELECT_EQUIPED"*/, v45, v46, v47);
    byte_42E8B5B = 1;
  }
  v61 = 0LL;
  entity = 0LL;
  v60 = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9442/*"NOT_SELECT_EQUIPED"*/, 0LL);
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
  v51 = System_String__Concat_44577788(equipLabel->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(equipLabel, v51, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  v53 = UserServantCollectionMaster__GetEntity(Master_WarQuestSelectionMaster, UserId, attachSvtId, 0LL);
  if ( v53 )
    maxLimitCount = v53->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !UserId )
    goto LABEL_58;
  v56 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)UserId, attachSvtId, 0LL);
  if ( v56 )
    Empty = v56->fields.name;
  v61 = 0LL;
  entity = 0LL;
  v60 = 0LL;
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
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
    UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !UserId )
      goto LABEL_58;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
           &v61,
           attachSvtId,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      UserId = (int64_t)v61;
      if ( !v61 )
        goto LABEL_58;
      Empty = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v61, 0LL);
    }
  }
  if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !UserId )
    goto LABEL_58;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
          &v60,
          attachSvtId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !UserId
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   (ServantLimitImageMaster_o *)UserId,
                   attachSvtId,
                   maxLimitCount,
                   0LL),
        !v60) )
  {
LABEL_58:
    sub_B5D69C(UserId, v49);
  }
  Empty = ServantEntity__getName((ServantEntity_o *)v60, UserId, -1, 0LL);
LABEL_53:
  v57 = System_String__Concat_44577788((System_String_o *)StringLiteral_26/*"\n"*/, Empty, 0LL);
  UILabel__set_text(nameLabel, v57, 0LL);
  if ( !Empty )
    goto LABEL_58;
  if ( Empty->fields.m_stringLength >= 7 )
  {
    v58 = 110.0 / (float)nameLabel->fields.mWidth;
    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(v59, v58, 0LL);
  }
  else
  {
    UILabel__set_spacingX(nameLabel, 0, 0LL);
  }
}