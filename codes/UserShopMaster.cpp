void __fastcall UserShopMaster___ctor(UserShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D27B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__, method);
    byte_418D27B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    97,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntity(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418D279 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__, userId);
    byte_418D279 = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  return (UserShopEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                               PK,
                               (const MethodInfo_24E4520 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
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
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v13; // x23
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v18; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x20
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x11
  __int64 v22; // x0
  UserShopEntity_o *v23; // x19
  const MethodInfo *v24; // x3
  UserShopEntity_o *v25; // x0
  __int64 v26; // x10

  if ( (byte_418D27C & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B2C35C(&UserShopEntity_TypeInfo, v7);
    byte_418D27C = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v13 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v11);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v23 = (UserShopEntity_o *)sub_B2C42C(UserShopEntity_TypeInfo);
    UserShopEntity___ctor_34345020(v23, userId, shopId, v24);
    return v23;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B2C434(lookup, v10);
  v18 = lookup->klass;
  v19 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v20;
      v21 += 2;
      if ( v20 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v22 = (__int64)&v18->vtable[*(_DWORD *)v21 + 2].method;
  }
  else
  {
LABEL_16:
    v22 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v17);
  }
  v25 = (UserShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v22)(
                              v19,
                              PK,
                              *(_QWORD *)(v22 + 8));
  if ( !v25 )
    return 0LL;
  v26 = *(&UserShopEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26 )
    return 0LL;
  if ( (UserShopEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] == UserShopEntity_TypeInfo )
    return v25;
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

  if ( (byte_418D27A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__, entity);
    byte_418D27A = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
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
    sub_B2C434(this, x);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  UserShopEntity_o *result; // x0
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w21
  int32_t v19; // w22
  __int64 v20; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v22; // x21

  if ( (byte_418D27D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Comparison_UserShopEntity___ctor__, v4);
    sub_B2C35C(&System_Comparison_UserShopEntity__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserShopEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserShopEntity__Sort__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserShopEntity___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserShopEntity__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_UserShopEntity__TypeInfo, v10);
    sub_B2C35C(&UserShopEntity_TypeInfo, v11);
    sub_B2C35C(&Method_UserShopMaster_UpdateTimeSort__, v12);
    byte_418D27D = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserShopEntity___ctor__);
  result = (UserShopEntity_o *)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
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
                (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( Count >= 1 )
      {
        v18 = Count;
        v19 = 0;
        while ( 1 )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                               list,
                                                                                               v19,
                                                                                               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( !v13 )
            break;
          if ( list
            && (v20 = *(&UserShopEntity_TypeInfo->_2.bitflags2 + 1),
                *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v20) )
          {
            if ( (UserShopEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] == UserShopEntity_TypeInfo )
              v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
            else
              v21 = 0LL;
          }
          else
          {
            v21 = 0LL;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            v21,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserShopEntity__Add__);
          if ( ++v19 >= v18 )
            goto LABEL_17;
        }
LABEL_23:
        sub_B2C434(list, v15);
      }
LABEL_17:
      v22 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserShopEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v22,
        (Il2CppObject *)this,
        Method_UserShopMaster_UpdateTimeSort__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserShopEntity___ctor__);
      if ( !v13 )
        goto LABEL_23;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v13,
        (System_Comparison_T__o *)v22,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserShopEntity__Sort__);
      if ( !v13->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      return (UserShopEntity_o *)v13->fields._items->m_Items[0];
    }
  }
  return result;
}