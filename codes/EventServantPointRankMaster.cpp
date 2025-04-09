void __fastcall EventServantPointRankMaster___ctor(EventServantPointRankMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAFC9 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__,
      method);
    byte_49BAFC9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    406,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventServantPointRankEntity_o *__fastcall EventServantPointRankMaster__GetEnableEntity(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtPoint,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *EntityListFromEventAndSvt; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  int v14; // w21
  EventServantPointRankEntity_o *v15; // x24
  Il2CppObject *Item; // x0
  EventServantPointRankEntity_o *v17; // x22

  if ( (byte_49BAFCC & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__, v9);
    byte_49BAFCC = 1;
  }
  EntityListFromEventAndSvt = (System_Collections_Generic_List_object__o *)EventServantPointRankMaster__GetEntityListFromEventAndSvt(
                                                                             this,
                                                                             eventId,
                                                                             svtId,
                                                                             *(const MethodInfo **)&svtId);
  if ( !EntityListFromEventAndSvt
    || (v13 = EntityListFromEventAndSvt, svtId)
    && !EntityListFromEventAndSvt->fields._size
    && (EntityListFromEventAndSvt = (System_Collections_Generic_List_object__o *)EventServantPointRankMaster__GetEntityListFromEventAndSvt(
                                                                                   this,
                                                                                   eventId,
                                                                                   0,
                                                                                   v12),
        (v13 = EntityListFromEventAndSvt) == 0LL) )
  {
LABEL_22:
    sub_1B4D1EC(EntityListFromEventAndSvt, v11);
  }
  if ( v13->fields._size - 1 >= 1 )
  {
    v14 = 0;
    v15 = 0LL;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v13,
               v14++,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
      v17 = (EventServantPointRankEntity_o *)Item;
      EntityListFromEventAndSvt = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 v13,
                                                                                 v14,
                                                                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
      if ( !v17 )
        goto LABEL_22;
      if ( v17->fields.svtPoint <= svtPoint )
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
        v17 = (EventServantPointRankEntity_o *)EntityListFromEventAndSvt;
      else
        v17 = v15;
LABEL_18:
      v15 = v17;
      if ( v14 >= v13->fields._size - 1 )
        return v17;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventServantPointRankEntity_o *__fastcall EventServantPointRankMaster__GetEntity(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtPoint,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BAFC7 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49BAFC7 = 1;
  }
  PK = (Il2CppObject *)EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&svtPoint);
  return (EventServantPointRankEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31A2454 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventServantPointRankEntity__o *__fastcall EventServantPointRankMaster__GetEntityListFromEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
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
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  EventServantPointRankEntity_c *v30; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_49BAFCA & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&EventServantPointRankEntity_TypeInfo, v5);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v6);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo, v7);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo, v11);
    byte_49BAFCA = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v15);
  while ( 1 )
  {
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
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventServantPointRankEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo )
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
      v24 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v29 = v25;
    if ( !v25 )
      goto LABEL_35;
    v30 = EventServantPointRankEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventServantPointRankEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(EventServantPointRankEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != EventServantPointRankEntity_TypeInfo )
    {
      sub_1B4D4AC(v25);
LABEL_35:
      sub_1B4D1EC(v25, v26);
    }
    if ( *(_DWORD *)(v25 + 16) == eventId )
    {
      if ( !v12 )
        sub_1B4D1EC(v25, EventServantPointRankEntity_TypeInfo);
      items = v12->fields._items;
      v33 = Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B4D1EC(v25, v30);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v29;
        sub_1B4CF34((CGThumbnailListItem_o *)(v35 + 4), v29, v27, v28);
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
        goto LABEL_31;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_31:
    v39 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventServantPointRankEntity__o *__fastcall EventServantPointRankMaster__GetEntityListFromEventAndSvt(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
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
  EventServantPointRankEntity_c *v32; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v35; // x10
  __int64 size; // x11
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_49BAFCB & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&EventServantPointRankEntity_TypeInfo, v7);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo, v13);
    byte_49BAFCB = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_EventServantPointRankEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v17);
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
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_EventServantPointRankEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo )
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
      v26 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_EventServantPointRankEntity__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v31 = v27;
    if ( !v27 )
      goto LABEL_36;
    v32 = EventServantPointRankEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventServantPointRankEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(EventServantPointRankEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != EventServantPointRankEntity_TypeInfo )
    {
      sub_1B4D4AC(v27);
LABEL_36:
      sub_1B4D1EC(v27, v28);
    }
    if ( *(_DWORD *)(v27 + 16) == eventId && *(_DWORD *)(v27 + 20) == svtId )
    {
      if ( !v14 )
        sub_1B4D1EC(v27, EventServantPointRankEntity_TypeInfo);
      items = v14->fields._items;
      v35 = Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1B4D1EC(v27, v32);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v27,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v31;
        sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 4), v31, v29, v30);
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_32;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_32:
    v41 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantPointRankMaster__IsEnableEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventServantPointRankEntity__o *EntityListFromEvent; // x0
  __int64 v6; // x1

  if ( (byte_49BAFCD & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__, *(_QWORD *)&eventId);
    byte_49BAFCD = 1;
  }
  EntityListFromEvent = EventServantPointRankMaster__GetEntityListFromEvent(this, eventId, method);
  if ( !EntityListFromEvent )
    sub_1B4D1EC(0LL, v6);
  return EntityListFromEvent->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantPointRankMaster__TryGetEntity(
        EventServantPointRankMaster_o *this,
        EventServantPointRankEntity_o **entity,
        int32_t eventId,
        int32_t svtPoint,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BAFC8 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__,
      entity);
    byte_49BAFC8 = 1;
  }
  PK = (Il2CppObject *)EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__);
}