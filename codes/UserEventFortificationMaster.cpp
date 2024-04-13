void __fastcall UserEventFortificationMaster___ctor(UserEventFortificationMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA223 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA223 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    383,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
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

  if ( (byte_42EA224 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__,
      userId,
      eventId,
      *(_QWORD *)&fortificationIdx);
    byte_42EA224 = 1;
  }
  PK = UserEventFortificationEntity__CreatePK(
         userId,
         eventId,
         fortificationIdx,
         *(const MethodInfo **)&fortificationIdx);
  return (UserEventFortificationEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventFortificationMaster__GetFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t workIndex,
        const MethodInfo *method)
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

  if ( (byte_42EA229 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      workIndex,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&UserEventFortificationEntity_TypeInfo, v9, v10, v11);
    byte_42EA229 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
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
        v18 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (UserEventFortificationEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == UserEventFortificationEntity_TypeInfo
          && (!workIndex || HIDWORD(Item[1].monitor) == workIndex) )
        {
          v15 += HIDWORD(Item[2].klass);
        }
      }
      if ( ++v16 >= v14 )
        return v15;
    }
LABEL_17:
    sub_B5D69C(list, *(_QWORD *)&workIndex);
  }
  return 0;
}


int32_t __fastcall UserEventFortificationMaster__GetTotalFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityList; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_UserEventFortificationEntity__o *v14; // x8
  int32_t v15; // w20
  int32_t v16; // w21
  __int64 v17; // x10
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EA22A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__, v6, v7, v8);
    sub_B5D5C4(&UserEventFortificationEntity_TypeInfo, v9, v10, v11);
    byte_42EA22A = 1;
  }
  userEventFortificationList = 0LL;
  EntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserEventFortificationMaster__TryGetEntityList(
                                                                                             this,
                                                                                             &userEventFortificationList,
                                                                                             eventId,
                                                                                             v3);
  if ( ((unsigned __int8)EntityList & 1) == 0 )
    return 0;
  v14 = userEventFortificationList;
  if ( !userEventFortificationList )
LABEL_13:
    sub_B5D69C(EntityList, v13);
  v15 = 0;
  v16 = 0;
  while ( v16 < v14->fields._size )
  {
    EntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( EntityList )
    {
      EntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                                 EntityList,
                                                                                                 v16,
                                                                                                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( EntityList )
      {
        v17 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&EntityList->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (UserEventFortificationEntity_c *)EntityList->klass->_2.typeHierarchy[v17 - 1] == UserEventFortificationEntity_TypeInfo )
        {
          v15 += HIDWORD(EntityList[1].klass);
        }
      }
      v14 = userEventFortificationList;
      ++v16;
      if ( userEventFortificationList )
        continue;
    }
    goto LABEL_13;
  }
  return v15;
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

  if ( (byte_42EA225 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42EA225 = 1;
  }
  PK = UserEventFortificationEntity__CreatePK(userId, eventId, fortificationIdx, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
}


bool __fastcall UserEventFortificationMaster__TryGetEntityList(
        UserEventFortificationMaster_o *this,
        System_Collections_Generic_List_UserEventFortificationEntity__o **userEventFortificationList,
        int32_t eventId,
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
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  __int64 v32; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v34; // x1
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v41; // x3
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x11
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  if ( (byte_42EA226 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)userEventFortificationList,
      eventId,
      method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&UserEventFortificationEntity_TypeInfo, v28, v29, v30);
    byte_42EA226 = 1;
  }
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v34);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v35);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_16:
      v45 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v41);
    }
    v46 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v45 + 8));
    if ( !v46
      || (v48 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v46->klass->_2.bitflags2 + 1) < (unsigned int)v48)
      || (UserEventFortificationEntity_c *)v46->klass->_2.typeHierarchy[v48 - 1] != UserEventFortificationEntity_TypeInfo )
    {
      sub_B5D69C(v46, v47);
    }
    if ( v46->fields.targetId == eventId )
    {
      if ( !v31 )
        sub_B5D69C(v46, v47);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v31,
        v46,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__);
    }
  }
  v49 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      ++v50;
      v51 += 4;
      if ( v50 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_28:
    v52 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v41);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  *userEventFortificationList = (System_Collections_Generic_List_UserEventFortificationEntity__o *)v31;
  sub_B5D560(
    (BattleServantConfConponent_o *)userEventFortificationList,
    (System_Int32_array **)v31,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  if ( !*userEventFortificationList )
LABEL_34:
    sub_B5D69C(list, v32);
  return (*userEventFortificationList)->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventFortificationMaster__TryGetFortificationIdxAndPositionBySvtId(
        UserEventFortificationMaster_o *this,
        int32_t *fortificationIdx,
        int32_t *position,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x11
  __int64 v34; // x9
  int v35; // w10
  unsigned int v36; // w11
  __int64 v37; // x12
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  bool v42; // w22
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  __int64 v48; // x0
  int v49; // [xsp+0h] [xbp-50h]

  if ( (byte_42EA227 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)fortificationIdx,
      (_DWORD)position,
      *(_QWORD *)&eventId);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UserEventFortificationEntity_TypeInfo, v20, v21, v22);
    byte_42EA227 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, fortificationIdx);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v24);
  while ( 1 )
  {
LABEL_23:
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      v42 = 0;
      v49 = 114;
      goto LABEL_32;
    }
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_10:
      v30 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v25);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    if ( v31 )
    {
      v33 = *(&UserEventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 300LL) >= (unsigned int)v33
        && *(UserEventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * v33 - 8) == UserEventFortificationEntity_TypeInfo )
      {
        continue;
      }
    }
    sub_B5D69C(v31, v32);
    if ( *(_DWORD *)(v31 + 24) == eventId )
    {
      v34 = *(_QWORD *)(v31 + 40);
      if ( !v34 )
        sub_B5D69C(v31, v32);
      v35 = *(_DWORD *)(v34 + 24);
      if ( v35 >= 1 )
        break;
    }
  }
  v36 = 0;
  while ( 1 )
  {
    if ( v36 >= v35 )
    {
      v48 = sub_B5D6C8(v31);
      sub_B5D668(v48, 0LL);
    }
    v37 = *(_QWORD *)(v34 + 8LL * (int)v36 + 32);
    if ( !v37 )
      sub_B5D69C(v31, v32);
    if ( *(_QWORD *)(v37 + 32) == userSvtId )
      break;
    if ( (int)++v36 >= v35 )
      goto LABEL_23;
  }
  *fortificationIdx = *(_DWORD *)(v31 + 28);
  v42 = 1;
  *position = *(_DWORD *)(v37 + 16);
  v49 = 122;
LABEL_32:
  v43 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_36:
    v46 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  if ( v49 == 114 )
  {
    v42 = 0;
    *fortificationIdx = 0;
    *position = 0;
  }
  return v42;
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x5
  bool FortificationIdxAndPositionBySvtId; // w8
  bool result; // w0
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  int32_t v33; // w23
  EventFortificationEntity_o *Entity; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  EventFortificationDetailEntity_o *v41; // x21
  System_String_o *name; // x1
  System_String_o *v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t position[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EA228 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventFortificationDetailMaster___,
      (_DWORD)fortificationName,
      (_DWORD)fortificationDetailName,
      *(_QWORD *)&eventId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFortificationMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42EA228 = 1;
  }
  *(_QWORD *)position = 0LL;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)fortificationName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)fortificationDetailName,
    *(System_String_array ***)&eventId,
    (System_Boolean_array **)userSvtId,
    (System_Int32_array **)method,
    v6,
    v7);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)fortificationDetailName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  FortificationIdxAndPositionBySvtId = UserEventFortificationMaster__TryGetFortificationIdxAndPositionBySvtId(
                                         this,
                                         &position[1],
                                         position,
                                         eventId,
                                         userSvtId,
                                         v28);
  result = 0;
  if ( FortificationIdxAndPositionBySvtId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationMaster___)) == 0LL
      || (v33 = position[1],
          Entity = EventFortificationMaster__GetEntity(
                     (EventFortificationMaster_o *)Instance,
                     eventId,
                     position[1],
                     0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v32);
    }
    v41 = EventFortificationDetailMaster__GetEntity(
            (EventFortificationDetailMaster_o *)Instance,
            eventId,
            v33,
            position[0],
            0LL);
    result = 0;
    if ( Entity )
    {
      if ( v41 )
      {
        name = Entity->fields.name;
        *fortificationName = name;
        sub_B5D560(
          (BattleServantConfConponent_o *)fortificationName,
          (System_Int32_array **)name,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        v43 = v41->fields.name;
        *fortificationDetailName = v43;
        sub_B5D560(
          (BattleServantConfConponent_o *)fortificationDetailName,
          (System_Int32_array **)v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
        return 1;
      }
    }
  }
  return result;
}