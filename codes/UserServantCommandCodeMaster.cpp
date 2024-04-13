void __fastcall UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6B6C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6B6C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    253,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *__fastcall UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E6B6A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__,
      userId,
      svtId,
      method);
    byte_42E6B6A = 1;
  }
  PK = UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23FB260 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__GetEquipedCommandCodeList(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_long__o *v20; // x20
  UserServantCommandCodeEntity_c *v21; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v24; // w21
  int32_t v25; // w22
  __int64 v26; // x9
  struct System_Collections_Generic_IList_T__o *items; // x26
  void *monitor; // x8
  unsigned __int64 v29; // x27
  signed __int64 v30; // x28
  __int64 v32; // x0
  UserServantCommandCodeMaster_o *v33; // x0
  const MethodInfo *v34; // x1

  if ( (byte_42E6B6D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UserServantCommandCodeEntity_TypeInfo, v17, v18, v19);
    byte_42E6B6D = 1;
  }
  v20 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B5D69C(list, v21);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v20;
  v24 = Count;
  v25 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v25,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_21;
    v21 = UserServantCommandCodeEntity_TypeInfo;
    v26 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (UserServantCommandCodeEntity_c *)list->klass->_2.typeHierarchy[v26 - 1] != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    items = list[2].fields.items;
    if ( !items )
      goto LABEL_21;
    monitor = items[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v29 = 0LL;
      v30 = (int)monitor;
      while ( 1 )
      {
        v21 = (UserServantCommandCodeEntity_c *)*((_QWORD *)&items[2].klass + v29);
        if ( (__int64)v21 >= 1 )
        {
          if ( !v20 )
            goto LABEL_21;
          System_Collections_Generic_List_long___Add(
            v20,
            (int64_t)v21,
            (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
        }
        if ( (__int64)++v29 >= v30 )
          break;
        if ( v29 >= LODWORD(items[1].monitor) )
        {
          v32 = sub_B5D6C8(list);
          sub_B5D668(v32, 0LL);
        }
      }
    }
    if ( ++v25 >= v24 )
      return v20;
  }
  v33 = (UserServantCommandCodeMaster_o *)sub_B5D990(list);
  return (System_Collections_Generic_List_long__o *)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v33, v34);
}


System_Collections_Generic_Dictionary_long__long__o *__fastcall UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_Dictionary_long__long__o *v23; // x20
  int64_t v24; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v27; // w21
  int32_t v28; // w22
  __int64 v29; // x9
  __int128 v30; // q0
  __int64 v31; // x28
  __int64 v32; // x8
  int64_t v33; // x23
  unsigned __int64 v34; // x24
  signed __int64 v35; // x25
  System_Collections_Generic_Dictionary_long__long__o *result; // x0
  __int64 v37; // x0
  UserServantCommandCodeMaster_o *v38; // x0
  System_Int64_array **v39; // x1
  int64_t v40; // x2
  const MethodInfo *v41; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-70h]

  if ( (byte_42E6B6E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__long__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__long___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_long__long__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UserServantCommandCodeEntity_TypeInfo, v20, v21, v22);
    byte_42E6B6E = 1;
  }
  v23 = (System_Collections_Generic_Dictionary_long__long__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__long__TypeInfo);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v23,
    (const MethodInfo_2F57FE4 *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
LABEL_24:
    sub_B5D69C(list, v24);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v23;
  v27 = Count;
  v28 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v28,
                      (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_24;
    v29 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v29
      || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v29 - 8) != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    v30 = *(_OWORD *)(list + 64);
    v31 = *(_QWORD *)(list + 80);
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(list + 48);
    *(_OWORD *)&v43.fields.fakeValue = v30;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v42 = v43;
    list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v42, 0LL);
    if ( !v31 )
      goto LABEL_24;
    v32 = *(_QWORD *)(v31 + 24);
    if ( (int)v32 >= 1 )
    {
      v33 = list;
      v34 = 0LL;
      v35 = (int)v32;
      while ( 1 )
      {
        v24 = *(_QWORD *)(v31 + 32 + 8 * v34);
        if ( v24 >= 1 )
        {
          if ( !v23 )
            goto LABEL_24;
          System_Collections_Generic_Dictionary_long__long___Add(
            v23,
            v24,
            v33,
            (const MethodInfo_2F58B94 *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
        }
        if ( (__int64)++v34 >= v35 )
          break;
        if ( v34 >= *(unsigned int *)(v31 + 24) )
        {
          v37 = sub_B5D6C8(list);
          sub_B5D668(v37, 0LL);
        }
      }
    }
    if ( ++v28 >= v27 )
      return v23;
  }
  v38 = (UserServantCommandCodeMaster_o *)sub_B5D990(list);
  UserServantCommandCodeMaster__getAttachList(v38, v39, v40, v41);
  return result;
}


bool __fastcall UserServantCommandCodeMaster__IsAttach(
        UserServantCommandCodeMaster_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_long__o *v20; // x0
  int32_t v21; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v23; // x9
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  int namespaze; // w9
  int v26; // w10
  UserServantEntity_o *v28; // x0
  const MethodInfo *v29; // x1

  v4 = userCommandCodeId;
  if ( (byte_42E6B72 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userCommandCodeId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UserServantCommandCodeEntity_TypeInfo, v15, v16, v17);
    byte_42E6B72 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_B5D69C(list, userCommandCodeId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count < 1 )
    return 0;
  v21 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v21,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      userCommandCodeId = (int64_t)UserServantCommandCodeEntity_TypeInfo;
      v23 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (UserServantCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] != UserServantCommandCodeEntity_TypeInfo )
      {
        v28 = (UserServantEntity_o *)sub_B5D990(Item);
        return UserServantEntity__CreatePrimaryKey(v28, v29);
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
    if ( ++v21 >= Count )
      return 0;
  }
  v26 = 0;
  while ( *((_QWORD *)&klass->_1.byval_arg.data + v26) != v4 )
  {
    if ( ++v26 >= namespaze )
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

  if ( (byte_42E6B6B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      svtId);
    byte_42E6B6B = 1;
  }
  PK = UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
}


void __fastcall UserServantCommandCodeMaster__getAttachList(
        UserServantCommandCodeMaster_o *this,
        System_Int64_array **userCommandCodeIdList,
        int64_t userId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_long__o *v27; // x23
  int32_t i; // w24
  UserServantCommandCodeEntity_o *v29; // x25
  __int64 v30; // x9
  __int128 v31; // q0
  const MethodInfo *v32; // x2
  System_Int64_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-70h]

  if ( (byte_42E6B6F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)userCommandCodeIdList,
      userId,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UserServantCommandCodeEntity_TypeInfo, v22, v23, v24);
    byte_42E6B6F = 1;
  }
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B5D69C(list, userCommandCodeIdList);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v27 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
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
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v29 = (UserServantCommandCodeEntity_o *)list;
        v30 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v30
          || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v30 - 8) != UserServantCommandCodeEntity_TypeInfo )
        {
          list = sub_B5D990(list);
          goto LABEL_19;
        }
        v31 = *(_OWORD *)(list + 32);
        *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v41.fields.fakeValue = v31;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v40 = v41;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v40, 0LL);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v29, v27, v32);
      }
    }
  }
  if ( !v27 )
    goto LABEL_19;
  v33 = System_Collections_Generic_List_long___ToArray(
          v27,
          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v33;
  sub_B5D560(
    (BattleServantConfConponent_o *)userCommandCodeIdList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


System_Int32_array *__fastcall UserServantCommandCodeMaster__getCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v27; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w22
  BalanceConfig_c *v30; // x0
  System_Int32_array *v31; // x20
  int32_t SvtCommandCardMax; // w9
  unsigned __int64 v33; // x23
  signed __int64 v34; // x24
  struct System_Int64_array *v35; // x8
  int64_t v36; // x2
  __int64 v37; // x21
  __int64 v38; // x22
  __int64 v40; // x0
  UserServantEntity_o *v41; // [xsp+8h] [xbp-58h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42E6B70 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userId, svtId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&int___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E6B70 = 1;
  }
  entity = 0LL;
  v41 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v27);
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
  v30 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)sub_B5D5DC(int___TypeInfo, (unsigned int)v30->static_fields->SvtCommandCardMax);
  v31 = (System_Int32_array *)Instance;
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
    v33 = 0LL;
    v34 = max_length;
    while ( entity )
    {
      v35 = entity->fields.userCommandCodeIds;
      if ( !v35 )
        break;
      if ( v33 >= v35->max_length )
        goto LABEL_37;
      v36 = v35->m_Items[v33];
      if ( v36 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      &v41,
                                      v36,
                                      (const MethodInfo_23FB094 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v41 )
            break;
          v38 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
          v37 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v43.fields.currentCryptoKey = v38;
          *(_QWORD *)&v43.fields.fakeValue = v37;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
          if ( !v31 )
            break;
          if ( v33 >= v31->max_length )
          {
LABEL_37:
            v40 = sub_B5D6C8(Instance);
            sub_B5D668(v40, 0LL);
          }
          v31->m_Items[v33 + 1] = (int)Instance;
        }
      }
      if ( (__int64)++v33 >= v34 )
        return v31;
    }
LABEL_36:
    sub_B5D69C(Instance, v25);
  }
  return v31;
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  DataManager_o *Instance; // x0
  int64_t v25; // x1
  const MethodInfo *v26; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w20
  System_Collections_Generic_List_long__o *v29; // x19
  int32_t monitor; // w8
  unsigned __int64 v31; // x21
  struct System_Int64_array *v32; // x8
  __int64 v34; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E6B71 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userId, svtId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E6B71 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v26);
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
  v29 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
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
    v31 = 0LL;
    while ( entity )
    {
      v32 = entity->fields.userCommandCodeIds;
      if ( !v32 )
        break;
      if ( v31 >= v32->max_length )
      {
        v34 = sub_B5D6C8(Instance);
        sub_B5D668(v34, 0LL);
      }
      v25 = v32->m_Items[v31];
      if ( v25 >= 1 )
      {
        if ( !v29 )
          break;
        System_Collections_Generic_List_long___Add(
          v29,
          v25,
          (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( (__int64)++v31 >= max_length )
        return v29;
    }
LABEL_29:
    sub_B5D69C(Instance, v25);
  }
  return v29;
}