bool __fastcall CombineUtility__CheckCombineNeedItemsEnough(
        UserServantEntity_o *userSvtEntity,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        int32_t haveQp,
        int32_t needQp,
        const MethodInfo *method)
{
  System_Int32_array *v8; // x19
  System_Int32_array *v9; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Master_object; // x21
  int64_t v24; // x0
  __int64 v25; // x1
  __int64 v26; // x8
  bool v27; // w10
  const MethodInfo_2F12C3C **v28; // x25
  const MethodInfo_31B2E40 **v29; // x27
  unsigned __int64 v30; // x28
  int v31; // w29
  int32_t *v32; // x23
  int32_t v33; // w24
  UserServantEntity_o *v34; // x8
  const MethodInfo_31B2E40 **v35; // x22
  UserServantEntity_o *v36; // x27
  int v37; // w23
  System_Int32_array *v38; // x29
  Il2CppObject *v39; // x19
  __int128 v40; // q0
  System_Int32_array *v41; // x21
  const MethodInfo_2F12C3C **v42; // x20
  int64_t v43; // x0
  __int64 v44; // x1
  __int64 v45; // x25
  __int64 v46; // x26
  int64_t v47; // x24
  int32_t v48; // w3
  UserServantEntity_o *v49; // x8
  __int128 v50; // q0
  int32_t *v52; // [xsp+8h] [xbp-F8h]
  UserSvtCoinMaster_o *v53; // [xsp+10h] [xbp-F0h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // [xsp+18h] [xbp-E8h]
  int32_t *v55; // [xsp+20h] [xbp-E0h]
  int32_t v56; // [xsp+2Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+70h] [xbp-90h]
  UserSvtCoinEntity_o *entity; // [xsp+90h] [xbp-70h] BYREF
  UserItemEntity_o *v61; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v8 = needItemNums;
  v9 = needItemIds;
  if ( (byte_4B199D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, needItemIds, needItemNums);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B199D1 = 1;
  }
  entity = 0LL;
  v61 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, needItemIds);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  v24 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v53 = (UserSvtCoinMaster_o *)v24;
  if ( !v9 )
LABEL_38:
    sub_1BCAA3C(v24, v25);
  v26 = *(_QWORD *)&v9->max_length;
  v27 = needQp > haveQp;
  if ( (int)v26 >= 1 )
  {
    v28 = (const MethodInfo_2F12C3C **)&Method_DataManager_GetMaster_ItemMaster___;
    v29 = (const MethodInfo_31B2E40 **)&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__;
    v30 = 0LL;
    v31 = needQp != 0 && v27;
    v32 = &v8->m_Items[1];
    p_userId = &userSvtEntity->fields.userId;
    v55 = &v9->m_Items[1];
    v52 = &v8->m_Items[1];
    while ( 1 )
    {
      if ( v30 >= (unsigned int)v26 )
        goto LABEL_39;
      if ( !v8 )
        goto LABEL_38;
      if ( v30 >= v8->max_length )
LABEL_39:
        sub_1BCAA44(v24, v25);
      if ( (v31 & 1) != 0 )
        break;
      v33 = v55[v30];
      v56 = v32[v30];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
      v24 = (int64_t)DataManager__GetMaster_object_(*v28);
      if ( !v24 )
        goto LABEL_38;
      v24 = (int64_t)DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                       v33,
                       *v29);
      if ( v24 && *(_DWORD *)(v24 + 48) == 29 )
      {
        v34 = userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_38;
        v35 = v29;
        v36 = v34;
        v37 = v31;
        v38 = v8;
        v39 = Master_object;
        v40 = *(_OWORD *)&p_userId->fields.fakeValue;
        v41 = v9;
        *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v59.fields.fakeValue = v40;
        v42 = v28;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
        v57 = v59;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v57, 0LL);
        v46 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
        v45 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
        v47 = v43;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
        *(_QWORD *)&v62.fields.currentCryptoKey = v46;
        *(_QWORD *)&v62.fields.fakeValue = v45;
        v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v62, 0LL);
        v24 = (int64_t)v53;
        if ( !v53 )
          goto LABEL_38;
        v24 = UserSvtCoinMaster__TryGetEntity(v53, &entity, v47, v48, 0LL);
        if ( (v24 & 1) == 0 )
          return 0;
        if ( !entity )
          goto LABEL_38;
        v28 = v42;
        v9 = v41;
        Master_object = v39;
        v8 = v38;
        v31 = v37;
        v32 = v52;
        v49 = v36;
        v29 = v35;
        userSvtEntity = v49;
        if ( v56 > entity->fields.num )
          return 0;
      }
      else
      {
        if ( !userSvtEntity )
          goto LABEL_38;
        v50 = *(_OWORD *)&p_userId->fields.fakeValue;
        *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v59.fields.fakeValue = v50;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
        v58 = v59;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v58, 0LL);
        if ( !Master_object )
          goto LABEL_38;
        v24 = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &v61, v24, v33, 0LL);
        if ( (v24 & 1) == 0 )
          return 0;
        if ( !v61 )
          goto LABEL_38;
        if ( v56 > v61->fields.num )
          return 0;
      }
      LODWORD(v26) = v9->max_length;
      if ( (__int64)++v30 >= (int)v26 )
        return 1;
    }
  }
  return 0;
}


System_String_o *__fastcall CombineUtility__GetServantShortName(int32_t svtId, const MethodInfo *method)
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
  Il2CppObject *Master_object; // x20
  ServantChangeMaster_o *UserId; // x0
  __int64 v27; // x1
  UserServantCollectionEntity_o *v28; // x0
  __int64 v29; // x1
  int32_t maxLimitCount; // w20
  System_String_o *Empty; // x21
  ServantChangeEntity_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  Il2CppObject *v38; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v39; // [xsp+10h] [xbp-40h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B199D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantAddMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantChangeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&string_TypeInfo, v22, v23);
    byte_4B199D3 = 1;
  }
  v39 = 0LL;
  entity = 0LL;
  v38 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
  UserId = (ServantChangeMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_40;
  v28 = UserServantCollectionMaster__GetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          (int64_t)UserId,
          svtId,
          0LL);
  if ( v28 )
    maxLimitCount = v28->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
  UserId = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !UserId )
    goto LABEL_40;
  v32 = ServantChangeMaster__GetEnableEntity(UserId, svtId, 0LL);
  if ( v32 )
    Empty = v32->fields.name;
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
    UserId = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !UserId )
      goto LABEL_40;
    if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)UserId, &entity, svtId, maxLimitCount, 0LL) )
    {
      UserId = (ServantChangeMaster_o *)entity;
      if ( !entity )
        goto LABEL_40;
      Empty = ServantLimitAddEntity__GetOverwriteServantShortName(entity, 0LL);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
    UserId = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !UserId )
      goto LABEL_40;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
           &v39,
           svtId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      UserId = (ServantChangeMaster_o *)v39;
      if ( !v39 )
        goto LABEL_40;
      Empty = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v39, 0LL);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
    UserId = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !UserId )
      goto LABEL_40;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
           &v38,
           svtId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
      UserId = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      if ( UserId )
        return ServantLimitImageMaster__GetLimitCountSealedServantName(
                 (ServantLimitImageMaster_o *)UserId,
                 svtId,
                 maxLimitCount,
                 0LL);
LABEL_40:
      sub_1BCAA3C(UserId, v27);
    }
  }
  return Empty;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineUtility__SetCommandCodeEquippedInfoLabel(
        UILabel_o *equipLabel,
        UILabel_o *nameLabel,
        int32_t attachSvtId,
        bool dispName,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x1
  System_String_o *ServantShortName; // x20
  System_String_o *v21; // x0
  float v22; // s8
  UnityEngine_GameObject_o *v23; // x0

  if ( (byte_4B199D2 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, nameLabel, *(_QWORD *)&attachSvtId);
    sub_1BCA7E0(&string_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_9422/*"NOT_SELECT_EQUIPED"*/, v13, v14);
    byte_4B199D2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameLabel);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9422/*"NOT_SELECT_EQUIPED"*/, 0LL);
  if ( !equipLabel )
    goto LABEL_13;
  UILabel__set_text(equipLabel, v15, 0LL);
  if ( !nameLabel )
    goto LABEL_13;
  UILabel__set_text(nameLabel, string_TypeInfo->static_fields->Empty, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0LL);
  UILabel__set_spacingX(nameLabel, -2, 0LL);
  if ( !dispName )
    return;
  v18 = System_String__Concat_62401220(equipLabel->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(equipLabel, v18, 0LL);
  ServantShortName = CombineUtility__GetServantShortName(attachSvtId, v19);
  v21 = System_String__Concat_62401220((System_String_o *)StringLiteral_43/*"\n"*/, ServantShortName, 0LL);
  UILabel__set_text(nameLabel, v21, 0LL);
  if ( !ServantShortName )
LABEL_13:
    sub_1BCAA3C(v15, v16);
  if ( ServantShortName->fields._stringLength >= 7 )
  {
    v22 = 110.0 / (float)nameLabel->fields.mWidth;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(v23, v22, 0LL);
  }
  else
  {
    UILabel__set_spacingX(nameLabel, 0, 0LL);
  }
}