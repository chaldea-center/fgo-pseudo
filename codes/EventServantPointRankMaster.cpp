void EventServantPointRankMaster___ctor(EventServantPointRankMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE7F0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__);
    byte_4CEE7F0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    406,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventServantPointRankEntity_o *EventServantPointRankMaster__GetEnableEntity(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtPoint,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityListFromEventAndSvt; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int v13; // w21
  EventServantPointRankEntity_o *v14; // x24
  Il2CppObject *Item; // x0
  EventServantPointRankEntity_o *v16; // x22

  if ( (byte_4CEE7F3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
    byte_4CEE7F3 = 1;
  }
  EntityListFromEventAndSvt = (System_Collections_Generic_List_object__o *)EventServantPointRankMaster__GetEntityListFromEventAndSvt(
                                                                             this,
                                                                             eventId,
                                                                             svtId,
                                                                             *(const MethodInfo **)&svtId);
  if ( !EntityListFromEventAndSvt
    || (v12 = EntityListFromEventAndSvt, svtId)
    && !EntityListFromEventAndSvt->fields._size
    && (EntityListFromEventAndSvt = (System_Collections_Generic_List_object__o *)EventServantPointRankMaster__GetEntityListFromEventAndSvt(
                                                                                   this,
                                                                                   eventId,
                                                                                   0,
                                                                                   v11),
        (v12 = EntityListFromEventAndSvt) == 0) )
  {
LABEL_22:
    sub_1C7BD40(EntityListFromEventAndSvt, v10);
  }
  if ( v12->fields._size - 1 >= 1 )
  {
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v12,
               v13++,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
      v16 = (EventServantPointRankEntity_o *)Item;
      EntityListFromEventAndSvt = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 v12,
                                                                                 v13,
                                                                                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
      if ( !v16 )
        goto LABEL_22;
      if ( v16->fields.svtPoint <= svtPoint )
      {
        if ( !EntityListFromEventAndSvt )
          goto LABEL_22;
        if ( EntityListFromEventAndSvt->fields._size > svtPoint )
          goto LABEL_18;
      }
      else if ( !EntityListFromEventAndSvt )
      {
        goto LABEL_22;
      }
      if ( EntityListFromEventAndSvt->fields._size <= svtPoint )
        v16 = (EventServantPointRankEntity_o *)EntityListFromEventAndSvt;
      else
        v16 = v14;
LABEL_18:
      v14 = v16;
      if ( v13 >= v12->fields._size - 1 )
        return v16;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
EventServantPointRankEntity_o *EventServantPointRankMaster__GetEntity(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtPoint,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEE7EE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__);
    byte_4CEE7EE = 1;
  }
  PK = (Il2CppObject *)EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&svtPoint);
  return (EventServantPointRankEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3432DB4 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventServantPointRankEntity__o *EventServantPointRankMaster__GetEntityListFromEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  EventServantPointRankEntity_c *v27; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4CEE7F1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
    sub_1C7BAE8(&EventServantPointRankEntity_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
    byte_4CEE7F1 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C7BD40(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventServantPointRankEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v26 = v18;
    if ( !v18 )
      goto LABEL_35;
    v27 = EventServantPointRankEntity_TypeInfo;
    naturalAligment = EventServantPointRankEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)naturalAligment
      || *(EventServantPointRankEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * naturalAligment - 8) != EventServantPointRankEntity_TypeInfo )
    {
      sub_1C7C0DC(v18);
LABEL_35:
      sub_1C7BD40(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 16) == eventId )
    {
      if ( !v5 )
        sub_1C7BD40(v18, EventServantPointRankEntity_TypeInfo);
      items = v5->fields._items;
      v30 = Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C7BD40(v18, v27);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v26;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 4), v26, v20, v21, v22, v23, v24, v25);
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
        goto LABEL_31;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_31:
    v36 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v5;
}


System_Collections_Generic_List_EventServantPointRankEntity__o *EventServantPointRankMaster__GetEntityListFromEventAndSvt(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
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
  EventServantPointRankEntity_c *v29; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4CEE7F2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
    sub_1C7BAE8(&EventServantPointRankEntity_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
    byte_4CEE7F2 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C7BD40(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v10);
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
      v15 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_EventServantPointRankEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo )
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
      v19 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v28 = v20;
    if ( !v20 )
      goto LABEL_36;
    v29 = EventServantPointRankEntity_TypeInfo;
    naturalAligment = EventServantPointRankEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)naturalAligment
      || *(EventServantPointRankEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * naturalAligment - 8) != EventServantPointRankEntity_TypeInfo )
    {
      sub_1C7C0DC(v20);
LABEL_36:
      sub_1C7BD40(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 16) == eventId && *(_DWORD *)(v20 + 20) == svtId )
    {
      if ( !v7 )
        sub_1C7BD40(v20, EventServantPointRankEntity_TypeInfo);
      items = v7->fields._items;
      v32 = Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C7BD40(v20, v29);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v28;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v34 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_32;
    }
    v38 = (__int64)&v35->vtable[*v37];
  }
  else
  {
LABEL_32:
    v38 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v7;
}


bool EventServantPointRankMaster__IsEnableEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventServantPointRankEntity__o *EntityListFromEvent; // x0
  __int64 v6; // x1

  if ( (byte_4CEE7F4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__);
    byte_4CEE7F4 = 1;
  }
  EntityListFromEvent = EventServantPointRankMaster__GetEntityListFromEvent(this, eventId, method);
  if ( !EntityListFromEvent )
    sub_1C7BD40(0, v6);
  return EntityListFromEvent->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool EventServantPointRankMaster__TryGetEntity(
        EventServantPointRankMaster_o *this,
        EventServantPointRankEntity_o **entity,
        int32_t eventId,
        int32_t svtPoint,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEE7EF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__);
    byte_4CEE7EF = 1;
  }
  PK = (Il2CppObject *)EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__);
}