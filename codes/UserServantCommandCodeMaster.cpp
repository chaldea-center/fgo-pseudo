void __fastcall UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F819F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__,
      method);
    byte_40F819F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    252,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *__fastcall UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F819D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__,
      userId);
    byte_40F819D = 1;
  }
  PK = UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__GetEquipedCommandCodeList(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v18; // x2
  __int64 v19; // x9
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  const char *namespaze; // x8
  unsigned __int64 v22; // x27
  signed __int64 v23; // x28
  int64_t v24; // x1
  UserServantCommandCodeMaster_o *v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_40F81A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_B16FFC(&UserServantCommandCodeEntity_TypeInfo, v10);
    byte_40F81A0 = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v11;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v16 )
      goto LABEL_21;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v16,
             v15,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_21;
    v19 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (UserServantCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    klass = Item[5].klass;
    if ( !klass )
      goto LABEL_21;
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v22 = 0LL;
      v23 = (int)namespaze;
      while ( 1 )
      {
        v24 = *((_QWORD *)&klass->_1.byval_arg.data + v22);
        if ( v24 >= 1 )
        {
          if ( !v11 )
            goto LABEL_21;
          System_Collections_Generic_List_long___Add(
            v11,
            v24,
            (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
        }
        if ( (__int64)++v22 >= v23 )
          break;
        if ( v22 >= LODWORD(klass->_1.namespaze) )
        {
          sub_B17100(Item, v24, v18);
          sub_B170A0();
        }
      }
    }
    if ( ++v15 >= v14 )
      return v11;
  }
  v26 = (UserServantCommandCodeMaster_o *)sub_B173C8(Item);
  return (System_Collections_Generic_List_long__o *)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v26, v27);
}


System_Collections_Generic_Dictionary_long__long__o *__fastcall UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_long__long__o *v12; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w21
  int32_t v16; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v19; // x9
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v20; // q0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x28
  int64_t v22; // x0
  __int64 v23; // x2
  const char *namespaze; // x8
  int64_t v25; // x23
  unsigned __int64 v26; // x24
  signed __int64 v27; // x25
  int64_t v28; // x1
  System_Collections_Generic_Dictionary_long__long__o *result; // x0
  UserServantCommandCodeMaster_o *v30; // x0
  System_Int64_array **v31; // x1
  int64_t v32; // x2
  const MethodInfo *v33; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-70h]

  if ( (byte_40F81A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__long___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_long__long__TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&UserServantCommandCodeEntity_TypeInfo, v11);
    byte_40F81A1 = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_long__long__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_long__long__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3,
                                                                 v4);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v12,
    (const MethodInfo_2E0E2DC *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v12;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v17 )
      goto LABEL_24;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v17,
             v16,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_24;
    v19 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (UserServantCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    v20 = Item[4];
    klass = Item[5].klass;
    *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v35.fields.currentCryptoKey = Item[3];
    *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v35.fields.fakeValue = v20;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v34 = v35;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v34, 0LL);
    if ( !klass )
      goto LABEL_24;
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v25 = v22;
      v26 = 0LL;
      v27 = (int)namespaze;
      while ( 1 )
      {
        v28 = *((_QWORD *)&klass->_1.byval_arg.data + v26);
        if ( v28 >= 1 )
        {
          if ( !v12 )
            goto LABEL_24;
          System_Collections_Generic_Dictionary_long__long___Add(
            v12,
            v28,
            v25,
            (const MethodInfo_2E0EE8C *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
        }
        if ( (__int64)++v26 >= v27 )
          break;
        if ( v26 >= LODWORD(klass->_1.namespaze) )
        {
          sub_B17100(v22, v28, v23);
          sub_B170A0();
        }
      }
    }
    if ( ++v16 >= v15 )
      return v12;
  }
  v30 = (UserServantCommandCodeMaster_o *)sub_B173C8(Item);
  UserServantCommandCodeMaster__getAttachList(v30, v31, v32, v33);
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_long__o *v15; // x0
  int32_t v16; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v19; // x9
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  int namespaze; // w9
  int v22; // w10
  UserServantEntity_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_40F81A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userCommandCodeId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B16FFC(&UserServantCommandCodeEntity_TypeInfo, v8);
    byte_40F81A5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v11,
                                                     v12,
                                                     v13,
                                                     v14);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v17 )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v17,
             v16,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v19 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (UserServantCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] != UserServantCommandCodeEntity_TypeInfo )
      {
        v24 = (UserServantEntity_o *)sub_B173C8(Item);
        return UserServantEntity__CreatePrimaryKey(v24, v25);
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
    if ( ++v16 >= Count )
      return 0;
  }
  v22 = 0;
  while ( *((_QWORD *)&klass->_1.byval_arg.data + v22) != userCommandCodeId )
  {
    if ( ++v22 >= namespaze )
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

  if ( (byte_40F819E & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__,
      entity);
    byte_40F819E = 1;
  }
  PK = UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_long__o *v19; // x23
  int32_t i; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserServantCommandCodeEntity_o *v23; // x25
  __int64 v24; // x9
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v25; // q0
  const MethodInfo *v26; // x2
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-70h]

  if ( (byte_40F81A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userCommandCodeIdList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&UserServantCommandCodeEntity_TypeInfo, v12);
    byte_40F81A2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v15,
                                                     v16,
                                                     v17,
                                                     v18);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    for ( i = 0; i < Count; ++i )
    {
      v21 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v21 )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v21,
               i,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = (UserServantCommandCodeEntity_o *)Item;
        v24 = *(&UserServantCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v24
          || (UserServantCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] != UserServantCommandCodeEntity_TypeInfo )
        {
          sub_B173C8(Item);
          goto LABEL_19;
        }
        v25 = Item[2];
        *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v35.fields.currentCryptoKey = Item[1];
        *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v35.fields.fakeValue = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v35;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v34, 0LL) == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v23, v19, v26);
      }
    }
  }
  if ( !v19 )
    goto LABEL_19;
  v27 = System_Collections_Generic_List_long___ToArray(
          v19,
          (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)userCommandCodeIdList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  WebViewManager_o *v14; // x0
  UserServantCommandCodeMaster_o *v15; // x0
  const MethodInfo *v16; // x4
  __int64 v17; // x2
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w22
  BalanceConfig_c *v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  System_Int32_array *v24; // x20
  int32_t SvtCommandCardMax; // w9
  unsigned __int64 v26; // x23
  signed __int64 v27; // x24
  struct System_Int64_array *v28; // x8
  __int64 v29; // x21
  __int64 v30; // x22
  UserServantEntity_o *v32; // [xsp+8h] [xbp-58h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_40F81A3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v8);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F81A3 = 1;
  }
  entity = 0LL;
  v32 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v14 )
    goto LABEL_36;
  v15 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v14,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !v15 )
    goto LABEL_36;
  if ( !UserServantCommandCodeMaster__TryGetEntity(v15, &entity, userId, svtId, v16) )
    return 0LL;
  if ( !entity )
    goto LABEL_36;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_36;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0LL;
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  v21 = sub_B17014(int___TypeInfo, (unsigned int)v20->static_fields->SvtCommandCardMax, v17);
  v24 = (System_Int32_array *)v21;
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
    v26 = 0LL;
    v27 = max_length;
    while ( entity )
    {
      v28 = entity->fields.userCommandCodeIds;
      if ( !v28 )
        break;
      if ( v26 >= v28->max_length )
        goto LABEL_37;
      v23 = v28->m_Items[v26];
      if ( v23 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v21 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &v32,
                v23,
                (const MethodInfo_266F60C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
        if ( (v21 & 1) != 0 )
        {
          if ( !v32 )
            break;
          v30 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
          v29 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v34.fields.currentCryptoKey = v30;
          *(_QWORD *)&v34.fields.fakeValue = v29;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
          if ( !v24 )
            break;
          if ( v26 >= v24->max_length )
          {
LABEL_37:
            sub_B17100(v21, v22, v23);
            sub_B170A0();
          }
          v24->m_Items[v26 + 1] = v21;
        }
      }
      if ( (__int64)++v26 >= v27 )
        return v24;
    }
LABEL_36:
    sub_B170D4();
  }
  return v24;
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
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v13; // x0
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v15; // x4
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w20
  System_Collections_Generic_List_long__o *v22; // x19
  int64_t v23; // x1
  __int64 v24; // x2
  BalanceConfig_c *v25; // x0
  int32_t SvtCommandCardMax; // w8
  unsigned __int64 v27; // x21
  struct System_Int64_array *v28; // x8
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F81A4 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F81A4 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13 )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)v13,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !UserServantCommandCodeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, userId, svtId, v15) )
    return 0LL;
  if ( !entity )
    goto LABEL_29;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_29;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0LL;
  v22 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  SvtCommandCardMax = v25->static_fields->SvtCommandCardMax;
  if ( SvtCommandCardMax >= max_length )
    goto LABEL_18;
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    SvtCommandCardMax = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  max_length = SvtCommandCardMax;
  if ( SvtCommandCardMax >= 1 )
  {
LABEL_18:
    v27 = 0LL;
    while ( entity )
    {
      v28 = entity->fields.userCommandCodeIds;
      if ( !v28 )
        break;
      if ( v27 >= v28->max_length )
      {
        sub_B17100(v25, v23, v24);
        sub_B170A0();
      }
      v23 = v28->m_Items[v27];
      if ( v23 >= 1 )
      {
        if ( !v22 )
          break;
        System_Collections_Generic_List_long___Add(
          v22,
          v23,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( (__int64)++v27 >= max_length )
        return v22;
    }
LABEL_29:
    sub_B170D4();
  }
  return v22;
}