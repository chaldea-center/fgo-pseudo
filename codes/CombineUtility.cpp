bool __fastcall CombineUtility__CheckCombineNeedItemsEnough(
        UserServantEntity_o *userSvtEntity,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        int32_t haveQp,
        int32_t needQp,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t v12; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  bool v15; // w10
  const MethodInfo_2FAFDB0 **v16; // x25
  const MethodInfo_325BDC8 **v17; // x27
  unsigned __int64 v18; // x28
  int v19; // w29
  int32_t *v20; // x23
  int32_t v21; // w24
  UserServantEntity_o *v22; // x8
  const MethodInfo_325BDC8 **v23; // x22
  UserServantEntity_o *v24; // x27
  int v25; // w23
  System_Int32_array *v26; // x29
  Il2CppObject *v27; // x19
  __int128 v28; // q0
  System_Int32_array *v29; // x21
  const MethodInfo_2FAFDB0 **v30; // x20
  int64_t v31; // x0
  __int64 v32; // x25
  __int64 v33; // x26
  int64_t v34; // x24
  int32_t v35; // w3
  UserServantEntity_o *v36; // x8
  __int128 v37; // q0
  int32_t *v39; // [xsp+8h] [xbp-F8h]
  UserSvtCoinMaster_o *v40; // [xsp+10h] [xbp-F0h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // [xsp+18h] [xbp-E8h]
  int32_t *v42; // [xsp+20h] [xbp-E0h]
  int32_t v43; // [xsp+2Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+70h] [xbp-90h]
  UserSvtCoinEntity_o *entity; // [xsp+90h] [xbp-70h] BYREF
  UserItemEntity_o *v48; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4BDFE28 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BDFE28 = 1;
  }
  entity = 0LL;
  v48 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  v12 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v40 = (UserSvtCoinMaster_o *)v12;
  if ( !needItemIds )
LABEL_38:
    sub_1C22094(v12, v13);
  v14 = *(_QWORD *)&needItemIds->max_length;
  v15 = needQp > haveQp;
  if ( (int)v14 >= 1 )
  {
    v16 = (const MethodInfo_2FAFDB0 **)&Method_DataManager_GetMaster_ItemMaster___;
    v17 = (const MethodInfo_325BDC8 **)&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__;
    v18 = 0LL;
    v19 = needQp != 0 && v15;
    v20 = &needItemNums->m_Items[1];
    p_userId = &userSvtEntity->fields.userId;
    v42 = &needItemIds->m_Items[1];
    v39 = &needItemNums->m_Items[1];
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v14 )
        goto LABEL_39;
      if ( !needItemNums )
        goto LABEL_38;
      if ( v18 >= needItemNums->max_length )
LABEL_39:
        sub_1C2209C(v12, v13);
      if ( (v19 & 1) != 0 )
        break;
      v21 = v42[v18];
      v43 = v20[v18];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v12 = (int64_t)DataManager__GetMaster_object_(*v16);
      if ( !v12 )
        goto LABEL_38;
      v12 = (int64_t)DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                       v21,
                       *v17);
      if ( v12 && *(_DWORD *)(v12 + 48) == 29 )
      {
        v22 = userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_38;
        v23 = v17;
        v24 = v22;
        v25 = v19;
        v26 = needItemNums;
        v27 = Master_object;
        v28 = *(_OWORD *)&p_userId->fields.fakeValue;
        v29 = needItemIds;
        *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v46.fields.fakeValue = v28;
        v30 = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v44 = v46;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v44, 0LL);
        v33 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
        v32 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
        v34 = v31;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v49.fields.currentCryptoKey = v33;
        *(_QWORD *)&v49.fields.fakeValue = v32;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v49, 0LL);
        v12 = (int64_t)v40;
        if ( !v40 )
          goto LABEL_38;
        v12 = UserSvtCoinMaster__TryGetEntity(v40, &entity, v34, v35, 0LL);
        if ( (v12 & 1) == 0 )
          return 0;
        if ( !entity )
          goto LABEL_38;
        v16 = v30;
        needItemIds = v29;
        Master_object = v27;
        needItemNums = v26;
        v19 = v25;
        v20 = v39;
        v36 = v24;
        v17 = v23;
        userSvtEntity = v36;
        if ( v43 > entity->fields.num )
          return 0;
      }
      else
      {
        if ( !userSvtEntity )
          goto LABEL_38;
        v37 = *(_OWORD *)&p_userId->fields.fakeValue;
        *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v46.fields.fakeValue = v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v45 = v46;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v45, 0LL);
        if ( !Master_object )
          goto LABEL_38;
        v12 = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &v48, v12, v21, 0LL);
        if ( (v12 & 1) == 0 )
          return 0;
        if ( !v48 )
          goto LABEL_38;
        if ( v43 > v48->fields.num )
          return 0;
      }
      LODWORD(v14) = needItemIds->max_length;
      if ( (__int64)++v18 >= (int)v14 )
        return 1;
    }
  }
  return 0;
}


System_String_o *__fastcall CombineUtility__GetServantShortName(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  ServantChangeMaster_o *v5; // x0
  UserServantCollectionEntity_o *v6; // x0
  int32_t maxLimitCount; // w20
  System_String_o *Empty; // x21
  ServantChangeEntity_o *v9; // x0
  Il2CppObject *v11; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v12; // [xsp+10h] [xbp-40h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BDFE2A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantChangeMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    byte_4BDFE2A = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  v11 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v5 = (ServantChangeMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = (ServantChangeMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_44;
  v6 = UserServantCollectionMaster__GetEntity(
         (UserServantCollectionMaster_o *)Master_object,
         (int64_t)v5[2].fields.list[1].monitor,
         svtId,
         0LL);
  if ( v6 )
    maxLimitCount = v6->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v5 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !v5 )
    goto LABEL_44;
  v9 = ServantChangeMaster__GetEnableEntity(v5, svtId, 0LL);
  if ( v9 )
    Empty = v9->fields.name;
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !v5 )
      goto LABEL_44;
    if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v5, &entity, svtId, maxLimitCount, 0LL) )
    {
      v5 = (ServantChangeMaster_o *)entity;
      if ( !entity )
        goto LABEL_44;
      Empty = ServantLimitAddEntity__GetOverwriteServantShortName(entity, 0LL);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !v5 )
      goto LABEL_44;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v5,
           &v12,
           svtId,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      v5 = (ServantChangeMaster_o *)v12;
      if ( !v12 )
        goto LABEL_44;
      Empty = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v12, 0LL);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v5 )
      goto LABEL_44;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v5,
           &v11,
           svtId,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v5 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      if ( v5 )
        return ServantLimitImageMaster__GetLimitCountSealedServantName(
                 (ServantLimitImageMaster_o *)v5,
                 svtId,
                 maxLimitCount,
                 0,
                 0LL);
LABEL_44:
      sub_1C22094(v5, v3);
    }
  }
  return Empty;
}


void __fastcall CombineUtility__SetCommandCodeEquippedInfoLabel(
        UILabel_o *equipLabel,
        UILabel_o *nameLabel,
        int32_t attachSvtId,
        bool dispName,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_String_o *ServantShortName; // x20
  System_String_o *v15; // x0
  float v16; // s8
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_4BDFE29 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_9484/*"NOT_SELECT_EQUIPED"*/);
    byte_4BDFE29 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9484/*"NOT_SELECT_EQUIPED"*/, 0LL);
  if ( !equipLabel )
    goto LABEL_13;
  UILabel__set_text(equipLabel, v9, 0LL);
  if ( !nameLabel )
    goto LABEL_13;
  UILabel__set_text(nameLabel, string_TypeInfo->static_fields->Empty, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0LL);
  UILabel__set_spacingX(nameLabel, -2, 0LL);
  if ( !dispName )
    return;
  v12 = System_String__Concat_63115476(equipLabel->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(equipLabel, v12, 0LL);
  ServantShortName = CombineUtility__GetServantShortName(attachSvtId, v13);
  v15 = System_String__Concat_63115476((System_String_o *)StringLiteral_43/*"\n"*/, ServantShortName, 0LL);
  UILabel__set_text(nameLabel, v15, 0LL);
  if ( !ServantShortName )
LABEL_13:
    sub_1C22094(v9, v10);
  if ( ServantShortName->fields._stringLength >= 7 )
  {
    v16 = 110.0 / (float)nameLabel->fields.mWidth;
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(v17, v16, 0LL);
  }
  else
  {
    UILabel__set_spacingX(nameLabel, 0, 0LL);
  }
}