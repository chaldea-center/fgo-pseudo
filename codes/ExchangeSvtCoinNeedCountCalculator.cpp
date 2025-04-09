int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__Calculate(int32_t itemId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  const MethodInfo *v7; // x1
  int32_t klass; // w26
  int32_t MaxExceedConsumeCoin; // w20
  const MethodInfo *v10; // x2
  int32_t MaxAppendSkillUnlockConsumeCoin; // w21
  const MethodInfo *v12; // x1
  int32_t CurrentCoin; // w22
  const MethodInfo *v14; // x2
  int32_t PotentialFriendshipCoin; // w23
  const MethodInfo *v16; // x1
  int32_t PotentialSummonCoin; // w24
  const MethodInfo *v18; // x1
  int32_t EventJoinCoin; // w25
  const MethodInfo *v20; // x2
  int32_t PresentBoxCoin; // w19

  if ( (byte_49B5FCC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ItemMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_1B4CF90(&System_Math_TypeInfo, v5);
    byte_49B5FCC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          itemId,
                          (const MethodInfo_319D99C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B4D1EC(Master_object, v7);
  }
  klass = (int32_t)Master_object[4].klass;
  MaxExceedConsumeCoin = ExchangeSvtCoinNeedCountCalculator__GetMaxExceedConsumeCoin(klass, v7);
  MaxAppendSkillUnlockConsumeCoin = ExchangeSvtCoinNeedCountCalculator__GetMaxAppendSkillUnlockConsumeCoin(
                                      klass,
                                      itemId,
                                      v10);
  CurrentCoin = ExchangeSvtCoinNeedCountCalculator__GetCurrentCoin(itemId, v12);
  PotentialFriendshipCoin = ExchangeSvtCoinNeedCountCalculator__GetPotentialFriendshipCoin(klass, itemId, v14);
  PotentialSummonCoin = ExchangeSvtCoinNeedCountCalculator__GetPotentialSummonCoin(klass, v16);
  EventJoinCoin = ExchangeSvtCoinNeedCountCalculator__GetEventJoinCoin(klass, v18);
  PresentBoxCoin = ExchangeSvtCoinNeedCountCalculator__GetPresentBoxCoin(klass, itemId, v20);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Max_62621788(
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49B5FD5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_SvtCoinMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v4);
    byte_49B5FD5 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    svtId,
                                    (const MethodInfo_319D9E8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
LABEL_11:
    sub_1B4D1EC(Master_object, v6);
  }
  return 0;
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetCurrentCoin(int32_t itemId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  int32_t *EntityDefinitely; // x0

  if ( (byte_49B5FD2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&NetworkManager_TypeInfo, v4);
    byte_49B5FD2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    byte_49B57A5 = 1;
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
    sub_1B4D1EC(EntityDefinitely, v5);
  }
  return EntityDefinitely[7];
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetEventJoinCoin(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  System_Func_object__bool__o *v12; // x21
  int32_t v13; // w0
  const MethodInfo *v14; // x1

  if ( (byte_49B5FD3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_UserServantEntity___, v4);
    sub_1B4CF90(&System_Func_UserServantEntity__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0__GetEventJoinCoin_b__0__, v6);
    sub_1B4CF90(&ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_TypeInfo, v7);
    byte_49B5FD3 = 1;
  }
  v8 = sub_1B4D1DC(ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_DWORD *)(v8 + 16) = svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1B4D1EC(Master_object, v10);
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(
                                                                   (UserServantMaster_o *)Master_object,
                                                                   0LL);
  v12 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0__GetEventJoinCoin_b__0__,
    0LL);
  v13 = System_Linq_Enumerable__Count_object__49416428(
          AllList,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_2F208EC *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
  return ExchangeSvtCoinNeedCountCalculator__GetCoinReceivedServant(*(_DWORD *)(v8 + 16), v14) * v13;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetMaxAppendSkillUnlockConsumeCoin(
        int32_t svtId,
        int32_t svtCoinId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x20
  SvtAppendPassiveSkillUnlockMaster_o *EntityListFromSvtId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *unlockNums; // x20
  struct System_String_o *MasterName_k__BackingField; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v15; // x21
  int32_t v16; // w22
  unsigned __int64 v17; // x23
  __int64 v18; // x25
  __int64 v19; // x8
  unsigned __int64 v20; // x9
  __int64 v21; // x11
  __int64 v22; // x13
  __int64 v23; // x12
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49B5FD1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&svtCoinId);
    sub_1B4CF90(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    byte_49B5FD1 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    byte_49B57A5 = 1;
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
  DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ItemMaster___);
  EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
  if ( !EntityListFromSvtId
    || (EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)SvtAppendPassiveSkillUnlockMaster__GetEntityListFromSvtId(
                                                                       EntityListFromSvtId,
                                                                       svtId,
                                                                       0LL)) == 0LL )
  {
LABEL_41:
    sub_1B4D1EC(EntityListFromSvtId, v10);
  }
  MasterName_k__BackingField = EntityListFromSvtId->fields._MasterName_k__BackingField;
  v15 = EntityListFromSvtId;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v16 = 0;
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_40;
      v18 = *((_QWORD *)&v15->fields.revision + v17);
      if ( unlockNums )
      {
        if ( !v18 )
          goto LABEL_41;
        EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)System_Linq_Enumerable__Contains_int_(
                                                                       unlockNums,
                                                                       *(_DWORD *)(v18 + 20),
                                                                       (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          goto LABEL_36;
      }
      else if ( !v18 )
      {
        goto LABEL_41;
      }
      v19 = *(_QWORD *)(v18 + 24);
      if ( !v19 )
        goto LABEL_41;
      v20 = *(unsigned int *)(v19 + 24);
      if ( (__int64)(v20 << 32) >= 1 )
      {
        v21 = 8LL;
        while ( v21 - 8 < v20 )
        {
          if ( *(_DWORD *)(v19 + 4 * v21) == svtCoinId )
          {
            v22 = *(_QWORD *)(v18 + 32);
            if ( !v22 )
              goto LABEL_41;
            if ( v21 - 8 >= (unsigned __int64)*(unsigned int *)(v22 + 24) )
              break;
            v16 += *(_DWORD *)(v22 + 4 * v21);
          }
          v23 = v21 - 7;
          ++v21;
          if ( v23 >= (int)v20 )
            goto LABEL_36;
        }
LABEL_40:
        sub_1B4D1F4(EntityListFromSvtId, v10);
      }
LABEL_36:
      LODWORD(MasterName_k__BackingField) = v15->fields._MasterName_k__BackingField;
      if ( (__int64)++v17 >= (int)MasterName_k__BackingField )
        return v16;
    }
  }
  return 0;
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetMaxExceedConsumeCoin(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserServantEntity_o *PossessedUserServantMaxExceedCount; // x0
  UserServantEntity_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w0
  int32_t v14; // w21
  void *Master_object; // x0
  __int64 v16; // x1
  int32_t v17; // w19
  ServantExceedMaster_o *v18; // x21
  int v19; // w22
  int32_t v20; // w20
  ServantExceedEntity_o *v21; // x23
  int32_t objectNum; // w1
  int32_t v23; // w1
  __int64 v25; // [xsp+0h] [xbp-40h] BYREF
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o v27; // 0:x0.8
  System_Nullable_int__o v28; // 0:x0.8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_49B5FD0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantExceedMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantLimitMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Nullable_int__GetValueOrDefault__, v5);
    sub_1B4CF90(&Method_System_Nullable_int___ctor__, v6);
    sub_1B4CF90(&Method_System_Nullable_int__get_HasValue__, v7);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_49B5FD0 = 1;
  }
  entity = 0LL;
  PossessedUserServantMaxExceedCount = ExchangeSvtCoinNeedCountCalculator__GetPossessedUserServantMaxExceedCount(
                                         svtId,
                                         method);
  v10 = PossessedUserServantMaxExceedCount;
  if ( PossessedUserServantMaxExceedCount )
  {
    v12 = *(_QWORD *)&PossessedUserServantMaxExceedCount->fields.limitCount.fields.currentCryptoKey;
    v11 = *(_QWORD *)&PossessedUserServantMaxExceedCount->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v12;
    *(_QWORD *)&v29.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v29, 0LL);
    LODWORD(v10) = v10->fields.exceedCount;
    v14 = v13;
  }
  else
  {
    v14 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !Master_object
    || (Master_object = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, v14, 0LL)) == 0LL
    || (v17 = *((_DWORD *)Master_object + 6),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantExceedMaster___)) == 0LL) )
  {
LABEL_23:
    sub_1B4D1EC(Master_object, v16);
  }
  v18 = (ServantExceedMaster_o *)Master_object;
  Master_object = (void *)ServantExceedMaster__TryGetEntity(
                            (ServantExceedMaster_o *)Master_object,
                            &entity,
                            v17,
                            (int32_t)v10,
                            0LL);
  v19 = 0;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  v20 = (_DWORD)v10 + 1;
  do
  {
    v21 = entity;
    if ( !entity )
      goto LABEL_23;
    v19 += entity->fields.objectNum;
    Master_object = (void *)ServantExceedMaster__TryGetEntity(v18, &entity, v17, v20++, 0LL);
  }
  while ( ((unsigned __int8)Master_object & 1) != 0 );
  if ( !v21 )
    return 0;
  objectNum = v21->fields.objectNum;
  v27 = (System_Nullable_int__o)&v25;
  v25 = 0LL;
  System_Nullable_int____ctor(v27, objectNum, (const MethodInfo_3699C2C *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v25 )
    return 0;
  v23 = v19 - HIDWORD(v25);
  v28 = (System_Nullable_int__o)&v25;
  v25 = 0LL;
  System_Nullable_int____ctor(v28, v23, (const MethodInfo_3699C2C *)Method_System_Nullable_int___ctor__);
  return HIDWORD(v25);
}


UserServantEntity_o *__fastcall ExchangeSvtCoinNeedCountCalculator__GetPossessedUserServantMaxExceedCount(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantMaster_o *Master_object; // x0
  __int64 v9; // x1
  bool EntityListBySvtId; // w0
  UserServantEntity_o *v11; // x19
  Il2CppObject *current; // x8
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49B5FCD & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v7);
    byte_49B5FCD = 1;
  }
  userServantList = 0LL;
  memset(&v16, 0, sizeof(v16));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_18;
  EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(Master_object, &userServantList, svtId, 1, 0LL);
  v11 = 0LL;
  if ( !EntityListBySvtId )
    return v11;
  Master_object = (UserServantMaster_o *)userServantList;
  if ( !userServantList )
LABEL_18:
    sub_1B4D1EC(Master_object, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)userServantList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  current = 0LL;
LABEL_9:
  v11 = (UserServantEntity_o *)current;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v13 )
      break;
    current = v16.fields._current;
    if ( v11 )
    {
      if ( !v16.fields._current )
        sub_1B4D1EC(v13, v14);
      if ( SLODWORD(v16.fields._current[18].monitor) <= v11->fields.exceedCount )
        continue;
    }
    goto LABEL_9;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetPotentialFriendshipCoin(
        int32_t svtId,
        int32_t svtCoinId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x21
  _QWORD *p_image; // x0
  __int64 v13; // x21
  __int64 v14; // x22
  Il2CppObject *v15; // x23
  Il2CppObject *v16; // x24
  int32_t v17; // w25
  GiftEntity_o *v19; // [xsp+8h] [xbp-58h] BYREF
  FriendshipServantEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49B5FCE & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_FriendshipServantMaster___, *(_QWORD *)&svtCoinId);
    sub_1B4CF90(&Method_DataManager_GetMaster_GiftMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&NetworkManager_TypeInfo, v8);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_49B5FCE = 1;
  }
  entity = 0LL;
  v19 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    byte_49B57A5 = 1;
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
    sub_1B4D1EC(p_image, v10);
  }
  v13 = *(_QWORD *)((char *)p_image + 100);
  v14 = *(_QWORD *)((char *)p_image + 108);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FriendshipServantMaster___);
  v16 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GiftMaster___);
  v17 = 0;
  while ( 1 )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v13;
    *(_QWORD *)&v21.fields.fakeValue = v14;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(v21, 0LL);
    v13 = *(_QWORD *)&v22.fields.currentCryptoKey;
    v14 = *(_QWORD *)&v22.fields.fakeValue;
    p_image = (_QWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v22, 0LL);
    if ( !v15 )
      goto LABEL_24;
    p_image = (_QWORD *)FriendshipServantMaster__TryGetEntity(
                          (FriendshipServantMaster_o *)v15,
                          &entity,
                          svtId,
                          (int32_t)p_image,
                          0LL);
    if ( ((unsigned __int8)p_image & 1) == 0 )
      return v17;
    if ( !entity || !v16 )
      goto LABEL_24;
    p_image = (_QWORD *)GiftMaster__TryGetEntity((GiftMaster_o *)v16, &v19, entity->fields.giftId, 2, svtCoinId, 0LL);
    if ( ((unsigned __int8)p_image & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_24;
      v17 += v19->fields.num;
    }
  }
}


int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetPotentialSummonCoin(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  int32_t ServantHavingTdLvCount; // w20
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  const MethodInfo *v10; // x1
  int32_t LevelMax; // w21
  int32_t CoinReceivedServant; // w19

  if ( (byte_49B5FCF & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&System_Math_TypeInfo, v5);
    byte_49B5FCF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (ServantHavingTdLvCount = UserServantMaster__GetServantHavingTdLvCount(
                                   (UserServantMaster_o *)Master_object,
                                   svtId,
                                   0LL),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___)) == 0LL) )
  {
    sub_1B4D1EC(Master_object, v7);
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
  CoinReceivedServant = ExchangeSvtCoinNeedCountCalculator__GetCoinReceivedServant(svtId, v10);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Max_62621788(LevelMax - ServantHavingTdLvCount, 0, 0LL) * CoinReceivedServant;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ExchangeSvtCoinNeedCountCalculator__GetPresentBoxCoin(
        int32_t svtId,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  UserPresentBoxMaster_o *v8; // x21
  int32_t ServantCount; // w22
  const MethodInfo *v10; // x1
  int32_t CoinReceivedServant; // w20

  if ( (byte_49B5FD4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_UserPresentBoxMaster___, *(_QWORD *)&itemId);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    byte_49B5FD4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !Master_object )
    sub_1B4D1EC(0LL, v7);
  v8 = (UserPresentBoxMaster_o *)Master_object;
  ServantCount = UserPresentBoxMaster__GetServantCount((UserPresentBoxMaster_o *)Master_object, svtId, 0LL);
  CoinReceivedServant = ExchangeSvtCoinNeedCountCalculator__GetCoinReceivedServant(svtId, v10);
  return UserPresentBoxMaster__GetGiftNumTotalCount(v8, 2, itemId, 0LL) + CoinReceivedServant * ServantCount;
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
  if ( (byte_49B5FD6 & 1) == 0 )
  {
    this = (ExchangeSvtCoinNeedCountCalculator___c__DisplayClass7_0_o *)sub_1B4CF90(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          e);
    byte_49B5FD6 = 1;
  }
  if ( !e )
    sub_1B4D1EC(this, e);
  v6 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v9, 0LL) == v4->fields.svtId
      && UserServantEntity__IsEventJoin(e, 0LL)
      && !UserServantEntity__IsWithdrawal(e, 0LL);
}