void __fastcall UserItemMaster___ctor(UserItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF91 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
    byte_42AEF91 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    35,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntity(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AEF8F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
    byte_42AEF8F = 1;
  }
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  return (UserItemEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23E2728 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
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
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x23
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 v15; // x0
  __int64 v16; // x3
  DataMasterBase_WarMaster__WarEntity__int__c *v17; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x19
  unsigned __int64 v19; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v20; // x11
  __int64 v21; // x0
  UserItemEntity_o *v22; // x21
  const MethodInfo *v23; // x3
  UserItemEntity_o *v24; // x0
  __int64 v25; // x10
  UserSvtCoinEntity_o *v27; // [xsp+0h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AEF93 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&UserItemEntity_TypeInfo);
    byte_42AEF93 = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_41;
  klass = lookup->klass;
  v12 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_8:
    v15 = sub_AEB880(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v10);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *, _QWORD))v15)(
          v12,
          PK,
          *(_QWORD *)(v15 + 8)) & 1) == 0 )
  {
    v22 = (UserItemEntity_o *)sub_B52A54(UserItemEntity_TypeInfo);
    UserItemEntity___ctor_23219140(v22, userId, itemId, v23);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( lookup )
    {
      lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                lookup,
                                                                &entity,
                                                                itemId,
                                                                (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)lookup & 1) == 0 )
        return v22;
      if ( entity )
      {
        if ( entity->fields.bannerId != 29 )
          return v22;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
        if ( entity && lookup )
        {
          lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)UserSvtCoinMaster__TryGetEntity(
                                                                    (UserSvtCoinMaster_o *)lookup,
                                                                    &v27,
                                                                    userId,
                                                                    entity->fields.flag,
                                                                    0LL);
          if ( ((unsigned __int8)lookup & 1) == 0 )
            return v22;
          if ( v27 && v22 )
          {
            v22->fields.num = v27->fields.num;
            return v22;
          }
        }
      }
    }
LABEL_41:
    sub_B52A5C(lookup, v9);
  }
  lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_41;
  v17 = lookup->klass;
  v18 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v19;
      v20 += 2;
      if ( v19 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v21 = (__int64)(&v17->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v20);
  }
  else
  {
LABEL_16:
    v21 = sub_AEB880(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v16);
  }
  v24 = (UserItemEntity_o *)(*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *, _QWORD))v21)(
                              v18,
                              PK,
                              *(_QWORD *)(v21 + 8));
  if ( !v24 )
    return 0LL;
  v25 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25 )
    return 0LL;
  if ( (UserItemEntity_c *)v24->klass->_2.typeHierarchy[v25 - 1] == UserItemEntity_TypeInfo )
    return v24;
  return 0LL;
}


int32_t __fastcall UserItemMaster__GetUserStoneFragmentNum(UserItemMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x20
  _DWORD *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_42AEF96 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF96 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = UserItemMaster__GetEntityDefinitely(
                                           this,
                                           UserId,
                                           Master_WarQuestSelectionMaster[22],
                                           v6)) == 0LL )
  {
    sub_B52A5C(Master_WarQuestSelectionMaster, v5);
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

  if ( (byte_42AEF90 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
    byte_42AEF90 = 1;
  }
  PK = UserItemEntity__CreatePK(userId, itemId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
}


UserItemEntity_array *__fastcall UserItemMaster__getList(UserItemMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_42AEF92 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF92 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserItemMaster__getList_23231084(this, UserId, v4);
}


UserItemEntity_array *__fastcall UserItemMaster__getList_23231084(
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
  if ( (byte_42AEF95 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserItemEntity__TypeInfo);
    sub_B52984(&UserItemEntity_TypeInfo);
    byte_42AEF95 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserItemEntity___ctor__);
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
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserItemEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(list, userId);
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_16;
  return (UserItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                   (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
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

  if ( (byte_42AEF94 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&UserItemEntity_TypeInfo);
    byte_42AEF94 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_B52A5C(list, userId);
  }
  return 0;
}