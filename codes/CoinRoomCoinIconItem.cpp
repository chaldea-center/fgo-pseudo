// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconItem___ctor(
        CoinRoomCoinIconItem_o *this,
        int32_t index,
        UserSvtCoinEntity_o *entity,
        bool isDisplayNumber,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  IconLabelInfo_o *v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  int64_t iconLabelInfo; // x0
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  ServantLimitMaster_o *v47; // x23
  __int64 v48; // x24
  __int64 v49; // x25
  const MethodInfo *v50; // x2
  struct ServantEntity_o *svtEntity; // x8
  const MethodInfo *v52; // x1
  ServantLimitEntity_o *v53; // [xsp+0h] [xbp-50h] BYREF
  WarEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_42E8CD8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitMaster___, index, (_DWORD)entity, isDisplayNumber);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_SvtCoinMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v24, v25, v26);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    byte_42E8CD8 = 1;
  }
  v53 = 0LL;
  entitya = 0LL;
  v36 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v36, 0LL);
  this->fields.iconLabelInfo = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
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
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !iconLabelInfo )
    goto LABEL_38;
  iconLabelInfo = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)iconLabelInfo,
                    &entitya,
                    entity->fields.svtId,
                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( !entitya )
      goto LABEL_38;
    this->fields._itemId_k__BackingField = (int32_t)entitya->fields.age;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_38;
  v47 = (ServantLimitMaster_o *)iconLabelInfo;
  v49 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v55.fields.currentCryptoKey = v49;
  *(_QWORD *)&v55.fields.fakeValue = v48;
  iconLabelInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v55, 0LL);
  if ( !v47 )
    goto LABEL_38;
  iconLabelInfo = ServantLimitMaster__TryGetEntity(
                    v47,
                    &v53,
                    iconLabelInfo,
                    EntityDefinitely->fields.maxLimitCount,
                    0LL);
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( !v53 )
      goto LABEL_38;
    this->fields._rarity_k__BackingField = v53->fields.rarity;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  iconLabelInfo = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !iconLabelInfo )
LABEL_38:
    sub_B5D69C(iconLabelInfo, v43);
  iconLabelInfo = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)iconLabelInfo,
                    (WarEntity_o **)&this->fields.svtEntity,
                    entity->fields.svtId,
                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  svtEntity = this->fields.svtEntity;
  if ( (iconLabelInfo & 1) != 0 )
  {
    if ( svtEntity )
    {
      this->fields._collectionNo_k__BackingField = svtEntity->fields.collectionNo;
LABEL_35:
      ServantEntity__getName_30805492(svtEntity, &this->fields.sortRuby, EntityDefinitely->fields.maxLimitCount, 0LL);
      goto LABEL_36;
    }
    goto LABEL_38;
  }
  if ( svtEntity )
    goto LABEL_35;
LABEL_36:
  this->fields._isCanStrength_k__BackingField = CoinRoomCoinIconItem__IsCanStrength_25638428(
                                                  this->fields._svtId_k__BackingField,
                                                  0,
                                                  v50);
  this->fields._isHeroine_k__BackingField = CoinRoomCoinIconItem__IsHeroine(this, v52);
  this->fields._isTouchEnabled_k__BackingField = 1;
  this->fields._isDisplayNumber_k__BackingField = isDisplayNumber;
}


bool __fastcall CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(
        UserServantEntity_o *usrSvtEntity,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserServantEntity_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t currentCryptoKey; // x20
  int64_t hiddenValue; // x21
  int v13; // w8
  UserServantEntity_o *v14; // x19
  unsigned int v15; // w22
  __int64 v17; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = usrSvtEntity;
  if ( (byte_42E8CDB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    usrSvtEntity = (UserServantEntity_o *)sub_B5D5C4(
                                            &Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__,
                                            v8,
                                            v9,
                                            v10);
    byte_42E8CDB = 1;
  }
  entity = 0LL;
  if ( !v4 )
    goto LABEL_20;
  usrSvtEntity = (UserServantEntity_o *)UserServantEntity__getAppendSkillInfo(v4, 0LL);
  if ( !usrSvtEntity )
    goto LABEL_20;
  currentCryptoKey = usrSvtEntity->fields.id.fields.currentCryptoKey;
  hiddenValue = usrSvtEntity->fields.id.fields.hiddenValue;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  usrSvtEntity = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !currentCryptoKey )
LABEL_20:
    sub_B5D69C(usrSvtEntity, method);
  v13 = *(_DWORD *)(currentCryptoKey + 24);
  if ( v13 < 1 )
    return 1;
  v14 = usrSvtEntity;
  v15 = 0;
  while ( 1 )
  {
    if ( !hiddenValue )
      goto LABEL_20;
    if ( v15 >= *(_DWORD *)(hiddenValue + 24) )
      goto LABEL_21;
    if ( *(int *)(hiddenValue + 4LL * (int)v15 + 32) < 1 )
      return 0;
    if ( v15 >= v13 )
    {
LABEL_21:
      v17 = sub_B5D6C8(usrSvtEntity);
      sub_B5D668(v17, 0LL);
    }
    if ( !v14 )
      goto LABEL_20;
    usrSvtEntity = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)v14,
                                            &entity,
                                            *(_DWORD *)(currentCryptoKey + 4LL * (int)v15 + 32),
                                            (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)usrSvtEntity & 1) == 0 )
      return 0;
    v13 = *(_DWORD *)(currentCryptoKey + 24);
    if ( (int)++v15 >= v13 )
      return 1;
  }
}


bool __fastcall CoinRoomCoinIconItem__IsCanStrength(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CoinRoomCoinIconItem__IsCanStrength_25638428(this->fields._svtId_k__BackingField, 0, v2);
}


bool __fastcall CoinRoomCoinIconItem__IsCanStrength_25638428(
        int32_t svtId,
        bool isWarningDialog,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  char v36; // w1
  int v37; // w2
  __int64 v38; // x3
  char v39; // w1
  int v40; // w2
  __int64 v41; // x3
  char v42; // w1
  int v43; // w2
  __int64 v44; // x3
  CoinRoomCoinIconItem___c__DisplayClass62_0_o *v45; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v47; // x1
  bool v48; // w20
  int32_t rarity; // w8
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x21
  __int64 v53; // x3
  DataMasterBase_WarMaster__WarEntity__int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v55; // x19
  unsigned __int64 v56; // x10
  int32_t *p_offset; // x11
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x3
  __int64 v61; // x19
  __int64 v62; // x8
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  UserServantEntity_o *v70; // x0
  __int64 v71; // x1
  UserServantEntity_o *v72; // x20
  _BOOL4 isExceedLvMax; // w21
  const MethodInfo *v74; // x1
  int v75; // w8
  __int64 v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  int v80; // [xsp+8h] [xbp-48h]
  ServantLimitEntity_o *v81; // [xsp+18h] [xbp-38h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_42E8CDA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitMaster___, isWarningDialog, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__bool___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_UserServantEntity__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__, v39, v40, v41);
    sub_B5D5C4(&CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo, v42, v43, v44);
    byte_42E8CDA = 1;
  }
  entity = 0LL;
  v81 = 0LL;
  v45 = (CoinRoomCoinIconItem___c__DisplayClass62_0_o *)sub_B5D694(CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo);
  CoinRoomCoinIconItem___c__DisplayClass62_0___ctor(v45, 0LL);
  if ( !v45 )
    goto LABEL_60;
  v45->fields.svtId = svtId;
  if ( !isWarningDialog )
    goto LABEL_23;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_60:
    sub_B5D69C(Master_WarQuestSelectionMaster, v47);
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         v45->fields.svtId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
    if ( !entity )
      goto LABEL_60;
    v48 = ServantEntity__IsCoinRoomCheck((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v48 = 0;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v48 )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_60;
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantLimitMaster__TryGetEntity(
                                                                                      (ServantLimitMaster_o *)Master_WarQuestSelectionMaster,
                                                                                      &v81,
                                                                                      v45->fields.svtId,
                                                                                      0,
                                                                                      0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v81 )
        goto LABEL_60;
      rarity = v81->fields.rarity;
      if ( rarity && rarity < 4 )
        return 0;
    }
  }
LABEL_23:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_60;
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(
                                                                   (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                                                   0LL);
  v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v52,
    (Il2CppObject *)v45,
    Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_UserServantEntity__bool___ctor__);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                    AllList,
                                                                                    (System_Func_TSource__bool__o *)v52,
                                                                                    (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_60;
  klass = Master_WarQuestSelectionMaster->klass;
  v55 = Master_WarQuestSelectionMaster;
  if ( *(_WORD *)&Master_WarQuestSelectionMaster->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      ++v56;
      p_offset += 4;
      if ( v56 >= *(unsigned __int16 *)&Master_WarQuestSelectionMaster->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v58 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v58 = sub_AF54C0(
            Master_WarQuestSelectionMaster,
            System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo,
            0LL,
            v53);
  }
  v61 = (*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, _QWORD))v58)(
          v55,
          *(_QWORD *)(v58 + 8));
  if ( !v61 )
    sub_B5D69C(0LL, v59);
  while ( 1 )
  {
    v62 = *(_QWORD *)v61;
    if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
    {
      v63 = 0LL;
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v64 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v63;
        v64 += 4;
        if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
          goto LABEL_39;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_39:
      v65 = sub_AF54C0(v61, System_Collections_IEnumerator_TypeInfo, 0LL, v60);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v61, *(_QWORD *)(v65 + 8)) & 1) == 0 )
      break;
    v66 = *(_QWORD *)v61;
    if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
    {
      v67 = 0LL;
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v68 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        ++v67;
        v68 += 4;
        if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
          goto LABEL_46;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_46:
      v69 = sub_AF54C0(v61, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL, v60);
    }
    v70 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v61, *(_QWORD *)(v69 + 8));
    v72 = v70;
    if ( !v70 )
      sub_B5D69C(0LL, v71);
    isExceedLvMax = UserServantEntity__isExceedLvMax(v70, 0LL);
    if ( (isExceedLvMax & CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(v72, v74) & 1) != 0 )
    {
      v75 = 187;
      goto LABEL_52;
    }
  }
  v75 = 185;
LABEL_52:
  v80 = v75;
  v76 = *(_QWORD *)v61;
  if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
  {
    v77 = 0LL;
    v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      ++v77;
      v78 += 4;
      if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
        goto LABEL_56;
    }
    v79 = v76 + 16LL * *v78 + 312;
  }
  else
  {
LABEL_56:
    v79 = sub_AF54C0(v61, System_IDisposable_TypeInfo, 0LL, v60);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v79)(v61, *(_QWORD *)(v79 + 8));
  return v80 == 185;
}


bool __fastcall CoinRoomCoinIconItem__IsHeroine(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  UserServantEntity_array *OrganizationList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x21

  if ( (byte_42E8CD9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_UserServantEntity____68810608, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_UserServantEntity__bool__TypeInfo, v17, v18, v19);
    byte_42E8CD9 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v21);
  OrganizationList = UserServantMaster__getOrganizationList(Master_WarQuestSelectionMaster, 0LL);
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)this,
    Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_UserServantEntity__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)OrganizationList,
           (System_Func_T__bool__o *)v23,
           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_UserServantEntity____68810608);
}


bool __fastcall CoinRoomCoinIconItem__IsMatchFilter(
        CoinRoomCoinIconItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x21

  if ( (byte_42E8CDD & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6, v7, v8);
    byte_42E8CDD = 1;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_26;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_26;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v11 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v11 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->ClassFilterKindList;
    if ( ClassGroupFilterKindList )
    {
      v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               ClassGroupFilterKindList,
                                               (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.svtEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_26:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.svtEntity, 0LL) )
    return 0;
LABEL_17:
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v13->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_26;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v14, 0LL)
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
  if ( (byte_42E8CDC & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)sort, (_DWORD)method, v3);
    byte_42E8CDC = 1;
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
      sub_B5D560(
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
        IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, 57, collectionNo_k__BackingField, 0, 0, 0, 0, 0, 0LL);
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
    sub_B5D560(
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
      IconLabelInfo__Set_28463004(
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
    sub_B5D69C(this, sort);
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
  sub_B5D560(p_sortStr1, sortRuby, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  __int64 v3; // x3
  CoinRoomCoinIconItem_o *v5; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v5 = this;
  if ( (byte_42E8CDE & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem_o *)sub_B5D5C4(
                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                       (_DWORD)x,
                                       (_DWORD)method,
                                       v3);
    byte_42E8CDE = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  v7 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL) == v5->fields._svtId_k__BackingField
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
  __int64 v3; // x3
  CoinRoomCoinIconItem___c__DisplayClass62_0_o *v5; // x19
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v5 = this;
  if ( (byte_42E5E9B & 1) == 0 )
  {
    this = (CoinRoomCoinIconItem___c__DisplayClass62_0_o *)sub_B5D5C4(
                                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                             (_DWORD)x,
                                                             (_DWORD)method,
                                                             v3);
    byte_42E5E9B = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  v7 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL) == v5->fields.svtId;
}