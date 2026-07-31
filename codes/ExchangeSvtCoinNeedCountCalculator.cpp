int32_t ExchangeSvtCoinNeedCountCalculator__Calculate(int32_t itemId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  const MethodInfo *v5; // x1
  int32_t klass; // w26
  int32_t MaxExceedConsumeCoin; // w20
  const MethodInfo *v8; // x2
  int32_t MaxAppendSkillUnlockConsumeCoin; // w21
  const MethodInfo *v10; // x1
  int32_t CurrentCoin; // w22
  const MethodInfo *v12; // x2
  int32_t PotentialFriendshipCoin; // w23
  const MethodInfo *v14; // x1
  int32_t PotentialSummonCoin; // w24
  const MethodInfo *v16; // x1
  int32_t EventJoinCoin; // w25
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t PresentBoxCoin; // w19

  if ( (byte_5933372 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5933372 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          itemId,
                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Master_object, v5);
  }
  klass = (int32_t)Master_object[4].klass;
  MaxExceedConsumeCoin = ExchangeSvtCoinNeedCountCalculator__GetMaxExceedConsumeCoin(klass, v5);
  MaxAppendSkillUnlockConsumeCoin = ExchangeSvtCoinNeedCountCalculator__GetMaxAppendSkillUnlockConsumeCoin(
                                      klass,
                                      itemId,
                                      v8);
  CurrentCoin = ExchangeSvtCoinNeedCountCalculator__GetCurrentCoin(itemId, v10);
  PotentialFriendshipCoin = ExchangeSvtCoinNeedCountCalculator__GetPotentialFriendshipCoin(klass, itemId, v12);
  PotentialSummonCoin = ExchangeSvtCoinNeedCountCalculator__GetPotentialSummonCoin(klass, v14);
  EventJoinCoin = ExchangeSvtCoinNeedCountCalculator__GetEventJoinCoin(klass, v16);
  PresentBoxCoin = ExchangeSvtCoinNeedCountCalculator__GetPresentBoxCoin(klass, itemId, v18);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v19, v20);
  return System_Math__Max_76939956(
           MaxAppendSkillUnlockConsumeCoin
         + MaxExceedConsumeCoin
         - PresentBoxCoin
         - (CurrentCoin
          + PotentialFriendshipCoin
          + PotentialSummonCoin
          + EventJoinCoin),
           0,
           0);
}


int32_t ExchangeSvtCoinNeedCountCalculator__GetCoinReceivedServant(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593337B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    byte_593337B = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    svtId,
                                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
LABEL_11:
    sub_21FFECC(Master_object, v6);
  }
  return 0;
}


int32_t ExchangeSvtCoinNeedCountCalculator__GetCurrentCoin(int32_t itemId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x20
  void *EntityDefinitely; // x0

  if ( (byte_5933378 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5933378 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  EntityDefinitely = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    EntityDefinitely = NetworkManager_TypeInfo;
  }
  if ( !Master_object
    || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                             (UserItemMaster_o *)Master_object,
                             *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL),
                             itemId,
                             0)) == 0 )
  {
    sub_21FFECC(EntityDefinitely, v4);
  }
  return *((_DWORD *)EntityDefinitely + 7);
}


int32_t ExchangeSvtCoinNeedCountCalculator__GetEventJoinCoin(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  DataManager_c *v7; // x0
  int v8; // w8
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  System_Func_object__bool__o *v10; // x21
  int32_t v11; // w0
  const MethodInfo *v12; // x1

  if ( (byte_5933379 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_UserServantEntity____91524816);
    sub_21FFC50(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_21FFC50(&Method_ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0__GetEventJoinCoin_b__0__);
    sub_21FFC50(&ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_TypeInfo);
    byte_5933379 = 1;
  }
  v3 = sub_21FFEBC(ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_8;
  v7 = DataManager_TypeInfo;
  v8 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v3 + 16) = svtId;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
LABEL_8:
    sub_21FFECC(Master_object, v5);
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(
                                                                   (UserServantMaster_o *)Master_object,
                                                                   0);
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0__GetEventJoinCoin_b__0__,
    0);
  v11 = System_Linq_Enumerable__Count_object__59013780(
          AllList,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3847A94 *)Method_System_Linq_Enumerable_Count_UserServantEntity____91524816);
  return ExchangeSvtCoinNeedCountCalculator__GetCoinReceivedServant(*(_DWORD *)(v3 + 16), v12) * v11;
}


// local variable allocation has failed, the output may be wrong!
int32_t ExchangeSvtCoinNeedCountCalculator__GetMaxAppendSkillUnlockConsumeCoin(
        int32_t svtId,
        int32_t svtCoinId,
        const MethodInfo *method)
{
  int v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x20
  SvtAppendPassiveSkillUnlockMaster_o *EntityListFromSvtId; // x0
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_TSource__o *unlockNums; // x20
  struct System_String_o *MasterName_k__BackingField; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v13; // x21
  int32_t v14; // w22
  unsigned __int64 v15; // x23
  __int64 v16; // x25
  __int64 v17; // x11
  __int64 v18; // x10
  __int64 v19; // x9
  unsigned __int64 v20; // x8
  __int64 v21; // x10
  __int64 v22; // x11
  __int64 v23; // x12
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5933377 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5933377 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtCoinId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_41;
  EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                                                                 (UserServantAppendPassiveSkillMaster_o *)Master_object,
                                                                 &entity,
                                                                 (int64_t)EntityListFromSvtId[2].fields.list[1].monitor,
                                                                 svtId,
                                                                 0);
  unlockNums = 0;
  if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_41;
    unlockNums = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.unlockNums;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v10);
  DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
  if ( !EntityListFromSvtId
    || (EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)SvtAppendPassiveSkillUnlockMaster__GetEntityListFromSvtId(
                                                                       EntityListFromSvtId,
                                                                       svtId,
                                                                       0)) == 0 )
  {
LABEL_41:
    sub_21FFECC(EntityListFromSvtId, v6);
  }
  MasterName_k__BackingField = EntityListFromSvtId->fields._MasterName_k__BackingField;
  v13 = EntityListFromSvtId;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_40;
      v16 = *((_QWORD *)&v13->fields.revision + v15);
      if ( unlockNums )
      {
        if ( !v16 )
          goto LABEL_41;
        EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)System_Linq_Enumerable__Contains_int_(
                                                                       unlockNums,
                                                                       *(_DWORD *)(v16 + 20),
                                                                       (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          goto LABEL_36;
      }
      else if ( !v16 )
      {
        goto LABEL_41;
      }
      v17 = *(_QWORD *)(v16 + 24);
      if ( !v17 )
        goto LABEL_41;
      v18 = *(_QWORD *)(v17 + 24);
      if ( (int)v18 >= 1 )
      {
        v19 = (unsigned int)v18 & ~((int)v18 >> 31);
        v20 = 0;
        v21 = (unsigned int)*(_QWORD *)(v17 + 24);
        v22 = v17 + 32;
        while ( v21 != v20 )
        {
          if ( *(_DWORD *)(v22 + 4 * v20) == svtCoinId )
          {
            v23 = *(_QWORD *)(v16 + 32);
            if ( !v23 )
              goto LABEL_41;
            if ( v20 >= *(unsigned int *)(v23 + 24) )
              break;
            v14 += *(_DWORD *)(v23 + 4 * v20 + 32);
          }
          if ( v19 == ++v20 )
            goto LABEL_36;
        }
LABEL_40:
        sub_21FFED4(EntityListFromSvtId);
      }
LABEL_36:
      LODWORD(MasterName_k__BackingField) = v13->fields._MasterName_k__BackingField;
      if ( (__int64)++v15 >= (int)MasterName_k__BackingField )
        return v14;
    }
  }
  return 0;
}


int32_t ExchangeSvtCoinNeedCountCalculator__GetMaxExceedConsumeCoin(int32_t svtId, const MethodInfo *method)
{
  UserServantEntity_o *PossessedUserServantMaxExceedCount; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UserServantEntity_o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w0
  int32_t v10; // w21
  void *Master_object; // x0
  __int64 v12; // x1
  int32_t v13; // w19
  ServantExceedMaster_o *v14; // x21
  int v15; // w22
  int32_t v16; // w20
  ServantExceedEntity_o *v17; // x23
  System_Nullable_int__o v18; // x0
  int32_t objectNum; // w1
  unsigned __int64 v20; // x8
  System_Nullable_int__o v21; // x0
  unsigned __int64 v23; // [xsp+0h] [xbp-40h] BYREF
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_5933376 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_System_Nullable_int__get_HasValue__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933376 = 1;
  }
  entity = 0;
  PossessedUserServantMaxExceedCount = ExchangeSvtCoinNeedCountCalculator__GetPossessedUserServantMaxExceedCount(
                                         svtId,
                                         method);
  v6 = PossessedUserServantMaxExceedCount;
  if ( PossessedUserServantMaxExceedCount )
  {
    v7 = *(_QWORD *)&PossessedUserServantMaxExceedCount->fields.limitCount.fields.currentCryptoKey;
    v8 = *(_QWORD *)&PossessedUserServantMaxExceedCount->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    *(_QWORD *)&v25.fields.currentCryptoKey = v7;
    *(_QWORD *)&v25.fields.fakeValue = v8;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v25, 0);
    LODWORD(v6) = v6->fields.exceedCount;
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !Master_object
    || (Master_object = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, v10, 0)) == 0
    || (v13 = *((_DWORD *)Master_object + 6),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantExceedMaster___)) == 0) )
  {
LABEL_23:
    sub_21FFECC(Master_object, v12);
  }
  v14 = (ServantExceedMaster_o *)Master_object;
  Master_object = (void *)ServantExceedMaster__TryGetEntity(
                            (ServantExceedMaster_o *)Master_object,
                            &entity,
                            v13,
                            (int32_t)v6,
                            0);
  v15 = 0;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  v16 = (_DWORD)v6 + 1;
  do
  {
    v17 = entity;
    if ( !entity )
      goto LABEL_23;
    v15 += entity->fields.objectNum;
    Master_object = (void *)ServantExceedMaster__TryGetEntity(v14, &entity, v13, v16++, 0);
  }
  while ( ((unsigned __int8)Master_object & 1) != 0 );
  if ( !v17 )
    return 0;
  v18 = (System_Nullable_int__o)&v23;
  objectNum = v17->fields.objectNum;
  v23 = 0;
  System_Nullable_int____ctor(v18, objectNum, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v23 )
    return 0;
  v20 = HIDWORD(v23);
  v21 = (System_Nullable_int__o)&v23;
  v23 = 0;
  System_Nullable_int____ctor(v21, v15 - v20, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
  return HIDWORD(v23);
}


UserServantEntity_o *ExchangeSvtCoinNeedCountCalculator__GetPossessedUserServantMaxExceedCount(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  UserServantMaster_o *Master_object; // x0
  __int64 v6; // x1
  bool EntityListBySvtId; // w0
  UserServantEntity_o *v8; // x19
  Il2CppObject *current; // x8
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+10h] [xbp-40h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_5933373 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_5933373 = 1;
  }
  userServantList = 0;
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v13, 0, sizeof(v13));
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_18;
  EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(Master_object, &userServantList, svtId, 1, 0);
  v8 = 0;
  if ( !EntityListBySvtId )
    return v8;
  Master_object = (UserServantMaster_o *)userServantList;
  if ( !userServantList )
LABEL_18:
    sub_21FFECC(Master_object, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)userServantList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  current = 0;
LABEL_9:
  v8 = (UserServantEntity_o *)current;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v13.fields._current;
    if ( v8 )
    {
      if ( !v13.fields._current )
        sub_21FFECC(v10, v11);
      if ( *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&qword_1B8) <= *(_DWORD *)((char *)&qword_1B8 + (_QWORD)v8) )
        continue;
    }
    goto LABEL_9;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v8;
}


// local variable allocation has failed, the output may be wrong!
int32_t ExchangeSvtCoinNeedCountCalculator__GetPotentialFriendshipCoin(
        int32_t svtId,
        int32_t svtCoinId,
        const MethodInfo *method)
{
  int v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x21
  _QWORD *p_image; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  Il2CppObject *v12; // x23
  __int64 v13; // x2
  Il2CppObject *v14; // x24
  int32_t v15; // w25
  GiftEntity_o *v17; // [xsp+8h] [xbp-58h] BYREF
  FriendshipServantEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_5933374 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_FriendshipServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933374 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  v17 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtCoinId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !Master_object
    || (p_image = UserServantCollectionMaster__GetEntityDefinitely(
                    (UserServantCollectionMaster_o *)Master_object,
                    *(_QWORD *)(p_image[23] + 64LL),
                    svtId,
                    0)) == 0 )
  {
LABEL_24:
    sub_21FFECC(p_image, v6);
  }
  v10 = *(_QWORD *)((char *)p_image + 108);
  v11 = *(_QWORD *)((char *)p_image + 116);
  v12 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_FriendshipServantMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
  v15 = 0;
  while ( 1 )
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v13);
    *(_QWORD *)&v19.fields.currentCryptoKey = v10;
    *(_QWORD *)&v19.fields.fakeValue = v11;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(v19, 0);
    v10 = *(_QWORD *)&v20.fields.currentCryptoKey;
    v11 = *(_QWORD *)&v20.fields.fakeValue;
    p_image = (_QWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v20, 0);
    if ( !v12 )
      goto LABEL_24;
    p_image = (_QWORD *)FriendshipServantMaster__TryGetEntity(
                          (FriendshipServantMaster_o *)v12,
                          &entity,
                          svtId,
                          (int32_t)p_image,
                          0);
    if ( ((unsigned __int8)p_image & 1) == 0 )
      return v15;
    if ( !entity || !v14 )
      goto LABEL_24;
    p_image = (_QWORD *)GiftMaster__TryGetEntity((GiftMaster_o *)v14, &v17, entity->fields.giftId, 2, svtCoinId, 0);
    if ( ((unsigned __int8)p_image & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_24;
      v15 += v17->fields.num;
    }
  }
}


int32_t ExchangeSvtCoinNeedCountCalculator__GetPotentialSummonCoin(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  int32_t ServantHavingTdLvCount; // w20
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  const MethodInfo *v8; // x1
  int32_t LevelMax; // w21
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t CoinReceivedServant; // w19

  if ( (byte_5933375 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5933375 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (ServantHavingTdLvCount = UserServantMaster__GetServantHavingTdLvCount(
                                   (UserServantMaster_o *)Master_object,
                                   svtId,
                                   0),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___)) == 0) )
  {
    sub_21FFECC(Master_object, v5);
  }
  EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                          (ServantTreasureDvcMaster_o *)Master_object,
                          svtId,
                          0,
                          0);
  if ( EntityFromSvtIdOnly )
    LevelMax = ServantTreasureDvcEntity__getLevelMax(EntityFromSvtIdOnly, 0);
  else
    LevelMax = 0;
  CoinReceivedServant = ExchangeSvtCoinNeedCountCalculator__GetCoinReceivedServant(svtId, v8);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10, v11);
  return System_Math__Max_76939956(LevelMax - ServantHavingTdLvCount, 0, 0) * CoinReceivedServant;
}


// local variable allocation has failed, the output may be wrong!
int32_t ExchangeSvtCoinNeedCountCalculator__GetPresentBoxCoin(int32_t svtId, int32_t itemId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  UserPresentBoxMaster_o *v7; // x21
  int32_t ServantCount; // w22
  const MethodInfo *v9; // x1
  int32_t CoinReceivedServant; // w20

  if ( (byte_593337A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_593337A = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&itemId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v6);
  v7 = (UserPresentBoxMaster_o *)Master_object;
  ServantCount = UserPresentBoxMaster__GetServantCount((UserPresentBoxMaster_o *)Master_object, svtId, 0);
  CoinReceivedServant = ExchangeSvtCoinNeedCountCalculator__GetCoinReceivedServant(svtId, v9);
  return UserPresentBoxMaster__GetGiftNumTotalCount(v7, 2, itemId, 0) + CoinReceivedServant * ServantCount;
}


void ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0___ctor(
        ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0___GetEventJoinCoin_b__0(
        ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_593337C & 1) == 0 )
  {
    this = (ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593337C = 1;
  }
  if ( !e )
    sub_21FFECC(this, e);
  v5 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, e, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v9, 0) == v4->fields.svtId
      && UserServantEntity__IsEventJoin(e, 0)
      && !UserServantEntity__IsWithdrawal(e, 0);
}