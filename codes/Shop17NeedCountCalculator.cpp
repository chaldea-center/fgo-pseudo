int32_t __fastcall Shop17NeedCountCalculator__Calculate(int32_t itemId, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v4; // x1
  int32_t revision; // w26
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

  if ( (byte_4B277B8 & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1BCE82C(&System_Math_TypeInfo);
    byte_4B277B8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        itemId,
                                                                        (const MethodInfo_31C6FC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCEA88(Master_object, v4);
  }
  revision = Master_object->fields.revision;
  MaxExceedConsumeCoin = Shop17NeedCountCalculator__GetMaxExceedConsumeCoin(revision, v4);
  MaxAppendSkillUnlockConsumeCoin = Shop17NeedCountCalculator__GetMaxAppendSkillUnlockConsumeCoin(revision, itemId, v7);
  CurrentCoin = Shop17NeedCountCalculator__GetCurrentCoin(itemId, v9);
  PotentialFriendshipCoin = Shop17NeedCountCalculator__GetPotentialFriendshipCoin(revision, itemId, v11);
  PotentialSummonCoin = Shop17NeedCountCalculator__GetPotentialSummonCoin(revision, v13);
  EventJoinCoin = Shop17NeedCountCalculator__GetEventJoinCoin(revision, v15);
  PresentBoxCoin = Shop17NeedCountCalculator__GetPresentBoxCoin(revision, itemId, v17);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Max_63302640(
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


int32_t __fastcall Shop17NeedCountCalculator__GetCoinReceivedServant(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B277C1 & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    byte_4B277C1 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    svtId,
                                    (const MethodInfo_31C701C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
LABEL_11:
    sub_1BCEA88(Master_object, v4);
  }
  return 0;
}


int32_t __fastcall Shop17NeedCountCalculator__GetCurrentCoin(int32_t itemId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  void *EntityDefinitely; // x0

  if ( (byte_4B277BE & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&NetworkManager_TypeInfo);
    byte_4B277BE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B26937 )
  {
    sub_1BCE82C(&NetworkManager_TypeInfo);
    byte_4B26937 = 1;
  }
  EntityDefinitely = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    EntityDefinitely = NetworkManager_TypeInfo;
  }
  if ( !Master_object
    || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                             (UserItemMaster_o *)Master_object,
                             *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL),
                             itemId,
                             0LL)) == 0LL )
  {
    sub_1BCEA88(EntityDefinitely, v3);
  }
  return *((_DWORD *)EntityDefinitely + 7);
}


int32_t __fastcall Shop17NeedCountCalculator__GetEventJoinCoin(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  UserServantEntity_array *AllList; // x0
  Shop17NeedCountCalculator___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Func_object__bool__o *_9__7_0; // x21
  Il2CppObject *v9; // x22
  struct Shop17NeedCountCalculator___c_StaticFields *static_fields; // x0
  int32_t v11; // w20
  const MethodInfo *v12; // x1

  if ( (byte_4B277BF & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&Method_System_Linq_Enumerable_Count_UserServantEntity___);
    sub_1BCE82C(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1BCE82C(&Method_Shop17NeedCountCalculator___c__GetEventJoinCoin_b__7_0__);
    sub_1BCE82C(&Shop17NeedCountCalculator___c_TypeInfo);
    byte_4B277BF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1BCEA88(0LL, v4);
  AllList = UserServantMaster__getAllList((UserServantMaster_o *)Master_object, 0LL);
  v6 = Shop17NeedCountCalculator___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)AllList;
  if ( !Shop17NeedCountCalculator___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Shop17NeedCountCalculator___c_TypeInfo);
    v6 = Shop17NeedCountCalculator___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__bool__o *)v6->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = Shop17NeedCountCalculator___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__7_0 = (System_Func_object__bool__o *)sub_1BCEA78(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__7_0, v9, Method_Shop17NeedCountCalculator___c__GetEventJoinCoin_b__7_0__, 0LL);
    static_fields = Shop17NeedCountCalculator___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_UserServantEntity__bool__o *)_9__7_0;
    sub_1BCE7D0(&static_fields->__9__7_0);
  }
  v11 = System_Linq_Enumerable__Count_object__49556468(
          v7,
          (System_Func_TSource__bool__o *)_9__7_0,
          (const MethodInfo_2F42BF4 *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
  return Shop17NeedCountCalculator__GetCoinReceivedServant(svtId, v12) * v11;
}


int32_t __fastcall Shop17NeedCountCalculator__GetMaxAppendSkillUnlockConsumeCoin(
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

  if ( (byte_4B277BD & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1BCE82C(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1BCE82C(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1BCE82C(&NetworkManager_TypeInfo);
    byte_4B277BD = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B26937 )
  {
    sub_1BCE82C(&NetworkManager_TypeInfo);
    byte_4B26937 = 1;
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
                                                                 (int64_t)EntityListFromSvtId[2].fields._lookup->fields._values,
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
  DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_ItemMaster___);
  EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
  if ( !EntityListFromSvtId
    || (EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)SvtAppendPassiveSkillUnlockMaster__GetEntityListFromSvtId(
                                                                       EntityListFromSvtId,
                                                                       svtId,
                                                                       0LL)) == 0LL )
  {
LABEL_41:
    sub_1BCEA88(EntityListFromSvtId, v5);
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
      v13 = *((_QWORD *)&v10->fields.list + v12);
      if ( unlockNums )
      {
        if ( !v13 )
          goto LABEL_41;
        EntityListFromSvtId = (SvtAppendPassiveSkillUnlockMaster_o *)System_Linq_Enumerable__Contains_int_(
                                                                       unlockNums,
                                                                       *(_DWORD *)(v13 + 20),
                                                                       (const MethodInfo_2F3E670 *)Method_System_Linq_Enumerable_Contains_int___);
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
        sub_1BCEA90(EntityListFromSvtId, v5);
      }
LABEL_36:
      LODWORD(MasterName_k__BackingField) = v10->fields._MasterName_k__BackingField;
      if ( (__int64)++v12 >= (int)MasterName_k__BackingField )
        return v11;
    }
  }
  return 0;
}


int32_t __fastcall Shop17NeedCountCalculator__GetMaxExceedConsumeCoin(int32_t svtId, const MethodInfo *method)
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

  if ( (byte_4B277BC & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1BCE82C(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1BCE82C(&Method_System_Nullable_int___ctor__);
    sub_1BCE82C(&Method_System_Nullable_int__get_HasValue__);
    sub_1BCE82C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4B277BC = 1;
  }
  entity = 0LL;
  PossessedUserServantMaxExceedCount = Shop17NeedCountCalculator__GetPossessedUserServantMaxExceedCount(svtId, method);
  v4 = PossessedUserServantMaxExceedCount;
  if ( PossessedUserServantMaxExceedCount )
  {
    v6 = *(_QWORD *)&PossessedUserServantMaxExceedCount->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&PossessedUserServantMaxExceedCount->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v6;
    *(_QWORD *)&v23.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47090796(v23, 0LL);
    LODWORD(v4) = v4->fields.exceedCount;
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !Master_object
    || (Master_object = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, v8, 0LL)) == 0LL
    || (v11 = *((_DWORD *)Master_object + 6),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_ServantExceedMaster___)) == 0LL) )
  {
LABEL_23:
    sub_1BCEA88(Master_object, v10);
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
  System_Nullable_int____ctor(v21, objectNum, (const MethodInfo_36D2CAC *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v19 )
    return 0;
  v17 = v13 - HIDWORD(v19);
  v22 = (System_Nullable_int__o)&v19;
  v19 = 0LL;
  System_Nullable_int____ctor(v22, v17, (const MethodInfo_36D2CAC *)Method_System_Nullable_int___ctor__);
  return HIDWORD(v19);
}


UserServantEntity_o *__fastcall Shop17NeedCountCalculator__GetPossessedUserServantMaxExceedCount(
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

  if ( (byte_4B277B9 & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1BCE82C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1BCE82C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1BCE82C(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_4B277B9 = 1;
  }
  userServantList = 0LL;
  memset(&v11, 0, sizeof(v11));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_18;
  EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(Master_object, &userServantList, svtId, 1, 0LL);
  v6 = 0LL;
  if ( !EntityListBySvtId )
    return v6;
  Master_object = (UserServantMaster_o *)userServantList;
  if ( !userServantList )
LABEL_18:
    sub_1BCEA88(Master_object, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)userServantList,
    (const MethodInfo_35B6960 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  current = 0LL;
LABEL_9:
  v6 = (UserServantEntity_o *)current;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_332AF28 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v11.fields._current;
    if ( v6 )
    {
      if ( !v11.fields._current )
        sub_1BCEA88(v8, v9);
      if ( SLODWORD(v11.fields._current[18].monitor) <= v6->fields.exceedCount )
        continue;
    }
    goto LABEL_9;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_332AF24 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v6;
}


int32_t __fastcall Shop17NeedCountCalculator__GetPotentialFriendshipCoin(
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

  if ( (byte_4B277BA & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_FriendshipServantMaster___);
    sub_1BCE82C(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1BCE82C(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&NetworkManager_TypeInfo);
    sub_1BCE82C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4B277BA = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B26937 )
  {
    sub_1BCE82C(&NetworkManager_TypeInfo);
    byte_4B26937 = 1;
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
    sub_1BCEA88(p_image, v5);
  }
  v8 = *(_QWORD *)((char *)p_image + 100);
  v9 = *(_QWORD *)((char *)p_image + 108);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_FriendshipServantMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_GiftMaster___);
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
    p_image = (_QWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47090796(v17, 0LL);
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


int32_t __fastcall Shop17NeedCountCalculator__GetPotentialSummonCoin(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int32_t ServantHavingTdLvCount; // w20
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  const MethodInfo *v7; // x1
  int32_t LevelMax; // w21
  int32_t CoinReceivedServant; // w19

  if ( (byte_4B277BB & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1BCE82C(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&System_Math_TypeInfo);
    byte_4B277BB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (ServantHavingTdLvCount = UserServantMaster__GetServantHavingTdLvCount(
                                   (UserServantMaster_o *)Master_object,
                                   svtId,
                                   0LL),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___)) == 0LL) )
  {
    sub_1BCEA88(Master_object, v4);
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
  CoinReceivedServant = Shop17NeedCountCalculator__GetCoinReceivedServant(svtId, v7);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Max_63302640(LevelMax - ServantHavingTdLvCount, 0, 0LL) * CoinReceivedServant;
}


int32_t __fastcall Shop17NeedCountCalculator__GetPresentBoxCoin(
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

  if ( (byte_4B277C0 & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    byte_4B277C0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !Master_object )
    sub_1BCEA88(0LL, v6);
  v7 = (UserPresentBoxMaster_o *)Master_object;
  ServantCount = UserPresentBoxMaster__GetServantCount((UserPresentBoxMaster_o *)Master_object, svtId, 0LL);
  CoinReceivedServant = Shop17NeedCountCalculator__GetCoinReceivedServant(svtId, v9);
  return UserPresentBoxMaster__GetGiftNumTotalCount(v7, 2, itemId, 0LL) + CoinReceivedServant * ServantCount;
}


void __fastcall Shop17NeedCountCalculator___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4B277C2 & 1) == 0 )
  {
    sub_1BCE82C(&Shop17NeedCountCalculator___c_TypeInfo);
    byte_4B277C2 = 1;
  }
  v1 = (Il2CppObject *)sub_1BCEA78(Shop17NeedCountCalculator___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  Shop17NeedCountCalculator___c_TypeInfo->static_fields->__9 = (struct Shop17NeedCountCalculator___c_o *)v1;
  sub_1BCE7D0(Shop17NeedCountCalculator___c_TypeInfo->static_fields);
}


void __fastcall Shop17NeedCountCalculator___c___ctor(Shop17NeedCountCalculator___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Shop17NeedCountCalculator___c___GetEventJoinCoin_b__7_0(
        Shop17NeedCountCalculator___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCEA88(this, 0LL);
  return UserServantEntity__IsEventJoin(e, 0LL) && !UserServantEntity__IsWithdrawal(e, 0LL);
}