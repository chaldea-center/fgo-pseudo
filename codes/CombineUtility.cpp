// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CombineUtility__CalculateAtk(
        int32_t atkBase,
        int32_t atkMax,
        int32_t expCurve,
        int32_t adjustAtk,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0

  if ( (byte_4B05CA8 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&atkMax);
    byte_4B05CA8 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (atkMax - atkBase) * expCurve / 1000 + atkBase + v9->static_fields->StatusUpAdjustAtk * adjustAtk;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CombineUtility__CalculateHp(
        int32_t hpBase,
        int32_t hpMax,
        int32_t expCurve,
        int32_t adjustHp,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0

  if ( (byte_4B05CA7 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&hpMax);
    byte_4B05CA7 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (hpMax - hpBase) * expCurve / 1000 + hpBase + v9->static_fields->StatusUpAdjustHp * adjustHp;
}


bool __fastcall CombineUtility__CheckCombineNeedItemsEnough(
        UserServantEntity_o *userSvtEntity,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        int64_t haveQp,
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
  __int64 v20; // x2
  __int64 v21; // x8
  bool v22; // w10
  const MethodInfo_3001E10 **v23; // x25
  const MethodInfo_32AF070 **v24; // x27
  unsigned __int64 v25; // x28
  int v26; // w29
  int32_t *v27; // x23
  int32_t v28; // w24
  UserServantEntity_o *v29; // x8
  const MethodInfo_32AF070 **v30; // x22
  UserServantEntity_o *v31; // x27
  int v32; // w23
  System_Int32_array *v33; // x29
  Il2CppObject *v34; // x19
  __int128 v35; // q0
  System_Int32_array *v36; // x21
  const MethodInfo_3001E10 **v37; // x20
  int64_t v38; // x0
  __int64 v39; // x25
  __int64 v40; // x26
  int64_t v41; // x24
  int32_t v42; // w3
  UserServantEntity_o *v43; // x8
  __int128 v44; // q0
  int32_t *v46; // [xsp+8h] [xbp-F8h]
  UserSvtCoinMaster_o *v47; // [xsp+10h] [xbp-F0h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // [xsp+18h] [xbp-E8h]
  int32_t *v49; // [xsp+20h] [xbp-E0h]
  int32_t v50; // [xsp+2Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+70h] [xbp-90h]
  UserSvtCoinEntity_o *entity; // [xsp+90h] [xbp-70h] BYREF
  UserItemEntity_o *v55; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v9 = needItemIds;
  if ( (byte_4B05CA4 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, needItemIds);
    sub_1BC3008(&Method_DataManager_GetMaster_UserItemMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v12);
    sub_1BC3008(&DataManager_TypeInfo, v13);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    byte_4B05CA4 = 1;
  }
  entity = 0LL;
  v55 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserItemMaster___);
  v18 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v47 = (UserSvtCoinMaster_o *)v18;
  if ( !v9 )
LABEL_38:
    sub_1BC3264(v18, v19);
  v21 = *(_QWORD *)&v9->max_length;
  v22 = needQp > haveQp;
  if ( (int)v21 >= 1 )
  {
    v23 = (const MethodInfo_3001E10 **)&Method_DataManager_GetMaster_ItemMaster___;
    v24 = (const MethodInfo_32AF070 **)&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__;
    v25 = 0LL;
    v26 = needQp != 0 && v22;
    v27 = &needItemNums->m_Items[1];
    p_userId = &userSvtEntity->fields.userId;
    v49 = &v9->m_Items[1];
    v46 = &needItemNums->m_Items[1];
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v21 )
        goto LABEL_39;
      if ( !needItemNums )
        goto LABEL_38;
      if ( v25 >= needItemNums->max_length )
LABEL_39:
        sub_1BC326C(v18, v19, v20);
      if ( (v26 & 1) != 0 )
        break;
      v28 = v49[v25];
      v50 = v27[v25];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v18 = (int64_t)DataManager__GetMaster_object_(*v23);
      if ( !v18 )
        goto LABEL_38;
      v18 = (int64_t)DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                       v28,
                       *v24);
      if ( v18 && *(_DWORD *)(v18 + 48) == 29 )
      {
        v29 = userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_38;
        v30 = v24;
        v31 = v29;
        v32 = v26;
        v33 = needItemNums;
        v34 = Master_object;
        v35 = *(_OWORD *)&p_userId->fields.fakeValue;
        v36 = v9;
        *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v53.fields.fakeValue = v35;
        v37 = v23;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v51 = v53;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v51, 0LL);
        v40 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v39 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        v41 = v38;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v56.fields.currentCryptoKey = v40;
        *(_QWORD *)&v56.fields.fakeValue = v39;
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v56, 0LL);
        v18 = (int64_t)v47;
        if ( !v47 )
          goto LABEL_38;
        v18 = UserSvtCoinMaster__TryGetEntity(v47, &entity, v41, v42, 0LL);
        if ( (v18 & 1) == 0 )
          return 0;
        if ( !entity )
          goto LABEL_38;
        v23 = v37;
        v9 = v36;
        Master_object = v34;
        needItemNums = v33;
        v26 = v32;
        v27 = v46;
        v43 = v31;
        v24 = v30;
        userSvtEntity = v43;
        if ( v50 > entity->fields.num )
          return 0;
      }
      else
      {
        if ( !userSvtEntity )
          goto LABEL_38;
        v44 = *(_OWORD *)&p_userId->fields.fakeValue;
        *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v53.fields.fakeValue = v44;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v52 = v53;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v52, 0LL);
        if ( !Master_object )
          goto LABEL_38;
        v18 = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &v55, v18, v28, 0LL);
        if ( (v18 & 1) == 0 )
          return 0;
        if ( !v55 )
          goto LABEL_38;
        if ( v50 > v55->fields.num )
          return 0;
      }
      LODWORD(v21) = v9->max_length;
      if ( (__int64)++v25 >= (int)v21 )
        return 1;
    }
  }
  return 0;
}


System_String_o *__fastcall CombineUtility__GetServantShortName(int32_t svtId, const MethodInfo *method)
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
  Il2CppObject *Master_object; // x20
  ServantChangeMaster_o *v15; // x0
  UserServantCollectionEntity_o *v16; // x0
  int32_t maxLimitCount; // w20
  System_String_o *Empty; // x21
  ServantChangeEntity_o *v19; // x0
  Il2CppObject *v21; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v22; // [xsp+10h] [xbp-40h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B05CA6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantAddMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantChangeMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1BC3008(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&NetworkManager_TypeInfo, v11);
    sub_1BC3008(&string_TypeInfo, v12);
    byte_4B05CA6 = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  v21 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v13);
    byte_4AFC1F1 = 1;
  }
  v15 = (ServantChangeMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = (ServantChangeMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_44;
  v16 = UserServantCollectionMaster__GetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          (int64_t)v15[2].fields.list[1].monitor,
          svtId,
          0LL);
  if ( v16 )
    maxLimitCount = v16->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v15 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !v15 )
    goto LABEL_44;
  v19 = ServantChangeMaster__GetEnableEntity(v15, svtId, 0LL);
  if ( v19 )
    Empty = v19->fields.name;
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !v15 )
      goto LABEL_44;
    if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v15, &entity, svtId, maxLimitCount, 0LL) )
    {
      v15 = (ServantChangeMaster_o *)entity;
      if ( !entity )
        goto LABEL_44;
      Empty = ServantLimitAddEntity__GetOverwriteServantShortName(entity, 0LL);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !v15 )
      goto LABEL_44;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
           &v22,
           svtId,
           (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      v15 = (ServantChangeMaster_o *)v22;
      if ( !v22 )
        goto LABEL_44;
      Empty = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v22, 0LL);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v15 )
      goto LABEL_44;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
           &v21,
           svtId,
           (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v15 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      if ( v15 )
        return ServantLimitImageMaster__GetLimitCountSealedServantName(
                 (ServantLimitImageMaster_o *)v15,
                 svtId,
                 maxLimitCount,
                 0,
                 0LL);
LABEL_44:
      sub_1BC3264(v15, v13);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x1
  System_String_o *ServantShortName; // x20
  System_String_o *v18; // x0
  float v19; // s8
  UnityEngine_GameObject_o *v20; // x0

  if ( (byte_4B05CA5 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, nameLabel);
    sub_1BC3008(&string_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_43/*"\n"*/, v10);
    sub_1BC3008(&StringLiteral_9234/*"NOT_SELECT_EQUIPED"*/, v11);
    byte_4B05CA5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9234/*"NOT_SELECT_EQUIPED"*/, 0LL);
  if ( !equipLabel )
    goto LABEL_13;
  UILabel__set_text(equipLabel, v12, 0LL);
  if ( !nameLabel )
    goto LABEL_13;
  UILabel__set_text(nameLabel, string_TypeInfo->static_fields->Empty, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0LL);
  UILabel__set_spacingX(nameLabel, -2, 0LL);
  if ( !dispName )
    return;
  v15 = System_String__Concat_62348648(equipLabel->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(equipLabel, v15, 0LL);
  ServantShortName = CombineUtility__GetServantShortName(attachSvtId, v16);
  v18 = System_String__Concat_62348648((System_String_o *)StringLiteral_43/*"\n"*/, ServantShortName, 0LL);
  UILabel__set_text(nameLabel, v18, 0LL);
  if ( !ServantShortName )
LABEL_13:
    sub_1BC3264(v12, v13);
  if ( ServantShortName->fields._stringLength >= 7 )
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