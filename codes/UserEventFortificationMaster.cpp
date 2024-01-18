void __fastcall UserEventFortificationMaster___ctor(UserEventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B5B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__,
      method);
    byte_4188B5B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    382,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
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

  if ( (byte_4188B5C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__,
      userId);
    byte_4188B5C = 1;
  }
  PK = UserEventFortificationEntity__CreatePK(
         userId,
         eventId,
         fortificationIdx,
         *(const MethodInfo **)&fortificationIdx);
  return (UserEventFortificationEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10

  if ( (byte_4188B61 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&workIndex);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&UserEventFortificationEntity_TypeInfo, v6);
    byte_4188B61 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
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
        v13 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserEventFortificationEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == UserEventFortificationEntity_TypeInfo
          && (!workIndex || HIDWORD(Item[1].monitor) == workIndex) )
        {
          v10 += HIDWORD(Item[2].klass);
        }
      }
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_17:
    sub_B2C434(list, *(_QWORD *)&workIndex);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityList; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_UserEventFortificationEntity__o *v10; // x8
  int32_t v11; // w20
  int32_t v12; // w21
  __int64 v13; // x10
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4188B62 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__, v6);
    sub_B2C35C(&UserEventFortificationEntity_TypeInfo, v7);
    byte_4188B62 = 1;
  }
  userEventFortificationList = 0LL;
  EntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserEventFortificationMaster__TryGetEntityList(
                                                                                             this,
                                                                                             &userEventFortificationList,
                                                                                             eventId,
                                                                                             v3);
  if ( ((unsigned __int8)EntityList & 1) == 0 )
    return 0;
  v10 = userEventFortificationList;
  if ( !userEventFortificationList )
LABEL_13:
    sub_B2C434(EntityList, v9);
  v11 = 0;
  v12 = 0;
  while ( v12 < v10->fields._size )
  {
    EntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( EntityList )
    {
      EntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                                 EntityList,
                                                                                                 v12,
                                                                                                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( EntityList )
      {
        v13 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&EntityList->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserEventFortificationEntity_c *)EntityList->klass->_2.typeHierarchy[v13 - 1] == UserEventFortificationEntity_TypeInfo )
        {
          v11 += HIDWORD(EntityList[1].klass);
        }
      }
      v10 = userEventFortificationList;
      ++v12;
      if ( userEventFortificationList )
        continue;
    }
    goto LABEL_13;
  }
  return v11;
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

  if ( (byte_4188B5D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__,
      entity);
    byte_4188B5D = 1;
  }
  PK = UserEventFortificationEntity__CreatePK(userId, eventId, fortificationIdx, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
}


bool __fastcall UserEventFortificationMaster__TryGetEntityList(
        UserEventFortificationMaster_o *this,
        System_Collections_Generic_List_UserEventFortificationEntity__o **userEventFortificationList,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x11
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_4188B5E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      userEventFortificationList);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__, v12);
    sub_B2C35C(&System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo, v13);
    sub_B2C35C(&UserEventFortificationEntity_TypeInfo, v14);
    byte_4188B5E = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v25);
    }
    v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v29 + 8));
    if ( !v30
      || (v32 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v32)
      || (UserEventFortificationEntity_c *)v30->klass->_2.typeHierarchy[v32 - 1] != UserEventFortificationEntity_TypeInfo )
    {
      sub_B2C434(v30, v31);
    }
    if ( v30->fields.targetId == eventId )
    {
      if ( !v15 )
        sub_B2C434(v30, v31);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        v30,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__);
    }
  }
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_28:
    v36 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  *userEventFortificationList = (System_Collections_Generic_List_UserEventFortificationEntity__o *)v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)userEventFortificationList,
    (System_Int32_array **)v15,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( !*userEventFortificationList )
LABEL_34:
    sub_B2C434(list, v16);
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
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x11
  __int64 v26; // x9
  int v27; // w10
  unsigned int v28; // w11
  __int64 v29; // x12
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  bool v34; // w22
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  __int64 v40; // x0
  int v41; // [xsp+0h] [xbp-50h]

  if ( (byte_4188B5F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, fortificationIdx);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B2C35C(&UserEventFortificationEntity_TypeInfo, v14);
    byte_4188B5F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, fortificationIdx);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
LABEL_23:
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      v34 = 0;
      v41 = 114;
      goto LABEL_32;
    }
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_10:
      v22 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( v23 )
    {
      v25 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 300LL) >= (unsigned int)v25
        && *(UserEventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * v25 - 8) == UserEventFortificationEntity_TypeInfo )
      {
        continue;
      }
    }
    sub_B2C434(v23, v24);
    if ( *(_DWORD *)(v23 + 24) == eventId )
    {
      v26 = *(_QWORD *)(v23 + 40);
      if ( !v26 )
        sub_B2C434(v23, v24);
      v27 = *(_DWORD *)(v26 + 24);
      if ( v27 >= 1 )
        break;
    }
  }
  v28 = 0;
  while ( 1 )
  {
    if ( v28 >= v27 )
    {
      v40 = sub_B2C460(v23);
      sub_B2C400(v40, 0LL);
    }
    v29 = *(_QWORD *)(v26 + 8LL * (int)v28 + 32);
    if ( !v29 )
      sub_B2C434(v23, v24);
    if ( *(_QWORD *)(v29 + 32) == userSvtId )
      break;
    if ( (int)++v28 >= v27 )
      goto LABEL_23;
  }
  *fortificationIdx = *(_DWORD *)(v23 + 28);
  v34 = 1;
  *position = *(_DWORD *)(v29 + 16);
  v41 = 122;
LABEL_32:
  v35 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_36:
    v38 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  if ( v41 == 114 )
  {
    v34 = 0;
    *fortificationIdx = 0;
    *position = 0;
  }
  return v34;
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
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  int32_t v27; // w23
  EventFortificationEntity_o *Entity; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  EventFortificationDetailEntity_o *v35; // x21
  System_String_o *name; // x1
  System_String_o *v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int32_t position[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188B60 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, fortificationName);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFortificationMaster___, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&StringLiteral_1/*""*/, v15);
    byte_4188B60 = 1;
  }
  *(_QWORD *)position = 0LL;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)fortificationName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)fortificationDetailName,
    *(System_String_array ***)&eventId,
    (System_Boolean_array **)userSvtId,
    (System_Int32_array **)method,
    v6,
    v7);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFortificationMaster___)) == 0LL
      || (v27 = position[1],
          Entity = EventFortificationMaster__GetEntity(
                     (EventFortificationMaster_o *)Instance,
                     eventId,
                     position[1],
                     0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v26);
    }
    v35 = EventFortificationDetailMaster__GetEntity(
            (EventFortificationDetailMaster_o *)Instance,
            eventId,
            v27,
            position[0],
            0LL);
    result = 0;
    if ( Entity )
    {
      if ( v35 )
      {
        name = Entity->fields.name;
        *fortificationName = name;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)fortificationName,
          (System_Int32_array **)name,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        v37 = v35->fields.name;
        *fortificationDetailName = v37;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)fortificationDetailName,
          (System_Int32_array **)v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        return 1;
      }
    }
  }
  return result;
}