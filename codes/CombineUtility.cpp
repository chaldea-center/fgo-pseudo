int32_t CombineUtility__CalculateAtk(
        int32_t atkBase,
        int32_t atkMax,
        int32_t expCurve,
        int32_t adjustAtk,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0

  if ( (byte_4C46E29 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C46E29 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (atkMax - atkBase) * expCurve / 1000 + atkBase + v9->static_fields->StatusUpAdjustAtk * adjustAtk;
}


int32_t CombineUtility__CalculateHp(
        int32_t hpBase,
        int32_t hpMax,
        int32_t expCurve,
        int32_t adjustHp,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0

  if ( (byte_4C46E28 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C46E28 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (hpMax - hpBase) * expCurve / 1000 + hpBase + v9->static_fields->StatusUpAdjustHp * adjustHp;
}


bool CombineUtility__CheckCombineNeedItemsEnough(
        UserServantEntity_o *userSvtEntity,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        int64_t haveQp,
        int32_t needQp,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t v12; // x0
  il2cpp_array_size_t max_length; // x8
  bool v14; // w10
  const MethodInfo_30E7C04 **v15; // x25
  const MethodInfo_33A10A0 **v16; // x27
  unsigned __int64 v17; // x28
  int v18; // w29
  int32_t *m_Items; // x23
  int32_t v20; // w24
  UserServantEntity_o *v21; // x8
  const MethodInfo_33A10A0 **v22; // x22
  UserServantEntity_o *v23; // x27
  int v24; // w23
  System_Int32_array *v25; // x29
  Il2CppObject *v26; // x19
  __int128 v27; // q0
  System_Int32_array *v28; // x21
  const MethodInfo_30E7C04 **v29; // x20
  int64_t v30; // x0
  __int64 v31; // x25
  __int64 v32; // x26
  int64_t v33; // x24
  int32_t v34; // w3
  UserServantEntity_o *v35; // x8
  __int128 v36; // q0
  int32_t *v38; // [xsp+8h] [xbp-F8h]
  UserSvtCoinMaster_o *v39; // [xsp+10h] [xbp-F0h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // [xsp+18h] [xbp-E8h]
  int32_t *v41; // [xsp+20h] [xbp-E0h]
  int32_t v42; // [xsp+2Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+70h] [xbp-90h]
  UserSvtCoinEntity_o *entity; // [xsp+90h] [xbp-70h] BYREF
  UserItemEntity_o *v47; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4C46E25 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C46E25 = 1;
  }
  entity = 0;
  v47 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserItemMaster___);
  v12 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v39 = (UserSvtCoinMaster_o *)v12;
  if ( !needItemIds )
LABEL_38:
    sub_1C372B4(v12);
  max_length = needItemIds->max_length;
  v14 = needQp > haveQp;
  if ( (int)max_length >= 1 )
  {
    v15 = (const MethodInfo_30E7C04 **)&Method_DataManager_GetMaster_ItemMaster___;
    v16 = (const MethodInfo_33A10A0 **)&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__;
    v17 = 0;
    v18 = needQp != 0 && v14;
    m_Items = needItemNums->m_Items;
    p_userId = &userSvtEntity->fields.userId;
    v41 = needItemIds->m_Items;
    v38 = needItemNums->m_Items;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)max_length )
        goto LABEL_39;
      if ( !needItemNums )
        goto LABEL_38;
      if ( v17 >= LODWORD(needItemNums->max_length) )
LABEL_39:
        sub_1C372BC(v12);
      if ( (v18 & 1) != 0 )
        break;
      v20 = v41[v17];
      v42 = m_Items[v17];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v12 = (int64_t)DataManager__GetMaster_object_(*v15);
      if ( !v12 )
        goto LABEL_38;
      v12 = (int64_t)DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                       v20,
                       *v16);
      if ( v12 && *(_DWORD *)(v12 + 48) == 29 )
      {
        v21 = userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_38;
        v22 = v16;
        v23 = v21;
        v24 = v18;
        v25 = needItemNums;
        v26 = Master_object;
        v27 = *(_OWORD *)&p_userId->fields.fakeValue;
        v28 = needItemIds;
        *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v45.fields.fakeValue = v27;
        v29 = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v43 = v45;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v43, 0);
        v32 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
        v31 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
        v33 = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v48.fields.currentCryptoKey = v32;
        *(_QWORD *)&v48.fields.fakeValue = v31;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v48, 0);
        v12 = (int64_t)v39;
        if ( !v39 )
          goto LABEL_38;
        v12 = UserSvtCoinMaster__TryGetEntity(v39, &entity, v33, v34, 0);
        if ( (v12 & 1) == 0 )
          return 0;
        if ( !entity )
          goto LABEL_38;
        v15 = v29;
        needItemIds = v28;
        Master_object = v26;
        needItemNums = v25;
        v18 = v24;
        m_Items = v38;
        v35 = v23;
        v16 = v22;
        userSvtEntity = v35;
        if ( v42 > entity->fields.num )
          return 0;
      }
      else
      {
        if ( !userSvtEntity )
          goto LABEL_38;
        v36 = *(_OWORD *)&p_userId->fields.fakeValue;
        *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v45.fields.fakeValue = v36;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v44 = v45;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v44, 0);
        if ( !Master_object )
          goto LABEL_38;
        v12 = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &v47, v12, v20, 0);
        if ( (v12 & 1) == 0 )
          return 0;
        if ( !v47 )
          goto LABEL_38;
        if ( v42 > v47->fields.num )
          return 0;
      }
      LODWORD(max_length) = needItemIds->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        return 1;
    }
  }
  return 0;
}


System_String_o *CombineUtility__GetServantShortName(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  ServantChangeMaster_o *v4; // x0
  UserServantCollectionEntity_o *v5; // x0
  int32_t maxLimitCount; // w20
  System_String_o *Empty; // x21
  ServantChangeEntity_o *v8; // x0
  Il2CppObject *v10; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v11; // [xsp+10h] [xbp-40h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C46E27 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantChangeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    byte_4C46E27 = 1;
  }
  v11 = 0;
  entity = 0;
  v10 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  v4 = (ServantChangeMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = (ServantChangeMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_44;
  v5 = UserServantCollectionMaster__GetEntity(
         (UserServantCollectionMaster_o *)Master_object,
         (int64_t)v4[2].fields.list[1].monitor,
         svtId,
         0);
  if ( v5 )
    maxLimitCount = v5->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v4 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !v4 )
    goto LABEL_44;
  v8 = ServantChangeMaster__GetEnableEntity(v4, svtId, 0);
  if ( v8 )
    Empty = v8->fields.name;
  if ( System_String__IsNullOrEmpty(Empty, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v4 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !v4 )
      goto LABEL_44;
    if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v4, &entity, svtId, maxLimitCount, 0) )
    {
      v4 = (ServantChangeMaster_o *)entity;
      if ( !entity )
        goto LABEL_44;
      Empty = ServantLimitAddEntity__GetOverwriteServantShortName(entity, 0);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v4 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !v4 )
      goto LABEL_44;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v4,
           &v11,
           svtId,
           (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      v4 = (ServantChangeMaster_o *)v11;
      if ( !v11 )
        goto LABEL_44;
      Empty = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v11, 0);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v4 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v4 )
      goto LABEL_44;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v4,
           &v10,
           svtId,
           (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v4 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      if ( v4 )
        return ServantLimitImageMaster__GetLimitCountSealedServantName(
                 (ServantLimitImageMaster_o *)v4,
                 svtId,
                 maxLimitCount,
                 0,
                 0);
LABEL_44:
      sub_1C372B4(v4);
    }
  }
  return Empty;
}


void CombineUtility__SetCommandCodeEquippedInfoLabel(
        UILabel_o *equipLabel,
        UILabel_o *nameLabel,
        int32_t attachSvtId,
        bool dispName,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x1
  System_String_o *ServantShortName; // x20
  System_String_o *v14; // x0
  float v15; // s8
  UnityEngine_GameObject_o *v16; // x0

  if ( (byte_4C46E26 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_9317/*"NOT_SELECT_EQUIPED"*/);
    byte_4C46E26 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9317/*"NOT_SELECT_EQUIPED"*/, 0);
  if ( !equipLabel )
    goto LABEL_13;
  UILabel__set_text(equipLabel, v9, 0);
  if ( !nameLabel )
    goto LABEL_13;
  UILabel__set_text(nameLabel, string_TypeInfo->static_fields->Empty, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0);
  UILabel__set_spacingX(nameLabel, -2, 0);
  if ( !dispName )
    return;
  v11 = System_String__Concat_63561656(equipLabel->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(equipLabel, v11, 0);
  ServantShortName = CombineUtility__GetServantShortName(attachSvtId, v12);
  v14 = System_String__Concat_63561656((System_String_o *)StringLiteral_43/*"\n"*/, ServantShortName, 0);
  UILabel__set_text(nameLabel, v14, 0);
  if ( !ServantShortName )
LABEL_13:
    sub_1C372B4(v9);
  if ( ServantShortName->fields._stringLength >= 7 )
  {
    v15 = 110.0 / (float)nameLabel->fields.mWidth;
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
    GameObjectExtensions__SetLocalScaleX(v16, v15, 0);
  }
  else
  {
    UILabel__set_spacingX(nameLabel, 0, 0);
  }
}