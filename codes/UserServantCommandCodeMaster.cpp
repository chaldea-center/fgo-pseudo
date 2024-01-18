void __fastcall UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185EB7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__,
      method);
    byte_4185EB7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    252,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *__fastcall UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4185EB5 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__,
      userId);
    byte_4185EB5 = 1;
  }
  PK = UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_24E4520 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__GetEquipedCommandCodeList(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *v8; // x20
  UserServantCommandCodeEntity_c *v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t v13; // w22
  __int64 v14; // x9
  struct System_Collections_Generic_IList_T__o *items; // x26
  void *monitor; // x8
  unsigned __int64 v17; // x27
  signed __int64 v18; // x28
  __int64 v20; // x0
  UserServantCommandCodeMaster_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_4185EB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v6);
    sub_B2C35C(&UserServantCommandCodeEntity_TypeInfo, v7);
    byte_4185EB8 = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B2C434(list, v9);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v8;
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
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_21;
    v9 = UserServantCommandCodeEntity_TypeInfo;
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
        v9 = (UserServantCommandCodeEntity_c *)*((_QWORD *)&items[2].klass + v17);
        if ( (__int64)v9 >= 1 )
        {
          if ( !v8 )
            goto LABEL_21;
          System_Collections_Generic_List_long___Add(
            v8,
            (int64_t)v9,
            (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        }
        if ( (__int64)++v17 >= v18 )
          break;
        if ( v17 >= LODWORD(items[1].monitor) )
        {
          v20 = sub_B2C460(list);
          sub_B2C400(v20, 0LL);
        }
      }
    }
    if ( ++v13 >= v12 )
      return v8;
  }
  v21 = (UserServantCommandCodeMaster_o *)sub_B2C728(list);
  return (System_Collections_Generic_List_long__o *)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v21, v22);
}


System_Collections_Generic_Dictionary_long__long__o *__fastcall UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_long__long__o *v9; // x20
  int64_t v10; // x1
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
  System_Collections_Generic_Dictionary_long__long__o *result; // x0
  __int64 v23; // x0
  UserServantCommandCodeMaster_o *v24; // x0
  System_Int64_array **v25; // x1
  int64_t v26; // x2
  const MethodInfo *v27; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-70h]

  if ( (byte_4185EB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__long__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__long___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_long__long__TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&UserServantCommandCodeEntity_TypeInfo, v8);
    byte_4185EB9 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_long__long__o *)sub_B2C42C(System_Collections_Generic_Dictionary_long__long__TypeInfo);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v9,
    (const MethodInfo_2E54A0C *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
LABEL_24:
    sub_B2C434(list, v10);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v9;
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
                      (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)(list + 48);
    *(_OWORD *)&v29.fields.fakeValue = v16;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v28 = v29;
    list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v28, 0LL);
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
        v10 = *(_QWORD *)(v17 + 32 + 8 * v20);
        if ( v10 >= 1 )
        {
          if ( !v9 )
            goto LABEL_24;
          System_Collections_Generic_Dictionary_long__long___Add(
            v9,
            v10,
            v19,
            (const MethodInfo_2E555BC *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
        }
        if ( (__int64)++v20 >= v21 )
          break;
        if ( v20 >= *(unsigned int *)(v17 + 24) )
        {
          v23 = sub_B2C460(list);
          sub_B2C400(v23, 0LL);
        }
      }
    }
    if ( ++v14 >= v13 )
      return v9;
  }
  v24 = (UserServantCommandCodeMaster_o *)sub_B2C728(list);
  UserServantCommandCodeMaster__getAttachList(v24, v25, v26, v27);
  return result;
}


bool __fastcall UserServantCommandCodeMaster__IsAttach(
        UserServantCommandCodeMaster_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_long__o *v11; // x0
  int32_t v12; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v14; // x9
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  int namespaze; // w9
  int v17; // w10
  UserServantEntity_o *v19; // x0
  const MethodInfo *v20; // x1

  v3 = userCommandCodeId;
  if ( (byte_4185EBD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userCommandCodeId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B2C35C(&UserServantCommandCodeEntity_TypeInfo, v8);
    byte_4185EBD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_B2C434(list, userCommandCodeId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v11 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v12,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      userCommandCodeId = (int64_t)UserServantCommandCodeEntity_TypeInfo;
      v14 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (UserServantCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] != UserServantCommandCodeEntity_TypeInfo )
      {
        v19 = (UserServantEntity_o *)sub_B2C728(Item);
        return UserServantEntity__CreatePrimaryKey(v19, v20);
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
    if ( ++v12 >= Count )
      return 0;
  }
  v17 = 0;
  while ( *((_QWORD *)&klass->_1.byval_arg.data + v17) != v3 )
  {
    if ( ++v17 >= namespaze )
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

  if ( (byte_4185EB6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__,
      entity);
    byte_4185EB6 = 1;
  }
  PK = UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_long__o *v15; // x23
  int32_t i; // w24
  UserServantCommandCodeEntity_o *v17; // x25
  __int64 v18; // x9
  __int128 v19; // q0
  const MethodInfo *v20; // x2
  System_Int64_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-70h]

  if ( (byte_4185EBA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userCommandCodeIdList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B2C35C(&UserServantCommandCodeEntity_TypeInfo, v12);
    byte_4185EBA = 1;
  }
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B2C434(list, userCommandCodeIdList);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
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
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = (UserServantCommandCodeEntity_o *)list;
        v18 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v18
          || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v18 - 8) != UserServantCommandCodeEntity_TypeInfo )
        {
          list = sub_B2C728(list);
          goto LABEL_19;
        }
        v19 = *(_OWORD *)(list + 32);
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v29.fields.fakeValue = v19;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v28 = v29;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v28, 0LL);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v17, v15, v20);
      }
    }
  }
  if ( !v15 )
    goto LABEL_19;
  v21 = System_Collections_Generic_List_long___ToArray(
          v15,
          (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)userCommandCodeIdList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  __int64 v13; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v15; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w22
  BalanceConfig_c *v18; // x0
  System_Int32_array *v19; // x20
  int32_t SvtCommandCardMax; // w9
  unsigned __int64 v21; // x23
  signed __int64 v22; // x24
  struct System_Int64_array *v23; // x8
  int64_t v24; // x2
  __int64 v25; // x21
  __int64 v26; // x22
  __int64 v28; // x0
  UserServantEntity_o *v29; // [xsp+8h] [xbp-58h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4185EBB & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v8);
    sub_B2C35C(&int___TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4185EBB = 1;
  }
  entity = 0LL;
  v29 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v15);
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
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)sub_B2C374(int___TypeInfo, (unsigned int)v18->static_fields->SvtCommandCardMax);
  v19 = (System_Int32_array *)Instance;
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
    v21 = 0LL;
    v22 = max_length;
    while ( entity )
    {
      v23 = entity->fields.userCommandCodeIds;
      if ( !v23 )
        break;
      if ( v21 >= v23->max_length )
        goto LABEL_37;
      v24 = v23->m_Items[v21];
      if ( v24 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      &v29,
                                      v24,
                                      (const MethodInfo_24E4354 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v29 )
            break;
          v26 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
          v25 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v31.fields.currentCryptoKey = v26;
          *(_QWORD *)&v31.fields.fakeValue = v25;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v31, 0LL);
          if ( !v19 )
            break;
          if ( v21 >= v19->max_length )
          {
LABEL_37:
            v28 = sub_B2C460(Instance);
            sub_B2C400(v28, 0LL);
          }
          v19->m_Items[v21 + 1] = (int)Instance;
        }
      }
      if ( (__int64)++v21 >= v22 )
        return v19;
    }
LABEL_36:
    sub_B2C434(Instance, v13);
  }
  return v19;
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
  int64_t v13; // x1
  const MethodInfo *v14; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w20
  System_Collections_Generic_List_long__o *v17; // x19
  int32_t monitor; // w8
  unsigned __int64 v19; // x21
  struct System_Int64_array *v20; // x8
  __int64 v22; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4185EBC & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4185EBC = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v14);
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
  v17 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
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
    v19 = 0LL;
    while ( entity )
    {
      v20 = entity->fields.userCommandCodeIds;
      if ( !v20 )
        break;
      if ( v19 >= v20->max_length )
      {
        v22 = sub_B2C460(Instance);
        sub_B2C400(v22, 0LL);
      }
      v13 = v20->m_Items[v19];
      if ( v13 >= 1 )
      {
        if ( !v17 )
          break;
        System_Collections_Generic_List_long___Add(
          v17,
          v13,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( (__int64)++v19 >= max_length )
        return v17;
    }
LABEL_29:
    sub_B2C434(Instance, v13);
  }
  return v17;
}