int32_t __fastcall Shop17NeedCountCalculator__Calculate(int32_t itemId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v11; // x1
  int32_t revision; // w23
  int32_t MaxExceedConsumeCoin; // w20
  const MethodInfo *v14; // x2
  int32_t MaxAppendSkillUnlockConsumeCoin; // w21
  const MethodInfo *v16; // x1
  int32_t CurrentCoin; // w22
  const MethodInfo *v18; // x2
  int32_t PotentialFriendshipCoin; // w19
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  int32_t PotentialSummonCoin; // w23

  if ( (byte_4B11C73 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&System_Math_TypeInfo, v8, v9);
    byte_4B11C73 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        itemId,
                                                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Master_object, v11);
  }
  revision = Master_object->fields.revision;
  MaxExceedConsumeCoin = Shop17NeedCountCalculator__GetMaxExceedConsumeCoin(revision, v11);
  MaxAppendSkillUnlockConsumeCoin = Shop17NeedCountCalculator__GetMaxAppendSkillUnlockConsumeCoin(revision, itemId, v14);
  CurrentCoin = Shop17NeedCountCalculator__GetCurrentCoin(itemId, v16);
  PotentialFriendshipCoin = Shop17NeedCountCalculator__GetPotentialFriendshipCoin(revision, itemId, v18);
  PotentialSummonCoin = Shop17NeedCountCalculator__GetPotentialSummonCoin(revision, v20);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21);
  return System_Math__Max_63220196(
           MaxAppendSkillUnlockConsumeCoin
         + MaxExceedConsumeCoin
         - CurrentCoin
         - PotentialFriendshipCoin
         - PotentialSummonCoin,
           0,
           0LL);
}


int32_t __fastcall Shop17NeedCountCalculator__GetCurrentCoin(int32_t itemId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v11; // x1

  if ( (byte_4B11C79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B11C79 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object
    || (UserId = (int64_t)UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)Master_object, UserId, itemId, 0LL)) == 0 )
  {
    sub_1BCAA3C(UserId, v11);
  }
  return *(_DWORD *)(UserId + 28);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall Shop17NeedCountCalculator__GetMaxAppendSkillUnlockConsumeCoin(
        int32_t svtId,
        int32_t svtCoinId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *unlockNums; // x20
  __int64 v20; // x8
  int64_t v21; // x21
  int32_t v22; // w22
  unsigned __int64 v23; // x23
  __int64 v24; // x25
  __int64 v25; // x8
  unsigned __int64 v26; // x9
  __int64 v27; // x11
  __int64 v28; // x13
  __int64 v29; // x12
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B11C78 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&svtCoinId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    byte_4B11C78 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtCoinId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_37;
  UserId = UserServantAppendPassiveSkillMaster__TryGetEntity(
             (UserServantAppendPassiveSkillMaster_o *)Master_object,
             &entity,
             UserId,
             svtId,
             0LL);
  unlockNums = 0LL;
  if ( (UserId & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_37;
    unlockNums = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.unlockNums;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
  if ( !UserId
    || (UserId = (int64_t)SvtAppendPassiveSkillUnlockMaster__GetEntityListFromSvtId(
                            (SvtAppendPassiveSkillUnlockMaster_o *)UserId,
                            svtId,
                            0LL)) == 0 )
  {
LABEL_37:
    sub_1BCAA3C(UserId, v18);
  }
  v20 = *(_QWORD *)(UserId + 24);
  v21 = UserId;
  if ( (int)v20 >= 1 )
  {
    v22 = 0;
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v20 )
        goto LABEL_36;
      v24 = *(_QWORD *)(v21 + 8 * v23 + 32);
      if ( unlockNums )
      {
        if ( !v24 )
          goto LABEL_37;
        UserId = System_Linq_Enumerable__Contains_int_(
                   unlockNums,
                   *(_DWORD *)(v24 + 20),
                   (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (UserId & 1) != 0 )
          goto LABEL_32;
      }
      else if ( !v24 )
      {
        goto LABEL_37;
      }
      v25 = *(_QWORD *)(v24 + 24);
      if ( !v25 )
        goto LABEL_37;
      v26 = *(unsigned int *)(v25 + 24);
      if ( (__int64)(v26 << 32) >= 1 )
      {
        v27 = 8LL;
        while ( v27 - 8 < v26 )
        {
          if ( *(_DWORD *)(v25 + 4 * v27) == svtCoinId )
          {
            v28 = *(_QWORD *)(v24 + 32);
            if ( !v28 )
              goto LABEL_37;
            if ( v27 - 8 >= (unsigned __int64)*(unsigned int *)(v28 + 24) )
              break;
            v22 += *(_DWORD *)(v28 + 4 * v27);
          }
          v29 = v27 - 7;
          ++v27;
          if ( v29 >= (int)v26 )
            goto LABEL_32;
        }
LABEL_36:
        sub_1BCAA44(UserId, v18);
      }
LABEL_32:
      LODWORD(v20) = *(_DWORD *)(v21 + 24);
      if ( (__int64)++v23 >= (int)v20 )
        return v22;
    }
  }
  return 0;
}


int32_t __fastcall Shop17NeedCountCalculator__GetMaxExceedConsumeCoin(int32_t svtId, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UserServantEntity_o *PossessedUserServantMaxExceedCount; // x0
  __int64 v17; // x1
  UserServantEntity_o *v18; // x20
  __int64 v19; // x21
  __int64 v20; // x22
  int32_t v21; // w0
  int32_t v22; // w21
  void *Master_object; // x0
  __int64 v24; // x1
  int32_t v25; // w19
  ServantExceedMaster_o *v26; // x21
  int v27; // w22
  int32_t v28; // w20
  ServantExceedEntity_o *v29; // x23
  int32_t objectNum; // w1
  int32_t v31; // w1
  __int64 v33; // [xsp+0h] [xbp-40h] BYREF
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o v35; // 0:x0.8
  System_Nullable_int__o v36; // 0:x0.8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B11C77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v8, v9);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    byte_4B11C77 = 1;
  }
  entity = 0LL;
  PossessedUserServantMaxExceedCount = Shop17NeedCountCalculator__GetPossessedUserServantMaxExceedCount(svtId, method);
  v18 = PossessedUserServantMaxExceedCount;
  if ( PossessedUserServantMaxExceedCount )
  {
    v20 = *(_QWORD *)&PossessedUserServantMaxExceedCount->fields.limitCount.fields.currentCryptoKey;
    v19 = *(_QWORD *)&PossessedUserServantMaxExceedCount->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    *(_QWORD *)&v37.fields.currentCryptoKey = v20;
    *(_QWORD *)&v37.fields.fakeValue = v19;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37, 0LL);
    LODWORD(v18) = v18->fields.exceedCount;
    v22 = v21;
  }
  else
  {
    v22 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !Master_object
    || (Master_object = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, v22, 0LL)) == 0LL
    || (v25 = *((_DWORD *)Master_object + 6),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___)) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(Master_object, v24);
  }
  v26 = (ServantExceedMaster_o *)Master_object;
  Master_object = (void *)ServantExceedMaster__TryGetEntity(
                            (ServantExceedMaster_o *)Master_object,
                            &entity,
                            v25,
                            (int32_t)v18,
                            0LL);
  v27 = 0;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  v28 = (_DWORD)v18 + 1;
  do
  {
    v29 = entity;
    if ( !entity )
      goto LABEL_23;
    v27 += entity->fields.objectNum;
    Master_object = (void *)ServantExceedMaster__TryGetEntity(v26, &entity, v25, v28++, 0LL);
  }
  while ( ((unsigned __int8)Master_object & 1) != 0 );
  if ( !v29 )
    return 0;
  objectNum = v29->fields.objectNum;
  v35 = (System_Nullable_int__o)&v33;
  v33 = 0LL;
  System_Nullable_int____ctor(v35, objectNum, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v33 )
    return 0;
  v31 = v27 - HIDWORD(v33);
  v36 = (System_Nullable_int__o)&v33;
  v33 = 0LL;
  System_Nullable_int____ctor(v36, v31, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  return HIDWORD(v33);
}


UserServantEntity_o *__fastcall Shop17NeedCountCalculator__GetPossessedUserServantMaxExceedCount(
        int32_t svtId,
        const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  UserServantMaster_o *Master_object; // x0
  __int64 v15; // x1
  bool EntityListBySvtId; // w0
  UserServantEntity_o *v17; // x19
  Il2CppObject *current; // x8
  _BOOL8 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B11C74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v12, v13);
    byte_4B11C74 = 1;
  }
  userServantList = 0LL;
  memset(&v22, 0, sizeof(v22));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_18;
  EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(Master_object, &userServantList, svtId, 1, 0LL);
  v17 = 0LL;
  if ( !EntityListBySvtId )
    return v17;
  Master_object = (UserServantMaster_o *)userServantList;
  if ( !userServantList )
LABEL_18:
    sub_1BCAA3C(Master_object, v15);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)userServantList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  current = 0LL;
LABEL_9:
  v17 = (UserServantEntity_o *)current;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v19 )
      break;
    current = v22.fields._current;
    if ( v17 )
    {
      if ( !v22.fields._current )
        sub_1BCAA3C(v19, v20);
      if ( SLODWORD(v22.fields._current[18].monitor) <= v17->fields.exceedCount )
        continue;
    }
    goto LABEL_9;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v17;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall Shop17NeedCountCalculator__GetPotentialFriendshipCoin(
        int32_t svtId,
        int32_t svtCoinId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v18; // x1
  __int64 v19; // x21
  __int64 v20; // x22
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x24
  int32_t v23; // w25
  GiftEntity_o *v25; // [xsp+8h] [xbp-58h] BYREF
  FriendshipServantEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B11C75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FriendshipServantMaster___, *(_QWORD *)&svtCoinId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    byte_4B11C75 = 1;
  }
  entity = 0LL;
  v25 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtCoinId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object
    || (UserId = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                            (UserServantCollectionMaster_o *)Master_object,
                            UserId,
                            svtId,
                            0LL)) == 0 )
  {
LABEL_20:
    sub_1BCAA3C(UserId, v18);
  }
  v19 = *(_QWORD *)(UserId + 100);
  v20 = *(_QWORD *)(UserId + 108);
  v21 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FriendshipServantMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  v23 = 0;
  while ( 1 )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    *(_QWORD *)&v27.fields.currentCryptoKey = v19;
    *(_QWORD *)&v27.fields.fakeValue = v20;
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(v27, 0LL);
    v19 = *(_QWORD *)&v28.fields.currentCryptoKey;
    v20 = *(_QWORD *)&v28.fields.fakeValue;
    UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL);
    if ( !v21 )
      goto LABEL_20;
    UserId = FriendshipServantMaster__TryGetEntity((FriendshipServantMaster_o *)v21, &entity, svtId, UserId, 0LL);
    if ( (UserId & 1) == 0 )
      return v23;
    if ( !entity || !v22 )
      goto LABEL_20;
    UserId = GiftMaster__TryGetEntity((GiftMaster_o *)v22, &v25, entity->fields.giftId, 2, svtCoinId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v25 )
        goto LABEL_20;
      v23 += v25->fields.num;
    }
  }
}


int32_t __fastcall Shop17NeedCountCalculator__GetPotentialSummonCoin(int32_t svtId, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  int32_t ServantHavingTdLvCount; // w20
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  __int64 v18; // x1
  int32_t LevelMax; // w21
  int klass_high; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11C76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtCoinMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&System_Math_TypeInfo, v12, v13);
    byte_4B11C76 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_20;
  ServantHavingTdLvCount = UserServantMaster__GetServantHavingTdLvCount(
                             (UserServantMaster_o *)Master_object,
                             svtId,
                             0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_20;
  EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                          (ServantTreasureDvcMaster_o *)Master_object,
                          svtId,
                          0,
                          0LL);
  if ( EntityFromSvtIdOnly )
    LevelMax = ServantTreasureDvcEntity__getLevelMax(EntityFromSvtIdOnly, 0LL);
  else
    LevelMax = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    svtId,
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      klass_high = HIDWORD(entity[1].klass);
      goto LABEL_17;
    }
LABEL_20:
    sub_1BCAA3C(Master_object, v15);
  }
  klass_high = 0;
LABEL_17:
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15);
  return System_Math__Max_63220196(LevelMax - ServantHavingTdLvCount, 0, 0LL) * klass_high;
}