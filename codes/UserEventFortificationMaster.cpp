void __fastcall UserEventFortificationMaster___ctor(UserEventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAB7D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__,
      method);
    byte_40FAB7D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    382,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventFortificationEntity_o *__fastcall UserEventFortificationMaster__GetEntity(
        UserEventFortificationMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t fortificationIdx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FAB7E & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__,
      userId);
    byte_40FAB7E = 1;
  }
  PK = UserEventFortificationEntity__CreatePK(
         userId,
         eventId,
         fortificationIdx,
         *(const MethodInfo **)&fortificationIdx);
  return (UserEventFortificationEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventFortificationMaster__GetFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t workIndex,
        const MethodInfo *method)
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

  if ( (byte_40FAB83 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&workIndex);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&UserEventFortificationEntity_TypeInfo, v6);
    byte_40FAB83 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
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
        v14 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (UserEventFortificationEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == UserEventFortificationEntity_TypeInfo
          && (!workIndex || HIDWORD(Item[1].monitor) == workIndex) )
        {
          v10 += HIDWORD(Item[2].klass);
        }
      }
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_17:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventFortificationMaster__GetTotalFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_UserEventFortificationEntity__o *v8; // x8
  int32_t v9; // w20
  int32_t v10; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FAB84 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__, v6);
    sub_B16FFC(&UserEventFortificationEntity_TypeInfo, v7);
    byte_40FAB84 = 1;
  }
  userEventFortificationList = 0LL;
  if ( !UserEventFortificationMaster__TryGetEntityList(this, &userEventFortificationList, eventId, v3) )
    return 0;
  v8 = userEventFortificationList;
  if ( !userEventFortificationList )
LABEL_13:
    sub_B170D4();
  v9 = 0;
  v10 = 0;
  while ( v10 < v8->fields._size )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v10,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserEventFortificationEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == UserEventFortificationEntity_TypeInfo )
        {
          v9 += HIDWORD(Item[2].klass);
        }
      }
      v8 = userEventFortificationList;
      ++v10;
      if ( userEventFortificationList )
        continue;
    }
    goto LABEL_13;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventFortificationMaster__TryGetEntity(
        UserEventFortificationMaster_o *this,
        UserEventFortificationEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t fortificationIdx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FAB7F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__,
      entity);
    byte_40FAB7F = 1;
  }
  PK = UserEventFortificationEntity__CreatePK(userId, eventId, fortificationIdx, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventFortificationMaster__TryGetEntityList(
        UserEventFortificationMaster_o *this,
        System_Collections_Generic_List_UserEventFortificationEntity__o **userEventFortificationList,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  __int64 v28; // x11
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FAB80 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      userEventFortificationList);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__, v13);
    sub_B16FFC(&System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo, v14);
    sub_B16FFC(&UserEventFortificationEntity_TypeInfo, v15);
    byte_40FAB80 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo,
                                                                                                  userEventFortificationList,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    if ( !v27
      || (v28 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28)
      || (UserEventFortificationEntity_c *)v27->klass->_2.typeHierarchy[v28 - 1] != UserEventFortificationEntity_TypeInfo )
    {
      sub_B170D4();
    }
    if ( v27->fields.targetId == eventId )
    {
      if ( !v16 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        v27,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__);
    }
  }
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_28:
    v32 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  *userEventFortificationList = (System_Collections_Generic_List_UserEventFortificationEntity__o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)userEventFortificationList,
    (System_Int32_array **)v16,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !*userEventFortificationList )
LABEL_34:
    sub_B170D4();
  return (*userEventFortificationList)->fields._size > 0;
}


bool __fastcall UserEventFortificationMaster__TryGetFortificationIdxAndPositionBySvtId(
        UserEventFortificationMaster_o *this,
        int32_t *fortificationIdx,
        int32_t *position,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x11
  __int64 v25; // x9
  int v26; // w10
  unsigned int v27; // w11
  __int64 v28; // x12
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  bool v33; // w22
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-50h]

  if ( (byte_40FAB81 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, fortificationIdx);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B16FFC(&UserEventFortificationEntity_TypeInfo, v14);
    byte_40FAB81 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
LABEL_23:
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      v33 = 0;
      v39 = 114;
      goto LABEL_32;
    }
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_10:
      v20 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      v24 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) >= (unsigned int)v24
        && *(UserEventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v24 - 8) == UserEventFortificationEntity_TypeInfo )
      {
        continue;
      }
    }
    sub_B170D4();
    if ( *(_DWORD *)(v21 + 24) == eventId )
    {
      v25 = *(_QWORD *)(v21 + 40);
      if ( !v25 )
        sub_B170D4();
      v26 = *(_DWORD *)(v25 + 24);
      if ( v26 >= 1 )
        break;
    }
  }
  v27 = 0;
  while ( 1 )
  {
    if ( v27 >= v26 )
    {
      sub_B17100(v21, v22, v23);
      sub_B170A0();
    }
    v28 = *(_QWORD *)(v25 + 8LL * (int)v27 + 32);
    if ( !v28 )
      sub_B170D4();
    if ( *(_QWORD *)(v28 + 32) == userSvtId )
      break;
    if ( (int)++v27 >= v26 )
      goto LABEL_23;
  }
  *fortificationIdx = *(_DWORD *)(v21 + 28);
  v33 = 1;
  *position = *(_DWORD *)(v28 + 16);
  v39 = 122;
LABEL_32:
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_36:
    v37 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  if ( v39 == 114 )
  {
    v33 = 0;
    *fortificationIdx = 0;
    *position = 0;
  }
  return v33;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
        UserEventFortificationMaster_o *this,
        System_String_o **fortificationName,
        System_String_o **fortificationDetailName,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x5
  bool FortificationIdxAndPositionBySvtId; // w8
  bool result; // w0
  WebViewManager_o *Instance; // x0
  EventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v27; // w23
  EventFortificationEntity_o *Entity; // x22
  WebViewManager_o *v29; // x0
  EventFortificationDetailMaster_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  EventFortificationDetailEntity_o *v37; // x21
  System_String_o *name; // x1
  System_String_o *v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t position[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FAB82 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, fortificationName);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationMaster___, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40FAB82 = 1;
  }
  *(_QWORD *)position = 0LL;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)fortificationName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)fortificationDetailName,
    *(System_String_array ***)&eventId,
    (System_Boolean_array **)userSvtId,
    (System_Int32_array **)method,
    v6,
    v7);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)fortificationDetailName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  FortificationIdxAndPositionBySvtId = UserEventFortificationMaster__TryGetFortificationIdxAndPositionBySvtId(
                                         this,
                                         &position[1],
                                         position,
                                         eventId,
                                         userSvtId,
                                         v22);
  result = 0;
  if ( FortificationIdxAndPositionBySvtId )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationMaster___)) == 0LL
      || (v27 = position[1],
          Entity = EventFortificationMaster__GetEntity(MasterData_WarQuestSelectionMaster, eventId, position[1], 0LL),
          (v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (v30 = (EventFortificationDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)v29,
                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    v37 = EventFortificationDetailMaster__GetEntity(v30, eventId, v27, position[0], 0LL);
    result = 0;
    if ( Entity )
    {
      if ( v37 )
      {
        name = Entity->fields.name;
        *fortificationName = name;
        sub_B16F98(
          (BattleServantConfConponent_o *)fortificationName,
          (System_Int32_array **)name,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        v39 = v37->fields.name;
        *fortificationDetailName = v39;
        sub_B16F98(
          (BattleServantConfConponent_o *)fortificationDetailName,
          (System_Int32_array **)v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        return 1;
      }
    }
  }
  return result;
}