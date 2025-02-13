int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__Calculate(int32_t itemId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v4; // x1
  int32_t klass; // w26
  int32_t MaxExceedConsumeCoin; // w20
  const MethodInfo *v7; // x2
  int32_t MaxAppendSkillUnlockConsumeCoin; // w21
  const MethodInfo *v9; // x1
  int32_t CurrentCoin; // w22
  const MethodInfo *v11; // x2
  int32_t PotentialFriendshipCoin; // w23
  const MethodInfo *v13; // x1
  int32_t PotentialSummonCoin; // w24
  const MethodInfo *v15; // x1
  int32_t EventJoinCoin; // w25
  const MethodInfo *v17; // x2
  int32_t PresentBoxCoin; // w19

  if ( (byte_4BD7803 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD7803 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          itemId,
                          (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C22094(Master_object, v4);
  }
  klass = (int32_t)Master_object[4].klass;
  MaxExceedConsumeCoin = ExchangeSvtCoinNeedCountCalculator__GetMaxExceedConsumeCoin(klass, v4);
  MaxAppendSkillUnlockConsumeCoin = ExchangeSvtCoinNeedCountCalculator__GetMaxAppendSkillUnlockConsumeCoin(
                                      klass,
                                      itemId,
                                      v7);
  CurrentCoin = ExchangeSvtCoinNeedCountCalculator__GetCurrentCoin(itemId, v9);
  PotentialFriendshipCoin = ExchangeSvtCoinNeedCountCalculator__GetPotentialFriendshipCoin(klass, itemId, v11);
  PotentialSummonCoin = ExchangeSvtCoinNeedCountCalculator__GetPotentialSummonCoin(klass, v13);
  EventJoinCoin = ExchangeSvtCoinNeedCountCalculator__GetEventJoinCoin(klass, v15);
  PresentBoxCoin = ExchangeSvtCoinNeedCountCalculator__GetPresentBoxCoin(klass, itemId, v17);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Max_63934620(
           MaxAppendSkillUnlockConsumeCoin
         + MaxExceedConsumeCoin
         - CurrentCoin
         - PotentialFriendshipCoin
         - PotentialSummonCoin
         - EventJoinCoin
         - PresentBoxCoin,
           0,
           0LL);
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetCoinReceivedServant(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD780C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    byte_4BD780C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    svtId,
                                    (const MethodInfo_325BE14 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
LABEL_11:
    sub_1C22094(Master_object, v4);
  }
  return 0;
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetCurrentCoin(int32_t itemId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  int32_t *EntityDefinitely; // x0

  if ( (byte_4BD7809 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD7809 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  EntityDefinitely = (int32_t *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    EntityDefinitely = (int32_t *)NetworkManager_TypeInfo;
  }
  if ( !Master_object
    || (EntityDefinitely = (int32_t *)UserItemMaster__GetEntityDefinitely(
                                        (UserItemMaster_o *)Master_object,
                                        *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL),
                                        itemId,
                                        0LL)) == 0LL )
  {
    sub_1C22094(EntityDefinitely, v3);
  }
  return EntityDefinitely[7];
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetEventJoinCoin(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  System_Func_object__bool__o *v7; // x21
  int32_t v8; // w0
  const MethodInfo *v9; // x1

  if ( (byte_4BD780A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_UserServantEntity___);
    sub_1C21E38(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C21E38(&Method_ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0__GetEventJoinCoin_b__0__);
    sub_1C21E38(&ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_TypeInfo);
    byte_4BD780A = 1;
  }
  v3 = sub_1C22084(ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_8;
  *(_DWORD *)(v3 + 16) = svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1C22094(Master_object, v5);
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(
                                                                   (UserServantMaster_o *)Master_object,
                                                                   0LL);
  v7 = (System_Func_object__bool__o *)sub_1C22084(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0__GetEventJoinCoin_b__0__,
    0LL);
  v8 = System_Linq_Enumerable__Count_object__50119556(
         AllList,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_2FCC384 *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
  return ExchangeSvtCoinNeedCountCalculator__GetCoinReceivedServant(*(_DWORD *)(v3 + 16), v9) * v8;
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetMaxAppendSkillUnlockConsumeCoin(
        int32_t svtId,
        int32_t svtCoinId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  SvtAppendPassiveSkillUnlockMaster_o *EntityListFromSvtId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *unlockNums; // x20
  struct System_String_o *MasterName_k__BackingField; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v10; // x21
  int32_t v11; // w22
  unsigned __int64 v12; // x23
  __int64 v13; // x25
  __int64 v14; // x8
  unsigned __int64 v15; // x9
  __int64 v16; // x11
  __int64 v17; // x13
  __int64 v18; // x12
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD7808 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD7808 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_41;
  EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                                                                 (UserServantAppendPassiveSkillMaster_o *)Master_object,
                                                                 &entity,
                                                                 (int64_t)EntityListFromSvtId[2].fields.list[1].monitor,
                                                                 svtId,
                                                                 0LL);
  unlockNums = 0LL;
  if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_41;
    unlockNums = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.unlockNums;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
  if ( !EntityListFromSvtId
    || (EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)SvtAppendPassiveSkillUnlockMaster__GetEntityListFromSvtId(
                                                                       EntityListFromSvtId,
                                                                       svtId,
                                                                       0LL)) == 0LL )
  {
LABEL_41:
    sub_1C22094(EntityListFromSvtId, v5);
  }
  MasterName_k__BackingField = EntityListFromSvtId->fields._MasterName_k__BackingField;
  v10 = EntityListFromSvtId;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v11 = 0;
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_40;
      v13 = *((_QWORD *)&v10->fields.revision + v12);
      if ( unlockNums )
      {
        if ( !v13 )
          goto LABEL_41;
        EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)System_Linq_Enumerable__Contains_int_(
                                                                       unlockNums,
                                                                       *(_DWORD *)(v13 + 20),
                                                                       (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          goto LABEL_36;
      }
      else if ( !v13 )
      {
        goto LABEL_41;
      }
      v14 = *(_QWORD *)(v13 + 24);
      if ( !v14 )
        goto LABEL_41;
      v15 = *(unsigned int *)(v14 + 24);
      if ( (__int64)(v15 << 32) >= 1 )
      {
        v16 = 8LL;
        while ( v16 - 8 < v15 )
        {
          if ( *(_DWORD *)(v14 + 4 * v16) == svtCoinId )
          {
            v17 = *(_QWORD *)(v13 + 32);
            if ( !v17 )
              goto LABEL_41;
            if ( v16 - 8 >= (unsigned __int64)*(unsigned int *)(v17 + 24) )
              break;
            v11 += *(_DWORD *)(v17 + 4 * v16);
          }
          v18 = v16 - 7;
          ++v16;
          if ( v18 >= (int)v15 )
            goto LABEL_36;
        }
LABEL_40:
        sub_1C2209C(EntityListFromSvtId, v5);
      }
LABEL_36:
      LODWORD(MasterName_k__BackingField) = v10->fields._MasterName_k__BackingField;
      if ( (__int64)++v12 >= (int)MasterName_k__BackingField )
        return v11;
    }
  }
  return 0;
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetMaxExceedConsumeCoin(int32_t svtId, const MethodInfo *method)
{
  UserServantEntity_o *PossessedUserServantMaxExceedCount; // x0
  UserServantEntity_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  int32_t v8; // w21
  void *Master_object; // x0
  __int64 v10; // x1
  int32_t v11; // w19
  ServantExceedMaster_o *v12; // x21
  int v13; // w22
  int32_t v14; // w20
  ServantExceedEntity_o *v15; // x23
  int32_t objectNum; // w1
  int32_t v17; // w1
  __int64 v19; // [xsp+0h] [xbp-40h] BYREF
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o v21; // 0:x0.8
  System_Nullable_int__o v22; // 0:x0.8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4BD7807 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&Method_System_Nullable_int__get_HasValue__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD7807 = 1;
  }
  entity = 0LL;
  PossessedUserServantMaxExceedCount = ExchangeSvtCoinNeedCountCalculator__GetPossessedUserServantMaxExceedCount(
                                         svtId,
                                         method);
  v4 = PossessedUserServantMaxExceedCount;
  if ( PossessedUserServantMaxExceedCount )
  {
    v6 = *(_QWORD *)&PossessedUserServantMaxExceedCount->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&PossessedUserServantMaxExceedCount->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v6;
    *(_QWORD *)&v23.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v23, 0LL);
    LODWORD(v4) = v4->fields.exceedCount;
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !Master_object
    || (Master_object = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, v8, 0LL)) == 0LL
    || (v11 = *((_DWORD *)Master_object + 6),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantExceedMaster___)) == 0LL) )
  {
LABEL_23:
    sub_1C22094(Master_object, v10);
  }
  v12 = (ServantExceedMaster_o *)Master_object;
  Master_object = (void *)ServantExceedMaster__TryGetEntity(
                            (ServantExceedMaster_o *)Master_object,
                            &entity,
                            v11,
                            (int32_t)v4,
                            0LL);
  v13 = 0;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  v14 = (_DWORD)v4 + 1;
  do
  {
    v15 = entity;
    if ( !entity )
      goto LABEL_23;
    v13 += entity->fields.objectNum;
    Master_object = (void *)ServantExceedMaster__TryGetEntity(v12, &entity, v11, v14++, 0LL);
  }
  while ( ((unsigned __int8)Master_object & 1) != 0 );
  if ( !v15 )
    return 0;
  objectNum = v15->fields.objectNum;
  v21 = (System_Nullable_int__o)&v19;
  v19 = 0LL;
  System_Nullable_int____ctor(v21, objectNum, (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v19 )
    return 0;
  v17 = v13 - HIDWORD(v19);
  v22 = (System_Nullable_int__o)&v19;
  v19 = 0LL;
  System_Nullable_int____ctor(v22, v17, (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
  return HIDWORD(v19);
}


UserServantEntity_o *__fastcall ExchangeSvtCoinNeedCountCalculator__GetPossessedUserServantMaxExceedCount(
        int32_t svtId,
        const MethodInfo *method)
{
  UserServantMaster_o *Master_object; // x0
  __int64 v4; // x1
  bool EntityListBySvtId; // w0
  UserServantEntity_o *v6; // x19
  Il2CppObject *current; // x8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BD7804 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_4BD7804 = 1;
  }
  userServantList = 0LL;
  memset(&v11, 0, sizeof(v11));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_18;
  EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(Master_object, &userServantList, svtId, 1, 0LL);
  v6 = 0LL;
  if ( !EntityListBySvtId )
    return v6;
  Master_object = (UserServantMaster_o *)userServantList;
  if ( !userServantList )
LABEL_18:
    sub_1C22094(Master_object, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)userServantList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  current = 0LL;
LABEL_9:
  v6 = (UserServantEntity_o *)current;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v11.fields._current;
    if ( v6 )
    {
      if ( !v11.fields._current )
        sub_1C22094(v8, v9);
      if ( SLODWORD(v11.fields._current[18].monitor) <= v6->fields.exceedCount )
        continue;
    }
    goto LABEL_9;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v6;
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetPotentialFriendshipCoin(
        int32_t svtId,
        int32_t svtCoinId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  _QWORD *p_image; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  Il2CppObject *v10; // x23
  Il2CppObject *v11; // x24
  int32_t v12; // w25
  GiftEntity_o *v14; // [xsp+8h] [xbp-58h] BYREF
  FriendshipServantEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4BD7805 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_FriendshipServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD7805 = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !Master_object
    || (p_image = UserServantCollectionMaster__GetEntityDefinitely(
                    (UserServantCollectionMaster_o *)Master_object,
                    *(_QWORD *)(p_image[23] + 64LL),
                    svtId,
                    0LL)) == 0LL )
  {
LABEL_24:
    sub_1C22094(p_image, v5);
  }
  v8 = *(_QWORD *)((char *)p_image + 100);
  v9 = *(_QWORD *)((char *)p_image + 108);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FriendshipServantMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GiftMaster___);
  v12 = 0;
  while ( 1 )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v8;
    *(_QWORD *)&v16.fields.fakeValue = v9;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(v16, 0LL);
    v8 = *(_QWORD *)&v17.fields.currentCryptoKey;
    v9 = *(_QWORD *)&v17.fields.fakeValue;
    p_image = (_QWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v17, 0LL);
    if ( !v10 )
      goto LABEL_24;
    p_image = (_QWORD *)FriendshipServantMaster__TryGetEntity(
                          (FriendshipServantMaster_o *)v10,
                          &entity,
                          svtId,
                          (int32_t)p_image,
                          0LL);
    if ( ((unsigned __int8)p_image & 1) == 0 )
      return v12;
    if ( !entity || !v11 )
      goto LABEL_24;
    p_image = (_QWORD *)GiftMaster__TryGetEntity((GiftMaster_o *)v11, &v14, entity->fields.giftId, 2, svtCoinId, 0LL);
    if ( ((unsigned __int8)p_image & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_24;
      v12 += v14->fields.num;
    }
  }
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetPotentialSummonCoin(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int32_t ServantHavingTdLvCount; // w20
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  const MethodInfo *v7; // x1
  int32_t LevelMax; // w21
  int32_t CoinReceivedServant; // w19

  if ( (byte_4BD7806 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD7806 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (ServantHavingTdLvCount = UserServantMaster__GetServantHavingTdLvCount(
                                   (UserServantMaster_o *)Master_object,
                                   svtId,
                                   0LL),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___)) == 0LL) )
  {
    sub_1C22094(Master_object, v4);
  }
  EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                          (ServantTreasureDvcMaster_o *)Master_object,
                          svtId,
                          0,
                          0LL);
  if ( EntityFromSvtIdOnly )
    LevelMax = ServantTreasureDvcEntity__getLevelMax(EntityFromSvtIdOnly, 0LL);
  else
    LevelMax = 0;
  CoinReceivedServant = ExchangeSvtCoinNeedCountCalculator__GetCoinReceivedServant(svtId, v7);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Max_63934620(LevelMax - ServantHavingTdLvCount, 0, 0LL) * CoinReceivedServant;
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetPresentBoxCoin(
        int32_t svtId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  UserPresentBoxMaster_o *v7; // x21
  int32_t ServantCount; // w22
  const MethodInfo *v9; // x1
  int32_t CoinReceivedServant; // w20

  if ( (byte_4BD780B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BD780B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v6);
  v7 = (UserPresentBoxMaster_o *)Master_object;
  ServantCount = UserPresentBoxMaster__GetServantCount((UserPresentBoxMaster_o *)Master_object, svtId, 0LL);
  CoinReceivedServant = ExchangeSvtCoinNeedCountCalculator__GetCoinReceivedServant(svtId, v9);
  return UserPresentBoxMaster__GetGiftNumTotalCount(v7, 2, itemId, 0LL) + CoinReceivedServant * ServantCount;
}


void __fastcall ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0___ctor(
        ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0___GetEventJoinCoin_b__0(
        ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4BD780D & 1) == 0 )
  {
    this = (ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD780D = 1;
  }
  if ( !e )
    sub_1C22094(this, e);
  v6 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v9, 0LL) == v4->fields.svtId
      && UserServantEntity__IsEventJoin(e, 0LL)
      && !UserServantEntity__IsWithdrawal(e, 0LL);
}