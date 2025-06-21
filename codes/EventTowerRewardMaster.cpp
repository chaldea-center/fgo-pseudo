void __fastcall EventTowerRewardMaster___ctor(EventTowerRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C6B3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__, method);
    byte_4B1C6B3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    241,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_o *__fastcall EventTowerRewardMaster__GetEntity(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1C6B1 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B1C6B1 = 1;
  }
  PK = (Il2CppObject *)EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&floor);
  return (EventTowerRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_32CC8B8 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardAllEntityList(
        EventTowerRewardMaster_o *this,
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
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppClass *v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4B1C6B5 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__, v5);
    sub_1BCAFF8(&System_Comparison_EventTowerRewardEntity__TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo, v11);
    sub_1BCAFF8(&Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__, v12);
    sub_1BCAFF8(&EventTowerRewardMaster___c_TypeInfo, v13);
    byte_4B1C6B5 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
      if ( !list )
        break;
      v15 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v14 )
          break;
        items = v14->fields._items;
        v23 = Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v25[4] = v15;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v15, v20, v21);
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1BCB254(list, v15);
  }
LABEL_15:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventTowerRewardMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_object____ctor(
      v26,
      v27,
      Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__,
      0LL);
    static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventTowerRewardEntity__o *)v26;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v26, v29, v30);
  }
  if ( !v14 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_57390740(
    v14,
    v26,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v14,
                                           (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
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
  Il2CppClass *v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4B1C6B4 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__, v7);
    sub_1BCAFF8(&System_Comparison_EventTowerRewardEntity__TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo, v13);
    sub_1BCAFF8(&Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__, v14);
    sub_1BCAFF8(&EventTowerRewardMaster___c_TypeInfo, v15);
    byte_4B1C6B4 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v21,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
      if ( !list )
        break;
      v17 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == towerId )
      {
        if ( !v16 )
          break;
        items = v16->fields._items;
        v25 = Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v27[4] = v17;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v17, v22, v23);
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1BCB254(list, v17);
  }
LABEL_16:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventTowerRewardMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_object____ctor(
      v28,
      v29,
      Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__,
      0LL);
    static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventTowerRewardEntity__o *)v28;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v28, v31, v32);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_57390740(
    v16,
    v28,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v16,
                                           (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTowerRewardMaster__TryGetEntity(
        EventTowerRewardMaster_o *this,
        EventTowerRewardEntity_o **entity,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1C6B2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__, entity);
    byte_4B1C6B2 = 1;
  }
  PK = (Il2CppObject *)EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&towerId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__);
}


void __fastcall EventTowerRewardMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C6B6 & 1) == 0 )
  {
    sub_1BCAFF8(&EventTowerRewardMaster___c_TypeInfo, v1);
    byte_4B1C6B6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(EventTowerRewardMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTowerRewardMaster___c_TypeInfo->static_fields->__9 = (struct EventTowerRewardMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)EventTowerRewardMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventTowerRewardMaster___c___ctor(EventTowerRewardMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTowerRewardMaster___c___GetTowerRewardAllEntityList_b__4_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.floor - b->fields.floor;
}


int32_t __fastcall EventTowerRewardMaster___c___GetTowerRewardEntityList_b__3_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.floor - b->fields.floor;
}