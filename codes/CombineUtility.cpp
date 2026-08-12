// local variable allocation has failed, the output may be wrong!
int32_t CombineUtility__CalculateAtk(
        int32_t atkBase,
        int32_t atkMax,
        int32_t expCurve,
        int32_t adjustAtk,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0

  if ( (byte_5974A0E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5974A0E = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&atkMax);
    v9 = BalanceConfig_TypeInfo;
  }
  return (atkMax - atkBase) * expCurve / 1000 + atkBase + v9->static_fields->StatusUpAdjustAtk * adjustAtk;
}


// local variable allocation has failed, the output may be wrong!
int32_t CombineUtility__CalculateHp(
        int32_t hpBase,
        int32_t hpMax,
        int32_t expCurve,
        int32_t adjustHp,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0

  if ( (byte_5974A0D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5974A0D = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&hpMax);
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
  System_Int32_array *v9; // x20
  int v11; // w8
  Il2CppObject *Master_object; // x22
  int64_t v13; // x0
  __int64 v14; // x1
  il2cpp_array_size_t max_length; // x8
  bool v16; // cc
  int v17; // w25
  unsigned __int64 v18; // x29
  const MethodInfo_3F10B30 **v19; // x28
  int32_t *m_Items; // x27
  int32_t v21; // w24
  UserServantEntity_o *v22; // x24
  int32_t *v23; // x21
  System_Int32_array *v24; // x27
  __int128 v25; // q1
  const MethodInfo_3F10B30 **v26; // x19
  Il2CppObject *v27; // x28
  System_Int32_array *v28; // x22
  int v29; // w20
  int64_t v30; // x0
  __int64 v31; // x1
  __int64 v32; // x25
  __int64 v33; // x26
  int64_t v34; // x24
  int32_t v35; // w3
  int32_t num; // w8
  int32_t v37; // w9
  __int128 v38; // q1
  UserServantEntity_o *v40; // [xsp+0h] [xbp-F0h]
  UserSvtCoinMaster_o *v41; // [xsp+8h] [xbp-E8h]
  int32_t *v42; // [xsp+10h] [xbp-E0h]
  int32_t v43; // [xsp+1Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+60h] [xbp-90h]
  UserSvtCoinEntity_o *entity; // [xsp+80h] [xbp-70h] BYREF
  UserItemEntity_o *v48; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v9 = needItemIds;
  if ( (byte_5974A0A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974A0A = 1;
  }
  v11 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  v48 = 0;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, needItemIds);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  v13 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  v41 = (UserSvtCoinMaster_o *)v13;
  if ( !v9 )
LABEL_44:
    sub_2213CDC(v13, v14);
  max_length = v9->max_length;
  if ( needQp )
    v16 = needQp <= haveQp;
  else
    v16 = 1;
  v17 = !v16;
  if ( (int)max_length >= 1 )
  {
    v18 = 0;
    v19 = (const MethodInfo_3F10B30 **)&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__;
    m_Items = needItemNums->m_Items;
    v40 = userSvtEntity;
    v42 = v9->m_Items;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)max_length )
        goto LABEL_45;
      if ( !needItemNums )
        goto LABEL_44;
      if ( v18 >= LODWORD(needItemNums->max_length) )
LABEL_45:
        sub_2213CE4(v13);
      if ( (v17 & 1) != 0 )
        break;
      v21 = v42[v18];
      v43 = m_Items[v18];
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
      v13 = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v13 )
        goto LABEL_44;
      v13 = (int64_t)DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                       v21,
                       *v19);
      if ( v13 && *(_DWORD *)(v13 + 48) == 29 )
      {
        v22 = userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_44;
        v23 = m_Items;
        v24 = needItemNums;
        v25 = *(_OWORD *)&v22->fields.userId.fields.fakeValue;
        v26 = v19;
        v27 = Master_object;
        v28 = v9;
        v29 = v17;
        *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v22->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v46.fields.fakeValue = v25;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
        v44 = v46;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v44, 0);
        v32 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
        v34 = v30;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
        *(_QWORD *)&v49.fields.currentCryptoKey = v32;
        *(_QWORD *)&v49.fields.fakeValue = v33;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v49, 0);
        v13 = (int64_t)v41;
        if ( !v41 )
          goto LABEL_44;
        v13 = UserSvtCoinMaster__TryGetEntity(v41, &entity, v34, v35, 0);
        if ( (v13 & 1) == 0 )
          return 0;
        if ( !entity )
          goto LABEL_44;
        num = entity->fields.num;
        v37 = v43;
        v17 = v29;
        v9 = v28;
        Master_object = v27;
        v19 = v26;
        needItemNums = v24;
        m_Items = v23;
        userSvtEntity = v40;
      }
      else
      {
        if ( !userSvtEntity )
          goto LABEL_44;
        v38 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v46.fields.fakeValue = v38;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
        v45 = v46;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v45, 0);
        if ( !Master_object )
          goto LABEL_44;
        v13 = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &v48, v13, v21, 0);
        if ( (v13 & 1) == 0 )
          return 0;
        if ( !v48 )
          goto LABEL_44;
        num = v48->fields.num;
        v37 = v43;
      }
      if ( v37 > num )
        return 0;
      LODWORD(max_length) = v9->max_length;
      if ( (__int64)++v18 >= (int)max_length )
        return 1;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *CombineUtility__GetServantShortName(
        int32_t baseSvtId,
        int32_t svtId,
        bool isCommonName,
        const MethodInfo *method)
{
  int v7; // w8
  __int64 v8; // x1
  Il2CppObject *Master_object; // x22
  ServantChangeMaster_o *v10; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v12; // x1
  int32_t maxLimitCount; // w21
  System_String_o *name; // x22
  ServantChangeEntity_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *v21; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *v22; // [xsp+10h] [xbp-50h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5974A0C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantChangeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5974A0C = 1;
  }
  entity = 0;
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v21 = 0;
  v22 = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v10 = (ServantChangeMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
    v10 = (ServantChangeMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_44;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       (int64_t)v10[2].fields.list[1].monitor,
                       baseSvtId,
                       0);
  if ( EntityDefinitely )
    maxLimitCount = EntityDefinitely->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  name = **(System_String_o ***)(qword_5984390 + 184);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  v10 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantChangeMaster___);
  if ( !v10 )
    goto LABEL_44;
  v15 = ServantChangeMaster__GetEnableEntity(v10, svtId, 0);
  if ( v15 )
    name = v15->fields.name;
  if ( System_String__IsNullOrEmpty(name, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
    v10 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !v10 )
      goto LABEL_44;
    if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v10, &entity, svtId, maxLimitCount, 0) )
    {
      v10 = (ServantChangeMaster_o *)entity;
      if ( !entity )
        goto LABEL_44;
      name = ServantLimitAddEntity__GetOverwriteServantShortName(entity, 0);
    }
  }
  if ( System_String__IsNullOrEmpty(name, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
    v10 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantAddMaster___);
    if ( !v10 )
      goto LABEL_44;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v10,
           &v22,
           svtId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    {
      v10 = (ServantChangeMaster_o *)v22;
      if ( !v22 )
        goto LABEL_44;
      name = ServantAddEntity__GetOverwriteServantShortName((ServantAddEntity_o *)v22, 0);
    }
  }
  if ( System_String__IsNullOrEmpty(name, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    v10 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v10 )
      goto LABEL_44;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v10,
           &v21,
           svtId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
      v10 = (ServantChangeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      if ( v10 )
        return ServantLimitImageMaster__GetLimitCountSealedServantName(
                 (ServantLimitImageMaster_o *)v10,
                 svtId,
                 maxLimitCount,
                 0,
                 isCommonName,
                 0);
LABEL_44:
      sub_2213CDC(v10, v8);
    }
  }
  return name;
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
  const MethodInfo *v13; // x3
  System_String_o *ServantShortName; // x20
  System_String_o *v15; // x0
  float v16; // s8
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_5974A0B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_9703/*"NOT_SELECT_EQUIPED"*/);
    byte_5974A0B = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameLabel);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9703/*"NOT_SELECT_EQUIPED"*/, 0);
  if ( !equipLabel )
    goto LABEL_13;
  UILabel__set_text(equipLabel, v9, 0);
  if ( !nameLabel )
    goto LABEL_13;
  UILabel__set_text(nameLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0);
  UILabel__set_spacingX(nameLabel, -2, 0);
  if ( !dispName )
    return;
  v12 = System_String__Concat_75651716(equipLabel->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(equipLabel, v12, 0);
  ServantShortName = CombineUtility__GetServantShortName(attachSvtId, attachSvtId, 1, v13);
  v15 = System_String__Concat_75651716((System_String_o *)StringLiteral_43/*"\n"*/, ServantShortName, 0);
  UILabel__set_text(nameLabel, v15, 0);
  if ( !ServantShortName )
LABEL_13:
    sub_2213CDC(v9, v10);
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