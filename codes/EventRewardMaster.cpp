void __fastcall EventRewardMaster___ctor(EventRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B274 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
    byte_4A5B274 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    121,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
}


EventRewardEntity_o *__fastcall EventRewardMaster__GetEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B272 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
    byte_4A5B272 = 1;
  }
  PK = (Il2CppObject *)EventRewardEntity__CreatePK(eventId, slot, groupId, point, (const MethodInfo *)point);
  return (EventRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_311DC8C *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
}


EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList(
        EventRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5B275 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1B885B0(&EventRewardEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventRewardEntity__TypeInfo);
    sub_1B885B0(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__);
    sub_1B885B0(&EventRewardMaster___c_TypeInfo);
    byte_4A5B275 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(EventRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_EventRewardEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v6, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  list = EventRewardMaster___c_TypeInfo;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    list = EventRewardMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)list + 23);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventRewardEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v18, v21, v22);
  }
  if ( !v5 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList_39250440(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
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
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5B276 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1B885B0(&EventRewardEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventRewardEntity__TypeInfo);
    sub_1B885B0(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__);
    sub_1B885B0(&EventRewardMaster___c_TypeInfo);
    byte_4A5B276 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
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
        methodPtr_low = LOBYTE(EventRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v17 = Method_System_Collections_Generic_List_EventRewardEntity__Add__;
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
  list = EventRewardMaster___c_TypeInfo;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    list = EventRewardMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)list + 23);
    v20 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(v20, v21, Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventRewardEntity__o *)v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v20, v23, v24);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    v20,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  EventRewardEntity_array *EventRewardEntitiyList; // x0
  EventRewardMaster___c_c *v8; // x8
  System_Object_array *v9; // x20
  System_Comparison_T__o *_9__5_0; // x21
  Il2CppObject *v11; // x22
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  EventRewardEntity_o *result; // x0
  __int64 v16; // x1
  int max_length; // w8
  int v18; // w9

  if ( (byte_4A5B277 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_EventRewardEntity___);
    sub_1B885B0(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1B885B0(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__);
    sub_1B885B0(&EventRewardMaster___c_TypeInfo);
    byte_4A5B277 = 1;
  }
  EventRewardEntitiyList = EventRewardMaster__GetEventRewardEntitiyList(this, eventId, (const MethodInfo *)eventPoint);
  v8 = EventRewardMaster___c_TypeInfo;
  v9 = (System_Object_array *)EventRewardEntitiyList;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v8 = EventRewardMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Comparison_T__o *)v8->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventRewardMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(_9__5_0, v11, Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventRewardEntity__o *)_9__5_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v13, v14);
  }
  System_Array__Sort_object__48551928(
    v9,
    _9__5_0,
    (const MethodInfo_2E4D7F8 *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !v9 )
    goto LABEL_19;
  max_length = v9->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( max_length == v18 )
        sub_1B88814(result, v16);
      result = (EventRewardEntity_o *)v9->m_Items[v18];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( max_length == ++v18 )
        return 0LL;
    }
LABEL_19:
    sub_1B8880C(result, v16);
  }
  return 0LL;
}


EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity_39251488(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  EventRewardEntity_array *EventRewardEntitiyList_39250440; // x0
  EventRewardMaster___c_c *v10; // x8
  System_Object_array *v11; // x20
  System_Comparison_T__o *_9__6_0; // x21
  Il2CppObject *v13; // x22
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  EventRewardEntity_o *result; // x0
  __int64 v18; // x1
  int max_length; // w8
  int v20; // w9

  if ( (byte_4A5B278 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_EventRewardEntity___);
    sub_1B885B0(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1B885B0(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__);
    sub_1B885B0(&EventRewardMaster___c_TypeInfo);
    byte_4A5B278 = 1;
  }
  EventRewardEntitiyList_39250440 = EventRewardMaster__GetEventRewardEntitiyList_39250440(
                                      this,
                                      eventId,
                                      groupId,
                                      (const MethodInfo *)eventPoint);
  v10 = EventRewardMaster___c_TypeInfo;
  v11 = (System_Object_array *)EventRewardEntitiyList_39250440;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v10 = EventRewardMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v10->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventRewardMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v13, Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventRewardEntity__o *)_9__6_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v15, v16);
  }
  System_Array__Sort_object__48551928(
    v11,
    _9__6_0,
    (const MethodInfo_2E4D7F8 *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !v11 )
    goto LABEL_19;
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( max_length == v20 )
        sub_1B88814(result, v18);
      result = (EventRewardEntity_o *)v11->m_Items[v20];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( max_length == ++v20 )
        return 0LL;
    }
LABEL_19:
    sub_1B8880C(result, v18);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardMaster__TryGetEntity(
        EventRewardMaster_o *this,
        EventRewardEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B273 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
    byte_4A5B273 = 1;
  }
  PK = (Il2CppObject *)EventRewardEntity__CreatePK(eventId, slot, groupId, point, *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
}


void __fastcall EventRewardMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B279 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardMaster___c_TypeInfo);
    byte_4A5B279 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventRewardMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventRewardMaster___c_TypeInfo->static_fields->__9 = (struct EventRewardMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventRewardMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall EventRewardMaster___c___ctor(EventRewardMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRewardMaster___c___GetEventRewardEntitiyList_b__3_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetEventRewardEntitiyList_b__4_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__5_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1B8880C(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__6_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1B8880C(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}