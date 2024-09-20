void __fastcall CoinRoomCoinIconItem___ctor(
        CoinRoomCoinIconItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *entity,
        bool isDisplayNumber,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  int64_t iconLabelInfo; // x0
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  ServantLimitMaster_o *v16; // x23
  __int64 v17; // x24
  __int64 v18; // x25
  const MethodInfo *v19; // x2
  struct ServantEntity_o *svtEntity; // x8
  const MethodInfo *v21; // x1
  ServantLimitEntity_o *v22; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entitya; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4A5E688 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E688 = 1;
  }
  entitya = 0LL;
  v22 = 0LL;
  v9 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo, (int32_t)v9, v10, v11);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  iconLabelInfo = (int64_t)this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_33;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo, 0LL);
  if ( !entity )
    return;
  this->fields._svtId_k__BackingField = entity->fields.svtId;
  this->fields._num_k__BackingField = entity->fields.num;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !iconLabelInfo )
    goto LABEL_33;
  iconLabelInfo = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
                    &entitya,
                    entity->fields.svtId,
                    (const MethodInfo_311D988 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( !entitya )
      goto LABEL_33;
    this->fields._itemId_k__BackingField = (int32_t)entitya[1].monitor;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  iconLabelInfo = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_33;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       iconLabelInfo,
                       entity->fields.svtId,
                       0LL);
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_33;
  v16 = (ServantLimitMaster_o *)iconLabelInfo;
  v18 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v18;
  *(_QWORD *)&v24.fields.fakeValue = v17;
  iconLabelInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL);
  if ( !v16 )
    goto LABEL_33;
  iconLabelInfo = ServantLimitMaster__TryGetEntity(
                    v16,
                    &v22,
                    iconLabelInfo,
                    EntityDefinitely->fields.maxLimitCount,
                    0LL);
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_33;
    this->fields._rarity_k__BackingField = v22->fields.rarity;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !iconLabelInfo )
LABEL_33:
    sub_1B8880C(iconLabelInfo, v12);
  iconLabelInfo = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
                    (Il2CppObject **)&this->fields.svtEntity,
                    entity->fields.svtId,
                    (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  svtEntity = this->fields.svtEntity;
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( svtEntity )
    {
      this->fields._collectionNo_k__BackingField = svtEntity->fields.collectionNo;
LABEL_30:
      ServantEntity__getName_39657284(svtEntity, &this->fields.sortRuby, EntityDefinitely->fields.maxLimitCount, 0LL);
      goto LABEL_31;
    }
    goto LABEL_33;
  }
  if ( svtEntity )
    goto LABEL_30;
LABEL_31:
  this->fields._isCanStrength_k__BackingField = CoinRoomCoinIconItem__IsCanStrength_44564644(
                                                  this->fields._svtId_k__BackingField,
                                                  0,
                                                  v19);
  this->fields._isHeroine_k__BackingField = CoinRoomCoinIconItem__IsHeroine(this, v21);
  this->fields._isTouchEnabled_k__BackingField = 1;
  this->fields._isDisplayNumber_k__BackingField = isDisplayNumber;
}


bool __fastcall CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(
        UserServantEntity_o *usrSvtEntity,
        const MethodInfo *method)
{
  UserServantEntity_o *v2; // x19
  int64_t currentCryptoKey; // x20
  int64_t hiddenValue; // x21
  int v5; // w8
  UserServantEntity_o *v6; // x19
  unsigned int v7; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = usrSvtEntity;
  if ( (byte_4A5E68B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    usrSvtEntity = (UserServantEntity_o *)sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_4A5E68B = 1;
  }
  entity = 0LL;
  if ( !v2 )
    goto LABEL_20;
  usrSvtEntity = (UserServantEntity_o *)UserServantEntity__getAppendSkillInfo(v2, 0LL);
  if ( !usrSvtEntity )
    goto LABEL_20;
  currentCryptoKey = usrSvtEntity->fields.id.fields.currentCryptoKey;
  hiddenValue = usrSvtEntity->fields.id.fields.hiddenValue;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  usrSvtEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !currentCryptoKey )
LABEL_20:
    sub_1B8880C(usrSvtEntity, method);
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
      sub_1B88814(usrSvtEntity, method);
    if ( !v6 )
      goto LABEL_20;
    usrSvtEntity = (UserServantEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
                                            &entity,
                                            *(_DWORD *)(currentCryptoKey + 4LL * (int)v7 + 32),
                                            (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)usrSvtEntity & 1) == 0 )
      return 0;
    v5 = *(_DWORD *)(currentCryptoKey + 24);
    if ( (int)++v7 >= v5 )
      return 1;
  }
}


bool __fastcall CoinRoomCoinIconItem__IsCanStrength(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CoinRoomCoinIconItem__IsCanStrength_44564644(this->fields._svtId_k__BackingField, 0, v2);
}


bool __fastcall CoinRoomCoinIconItem__IsCanStrength_44564644(
        int32_t svtId,
        bool isWarningDialog,
        const MethodInfo *method)
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

  if ( (byte_4A5E68A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1B885B0(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__);
    sub_1B885B0(&CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo);
    byte_4A5E68A = 1;
  }
  v39 = 0LL;
  entity = 0LL;
  v5 = sub_1B887FC(CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_56;
  *(_DWORD *)(v5 + 16) = svtId;
  if ( !isWarningDialog )
    goto LABEL_21;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
LABEL_56:
    sub_1B8880C(Master_object, v7);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         *(_DWORD *)(v5 + 16),
         (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_56;
    v8 = ServantEntity__IsCoinRoomCheck((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v8 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v8 )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__TryGetEntity(
                                                                    (ServantLimitMaster_o *)Master_object,
                                                                    &v39,
                                                                    *(_DWORD *)(v5 + 16),
                                                                    0,
                                                                    0LL);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_56;
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(
                                                                   (UserServantMaster_o *)Master_object,
                                                                   0LL);
  v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__,
    0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_object_(
                                                                  AllList,
                                                                  (System_Func_TSource__bool__o *)v12,
                                                                  (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Master_object )
    goto LABEL_56;
  klass = Master_object->klass;
  v14 = Master_object;
  v15 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_29;
    }
    v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v17 = sub_1BDA590(Master_object, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v17)(v14, *(_QWORD *)(v17 + 8));
  if ( !v19 )
    sub_1B8880C(0LL, v18);
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
      v23 = sub_1BDA590(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v28 = sub_1BDA590(v19, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v29 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v19, *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29 )
      sub_1B8880C(0LL, v30);
    isExceedLvMax = UserServantEntity__isExceedLvMax(v29, 0LL);
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
    v37 = sub_1BDA590(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v19, *(_QWORD *)(v37 + 8));
  return v10 & 1;
}


bool __fastcall CoinRoomCoinIconItem__IsHeroine(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Object_array *OrganizationList; // x20
  System_Func_object__bool__o *v6; // x21

  if ( (byte_4A5E689 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_UserServantEntity____76089096);
    sub_1B885B0(&Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_UserServantEntity__bool__TypeInfo);
    byte_4A5E689 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0LL);
  v6 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v6, (Il2CppObject *)this, Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__, 0LL);
  return BasicHelper__Any_object__48672124(
           OrganizationList,
           (System_Func_T__bool__o *)v6,
           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_UserServantEntity____76089096);
}


bool __fastcall CoinRoomCoinIconItem__IsMatchFilter(
        CoinRoomCoinIconItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x21

  if ( (byte_4A5E68D & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4A5E68D = 1;
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
                                                                       (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_23;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
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
                                              (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.svtEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_23:
    sub_1B8880C(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.svtEntity, 0LL) )
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
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v10, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields._rarity_k__BackingField, 0LL);
}


void __fastcall CoinRoomCoinIconItem__SetIsConfirmDialog(
        CoinRoomCoinIconItem_o *this,
        bool check,
        const MethodInfo *method)
{
  this->fields._isConfirmDialog_k__BackingField = check;
}


void __fastcall CoinRoomCoinIconItem__SetIsWarningDialog(
        CoinRoomCoinIconItem_o *this,
        bool check,
        const MethodInfo *method)
{
  this->fields._isWarningDialog_k__BackingField = check;
}


bool __fastcall CoinRoomCoinIconItem__SetSortValue(
        CoinRoomCoinIconItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
  if ( (byte_4A5E68C & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E68C = 1;
  }
  selectedNum_k__BackingField = v5->fields._selectedNum_k__BackingField;
  *(_WORD *)&v5->fields.isTermination = 0;
  v5->fields.sortValue1 = -1LL;
  if ( selectedNum_k__BackingField <= 0 )
  {
    this = (CoinRoomCoinIconItem_o *)((__int64 (__fastcall *)(CoinRoomCoinIconItem_o *, ListViewSort_o *, void *))v5->klass->vtable._5_IsMatchFilter.method)(
                                       v5,
                                       sort,
                                       v5->klass[1]._1.image);
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
      v5->fields.sortValue0B = 0LL;
      v5->fields.sortValue1 = rarity_k__BackingField;
      v16 = (int)StringLiteral_1/*""*/;
      v5->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.sortStr1, v16, (int32_t)method, v3);
      collectionNo_k__BackingField = v5->fields._collectionNo_k__BackingField;
      this = (CoinRoomCoinIconItem_o *)v5->fields.iconLabelInfo;
      v5->fields.sortValue1B = collectionNo_k__BackingField;
      if ( this )
      {
        IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, 57, collectionNo_k__BackingField, 0, 0, 0, 0, 0, 0LL);
        goto LABEL_21;
      }
      goto LABEL_27;
    }
    if ( sortKind == 14 )
    {
      num_k__BackingField = v5->fields._num_k__BackingField;
      v5->fields.sortValue0B = 0LL;
      v5->fields.sortValue1 = num_k__BackingField;
      LODWORD(sortRuby) = (_DWORD)StringLiteral_1/*""*/;
      v5->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
      p_sortStr1 = &v5->fields.sortStr1;
      goto LABEL_14;
    }
LABEL_16:
    v12 = v5->fields._collectionNo_k__BackingField;
    v5->fields.sortValue0B = 0LL;
    v5->fields.sortValue1 = v12;
    v13 = (int)StringLiteral_1/*""*/;
    v5->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.sortStr1, v13, (int32_t)method, v3);
    this = (CoinRoomCoinIconItem_o *)v5->fields.iconLabelInfo;
    v5->fields.sortValue1B = 0LL;
    if ( this )
    {
      IconLabelInfo__Set_38140136(
        (IconLabelInfo_o *)this,
        57,
        v5->fields._collectionNo_k__BackingField,
        0,
        0,
        0,
        0,
        0,
        0LL);
      goto LABEL_21;
    }
LABEL_27:
    sub_1B8880C(this, sort);
  }
  if ( sortKind != 26 )
    goto LABEL_16;
  svtEntity = (int64_t)v5->fields.svtEntity;
  v5->fields.sortValue0B = 0LL;
  if ( svtEntity )
    svtEntity = -*(_DWORD *)(svtEntity + 212);
  sortRuby = v5->fields.sortRuby;
  v5->fields.sortStr1 = sortRuby;
  p_sortStr1 = &v5->fields.sortStr1;
  v5->fields.sortValue1 = svtEntity;
LABEL_14:
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_sortStr1, (int32_t)sortRuby, (int32_t)method, v3);
  this = (CoinRoomCoinIconItem_o *)p_sortStr1[14];
  p_sortStr1[1] = (struct System_String_o *)*((int *)p_sortStr1 + 18);
  if ( !this )
    goto LABEL_27;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
LABEL_21:
  if ( v5->fields._isHeroine_k__BackingField )
    v5->fields.sortValue0 = -10LL;
  if ( sort->fields.isSmartSort && !v5->fields._isCanStrength_k__BackingField )
    v5->fields.sortValue0B = 10LL;
  return 1;
}


bool __fastcall CoinRoomCoinIconItem___IsHeroine_b__58_0(
        CoinRoomCoinIconItem_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  CoinRoomCoinIconItem_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4A5E68E & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E68E = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL) == v4->fields._svtId_k__BackingField
      && UserServantEntity__IsHeroine(x, 0LL);
}


int32_t __fastcall CoinRoomCoinIconItem__get_collectionNo(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._collectionNo_k__BackingField;
}


IconLabelInfo_o *__fastcall CoinRoomCoinIconItem__get_iconInfo(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool __fastcall CoinRoomCoinIconItem__get_isCanStrength(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isCanStrength_k__BackingField;
}


bool __fastcall CoinRoomCoinIconItem__get_isConfirmDialog(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isConfirmDialog_k__BackingField;
}


bool __fastcall CoinRoomCoinIconItem__get_isDisplayNumber(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isDisplayNumber_k__BackingField;
}


bool __fastcall CoinRoomCoinIconItem__get_isHeroine(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isHeroine_k__BackingField;
}


bool __fastcall CoinRoomCoinIconItem__get_isSelected(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isSelected_k__BackingField;
}


bool __fastcall CoinRoomCoinIconItem__get_isTouchEnabled(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isTouchEnabled_k__BackingField;
}


bool __fastcall CoinRoomCoinIconItem__get_isWarningDialog(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._isWarningDialog_k__BackingField;
}


int32_t __fastcall CoinRoomCoinIconItem__get_itemId(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._itemId_k__BackingField;
}


int32_t __fastcall CoinRoomCoinIconItem__get_num(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinIconItem__get_rarity(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._rarity_k__BackingField;
}


int32_t __fastcall CoinRoomCoinIconItem__get_selectedNum(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._selectedNum_k__BackingField;
}


int32_t __fastcall CoinRoomCoinIconItem__get_svtId(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  return this->fields._svtId_k__BackingField;
}


void __fastcall CoinRoomCoinIconItem__set_collectionNo(
        CoinRoomCoinIconItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._collectionNo_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_isCanStrength(
        CoinRoomCoinIconItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isCanStrength_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_isConfirmDialog(
        CoinRoomCoinIconItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isConfirmDialog_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_isDisplayNumber(
        CoinRoomCoinIconItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isDisplayNumber_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_isHeroine(CoinRoomCoinIconItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isHeroine_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_isSelected(
        CoinRoomCoinIconItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isSelected_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_isTouchEnabled(
        CoinRoomCoinIconItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isTouchEnabled_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_isWarningDialog(
        CoinRoomCoinIconItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isWarningDialog_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_itemId(CoinRoomCoinIconItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._itemId_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_num(CoinRoomCoinIconItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._num_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_rarity(CoinRoomCoinIconItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._rarity_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_selectedNum(
        CoinRoomCoinIconItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._selectedNum_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem__set_svtId(CoinRoomCoinIconItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._svtId_k__BackingField = value;
}


void __fastcall CoinRoomCoinIconItem___c__DisplayClass62_0___ctor(
        CoinRoomCoinIconItem___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CoinRoomCoinIconItem___c__DisplayClass62_0___IsCanStrength_b__0(
        CoinRoomCoinIconItem___c__DisplayClass62_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  CoinRoomCoinIconItem___c__DisplayClass62_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4A5E68F & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem___c__DisplayClass62_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E68F = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL) == v4->fields.svtId;
}