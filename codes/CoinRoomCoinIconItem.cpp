// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconItem___ctor(
        CoinRoomCoinIconItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *entity,
        bool isDisplayNumber,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  IconLabelInfo_o *v27; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  int64_t iconLabelInfo; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  ServantLimitMaster_o *v40; // x23
  __int64 v41; // x24
  __int64 v42; // x25
  const MethodInfo *v43; // x2
  struct ServantEntity_o *svtEntity; // x8
  const MethodInfo *v45; // x1
  ServantLimitEntity_o *v46; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entitya; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B197B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, *(_QWORD *)&index, entity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtCoinMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    byte_4B197B6 = 1;
  }
  entitya = 0LL;
  v46 = 0LL;
  v27 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, entity, isDisplayNumber);
  IconLabelInfo___ctor(v27, 0LL);
  this->fields.iconLabelInfo = v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  iconLabelInfo = (int64_t)this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_33;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo, 0LL);
  if ( !entity )
    return;
  this->fields._svtId_k__BackingField = entity->fields.svtId;
  this->fields._num_k__BackingField = entity->fields.num;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !iconLabelInfo )
    goto LABEL_33;
  iconLabelInfo = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
                    &entitya,
                    entity->fields.svtId,
                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( !entitya )
      goto LABEL_33;
    this->fields._itemId_k__BackingField = (int32_t)entitya[1].monitor;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
  iconLabelInfo = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_33;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       iconLabelInfo,
                       entity->fields.svtId,
                       0LL);
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_33;
  v40 = (ServantLimitMaster_o *)iconLabelInfo;
  v42 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
  *(_QWORD *)&v48.fields.currentCryptoKey = v42;
  *(_QWORD *)&v48.fields.fakeValue = v41;
  iconLabelInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v48, 0LL);
  if ( !v40 )
    goto LABEL_33;
  iconLabelInfo = ServantLimitMaster__TryGetEntity(
                    v40,
                    &v46,
                    iconLabelInfo,
                    EntityDefinitely->fields.maxLimitCount,
                    0LL);
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( !v46 )
      goto LABEL_33;
    this->fields._rarity_k__BackingField = v46->fields.rarity;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
  iconLabelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !iconLabelInfo )
LABEL_33:
    sub_1BCAA3C(iconLabelInfo, v34);
  iconLabelInfo = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)iconLabelInfo,
                    (Il2CppObject **)&this->fields.svtEntity,
                    entity->fields.svtId,
                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  svtEntity = this->fields.svtEntity;
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( svtEntity )
    {
      this->fields._collectionNo_k__BackingField = svtEntity->fields.collectionNo;
LABEL_30:
      ServantEntity__getName_40384088(svtEntity, &this->fields.sortRuby, EntityDefinitely->fields.maxLimitCount, 0LL);
      goto LABEL_31;
    }
    goto LABEL_33;
  }
  if ( svtEntity )
    goto LABEL_30;
LABEL_31:
  this->fields._isCanStrength_k__BackingField = CoinRoomCoinIconItem__IsCanStrength_45353740(
                                                  this->fields._svtId_k__BackingField,
                                                  0,
                                                  v43);
  this->fields._isHeroine_k__BackingField = CoinRoomCoinIconItem__IsHeroine(this, v45);
  this->fields._isTouchEnabled_k__BackingField = 1;
  this->fields._isDisplayNumber_k__BackingField = isDisplayNumber;
}


bool __fastcall CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(
        UserServantEntity_o *usrSvtEntity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UserServantEntity_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t currentCryptoKey; // x20
  int64_t hiddenValue; // x21
  int v10; // w8
  UserServantEntity_o *v11; // x19
  unsigned int v12; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = usrSvtEntity;
  if ( (byte_4B197B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    usrSvtEntity = (UserServantEntity_o *)sub_1BCA7E0(
                                            &Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__,
                                            v6,
                                            v7);
    byte_4B197B9 = 1;
  }
  entity = 0LL;
  if ( !v3 )
    goto LABEL_20;
  usrSvtEntity = (UserServantEntity_o *)UserServantEntity__getAppendSkillInfo(v3, 0LL);
  if ( !usrSvtEntity )
    goto LABEL_20;
  currentCryptoKey = usrSvtEntity->fields.id.fields.currentCryptoKey;
  hiddenValue = usrSvtEntity->fields.id.fields.hiddenValue;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  usrSvtEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !currentCryptoKey )
LABEL_20:
    sub_1BCAA3C(usrSvtEntity, method);
  v10 = *(_DWORD *)(currentCryptoKey + 24);
  if ( v10 < 1 )
    return 1;
  v11 = usrSvtEntity;
  v12 = 0;
  while ( 1 )
  {
    if ( !hiddenValue )
      goto LABEL_20;
    if ( v12 >= *(_DWORD *)(hiddenValue + 24) )
      goto LABEL_21;
    if ( *(int *)(hiddenValue + 4LL * (int)v12 + 32) < 1 )
      return 0;
    if ( v12 >= v10 )
LABEL_21:
      sub_1BCAA44(usrSvtEntity, method);
    if ( !v11 )
      goto LABEL_20;
    usrSvtEntity = (UserServantEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
                                            &entity,
                                            *(_DWORD *)(currentCryptoKey + 4LL * (int)v12 + 32),
                                            (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)usrSvtEntity & 1) == 0 )
      return 0;
    v10 = *(_DWORD *)(currentCryptoKey + 24);
    if ( (int)++v12 >= v10 )
      return 1;
  }
}


bool __fastcall CoinRoomCoinIconItem__IsCanStrength(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CoinRoomCoinIconItem__IsCanStrength_45353740(this->fields._svtId_k__BackingField, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CoinRoomCoinIconItem__IsCanStrength_45353740(
        int32_t svtId,
        bool isWarningDialog,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v32; // x1
  bool v33; // w20
  int32_t rarity; // w8
  char v35; // w21
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Func_object__bool__o *v40; // x21
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x19
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x19
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  char v52; // w21
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  UserServantEntity_o *v57; // x0
  __int64 v58; // x1
  UserServantEntity_o *v59; // x20
  _BOOL4 isExceedLvMax; // w22
  const MethodInfo *v61; // x1
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  ServantLimitEntity_o *v67; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B197B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, isWarningDialog, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v14, v15);
    sub_1BCA7E0(&System_Func_UserServantEntity__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__, v26, v27);
    sub_1BCA7E0(&CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo, v28, v29);
    byte_4B197B8 = 1;
  }
  v67 = 0LL;
  entity = 0LL;
  v30 = sub_1BCAA2C(CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo, isWarningDialog, method, v3);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_56;
  *(_DWORD *)(v30 + 16) = svtId;
  if ( !isWarningDialog )
    goto LABEL_21;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
LABEL_56:
    sub_1BCAA3C(Master_object, v32);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         *(_DWORD *)(v30 + 16),
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_56;
    v33 = ServantEntity__IsCoinRoomCheck((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v33 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v33 )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__TryGetEntity(
                                                                    (ServantLimitMaster_o *)Master_object,
                                                                    &v67,
                                                                    *(_DWORD *)(v30 + 16),
                                                                    0,
                                                                    0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v67 )
        goto LABEL_56;
      rarity = v67->fields.rarity;
      if ( rarity && rarity < 4 )
      {
        v35 = 0;
        return v35 & 1;
      }
    }
  }
LABEL_21:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_56;
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(
                                                                   (UserServantMaster_o *)Master_object,
                                                                   0LL);
  v40 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserServantEntity__bool__TypeInfo, v37, v38, v39);
  System_Func_object__bool____ctor(
    v40,
    (Il2CppObject *)v30,
    Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__,
    0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_object_(
                                                                  AllList,
                                                                  (System_Func_TSource__bool__o *)v40,
                                                                  (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Master_object )
    goto LABEL_56;
  klass = Master_object->klass;
  v42 = Master_object;
  v43 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v43;
      p_offset += 4;
      if ( !v43 )
        goto LABEL_29;
    }
    v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v45 = sub_1C1C7C0(Master_object, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v47 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
  if ( !v47 )
    sub_1BCAA3C(0LL, v46);
  do
  {
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_36;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_36:
      v51 = sub_1C1C7C0(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8));
    if ( (v52 & 1) == 0 )
      break;
    v53 = *(_QWORD *)v47;
    v54 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v55 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_43;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_43:
      v56 = sub_1C1C7C0(v47, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v57 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v47, *(_QWORD *)(v56 + 8));
    v59 = v57;
    if ( !v57 )
      sub_1BCAA3C(0LL, v58);
    isExceedLvMax = UserServantEntity__isExceedLvMax(v57, 0LL);
  }
  while ( (isExceedLvMax & CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(v59, v61) & 1) == 0 );
  v35 = v52 ^ 1;
  v62 = *(_QWORD *)v47;
  v63 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_51;
    }
    v65 = v62 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_51:
    v65 = sub_1C1C7C0(v47, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v65)(v47, *(_QWORD *)(v65 + 8));
  return v35 & 1;
}


bool __fastcall CoinRoomCoinIconItem__IsHeroine(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
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
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  System_Object_array *OrganizationList; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Func_object__bool__o *v18; // x21

  if ( (byte_4B197B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_UserServantEntity____76840456, method, v2);
    sub_1BCA7E0(&Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_UserServantEntity__bool__TypeInfo, v10, v11);
    byte_4B197B7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v13);
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0LL);
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserServantEntity__bool__TypeInfo, v15, v16, v17);
  System_Func_object__bool____ctor(v18, (Il2CppObject *)this, Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__, 0LL);
  return BasicHelper__Any_object__49274176(
           OrganizationList,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_UserServantEntity____76840456);
}


bool __fastcall CoinRoomCoinIconItem__IsMatchFilter(
        CoinRoomCoinIconItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x21

  if ( (byte_4B197BB & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5, v6);
    byte_4B197BB = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v7 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_23;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.svtEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_15;
    }
LABEL_23:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.svtEntity, 0LL) )
    return 0;
LABEL_15:
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_23;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v12, 0LL)
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CoinRoomCoinIconItem_o *v9; // x19
  int selectedNum_k__BackingField; // w8
  int32_t sortKind; // w8
  int64_t svtEntity; // x8
  struct System_String_o *sortRuby; // x1
  struct System_String_o **p_sortStr1; // x21
  int64_t num_k__BackingField; // x8
  int64_t v16; // x8
  void *v17; // x1
  int64_t rarity_k__BackingField; // x8
  void *v20; // x1
  int64_t collectionNo_k__BackingField; // x2

  v9 = this;
  if ( (byte_4B197BA & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, sort, method);
    byte_4B197BA = 1;
  }
  selectedNum_k__BackingField = v9->fields._selectedNum_k__BackingField;
  *(_WORD *)&v9->fields.isTermination = 0;
  v9->fields.sortValue1 = -1LL;
  if ( selectedNum_k__BackingField <= 0 )
  {
    this = (CoinRoomCoinIconItem_o *)((__int64 (__fastcall *)(CoinRoomCoinIconItem_o *, ListViewSort_o *, void *))v9->klass->vtable._5_IsMatchFilter.method)(
                                       v9,
                                       sort,
                                       v9->klass[1]._1.image);
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
      rarity_k__BackingField = v9->fields._rarity_k__BackingField;
      v9->fields.sortValue0B = 0LL;
      v9->fields.sortValue1 = rarity_k__BackingField;
      v20 = StringLiteral_1/*""*/;
      v9->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.sortStr1, (int64_t)v20, (int64_t)method, v3, v4, v5, v6, v7);
      collectionNo_k__BackingField = v9->fields._collectionNo_k__BackingField;
      this = (CoinRoomCoinIconItem_o *)v9->fields.iconLabelInfo;
      v9->fields.sortValue1B = collectionNo_k__BackingField;
      if ( this )
      {
        IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, 57, collectionNo_k__BackingField, 0, 0, 0, 0, 0, 0LL);
        goto LABEL_21;
      }
      goto LABEL_27;
    }
    if ( sortKind == 14 )
    {
      num_k__BackingField = v9->fields._num_k__BackingField;
      v9->fields.sortValue0B = 0LL;
      v9->fields.sortValue1 = num_k__BackingField;
      sortRuby = (struct System_String_o *)StringLiteral_1/*""*/;
      v9->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
      p_sortStr1 = &v9->fields.sortStr1;
      goto LABEL_14;
    }
LABEL_16:
    v16 = v9->fields._collectionNo_k__BackingField;
    v9->fields.sortValue0B = 0LL;
    v9->fields.sortValue1 = v16;
    v17 = StringLiteral_1/*""*/;
    v9->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.sortStr1, (int64_t)v17, (int64_t)method, v3, v4, v5, v6, v7);
    this = (CoinRoomCoinIconItem_o *)v9->fields.iconLabelInfo;
    v9->fields.sortValue1B = 0LL;
    if ( this )
    {
      IconLabelInfo__Set_38850420(
        (IconLabelInfo_o *)this,
        57,
        v9->fields._collectionNo_k__BackingField,
        0,
        0,
        0,
        0,
        0,
        0LL);
      goto LABEL_21;
    }
LABEL_27:
    sub_1BCAA3C(this, sort);
  }
  if ( sortKind != 26 )
    goto LABEL_16;
  svtEntity = (int64_t)v9->fields.svtEntity;
  v9->fields.sortValue0B = 0LL;
  if ( svtEntity )
    svtEntity = -*(_DWORD *)(svtEntity + 212);
  sortRuby = v9->fields.sortRuby;
  v9->fields.sortStr1 = sortRuby;
  p_sortStr1 = &v9->fields.sortStr1;
  v9->fields.sortValue1 = svtEntity;
LABEL_14:
  sub_1BCA784((PartyOrganizationUtility_o *)p_sortStr1, (int64_t)sortRuby, (int64_t)method, v3, v4, v5, v6, v7);
  this = (CoinRoomCoinIconItem_o *)p_sortStr1[14];
  p_sortStr1[1] = (struct System_String_o *)*((int *)p_sortStr1 + 18);
  if ( !this )
    goto LABEL_27;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
LABEL_21:
  if ( v9->fields._isHeroine_k__BackingField )
    v9->fields.sortValue0 = -10LL;
  if ( sort->fields.isSmartSort && !v9->fields._isCanStrength_k__BackingField )
    v9->fields.sortValue0B = 10LL;
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
  if ( (byte_4B197BC & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x, method);
    byte_4B197BC = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL) == v4->fields._svtId_k__BackingField
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
  if ( (byte_4B197BD & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem___c__DisplayClass62_0_o *)sub_1BCA7E0(
                                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                             x,
                                                             method);
    byte_4B197BD = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL) == v4->fields.svtId;
}