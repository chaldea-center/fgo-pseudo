// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconItem___ctor(
        CoinRoomCoinIconItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *entity,
        bool isDisplayNumber,
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
  IconLabelInfo_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  int64_t iconLabelInfo; // x0
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  ServantLimitMaster_o *v25; // x23
  __int64 v26; // x24
  __int64 v27; // x25
  const MethodInfo *v28; // x2
  struct ServantEntity_o *svtEntity; // x8
  const MethodInfo *v30; // x1
  ServantLimitEntity_o *v31; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entitya; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4A22FB8 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B715CC(&Method_DataManager_GetMaster_SvtCoinMaster___, v10);
    sub_1B715CC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_1B715CC(&DataManager_TypeInfo, v12);
    sub_1B715CC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13);
    sub_1B715CC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v14);
    sub_1B715CC(&IconLabelInfo_TypeInfo, v15);
    sub_1B715CC(&NetworkManager_TypeInfo, v16);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    byte_4A22FB8 = 1;
  }
  entitya = 0LL;
  v31 = 0LL;
  v18 = (IconLabelInfo_o *)sub_1B71818(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo = v18;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo, (int32_t)v18, v19, v20);
  ListViewItem___ctor_40493632((ListViewItem_o *)this, index, 0LL);
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
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !iconLabelInfo )
    goto LABEL_33;
  iconLabelInfo = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
                    &entitya,
                    entity->fields.svtId,
                    (const MethodInfo_30F87B4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( !entitya )
      goto LABEL_33;
    this->fields._itemId_k__BackingField = (int32_t)entitya[1].monitor;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_33;
  v25 = (ServantLimitMaster_o *)iconLabelInfo;
  v27 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v27;
  *(_QWORD *)&v33.fields.fakeValue = v26;
  iconLabelInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v33, 0LL);
  if ( !v25 )
    goto LABEL_33;
  iconLabelInfo = ServantLimitMaster__TryGetEntity(
                    v25,
                    &v31,
                    iconLabelInfo,
                    EntityDefinitely->fields.maxLimitCount,
                    0LL);
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_33;
    this->fields._rarity_k__BackingField = v31->fields.rarity;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !iconLabelInfo )
LABEL_33:
    sub_1B71828(iconLabelInfo, v21);
  iconLabelInfo = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
                    (Il2CppObject **)&this->fields.svtEntity,
                    entity->fields.svtId,
                    (const MethodInfo_30F87B4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  svtEntity = this->fields.svtEntity;
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( svtEntity )
    {
      this->fields._collectionNo_k__BackingField = svtEntity->fields.collectionNo;
LABEL_30:
      ServantEntity__getName_39445488(svtEntity, &this->fields.sortRuby, EntityDefinitely->fields.maxLimitCount, 0LL);
      goto LABEL_31;
    }
    goto LABEL_33;
  }
  if ( svtEntity )
    goto LABEL_30;
LABEL_31:
  this->fields._isCanStrength_k__BackingField = CoinRoomCoinIconItem__IsCanStrength_44337796(
                                                  this->fields._svtId_k__BackingField,
                                                  0,
                                                  v28);
  this->fields._isHeroine_k__BackingField = CoinRoomCoinIconItem__IsHeroine(this, v30);
  this->fields._isTouchEnabled_k__BackingField = 1;
  this->fields._isDisplayNumber_k__BackingField = isDisplayNumber;
}


bool __fastcall CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(
        UserServantEntity_o *usrSvtEntity,
        const MethodInfo *method)
{
  UserServantEntity_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t currentCryptoKey; // x20
  int64_t hiddenValue; // x21
  int v7; // w8
  UserServantEntity_o *v8; // x19
  unsigned int v9; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = usrSvtEntity;
  if ( (byte_4A22FBB & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1B715CC(&DataManager_TypeInfo, v3);
    usrSvtEntity = (UserServantEntity_o *)sub_1B715CC(
                                            &Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__,
                                            v4);
    byte_4A22FBB = 1;
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
  usrSvtEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !currentCryptoKey )
LABEL_20:
    sub_1B71828(usrSvtEntity, method);
  v7 = *(_DWORD *)(currentCryptoKey + 24);
  if ( v7 < 1 )
    return 1;
  v8 = usrSvtEntity;
  v9 = 0;
  while ( 1 )
  {
    if ( !hiddenValue )
      goto LABEL_20;
    if ( v9 >= *(_DWORD *)(hiddenValue + 24) )
      goto LABEL_21;
    if ( *(int *)(hiddenValue + 4LL * (int)v9 + 32) < 1 )
      return 0;
    if ( v9 >= v7 )
LABEL_21:
      sub_1B71830(usrSvtEntity, method);
    if ( !v8 )
      goto LABEL_20;
    usrSvtEntity = (UserServantEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
                                            &entity,
                                            *(_DWORD *)(currentCryptoKey + 4LL * (int)v9 + 32),
                                            (const MethodInfo_30F87B4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)usrSvtEntity & 1) == 0 )
      return 0;
    v7 = *(_DWORD *)(currentCryptoKey + 24);
    if ( (int)++v9 >= v7 )
      return 1;
  }
}


bool __fastcall CoinRoomCoinIconItem__IsCanStrength(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CoinRoomCoinIconItem__IsCanStrength_44337796(this->fields._svtId_k__BackingField, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CoinRoomCoinIconItem__IsCanStrength_44337796(
        int32_t svtId,
        bool isWarningDialog,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v19; // x1
  bool v20; // w20
  int32_t rarity; // w8
  char v22; // w21
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  System_Func_object__bool__o *v24; // x21
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x19
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x19
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  char v36; // w21
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  UserServantEntity_o *v41; // x0
  __int64 v42; // x1
  UserServantEntity_o *v43; // x20
  _BOOL4 isExceedLvMax; // w22
  const MethodInfo *v45; // x1
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  ServantLimitEntity_o *v51; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A22FBA & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_ServantLimitMaster___, isWarningDialog);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1B715CC(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1B715CC(&DataManager_TypeInfo, v7);
    sub_1B715CC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v9);
    sub_1B715CC(&System_Func_UserServantEntity__bool__TypeInfo, v10);
    sub_1B715CC(&System_IDisposable_TypeInfo, v11);
    sub_1B715CC(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v12);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v13);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B715CC(&Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__, v15);
    sub_1B715CC(&CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo, v16);
    byte_4A22FBA = 1;
  }
  v51 = 0LL;
  entity = 0LL;
  v17 = sub_1B71818(CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_56;
  *(_DWORD *)(v17 + 16) = svtId;
  if ( !isWarningDialog )
    goto LABEL_21;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
LABEL_56:
    sub_1B71828(Master_object, v19);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         *(_DWORD *)(v17 + 16),
         (const MethodInfo_30F87B4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_56;
    v20 = ServantEntity__IsCoinRoomCheck((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v20 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v20 )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__TryGetEntity(
                                                                    (ServantLimitMaster_o *)Master_object,
                                                                    &v51,
                                                                    *(_DWORD *)(v17 + 16),
                                                                    0,
                                                                    0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v51 )
        goto LABEL_56;
      rarity = v51->fields.rarity;
      if ( rarity && rarity < 4 )
      {
        v22 = 0;
        return v22 & 1;
      }
    }
  }
LABEL_21:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_56;
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(
                                                                   (UserServantMaster_o *)Master_object,
                                                                   0LL);
  v24 = (System_Func_object__bool__o *)sub_1B71818(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v17,
    Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__,
    0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_object_(
                                                                  AllList,
                                                                  (System_Func_TSource__bool__o *)v24,
                                                                  (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Master_object )
    goto LABEL_56;
  klass = Master_object->klass;
  v26 = Master_object;
  v27 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v29 = sub_1BC35AC(Master_object, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  if ( !v31 )
    sub_1B71828(0LL, v30);
  do
  {
    v32 = *(_QWORD *)v31;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_36;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_36:
      v35 = sub_1BC35AC(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8));
    if ( (v36 & 1) == 0 )
      break;
    v37 = *(_QWORD *)v31;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v39 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_43;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_43:
      v40 = sub_1BC35AC(v31, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v41 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v31, *(_QWORD *)(v40 + 8));
    v43 = v41;
    if ( !v41 )
      sub_1B71828(0LL, v42);
    isExceedLvMax = UserServantEntity__isExceedLvMax(v41, 0LL);
  }
  while ( (isExceedLvMax & CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(v43, v45) & 1) == 0 );
  v22 = v36 ^ 1;
  v46 = *(_QWORD *)v31;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_51;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_51:
    v49 = sub_1BC35AC(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v31, *(_QWORD *)(v49 + 8));
  return v22 & 1;
}


bool __fastcall CoinRoomCoinIconItem__IsHeroine(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_Object_array *OrganizationList; // x20
  System_Func_object__bool__o *v10; // x21

  if ( (byte_4A22FB9 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_UserServantEntity____75850712, method);
    sub_1B715CC(&Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__, v3);
    sub_1B715CC(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_1B715CC(&DataManager_TypeInfo, v5);
    sub_1B715CC(&System_Func_UserServantEntity__bool__TypeInfo, v6);
    byte_4A22FB9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1B71828(0LL, v8);
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0LL);
  v10 = (System_Func_object__bool__o *)sub_1B71818(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v10, (Il2CppObject *)this, Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__, 0LL);
  return BasicHelper__Any_object__48523356(
           OrganizationList,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_2E4685C *)Method_BasicHelper_Any_UserServantEntity____75850712);
}


bool __fastcall CoinRoomCoinIconItem__IsMatchFilter(
        CoinRoomCoinIconItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FilterKindList_c *v6; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x21

  if ( (byte_4A22FBD & 1) == 0 )
  {
    sub_1B715CC(&FilterKindList_TypeInfo, sort);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4A22FBD = 1;
  }
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_34B7520 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_23;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                              ClassGroupFilterKindList,
                                              (const MethodInfo_34B7520 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.svtEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_23:
    sub_1B71828(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.svtEntity, 0LL) )
    return 0;
LABEL_15:
  v10 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_34B7520 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v11, 0LL)
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
  if ( (byte_4A22FBC & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_1B715CC(&StringLiteral_1/*""*/, sort);
    byte_4A22FBC = 1;
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
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v5->fields.sortStr1, v16, (int32_t)method, v3);
      collectionNo_k__BackingField = v5->fields._collectionNo_k__BackingField;
      this = (CoinRoomCoinIconItem_o *)v5->fields.iconLabelInfo;
      v5->fields.sortValue1B = collectionNo_k__BackingField;
      if ( this )
      {
        IconLabelInfo__Set_37935228((IconLabelInfo_o *)this, 57, collectionNo_k__BackingField, 0, 0, 0, 0, 0, 0LL);
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
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v5->fields.sortStr1, v13, (int32_t)method, v3);
    this = (CoinRoomCoinIconItem_o *)v5->fields.iconLabelInfo;
    v5->fields.sortValue1B = 0LL;
    if ( this )
    {
      IconLabelInfo__Set_37935228(
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
    sub_1B71828(this, sort);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_sortStr1, (int32_t)sortRuby, (int32_t)method, v3);
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
  if ( (byte_4A22FBE & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
    byte_4A22FBE = 1;
  }
  if ( !x )
    sub_1B71828(this, x);
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v8, 0LL) == v4->fields._svtId_k__BackingField
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
  if ( (byte_4A22FBF & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem___c__DisplayClass62_0_o *)sub_1B715CC(
                                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                             x);
    byte_4A22FBF = 1;
  }
  if ( !x )
    sub_1B71828(this, x);
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v8, 0LL) == v4->fields.svtId;
}