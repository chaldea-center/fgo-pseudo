void __fastcall UserItemMaster___ctor(UserItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418702F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__, method);
    byte_418702F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    34,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntity(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418702D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__, userId);
    byte_418702D = 1;
  }
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  return (UserItemEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                               PK,
                               (const MethodInfo_24E4520 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntityDefinitely(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *PK; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *lookup; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  DataMasterBase_WarMaster__WarEntity__int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x23
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 v20; // x0
  __int64 v21; // x3
  DataMasterBase_WarMaster__WarEntity__int__c *v22; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x19
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x11
  __int64 v26; // x0
  UserItemEntity_o *v27; // x21
  const MethodInfo *v28; // x3
  UserItemEntity_o *v29; // x0
  __int64 v30; // x10
  UserSvtCoinEntity_o *v32; // [xsp+0h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187031 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, userId);
    sub_B2C35C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_B2C35C(&UserItemEntity_TypeInfo, v11);
    byte_4187031 = 1;
  }
  v32 = 0LL;
  entity = 0LL;
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_41;
  klass = lookup->klass;
  v17 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    v20 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_8:
    v20 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v15);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *, _QWORD))v20)(
          v17,
          PK,
          *(_QWORD *)(v20 + 8)) & 1) == 0 )
  {
    v27 = (UserItemEntity_o *)sub_B2C42C(UserItemEntity_TypeInfo);
    UserItemEntity___ctor_23985712(v27, userId, itemId, v28);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( lookup )
    {
      lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                lookup,
                                                                &entity,
                                                                itemId,
                                                                (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)lookup & 1) == 0 )
        return v27;
      if ( entity )
      {
        if ( entity->fields.bannerId != 29 )
          return v27;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
        if ( entity && lookup )
        {
          lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)UserSvtCoinMaster__TryGetEntity(
                                                                    (UserSvtCoinMaster_o *)lookup,
                                                                    &v32,
                                                                    userId,
                                                                    entity->fields.flag,
                                                                    0LL);
          if ( ((unsigned __int8)lookup & 1) == 0 )
            return v27;
          if ( v32 && v27 )
          {
            v27->fields.num = v32->fields.num;
            return v27;
          }
        }
      }
    }
LABEL_41:
    sub_B2C434(lookup, v14);
  }
  lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_41;
  v22 = lookup->klass;
  v23 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v22->_1.interfaceOffsets->offset;
    while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v24;
      v25 += 2;
      if ( v24 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v26 = (__int64)(&v22->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v25);
  }
  else
  {
LABEL_16:
    v26 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v21);
  }
  v29 = (UserItemEntity_o *)(*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *, _QWORD))v26)(
                              v23,
                              PK,
                              *(_QWORD *)(v26 + 8));
  if ( !v29 )
    return 0LL;
  v30 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v30 )
    return 0LL;
  if ( (UserItemEntity_c *)v29->klass->_2.typeHierarchy[v30 - 1] == UserItemEntity_TypeInfo )
    return v29;
  return 0LL;
}


int32_t __fastcall UserItemMaster__GetUserStoneFragmentNum(UserItemMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t UserId; // x20
  _DWORD *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4187034 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    byte_4187034 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = UserItemMaster__GetEntityDefinitely(
                                           this,
                                           UserId,
                                           Master_WarQuestSelectionMaster[22],
                                           v8)) == 0LL )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
  }
  return Master_WarQuestSelectionMaster[7];
}


bool __fastcall UserItemMaster__TryGetEntity(
        UserItemMaster_o *this,
        UserItemEntity_o **entity,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418702E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__, entity);
    byte_418702E = 1;
  }
  PK = UserItemEntity__CreatePK(userId, itemId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
}


UserItemEntity_array *__fastcall UserItemMaster__getList(UserItemMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4187030 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4187030 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserItemMaster__getList_23997656(this, UserId, v4);
}


UserItemEntity_array *__fastcall UserItemMaster__getList_23997656(
        UserItemMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  int32_t v14; // w23
  __int64 v15; // x10

  v3 = userId;
  if ( (byte_4187033 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserItemEntity__TypeInfo, v9);
    sub_B2C35C(&UserItemEntity_TypeInfo, v10);
    byte_4187033 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserItemEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        v15 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (UserItemEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == UserItemEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserItemEntity__Add__);
        }
      }
      if ( ++v14 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, userId);
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (UserItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
}


int32_t __fastcall UserItemMaster__getSum(UserItemMaster_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w21
  int32_t v11; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10

  if ( (byte_4187032 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&UserItemEntity_TypeInfo, v6);
    byte_4187032 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v11,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserItemEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == UserItemEntity_TypeInfo
          && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
        {
          ++v10;
        }
      }
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_16:
    sub_B2C434(list, userId);
  }
  return 0;
}