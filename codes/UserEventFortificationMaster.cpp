void __fastcall UserEventFortificationMaster___ctor(UserEventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B45801 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__,
      method);
    byte_4B45801 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    390,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventFortificationEntity_o *__fastcall UserEventFortificationMaster__GetEntity(
        UserEventFortificationMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t fortificationIdx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B45802 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__,
      userId);
    byte_4B45802 = 1;
  }
  PK = (Il2CppObject *)UserEventFortificationEntity__CreatePK(
                         userId,
                         eventId,
                         fortificationIdx,
                         *(const MethodInfo **)&fortificationIdx);
  return (UserEventFortificationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_32E68F4 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventFortificationMaster__GetFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t workIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w21
  int32_t v10; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4B45807 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Count__,
      *(_QWORD *)&workIndex);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__, v5);
    byte_4B45807 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__);
      if ( Item && (!workIndex || HIDWORD(Item[1].monitor) == workIndex) )
        v9 += HIDWORD(Item[2].klass);
      if ( v8 == ++v10 )
        return v9;
    }
LABEL_15:
    sub_1BDBAD4(list, *(_QWORD *)&workIndex);
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
  System_Collections_ObjectModel_Collection_T__o *EntityList; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_UserEventFortificationEntity__o *v9; // x8
  int32_t v10; // w20
  int32_t v11; // w21
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B45808 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__,
      *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__, v6);
    byte_4B45808 = 1;
  }
  userEventFortificationList = 0LL;
  EntityList = (System_Collections_ObjectModel_Collection_T__o *)UserEventFortificationMaster__TryGetEntityList(
                                                                   this,
                                                                   &userEventFortificationList,
                                                                   eventId,
                                                                   v3);
  if ( ((unsigned __int8)EntityList & 1) == 0 )
    return 0;
  v9 = userEventFortificationList;
  if ( !userEventFortificationList )
LABEL_11:
    sub_1BDBAD4(EntityList, v8);
  v10 = 0;
  v11 = 0;
  while ( v11 < v9->fields._size )
  {
    EntityList = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( EntityList )
    {
      EntityList = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                       EntityList,
                                                                       v11,
                                                                       (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__get_Item__);
      if ( EntityList )
        v10 += HIDWORD(EntityList[1].monitor);
      v9 = userEventFortificationList;
      ++v11;
      if ( userEventFortificationList )
        continue;
    }
    goto LABEL_11;
  }
  return v10;
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
  Il2CppObject *PK; // x2

  if ( (byte_4B45803 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__,
      entity);
    byte_4B45803 = 1;
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
           (const MethodInfo_32E6940 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3

  if ( (byte_4B45804 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__,
      userEventFortificationList);
    sub_1BDB878(&System_IDisposable_TypeInfo, v7);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo, v8);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__, v12);
    sub_1BDB878(&System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo, v13);
    byte_4B45804 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventFortificationEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v31 = v27;
    if ( !v27 )
      sub_1BDBAD4(0LL, v28);
    if ( *(_DWORD *)(v27 + 24) == eventId )
    {
      if ( !v14 )
        sub_1BDBAD4(v27, v28);
      items = v14->fields._items;
      v33 = Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BDBAD4(v27, v28);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v27,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v31;
        sub_1BDB81C((CGThumbnailListItem_o *)(v35 + 4), v31, v29, v30);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_29;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_29:
    v39 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  *userEventFortificationList = (System_Collections_Generic_List_UserEventFortificationEntity__o *)v14;
  sub_1BDB81C((CGThumbnailListItem_o *)userEventFortificationList, (int32_t)v14, v40, v41);
  if ( !*userEventFortificationList )
LABEL_36:
    sub_1BDBAD4(list, v15);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x9
  int v29; // w10
  int v30; // w11
  __int64 v31; // x12
  bool v32; // w23
  int v33; // w25
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4B45805 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__,
      fortificationIdx);
    sub_1BDB878(&System_IDisposable_TypeInfo, v11);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo, v12);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v13);
    byte_4B45805 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BDBAD4(0LL, fortificationIdx);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_UserEventFortificationEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v15);
  while ( 1 )
  {
LABEL_5:
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      v32 = 0;
      v33 = 8;
      goto LABEL_29;
    }
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventFortificationEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_UserEventFortificationEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    if ( !v25 )
      sub_1BDBAD4(0LL, v26);
    if ( *(_DWORD *)(v25 + 24) == eventId )
    {
      v28 = *(_QWORD *)(v25 + 40);
      if ( !v28 )
        sub_1BDBAD4(v25, v26);
      v29 = *(_DWORD *)(v28 + 24);
      if ( v29 >= 1 )
        break;
    }
  }
  v30 = 0;
  while ( 1 )
  {
    if ( v29 == v30 )
      sub_1BDBADC(v25, v26, v27);
    v31 = *(_QWORD *)(v28 + 8LL * v30 + 32);
    if ( !v31 )
      sub_1BDBAD4(v25, v26);
    if ( *(_QWORD *)(v31 + 32) == userSvtId )
      break;
    if ( v29 == ++v30 )
      goto LABEL_5;
  }
  v32 = 1;
  v33 = 7;
  *fortificationIdx = *(_DWORD *)(v25 + 28);
  *position = *(_DWORD *)(v31 + 16);
LABEL_29:
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_33;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_33:
    v37 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  if ( (v33 | 8) == 8 )
  {
    v32 = 0;
    *fortificationIdx = 0;
    *position = 0;
  }
  return v32;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x5
  bool FortificationIdxAndPositionBySvtId; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  int32_t v21; // w23
  EventFortificationEntity_o *Entity; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  EventFortificationDetailEntity_o *v25; // x21
  System_String_o *name; // x1
  System_String_o *v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t position[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B45806 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, fortificationName);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventFortificationMaster___, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BDB878(&StringLiteral_1/*""*/, v13);
    byte_4B45806 = 1;
  }
  *(_QWORD *)position = 0LL;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)fortificationName,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)fortificationDetailName,
    *(const MethodInfo **)&eventId);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)fortificationDetailName, (int32_t)StringLiteral_1/*""*/, v14, v15);
  FortificationIdxAndPositionBySvtId = UserEventFortificationMaster__TryGetFortificationIdxAndPositionBySvtId(
                                         this,
                                         &position[1],
                                         position,
                                         eventId,
                                         userSvtId,
                                         v16);
  result = 0;
  if ( FortificationIdxAndPositionBySvtId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventFortificationMaster___)) == 0LL
      || (v21 = position[1],
          Entity = EventFortificationMaster__GetEntity(
                     (EventFortificationMaster_o *)Instance,
                     eventId,
                     position[1],
                     0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___)) == 0LL )
    {
      sub_1BDBAD4(Instance, v20);
    }
    v25 = EventFortificationDetailMaster__GetEntity(
            (EventFortificationDetailMaster_o *)Instance,
            eventId,
            v21,
            position[0],
            0LL);
    result = 0;
    if ( Entity )
    {
      if ( v25 )
      {
        name = Entity->fields.name;
        *fortificationName = name;
        sub_1BDB81C((CGThumbnailListItem_o *)fortificationName, (int32_t)name, v23, v24);
        v27 = v25->fields.name;
        *fortificationDetailName = v27;
        sub_1BDB81C((CGThumbnailListItem_o *)fortificationDetailName, (int32_t)v27, v28, v29);
        return 1;
      }
    }
  }
  return result;
}