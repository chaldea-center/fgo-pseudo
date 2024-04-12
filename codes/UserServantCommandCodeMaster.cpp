void __fastcall UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE204 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
    byte_42AE204 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    253,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *__fastcall UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AE202 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
    byte_42AE202 = 1;
  }
  PK = UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23E2728 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__GetEquipedCommandCodeList(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  UserServantCommandCodeEntity_c *v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 v9; // x9
  struct System_Collections_Generic_IList_T__o *items; // x26
  void *monitor; // x8
  unsigned __int64 v12; // x27
  signed __int64 v13; // x28
  __int64 v15; // x0
  UserServantCommandCodeMaster_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_42AE205 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&UserServantCommandCodeEntity_TypeInfo);
    byte_42AE205 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B52A5C(list, v4);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v3;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_21;
    v4 = UserServantCommandCodeEntity_TypeInfo;
    v9 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (UserServantCommandCodeEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    items = list[2].fields.items;
    if ( !items )
      goto LABEL_21;
    monitor = items[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v12 = 0LL;
      v13 = (int)monitor;
      while ( 1 )
      {
        v4 = (UserServantCommandCodeEntity_c *)*((_QWORD *)&items[2].klass + v12);
        if ( (__int64)v4 >= 1 )
        {
          if ( !v3 )
            goto LABEL_21;
          System_Collections_Generic_List_long___Add(
            v3,
            (int64_t)v4,
            (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
        }
        if ( (__int64)++v12 >= v13 )
          break;
        if ( v12 >= LODWORD(items[1].monitor) )
        {
          v15 = sub_B52A88(list);
          sub_B52A28(v15, 0LL);
        }
      }
    }
    if ( ++v8 >= v7 )
      return v3;
  }
  v16 = (UserServantCommandCodeMaster_o *)sub_B52D50(list);
  return (System_Collections_Generic_List_long__o *)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v16, v17);
}


System_Collections_Generic_Dictionary_long__long__o *__fastcall UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__long__o *v3; // x20
  int64_t v4; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 v9; // x9
  __int128 v10; // q0
  __int64 v11; // x28
  __int64 v12; // x8
  int64_t v13; // x23
  unsigned __int64 v14; // x24
  signed __int64 v15; // x25
  System_Collections_Generic_Dictionary_long__long__o *result; // x0
  __int64 v17; // x0
  UserServantCommandCodeMaster_o *v18; // x0
  System_Int64_array **v19; // x1
  int64_t v20; // x2
  const MethodInfo *v21; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-70h]

  if ( (byte_42AE206 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__long__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__long___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_long__long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserServantCommandCodeEntity_TypeInfo);
    byte_42AE206 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__long__o *)sub_B52A54(System_Collections_Generic_Dictionary_long__long__TypeInfo);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v3,
    (const MethodInfo_2F4DC28 *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
LABEL_24:
    sub_B52A5C(list, v4);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v3;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v8,
                      (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_24;
    v9 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v9
      || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v9 - 8) != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    v10 = *(_OWORD *)(list + 64);
    v11 = *(_QWORD *)(list + 80);
    *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(list + 48);
    *(_OWORD *)&v23.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v22 = v23;
    list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v22, 0LL);
    if ( !v11 )
      goto LABEL_24;
    v12 = *(_QWORD *)(v11 + 24);
    if ( (int)v12 >= 1 )
    {
      v13 = list;
      v14 = 0LL;
      v15 = (int)v12;
      while ( 1 )
      {
        v4 = *(_QWORD *)(v11 + 32 + 8 * v14);
        if ( v4 >= 1 )
        {
          if ( !v3 )
            goto LABEL_24;
          System_Collections_Generic_Dictionary_long__long___Add(
            v3,
            v4,
            v13,
            (const MethodInfo_2F4E7D8 *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
        }
        if ( (__int64)++v14 >= v15 )
          break;
        if ( v14 >= *(unsigned int *)(v11 + 24) )
        {
          v17 = sub_B52A88(list);
          sub_B52A28(v17, 0LL);
        }
      }
    }
    if ( ++v8 >= v7 )
      return v3;
  }
  v18 = (UserServantCommandCodeMaster_o *)sub_B52D50(list);
  UserServantCommandCodeMaster__getAttachList(v18, v19, v20, v21);
  return result;
}


bool __fastcall UserServantCommandCodeMaster__IsAttach(
        UserServantCommandCodeMaster_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_long__o *v7; // x0
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v10; // x9
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  int namespaze; // w9
  int v13; // w10
  UserServantEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  v3 = userCommandCodeId;
  if ( (byte_42AE20A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&UserServantCommandCodeEntity_TypeInfo);
    byte_42AE20A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_B52A5C(list, userCommandCodeId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v8,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      userCommandCodeId = (int64_t)UserServantCommandCodeEntity_TypeInfo;
      v10 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (UserServantCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v10 - 1] != UserServantCommandCodeEntity_TypeInfo )
      {
        v15 = (UserServantEntity_o *)sub_B52D50(Item);
        return UserServantEntity__CreatePrimaryKey(v15, v16);
      }
      klass = Item[5].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
          break;
      }
    }
LABEL_15:
    if ( ++v8 >= Count )
      return 0;
  }
  v13 = 0;
  while ( *((_QWORD *)&klass->_1.byval_arg.data + v13) != v3 )
  {
    if ( ++v13 >= namespaze )
      goto LABEL_15;
  }
  return 1;
}


bool __fastcall UserServantCommandCodeMaster__TryGetEntity(
        UserServantCommandCodeMaster_o *this,
        UserServantCommandCodeEntity_o **entity,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AE203 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
    byte_42AE203 = 1;
  }
  PK = UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
}


void __fastcall UserServantCommandCodeMaster__getAttachList(
        UserServantCommandCodeMaster_o *this,
        System_Int64_array **userCommandCodeIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_long__o *v9; // x23
  int32_t i; // w24
  UserServantCommandCodeEntity_o *v11; // x25
  __int64 v12; // x9
  __int128 v13; // q0
  const MethodInfo *v14; // x2
  System_Int64_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-70h]

  if ( (byte_42AE207 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserServantCommandCodeEntity_TypeInfo);
    byte_42AE207 = 1;
  }
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B52A5C(list, userCommandCodeIdList);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    for ( i = 0; i < Count; ++i )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_19;
      list = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        i,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = (UserServantCommandCodeEntity_o *)list;
        v12 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v12
          || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v12 - 8) != UserServantCommandCodeEntity_TypeInfo )
        {
          list = sub_B52D50(list);
          goto LABEL_19;
        }
        v13 = *(_OWORD *)(list + 32);
        *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v23.fields.fakeValue = v13;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v22 = v23;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v22, 0LL);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v11, v9, v14);
      }
    }
  }
  if ( !v9 )
    goto LABEL_19;
  v15 = System_Collections_Generic_List_long___ToArray(
          v9,
          (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v15;
  sub_B52920(
    (BattleServantConfConponent_o *)userCommandCodeIdList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


System_Int32_array *__fastcall UserServantCommandCodeMaster__getCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v9; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w22
  BalanceConfig_c *v12; // x0
  System_Int32_array *v13; // x20
  int32_t SvtCommandCardMax; // w9
  unsigned __int64 v15; // x23
  signed __int64 v16; // x24
  struct System_Int64_array *v17; // x8
  int64_t v18; // x2
  __int64 v19; // x21
  __int64 v20; // x22
  __int64 v22; // x0
  UserServantEntity_o *v23; // [xsp+8h] [xbp-58h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42AE208 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE208 = 1;
  }
  entity = 0LL;
  v23 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v9);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
    goto LABEL_36;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_36;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0LL;
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)sub_B5299C(int___TypeInfo, (unsigned int)v12->static_fields->SvtCommandCardMax);
  v13 = (System_Int32_array *)Instance;
  SvtCommandCardMax = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  if ( SvtCommandCardMax >= max_length )
    goto LABEL_18;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SvtCommandCardMax = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  max_length = SvtCommandCardMax;
  if ( SvtCommandCardMax >= 1 )
  {
LABEL_18:
    v15 = 0LL;
    v16 = max_length;
    while ( entity )
    {
      v17 = entity->fields.userCommandCodeIds;
      if ( !v17 )
        break;
      if ( v15 >= v17->max_length )
        goto LABEL_37;
      v18 = v17->m_Items[v15];
      if ( v18 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      &v23,
                                      v18,
                                      (const MethodInfo_23E255C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v23 )
            break;
          v20 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
          v19 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v25.fields.currentCryptoKey = v20;
          *(_QWORD *)&v25.fields.fakeValue = v19;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v25, 0LL);
          if ( !v13 )
            break;
          if ( v15 >= v13->max_length )
          {
LABEL_37:
            v22 = sub_B52A88(Instance);
            sub_B52A28(v22, 0LL);
          }
          v13->m_Items[v15 + 1] = (int)Instance;
        }
      }
      if ( (__int64)++v15 >= v16 )
        return v13;
    }
LABEL_36:
    sub_B52A5C(Instance, v7);
  }
  return v13;
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int64_t v7; // x1
  const MethodInfo *v8; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w20
  System_Collections_Generic_List_long__o *v11; // x19
  int32_t monitor; // w8
  unsigned __int64 v13; // x21
  struct System_Int64_array *v14; // x8
  __int64 v16; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AE209 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE209 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v8);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
    goto LABEL_29;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_29;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0LL;
  v11 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  }
  monitor = (int32_t)Instance[1].fields.saveNameList[1].monitor;
  if ( monitor >= max_length )
    goto LABEL_18;
  if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    monitor = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  max_length = monitor;
  if ( monitor >= 1 )
  {
LABEL_18:
    v13 = 0LL;
    while ( entity )
    {
      v14 = entity->fields.userCommandCodeIds;
      if ( !v14 )
        break;
      if ( v13 >= v14->max_length )
      {
        v16 = sub_B52A88(Instance);
        sub_B52A28(v16, 0LL);
      }
      v7 = v14->m_Items[v13];
      if ( v7 >= 1 )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_long___Add(
          v11,
          v7,
          (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( (__int64)++v13 >= max_length )
        return v11;
    }
LABEL_29:
    sub_B52A5C(Instance, v7);
  }
  return v11;
}