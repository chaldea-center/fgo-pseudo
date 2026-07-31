void UserEventFortificationMaster___ctor(UserEventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59394F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
    byte_59394F2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    392,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventFortificationEntity_o *UserEventFortificationMaster__GetEntity(
        UserEventFortificationMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t fortificationIdx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59394F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
    byte_59394F3 = 1;
  }
  PK = (Il2CppObject *)UserEventFortificationEntity__CreatePK(
                         userId,
                         eventId,
                         fortificationIdx,
                         *(const MethodInfo **)&fortificationIdx);
  return (UserEventFortificationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserEventFortificationMaster__GetFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t workIndex,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w23
  Il2CppObject *Item; // x0

  if ( (byte_59394F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__);
    byte_59394F8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__);
      if ( Item && (!workIndex || HIDWORD(Item[1].monitor) == workIndex) )
        v8 += HIDWORD(Item[2].klass);
      if ( v7 == ++v9 )
        return v8;
    }
LABEL_15:
    sub_21FFECC(list, *(_QWORD *)&workIndex);
  }
  return 0;
}


int32_t UserEventFortificationMaster__GetTotalFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_ObjectModel_Collection_T__o *EntityList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_UserEventFortificationEntity__o *v8; // x8
  int32_t v9; // w20
  int32_t v10; // w21
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59394F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__);
    byte_59394F9 = 1;
  }
  userEventFortificationList = 0;
  EntityList = (System_Collections_ObjectModel_Collection_T__o *)UserEventFortificationMaster__TryGetEntityList(
                                                                   this,
                                                                   &userEventFortificationList,
                                                                   eventId,
                                                                   v3);
  if ( ((unsigned __int8)EntityList & 1) == 0 )
    return 0;
  v8 = userEventFortificationList;
  if ( !userEventFortificationList )
LABEL_11:
    sub_21FFECC(EntityList, v7);
  v9 = 0;
  v10 = 0;
  while ( v10 < *(_DWORD *)((char *)off_18 + (_QWORD)v8) )
  {
    EntityList = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( EntityList )
    {
      EntityList = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                       EntityList,
                                                                       v10,
                                                                       (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__);
      if ( EntityList )
        v9 += HIDWORD(EntityList[1].monitor);
      v8 = userEventFortificationList;
      ++v10;
      if ( userEventFortificationList )
        continue;
    }
    goto LABEL_11;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool UserEventFortificationMaster__TryGetEntity(
        UserEventFortificationMaster_o *this,
        UserEventFortificationEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t fortificationIdx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59394F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
    byte_59394F4 = 1;
  }
  PK = (Il2CppObject *)UserEventFortificationEntity__CreatePK(
                         userId,
                         eventId,
                         fortificationIdx,
                         *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
}


bool UserEventFortificationMaster__TryGetEntityList(
        UserEventFortificationMaster_o *this,
        System_Collections_Generic_List_UserEventFortificationEntity__o **userEventFortificationList,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  System_Collections_Generic_IEnumerator_T__o *v46; // [xsp+18h] [xbp-48h]

  if ( (byte_59394F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
    byte_59394F5 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__);
  v46 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v11);
  for ( i = Enumerator; ; i = v46 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v46 )
      sub_21FFECC(v17, v18);
    v25 = v46->klass;
    v26 = *(unsigned __int16 *)&v46->klass->_2.rank;
    if ( *(_WORD *)&v46->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventFortificationEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_18;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_18:
      v28 = sub_2237E2C(v46, System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            v46,
            *(_QWORD *)(v28 + 8));
    v36 = v29;
    if ( !v29 )
      sub_21FFECC(0, 0);
    if ( *(_DWORD *)(v29 + 24) == eventId )
    {
      if ( !v7
        || (items = v7->fields._items,
            v38 = Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_21FFECC(v29, v29);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v29,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v36;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 4), v36, v30, v31, v32, v33, v34, v35);
      }
    }
  }
  if ( v46 )
  {
    v41 = v46->klass;
    v42 = *(unsigned __int16 *)&v46->klass->_2.rank;
    if ( *(_WORD *)&v46->klass->_2.rank )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_34;
      }
      v44 = (__int64)&v41->vtable[*v43];
    }
    else
    {
LABEL_34:
      v44 = sub_2237E2C(v46, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(v46, *(_QWORD *)(v44 + 8));
  }
  *userEventFortificationList = (System_Collections_Generic_List_UserEventFortificationEntity__o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)userEventFortificationList, (int32_t)v7, v19, v20, v21, v22, v23, v24);
  if ( !*userEventFortificationList )
LABEL_42:
    sub_21FFECC(list, v8);
  return (*userEventFortificationList)->fields._size > 0;
}


bool UserEventFortificationMaster__TryGetFortificationIdxAndPositionBySvtId(
        UserEventFortificationMaster_o *this,
        int32_t *fortificationIdx,
        int32_t *position,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  int v28; // w9
  int v29; // w11
  __int64 v30; // x12
  bool v31; // w22
  int v32; // w24
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IEnumerator_T__o *v38; // [xsp+18h] [xbp-48h]

  if ( (byte_59394F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_59394F6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, fortificationIdx);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__);
  v38 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v13);
  for ( i = Enumerator; ; i = v38 )
  {
    klass = i->klass;
    v16 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v18 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            i,
            *(_QWORD *)(v18 + 8));
    if ( (v19 & 1) == 0 )
    {
      v31 = 0;
      v32 = 8;
      goto LABEL_32;
    }
    if ( !v38 )
      sub_21FFECC(v19, v20);
    v21 = v38->klass;
    v22 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventFortificationEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_18;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_18:
      v24 = sub_2237E2C(v38, System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            v38,
            *(_QWORD *)(v24 + 8));
    if ( !v25 )
      sub_21FFECC(0, v26);
    if ( *(_DWORD *)(v25 + 24) == eventId )
    {
      v27 = *(_QWORD *)(v25 + 40);
      if ( !v27 )
        sub_21FFECC(v25, v26);
      v28 = *(_DWORD *)(v27 + 24);
      if ( v28 >= 1 )
        break;
    }
LABEL_29:
    ;
  }
  v29 = 0;
  while ( 1 )
  {
    if ( v28 == v29 )
      sub_21FFED4(v25);
    v30 = *(_QWORD *)(v27 + 8LL * v29 + 32);
    if ( !v30 )
      sub_21FFECC(v25, v26);
    if ( *(_QWORD *)(v30 + 32) == userSvtId )
      break;
    if ( (v28 & ~(v28 >> 31)) == ++v29 )
      goto LABEL_29;
  }
  v31 = 1;
  v32 = 7;
  *fortificationIdx = *(_DWORD *)(v25 + 28);
  *position = *(_DWORD *)(v30 + 16);
LABEL_32:
  if ( v38 )
  {
    v33 = v38->klass;
    v34 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_37;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_37:
      v36 = sub_2237E2C(v38, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v38, *(_QWORD *)(v36 + 8));
  }
  if ( (v32 | 8) == 8 )
  {
    v31 = 0;
    *fortificationIdx = 0;
    *position = 0;
  }
  return v31;
}


// local variable allocation has failed, the output may be wrong!
bool UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
        UserEventFortificationMaster_o *this,
        System_String_o **fortificationName,
        System_String_o **fortificationDetailName,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  int32_t v13; // w1
  int32_t v14; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x5
  bool FortificationIdxAndPositionBySvtId; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  int32_t v26; // w23
  EventFortificationEntity_o *Entity; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  EventFortificationDetailEntity_o *v34; // x21
  System_String_o *name; // x1
  System_String_o *v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t position[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59394F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59394F7 = 1;
  }
  v13 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)position = 0;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)fortificationName,
    v13,
    (System_String_o *)fortificationDetailName,
    *(System_String_o **)&eventId,
    userSvtId,
    (int32_t)method,
    v6,
    v7);
  v14 = (int)StringLiteral_1/*""*/;
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)fortificationDetailName, v14, v15, v16, v17, v18, v19, v20);
  FortificationIdxAndPositionBySvtId = UserEventFortificationMaster__TryGetFortificationIdxAndPositionBySvtId(
                                         this,
                                         &position[1],
                                         position,
                                         eventId,
                                         userSvtId,
                                         v21);
  result = 0;
  if ( FortificationIdxAndPositionBySvtId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventFortificationMaster___)) == 0
      || (v26 = position[1],
          Entity = EventFortificationMaster__GetEntity((EventFortificationMaster_o *)Instance, eventId, position[1], 0),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___)) == 0 )
    {
      sub_21FFECC(Instance, v25);
    }
    v34 = EventFortificationDetailMaster__GetEntity(
            (EventFortificationDetailMaster_o *)Instance,
            eventId,
            v26,
            position[0],
            0);
    result = 0;
    if ( Entity )
    {
      if ( v34 )
      {
        name = Entity->fields.name;
        *fortificationName = name;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)fortificationName, (int32_t)name, v28, v29, v30, v31, v32, v33);
        v36 = v34->fields.name;
        *fortificationDetailName = v36;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)fortificationDetailName,
          (int32_t)v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        return 1;
      }
    }
  }
  return result;
}