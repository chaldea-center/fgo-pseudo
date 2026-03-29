void UserEventFortificationMaster___ctor(UserEventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D317C9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
    byte_4D317C9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    390,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
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

  if ( (byte_4D317CA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
    byte_4D317CA = 1;
  }
  PK = (Il2CppObject *)UserEventFortificationEntity__CreatePK(
                         userId,
                         eventId,
                         fortificationIdx,
                         *(const MethodInfo **)&fortificationIdx);
  return (UserEventFortificationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_34681D4 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
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

  if ( (byte_4D317CF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__);
    byte_4D317CF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Count__);
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
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__);
      if ( Item && (!workIndex || HIDWORD(Item[1].monitor) == workIndex) )
        v8 += HIDWORD(Item[2].klass);
      if ( v7 == ++v9 )
        return v8;
    }
LABEL_15:
    sub_1C93D2C(list, *(_QWORD *)&workIndex);
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

  if ( (byte_4D317D0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__);
    byte_4D317D0 = 1;
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
    sub_1C93D2C(EntityList, v7);
  v9 = 0;
  v10 = 0;
  while ( v10 < *(_DWORD *)((char *)&off_18 + (_QWORD)v8) )
  {
    EntityList = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( EntityList )
    {
      EntityList = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                       EntityList,
                                                                       v10,
                                                                       (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__);
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

  if ( (byte_4D317CB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
    byte_4D317CB = 1;
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
           (const MethodInfo_3468220 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
}


bool UserEventFortificationMaster__TryGetEntityList(
        UserEventFortificationMaster_o *this,
        System_Collections_Generic_List_UserEventFortificationEntity__o **userEventFortificationList,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7

  if ( (byte_4D317CC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
    byte_4D317CC = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventFortificationEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v28 = v20;
    if ( !v20 )
      sub_1C93D2C(0, v21);
    if ( *(_DWORD *)(v20 + 24) == eventId )
    {
      if ( !v7 )
        sub_1C93D2C(v20, v21);
      items = v7->fields._items;
      v30 = Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C93D2C(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_29;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_29:
    v36 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  *userEventFortificationList = (System_Collections_Generic_List_UserEventFortificationEntity__o *)v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)userEventFortificationList, (int32_t)v7, v37, v38, v39, v40, v41, v42);
  if ( !*userEventFortificationList )
LABEL_36:
    sub_1C93D2C(list, v8);
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
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x9
  int v25; // w10
  int v26; // w11
  __int64 v27; // x12
  bool v28; // w23
  int v29; // w25
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4D317CD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D317CD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, fortificationIdx);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v12);
  while ( 1 )
  {
LABEL_5:
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v17 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
    {
      v28 = 0;
      v29 = 8;
      goto LABEL_29;
    }
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventFortificationEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_16:
      v21 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_1C93D2C(0, v23);
    if ( *(_DWORD *)(v22 + 24) == eventId )
    {
      v24 = *(_QWORD *)(v22 + 40);
      if ( !v24 )
        sub_1C93D2C(v22, v23);
      v25 = *(_DWORD *)(v24 + 24);
      if ( v25 >= 1 )
        break;
    }
  }
  v26 = 0;
  while ( 1 )
  {
    if ( v25 == v26 )
      sub_1C93D34(v22);
    v27 = *(_QWORD *)(v24 + 8LL * v26 + 32);
    if ( !v27 )
      sub_1C93D2C(v22, v23);
    if ( *(_QWORD *)(v27 + 32) == userSvtId )
      break;
    if ( v25 == ++v26 )
      goto LABEL_5;
  }
  v28 = 1;
  v29 = 7;
  *fortificationIdx = *(_DWORD *)(v22 + 28);
  *position = *(_DWORD *)(v27 + 16);
LABEL_29:
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_33;
    }
    v33 = (__int64)&v30->vtable[*v32];
  }
  else
  {
LABEL_33:
    v33 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  if ( (v29 | 8) == 8 )
  {
    v28 = 0;
    *fortificationIdx = 0;
    *position = 0;
  }
  return v28;
}


bool UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
        UserEventFortificationMaster_o *this,
        System_String_o **fortificationName,
        System_String_o **fortificationDetailName,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x5
  bool FortificationIdxAndPositionBySvtId; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  int32_t v24; // w23
  EventFortificationEntity_o *Entity; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  EventFortificationDetailEntity_o *v32; // x21
  System_String_o *name; // x1
  System_String_o *v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t position[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D317CE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D317CE = 1;
  }
  *(_QWORD *)position = 0;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)fortificationName,
    StringLiteral_1/*""*/,
    (int32_t)fortificationDetailName,
    eventId,
    (System_String_o *)userSvtId,
    (int32_t)method,
    v6,
    v7);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)fortificationDetailName, StringLiteral_1/*""*/, v13, v14, v15, v16, v17, v18);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventFortificationMaster___)) == 0
      || (v24 = position[1],
          Entity = EventFortificationMaster__GetEntity((EventFortificationMaster_o *)Instance, eventId, position[1], 0),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___)) == 0 )
    {
      sub_1C93D2C(Instance, v23);
    }
    v32 = EventFortificationDetailMaster__GetEntity(
            (EventFortificationDetailMaster_o *)Instance,
            eventId,
            v24,
            position[0],
            0);
    result = 0;
    if ( Entity )
    {
      if ( v32 )
      {
        name = Entity->fields.name;
        *fortificationName = name;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)fortificationName, (int32_t)name, v26, v27, v28, v29, v30, v31);
        v34 = v32->fields.name;
        *fortificationDetailName = v34;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)fortificationDetailName, (int32_t)v34, v35, v36, v37, v38, v39, v40);
        return 1;
      }
    }
  }
  return result;
}