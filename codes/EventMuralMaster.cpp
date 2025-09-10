void EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27321 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
    byte_4C27321 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    465,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
}


EventMuralEntity_array *EventMuralMaster__GetOpenedEntitiesFromEventId(
        EventMuralMaster_o *this,
        int32_t eventId,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x24
  int32_t v26; // w25
  int32_t klass_high; // w26
  _BOOL8 IsQuestPhaseClear_40163600; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4C2731F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&EventMuralEntity___TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMuralEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventMuralEntity__TypeInfo);
    byte_4C2731F = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_1C2D538(EventMuralEntity___TypeInfo, 0);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMuralEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v12 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v12 )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v12,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v18 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMuralEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo )
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
      v22 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo, 0);
    }
    v23 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                            Enumerator,
                            *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      sub_1C2D6EC(0, v24);
    if ( LODWORD(v23[2].monitor) == eventId )
    {
      v26 = (int32_t)v23[3].klass;
      klass_high = HIDWORD(v23[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear_40163600 = CondType__IsQuestPhaseClear_40163600(v26, klass_high, -1, 0, 0);
      if ( IsQuestPhaseClear_40163600 )
      {
        if ( !v10 )
          sub_1C2D6EC(IsQuestPhaseClear_40163600, v29);
        items = v10->fields._items;
        v33 = Method_System_Collections_Generic_List_EventMuralEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1C2D6EC(IsQuestPhaseClear_40163600, v29);
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v25,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v25;
          sub_1C2D434((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v25, v30, v31);
        }
        *dispNum += HIDWORD(v25[2].monitor);
      }
      *total += HIDWORD(v25[2].monitor);
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_37;
    }
    v40 = (__int64)&v37->vtable[*v39];
  }
  else
  {
LABEL_37:
    v40 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  v12 = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                            Enumerator,
                                                            *(_QWORD *)(v40 + 8));
  if ( !v10 )
LABEL_44:
    sub_1C2D6EC(v12, v11);
  return (EventMuralEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v10,
                                     (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
}


EventMuralEntity_array *EventMuralMaster__GetOpenedEntitiesFromId(
        EventMuralMaster_o *this,
        int32_t id,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C27320 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__);
    sub_1C2D490(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
    sub_1C2D490(&EventMuralEntity___TypeInfo);
    byte_4C27320 = 1;
  }
  entity = 0;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    return (EventMuralEntity_array *)sub_1C2D538(EventMuralEntity___TypeInfo, 0);
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__) <= 0 )
    return (EventMuralEntity_array *)sub_1C2D538(EventMuralEntity___TypeInfo, 0);
  v10 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          id,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v10 )
    return (EventMuralEntity_array *)sub_1C2D538(EventMuralEntity___TypeInfo, 0);
  if ( !entity )
    sub_1C2D6EC(v10, v11);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity[2].monitor, dispNum, total, v12);
}