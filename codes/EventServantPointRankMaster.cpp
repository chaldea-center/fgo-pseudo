void EventServantPointRankMaster___ctor(EventServantPointRankMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27432 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__);
    byte_4C27432 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    406,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__);
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

  if ( (byte_4C27435 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
    byte_4C27435 = 1;
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
    sub_1C2D6EC(EntityListFromEventAndSvt, v10);
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
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
      v16 = (EventServantPointRankEntity_o *)Item;
      EntityListFromEventAndSvt = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 v12,
                                                                                 v13,
                                                                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
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

  if ( (byte_4C27430 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__);
    byte_4C27430 = 1;
  }
  PK = (Il2CppObject *)EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&svtPoint);
  return (EventServantPointRankEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_338C850 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__);
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
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  EventServantPointRankEntity_c *v23; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4C27433 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
    sub_1C2D490(&EventServantPointRankEntity_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
    byte_4C27433 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
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
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      goto LABEL_35;
    v23 = EventServantPointRankEntity_TypeInfo;
    naturalAligment = EventServantPointRankEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)naturalAligment
      || *(EventServantPointRankEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * naturalAligment - 8) != EventServantPointRankEntity_TypeInfo )
    {
      sub_1C2D9AC(v18);
LABEL_35:
      sub_1C2D6EC(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 16) == eventId )
    {
      if ( !v5 )
        sub_1C2D6EC(v18, EventServantPointRankEntity_TypeInfo);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v18, v23);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), v22, v20, v21);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31];
  }
  else
  {
LABEL_31:
    v32 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
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
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  EventServantPointRankEntity_c *v25; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4C27434 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
    sub_1C2D490(&EventServantPointRankEntity_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
    byte_4C27434 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v10);
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
      v15 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v19 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20 )
      goto LABEL_36;
    v25 = EventServantPointRankEntity_TypeInfo;
    naturalAligment = EventServantPointRankEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)naturalAligment
      || *(EventServantPointRankEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * naturalAligment - 8) != EventServantPointRankEntity_TypeInfo )
    {
      sub_1C2D9AC(v20);
LABEL_36:
      sub_1C2D6EC(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 16) == eventId && *(_DWORD *)(v20 + 20) == svtId )
    {
      if ( !v7 )
        sub_1C2D6EC(v20, EventServantPointRankEntity_TypeInfo);
      items = v7->fields._items;
      v28 = Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C2D6EC(v20, v25);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v24;
        sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), v24, v22, v23);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_32:
    v34 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v7;
}


bool EventServantPointRankMaster__IsEnableEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventServantPointRankEntity__o *EntityListFromEvent; // x0
  __int64 v6; // x1

  if ( (byte_4C27436 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__);
    byte_4C27436 = 1;
  }
  EntityListFromEvent = EventServantPointRankMaster__GetEntityListFromEvent(this, eventId, method);
  if ( !EntityListFromEvent )
    sub_1C2D6EC(0, v6);
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

  if ( (byte_4C27431 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__);
    byte_4C27431 = 1;
  }
  PK = (Il2CppObject *)EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__);
}