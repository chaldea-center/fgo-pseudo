bool __fastcall CombineUtility__CheckCombineNeedItemsEnough(
        UserServantEntity_o *userSvtEntity,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        int32_t haveQp,
        int32_t needQp,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *Master_object; // x21
  int64_t v18; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  bool v21; // w10
  const MethodInfo_2D62BBC **v22; // x25
  const MethodInfo_2FE6A4C **v23; // x27
  unsigned __int64 v24; // x28
  int v25; // w29
  int32_t *v26; // x23
  int32_t v27; // w24
  UserServantEntity_o *v28; // x8
  const MethodInfo_2FE6A4C **v29; // x22
  UserServantEntity_o *v30; // x27
  int v31; // w23
  System_Int32_array *v32; // x29
  Il2CppObject *v33; // x19
  __int128 v34; // q0
  System_Int32_array *v35; // x21
  const MethodInfo_2D62BBC **v36; // x20
  int64_t v37; // x0
  __int64 v38; // x25
  __int64 v39; // x26
  int64_t v40; // x24
  int32_t v41; // w3
  UserServantEntity_o *v42; // x8
  __int128 v43; // q0
  int32_t *v45; // [xsp+8h] [xbp-F8h]
  UserSvtCoinMaster_o *v46; // [xsp+10h] [xbp-F0h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // [xsp+18h] [xbp-E8h]
  int32_t *v48; // [xsp+20h] [xbp-E0h]
  int32_t v49; // [xsp+2Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+70h] [xbp-90h]
  UserSvtCoinEntity_o *entity; // [xsp+90h] [xbp-70h] BYREF
  UserItemEntity_o *v54; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v9 = needItemIds;
  if ( (byte_48E5D84 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_ItemMaster___, needItemIds);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserItemMaster___, v11);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v12);
    sub_1B00CCC(&DataManager_TypeInfo, v13);
    sub_1B00CCC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    byte_48E5D84 = 1;
  }
  entity = 0LL;
  v54 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserItemMaster___);
  v18 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v46 = (UserSvtCoinMaster_o *)v18;
  if ( !v9 )
LABEL_38:
    sub_1B00F28(v18, v19);
  v20 = *(_QWORD *)&v9->max_length;
  v21 = needQp > haveQp;
  if ( (int)v20 >= 1 )
  {
    v22 = (const MethodInfo_2D62BBC **)&Method_DataManager_GetMaster_ItemMaster___;
    v23 = (const MethodInfo_2FE6A4C **)&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__;
    v24 = 0LL;
    v25 = needQp != 0 && v21;
    v26 = &needItemNums->m_Items[1];
    p_userId = &userSvtEntity->fields.userId;
    v48 = &v9->m_Items[1];
    v45 = &needItemNums->m_Items[1];
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v20 )
        goto LABEL_39;
      if ( !needItemNums )
        goto LABEL_38;
      if ( v24 >= needItemNums->max_length )
LABEL_39:
        sub_1B00F30(v18, v19);
      if ( (v25 & 1) != 0 )
        break;
      v27 = v48[v24];
      v49 = v26[v24];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v18 = (int64_t)DataManager__GetMaster_object_(*v22);
      if ( !v18 )
        goto LABEL_38;
      v18 = (int64_t)DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                       v27,
                       *v23);
      if ( v18 && *(_DWORD *)(v18 + 48) == 29 )
      {
        v28 = userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_38;
        v29 = v23;
        v30 = v28;
        v31 = v25;
        v32 = needItemNums;
        v33 = Master_object;
        v34 = *(_OWORD *)&p_userId->fields.fakeValue;
        v35 = v9;
        *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v52.fields.fakeValue = v34;
        v36 = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v50 = v52;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v50, 0LL);
        v39 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
        v38 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
        v40 = v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v55.fields.currentCryptoKey = v39;
        *(_QWORD *)&v55.fields.fakeValue = v38;
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v55, 0LL);
        v18 = (int64_t)v46;
        if ( !v46 )
          goto LABEL_38;
        v18 = UserSvtCoinMaster__TryGetEntity(v46, &entity, v40, v41, 0LL);
        if ( (v18 & 1) == 0 )
          return 0;
        if ( !entity )
          goto LABEL_38;
        v22 = v36;
        v9 = v35;
        Master_object = v33;
        needItemNums = v32;
        v25 = v31;
        v26 = v45;
        v42 = v30;
        v23 = v29;
        userSvtEntity = v42;
        if ( v49 > entity->fields.num )
          return 0;
      }
      else
      {
        if ( !userSvtEntity )
          goto LABEL_38;
        v43 = *(_OWORD *)&p_userId->fields.fakeValue;
        *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v52.fields.fakeValue = v43;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v51 = v52;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v51, 0LL);
        if ( !Master_object )
          goto LABEL_38;
        v18 = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &v54, v18, v27, 0LL);
        if ( (v18 & 1) == 0 )
          return 0;
        if ( !v54 )
          goto LABEL_38;
        if ( v49 > v54->fields.num )
          return 0;
      }
      LODWORD(v20) = v9->max_length;
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
  int64_t UserId; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v25; // x0
  Il2CppObject *Master_object; // x21
  UserServantCollectionEntity_o *v27; // x0
  int32_t maxLimitCount; // w21
  struct System_String_o *Empty; // x22
  ServantChangeEntity_o *v30; // x0
  System_String_o *v31; // x0
  float v32; // s8
  UnityEngine_GameObject_o *v33; // x0
  ServantEntity_o *v34; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *v35; // [xsp+8h] [xbp-58h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_48E5D85 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantAddMaster___, nameLabel);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantChangeMaster___, v9);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v10);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13);
    sub_1B00CCC(&DataManager_TypeInfo, v14);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1B00CCC(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v16);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v17);
    sub_1B00CCC(&NetworkManager_TypeInfo, v18);
    sub_1B00CCC(&string_TypeInfo, v19);
    sub_1B00CCC(&StringLiteral_43/*"\n"*/, v20);
    sub_1B00CCC(&StringLiteral_9187/*"NOT_SELECT_EQUIPED"*/, v21);
    byte_48E5D85 = 1;
  }
  entity = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9187/*"NOT_SELECT_EQUIPED"*/, 0LL);
  if ( !equipLabel )
    goto LABEL_50;
  UILabel__set_text(equipLabel, (System_String_o *)UserId, 0LL);
  if ( !nameLabel )
    goto LABEL_50;
  UILabel__set_text(nameLabel, string_TypeInfo->static_fields->Empty, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0LL);
  UILabel__set_spacingX(nameLabel, -2, 0LL);
  if ( !dispName )
    return;
  v25 = System_String__Concat_60325748(equipLabel->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(equipLabel, v25, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_50;
  v27 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)Master_object, UserId, attachSvtId, 0LL);
  if ( v27 )
    maxLimitCount = v27->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !UserId )
    goto LABEL_50;
  v30 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)UserId, attachSvtId, 0LL);
  if ( v30 )
    Empty = v30->fields.name;
  entity = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !UserId )
      goto LABEL_50;
    if ( ServantLimitAddMaster__TryGetEntity(
           (ServantLimitAddMaster_o *)UserId,
           &entity,
           attachSvtId,
           maxLimitCount,
           0LL) )
    {
      UserId = (int64_t)entity;
      if ( !entity )
        goto LABEL_50;
      Empty = ServantLimitAddEntity__GetOverwriteServantShortName(entity, 0LL);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !UserId )
      goto LABEL_50;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
           &v35,
           attachSvtId,
           (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      UserId = (int64_t)v35;
      if ( !v35 )
        goto LABEL_50;
      Empty = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v35, 0LL);
    }
  }
  if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
    goto LABEL_45;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !UserId )
    goto LABEL_50;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
          (Il2CppObject **)&v34,
          attachSvtId,
          (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_45;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !UserId
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   (ServantLimitImageMaster_o *)UserId,
                   attachSvtId,
                   maxLimitCount,
                   0LL),
        !v34) )
  {
LABEL_50:
    sub_1B00F28(UserId, v23);
  }
  Empty = ServantEntity__getName(v34, UserId, -1, 0LL);
LABEL_45:
  v31 = System_String__Concat_60325748((System_String_o *)StringLiteral_43/*"\n"*/, Empty, 0LL);
  UILabel__set_text(nameLabel, v31, 0LL);
  if ( !Empty )
    goto LABEL_50;
  if ( Empty->fields._stringLength >= 7 )
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