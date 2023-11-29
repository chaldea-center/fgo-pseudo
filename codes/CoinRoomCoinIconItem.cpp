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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  IconLabelInfo_o *iconLabelInfo; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v27; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  WarQuestSelectionMaster_o *v30; // x0
  ServantLimitMaster_o *v31; // x23
  __int64 v32; // x24
  __int64 v33; // x25
  int32_t v34; // w0
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x0
  bool v36; // w0
  const MethodInfo *v37; // x2
  struct ServantEntity_o *svtEntity; // x8
  const MethodInfo *v39; // x1
  ServantLimitEntity_o *v40; // [xsp+0h] [xbp-50h] BYREF
  WarEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_40F9A16 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_SvtCoinMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    byte_40F9A16 = 1;
  }
  v40 = 0LL;
  entitya = 0LL;
  v18 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, *(_QWORD *)&index, entity, isDisplayNumber, method);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  iconLabelInfo = this->fields.iconLabelInfo;
  if ( !iconLabelInfo )
    goto LABEL_38;
  IconLabelInfo__Clear(iconLabelInfo, 0LL);
  if ( !entity )
    return;
  this->fields._svtId_k__BackingField = entity->fields.svtId;
  this->fields._num_k__BackingField = entity->fields.num;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entitya,
         entity->fields.svtId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
  {
    if ( !entitya )
      goto LABEL_38;
    this->fields._itemId_k__BackingField = (int32_t)entitya->fields.age;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v27 = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v27 )
    goto LABEL_38;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v27, UserId, entity->fields.svtId, 0LL);
  v30 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !EntityDefinitely )
    goto LABEL_38;
  v31 = (ServantLimitMaster_o *)v30;
  v33 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v33;
  *(_QWORD *)&v42.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v42, 0LL);
  if ( !v31 )
    goto LABEL_38;
  if ( ServantLimitMaster__TryGetEntity(v31, &v40, v34, EntityDefinitely->fields.maxLimitCount, 0LL) )
  {
    if ( !v40 )
      goto LABEL_38;
    this->fields._rarity_k__BackingField = v40->fields.rarity;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !v35 )
LABEL_38:
    sub_B170D4();
  v36 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v35,
          (WarEntity_o **)&this->fields.svtEntity,
          entity->fields.svtId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  svtEntity = this->fields.svtEntity;
  if ( v36 )
  {
    if ( svtEntity )
    {
      this->fields._collectionNo_k__BackingField = svtEntity->fields.collectionNo;
LABEL_35:
      ServantEntity__getName_30661760(svtEntity, &this->fields.sortRuby, EntityDefinitely->fields.maxLimitCount, 0LL);
      goto LABEL_36;
    }
    goto LABEL_38;
  }
  if ( svtEntity )
    goto LABEL_35;
LABEL_36:
  this->fields._isCanStrength_k__BackingField = CoinRoomCoinIconItem__IsCanStrength_24366008(
                                                  this->fields._svtId_k__BackingField,
                                                  0,
                                                  v37);
  this->fields._isHeroine_k__BackingField = CoinRoomCoinIconItem__IsHeroine(this, v39);
  this->fields._isTouchEnabled_k__BackingField = 1;
  this->fields._isDisplayNumber_k__BackingField = isDisplayNumber;
}


bool __fastcall CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(
        UserServantEntity_o *usrSvtEntity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SvtUseSkillData_o *AppendSkillInfo; // x0
  struct System_Int32_array *svtUseSkillIdList; // x20
  struct System_Int32_array *svtSkillLvList; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x19
  unsigned int v13; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F9A19 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    byte_40F9A19 = 1;
  }
  entity = 0LL;
  if ( !usrSvtEntity )
    goto LABEL_20;
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo(usrSvtEntity, 0LL);
  if ( !AppendSkillInfo )
    goto LABEL_20;
  svtUseSkillIdList = AppendSkillInfo->fields.svtUseSkillIdList;
  svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !svtUseSkillIdList )
LABEL_20:
    sub_B170D4();
  max_length = svtUseSkillIdList->max_length;
  if ( max_length < 1 )
    return 1;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v13 = 0;
  while ( 1 )
  {
    if ( !svtSkillLvList )
      goto LABEL_20;
    if ( v13 >= svtSkillLvList->max_length )
      goto LABEL_21;
    if ( svtSkillLvList->m_Items[v13 + 1] < 1 )
      return 0;
    if ( v13 >= max_length )
    {
LABEL_21:
      sub_B17100(Master_WarQuestSelectionMaster, v9, v10);
      sub_B170A0();
    }
    if ( !v12 )
      goto LABEL_20;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    v12,
                                                                    &entity,
                                                                    svtUseSkillIdList->m_Items[v13 + 1],
                                                                    (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
      return 0;
    max_length = svtUseSkillIdList->max_length;
    if ( (int)++v13 >= max_length )
      return 1;
  }
}


bool __fastcall CoinRoomCoinIconItem__IsCanStrength(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CoinRoomCoinIconItem__IsCanStrength_24366008(this->fields._svtId_k__BackingField, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CoinRoomCoinIconItem__IsCanStrength_24366008(
        int32_t svtId,
        bool isWarningDialog,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  CoinRoomCoinIconItem___c__DisplayClass62_0_o *v20; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  bool v22; // w20
  ServantLimitMaster_o *v23; // x0
  int32_t rarity; // w8
  UserServantMaster_o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x19
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x19
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  UserServantEntity_o *v48; // x0
  UserServantEntity_o *v49; // x20
  _BOOL4 isExceedLvMax; // w21
  const MethodInfo *v51; // x1
  int v52; // w8
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  int v57; // [xsp+8h] [xbp-48h]
  ServantLimitEntity_o *v58; // [xsp+18h] [xbp-38h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_40F9A18 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitMaster___, isWarningDialog);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v11);
    sub_B16FFC(&Method_System_Func_UserServantEntity__bool___ctor__, v12);
    sub_B16FFC(&System_Func_UserServantEntity__bool__TypeInfo, v13);
    sub_B16FFC(&System_IDisposable_TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v16);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B16FFC(&Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__, v18);
    sub_B16FFC(&CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo, v19);
    byte_40F9A18 = 1;
  }
  entity = 0LL;
  v58 = 0LL;
  v20 = (CoinRoomCoinIconItem___c__DisplayClass62_0_o *)sub_B170CC(
                                                          CoinRoomCoinIconItem___c__DisplayClass62_0_TypeInfo,
                                                          isWarningDialog,
                                                          method,
                                                          v3,
                                                          v4);
  CoinRoomCoinIconItem___c__DisplayClass62_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_60;
  v20->fields.svtId = svtId;
  if ( !isWarningDialog )
    goto LABEL_23;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_60:
    sub_B170D4();
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         v20->fields.svtId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_60;
    v22 = ServantEntity__IsCoinRoomCheck((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v22 = 0;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v23 = (ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v22 )
  {
    if ( !v23 )
      goto LABEL_60;
    if ( ServantLimitMaster__TryGetEntity(v23, &v58, v20->fields.svtId, 0, 0LL) )
    {
      if ( !v58 )
        goto LABEL_60;
      rarity = v58->fields.rarity;
      if ( rarity && rarity < 4 )
        return 0;
    }
  }
LABEL_23:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v26 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v26 )
    goto LABEL_60;
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(v26, 0LL);
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_UserServantEntity__bool__TypeInfo,
                                                                             v28,
                                                                             v29,
                                                                             v30,
                                                                             v31);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)v20,
    Method_CoinRoomCoinIconItem___c__DisplayClass62_0__IsCanStrength_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_UserServantEntity__bool___ctor__);
  v33 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          AllList,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !v33 )
    goto LABEL_60;
  klass = v33->klass;
  v35 = v33;
  if ( *(_WORD *)&v33->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      ++v36;
      p_offset += 4;
      if ( v36 >= *(unsigned __int16 *)&v33->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_32:
    p_method = sub_AAFEF8(v33, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v35,
          *(_QWORD *)(p_method + 8));
  if ( !v39 )
    sub_B170D4();
  while ( 1 )
  {
    v40 = *(_QWORD *)v39;
    if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
          goto LABEL_39;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_39:
      v43 = sub_AAFEF8(v39, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
      break;
    v44 = *(_QWORD *)v39;
    if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
    {
      v45 = 0LL;
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v46 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
          goto LABEL_46;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_46:
      v47 = sub_AAFEF8(v39, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v48 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v39, *(_QWORD *)(v47 + 8));
    v49 = v48;
    if ( !v48 )
      sub_B170D4();
    isExceedLvMax = UserServantEntity__isExceedLvMax(v48, 0LL);
    if ( (isExceedLvMax & CoinRoomCoinIconItem__IsAppendSkillAllMaxLv(v49, v51) & 1) != 0 )
    {
      v52 = 187;
      goto LABEL_52;
    }
  }
  v52 = 185;
LABEL_52:
  v57 = v52;
  v53 = *(_QWORD *)v39;
  if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
  {
    v54 = 0LL;
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
        goto LABEL_56;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_56:
    v56 = sub_AAFEF8(v39, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v39, *(_QWORD *)(v56 + 8));
  return v57 == 185;
}


bool __fastcall CoinRoomCoinIconItem__IsHeroine(CoinRoomCoinIconItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  UserServantEntity_array *OrganizationList; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x21

  if ( (byte_40F9A17 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_UserServantEntity____66805856, method);
    sub_B16FFC(&Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_System_Func_UserServantEntity__bool___ctor__, v6);
    sub_B16FFC(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    byte_40F9A17 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  OrganizationList = UserServantMaster__getOrganizationList(Master_WarQuestSelectionMaster, 0LL);
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_UserServantEntity__bool__TypeInfo,
                                                                             v10,
                                                                             v11,
                                                                             v12,
                                                                             v13);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)this,
    Method_CoinRoomCoinIconItem__IsHeroine_b__58_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_UserServantEntity__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)OrganizationList,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_18B6074 *)Method_BasicHelper_Any_UserServantEntity____66805856);
}


bool __fastcall CoinRoomCoinIconItem__IsMatchFilter(
        CoinRoomCoinIconItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FilterKindList_c *v6; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v14; // x21

  if ( (byte_40F9A1B & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_40F9A1B = 1;
  }
  v6 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_26;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_26;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassFilterKindList;
    if ( ClassFilterKindList )
    {
      v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                               ClassFilterKindList,
                                               (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
        && !ListViewSort__IsMatchClassFilter(sort, this->fields.svtEntity, 0LL) )
      {
        return 0;
      }
      goto LABEL_17;
    }
LABEL_26:
    sub_B170D4();
  }
  if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.svtEntity, 0LL) )
    return 0;
LABEL_17:
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_26;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  int32_t selectedNum_k__BackingField; // w8
  int32_t sortKind; // w8
  int64_t svtEntity; // x8
  struct System_String_o *sortRuby; // x1
  struct System_String_o **p_sortStr1; // x0
  int64_t num_k__BackingField; // x8
  IconLabelInfo_o *v16; // x0
  int64_t v17; // x8
  System_Int32_array **v18; // x1
  IconLabelInfo_o *v19; // x0
  int64_t rarity_k__BackingField; // x8
  System_Int32_array **v22; // x1
  int64_t collectionNo_k__BackingField; // x2
  IconLabelInfo_o *iconLabelInfo; // x0

  if ( (byte_40F9A1A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, sort);
    byte_40F9A1A = 1;
  }
  selectedNum_k__BackingField = this->fields._selectedNum_k__BackingField;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  if ( selectedNum_k__BackingField <= 0
    && (((__int64 (__fastcall *)(CoinRoomCoinIconItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          this->klass[1]._1.image) & 1) == 0 )
  {
    return 0;
  }
  if ( !sort )
    goto LABEL_27;
  sortKind = sort->fields.sortKind;
  if ( sortKind <= 14 )
  {
    if ( sortKind == 2 )
    {
      rarity_k__BackingField = this->fields._rarity_k__BackingField;
      this->fields.sortValue0B = 0LL;
      this->fields.sortValue1 = rarity_k__BackingField;
      v22 = (System_Int32_array **)StringLiteral_1;
      this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.sortStr1,
        v22,
        (System_String_array **)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      collectionNo_k__BackingField = this->fields._collectionNo_k__BackingField;
      iconLabelInfo = this->fields.iconLabelInfo;
      this->fields.sortValue1B = collectionNo_k__BackingField;
      if ( iconLabelInfo )
      {
        IconLabelInfo__Set_28888132(iconLabelInfo, 57, collectionNo_k__BackingField, 0, 0, 0, 0, 0, 0LL);
        goto LABEL_21;
      }
      goto LABEL_27;
    }
    if ( sortKind == 14 )
    {
      num_k__BackingField = this->fields._num_k__BackingField;
      p_sortStr1 = &this->fields.sortStr1;
      this->fields.sortValue0B = 0LL;
      this->fields.sortValue1 = num_k__BackingField;
      sortRuby = (struct System_String_o *)StringLiteral_1;
      goto LABEL_14;
    }
LABEL_16:
    v17 = this->fields._collectionNo_k__BackingField;
    this->fields.sortValue0B = 0LL;
    this->fields.sortValue1 = v17;
    v18 = (System_Int32_array **)StringLiteral_1;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.sortStr1,
      v18,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v19 = this->fields.iconLabelInfo;
    this->fields.sortValue1B = 0LL;
    if ( v19 )
    {
      IconLabelInfo__Set_28888132(v19, 57, this->fields._collectionNo_k__BackingField, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_21;
    }
LABEL_27:
    sub_B170D4();
  }
  if ( sortKind != 26 )
    goto LABEL_16;
  svtEntity = (int64_t)this->fields.svtEntity;
  this->fields.sortValue0B = 0LL;
  if ( svtEntity )
    svtEntity = -*(_DWORD *)(svtEntity + 212);
  sortRuby = this->fields.sortRuby;
  p_sortStr1 = &this->fields.sortStr1;
  this->fields.sortValue1 = svtEntity;
LABEL_14:
  this->fields.sortStr1 = sortRuby;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_sortStr1,
    (System_Int32_array **)sortRuby,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = this->fields.iconLabelInfo;
  this->fields.sortValue1B = this->fields._collectionNo_k__BackingField;
  if ( !v16 )
    goto LABEL_27;
  IconLabelInfo__Clear(v16, 0LL);
LABEL_21:
  if ( this->fields._isHeroine_k__BackingField )
    this->fields.sortValue0 = -10LL;
  if ( sort->fields.isSmartSort && !this->fields._isCanStrength_k__BackingField )
    this->fields.sortValue0B = 10LL;
  return 1;
}


bool __fastcall CoinRoomCoinIconItem___IsHeroine_b__58_0(
        CoinRoomCoinIconItem_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_40F9A1C & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
    byte_40F9A1C = 1;
  }
  if ( !x )
    sub_B170D4();
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v8, 0LL) == this->fields._svtId_k__BackingField
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
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_40F70FC & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
    byte_40F70FC = 1;
  }
  if ( !x )
    sub_B170D4();
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v8, 0LL) == this->fields.svtId;
}