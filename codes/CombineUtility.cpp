int32_t CombineUtility__CalculateAtk(
        int32_t atkBase,
        int32_t atkMax,
        int32_t expCurve,
        int32_t adjustAtk,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0

  if ( (byte_4C2B0F7 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C2B0F7 = 1;
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

  if ( (byte_4C2B0F6 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C2B0F6 = 1;
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
  __int64 v13; // x1
  __int64 v14; // x2
  il2cpp_array_size_t max_length; // x8
  bool v16; // w10
  const MethodInfo_30CE8FC **v17; // x25
  const MethodInfo_3387D98 **v18; // x27
  unsigned __int64 v19; // x28
  int v20; // w29
  int32_t *m_Items; // x23
  int32_t v22; // w24
  UserServantEntity_o *v23; // x8
  const MethodInfo_3387D98 **v24; // x22
  UserServantEntity_o *v25; // x27
  int v26; // w23
  System_Int32_array *v27; // x29
  Il2CppObject *v28; // x19
  __int128 v29; // q0
  System_Int32_array *v30; // x21
  const MethodInfo_30CE8FC **v31; // x20
  int64_t v32; // x0
  __int64 v33; // x25
  __int64 v34; // x26
  int64_t v35; // x24
  int32_t v36; // w3
  UserServantEntity_o *v37; // x8
  __int128 v38; // q0
  int32_t *v40; // [xsp+8h] [xbp-F8h]
  UserSvtCoinMaster_o *v41; // [xsp+10h] [xbp-F0h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // [xsp+18h] [xbp-E8h]
  int32_t *v43; // [xsp+20h] [xbp-E0h]
  int32_t v44; // [xsp+2Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+70h] [xbp-90h]
  UserSvtCoinEntity_o *entity; // [xsp+90h] [xbp-70h] BYREF
  UserItemEntity_o *v49; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4C2B0F3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B0F3 = 1;
  }
  entity = 0;
  v49 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
  v12 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v41 = (UserSvtCoinMaster_o *)v12;
  if ( !needItemIds )
LABEL_38:
    sub_1C2D6EC(v12, v13);
  max_length = needItemIds->max_length;
  v16 = needQp > haveQp;
  if ( (int)max_length >= 1 )
  {
    v17 = (const MethodInfo_30CE8FC **)&Method_DataManager_GetMaster_ItemMaster___;
    v18 = (const MethodInfo_3387D98 **)&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__;
    v19 = 0;
    v20 = needQp != 0 && v16;
    m_Items = needItemNums->m_Items;
    p_userId = &userSvtEntity->fields.userId;
    v43 = needItemIds->m_Items;
    v40 = needItemNums->m_Items;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)max_length )
        goto LABEL_39;
      if ( !needItemNums )
        goto LABEL_38;
      if ( v19 >= LODWORD(needItemNums->max_length) )
LABEL_39:
        sub_1C2D6F4(v12, v13, v14);
      if ( (v20 & 1) != 0 )
        break;
      v22 = v43[v19];
      v44 = m_Items[v19];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v12 = (int64_t)DataManager__GetMaster_object_(*v17);
      if ( !v12 )
        goto LABEL_38;
      v12 = (int64_t)DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                       v22,
                       *v18);
      if ( v12 && *(_DWORD *)(v12 + 48) == 29 )
      {
        v23 = userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_38;
        v24 = v18;
        v25 = v23;
        v26 = v20;
        v27 = needItemNums;
        v28 = Master_object;
        v29 = *(_OWORD *)&p_userId->fields.fakeValue;
        v30 = needItemIds;
        *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v47.fields.fakeValue = v29;
        v31 = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v45 = v47;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v45, 0);
        v34 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
        v35 = v32;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v50.fields.currentCryptoKey = v34;
        *(_QWORD *)&v50.fields.fakeValue = v33;
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v50, 0);
        v12 = (int64_t)v41;
        if ( !v41 )
          goto LABEL_38;
        v12 = UserSvtCoinMaster__TryGetEntity(v41, &entity, v35, v36, 0);
        if ( (v12 & 1) == 0 )
          return 0;
        if ( !entity )
          goto LABEL_38;
        v17 = v31;
        needItemIds = v30;
        Master_object = v28;
        needItemNums = v27;
        v20 = v26;
        m_Items = v40;
        v37 = v25;
        v18 = v24;
        userSvtEntity = v37;
        if ( v44 > entity->fields.num )
          return 0;
      }
      else
      {
        if ( !userSvtEntity )
          goto LABEL_38;
        v38 = *(_OWORD *)&p_userId->fields.fakeValue;
        *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v47.fields.fakeValue = v38;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v46 = v47;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v46, 0);
        if ( !Master_object )
          goto LABEL_38;
        v12 = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &v49, v12, v22, 0);
        if ( (v12 & 1) == 0 )
          return 0;
        if ( !v49 )
          goto LABEL_38;
        if ( v44 > v49->fields.num )
          return 0;
      }
      LODWORD(max_length) = needItemIds->max_length;
      if ( (__int64)++v19 >= (int)max_length )
        return 1;
    }
  }
  return 0;
}


System_String_o *CombineUtility__GetServantShortName(int32_t svtId, const MethodInfo *method)
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

  if ( (byte_4C2B0F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantChangeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    byte_4C2B0F5 = 1;
  }
  v12 = 0;
  entity = 0;
  v11 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
         0);
  if ( v6 )
    maxLimitCount = v6->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v5 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !v5 )
    goto LABEL_44;
  v9 = ServantChangeMaster__GetEnableEntity(v5, svtId, 0);
  if ( v9 )
    Empty = v9->fields.name;
  if ( System_String__IsNullOrEmpty(Empty, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !v5 )
      goto LABEL_44;
    if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v5, &entity, svtId, maxLimitCount, 0) )
    {
      v5 = (ServantChangeMaster_o *)entity;
      if ( !entity )
        goto LABEL_44;
      Empty = ServantLimitAddEntity__GetOverwriteServantShortName(entity, 0);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !v5 )
      goto LABEL_44;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v5,
           &v12,
           svtId,
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      v5 = (ServantChangeMaster_o *)v12;
      if ( !v12 )
        goto LABEL_44;
      Empty = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v12, 0);
    }
  }
  if ( System_String__IsNullOrEmpty(Empty, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v5 )
      goto LABEL_44;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v5,
           &v11,
           svtId,
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v5 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      if ( v5 )
        return ServantLimitImageMaster__GetLimitCountSealedServantName(
                 (ServantLimitImageMaster_o *)v5,
                 svtId,
                 maxLimitCount,
                 0,
                 0);
LABEL_44:
      sub_1C2D6EC(v5, v3);
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
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_String_o *ServantShortName; // x20
  System_String_o *v15; // x0
  float v16; // s8
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_4C2B0F4 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_9310/*"NOT_SELECT_EQUIPED"*/);
    byte_4C2B0F4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9310/*"NOT_SELECT_EQUIPED"*/, 0);
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
  v12 = System_String__Concat_63457864(equipLabel->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(equipLabel, v12, 0);
  ServantShortName = CombineUtility__GetServantShortName(attachSvtId, v13);
  v15 = System_String__Concat_63457864((System_String_o *)StringLiteral_43/*"\n"*/, ServantShortName, 0);
  UILabel__set_text(nameLabel, v15, 0);
  if ( !ServantShortName )
LABEL_13:
    sub_1C2D6EC(v9, v10);
  if ( ServantShortName->fields._stringLength >= 7 )
  {
    v16 = 110.0 / (float)nameLabel->fields.mWidth;
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
    GameObjectExtensions__SetLocalScaleX(v17, v16, 0);
  }
  else
  {
    UILabel__set_spacingX(nameLabel, 0, 0);
  }
}