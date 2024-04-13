void __fastcall UserShopMaster___ctor(UserShopMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6B4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EE6B4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    98,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntity(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EE6B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__, userId, shopId, method);
    byte_42EE6B2 = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  return (UserShopEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23FB260 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntityDefinitely(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v15; // x23
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v20; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x20
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x11
  __int64 v24; // x0
  UserShopEntity_o *v25; // x19
  const MethodInfo *v26; // x3
  UserShopEntity_o *v27; // x0
  __int64 v28; // x10

  if ( (byte_42EE6B5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId, shopId, method);
    sub_B5D5C4(&UserShopEntity_TypeInfo, v7, v8, v9);
    byte_42EE6B5 = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
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
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v13);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v15,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v25 = (UserShopEntity_o *)sub_B5D694(UserShopEntity_TypeInfo);
    UserShopEntity___ctor_35246476(v25, userId, shopId, v26);
    return v25;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B5D69C(lookup, v12);
  v20 = lookup->klass;
  v21 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v22;
      v23 += 2;
      if ( v22 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v24 = (__int64)&v20->vtable[*(_DWORD *)v23 + 2].method;
  }
  else
  {
LABEL_16:
    v24 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v19);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserShopMaster__TryGetEntity(
        UserShopMaster_o *this,
        UserShopEntity_o **entity,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EE6B3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&shopId);
    byte_42EE6B3 = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
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
    sub_B5D69C(this, x);
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  UserShopEntity_o *result; // x0
  __int64 v37; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v40; // w21
  int32_t v41; // w22
  __int64 v42; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x1
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v44; // x21

  if ( (byte_42EE6B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Comparison_UserShopEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Comparison_UserShopEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserShopEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserShopEntity__Sort__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserShopEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserShopEntity__get_Item__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_UserShopEntity__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UserShopEntity_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_UserShopMaster_UpdateTimeSort__, v32, v33, v34);
    byte_42EE6B6 = 1;
  }
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserShopEntity___ctor__);
  result = (UserShopEntity_o *)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
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
                (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( Count >= 1 )
      {
        v40 = Count;
        v41 = 0;
        while ( 1 )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                               list,
                                                                                               v41,
                                                                                               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( !v35 )
            break;
          if ( list
            && (v42 = *(&UserShopEntity_TypeInfo->_2.bitflags2 + 1),
                *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v42) )
          {
            if ( (UserShopEntity_c *)list->klass->_2.typeHierarchy[v42 - 1] == UserShopEntity_TypeInfo )
              v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
            else
              v43 = 0LL;
          }
          else
          {
            v43 = 0LL;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v35,
            v43,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserShopEntity__Add__);
          if ( ++v41 >= v40 )
            goto LABEL_17;
        }
LABEL_23:
        sub_B5D69C(list, v37);
      }
LABEL_17:
      v44 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserShopEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v44,
        (Il2CppObject *)this,
        Method_UserShopMaster_UpdateTimeSort__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_UserShopEntity___ctor__);
      if ( !v35 )
        goto LABEL_23;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v35,
        (System_Comparison_T__o *)v44,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserShopEntity__Sort__);
      if ( !v35->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      return (UserShopEntity_o *)v35->fields._items->m_Items[0];
    }
  }
  return result;
}