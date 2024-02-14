void __fastcall UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4212CBE & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__,
      method);
    byte_4212CBE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    252,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *__fastcall UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4212CBC & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__,
      userId);
    byte_4212CBC = 1;
  }
  PK = UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_266A024 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__GetEquipedCommandCodeList(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_long__o *v9; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t v13; // w22
  __int64 v14; // x9
  struct System_Collections_Generic_IList_T__o *items; // x26
  void *monitor; // x8
  unsigned __int64 v17; // x27
  signed __int64 v18; // x28
  int64_t v19; // x1
  __int64 v21; // x0
  UserServantCommandCodeMaster_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_4212CBF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B0D8A4(&UserServantCommandCodeEntity_TypeInfo, v8);
    byte_4212CBF = 1;
  }
  v9 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, method, v2);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v9;
  v12 = Count;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v13,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_21;
    v14 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (UserServantCommandCodeEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    items = list[2].fields.items;
    if ( !items )
      goto LABEL_21;
    monitor = items[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v17 = 0LL;
      v18 = (int)monitor;
      while ( 1 )
      {
        v19 = *((_QWORD *)&items[2].klass + v17);
        if ( v19 >= 1 )
        {
          if ( !v9 )
            goto LABEL_21;
          System_Collections_Generic_List_long___Add(
            v9,
            v19,
            (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
        }
        if ( (__int64)++v17 >= v18 )
          break;
        if ( v17 >= LODWORD(items[1].monitor) )
        {
          v21 = sub_B0D9A8(list);
          sub_B0D948(v21, 0LL);
        }
      }
    }
    if ( ++v13 >= v12 )
      return v9;
  }
  v22 = (UserServantCommandCodeMaster_o *)sub_B0DC70(list);
  return (System_Collections_Generic_List_long__o *)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v22, v23);
}


System_Collections_Generic_Dictionary_long__long__o *__fastcall UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_long__long__o *v10; // x20
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  __int64 v15; // x9
  __int128 v16; // q0
  __int64 v17; // x28
  __int64 v18; // x8
  int64_t v19; // x23
  unsigned __int64 v20; // x24
  signed __int64 v21; // x25
  int64_t v22; // x1
  System_Collections_Generic_Dictionary_long__long__o *result; // x0
  __int64 v24; // x0
  UserServantCommandCodeMaster_o *v25; // x0
  System_Int64_array **v26; // x1
  int64_t v27; // x2
  const MethodInfo *v28; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-70h]

  if ( (byte_4212CC0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__long__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__long___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_long__long__TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&UserServantCommandCodeEntity_TypeInfo, v9);
    byte_4212CC0 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_long__long__o *)sub_B0D974(
                                                                 System_Collections_Generic_Dictionary_long__long__TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v10,
    (const MethodInfo_2EB5348 *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
LABEL_24:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v10;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v14,
                      (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_24;
    v15 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v15
      || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v15 - 8) != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    v16 = *(_OWORD *)(list + 64);
    v17 = *(_QWORD *)(list + 80);
    *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)(list + 48);
    *(_OWORD *)&v30.fields.fakeValue = v16;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v29 = v30;
    list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v29, 0LL);
    if ( !v17 )
      goto LABEL_24;
    v18 = *(_QWORD *)(v17 + 24);
    if ( (int)v18 >= 1 )
    {
      v19 = list;
      v20 = 0LL;
      v21 = (int)v18;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v17 + 32 + 8 * v20);
        if ( v22 >= 1 )
        {
          if ( !v10 )
            goto LABEL_24;
          System_Collections_Generic_Dictionary_long__long___Add(
            v10,
            v22,
            v19,
            (const MethodInfo_2EB5EF8 *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
        }
        if ( (__int64)++v20 >= v21 )
          break;
        if ( v20 >= *(unsigned int *)(v17 + 24) )
        {
          v24 = sub_B0D9A8(list);
          sub_B0D948(v24, 0LL);
        }
      }
    }
    if ( ++v14 >= v13 )
      return v10;
  }
  v25 = (UserServantCommandCodeMaster_o *)sub_B0DC70(list);
  UserServantCommandCodeMaster__getAttachList(v25, v26, v27, v28);
  return result;
}


bool __fastcall UserServantCommandCodeMaster__IsAttach(
        UserServantCommandCodeMaster_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_long__o *v13; // x0
  int32_t v14; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x9
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  int namespaze; // w9
  int v19; // w10
  UserServantEntity_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_4212CC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userCommandCodeId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B0D8A4(&UserServantCommandCodeEntity_TypeInfo, v8);
    byte_4212CC4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v11, v12);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v14,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v16 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (UserServantCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] != UserServantCommandCodeEntity_TypeInfo )
      {
        v21 = (UserServantEntity_o *)sub_B0DC70(Item);
        return UserServantEntity__CreatePrimaryKey(v21, v22);
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
    if ( ++v14 >= Count )
      return 0;
  }
  v19 = 0;
  while ( *((_QWORD *)&klass->_1.byval_arg.data + v19) != userCommandCodeId )
  {
    if ( ++v19 >= namespaze )
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

  if ( (byte_4212CBD & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__,
      entity);
    byte_4212CBD = 1;
  }
  PK = UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
}


void __fastcall UserServantCommandCodeMaster__getAttachList(
        UserServantCommandCodeMaster_o *this,
        System_Int64_array **userCommandCodeIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 list; // x0
  int32_t Count; // w22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x23
  int32_t i; // w24
  UserServantCommandCodeEntity_o *v19; // x25
  __int64 v20; // x9
  __int128 v21; // q0
  const MethodInfo *v22; // x2
  System_Int64_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-70h]

  if ( (byte_4212CC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userCommandCodeIdList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B0D8A4(&UserServantCommandCodeEntity_TypeInfo, v12);
    byte_4212CC1 = 1;
  }
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
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
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = (UserServantCommandCodeEntity_o *)list;
        v20 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v20
          || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v20 - 8) != UserServantCommandCodeEntity_TypeInfo )
        {
          list = sub_B0DC70(list);
          goto LABEL_19;
        }
        v21 = *(_OWORD *)(list + 32);
        *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v31.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v30 = v31;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v30, 0LL);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v19, v17, v22);
      }
    }
  }
  if ( !v17 )
    goto LABEL_19;
  v23 = System_Collections_Generic_List_long___ToArray(
          v17,
          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)userCommandCodeIdList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


System_Int32_array *__fastcall UserServantCommandCodeMaster__getCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v14; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w22
  BalanceConfig_c *v17; // x0
  System_Int32_array *v18; // x20
  int32_t SvtCommandCardMax; // w9
  unsigned __int64 v20; // x23
  signed __int64 v21; // x24
  struct System_Int64_array *v22; // x8
  int64_t v23; // x2
  __int64 v24; // x21
  __int64 v25; // x22
  __int64 v27; // x0
  UserServantEntity_o *v28; // [xsp+8h] [xbp-58h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4212CC2 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, userId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v8);
    sub_B0D8A4(&int___TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4212CC2 = 1;
  }
  entity = 0LL;
  v28 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v14);
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
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)sub_B0D8BC(int___TypeInfo, (unsigned int)v17->static_fields->SvtCommandCardMax);
  v18 = (System_Int32_array *)Instance;
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
    v20 = 0LL;
    v21 = max_length;
    while ( entity )
    {
      v22 = entity->fields.userCommandCodeIds;
      if ( !v22 )
        break;
      if ( v20 >= v22->max_length )
        goto LABEL_37;
      v23 = v22->m_Items[v20];
      if ( v23 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      &v28,
                                      v23,
                                      (const MethodInfo_2669E58 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v28 )
            break;
          v25 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
          v24 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v30.fields.currentCryptoKey = v25;
          *(_QWORD *)&v30.fields.fakeValue = v24;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL);
          if ( !v18 )
            break;
          if ( v20 >= v18->max_length )
          {
LABEL_37:
            v27 = sub_B0D9A8(Instance);
            sub_B0D948(v27, 0LL);
          }
          v18->m_Items[v20 + 1] = (int)Instance;
        }
      }
      if ( (__int64)++v20 >= v21 )
        return v18;
    }
LABEL_36:
    sub_B0D97C(Instance);
  }
  return v18;
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x4
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w20
  System_Collections_Generic_List_long__o *v18; // x19
  int32_t monitor; // w8
  unsigned __int64 v20; // x21
  struct System_Int64_array *v21; // x8
  int64_t v22; // x1
  __int64 v24; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4212CC3 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, userId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4212CC3 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v13);
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
  v18 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v14, v15);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
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
    v20 = 0LL;
    while ( entity )
    {
      v21 = entity->fields.userCommandCodeIds;
      if ( !v21 )
        break;
      if ( v20 >= v21->max_length )
      {
        v24 = sub_B0D9A8(Instance);
        sub_B0D948(v24, 0LL);
      }
      v22 = v21->m_Items[v20];
      if ( v22 >= 1 )
      {
        if ( !v18 )
          break;
        System_Collections_Generic_List_long___Add(
          v18,
          v22,
          (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( (__int64)++v20 >= max_length )
        return v18;
    }
LABEL_29:
    sub_B0D97C(Instance);
  }
  return v18;
}