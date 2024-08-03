void __fastcall EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC585 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__, method);
    byte_49FC585 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    259,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusQuestEntity_o *__fastcall EventStatusQuestMaster__GetEntity(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC583 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FC583 = 1;
  }
  PK = (Il2CppObject *)EventStatusQuestEntity__CreatePK(
                         eventId,
                         statusId,
                         priority,
                         questId,
                         *(const MethodInfo **)&questId);
  return (EventStatusQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventStatusQuestEntity__o *__fastcall EventStatusQuestMaster__GetEntityList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  void *list; // x0
  int32_t Count; // w0
  Il2CppClass *v19; // x1
  __int64 v20; // x2
  int32_t v21; // w23
  int32_t v22; // w24
  int32_t v23; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x20
  Il2CppObject *v30; // x21
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_49FC586 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_EventStatusQuestEntity__TypeInfo, v8);
    sub_1B640C8(&EventStatusQuestEntity_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo, v13);
    sub_1B640C8(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, v14);
    sub_1B640C8(&EventStatusQuestMaster___c_TypeInfo, v15);
    byte_49FC586 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&statusId);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v22,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(EventStatusQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventStatusQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventStatusQuestEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 5) == statusId )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v26 = Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v28[4] = v19;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v19, v20, v23);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1B64324(list);
  }
LABEL_18:
  list = EventStatusQuestMaster___c_TypeInfo;
  if ( !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    list = EventStatusQuestMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventStatusQuestMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)list + 23);
    v29 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventStatusQuestEntity__TypeInfo, v19, v20);
    System_Comparison_object____ctor(v29, v30, Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)v29;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v29, v32, v33);
  }
  if ( !v16 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_55243320(
    v16,
    v29,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
  return (System_Collections_Generic_List_EventStatusQuestEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventStatusQuestMaster__TryGetEntity(
        EventStatusQuestMaster_o *this,
        EventStatusQuestEntity_o **entity,
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FC584 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__, entity);
    byte_49FC584 = 1;
  }
  PK = (Il2CppObject *)EventStatusQuestEntity__CreatePK(
                         eventId,
                         statusId,
                         priority,
                         questId,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventStatusQuestMaster__getMismatchQuestList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_int__o *v23; // x19
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_EventStatusQuestEntity__o *EntityList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  EventStatusQuestMaster___c_c *v28; // x8
  System_Collections_Generic_List_object__o *v29; // x21
  System_Predicate_object__o *_9__4_0; // x22
  Il2CppObject *v31; // x23
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x0
  const MethodInfo *v36; // x1
  __int64 v37; // x1
  __int64 v38; // x2
  System_Predicate_object__o *v39; // x22
  _BOOL8 v40; // x0
  int32_t monitor_high; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FC587 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__,
      *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B640C8(&System_Predicate_EventStatusQuestEntity__TypeInfo, v15);
    sub_1B640C8(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, v16);
    sub_1B640C8(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__, v17);
    sub_1B640C8(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo, v18);
    sub_1B640C8(&EventStatusQuestMaster___c_TypeInfo, v19);
    byte_49FC587 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v20 = sub_1B64314(EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&statusId);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  v23 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v21, v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = EventStatusQuestMaster__GetEntityList(this, eventId, statusId, v24);
  v28 = EventStatusQuestMaster___c_TypeInfo;
  v29 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    v28 = EventStatusQuestMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Predicate_object__o *)v28->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = EventStatusQuestMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__4_0 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_EventStatusQuestEntity__TypeInfo, v26, v27);
    System_Predicate_object____ctor(_9__4_0, v31, Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, 0LL);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v33, v34);
  }
  if ( !v29 )
    goto LABEL_26;
  v35 = System_Collections_Generic_List_object___Find(
          v29,
          (System_Predicate_T__o *)_9__4_0,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v35 )
    return v23;
  EntityList = (System_Collections_Generic_List_EventStatusQuestEntity__o *)EventStatusQuestEntity__getPriority(
                                                                              (EventStatusQuestEntity_o *)v35,
                                                                              v36);
  if ( !v20 )
LABEL_26:
    sub_1B64324(EntityList);
  *(_DWORD *)(v20 + 16) = (_DWORD)EntityList;
  if ( ((unsigned int)EntityList & 0x80000000) == 0 )
  {
    v39 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_EventStatusQuestEntity__TypeInfo, v37, v38);
    System_Predicate_object____ctor(
      v39,
      (Il2CppObject *)v20,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      0LL);
    System_Collections_Generic_List_object___RemoveAll(
      v29,
      (System_Predicate_T__o *)v39,
      (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      v29,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    v47 = v46;
    while ( 1 )
    {
      v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
      if ( !v40 )
        break;
      if ( !v47.fields._current )
        sub_1B64324(v40);
      if ( !v23 )
        sub_1B64324(v40);
      monitor_high = HIDWORD(v47.fields._current[1].monitor);
      items = v23->fields._items;
      v43 = Method_System_Collections_Generic_List_int__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1B64324(v40);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v23,
          monitor_high,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v23->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v23;
}


void __fastcall EventStatusQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC588 & 1) == 0 )
  {
    sub_1B640C8(&EventStatusQuestMaster___c_TypeInfo, v1);
    byte_49FC588 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventStatusQuestMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventStatusQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventStatusQuestMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventStatusQuestMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall EventStatusQuestMaster___c___ctor(EventStatusQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventStatusQuestMaster___c___GetEntityList_b__3_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        EventStatusQuestEntity_o *b,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( !b || (this = (EventStatusQuestMaster___c_o *)EventStatusQuestEntity__getPriority(b, (const MethodInfo *)a), !a) )
    sub_1B64324(this);
  return (_DWORD)this - EventStatusQuestEntity__getPriority(a, v5);
}


bool __fastcall EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FC589 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, a);
    byte_49FC589 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !Instance )
    sub_1B64324(Instance);
  return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, a->fields.questId, 0LL);
}


void __fastcall EventStatusQuestMaster___c__DisplayClass4_0___ctor(
        EventStatusQuestMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventStatusQuestMaster___c__DisplayClass4_0___getMismatchQuestList_b__1(
        EventStatusQuestMaster___c__DisplayClass4_0_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B64324(this);
  return a->fields.priority >= 0 && a->fields.priority == this->fields.maxPriority;
}