void __fastcall UserEventFortificationMaster___ctor(UserEventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1548 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
    byte_42B1548 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    383,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
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

  if ( (byte_42B1549 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
    byte_42B1549 = 1;
  }
  PK = UserEventFortificationEntity__CreatePK(
         userId,
         eventId,
         fortificationIdx,
         *(const MethodInfo **)&fortificationIdx);
  return (UserEventFortificationEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23E2728 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventFortificationMaster__GetFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t workIndex,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v11; // x10

  if ( (byte_42B154E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&UserEventFortificationEntity_TypeInfo);
    byte_42B154E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
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
        v11 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (UserEventFortificationEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == UserEventFortificationEntity_TypeInfo
          && (!workIndex || HIDWORD(Item[1].monitor) == workIndex) )
        {
          v8 += HIDWORD(Item[2].klass);
        }
      }
      if ( ++v9 >= v7 )
        return v8;
    }
LABEL_17:
    sub_B52A5C(list, *(_QWORD *)&workIndex);
  }
  return 0;
}


int32_t __fastcall UserEventFortificationMaster__GetTotalFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_UserEventFortificationEntity__o *v8; // x8
  int32_t v9; // w20
  int32_t v10; // w21
  __int64 v11; // x10
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B154F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__);
    sub_B52984(&UserEventFortificationEntity_TypeInfo);
    byte_42B154F = 1;
  }
  userEventFortificationList = 0LL;
  EntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserEventFortificationMaster__TryGetEntityList(
                                                                                             this,
                                                                                             &userEventFortificationList,
                                                                                             eventId,
                                                                                             v3);
  if ( ((unsigned __int8)EntityList & 1) == 0 )
    return 0;
  v8 = userEventFortificationList;
  if ( !userEventFortificationList )
LABEL_13:
    sub_B52A5C(EntityList, v7);
  v9 = 0;
  v10 = 0;
  while ( v10 < v8->fields._size )
  {
    EntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( EntityList )
    {
      EntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                                 EntityList,
                                                                                                 v10,
                                                                                                 (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( EntityList )
      {
        v11 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&EntityList->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (UserEventFortificationEntity_c *)EntityList->klass->_2.typeHierarchy[v11 - 1] == UserEventFortificationEntity_TypeInfo )
        {
          v9 += HIDWORD(EntityList[1].klass);
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

  if ( (byte_42B154A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
    byte_42B154A = 1;
  }
  PK = UserEventFortificationEntity__CreatePK(userId, eventId, fortificationIdx, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
}


bool __fastcall UserEventFortificationMaster__TryGetEntityList(
        UserEventFortificationMaster_o *this,
        System_Collections_Generic_List_UserEventFortificationEntity__o **userEventFortificationList,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x11
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42B154B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
    sub_B52984(&UserEventFortificationEntity_TypeInfo);
    byte_42B154B = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    if ( !v22
      || (v24 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24)
      || (UserEventFortificationEntity_c *)v22->klass->_2.typeHierarchy[v24 - 1] != UserEventFortificationEntity_TypeInfo )
    {
      sub_B52A5C(v22, v23);
    }
    if ( v22->fields.targetId == eventId )
    {
      if ( !v7 )
        sub_B52A5C(v22, v23);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v22,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__);
    }
  }
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_28:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  *userEventFortificationList = (System_Collections_Generic_List_UserEventFortificationEntity__o *)v7;
  sub_B52920(
    (BattleServantConfConponent_o *)userEventFortificationList,
    (System_Int32_array **)v7,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !*userEventFortificationList )
LABEL_34:
    sub_B52A5C(list, v8);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x11
  __int64 v22; // x9
  int v23; // w10
  unsigned int v24; // w11
  __int64 v25; // x12
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  bool v30; // w22
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  __int64 v36; // x0
  int v37; // [xsp+0h] [xbp-50h]

  if ( (byte_42B154C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UserEventFortificationEntity_TypeInfo);
    byte_42B154C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, fortificationIdx);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v12);
  while ( 1 )
  {
LABEL_23:
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      v30 = 0;
      v37 = 114;
      goto LABEL_32;
    }
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_10:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v13);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      v21 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) >= (unsigned int)v21
        && *(UserEventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v21 - 8) == UserEventFortificationEntity_TypeInfo )
      {
        continue;
      }
    }
    sub_B52A5C(v19, v20);
    if ( *(_DWORD *)(v19 + 24) == eventId )
    {
      v22 = *(_QWORD *)(v19 + 40);
      if ( !v22 )
        sub_B52A5C(v19, v20);
      v23 = *(_DWORD *)(v22 + 24);
      if ( v23 >= 1 )
        break;
    }
  }
  v24 = 0;
  while ( 1 )
  {
    if ( v24 >= v23 )
    {
      v36 = sub_B52A88(v19);
      sub_B52A28(v36, 0LL);
    }
    v25 = *(_QWORD *)(v22 + 8LL * (int)v24 + 32);
    if ( !v25 )
      sub_B52A5C(v19, v20);
    if ( *(_QWORD *)(v25 + 32) == userSvtId )
      break;
    if ( (int)++v24 >= v23 )
      goto LABEL_23;
  }
  *fortificationIdx = *(_DWORD *)(v19 + 28);
  v30 = 1;
  *position = *(_DWORD *)(v25 + 16);
  v37 = 122;
LABEL_32:
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_36:
    v34 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  if ( v37 == 114 )
  {
    v30 = 0;
    *fortificationIdx = 0;
    *position = 0;
  }
  return v30;
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x5
  bool FortificationIdxAndPositionBySvtId; // w8
  bool result; // w0
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  int32_t v24; // w23
  EventFortificationEntity_o *Entity; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  EventFortificationDetailEntity_o *v32; // x21
  System_String_o *name; // x1
  System_String_o *v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t position[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B154D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B154D = 1;
  }
  *(_QWORD *)position = 0LL;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)fortificationName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)fortificationDetailName,
    *(System_String_array ***)&eventId,
    (System_Boolean_array **)userSvtId,
    (System_Int32_array **)method,
    v6,
    v7);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)fortificationDetailName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  FortificationIdxAndPositionBySvtId = UserEventFortificationMaster__TryGetFortificationIdxAndPositionBySvtId(
                                         this,
                                         &position[1],
                                         position,
                                         eventId,
                                         userSvtId,
                                         v19);
  result = 0;
  if ( FortificationIdxAndPositionBySvtId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFortificationMaster___)) == 0LL
      || (v24 = position[1],
          Entity = EventFortificationMaster__GetEntity(
                     (EventFortificationMaster_o *)Instance,
                     eventId,
                     position[1],
                     0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___)) == 0LL )
    {
      sub_B52A5C(Instance, v23);
    }
    v32 = EventFortificationDetailMaster__GetEntity(
            (EventFortificationDetailMaster_o *)Instance,
            eventId,
            v24,
            position[0],
            0LL);
    result = 0;
    if ( Entity )
    {
      if ( v32 )
      {
        name = Entity->fields.name;
        *fortificationName = name;
        sub_B52920(
          (BattleServantConfConponent_o *)fortificationName,
          (System_Int32_array **)name,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        v34 = v32->fields.name;
        *fortificationDetailName = v34;
        sub_B52920(
          (BattleServantConfConponent_o *)fortificationDetailName,
          (System_Int32_array **)v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        return 1;
      }
    }
  }
  return result;
}