void __fastcall UserItemMaster___ctor(UserItemMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7191 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E7191 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    35,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntity(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E718F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__, userId, itemId, method);
    byte_42E718F = 1;
  }
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  return (UserItemEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23FB260 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntityDefinitely(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
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
  System_String_o *PK; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *lookup; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  DataMasterBase_WarMaster__WarEntity__int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x23
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  __int64 v31; // x3
  DataMasterBase_WarMaster__WarEntity__int__c *v32; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x19
  unsigned __int64 v34; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v35; // x11
  __int64 v36; // x0
  UserItemEntity_o *v37; // x21
  const MethodInfo *v38; // x3
  UserItemEntity_o *v39; // x0
  __int64 v40; // x10
  UserSvtCoinEntity_o *v42; // [xsp+0h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7193 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, userId, itemId, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&UserItemEntity_TypeInfo, v19, v20, v21);
    byte_42E7193 = 1;
  }
  v42 = 0LL;
  entity = 0LL;
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_41;
  klass = lookup->klass;
  v27 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_8:
    v30 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v25);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *, _QWORD))v30)(
          v27,
          PK,
          *(_QWORD *)(v30 + 8)) & 1) == 0 )
  {
    v37 = (UserItemEntity_o *)sub_B5D694(UserItemEntity_TypeInfo);
    UserItemEntity___ctor_22510000(v37, userId, itemId, v38);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
    if ( lookup )
    {
      lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                lookup,
                                                                &entity,
                                                                itemId,
                                                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)lookup & 1) == 0 )
        return v37;
      if ( entity )
      {
        if ( entity->fields.bannerId != 29 )
          return v37;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
        if ( entity && lookup )
        {
          lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)UserSvtCoinMaster__TryGetEntity(
                                                                    (UserSvtCoinMaster_o *)lookup,
                                                                    &v42,
                                                                    userId,
                                                                    entity->fields.flag,
                                                                    0LL);
          if ( ((unsigned __int8)lookup & 1) == 0 )
            return v37;
          if ( v42 && v37 )
          {
            v37->fields.num = v42->fields.num;
            return v37;
          }
        }
      }
    }
LABEL_41:
    sub_B5D69C(lookup, v24);
  }
  lookup = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_41;
  v32 = lookup->klass;
  v33 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v32->_1.interfaceOffsets->offset;
    while ( *(v35 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v34;
      v35 += 2;
      if ( v34 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v36 = (__int64)(&v32->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v35);
  }
  else
  {
LABEL_16:
    v36 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v31);
  }
  v39 = (UserItemEntity_o *)(*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *, _QWORD))v36)(
                              v33,
                              PK,
                              *(_QWORD *)(v36 + 8));
  if ( !v39 )
    return 0LL;
  v40 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v40 )
    return 0LL;
  if ( (UserItemEntity_c *)v39->klass->_2.typeHierarchy[v40 - 1] == UserItemEntity_TypeInfo )
    return v39;
  return 0LL;
}


int32_t __fastcall UserItemMaster__GetUserStoneFragmentNum(UserItemMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t UserId; // x20
  _DWORD *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3

  if ( (byte_42E7196 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    byte_42E7196 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = UserItemMaster__GetEntityDefinitely(
                                           this,
                                           UserId,
                                           Master_WarQuestSelectionMaster[22],
                                           v14)) == 0LL )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v13);
  }
  return Master_WarQuestSelectionMaster[7];
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserItemMaster__TryGetEntity(
        UserItemMaster_o *this,
        UserItemEntity_o **entity,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E7190 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&itemId);
    byte_42E7190 = 1;
  }
  PK = UserItemEntity__CreatePK(userId, itemId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
}


UserItemEntity_array *__fastcall UserItemMaster__getList(UserItemMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t UserId; // x1
  const MethodInfo *v6; // x2

  if ( (byte_42E7192 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7192 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserItemMaster__getList_22521944(this, UserId, v6);
}


UserItemEntity_array *__fastcall UserItemMaster__getList_22521944(
        UserItemMaster_o *this,
        int64_t userId,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  int32_t v27; // w23
  __int64 v28; // x10

  v4 = userId;
  if ( (byte_42E7195 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_UserItemEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UserItemEntity_TypeInfo, v21, v22, v23);
    byte_42E7195 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserItemEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        v28 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (UserItemEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == UserItemEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v4 )
        {
          if ( !v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserItemEntity__Add__);
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, userId);
  }
LABEL_14:
  if ( !v26 )
    goto LABEL_16;
  return (UserItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
}


int32_t __fastcall UserItemMaster__getSum(UserItemMaster_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w21
  int32_t v16; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_42E7194 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&UserItemEntity_TypeInfo, v9, v10, v11);
    byte_42E7194 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v16,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (UserItemEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == UserItemEntity_TypeInfo
          && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
        {
          ++v15;
        }
      }
      if ( ++v16 >= v14 )
        return v15;
    }
LABEL_16:
    sub_B5D69C(list, userId);
  }
  return 0;
}