void EventTowerRewardMaster___ctor(EventTowerRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CA07 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__);
    byte_4D2CA07 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    241,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_o *EventTowerRewardMaster__GetEntity(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2CA05 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__);
    byte_4D2CA05 = 1;
  }
  PK = (Il2CppObject *)EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&floor);
  return (EventTowerRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_345FF78 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__);
}


EventTowerRewardEntity_array *EventTowerRewardMaster__GetTowerRewardAllEntityList(
        EventTowerRewardMaster_o *this,
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
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4D2CA09 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
    sub_1C94098(&System_Comparison_EventTowerRewardEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
    sub_1C94098(&Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__);
    sub_1C94098(&EventTowerRewardMaster___c_TypeInfo);
    byte_4D2CA09 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
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
               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
      if ( !list )
        break;
      v6 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v18 = Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v20[4] = v6;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C942F0(list, v6);
  }
LABEL_15:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventTowerRewardMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_object____ctor(
      v21,
      v22,
      Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__,
      0);
    static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventTowerRewardEntity__o *)v21;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_59164920(
    v5,
    v21,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


EventTowerRewardEntity_array *EventTowerRewardMaster__GetTowerRewardEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Comparison_T__o *v23; // x20
  Il2CppObject *v24; // x21
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D2CA08 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
    sub_1C94098(&System_Comparison_EventTowerRewardEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
    sub_1C94098(&Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__);
    sub_1C94098(&EventTowerRewardMaster___c_TypeInfo);
    byte_4D2CA08 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
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
               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
      if ( !list )
        break;
      v8 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == towerId )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v22[4] = v8;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v8, v13, v14, v15, v16, v17, v18);
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1C942F0(list, v8);
  }
LABEL_16:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventTowerRewardMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)list + 23);
    v23 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_object____ctor(v23, v24, Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__, 0);
    static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventTowerRewardEntity__o *)v23;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)v23, v26, v27, v28, v29, v30, v31);
  }
  if ( !v7 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_59164920(
    v7,
    v23,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool EventTowerRewardMaster__TryGetEntity(
        EventTowerRewardMaster_o *this,
        EventTowerRewardEntity_o **entity,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2CA06 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__);
    byte_4D2CA06 = 1;
  }
  PK = (Il2CppObject *)EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&towerId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__);
}


void EventTowerRewardMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2CA0A & 1) == 0 )
  {
    sub_1C94098(&EventTowerRewardMaster___c_TypeInfo);
    byte_4D2CA0A = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventTowerRewardMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTowerRewardMaster___c_TypeInfo->static_fields->__9 = (struct EventTowerRewardMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventTowerRewardMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTowerRewardMaster___c___ctor(EventTowerRewardMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventTowerRewardMaster___c___GetTowerRewardAllEntityList_b__4_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C942F0(this, a);
  return a->fields.floor - b->fields.floor;
}


int32_t EventTowerRewardMaster___c___GetTowerRewardEntityList_b__3_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C942F0(this, a);
  return a->fields.floor - b->fields.floor;
}