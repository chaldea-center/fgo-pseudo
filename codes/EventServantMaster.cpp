void EventServantMaster___ctor(EventServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59709C8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
    byte_59709C8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    129,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
}


EventServantEntity_array *EventServantMaster__GetEntities(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  System_Collections_Generic_IEnumerator_T__o *v36; // [xsp+18h] [xbp-38h]

  if ( (byte_59709CB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventServantEntity__TypeInfo);
    byte_59709CB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__GetEnumerator__);
  v36 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v36 )
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
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
             i,
             *(_QWORD *)(v14 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v36 )
      sub_2213CDC(list, v6);
    v15 = v36->klass;
    v16 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventServantEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_224BC3C(v36, System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v36,
            *(_QWORD *)(v18 + 8));
    v26 = v19;
    if ( v19 && *(_DWORD *)(v19 + 20) == svtId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v28 = Method_System_Collections_Generic_List_EventServantEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v19, v19);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v19,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  if ( v36 )
  {
    v31 = v36->klass;
    v32 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_34;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_34:
      v34 = sub_224BC3C(v36, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
             v36,
             *(_QWORD *)(v34 + 8));
  }
  if ( !v5 )
LABEL_41:
    sub_2213CDC(list, v6);
  return (EventServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *EventServantMaster__GetEntity(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59709C6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
    sub_2213A60(&EventServantEntity_TypeInfo);
    byte_59709C6 = 1;
  }
  if ( !*(&EventServantEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, *(_QWORD *)&eventId);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&svtId);
  return (EventServantEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3F157EC *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventServantMaster__TryGetEntity(
        EventServantMaster_o *this,
        EventServantEntity_o **entity,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59709C7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
    sub_2213A60(&EventServantEntity_TypeInfo);
    byte_59709C7 = 1;
  }
  if ( !*(&EventServantEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, entity);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *EventServantMaster__getEntity(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  EventServantEntity_o *result; // x0

  if ( (byte_59709CA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
    byte_59709CA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v10,
                                         (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.svtId == svtId )
        return result;
      if ( v9 == ++v10 )
        return 0;
    }
LABEL_13:
    sub_2213CDC(list, *(_QWORD *)&eventId);
  }
  return 0;
}


EventServantEntity_o *EventServantMaster__getEntityServantIgnoreEnd(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v9; // x24
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  void **v16; // x23
  int32_t v17; // w24
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v25; // x9
  __int64 klass_low; // x10
  __int64 v27; // x8
  System_Collections_Generic_List_object__o *v28; // x19
  System_Predicate_object__o *v29; // x20

  if ( (byte_59709C9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventServantEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventServantEntity__TypeInfo);
    sub_2213A60(&System_Predicate_EventServantEntity__TypeInfo);
    sub_2213A60(&Method_EventServantMaster___c__DisplayClass3_0__getEntityServantIgnoreEnd_b__0__);
    sub_2213A60(&EventServantMaster___c__DisplayClass3_0_TypeInfo);
    byte_59709C9 = 1;
  }
  v5 = sub_2213CCC(EventServantMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = v9;
  v16 = (void **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v9, v10, v11, v12, v13, v14, v15);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppObject *)list;
        if ( HIDWORD(list->fields.items) == svtId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)*v16;
          if ( !*v16 )
            break;
          items = list->fields.items;
          v25 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v6,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v27 + 32) = v6;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 32), (int32_t)v6, v18, v19, v20, v21, v22, v23);
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_16;
    }
LABEL_20:
    sub_2213CDC(list, v6);
  }
LABEL_16:
  v28 = (System_Collections_Generic_List_object__o *)*v16;
  if ( !*v16 )
    goto LABEL_20;
  if ( v28->fields._size < 1 )
    return 0;
  v29 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v29,
    (Il2CppObject *)v5,
    Method_EventServantMaster___c__DisplayClass3_0__getEntityServantIgnoreEnd_b__0__,
    0);
  return (EventServantEntity_o *)System_Collections_Generic_List_object___Find(
                                   v28,
                                   (System_Predicate_T__o *)v29,
                                   (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_EventServantEntity__Find__);
}


void EventServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59709CC & 1) == 0 )
  {
    sub_2213A60(&EventServantMaster___c_TypeInfo);
    byte_59709CC = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventServantMaster___c_TypeInfo->static_fields->__9 = (struct EventServantMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventServantMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventServantMaster___c___ctor(EventServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t EventServantMaster___c___getEntityServantIgnoreEnd_b__3_1(
        EventServantMaster___c_o *this,
        EventServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.endedAt;
}


void EventServantMaster___c__DisplayClass3_0___ctor(
        EventServantMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventServantMaster___c__DisplayClass3_0___getEntityServantIgnoreEnd_b__0(
        EventServantMaster___c__DisplayClass3_0_o *this,
        EventServantEntity_o *a,
        const MethodInfo *method)
{
  EventServantMaster___c__DisplayClass3_0_o *v4; // x20
  int64_t endedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *servantEntitys; // x19
  EventServantMaster___c_c *v7; // x0
  struct EventServantMaster___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__3_1; // x20
  Il2CppObject *v10; // x21
  struct EventServantMaster___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0

  v4 = this;
  if ( (byte_59709CD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
    sub_2213A60(&System_Func_EventServantEntity__long__TypeInfo);
    sub_2213A60(&Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__3_1__);
    this = (EventServantMaster___c__DisplayClass3_0_o *)sub_2213A60(&EventServantMaster___c_TypeInfo);
    byte_59709CD = 1;
  }
  if ( !a )
    sub_2213CDC(this, a);
  endedAt = a->fields.endedAt;
  servantEntitys = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.servantEntitys;
  v7 = EventServantMaster___c_TypeInfo;
  if ( !*(&EventServantMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventServantMaster___c_TypeInfo, a);
    v7 = EventServantMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__3_1 = (System_Func_object__long__o *)static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, a);
      static_fields = EventServantMaster___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__3_1 = (System_Func_object__long__o *)sub_2213CCC(System_Func_EventServantEntity__long__TypeInfo);
    System_Func_object__long____ctor(_9__3_1, v10, Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__3_1__, 0);
    v11 = EventServantMaster___c_TypeInfo->static_fields;
    v11->__9__3_1 = (struct System_Func_EventServantEntity__long__o *)_9__3_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__3_1, (int32_t)_9__3_1, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__Select_object__long_(
          servantEntitys,
          (System_Func_TSource__TResult__o *)_9__3_1,
          (const MethodInfo_3890EA4 *)Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
  return endedAt == System_Linq_Enumerable__Max_78608412((System_Collections_Generic_IEnumerable_long__o *)v18, 0);
}