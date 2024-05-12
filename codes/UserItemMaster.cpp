void __fastcall UserItemMaster___ctor(UserItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389D81 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
    byte_4389D81 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    35,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntity(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4389D7F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
    byte_4389D7F = 1;
  }
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  return (UserItemEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntityDefinitely(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *lookup; // x0
  __int64 v9; // x1
  DataMasterBase_WarMaster__WarEntity__int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x23
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 v14; // x0
  DataMasterBase_WarMaster__WarEntity__int__c *v15; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x19
  unsigned __int64 v17; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x11
  __int64 v19; // x0
  UserItemEntity_o *v20; // x21
  const MethodInfo *v21; // x3
  UserItemEntity_o *v22; // x0
  __int64 v23; // x10
  UserSvtCoinEntity_o *v25; // [xsp+0h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4389D83 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&UserItemEntity_TypeInfo);
    byte_4389D83 = 1;
  }
  v25 = 0LL;
  entity = 0LL;
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_41;
  klass = lookup->klass;
  v11 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_8:
    v14 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *, _QWORD))v14)(
          v11,
          PK,
          *(_QWORD *)(v14 + 8)) & 1) == 0 )
  {
    v20 = (UserItemEntity_o *)sub_B77694(UserItemEntity_TypeInfo);
    UserItemEntity___ctor_23047108(v20, userId, itemId, v21);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( lookup )
    {
      lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                lookup,
                                                                &entity,
                                                                itemId,
                                                                (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)lookup & 1) == 0 )
        return v20;
      if ( entity )
      {
        if ( entity->fields.bannerId != 29 )
          return v20;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
        if ( entity && lookup )
        {
          lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)UserSvtCoinMaster__TryGetEntity(
                                                                    (UserSvtCoinMaster_o *)lookup,
                                                                    &v25,
                                                                    userId,
                                                                    entity->fields.flag,
                                                                    0LL);
          if ( ((unsigned __int8)lookup & 1) == 0 )
            return v20;
          if ( v25 && v20 )
          {
            v20->fields.num = v25->fields.num;
            return v20;
          }
        }
      }
    }
LABEL_41:
    sub_B7769C(lookup, v9);
  }
  lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_41;
  v15 = lookup->klass;
  v16 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v17;
      v18 += 2;
      if ( v17 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v19 = (__int64)(&v15->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
  }
  else
  {
LABEL_16:
    v19 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v22 = (UserItemEntity_o *)(*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *, _QWORD))v19)(
                              v16,
                              PK,
                              *(_QWORD *)(v19 + 8));
  if ( !v22 )
    return 0LL;
  v23 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v23 )
    return 0LL;
  if ( (UserItemEntity_c *)v22->klass->_2.typeHierarchy[v23 - 1] == UserItemEntity_TypeInfo )
    return v22;
  return 0LL;
}


int32_t __fastcall UserItemMaster__GetUserStoneFragmentNum(UserItemMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x20
  _DWORD *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4389D86 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4389D86 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = UserItemMaster__GetEntityDefinitely(
                                           this,
                                           UserId,
                                           Master_WarQuestSelectionMaster[22],
                                           v6)) == 0LL )
  {
    sub_B7769C(Master_WarQuestSelectionMaster, v5);
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

  if ( (byte_4389D80 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
    byte_4389D80 = 1;
  }
  PK = UserItemEntity__CreatePK(userId, itemId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
}


UserItemEntity_array *__fastcall UserItemMaster__getList(UserItemMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4389D82 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4389D82 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserItemMaster__getList_23059052(this, UserId, v4);
}


UserItemEntity_array *__fastcall UserItemMaster__getList_23059052(
        UserItemMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  __int64 v9; // x10

  v3 = userId;
  if ( (byte_4389D85 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserItemEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserItemEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserItemEntity__TypeInfo);
    sub_B775C4(&UserItemEntity_TypeInfo);
    byte_4389D85 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserItemEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        v9 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (UserItemEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == UserItemEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserItemEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7769C(list, userId);
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_16;
  return (UserItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                   (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
}


int32_t __fastcall UserItemMaster__getSum(UserItemMaster_o *this, int64_t userId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v11; // x10

  if ( (byte_4389D84 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&UserItemEntity_TypeInfo);
    byte_4389D84 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v9,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (UserItemEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == UserItemEntity_TypeInfo
          && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
        {
          ++v8;
        }
      }
      if ( ++v9 >= v7 )
        return v8;
    }
LABEL_16:
    sub_B7769C(list, userId);
  }
  return 0;
}