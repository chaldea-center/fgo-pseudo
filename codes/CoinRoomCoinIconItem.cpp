void __fastcall CoinRoomCoinIconItem___ctor(
        CoinRoomCoinIconItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *entity,
        bool isDisplayNumber,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  int64_t iconLabelInfo; // x0
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  ServantLimitMaster_o *v20; // x23
  __int64 v21; // x24
  __int64 v22; // x25
  const MethodInfo *v23; // x2
  struct ServantEntity_o *svtEntity; // x8
  const MethodInfo *v25; // x1
  ServantLimitEntity_o *v26; // [xsp+0h] [xbp-50h] BYREF
  WarEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_438B6D8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&IconLabelInfo_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438B6D8 = 1;
  }
  v26 = 0LL;
  entitya = 0LL;
  v9 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo = v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ListViewItem___ctor_24167012((ListViewItem_o *)this, index, 0LL);
  iconLabelInfo = (int64_t)this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_38;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo, 0LL);
  if ( !entity )
    return;
  this->fields._svtId_k__BackingField = entity->fields.svtId;
  this->fields._num_k__BackingField = entity->fields.num;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !iconLabelInfo )
    goto LABEL_38;
  iconLabelInfo = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)iconLabelInfo,
                    &entitya,
                    entity->fields.svtId,
                    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( !entitya )
      goto LABEL_38;
    this->fields._itemId_k__BackingField = (int32_t)entitya->fields.age;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  iconLabelInfo = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       Master_WarQuestSelectionMaster,
                       iconLabelInfo,
                       entity->fields.svtId,
                       0LL);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_38;
  v20 = (ServantLimitMaster_o *)iconLabelInfo;
  v22 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v22;
  *(_QWORD *)&v28.fields.fakeValue = v21;
  iconLabelInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v28, 0LL);
  if ( !v20 )
    goto LABEL_38;
  iconLabelInfo = ServantLimitMaster__TryGetEntity(
                    v20,
                    &v26,
                    iconLabelInfo,
                    EntityDefinitely->fields.maxLimitCount,
                    0LL);
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_38;
    this->fields._rarity_k__BackingField = v26->fields.rarity;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !iconLabelInfo )
LABEL_38:
    sub_B7769C(iconLabelInfo, v16);
  iconLabelInfo = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)iconLabelInfo,
                    (WarEntity_o **)&this->fields.svtEntity,
                    entity->fields.svtId,
                    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  svtEntity = this->fields.svtEntity;
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( svtEntity )
    {
      this->fields._collectionNo_k__BackingField = svtEntity->fields.collectionNo;
LABEL_35:
      ServantEntity__getName_31714324(svtEntity, &this->fields.sortRuby, EntityDefinitely->fields.maxLimitCount, 0LL);
      goto LABEL_36;
    }
    goto LABEL_38;
  }
  if ( svtEntity )
    goto LABEL_35;
LABEL_36:
  this->fields._isCanStrength_k__BackingField = CoinRoomCoinIconItem__IsCanStrength_25832368(
                                                  this->fields._svtId_k__BackingField,
                                                  0,
                                                  v23);
  this->fields._isHeroine_k__BackingField = CoinRoomCoinIconItem__IsHeroine(this, v25);
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
  __int64 v9; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = usrSvtEntity;
  if ( (byte_438B6DB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    usrSvtEntity = (UserServantEntity_o *)sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_438B6DB = 1;
  }
  entity = 0LL;
  if ( !v2 )
    goto LABEL_20;
  usrSvtEntity = (UserServantEntity_o *)UserServantEntity__getAppendSkillInfo(v2, 0LL);
  if ( !usrSvtEntity )
    goto LABEL_20;
  currentCryptoKey = usrSvtEntity->fields.id.fields.currentCryptoKey;
  hiddenValue = usrSvtEntity->fields.id.fields.hiddenValue;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  usrSvtEntity = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !currentCryptoKey )
LABEL_20:
    sub_B7769C(usrSvtEntity, method);
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
    {
LABEL_21:
      v9 = sub_B776C8(usrSvtEntity);
      sub_B77668(v9, 0LL);
    }
    if ( !v6 )
      goto LABEL_20;
    usrSvtEntity = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)v6,
                                            &entity,
                                            *(_DWORD *)(currentCryptoKey + 4LL * (int)v7 + 32),
                                            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
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

  return CoinRoomCoinIconItem__IsCanStrength_25832368(this->fields._svtId_k__BackingField, 0, v2);
}


bool __fastcall CoinRoomCoinIconItem__IsCanStrength_25832368(
        int32_t svtId,
        bool isWarningDialog,
        const MethodInfo *method)
{
  CoinRoomCoinIconItem___c__DisplayClass62_0_o *v5; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  bool v8; // w20
  int32_t rarity; // w8
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x21
  DataMasterBase_WarMaster__WarEntity__int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x19
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x19
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  UserServantEntity_o *v28; // x0
  __int64 v29; // x1
  UserServantEntity_o *v30; // x20
  _BOOL4 isExceedLvMax; // w21
  const MethodInfo *v32; // x1
  int v33; // w8
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  int v38; // [xsp+8h] [xbp-48h]
  ServantLimitEntity_o *v39; // [xsp+18h] [xbp-38h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_438B6DA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_B775C4(&Method_System_Func_UserServantEntity__bool___ctor__);
    sub_B775C4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__);
    sub_B775C4(&CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo);
    byte_438B6DA = 1;
  }
  entity = 0LL;
  v39 = 0LL;
  v5 = (CoinRoomCoinIconItem___c__DisplayClass62_0_o *)sub_B77694(CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo);
  CoinRoomCoinIconItem___c__DisplayClass62_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_60;
  v5->fields.svtId = svtId;
  if ( !isWarningDialog )
    goto LABEL_23;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_60:
    sub_B7769C(Master_WarQuestSelectionMaster, v7);
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         v5->fields.svtId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
    if ( !entity )
      goto LABEL_60;
    v8 = ServantEntity__IsCoinRoomCheck((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v8 = 0;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v8 )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_60;
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantLimitMaster__TryGetEntity(
                                                                                      (ServantLimitMaster_o *)Master_WarQuestSelectionMaster,
                                                                                      &v39,
                                                                                      v5->fields.svtId,
                                                                                      0,
                                                                                      0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v39 )
        goto LABEL_60;
      rarity = v39->fields.rarity;
      if ( rarity && rarity < 4 )
        return 0;
    }
  }
LABEL_23:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_60;
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(
                                                                   (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                                                   0LL);
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_UserServantEntity__bool___ctor__);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                    AllList,
                                                                                    (System_Func_TSource__bool__o *)v12,
                                                                                    (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_60;
  klass = Master_WarQuestSelectionMaster->klass;
  v14 = Master_WarQuestSelectionMaster;
  if ( *(_WORD *)&Master_WarQuestSelectionMaster->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&Master_WarQuestSelectionMaster->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v17 = sub_B0F4C0(
            Master_WarQuestSelectionMaster,
            System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo,
            0LL);
  }
  v19 = (*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, _QWORD))v17)(
          v14,
          *(_QWORD *)(v17 + 8));
  if ( !v19 )
    sub_B7769C(0LL, v18);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_39;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_39:
      v23 = sub_B0F4C0(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_46;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_46:
      v27 = sub_B0F4C0(v19, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v28 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    v30 = v28;
    if ( !v28 )
      sub_B7769C(0LL, v29);
    isExceedLvMax = UserServantEntity__isExceedLvMax(v28, 0LL);
    if ( (isExceedLvMax & CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(v30, v32) & 1) != 0 )
    {
      v33 = 187;
      goto LABEL_52;
    }
  }
  v33 = 185;
LABEL_52:
  v38 = v33;
  v34 = *(_QWORD *)v19;
  if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
  {
    v35 = 0LL;
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
        goto LABEL_56;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_56:
    v37 = sub_B0F4C0(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v19, *(_QWORD *)(v37 + 8));
  return v38 == 185;
}


bool __fastcall CoinRoomCoinIconItem__IsHeroine(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  UserServantEntity_array *OrganizationList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v6; // x21

  if ( (byte_438B6D9 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_UserServantEntity____69468528);
    sub_B775C4(&Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Func_UserServantEntity__bool___ctor__);
    sub_B775C4(&System_Func_UserServantEntity__bool__TypeInfo);
    byte_438B6D9 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(0LL, v4);
  OrganizationList = UserServantMaster__getOrganizationList(Master_WarQuestSelectionMaster, 0LL);
  v6 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v6,
    (Il2CppObject *)this,
    Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_UserServantEntity__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)OrganizationList,
           (System_Func_T__bool__o *)v6,
           (const MethodInfo_1C661F0 *)Method_BasicHelper_Any_UserServantEntity____69468528);
}


bool __fastcall CoinRoomCoinIconItem__IsMatchFilter(
        CoinRoomCoinIconItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x21

  if ( (byte_438B6DD & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438B6DD = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_26;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_26;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v7->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                              ClassGroupFilterKindList,
                                              (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.svtEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_26:
    sub_B7769C(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.svtEntity, 0LL) )
    return 0;
LABEL_17:
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_26;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CoinRoomCoinIconItem_o *v9; // x19
  int selectedNum_k__BackingField; // w8
  int32_t sortKind; // w8
  int64_t svtEntity; // x8
  System_Int32_array **sortRuby; // x1
  BattleServantConfConponent_o *p_sortStr1; // x0
  int64_t num_k__BackingField; // x8
  int64_t v16; // x8
  System_Int32_array **v17; // x1
  int64_t rarity_k__BackingField; // x8
  System_Int32_array **v20; // x1
  int64_t collectionNo_k__BackingField; // x2

  v9 = this;
  if ( (byte_438B6DC & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B6DC = 1;
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
      v20 = (System_Int32_array **)StringLiteral_1/*""*/;
      v9->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B77560(
        (BattleServantConfConponent_o *)&v9->fields.sortStr1,
        v20,
        (System_String_array **)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      collectionNo_k__BackingField = v9->fields._collectionNo_k__BackingField;
      this = (CoinRoomCoinIconItem_o *)v9->fields.iconLabelInfo;
      v9->fields.sortValue1B = collectionNo_k__BackingField;
      if ( this )
      {
        IconLabelInfo__Set_28141596((IconLabelInfo_o *)this, 57, collectionNo_k__BackingField, 0, 0, 0, 0, 0, 0LL);
        goto LABEL_21;
      }
      goto LABEL_27;
    }
    if ( sortKind == 14 )
    {
      num_k__BackingField = v9->fields._num_k__BackingField;
      p_sortStr1 = (BattleServantConfConponent_o *)&v9->fields.sortStr1;
      v9->fields.sortValue0B = 0LL;
      v9->fields.sortValue1 = num_k__BackingField;
      sortRuby = (System_Int32_array **)StringLiteral_1/*""*/;
      goto LABEL_14;
    }
LABEL_16:
    v16 = v9->fields._collectionNo_k__BackingField;
    v9->fields.sortValue0B = 0LL;
    v9->fields.sortValue1 = v16;
    v17 = (System_Int32_array **)StringLiteral_1/*""*/;
    v9->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->fields.sortStr1,
      v17,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this = (CoinRoomCoinIconItem_o *)v9->fields.iconLabelInfo;
    v9->fields.sortValue1B = 0LL;
    if ( this )
    {
      IconLabelInfo__Set_28141596(
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
    sub_B7769C(this, sort);
  }
  if ( sortKind != 26 )
    goto LABEL_16;
  svtEntity = (int64_t)v9->fields.svtEntity;
  v9->fields.sortValue0B = 0LL;
  if ( svtEntity )
    svtEntity = -*(_DWORD *)(svtEntity + 212);
  sortRuby = (System_Int32_array **)v9->fields.sortRuby;
  p_sortStr1 = (BattleServantConfConponent_o *)&v9->fields.sortStr1;
  v9->fields.sortValue1 = svtEntity;
LABEL_14:
  v9->fields.sortStr1 = (struct System_String_o *)sortRuby;
  sub_B77560(p_sortStr1, sortRuby, (System_String_array **)method, v3, v4, v5, v6, v7);
  this = (CoinRoomCoinIconItem_o *)v9->fields.iconLabelInfo;
  v9->fields.sortValue1B = v9->fields._collectionNo_k__BackingField;
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
  if ( (byte_438B6DE & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438B6DE = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v8, 0LL) == v4->fields._svtId_k__BackingField
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
  if ( (byte_43885A5 & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem___c__DisplayClass62_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_43885A5 = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v8, 0LL) == v4->fields.svtId;
}