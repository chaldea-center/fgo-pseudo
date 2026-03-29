void EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D308A9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
    byte_4D308A9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    282,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *EventBonusFilterMaster__GetBonusSkillFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x19
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w23
  __int64 v9; // x24
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Func_int__bool__o *v16; // x26
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Comparison_T__o *v27; // x19
  Il2CppObject *v28; // x20
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList;
  if ( (byte_4D308A7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_int____79098160);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
    sub_1C93AD4(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__4_0__);
    sub_1C93AD4(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetBonusSkillFilterList_b__1__);
    sub_1C93AD4(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C93AD4(&EventBonusFilterMaster___c_TypeInfo);
    byte_4D308A7 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( v3 && v3[1].monitor )
  {
    if ( Count >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = sub_1C93D20(EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0);
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 v8,
                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
        if ( !v9 )
          break;
        *(_QWORD *)(v9 + 16) = list;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)list, v10, v11, v12, v13, v14, v15);
        if ( *(_QWORD *)(v9 + 16) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v9 + 16) + 20LL) & 0xFFFFFFFE) == 4 )
          {
            v16 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v16,
              (Il2CppObject *)v9,
              Method_EventBonusFilterMaster___c__DisplayClass4_0__GetBonusSkillFilterList_b__1__,
              0);
            list = (void *)System_Linq_Enumerable__Any_int__52110008(
                             v3,
                             (System_Func_TSource__bool__o *)v16,
                             (const MethodInfo_31B22B8 *)Method_System_Linq_Enumerable_Any_int____79098160);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v7 )
                break;
              eventIdList = *(System_Int32_array **)(v9 + 16);
              items = v7->fields._items;
              v24 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v7->fields._version;
              if ( !items )
                break;
              size = v7->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v7,
                  &eventIdList->obj,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v26 = &items->obj.klass + size;
                v7->fields._size = size + 1;
                v26[4] = (Il2CppClass *)eventIdList;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v26 + 4),
                  (int32_t)eventIdList,
                  v17,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22);
              }
            }
          }
        }
        if ( Count == ++v8 )
          goto LABEL_19;
      }
LABEL_28:
      sub_1C93D2C(list, eventIdList);
    }
LABEL_19:
    list = EventBonusFilterMaster___c_TypeInfo;
    if ( !EventBonusFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBonusFilterMaster___c_TypeInfo);
      list = EventBonusFilterMaster___c_TypeInfo;
    }
    v27 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v27 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = EventBonusFilterMaster___c_TypeInfo;
      }
      v28 = (Il2CppObject *)**((_QWORD **)list + 23);
      v27 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventBonusFilterEntity__TypeInfo);
      System_Comparison_object____ctor(v27, v28, Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__4_0__, 0);
      static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)v27;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)v27, v30, v31, v32, v33, v34, v35);
    }
    if ( !v7 )
      goto LABEL_28;
    System_Collections_Generic_List_object___Sort_59225184(
      v7,
      v27,
      (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
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

  if ( (byte_4D308AA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
    byte_4D308AA = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, *(const MethodInfo **)&value);
  return (EventBonusFilterEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_34681D4 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
}


System_Int32_array *EventBonusFilterMaster__GetEventBonusSkillIds(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        System_Int32_array *objectValues,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  __int64 v8; // x1
  void *list; // x0
  int v10; // w24
  int32_t v11; // w25
  __int64 v12; // x26
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 *v19; // x27
  __int64 v20; // x8
  System_Func_int__bool__o *v21; // x28
  __int64 v22; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+8h] [xbp-68h]

  if ( (byte_4D308A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_int____79098160);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_EventBonusFilterMaster___c__DisplayClass5_0__GetEventBonusSkillIds_b__0__);
    sub_1C93AD4(&EventBonusFilterMaster___c__DisplayClass5_0_TypeInfo);
    byte_4D308A8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      v12 = sub_1C93D20(EventBonusFilterMaster___c__DisplayClass5_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v12, 0);
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v11,
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
      if ( !v12 )
        break;
      *(_QWORD *)(v12 + 16) = list;
      v19 = (__int64 *)(v12 + 16);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 16), (int32_t)list, v13, v14, v15, v16, v17, v18);
      v20 = *(_QWORD *)(v12 + 16);
      if ( v20 )
      {
        if ( *(_DWORD *)(v20 + 16) == eventId && (*(_DWORD *)(v20 + 20) & 0xFFFFFFFE) == 4 )
        {
          v21 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v21,
            (Il2CppObject *)v12,
            Method_EventBonusFilterMaster___c__DisplayClass5_0__GetEventBonusSkillIds_b__0__,
            0);
          list = (void *)System_Linq_Enumerable__Any_int__52110008(
                           (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                           (System_Func_TSource__bool__o *)v21,
                           (const MethodInfo_31B22B8 *)Method_System_Linq_Enumerable_Any_int____79098160);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            v22 = *v19;
            if ( !*v19 )
              break;
            v8 = *(unsigned int *)(v22 + 24);
            if ( *(_DWORD *)(v22 + 20) == 4 )
            {
              if ( !v7 )
                break;
              items = v7->fields._items;
              v24 = Method_System_Collections_Generic_List_int__Add__;
              ++v7->fields._version;
              if ( !items )
                break;
              size = v7->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v7,
                  v8,
                  *(const MethodInfo_385C978 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v7->fields._size = size + 1;
                items->m_Items[size] = v8;
              }
            }
            else
            {
              list = Master_object;
              if ( !Master_object )
                break;
              list = DataMasterBase_object__object__int___GetEntity(
                       Master_object,
                       v8,
                       (const MethodInfo_3463274 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v7 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v7,
                *((System_Collections_Generic_IEnumerable_T__o **)list + 5),
                (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C93D2C(list, v8);
  }
LABEL_26:
  if ( !v7 )
    goto LABEL_28;
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *EventBonusFilterMaster__GetEventIdListBySvtId(
        EventBonusFilterMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  const MethodInfo *klass_low; // x1
  System_Collections_Generic_List_int__o *v8; // x21
  int32_t v9; // w22
  System_Func_int__bool__o **v10; // x23
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x24
  System_Int32_array *EquipIdList; // x0
  System_Func_int__bool__o *v14; // x26
  System_Int32_array *v15; // x25
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10

  if ( (byte_4D308A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_EventBonusFilterMaster___c__DisplayClass1_0__GetEventIdListBySvtId_b__0__);
    sub_1C93AD4(&EventBonusFilterMaster___c__DisplayClass1_0_TypeInfo);
    byte_4D308A4 = 1;
  }
  v5 = sub_1C93D20(EventBonusFilterMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  v9 = 0;
  v10 = (System_Func_int__bool__o **)(v5 + 24);
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                      (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                      (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    if ( v9 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_21;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v9,
             (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    if ( Item )
    {
      v12 = Item;
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, klass_low);
      v14 = *v10;
      v15 = EquipIdList;
      if ( !*v10 )
      {
        v14 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v14,
          (Il2CppObject *)v5,
          Method_EventBonusFilterMaster___c__DisplayClass1_0__GetEventIdListBySvtId_b__0__,
          0);
        *(_QWORD *)(v5 + 24) = v14;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)v14, v16, v17, v18, v19, v20, v21);
      }
      list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)BasicHelper__Any_int__51960056(
                                                                                        v15,
                                                                                        (System_Func_T__bool__o *)v14,
                                                                                        (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_21;
        klass_low = (const MethodInfo *)LODWORD(v12[1].klass);
        items = v8->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            (int32_t)klass_low,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size] = (int)klass_low;
        }
      }
    }
    list = this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v8 )
LABEL_21:
    sub_1C93D2C(list, klass_low);
  System_Collections_Generic_List_int___Sort(
    v8,
    (const MethodInfo_385E2BC *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int items_high; // w8
  Il2CppObject *v20; // x26
  int max_length; // w8
  __int64 v22; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4D308A3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
    byte_4D308A3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
      if ( list )
      {
        items_high = HIDWORD(list->fields.items);
        v20 = (Il2CppObject *)list;
        if ( (items_high != 3 || !ignoreExpCard) && (unsigned int)(items_high - 1) <= 1 )
        {
          if ( !checkIsOpen
            || (list = (System_Collections_ObjectModel_Collection_T__o *)EventBonusFilterEntity__IsOpen(
                                                                           (EventBonusFilterEntity_o *)list,
                                                                           (const MethodInfo *)eventIdList),
                ((unsigned __int8)list & 1) != 0) )
          {
            max_length = eventIdList->max_length;
            if ( max_length >= 1 )
            {
              v22 = 0;
              while ( 1 )
              {
                if ( (unsigned int)v22 >= max_length )
                  sub_1C93D34(list);
                if ( LODWORD(v20[1].klass) == eventIdList->m_Items[v22] )
                  break;
                if ( (int)++v22 >= max_length )
                  goto LABEL_26;
              }
              if ( !v11 )
                break;
              items = v11->fields._items;
              v24 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v11->fields._version;
              if ( !items )
                break;
              size = v11->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v11,
                  v20,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v26 = &items->obj.klass + size;
                v11->fields._size = size + 1;
                v26[4] = (Il2CppClass *)v20;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v20, v13, v14, v15, v16, v17, v18);
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
    sub_1C93D2C(list, eventIdList);
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
  const MethodInfo *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Int32_array *v10; // x22
  int32_t v11; // w23
  __int64 v12; // x24
  EventBonusFilterMaster_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  void **v20; // x25
  System_Func_int__bool__o *v21; // x26
  System_Int32_array *v22; // x24
  unsigned __int64 v23; // x27
  __int64 v24; // x25
  System_Func_int__bool__o *v25; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_Int32_array *v30; // [xsp+8h] [xbp-68h]

  if ( (byte_4D308A6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_EventBonusFilterMaster___c__DisplayClass3_0__GetOtherEventEquipIdList_b__0__);
    sub_1C93AD4(&EventBonusFilterMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C93AD4(&Method_EventBonusFilterMaster___c__DisplayClass3_1__GetOtherEventEquipIdList_b__1__);
    sub_1C93AD4(&EventBonusFilterMaster___c__DisplayClass3_1_TypeInfo);
    byte_4D308A6 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = eventIdList;
  TargetEventEquipIdList = EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  v10 = TargetEventEquipIdList;
  v11 = 0;
  while ( 1 )
  {
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                     list,
                                                     (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    if ( v11 >= (int)TargetEventEquipIdList )
      break;
    v12 = sub_1C93D20(EventBonusFilterMaster___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    TargetEventEquipIdList = (System_Int32_array *)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_30;
    v13 = this;
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                     (System_Collections_ObjectModel_Collection_T__o *)TargetEventEquipIdList,
                                                     v11,
                                                     (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    if ( !v12 )
      goto LABEL_30;
    *(_QWORD *)(v12 + 16) = TargetEventEquipIdList;
    v20 = (void **)(v12 + 16);
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)(v12 + 16),
      (int32_t)TargetEventEquipIdList,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    TargetEventEquipIdList = *(System_Int32_array **)(v12 + 16);
    if ( TargetEventEquipIdList )
    {
      if ( v30 )
      {
        v21 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v21,
          (Il2CppObject *)v12,
          Method_EventBonusFilterMaster___c__DisplayClass3_0__GetOtherEventEquipIdList_b__0__,
          0);
        TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__51960056(
                                                         v30,
                                                         (System_Func_T__bool__o *)v21,
                                                         (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
        if ( ((unsigned __int8)TargetEventEquipIdList & 1) != 0 )
          goto LABEL_26;
        TargetEventEquipIdList = (System_Int32_array *)*v20;
        if ( !*v20 )
          goto LABEL_30;
      }
      TargetEventEquipIdList = EventBonusFilterEntity__GetEquipIdList(
                                 (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                 v8);
      if ( !TargetEventEquipIdList )
        goto LABEL_30;
      v22 = TargetEventEquipIdList;
      if ( SLODWORD(TargetEventEquipIdList->max_length) >= 1 )
      {
        v23 = 0;
        while ( 1 )
        {
          v24 = sub_1C93D20(EventBonusFilterMaster___c__DisplayClass3_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v24, 0);
          if ( v23 >= LODWORD(v22->max_length) )
            sub_1C93D34(TargetEventEquipIdList);
          if ( !v24 )
            break;
          *(_DWORD *)(v24 + 16) = v22->m_Items[v23];
          if ( !v10
            || (v25 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v25,
                  (Il2CppObject *)v24,
                  Method_EventBonusFilterMaster___c__DisplayClass3_1__GetOtherEventEquipIdList_b__1__,
                  0),
                TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__51960056(
                                                                 v10,
                                                                 (System_Func_T__bool__o *)v25,
                                                                 (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720),
                ((unsigned __int8)TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v5 )
              break;
            TargetEventEquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                             v5,
                                                             *(_DWORD *)(v24 + 16),
                                                             (const MethodInfo_385D5F4 *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
            {
              v8 = (const MethodInfo *)*(unsigned int *)(v24 + 16);
              items = v5->fields._items;
              v27 = Method_System_Collections_Generic_List_int__Add__;
              ++v5->fields._version;
              if ( !items )
                break;
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v5,
                  (int32_t)v8,
                  *(const MethodInfo_385C978 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                v5->fields._size = size + 1;
                items->m_Items[size] = (int)v8;
              }
            }
          }
          if ( (__int64)++v23 >= SLODWORD(v22->max_length) )
            goto LABEL_26;
        }
LABEL_30:
        sub_1C93D2C(TargetEventEquipIdList, v8);
      }
    }
LABEL_26:
    list = (System_Collections_ObjectModel_Collection_T__o *)v13->fields.list;
    this = v13;
    ++v11;
    if ( !list )
      goto LABEL_30;
  }
  if ( !v5 )
    goto LABEL_30;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *EventBonusFilterMaster__GetTargetEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  System_Collections_Generic_List_object__o *FilterList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x1
  System_Int32_array *EquipIdList; // x0
  __int64 v11; // x1
  System_Int32_array *v12; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x26
  int32_t v15; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D308A5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D308A5 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( eventIdList )
  {
    FilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetFilterList(
                                                                this,
                                                                eventIdList,
                                                                0,
                                                                1,
                                                                v8);
    if ( !FilterList )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      FilterList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v21.fields._current )
        sub_1C93D2C(0, v9);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v21.fields._current, v9);
      v12 = EquipIdList;
      if ( !EquipIdList )
        sub_1C93D2C(0, v11);
      max_length = EquipIdList->max_length;
      if ( (int)max_length >= 1 )
      {
        v14 = 0;
        do
        {
          if ( v14 >= (unsigned int)max_length )
            sub_1C93D34(EquipIdList);
          if ( !v5 )
            sub_1C93D2C(EquipIdList, v11);
          v15 = v12->m_Items[v14];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v5,
                                                v15,
                                                (const MethodInfo_385D5F4 *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
          {
            items = v5->fields._items;
            v17 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !items )
              sub_1C93D2C(EquipIdList, v11);
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                v15,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = size + 1;
              items->m_Items[size] = v15;
            }
          }
          LODWORD(max_length) = v12->max_length;
          ++v14;
        }
        while ( (__int64)v14 < (int)max_length );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v5 )
LABEL_28:
    sub_1C93D2C(FilterList, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4D308AB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
    byte_4D308AB = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D308AC & 1) == 0 )
  {
    sub_1C93AD4(&EventBonusFilterMaster___c_TypeInfo);
    byte_4D308AC = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventBonusFilterMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventBonusFilterMaster___c_TypeInfo->static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventBonusFilterMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, x);
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
    sub_1C93D2C(this, x);
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
    sub_1C93D2C(this, eventId);
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
    sub_1C93D2C(this, value);
  return e->fields.value == value;
}