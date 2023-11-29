void __fastcall UserItemMaster___ctor(UserItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9739 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__, method);
    byte_40F9739 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    34,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntity(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F9737 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__, userId);
    byte_40F9737 = 1;
  }
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  return (UserItemEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                               PK,
                               (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v15; // x23
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v23; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v24; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v25; // x19
  unsigned __int64 v26; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v27; // x11
  __int64 v28; // x0
  UserItemEntity_o *v29; // x21
  const MethodInfo *v30; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  UserSvtCoinMaster_o *v32; // x0
  UserItemEntity_o *v33; // x0
  __int64 v34; // x10
  UserSvtCoinEntity_o *v36; // [xsp+0h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F973B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, userId);
    sub_B16FFC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_B16FFC(&UserItemEntity_TypeInfo, v11);
    byte_40F973B = 1;
  }
  v36 = 0LL;
  entity = 0LL;
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_41;
  klass = lookup->klass;
  v15 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v15,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v29 = (UserItemEntity_o *)sub_B170CC(UserItemEntity_TypeInfo, v19, v20, v21, v22);
    UserItemEntity___ctor_24028116(v29, userId, itemId, v30);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              itemId,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return v29;
      if ( entity )
      {
        if ( entity->fields.bannerId != 29 )
          return v29;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v32 = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
        if ( entity && v32 )
        {
          if ( !UserSvtCoinMaster__TryGetEntity(v32, &v36, userId, entity->fields.flag, 0LL) )
            return v29;
          if ( v36 && v29 )
          {
            v29->fields.num = v36->fields.num;
            return v29;
          }
        }
      }
    }
LABEL_41:
    sub_B170D4();
  }
  v23 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !v23 )
    goto LABEL_41;
  v24 = v23->klass;
  v25 = v23;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v24->_1.interfaceOffsets->offset;
    while ( *(v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v26;
      v27 += 2;
      if ( v26 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v28 = (__int64)&v24->vtable[*(_DWORD *)v27 + 2].method;
  }
  else
  {
LABEL_16:
    v28 = sub_AAFEF8(v23, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v33 = (UserItemEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v28)(
                              v25,
                              PK,
                              *(_QWORD *)(v28 + 8));
  if ( !v33 )
    return 0LL;
  v34 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v34 )
    return 0LL;
  if ( (UserItemEntity_c *)v33->klass->_2.typeHierarchy[v34 - 1] == UserItemEntity_TypeInfo )
    return v33;
  return 0LL;
}


int32_t __fastcall UserItemMaster__GetUserStoneFragmentNum(UserItemMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t UserId; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x3
  UserItemEntity_o *EntityDefinitely; // x0

  if ( (byte_40F973E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    byte_40F973E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                             this,
                             UserId,
                             Master_WarQuestSelectionMaster[1].fields._MasterKind_k__BackingField,
                             v7)) == 0LL )
  {
    sub_B170D4();
  }
  return EntityDefinitely->fields.num;
}


bool __fastcall UserItemMaster__TryGetEntity(
        UserItemMaster_o *this,
        UserItemEntity_o **entity,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F9738 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__, entity);
    byte_40F9738 = 1;
  }
  PK = UserItemEntity__CreatePK(userId, itemId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
}


UserItemEntity_array *__fastcall UserItemMaster__getList(UserItemMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_40F973A & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F973A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserItemMaster__getList_24040060(this, UserId, v4);
}


UserItemEntity_array *__fastcall UserItemMaster__getList_24040060(
        UserItemMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  int32_t v18; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v21; // x10

  if ( (byte_40F973D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UserItemEntity__TypeInfo, v9);
    sub_B16FFC(&UserItemEntity_TypeInfo, v10);
    byte_40F973D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserItemEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserItemEntity___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v19 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v19,
               v18,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (UserItemEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == UserItemEntity_TypeInfo
          && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserItemEntity__Add__);
        }
      }
      if ( ++v18 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v17 )
    goto LABEL_16;
  return (UserItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v14; // x10

  if ( (byte_40F973C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&UserItemEntity_TypeInfo, v6);
    byte_40F973C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v12 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v12,
               v11,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (UserItemEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == UserItemEntity_TypeInfo
          && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
        {
          ++v10;
        }
      }
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_16:
    sub_B170D4();
  }
  return 0;
}