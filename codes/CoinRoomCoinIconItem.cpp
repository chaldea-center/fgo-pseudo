void CoinRoomCoinIconItem___ctor(
        CoinRoomCoinIconItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *entity,
        bool isDisplayNumber,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  IconLabelInfo_o *iconLabelInfo; // x0
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  ServantLimitMaster_o *v16; // x23
  __int64 v17; // x24
  __int64 v18; // x25
  int32_t svtId; // w23
  BalanceConfig_c *v20; // x0
  UserServantMaster_o *v21; // x23
  const MethodInfo *v22; // x2
  struct ServantEntity_o *svtEntity; // x8
  const MethodInfo *v24; // x1
  ServantLimitEntity_o *v25; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entitya; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4C5A9FE & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1C3E564(&IconLabelInfo_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C5A9FE = 1;
  }
  entitya = 0;
  v25 = 0;
  v9 = (IconLabelInfo_o *)sub_1C3E7B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.iconLabelInfo, (int32_t)v9, v10, v11);
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  iconLabelInfo = this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_47;
  IconLabelInfo__Clear(iconLabelInfo, 0);
  if ( !entity )
    return;
  this->fields._svtId_k__BackingField = entity->fields.svtId;
  this->fields._num_k__BackingField = entity->fields.num;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !iconLabelInfo )
    goto LABEL_47;
  iconLabelInfo = (IconLabelInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
                                       &entitya,
                                       entity->fields.svtId,
                                       (const MethodInfo_33B2FA4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)iconLabelInfo & 1) != 0 )
  {
    if ( !entitya )
      goto LABEL_47;
    this->fields._itemId_k__BackingField = (int32_t)entitya[1].monitor;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  iconLabelInfo = (IconLabelInfo_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    iconLabelInfo = (IconLabelInfo_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_47;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       *(_QWORD *)(*(_QWORD *)&iconLabelInfo[3].fields.iconKind + 64LL),
                       entity->fields.svtId,
                       0);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_47;
  v16 = (ServantLimitMaster_o *)iconLabelInfo;
  v18 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  iconLabelInfo = (IconLabelInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v27, 0);
  if ( !v16 )
LABEL_47:
    sub_1C3E7C0(iconLabelInfo, v12);
  iconLabelInfo = (IconLabelInfo_o *)ServantLimitMaster__TryGetEntity(
                                       v16,
                                       &v25,
                                       (int32_t)iconLabelInfo,
                                       EntityDefinitely->fields.maxLimitCount,
                                       0);
  if ( ((unsigned __int8)iconLabelInfo & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_47;
    this->fields._rarity_k__BackingField = v25->fields.rarity;
    svtId = entity->fields.svtId;
    v20 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    if ( svtId == v20->static_fields->ServantIdMashu1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
      v21 = (UserServantMaster_o *)iconLabelInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v21 )
        goto LABEL_47;
      iconLabelInfo = (IconLabelInfo_o *)UserServantMaster__getHeroineData(
                                           v21,
                                           BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                                           0);
      if ( !iconLabelInfo )
        goto LABEL_47;
      iconLabelInfo = (IconLabelInfo_o *)UserServantEntity__GetOverwriteStatus(
                                           (UserServantEntity_o *)iconLabelInfo,
                                           0,
                                           0);
      if ( !iconLabelInfo )
        goto LABEL_47;
      this->fields._rarity_k__BackingField = iconLabelInfo->fields.adjustData;
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (IconLabelInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !iconLabelInfo )
    goto LABEL_47;
  iconLabelInfo = (IconLabelInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
                                       (Il2CppObject **)&this->fields.svtEntity,
                                       entity->fields.svtId,
                                       (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  svtEntity = this->fields.svtEntity;
  if ( ((unsigned __int8)iconLabelInfo & 1) != 0 )
  {
    if ( svtEntity )
    {
      this->fields._collectionNo_k__BackingField = svtEntity->fields.collectionNo;
LABEL_44:
      ServantEntity__getName_42720812(svtEntity, &this->fields.sortRuby, EntityDefinitely->fields.maxLimitCount, 0);
      goto LABEL_45;
    }
    goto LABEL_47;
  }
  if ( svtEntity )
    goto LABEL_44;
LABEL_45:
  this->fields._isCanStrength_k__BackingField = CoinRoomCoinIconItem__IsCanStrength_48241736(
                                                  this->fields._svtId_k__BackingField,
                                                  0,
                                                  v22);
  this->fields._isHeroine_k__BackingField = CoinRoomCoinIconItem__IsHeroine(this, v24);
  this->fields._isTouchEnabled_k__BackingField = 1;
  this->fields._isDisplayNumber_k__BackingField = isDisplayNumber;
}


bool CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(UserServantEntity_o *usrSvtEntity, const MethodInfo *method)
{
  UserServantEntity_o *v2; // x19
  int64_t currentCryptoKey; // x20
  int64_t hiddenValue; // x21
  int v5; // w8
  UserServantEntity_o *v6; // x19
  unsigned int v7; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = usrSvtEntity;
  if ( (byte_4C5AA01 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    usrSvtEntity = (UserServantEntity_o *)sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_4C5AA01 = 1;
  }
  entity = 0;
  if ( !v2 )
    goto LABEL_20;
  usrSvtEntity = (UserServantEntity_o *)UserServantEntity__getAppendSkillInfo(v2, 0);
  if ( !usrSvtEntity )
    goto LABEL_20;
  currentCryptoKey = usrSvtEntity->fields.id.fields.currentCryptoKey;
  hiddenValue = usrSvtEntity->fields.id.fields.hiddenValue;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  usrSvtEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !currentCryptoKey )
LABEL_20:
    sub_1C3E7C0(usrSvtEntity, method);
  v5 = *(_DWORD *)(currentCryptoKey + 24);
  if ( v5 < 1 )
    return 1;
  v6 = usrSvtEntity;
  v7 = 0;
  while ( 1 )
  {
    if ( !hiddenValue )
      goto LABEL_20;
    if ( v7 >= *(_DWORD *)(hiddenValue + 24) )
      goto LABEL_21;
    if ( *(int *)(hiddenValue + 4LL * (int)v7 + 32) < 1 )
      return 0;
    if ( v7 >= v5 )
LABEL_21:
      sub_1C3E7C8(usrSvtEntity, method);
    if ( !v6 )
      goto LABEL_20;
    usrSvtEntity = (UserServantEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
                                            &entity,
                                            *(_DWORD *)(currentCryptoKey + 4LL * (int)v7 + 32),
                                            (const MethodInfo_33B2FA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)usrSvtEntity & 1) == 0 )
      return 0;
    v5 = *(_DWORD *)(currentCryptoKey + 24);
    if ( (int)++v7 >= v5 )
      return 1;
  }
}


bool CoinRoomCoinIconItem__IsCanStrength(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CoinRoomCoinIconItem__IsCanStrength_48241736(this->fields._svtId_k__BackingField, 0, v2);
}


bool CoinRoomCoinIconItem__IsCanStrength_48241736(int32_t svtId, bool isWarningDialog, const MethodInfo *method)
{
  __int64 v5; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v7; // x1
  bool v8; // w20
  int32_t rarity; // w8
  char v10; // w21
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  System_Func_object__bool__o *v12; // x21
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x19
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  char v24; // w21
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  UserServantEntity_o *v29; // x0
  __int64 v30; // x1
  UserServantEntity_o *v31; // x20
  _BOOL4 isExceedLvMax; // w22
  const MethodInfo *v33; // x1
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  ServantLimitEntity_o *v39; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C5AA00 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C3E564(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__);
    sub_1C3E564(&CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo);
    byte_4C5AA00 = 1;
  }
  v39 = 0;
  entity = 0;
  v5 = sub_1C3E7B0(CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_56;
  *(_DWORD *)(v5 + 16) = svtId;
  if ( !isWarningDialog )
    goto LABEL_21;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
LABEL_56:
    sub_1C3E7C0(Master_object, v7);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         *(_DWORD *)(v5 + 16),
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_56;
    v8 = ServantEntity__IsCoinRoomCheck((ServantEntity_o *)entity, 0);
  }
  else
  {
    v8 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v8 )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__TryGetEntity(
                                                                    (ServantLimitMaster_o *)Master_object,
                                                                    &v39,
                                                                    *(_DWORD *)(v5 + 16),
                                                                    0,
                                                                    0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v39 )
        goto LABEL_56;
      rarity = v39->fields.rarity;
      if ( rarity && rarity < 4 )
      {
        v10 = 0;
        return v10 & 1;
      }
    }
  }
LABEL_21:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_56;
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(
                                                                   (UserServantMaster_o *)Master_object,
                                                                   0);
  v12 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_object_(
                                                                  AllList,
                                                                  (System_Func_TSource__bool__o *)v12,
                                                                  (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Master_object )
    goto LABEL_56;
  klass = Master_object->klass;
  v14 = Master_object;
  v15 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
  if ( *(_WORD *)&Master_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_29;
    }
    v17 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v17 = sub_1C8ED7C(Master_object, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0);
  }
  v19 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v17)(v14, *(_QWORD *)(v17 + 8));
  if ( !v19 )
    sub_1C3E7C0(0, v18);
  do
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_36;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_36:
      v23 = sub_1C8ED7C(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
    if ( (v24 & 1) == 0 )
      break;
    v25 = *(_QWORD *)v19;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_43;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_43:
      v28 = sub_1C8ED7C(v19, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v29 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v19, *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29 )
      sub_1C3E7C0(0, v30);
    isExceedLvMax = UserServantEntity__isExceedLvMax(v29, 0);
  }
  while ( (isExceedLvMax & CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(v31, v33) & 1) == 0 );
  v10 = v24 ^ 1;
  v34 = *(_QWORD *)v19;
  v35 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_51;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_51:
    v37 = sub_1C8ED7C(v19, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v19, *(_QWORD *)(v37 + 8));
  return v10 & 1;
}


bool CoinRoomCoinIconItem__IsHeroine(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Object_array *OrganizationList; // x20
  System_Func_object__bool__o *v6; // x21

  if ( (byte_4C5A9FF & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_UserServantEntity____78188264);
    sub_1C3E564(&Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&System_Func_UserServantEntity__bool__TypeInfo);
    byte_4C5A9FF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v4);
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0);
  v6 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v6, (Il2CppObject *)this, Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__, 0);
  return BasicHelper__Any_object__51261116(
           OrganizationList,
           (System_Func_T__bool__o *)v6,
           (const MethodInfo_30E2EBC *)Method_BasicHelper_Any_UserServantEntity____78188264);
}


bool CoinRoomCoinIconItem__IsMatchFilter(CoinRoomCoinIconItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x21

  if ( (byte_4C5AA03 & 1) == 0 )
  {
    sub_1C3E564(&FilterKindList_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C5AA03 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_23;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                              ClassGroupFilterKindList,
                                              (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.svtEntity, 0) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_23:
    sub_1C3E7C0(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.svtEntity, 0) )
    return 0;
LABEL_15:
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v10, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields._rarity_k__BackingField, 0);
}


void CoinRoomCoinIconItem__SetIsConfirmDialog(CoinRoomCoinIconItem_o *this, bool check, const MethodInfo *method)
{
  this->fields._isConfirmDialog_k__BackingField = check;
}


void CoinRoomCoinIconItem__SetIsWarningDialog(CoinRoomCoinIconItem_o *this, bool check, const MethodInfo *method)
{
  this->fields._isWarningDialog_k__BackingField = check;
}


bool CoinRoomCoinIconItem__SetSortValue(CoinRoomCoinIconItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CoinRoomCoinIconItem_o *v5; // x19
  int selectedNum_k__BackingField; // w8
  int32_t sortKind; // w8
  int64_t svtEntity; // x8
  struct System_String_o *sortRuby; // x1
  struct System_String_o **p_sortStr1; // x21
  int64_t num_k__BackingField; // x8
  int64_t v12; // x8
  int32_t v13; // w1
  int64_t rarity_k__BackingField; // x8
  int32_t v16; // w1
  int64_t collectionNo_k__BackingField; // x2

  v5 = this;
  if ( (byte_4C5AA02 & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5AA02 = 1;
  }
  selectedNum_k__BackingField = v5->fields._selectedNum_k__BackingField;
  *(_WORD *)&v5->fields.isTermination = 0;
  v5->fields.sortValue1 = -1;
  if ( selectedNum_k__BackingField <= 0 )
  {
    this = (CoinRoomCoinIconItem_o *)((__int64 (__fastcall *)(CoinRoomCoinIconItem_o *, ListViewSort_o *, const MethodInfo *))v5->klass->vtable._5_IsMatchFilter.methodPtr)(
                                       v5,
                                       sort,
                                       v5->klass->vtable._5_IsMatchFilter.method);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
  }
  if ( !sort )
    goto LABEL_27;
  sortKind = sort->fields.sortKind;
  if ( sortKind <= 14 )
  {
    if ( sortKind == 2 )
    {
      rarity_k__BackingField = v5->fields._rarity_k__BackingField;
      v5->fields.sortValue0B = 0;
      v5->fields.sortValue1 = rarity_k__BackingField;
      v16 = StringLiteral_1/*""*/;
      v5->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1C3E508((CGThumbnailListItem_o *)&v5->fields.sortStr1, v16, (int32_t)method, v3);
      collectionNo_k__BackingField = v5->fields._collectionNo_k__BackingField;
      this = (CoinRoomCoinIconItem_o *)v5->fields.iconLabelInfo;
      v5->fields.sortValue1B = collectionNo_k__BackingField;
      if ( this )
      {
        IconLabelInfo__Set_40964356((IconLabelInfo_o *)this, 57, collectionNo_k__BackingField, 0, 0, 0, 0, 0, 0, 0);
        goto LABEL_21;
      }
      goto LABEL_27;
    }
    if ( sortKind == 14 )
    {
      num_k__BackingField = v5->fields._num_k__BackingField;
      v5->fields.sortValue0B = 0;
      v5->fields.sortValue1 = num_k__BackingField;
      LODWORD(sortRuby) = StringLiteral_1/*""*/;
      v5->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
      p_sortStr1 = &v5->fields.sortStr1;
      goto LABEL_14;
    }
LABEL_16:
    v12 = v5->fields._collectionNo_k__BackingField;
    v5->fields.sortValue0B = 0;
    v5->fields.sortValue1 = v12;
    v13 = StringLiteral_1/*""*/;
    v5->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C3E508((CGThumbnailListItem_o *)&v5->fields.sortStr1, v13, (int32_t)method, v3);
    this = (CoinRoomCoinIconItem_o *)v5->fields.iconLabelInfo;
    v5->fields.sortValue1B = 0;
    if ( this )
    {
      IconLabelInfo__Set_40964356(
        (IconLabelInfo_o *)this,
        57,
        v5->fields._collectionNo_k__BackingField,
        0,
        0,
        0,
        0,
        0,
        0,
        0);
      goto LABEL_21;
    }
LABEL_27:
    sub_1C3E7C0(this, sort);
  }
  if ( sortKind != 26 )
    goto LABEL_16;
  svtEntity = (int64_t)v5->fields.svtEntity;
  v5->fields.sortValue0B = 0;
  if ( svtEntity )
    svtEntity = -*(_DWORD *)(svtEntity + 212);
  sortRuby = v5->fields.sortRuby;
  v5->fields.sortStr1 = sortRuby;
  p_sortStr1 = &v5->fields.sortStr1;
  v5->fields.sortValue1 = svtEntity;
LABEL_14:
  sub_1C3E508((CGThumbnailListItem_o *)p_sortStr1, (int32_t)sortRuby, (int32_t)method, v3);
  this = (CoinRoomCoinIconItem_o *)p_sortStr1[15];
  p_sortStr1[1] = (struct System_String_o *)*((int *)p_sortStr1 + 20);
  if ( !this )
    goto LABEL_27;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
LABEL_21:
  if ( v5->fields._isHeroine_k__BackingField )
    v5->fields.sortValue0 = -10;
  if ( sort->fields.isSmartSort && !v5->fields._isCanStrength_k__BackingField )
    v5->fields.sortValue0B = 10;
  return 1;
}


bool CoinRoomCoinIconItem___IsHeroine_b__58_0(
        CoinRoomCoinIconItem_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  CoinRoomCoinIconItem_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4C5AA04 & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C5AA04 = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v8, 0) == v4->fields._svtId_k__BackingField
      && UserServantEntity__IsHeroine(x, 0);
}


int32_t CoinRoomCoinIconItem__get_collectionNo(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._collectionNo_k__BackingField;
}


IconLabelInfo_o *CoinRoomCoinIconItem__get_iconInfo(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool CoinRoomCoinIconItem__get_isCanStrength(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isCanStrength_k__BackingField;
}


bool CoinRoomCoinIconItem__get_isConfirmDialog(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isConfirmDialog_k__BackingField;
}


bool CoinRoomCoinIconItem__get_isDisplayNumber(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isDisplayNumber_k__BackingField;
}


bool CoinRoomCoinIconItem__get_isHeroine(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isHeroine_k__BackingField;
}


bool CoinRoomCoinIconItem__get_isSelected(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isSelected_k__BackingField;
}


bool CoinRoomCoinIconItem__get_isTouchEnabled(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isTouchEnabled_k__BackingField;
}


bool CoinRoomCoinIconItem__get_isWarningDialog(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isWarningDialog_k__BackingField;
}


int32_t CoinRoomCoinIconItem__get_itemId(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._itemId_k__BackingField;
}


int32_t CoinRoomCoinIconItem__get_num(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._num_k__BackingField;
}


int32_t CoinRoomCoinIconItem__get_rarity(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._rarity_k__BackingField;
}


int32_t CoinRoomCoinIconItem__get_selectedNum(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._selectedNum_k__BackingField;
}


int32_t CoinRoomCoinIconItem__get_svtId(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._svtId_k__BackingField;
}


void CoinRoomCoinIconItem__set_collectionNo(CoinRoomCoinIconItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._collectionNo_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_isCanStrength(CoinRoomCoinIconItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isCanStrength_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_isConfirmDialog(CoinRoomCoinIconItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isConfirmDialog_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_isDisplayNumber(CoinRoomCoinIconItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isDisplayNumber_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_isHeroine(CoinRoomCoinIconItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isHeroine_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_isSelected(CoinRoomCoinIconItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isSelected_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_isTouchEnabled(CoinRoomCoinIconItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isTouchEnabled_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_isWarningDialog(CoinRoomCoinIconItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isWarningDialog_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_itemId(CoinRoomCoinIconItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._itemId_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_num(CoinRoomCoinIconItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._num_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_rarity(CoinRoomCoinIconItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._rarity_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_selectedNum(CoinRoomCoinIconItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._selectedNum_k__BackingField = value;
}


void CoinRoomCoinIconItem__set_svtId(CoinRoomCoinIconItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._svtId_k__BackingField = value;
}


void CoinRoomCoinIconItem___c__DisplayClass62_0___ctor(
        CoinRoomCoinIconItem___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CoinRoomCoinIconItem___c__DisplayClass62_0___IsCanStrength_b__0(
        CoinRoomCoinIconItem___c__DisplayClass62_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  CoinRoomCoinIconItem___c__DisplayClass62_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4C5AA05 & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem___c__DisplayClass62_0_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C5AA05 = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v8, 0) == v4->fields.svtId;
}