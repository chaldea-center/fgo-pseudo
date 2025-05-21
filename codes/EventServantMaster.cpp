void __fastcall EventServantMaster___ctor(EventServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44BC9 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__, method);
    byte_4B44BC9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    127,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_array *__fastcall EventServantMaster__GetEntities(
        EventServantMaster_o *this,
        int32_t svtId,
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4B44BCD & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_EventServantEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1BDB878(&System_IDisposable_TypeInfo, v5);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo, v6);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventServantEntity__ToArray__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v11);
    byte_4B44BCD = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v15);
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
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_EventServantEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo )
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
      v24 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v28 = v25;
    if ( v25 && *(_DWORD *)(v25 + 20) == svtId )
    {
      if ( !v12 )
        sub_1BDBAD4(v25, v25);
      items = v12->fields._items;
      v30 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1BDBAD4(v25, v25);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1BDB81C((CGThumbnailListItem_o *)(v32 + 4), v28, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_29;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_29:
    v36 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                                             Enumerator,
                                                             *(_QWORD *)(v36 + 8));
  if ( !v12 )
LABEL_35:
    sub_1BDBAD4(list, v13);
  return (EventServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v12,
                                       (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__GetEntity(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x1

  if ( (byte_4B44BC7 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__, *(_QWORD *)&eventId);
    sub_1BDB878(&EventServantEntity_TypeInfo, v7);
    byte_4B44BC7 = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&svtId);
  return (EventServantEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_32E68F4 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantMaster__TryGetEntity(
        EventServantMaster_o *this,
        EventServantEntity_o **entity,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4B44BC8 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__, entity);
    sub_1BDB878(&EventServantEntity_TypeInfo, v9);
    byte_4B44BC8 = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  EventServantEntity_o *result; // x0

  if ( (byte_4B44BCA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__, v5);
    byte_4B44BCA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v9,
                                         (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
      if ( result && result->fields.svtId == svtId )
        return result;
      if ( v8 == ++v9 )
        return 0LL;
    }
LABEL_12:
    sub_1BDBAD4(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntityServantIgnoreEnd(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  Il2CppObject *v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v18; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  void **v21; // x23
  int32_t v22; // w24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v26; // x9
  __int64 klass_low; // x10
  __int64 v28; // x8
  System_Collections_Generic_List_object__o *v29; // x19
  System_Predicate_object__o *v30; // x20

  if ( (byte_4B44BCB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventServantEntity__Find__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventServantEntity__get_Count__, v9);
    sub_1BDB878(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v10);
    sub_1BDB878(&System_Predicate_EventServantEntity__TypeInfo, v11);
    sub_1BDB878(&Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__, v12);
    sub_1BDB878(&EventServantMaster___c__DisplayClass4_0_TypeInfo, v13);
    byte_4B44BCB = 1;
  }
  v14 = sub_1BDBAC4(EventServantMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
  v18 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  if ( !v14 )
    goto LABEL_20;
  *(_QWORD *)(v14 + 16) = v18;
  v21 = (void **)(v14 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)v18, v19, v20);
  if ( Count >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v22,
                                                                 (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
      if ( list )
      {
        v15 = (Il2CppObject *)list;
        if ( HIDWORD(list->fields.items) == svtId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)*v21;
          if ( !*v21 )
            break;
          items = list->fields.items;
          v26 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v15,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v28 + 32) = v15;
            sub_1BDB81C((CGThumbnailListItem_o *)(v28 + 32), (int32_t)v15, v23, v24);
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_16;
    }
LABEL_20:
    sub_1BDBAD4(list, v15);
  }
LABEL_16:
  v29 = (System_Collections_Generic_List_object__o *)*v21;
  if ( !*v21 )
    goto LABEL_20;
  if ( v29->fields._size < 1 )
    return 0LL;
  v30 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_EventServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v30,
    (Il2CppObject *)v14,
    Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__,
    0LL);
  return (EventServantEntity_o *)System_Collections_Generic_List_object___Find(
                                   v29,
                                   (System_Predicate_T__o *)v30,
                                   (const MethodInfo_36D642C *)Method_System_Collections_Generic_List_EventServantEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity_41091300(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  EventServantEntity_o *result; // x0

  if ( (byte_4B44BCC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__, v7);
    byte_4B44BCC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v11,
                                         (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.svtId == svtId )
        return result;
      if ( v10 == ++v11 )
        return 0LL;
    }
LABEL_13:
    sub_1BDBAD4(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


void __fastcall EventServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B44BCE & 1) == 0 )
  {
    sub_1BDB878(&EventServantMaster___c_TypeInfo, v1);
    byte_4B44BCE = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventServantMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventServantMaster___c_TypeInfo->static_fields->__9 = (struct EventServantMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EventServantMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventServantMaster___c___ctor(EventServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventServantMaster___c___getEntityServantIgnoreEnd_b__4_1(
        EventServantMaster___c_o *this,
        EventServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.endedAt;
}


void __fastcall EventServantMaster___c__DisplayClass4_0___ctor(
        EventServantMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventServantMaster___c__DisplayClass4_0___getEntityServantIgnoreEnd_b__0(
        EventServantMaster___c__DisplayClass4_0_o *this,
        EventServantEntity_o *a,
        const MethodInfo *method)
{
  EventServantMaster___c__DisplayClass4_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t endedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *servantEntitys; // x19
  EventServantMaster___c_c *v10; // x0
  System_Func_T__TResult__o *_9__4_1; // x20
  Il2CppObject *v12; // x21
  struct EventServantMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0

  v4 = this;
  if ( (byte_4B44BCF & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_EventServantEntity__long___, a);
    sub_1BDB878(&System_Func_EventServantEntity__long__TypeInfo, v5);
    sub_1BDB878(&Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__, v6);
    this = (EventServantMaster___c__DisplayClass4_0_o *)sub_1BDB878(&EventServantMaster___c_TypeInfo, v7);
    byte_4B44BCF = 1;
  }
  if ( !a )
    sub_1BDBAD4(this, a);
  endedAt = a->fields.endedAt;
  servantEntitys = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.servantEntitys;
  v10 = EventServantMaster___c_TypeInfo;
  if ( !EventServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantMaster___c_TypeInfo);
    v10 = EventServantMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_T__TResult__o *)v10->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventServantMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__4_1 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_EventServantEntity__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__4_1,
      v12,
      Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__,
      0LL);
    static_fields = EventServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_EventServantEntity__long__o *)_9__4_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v14, v15);
  }
  v16 = System_Linq_Enumerable__Select_object__long_(
          servantEntitys,
          (System_Func_TSource__TResult__o *)_9__4_1,
          (const MethodInfo_3068190 *)Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
  return endedAt == System_Linq_Enumerable__Max_65578760((System_Collections_Generic_IEnumerable_long__o *)v16, 0LL);
}