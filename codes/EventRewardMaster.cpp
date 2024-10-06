void __fastcall EventRewardMaster___ctor(EventRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FF7F & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__, method);
    byte_4A6FF7F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    121,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_o *__fastcall EventRewardMaster__GetEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A6FF7D & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4A6FF7D = 1;
  }
  PK = (Il2CppObject *)EventRewardEntity__CreatePK(eventId, slot, groupId, point, (const MethodInfo *)point);
  return (EventRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_312C900 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList(
        EventRewardMaster_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  Il2CppClass *v16; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v19; // w22
  int32_t v20; // w23
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_4A6FF80 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&System_Comparison_EventRewardEntity__TypeInfo, v6);
    sub_1B90010(&EventRewardEntity_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardEntity__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_EventRewardEntity__TypeInfo, v12);
    sub_1B90010(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__, v13);
    sub_1B90010(&EventRewardMaster___c_TypeInfo, v14);
    byte_4A6FF80 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(EventRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_EventRewardEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = v16;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v16, v21, v22);
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B9026C(list, v16);
  }
LABEL_17:
  list = EventRewardMaster___c_TypeInfo;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    list = EventRewardMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventRewardEntity__o *)v28;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55649412(
    v15,
    v28,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v15,
                                      (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList_39303536(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
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
  System_Collections_Generic_List_object__o *v17; // x19
  Il2CppClass *v18; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x21
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_4A6FF81 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B90010(&System_Comparison_EventRewardEntity__TypeInfo, v8);
    sub_1B90010(&EventRewardEntity_TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardEntity__Add__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__, v13);
    sub_1B90010(&System_Collections_Generic_List_EventRewardEntity__TypeInfo, v14);
    sub_1B90010(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__, v15);
    sub_1B90010(&EventRewardMaster___c_TypeInfo, v16);
    byte_4A6FF81 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(EventRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v27 = Method_System_Collections_Generic_List_EventRewardEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v29[4] = v18;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v18, v23, v24);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1B9026C(list, v18);
  }
LABEL_18:
  list = EventRewardMaster___c_TypeInfo;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    list = EventRewardMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)list + 23);
    v30 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventRewardEntity__o *)v30;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v30, v33, v34);
  }
  if ( !v17 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_55649412(
    v17,
    v30,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v17,
                                      (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventRewardEntity_array *EventRewardEntitiyList; // x0
  EventRewardMaster___c_c *v11; // x8
  System_Object_array *v12; // x20
  System_Comparison_T__o *_9__5_0; // x21
  Il2CppObject *v14; // x22
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  EventRewardEntity_o *result; // x0
  __int64 v19; // x1
  int max_length; // w8
  int v21; // w9

  if ( (byte_4A6FF82 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Sort_EventRewardEntity___, *(_QWORD *)&eventId);
    sub_1B90010(&System_Comparison_EventRewardEntity__TypeInfo, v7);
    sub_1B90010(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__, v8);
    sub_1B90010(&EventRewardMaster___c_TypeInfo, v9);
    byte_4A6FF82 = 1;
  }
  EventRewardEntitiyList = EventRewardMaster__GetEventRewardEntitiyList(this, eventId, (const MethodInfo *)eventPoint);
  v11 = EventRewardMaster___c_TypeInfo;
  v12 = (System_Object_array *)EventRewardEntitiyList;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v11 = EventRewardMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Comparison_T__o *)v11->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = EventRewardMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(_9__5_0, v14, Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventRewardEntity__o *)_9__5_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v16, v17);
  }
  System_Array__Sort_object__48611596(
    v12,
    _9__5_0,
    (const MethodInfo_2E5C10C *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !v12 )
    goto LABEL_19;
  max_length = v12->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( max_length == v21 )
        sub_1B90274(result, v19);
      result = (EventRewardEntity_o *)v12->m_Items[v21];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( max_length == ++v21 )
        return 0LL;
    }
LABEL_19:
    sub_1B9026C(result, v19);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity_39304584(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventRewardEntity_array *EventRewardEntitiyList_39303536; // x0
  EventRewardMaster___c_c *v13; // x8
  System_Object_array *v14; // x20
  System_Comparison_T__o *_9__6_0; // x21
  Il2CppObject *v16; // x22
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  EventRewardEntity_o *result; // x0
  __int64 v21; // x1
  int max_length; // w8
  int v23; // w9

  if ( (byte_4A6FF83 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Sort_EventRewardEntity___, *(_QWORD *)&eventId);
    sub_1B90010(&System_Comparison_EventRewardEntity__TypeInfo, v9);
    sub_1B90010(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__, v10);
    sub_1B90010(&EventRewardMaster___c_TypeInfo, v11);
    byte_4A6FF83 = 1;
  }
  EventRewardEntitiyList_39303536 = EventRewardMaster__GetEventRewardEntitiyList_39303536(
                                      this,
                                      eventId,
                                      groupId,
                                      (const MethodInfo *)eventPoint);
  v13 = EventRewardMaster___c_TypeInfo;
  v14 = (System_Object_array *)EventRewardEntitiyList_39303536;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v13 = EventRewardMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v13->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = EventRewardMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v16, Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__, 0LL);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventRewardEntity__o *)_9__6_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v18, v19);
  }
  System_Array__Sort_object__48611596(
    v14,
    _9__6_0,
    (const MethodInfo_2E5C10C *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !v14 )
    goto LABEL_19;
  max_length = v14->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( max_length == v23 )
        sub_1B90274(result, v21);
      result = (EventRewardEntity_o *)v14->m_Items[v23];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( max_length == ++v23 )
        return 0LL;
    }
LABEL_19:
    sub_1B9026C(result, v21);
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

  if ( (byte_4A6FF7E & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__, entity);
    byte_4A6FF7E = 1;
  }
  PK = (Il2CppObject *)EventRewardEntity__CreatePK(eventId, slot, groupId, point, *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
}


void __fastcall EventRewardMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6FF84 & 1) == 0 )
  {
    sub_1B90010(&EventRewardMaster___c_TypeInfo, v1);
    byte_4A6FF84 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(EventRewardMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRewardMaster___c_TypeInfo->static_fields->__9 = (struct EventRewardMaster___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)EventRewardMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetEventRewardEntitiyList_b__4_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B9026C(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__5_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1B9026C(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__6_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1B9026C(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}