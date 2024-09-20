void __fastcall EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B2D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
    byte_4A5B2D4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    259,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
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

  if ( (byte_4A5B2D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
    byte_4A5B2D2 = 1;
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
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventStatusQuestEntity__o *__fastcall EventStatusQuestMaster__GetEntityList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x20
  Il2CppObject *v21; // x21
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5B2D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventStatusQuestEntity__TypeInfo);
    sub_1B885B0(&EventStatusQuestEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
    sub_1B885B0(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__);
    sub_1B885B0(&EventStatusQuestMaster___c_TypeInfo);
    byte_4A5B2D5 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(EventStatusQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventStatusQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventStatusQuestEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 5) == statusId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v17 = Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v19[4] = v8;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v8, v13, v14);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1B8880C(list, v8);
  }
LABEL_18:
  list = EventStatusQuestMaster___c_TypeInfo;
  if ( !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    list = EventStatusQuestMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventStatusQuestMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)list + 23);
    v20 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventStatusQuestEntity__TypeInfo);
    System_Comparison_object____ctor(v20, v21, Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v20, v23, v24);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    v20,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
  return (System_Collections_Generic_List_EventStatusQuestEntity__o *)v7;
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

  if ( (byte_4A5B2D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
    byte_4A5B2D3 = 1;
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
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_int__o *__fastcall EventStatusQuestMaster__getMismatchQuestList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_List_int__o *v8; // x19
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_EventStatusQuestEntity__o *EntityList; // x0
  __int64 v11; // x1
  EventStatusQuestMaster___c_c *v12; // x8
  System_Collections_Generic_List_object__o *v13; // x21
  System_Predicate_object__o *_9__4_0; // x22
  Il2CppObject *v15; // x23
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x1
  System_Predicate_object__o *v21; // x22
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5B2D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Predicate_EventStatusQuestEntity__TypeInfo);
    sub_1B885B0(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__);
    sub_1B885B0(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__);
    sub_1B885B0(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
    sub_1B885B0(&EventStatusQuestMaster___c_TypeInfo);
    byte_4A5B2D6 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v7 = sub_1B887FC(EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = EventStatusQuestMaster__GetEntityList(this, eventId, statusId, v9);
  v12 = EventStatusQuestMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    v12 = EventStatusQuestMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Predicate_object__o *)v12->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventStatusQuestMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__4_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_object____ctor(_9__4_0, v15, Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, 0LL);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v17, v18);
  }
  if ( !v13 )
    goto LABEL_26;
  v19 = System_Collections_Generic_List_object___Find(
          v13,
          (System_Predicate_T__o *)_9__4_0,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v19 )
    return v8;
  EntityList = (System_Collections_Generic_List_EventStatusQuestEntity__o *)EventStatusQuestEntity__getPriority(
                                                                              (EventStatusQuestEntity_o *)v19,
                                                                              v20);
  if ( !v7 )
LABEL_26:
    sub_1B8880C(EntityList, v11);
  *(_DWORD *)(v7 + 16) = (_DWORD)EntityList;
  if ( ((unsigned int)EntityList & 0x80000000) == 0 )
  {
    v21 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_object____ctor(
      v21,
      (Il2CppObject *)v7,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      0LL);
    System_Collections_Generic_List_object___RemoveAll(
      v13,
      (System_Predicate_T__o *)v21,
      (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      v13,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    v30 = v29;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
      if ( !v22 )
        break;
      if ( !v30.fields._current )
        sub_1B8880C(v22, v23);
      if ( !v8 )
        sub_1B8880C(v22, v23);
      monitor_high = HIDWORD(v30.fields._current[1].monitor);
      items = v8->fields._items;
      v26 = Method_System_Collections_Generic_List_int__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1B8880C(v22, monitor_high);
      size = v8->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v8,
          monitor_high,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v8->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v8;
}


void __fastcall EventStatusQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B2D7 & 1) == 0 )
  {
    sub_1B885B0(&EventStatusQuestMaster___c_TypeInfo);
    byte_4A5B2D7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventStatusQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventStatusQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventStatusQuestMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventStatusQuestMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  if ( !b || (this = (EventStatusQuestMaster___c_o *)EventStatusQuestEntity__getPriority(b, (const MethodInfo *)a), !a) )
    sub_1B8880C(this, a);
  return (_DWORD)this - EventStatusQuestEntity__getPriority(a, (const MethodInfo *)a);
}


bool __fastcall EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5B2D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A5B2D8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !Instance )
    sub_1B8880C(Instance, v5);
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
    sub_1B8880C(this, 0LL);
  return a->fields.priority >= 0 && a->fields.priority == this->fields.maxPriority;
}