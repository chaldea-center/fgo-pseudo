void EventServantPointRankMaster___ctor(EventServantPointRankMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938908 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__);
    byte_5938908 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    408,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__);
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
  int32_t size; // w8

  if ( (byte_593890B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
    byte_593890B = 1;
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
    sub_21FFECC(EntityListFromEventAndSvt, v10);
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
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
      v16 = (EventServantPointRankEntity_o *)Item;
      EntityListFromEventAndSvt = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 v12,
                                                                                 v13,
                                                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
      if ( !v16 )
        goto LABEL_22;
      if ( v16->fields.svtPoint <= svtPoint )
      {
        if ( !EntityListFromEventAndSvt )
          goto LABEL_22;
        size = EntityListFromEventAndSvt->fields._size;
        if ( size > svtPoint )
          goto LABEL_18;
      }
      else
      {
        if ( !EntityListFromEventAndSvt )
          goto LABEL_22;
        size = EntityListFromEventAndSvt->fields._size;
      }
      if ( size <= svtPoint )
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

  if ( (byte_5938906 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__);
    byte_5938906 = 1;
  }
  PK = (Il2CppObject *)EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&svtPoint);
  return (EventServantPointRankEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventServantPointRankEntity__o *EventServantPointRankMaster__GetEntityListFromEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x8
  EventServantPointRankEntity_c *v30; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  System_Collections_Generic_IEnumerator_T__o *v41; // [xsp+18h] [xbp-48h]

  if ( (byte_5938909 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
    sub_21FFC50(&EventServantPointRankEntity_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
    byte_5938909 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
  v41 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v41 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v41 )
      sub_21FFECC(v15, v16);
    v17 = v41->klass;
    v18 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventServantPointRankEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_2237E2C(v41, System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v41,
            *(_QWORD *)(v20 + 8));
    v29 = v21;
    if ( !v21 )
      goto LABEL_41;
    v30 = EventServantPointRankEntity_TypeInfo;
    naturalAligment = EventServantPointRankEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)naturalAligment
      || *(EventServantPointRankEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * naturalAligment - 8) != EventServantPointRankEntity_TypeInfo )
    {
      sub_220024C(v21, EventServantPointRankEntity_TypeInfo, v23);
LABEL_41:
      sub_21FFECC(v21, v22);
    }
    if ( *(_DWORD *)(v21 + 16) == eventId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v33 = Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_21FFECC(v21, v30);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v21,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v29;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), v29, v23, v24, v25, v26, v27, v28);
      }
    }
  }
  if ( v41 )
  {
    v36 = v41->klass;
    v37 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_36;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_36:
      v39 = sub_2237E2C(v41, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(v41, *(_QWORD *)(v39 + 8));
  }
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v5;
}


System_Collections_Generic_List_EventServantPointRankEntity__o *EventServantPointRankMaster__GetEntityListFromEventAndSvt(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
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
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x8
  EventServantPointRankEntity_c *v32; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *items; // x9
  _QWORD *v35; // x10
  __int64 size; // x11
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  System_Collections_Generic_IEnumerator_T__o *v43; // [xsp+18h] [xbp-48h]

  if ( (byte_593890A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
    sub_21FFC50(&EventServantPointRankEntity_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
    byte_593890A = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
  v43 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v11);
  for ( i = Enumerator; ; i = v43 )
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
    if ( !v43 )
      sub_21FFECC(v17, v18);
    v19 = v43->klass;
    v20 = *(unsigned __int16 *)&v43->klass->_2.rank;
    if ( *(_WORD *)&v43->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventServantPointRankEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_2237E2C(v43, System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v43,
            *(_QWORD *)(v22 + 8));
    v31 = v23;
    if ( !v23 )
      goto LABEL_42;
    v32 = EventServantPointRankEntity_TypeInfo;
    naturalAligment = EventServantPointRankEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)naturalAligment
      || *(EventServantPointRankEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * naturalAligment - 8) != EventServantPointRankEntity_TypeInfo )
    {
      sub_220024C(v23, EventServantPointRankEntity_TypeInfo, v25);
LABEL_42:
      sub_21FFECC(v23, v24);
    }
    if ( *(_DWORD *)(v23 + 16) == eventId && *(_DWORD *)(v23 + 20) == svtId )
    {
      if ( !v7
        || (items = v7->fields._items,
            v35 = Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_21FFECC(v23, v32);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v23,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v31;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 4), v31, v25, v26, v27, v28, v29, v30);
      }
    }
  }
  if ( v43 )
  {
    v38 = v43->klass;
    v39 = *(unsigned __int16 *)&v43->klass->_2.rank;
    if ( *(_WORD *)&v43->klass->_2.rank )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_37;
      }
      v41 = (__int64)&v38->vtable[*v40];
    }
    else
    {
LABEL_37:
      v41 = sub_2237E2C(v43, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(v43, *(_QWORD *)(v41 + 8));
  }
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v7;
}


bool EventServantPointRankMaster__IsEnableEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventServantPointRankEntity__o *EntityListFromEvent; // x0
  __int64 v6; // x1

  if ( (byte_593890C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__);
    byte_593890C = 1;
  }
  EntityListFromEvent = EventServantPointRankMaster__GetEntityListFromEvent(this, eventId, method);
  if ( !EntityListFromEvent )
    sub_21FFECC(0, v6);
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

  if ( (byte_5938907 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__);
    byte_5938907 = 1;
  }
  PK = (Il2CppObject *)EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__);
}