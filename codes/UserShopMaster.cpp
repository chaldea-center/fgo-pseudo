void __fastcall UserShopMaster___ctor(UserShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4391246 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
    byte_4391246 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    98,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntity(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4391244 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
    byte_4391244 = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  return (UserShopEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntityDefinitely(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x23
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x20
  unsigned __int64 v17; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x11
  __int64 v19; // x0
  UserShopEntity_o *v20; // x19
  const MethodInfo *v21; // x3
  UserShopEntity_o *v22; // x0
  __int64 v23; // x10

  if ( (byte_4391247 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&UserShopEntity_TypeInfo);
    byte_4391247 = 1;
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
    p_method = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v11,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v20 = (UserShopEntity_o *)sub_B77694(UserShopEntity_TypeInfo);
    UserShopEntity___ctor_35706828(v20, userId, shopId, v21);
    return v20;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B7769C(lookup, v9);
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
    v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 2].method;
  }
  else
  {
LABEL_16:
    v19 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v22 = (UserShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v19)(
                              v16,
                              PK,
                              *(_QWORD *)(v19 + 8));
  if ( !v22 )
    return 0LL;
  v23 = *(&UserShopEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v23 )
    return 0LL;
  if ( (UserShopEntity_c *)v22->klass->_2.typeHierarchy[v23 - 1] == UserShopEntity_TypeInfo )
    return v22;
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

  if ( (byte_4391245 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
    byte_4391245 = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
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
    sub_B7769C(this, x);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UserShopEntity_o *result; // x0
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  __int64 v10; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x1
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v12; // x21

  if ( (byte_4391248 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_UserShopEntity___ctor__);
    sub_B775C4(&System_Comparison_UserShopEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserShopEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserShopEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserShopEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserShopEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_UserShopEntity__TypeInfo);
    sub_B775C4(&UserShopEntity_TypeInfo);
    sub_B775C4(&Method_UserShopMaster_UpdateTimeSort__);
    byte_4391248 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserShopEntity___ctor__);
  result = (UserShopEntity_o *)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
           (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
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
                (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( Count >= 1 )
      {
        v8 = Count;
        v9 = 0;
        while ( 1 )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                               list,
                                                                                               v9,
                                                                                               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( !v3 )
            break;
          if ( list
            && (v10 = *(&UserShopEntity_TypeInfo->_2.bitflags2 + 1),
                *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
          {
            if ( (UserShopEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == UserShopEntity_TypeInfo )
              v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
            else
              v11 = 0LL;
          }
          else
          {
            v11 = 0LL;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v11,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserShopEntity__Add__);
          if ( ++v9 >= v8 )
            goto LABEL_17;
        }
LABEL_23:
        sub_B7769C(list, v5);
      }
LABEL_17:
      v12 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_UserShopEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v12,
        (Il2CppObject *)this,
        Method_UserShopMaster_UpdateTimeSort__,
        (const MethodInfo_2B42C0C *)Method_System_Comparison_UserShopEntity___ctor__);
      if ( !v3 )
        goto LABEL_23;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v3,
        (System_Comparison_T__o *)v12,
        (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_UserShopEntity__Sort__);
      if ( !v3->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      return (UserShopEntity_o *)v3->fields._items->m_Items[0];
    }
  }
  return result;
}