void EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42E6B & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
    byte_4C42E6B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    282,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *EventBonusFilterMaster__GetBonusSkillFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w23
  __int64 v9; // x24
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Func_int__bool__o *v12; // x26
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x19
  Il2CppObject *v21; // x20
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C42E69 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_int____78145032);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
    sub_1C37058(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__4_0__);
    sub_1C37058(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetBonusSkillFilterList_b__1__);
    sub_1C37058(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C37058(&EventBonusFilterMaster___c_TypeInfo);
    byte_4C42E69 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && eventIdList->max_length )
  {
    if ( Count >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = sub_1C372A4(EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0);
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 v8,
                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
        if ( !v9 )
          break;
        *(_QWORD *)(v9 + 16) = list;
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)list, v10, v11);
        if ( *(_QWORD *)(v9 + 16) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v9 + 16) + 20LL) & 0xFFFFFFFE) == 4 )
          {
            v12 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v12,
              (Il2CppObject *)v9,
              Method_EventBonusFilterMaster___c__DisplayClass4_0__GetBonusSkillFilterList_b__1__,
              0);
            list = (void *)System_Linq_Enumerable__Any_int__51336052(
                             (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                             (System_Func_TSource__bool__o *)v12,
                             (const MethodInfo_30F5374 *)Method_System_Linq_Enumerable_Any_int____78145032);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v7 )
                break;
              v15 = *(Il2CppObject **)(v9 + 16);
              items = v7->fields._items;
              v17 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v7->fields._version;
              if ( !items )
                break;
              size = v7->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v7,
                  v15,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
              }
              else
              {
                v19 = &items->obj.klass + size;
                v7->fields._size = size + 1;
                v19[4] = (Il2CppClass *)v15;
                sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v15, v13, v14);
              }
            }
          }
        }
        if ( Count == ++v8 )
          goto LABEL_19;
      }
LABEL_28:
      sub_1C372B4(list);
    }
LABEL_19:
    list = EventBonusFilterMaster___c_TypeInfo;
    if ( !EventBonusFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBonusFilterMaster___c_TypeInfo);
      list = EventBonusFilterMaster___c_TypeInfo;
    }
    v20 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v20 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = EventBonusFilterMaster___c_TypeInfo;
      }
      v21 = (Il2CppObject *)**((_QWORD **)list + 23);
      v20 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventBonusFilterEntity__TypeInfo);
      System_Comparison_object____ctor(v20, v21, Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__4_0__, 0);
      static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)v20;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v20, v23, v24);
    }
    if ( !v7 )
      goto LABEL_28;
    System_Collections_Generic_List_object___Sort_58346216(
      v7,
      v20,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
EventBonusFilterEntity_o *EventBonusFilterMaster__GetEntity(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C42E6C & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
    byte_4C42E6C = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, *(const MethodInfo **)&value);
  return (EventBonusFilterEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_33A5B58 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
}


System_Int32_array *EventBonusFilterMaster__GetEventBonusSkillIds(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        System_Int32_array *objectValues,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  void *list; // x0
  int v9; // w24
  int32_t v10; // w25
  __int64 v11; // x26
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 *v14; // x27
  __int64 v15; // x8
  System_Func_int__bool__o *v16; // x28
  __int64 v17; // x8
  int32_t v18; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+8h] [xbp-68h]

  if ( (byte_4C42E6A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_int____78145032);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_EventBonusFilterMaster___c__DisplayClass5_0__GetEventBonusSkillIds_b__0__);
    sub_1C37058(&EventBonusFilterMaster___c__DisplayClass5_0_TypeInfo);
    byte_4C42E6A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v9 = (int)list;
    v10 = 0;
    while ( 1 )
    {
      v11 = sub_1C372A4(EventBonusFilterMaster___c__DisplayClass5_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
      if ( !v11 )
        break;
      *(_QWORD *)(v11 + 16) = list;
      v14 = (__int64 *)(v11 + 16);
      sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)list, v12, v13);
      v15 = *(_QWORD *)(v11 + 16);
      if ( v15 )
      {
        if ( *(_DWORD *)(v15 + 16) == eventId && (*(_DWORD *)(v15 + 20) & 0xFFFFFFFE) == 4 )
        {
          v16 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v16,
            (Il2CppObject *)v11,
            Method_EventBonusFilterMaster___c__DisplayClass5_0__GetEventBonusSkillIds_b__0__,
            0);
          list = (void *)System_Linq_Enumerable__Any_int__51336052(
                           (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                           (System_Func_TSource__bool__o *)v16,
                           (const MethodInfo_30F5374 *)Method_System_Linq_Enumerable_Any_int____78145032);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            v17 = *v14;
            if ( !*v14 )
              break;
            v18 = *(_DWORD *)(v17 + 24);
            if ( *(_DWORD *)(v17 + 20) == 4 )
            {
              if ( !v7 )
                break;
              items = v7->fields._items;
              v20 = Method_System_Collections_Generic_List_int__Add__;
              ++v7->fields._version;
              if ( !items )
                break;
              size = v7->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v7,
                  v18,
                  *(const MethodInfo_3786000 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
              }
              else
              {
                v7->fields._size = size + 1;
                items->m_Items[size] = v18;
              }
            }
            else
            {
              list = Master_object;
              if ( !Master_object )
                break;
              list = DataMasterBase_object__object__int___GetEntity(
                       Master_object,
                       v18,
                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v7 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v7,
                *((System_Collections_Generic_IEnumerable_T__o **)list + 5),
                (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C372B4(list);
  }
LABEL_26:
  if ( !v7 )
    goto LABEL_28;
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *EventBonusFilterMaster__GetEventIdListBySvtId(
        EventBonusFilterMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  System_Collections_Generic_List_int__o *v7; // x21
  int32_t v8; // w22
  System_Func_int__bool__o **v9; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x24
  System_Int32_array *EquipIdList; // x0
  System_Func_int__bool__o *v14; // x26
  System_Int32_array *v15; // x25
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4C42E66 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_EventBonusFilterMaster___c__DisplayClass1_0__GetEventIdListBySvtId_b__0__);
    sub_1C37058(&EventBonusFilterMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C42E66 = 1;
  }
  v5 = sub_1C372A4(EventBonusFilterMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_DWORD *)(v5 + 16) = svtId;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  v8 = 0;
  v9 = (System_Func_int__bool__o **)(v5 + 24);
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                      (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                      (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_21;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    if ( Item )
    {
      v12 = Item;
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, v11);
      v14 = *v9;
      v15 = EquipIdList;
      if ( !*v9 )
      {
        v14 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v14,
          (Il2CppObject *)v5,
          Method_EventBonusFilterMaster___c__DisplayClass1_0__GetEventIdListBySvtId_b__0__,
          0);
        *(_QWORD *)(v5 + 24) = v14;
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v14, v16, v17);
      }
      list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)BasicHelper__Any_int__51187064(
                                                                                        v15,
                                                                                        (System_Func_T__bool__o *)v14,
                                                                                        (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_21;
        klass = (int32_t)v12[1].klass;
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            klass,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = klass;
        }
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v7 )
LABEL_21:
    sub_1C372B4(list);
  System_Collections_Generic_List_int___Sort(
    v7,
    (const MethodInfo_3787944 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *EventBonusFilterMaster__GetFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        bool ignoreExpCard,
        bool checkIsOpen,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w25
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int items_high; // w8
  Il2CppObject *v17; // x26
  int max_length; // w8
  __int64 v19; // x10
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C42E65 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
    byte_4C42E65 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && eventIdList->max_length && Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
      if ( list )
      {
        items_high = HIDWORD(list->fields.items);
        v17 = (Il2CppObject *)list;
        if ( (items_high != 3 || !ignoreExpCard) && (unsigned int)(items_high - 1) <= 1 )
        {
          if ( !checkIsOpen
            || (list = (System_Collections_ObjectModel_Collection_T__o *)EventBonusFilterEntity__IsOpen(
                                                                           (EventBonusFilterEntity_o *)list,
                                                                           v13),
                ((unsigned __int8)list & 1) != 0) )
          {
            max_length = eventIdList->max_length;
            if ( max_length >= 1 )
            {
              v19 = 0;
              while ( 1 )
              {
                if ( (unsigned int)v19 >= max_length )
                  sub_1C372BC(list);
                if ( LODWORD(v17[1].klass) == eventIdList->m_Items[v19] )
                  break;
                if ( (int)++v19 >= max_length )
                  goto LABEL_26;
              }
              if ( !v11 )
                break;
              items = v11->fields._items;
              v21 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v11->fields._version;
              if ( !items )
                break;
              size = v11->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v11,
                  v17,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v11->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v17;
                sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v17, v14, v15);
              }
            }
          }
        }
      }
LABEL_26:
      if ( ++v12 == Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v11;
    }
LABEL_29:
    sub_1C372B4(list);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v11;
}


System_Int32_array *EventBonusFilterMaster__GetOtherEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  const MethodInfo *v6; // x2
  System_Int32_array *TargetEventEquipIdList; // x0
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Int32_array *v9; // x22
  int32_t v10; // w23
  __int64 v11; // x24
  EventBonusFilterMaster_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  void **v15; // x25
  const MethodInfo *v16; // x1
  System_Func_int__bool__o *v17; // x26
  System_Int32_array *v18; // x24
  unsigned __int64 v19; // x27
  __int64 v20; // x25
  System_Func_int__bool__o *v21; // x26
  int32_t v22; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_Int32_array *v27; // [xsp+8h] [xbp-68h]

  if ( (byte_4C42E68 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_EventBonusFilterMaster___c__DisplayClass3_0__GetOtherEventEquipIdList_b__0__);
    sub_1C37058(&EventBonusFilterMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C37058(&Method_EventBonusFilterMaster___c__DisplayClass3_1__GetOtherEventEquipIdList_b__1__);
    sub_1C37058(&EventBonusFilterMaster___c__DisplayClass3_1_TypeInfo);
    byte_4C42E68 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v27 = eventIdList;
  TargetEventEquipIdList = EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  v9 = TargetEventEquipIdList;
  v10 = 0;
  while ( 1 )
  {
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                     list,
                                                     (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    if ( v10 >= (int)TargetEventEquipIdList )
      break;
    v11 = sub_1C372A4(EventBonusFilterMaster___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    TargetEventEquipIdList = (System_Int32_array *)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_30;
    v12 = this;
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                     (System_Collections_ObjectModel_Collection_T__o *)TargetEventEquipIdList,
                                                     v10,
                                                     (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    if ( !v11 )
      goto LABEL_30;
    *(_QWORD *)(v11 + 16) = TargetEventEquipIdList;
    v15 = (void **)(v11 + 16);
    sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)TargetEventEquipIdList, v13, v14);
    TargetEventEquipIdList = *(System_Int32_array **)(v11 + 16);
    if ( TargetEventEquipIdList )
    {
      if ( v27 )
      {
        v17 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_EventBonusFilterMaster___c__DisplayClass3_0__GetOtherEventEquipIdList_b__0__,
          0);
        TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__51187064(
                                                         v27,
                                                         (System_Func_T__bool__o *)v17,
                                                         (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
        if ( ((unsigned __int8)TargetEventEquipIdList & 1) != 0 )
          goto LABEL_26;
        TargetEventEquipIdList = (System_Int32_array *)*v15;
        if ( !*v15 )
          goto LABEL_30;
      }
      TargetEventEquipIdList = EventBonusFilterEntity__GetEquipIdList(
                                 (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                 v16);
      if ( !TargetEventEquipIdList )
        goto LABEL_30;
      v18 = TargetEventEquipIdList;
      if ( SLODWORD(TargetEventEquipIdList->max_length) >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          v20 = sub_1C372A4(EventBonusFilterMaster___c__DisplayClass3_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v20, 0);
          if ( v19 >= LODWORD(v18->max_length) )
            sub_1C372BC(TargetEventEquipIdList);
          if ( !v20 )
            break;
          *(_DWORD *)(v20 + 16) = v18->m_Items[v19];
          if ( !v9
            || (v21 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v21,
                  (Il2CppObject *)v20,
                  Method_EventBonusFilterMaster___c__DisplayClass3_1__GetOtherEventEquipIdList_b__1__,
                  0),
                TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__51187064(
                                                                 v9,
                                                                 (System_Func_T__bool__o *)v21,
                                                                 (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944),
                ((unsigned __int8)TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v5 )
              break;
            TargetEventEquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                             v5,
                                                             *(_DWORD *)(v20 + 16),
                                                             (const MethodInfo_3786C7C *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
            {
              v22 = *(_DWORD *)(v20 + 16);
              items = v5->fields._items;
              v24 = Method_System_Collections_Generic_List_int__Add__;
              ++v5->fields._version;
              if ( !items )
                break;
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v5,
                  v22,
                  *(const MethodInfo_3786000 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v5->fields._size = size + 1;
                items->m_Items[size] = v22;
              }
            }
          }
          if ( (__int64)++v19 >= SLODWORD(v18->max_length) )
            goto LABEL_26;
        }
LABEL_30:
        sub_1C372B4(TargetEventEquipIdList);
      }
    }
LABEL_26:
    list = (System_Collections_ObjectModel_Collection_T__o *)v12->fields.list;
    this = v12;
    ++v10;
    if ( !list )
      goto LABEL_30;
  }
  if ( !v5 )
    goto LABEL_30;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *EventBonusFilterMaster__GetTargetEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  System_Collections_Generic_List_object__o *FilterList; // x0
  const MethodInfo *v7; // x4
  const MethodInfo *v8; // x1
  System_Int32_array *EquipIdList; // x0
  System_Int32_array *v10; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x26
  int32_t v13; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C42E67 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C42E67 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v5 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( eventIdList )
  {
    FilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetFilterList(
                                                                this,
                                                                eventIdList,
                                                                0,
                                                                1,
                                                                v7);
    if ( !FilterList )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      FilterList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v19.fields._current )
        sub_1C372B4(0);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v19.fields._current, v8);
      v10 = EquipIdList;
      if ( !EquipIdList )
        sub_1C372B4(0);
      max_length = EquipIdList->max_length;
      if ( (int)max_length >= 1 )
      {
        v12 = 0;
        do
        {
          if ( v12 >= (unsigned int)max_length )
            sub_1C372BC(EquipIdList);
          if ( !v5 )
            sub_1C372B4(EquipIdList);
          v13 = v10->m_Items[v12];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v5,
                                                v13,
                                                (const MethodInfo_3786C7C *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
          {
            items = v5->fields._items;
            v15 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !items )
              sub_1C372B4(EquipIdList);
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                v13,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = size + 1;
              items->m_Items[size] = v13;
            }
          }
          LODWORD(max_length) = v10->max_length;
          ++v12;
        }
        while ( (__int64)v12 < (int)max_length );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v5 )
LABEL_28:
    sub_1C372B4(FilterList);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool EventBonusFilterMaster__TryGetEntity(
        EventBonusFilterMaster_o *this,
        EventBonusFilterEntity_o **entity,
        int32_t eventId,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C42E6D & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
    byte_4C42E6D = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42E6E & 1) == 0 )
  {
    sub_1C37058(&EventBonusFilterMaster___c_TypeInfo);
    byte_4C42E6E = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventBonusFilterMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventBonusFilterMaster___c_TypeInfo->static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventBonusFilterMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventBonusFilterMaster___c___ctor(EventBonusFilterMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventBonusFilterMaster___c___GetBonusSkillFilterList_b__4_0(
        EventBonusFilterMaster___c_o *this,
        EventBonusFilterEntity_o *x,
        EventBonusFilterEntity_o *y,
        const MethodInfo *method)
{
  int32_t eventId; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !x || !y )
    sub_1C372B4(this);
  eventId = x->fields.eventId;
  v5 = y->fields.eventId;
  result = eventId - v5;
  if ( eventId == v5 )
    return y->fields.priority - x->fields.priority;
  return result;
}


void EventBonusFilterMaster___c__DisplayClass1_0___ctor(
        EventBonusFilterMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventBonusFilterMaster___c__DisplayClass1_0___GetEventIdListBySvtId_b__0(
        EventBonusFilterMaster___c__DisplayClass1_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


void EventBonusFilterMaster___c__DisplayClass3_0___ctor(
        EventBonusFilterMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventBonusFilterMaster___c__DisplayClass3_0___GetOtherEventEquipIdList_b__0(
        EventBonusFilterMaster___c__DisplayClass3_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C372B4(this);
  return entity->fields.eventId == x;
}


void EventBonusFilterMaster___c__DisplayClass3_1___ctor(
        EventBonusFilterMaster___c__DisplayClass3_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventBonusFilterMaster___c__DisplayClass3_1___GetOtherEventEquipIdList_b__1(
        EventBonusFilterMaster___c__DisplayClass3_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.id == x;
}


void EventBonusFilterMaster___c__DisplayClass4_0___ctor(
        EventBonusFilterMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventBonusFilterMaster___c__DisplayClass4_0___GetBonusSkillFilterList_b__1(
        EventBonusFilterMaster___c__DisplayClass4_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *e; // x8

  e = this->fields.e;
  if ( !e )
    sub_1C372B4(this);
  return e->fields.eventId == eventId;
}


void EventBonusFilterMaster___c__DisplayClass5_0___ctor(
        EventBonusFilterMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventBonusFilterMaster___c__DisplayClass5_0___GetEventBonusSkillIds_b__0(
        EventBonusFilterMaster___c__DisplayClass5_0_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *e; // x8

  e = this->fields.e;
  if ( !e )
    sub_1C372B4(this);
  return e->fields.value == value;
}