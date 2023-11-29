void __fastcall UserShopMaster___ctor(UserShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FF6EE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__, method);
    byte_40FF6EE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    97,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntity(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FF6EC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__, userId);
    byte_40FF6EC = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  return (UserShopEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                               PK,
                               (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntityDefinitely(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x23
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v20; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x20
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x11
  __int64 v24; // x0
  UserShopEntity_o *v25; // x19
  const MethodInfo *v26; // x3
  UserShopEntity_o *v27; // x0
  __int64 v28; // x10

  if ( (byte_40FF6EF & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B16FFC(&UserShopEntity_TypeInfo, v7);
    byte_40FF6EF = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
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
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v11,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v25 = (UserShopEntity_o *)sub_B170CC(UserShopEntity_TypeInfo, v15, v16, v17, v18);
    UserShopEntity___ctor_34353484(v25, userId, shopId, v26);
    return v25;
  }
  v19 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !v19 )
LABEL_26:
    sub_B170D4();
  v20 = v19->klass;
  v21 = v19;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v22;
      v23 += 2;
      if ( v22 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v24 = (__int64)&v20->vtable[*(_DWORD *)v23 + 2].method;
  }
  else
  {
LABEL_16:
    v24 = sub_AAFEF8(v19, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v27 = (UserShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v24)(
                              v21,
                              PK,
                              *(_QWORD *)(v24 + 8));
  if ( !v27 )
    return 0LL;
  v28 = *(&UserShopEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28 )
    return 0LL;
  if ( (UserShopEntity_c *)v27->klass->_2.typeHierarchy[v28 - 1] == UserShopEntity_TypeInfo )
    return v27;
  return 0LL;
}


bool __fastcall UserShopMaster__TryGetEntity(
        UserShopMaster_o *this,
        UserShopEntity_o **entity,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FF6ED & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__, entity);
    byte_40FF6ED = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
}


int32_t __fastcall UserShopMaster__UpdateTimeSort(
        UserShopMaster_o *this,
        UserShopEntity_o *x,
        UserShopEntity_o *y,
        const MethodInfo *method)
{
  int64_t updatedAt; // x8
  int64_t v5; // x9

  if ( !x || !y )
    sub_B170D4();
  updatedAt = x->fields.updatedAt;
  v5 = y->fields.updatedAt;
  if ( updatedAt < v5 )
    return 1;
  if ( updatedAt <= v5 )
    return x->fields.shopId - y->fields.shopId;
  return -1;
}


UserShopEntity_o *__fastcall UserShopMaster__getLastPurchaseEntity(UserShopMaster_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  UserShopEntity_o *result; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w21
  int32_t v25; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v26; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v28; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x1
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v30; // x21

  if ( (byte_40FF6F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Comparison_UserShopEntity___ctor__, v7);
    sub_B16FFC(&System_Comparison_UserShopEntity__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserShopEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserShopEntity__Sort__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserShopEntity___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserShopEntity__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_UserShopEntity__TypeInfo, v13);
    sub_B16FFC(&UserShopEntity_TypeInfo, v14);
    sub_B16FFC(&Method_UserShopMaster_UpdateTimeSort__, v15);
    byte_40FF6F0 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserShopEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserShopEntity___ctor__);
  result = (UserShopEntity_o *)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
           (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    {
      return 0LL;
    }
    else
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_23;
      Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                list,
                (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( Count >= 1 )
      {
        v24 = Count;
        v25 = 0;
        while ( 1 )
        {
          v26 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !v26 )
            break;
          Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   v26,
                   v25,
                   (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( !v16 )
            break;
          if ( Item
            && (v28 = *(&UserShopEntity_TypeInfo->_2.bitflags2 + 1),
                *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v28) )
          {
            if ( (UserShopEntity_c *)Item->klass->_2.typeHierarchy[v28 - 1] == UserShopEntity_TypeInfo )
              v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
            else
              v29 = 0LL;
          }
          else
          {
            v29 = 0LL;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            v29,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserShopEntity__Add__);
          if ( ++v25 >= v24 )
            goto LABEL_17;
        }
LABEL_23:
        sub_B170D4();
      }
LABEL_17:
      v30 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                        System_Comparison_UserShopEntity__TypeInfo,
                                                                        v20,
                                                                        v21,
                                                                        v22,
                                                                        v23);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v30,
        (Il2CppObject *)this,
        Method_UserShopMaster_UpdateTimeSort__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_UserShopEntity___ctor__);
      if ( !v16 )
        goto LABEL_23;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
        (System_Comparison_T__o *)v30,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserShopEntity__Sort__);
      if ( !v16->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      return (UserShopEntity_o *)v16->fields._items->m_Items[0];
    }
  }
  return result;
}