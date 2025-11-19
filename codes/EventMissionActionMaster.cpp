void EventMissionActionMaster___ctor(EventMissionActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB62D9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
    byte_4CB62D9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    141,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *EventMissionActionMaster__GetEntity(
        EventMissionActionMaster_o *this,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB62D7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
    byte_4CB62D7 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_33FDB94 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventMissionActionMaster__TryGetEntity(
        EventMissionActionMaster_o *this,
        EventMissionActionEntity_o **entity,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB62D8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
    byte_4CB62D8 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&missionProgressType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  EventMissionActionEntity_o *result; // x0
  int32_t v10; // w23

  if ( (byte_4CB62DA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    byte_4CB62DA = 1;
  }
  result = (EventMissionActionEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1C6BC60(result, *(_QWORD *)&missionID);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    result = (EventMissionActionEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_12;
    result = (EventMissionActionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                             (System_Collections_ObjectModel_Collection_T__o *)result,
                                             v10,
                                             (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !result )
      goto LABEL_12;
    if ( result->fields.missionId == missionID
      && result->fields.missionProgressType == progressType
      && result->fields.missionActionType == actionType )
    {
      return result;
    }
    result = (EventMissionActionEntity_o *)this->fields.list;
    ++v10;
    if ( !result )
      goto LABEL_12;
  }
  return 0;
}


System_Collections_Generic_List_EventMissionActionEntity__o *EventMissionActionMaster__getEntityListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t v10; // w23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x20
  Il2CppObject *v18; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4CB62DC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_EventMissionActionEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    sub_1C6BA08(&Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__);
    sub_1C6BA08(&EventMissionActionMaster___c_TypeInfo);
    byte_4CB62DC = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_25;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_25;
    v8 = (Il2CppClass *)list;
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType )
    {
      if ( !v7 )
        goto LABEL_25;
      items = v7->fields._items;
      v14 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_25;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)list,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v16[4] = v8;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v8, v11, v12);
      }
    }
    list = this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_25;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v17,
      v18,
      Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__,
      0);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionEntity__o *)v17;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)v17, v20, v21);
  }
  if ( !v7 )
LABEL_25:
    sub_1C6BC60(list, v8);
  System_Collections_Generic_List_object___Sort_58729528(
    v7,
    v17,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v7;
}


System_Collections_Generic_List_EventMissionActionEntity__o *EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4CB62DB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    byte_4CB62DB = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1C6BC60(list, v10);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_17;
    v10 = list;
    if ( LODWORD(list->fields.items) == missionID
      && HIDWORD(list->fields.items) == progressType
      && HIDWORD(list[1].klass) == actionType )
    {
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v16 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)list,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v10;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v10, v13, v14);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v9;
}


System_Collections_Generic_List_EventMissionActionEntity__o *EventMissionActionMaster__getSafeActionListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t v10; // w23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x20
  Il2CppObject *v18; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4CB62DD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_EventMissionActionEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    sub_1C6BA08(&Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__);
    sub_1C6BA08(&EventMissionActionMaster___c_TypeInfo);
    byte_4CB62DD = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_26;
    v8 = (Il2CppClass *)list;
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType && *((_DWORD *)list + 7) == 7 )
    {
      if ( !v7 )
        goto LABEL_26;
      items = v7->fields._items;
      v14 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_26;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)list,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v16[4] = v8;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v8, v11, v12);
      }
    }
    list = this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_26;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v17,
      v18,
      Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__,
      0);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionEntity__o *)v17;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)v17, v20, v21);
  }
  if ( !v7 )
LABEL_26:
    sub_1C6BC60(list, v8);
  System_Collections_Generic_List_object___Sort_58729528(
    v7,
    v17,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v7;
}


void EventMissionActionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB62DE & 1) == 0 )
  {
    sub_1C6BA08(&EventMissionActionMaster___c_TypeInfo);
    byte_4CB62DE = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventMissionActionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionActionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)EventMissionActionMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventMissionActionMaster___c___ctor(EventMissionActionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMissionActionMaster___c___getEntityListFromIDnType_b__5_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.id - b->fields.id;
}


int32_t EventMissionActionMaster___c___getSafeActionListFromIDnType_b__6_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.id - b->fields.id;
}