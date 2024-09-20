void __fastcall EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B02C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
    byte_4A5B02C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    276,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetBonusSkillFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x19
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w23
  Il2CppObject *v9; // x24
  int32_t v10; // w2
  int32_t v11; // w3
  EventBonusFilterEntity_c *v12; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v14; // x10
  int32_t v15; // w1
  ServantStatusBattleListViewItem_o *v16; // x25
  System_Func_int__bool__o *v17; // x26
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Comparison_T__o *v24; // x19
  Il2CppObject *v25; // x20
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList;
  if ( (byte_4A5B031 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int____76126832);
    sub_1B885B0(&EventBonusFilterEntity_TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
    sub_1B885B0(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__);
    sub_1B885B0(&Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__);
    sub_1B885B0(&EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo);
    sub_1B885B0(&EventBonusFilterMaster___c_TypeInfo);
    byte_4A5B031 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_42;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( v3 && v3[1].monitor )
  {
    if ( Count >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = (Il2CppObject *)sub_1B887FC(EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo);
        System_Object___ctor(v9, 0LL);
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 v8,
                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v9 )
          break;
        if ( list )
        {
          v12 = EventBonusFilterEntity_TypeInfo;
          methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
          {
            if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventBonusFilterEntity_TypeInfo )
              v14 = (Il2CppClass *)list;
            else
              v14 = 0LL;
          }
          else
          {
            v14 = 0LL;
          }
          v9[1].klass = v14;
          v16 = (ServantStatusBattleListViewItem_o *)&v9[1];
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
          {
            if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v12 )
              v15 = (int)list;
            else
              v15 = 0;
          }
          else
          {
            v15 = 0;
          }
        }
        else
        {
          v15 = 0;
          v9[1].klass = 0LL;
          v16 = (ServantStatusBattleListViewItem_o *)&v9[1];
        }
        sub_1B88554(v16, v15, v10, v11);
        if ( v16->klass )
        {
          if ( EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)v16->klass, 4, 0LL) )
            goto LABEL_26;
          list = v16->klass;
          if ( !v16->klass )
            break;
          if ( EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)list, 5, 0LL) )
          {
LABEL_26:
            v17 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v17,
              v9,
              Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__,
              0LL);
            list = (void *)System_Linq_Enumerable__Any_int__48819840(
                             v3,
                             (System_Func_TSource__bool__o *)v17,
                             (const MethodInfo_2E8EE80 *)Method_System_Linq_Enumerable_Any_int____76126832);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v7 )
                break;
              eventIdList = (System_Int32_array *)v16->klass;
              items = v7->fields._items;
              v21 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v7->fields._version;
              if ( !items )
                break;
              size = v7->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v7,
                  &eventIdList->obj,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v7->fields._size = size + 1;
                v23[4] = (Il2CppClass *)eventIdList;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)eventIdList, v18, v19);
              }
            }
          }
        }
        if ( Count == ++v8 )
          goto LABEL_33;
      }
LABEL_42:
      sub_1B8880C(list, eventIdList);
    }
LABEL_33:
    list = EventBonusFilterMaster___c_TypeInfo;
    if ( !EventBonusFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBonusFilterMaster___c_TypeInfo);
      list = EventBonusFilterMaster___c_TypeInfo;
    }
    v24 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v24 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = EventBonusFilterMaster___c_TypeInfo;
      }
      v25 = (Il2CppObject *)**((_QWORD **)list + 23);
      v24 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventBonusFilterEntity__TypeInfo);
      System_Comparison_object____ctor(
        v24,
        v25,
        Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__,
        0LL);
      static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Comparison_EventBonusFilterEntity__o *)v24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v24, v27, v28);
    }
    if ( !v7 )
      goto LABEL_42;
    System_Collections_Generic_List_object___Sort_55571192(
      v7,
      v24,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v7;
}


EventBonusFilterEntity_o *__fastcall EventBonusFilterMaster__GetEntity(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        int32_t type,
        int32_t value,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B02A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
    byte_4A5B02A = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, priority, 0LL);
  return (EventBonusFilterEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetEventBonusSkillIds(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        System_Int32_array *objectValues,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v6; // x22
  __int64 namespaze_low; // x1
  void *list; // x0
  int v9; // w24
  int32_t v10; // w25
  Il2CppObject *v11; // x26
  int32_t v12; // w2
  int32_t v13; // w3
  EventBonusFilterEntity_c *v14; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v16; // x10
  int32_t v17; // w1
  ServantStatusBattleListViewItem_o *v18; // x27
  System_Func_int__bool__o *v19; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+0h] [xbp-70h]

  if ( (byte_4A5B032 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int____76126832);
    sub_1B885B0(&EventBonusFilterEntity_TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__);
    sub_1B885B0(&EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo);
    byte_4A5B032 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v9 = (int)list;
    v10 = 0;
    while ( 1 )
    {
      v11 = (Il2CppObject *)sub_1B887FC(EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo);
      System_Object___ctor(v11, 0LL);
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v11 )
        break;
      if ( list )
      {
        v14 = EventBonusFilterEntity_TypeInfo;
        methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventBonusFilterEntity_TypeInfo )
            v16 = (Il2CppClass *)list;
          else
            v16 = 0LL;
        }
        else
        {
          v16 = 0LL;
        }
        v11[1].klass = v16;
        v18 = (ServantStatusBattleListViewItem_o *)&v11[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v14 )
            v17 = (int)list;
          else
            v17 = 0;
        }
        else
        {
          v17 = 0;
        }
      }
      else
      {
        v17 = 0;
        v11[1].klass = 0LL;
        v18 = (ServantStatusBattleListViewItem_o *)&v11[1];
      }
      sub_1B88554(v18, v17, v12, v13);
      list = v18->klass;
      if ( v18->klass && *((_DWORD *)list + 4) == eventId )
      {
        if ( EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)list, 4, 0LL) )
          goto LABEL_27;
        list = v18->klass;
        if ( !v18->klass )
          break;
        list = (void *)EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)list, 5, 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
LABEL_27:
          v19 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v19,
            v11,
            Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__,
            0LL);
          list = (void *)System_Linq_Enumerable__Any_int__48819840(
                           (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                           (System_Func_TSource__bool__o *)v19,
                           (const MethodInfo_2E8EE80 *)Method_System_Linq_Enumerable_Any_int____76126832);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            list = v18->klass;
            if ( !v18->klass )
              break;
            list = (void *)EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)list, 4, 0LL);
            if ( !v18->klass )
              break;
            namespaze_low = LODWORD(v18->klass->_1.namespaze);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v6 )
                break;
              items = v6->fields._items;
              v21 = Method_System_Collections_Generic_List_int__Add__;
              ++v6->fields._version;
              if ( !items )
                break;
              size = v6->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v6,
                  namespaze_low,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v6->fields._size = size + 1;
                items->m_Items[size + 1] = namespaze_low;
              }
            }
            else
            {
              list = Master_object;
              if ( !Master_object )
                break;
              list = DataMasterBase_object__object__int___GetEntity(
                       Master_object,
                       namespaze_low,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v6 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v6,
                *((System_Collections_Generic_IEnumerable_T__o **)list + 5),
                (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_41;
    }
LABEL_43:
    sub_1B8880C(list, namespaze_low);
  }
LABEL_41:
  if ( !v6 )
    goto LABEL_43;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetEventIdListBySvtId(
        EventBonusFilterMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  __int64 klass_low; // x1
  System_Collections_Generic_List_int__o *v8; // x21
  int32_t v9; // w22
  System_Func_int__bool__o **v10; // x23
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x24
  __int64 methodPtr_low; // x10
  System_Int32_array *EquipIdList; // x0
  System_Func_int__bool__o *v15; // x26
  System_Int32_array *v16; // x25
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4A5B02E & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventBonusFilterEntity_TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__);
    sub_1B885B0(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
    byte_4A5B02E = 1;
  }
  v5 = sub_1B887FC(EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_23;
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  v9 = 0;
  v10 = (System_Func_int__bool__o **)(v5 + 24);
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                             (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v9 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v9,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = Item;
      methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo )
      {
        EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, 0LL);
        v15 = *v10;
        v16 = EquipIdList;
        if ( !*v10 )
        {
          v15 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v15,
            (Il2CppObject *)v5,
            Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__,
            0LL);
          *(_QWORD *)(v5 + 24) = v15;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v15, v17, v18);
        }
        list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)BasicHelper__Any_int__48671312(
                                                                                                 v16,
                                                                                                 (System_Func_T__bool__o *)v15,
                                                                                                 (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_23;
          klass_low = LODWORD(v12[1].klass);
          items = v8->fields._items;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v8,
              klass_low,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v8->fields._size = size + 1;
            items->m_Items[size + 1] = klass_low;
          }
        }
      }
    }
    list = this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_23;
  }
  if ( !v8 )
LABEL_23:
    sub_1B8880C(list, klass_low);
  System_Collections_Generic_List_int___Sort(
    v8,
    (const MethodInfo_34E2154 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        bool ignoreExpCard,
        const MethodInfo *method)
{
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w24
  Il2CppObject *Item; // x0
  EventBonusFilterEntity_o *v12; // x25
  __int64 methodPtr_low; // x10
  int32_t v14; // w2
  int32_t v15; // w3
  signed int max_length; // w8
  __int64 v17; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A5B02D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventBonusFilterEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
    byte_4A5B02D = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length && Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = (EventBonusFilterEntity_o *)Item;
        methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo
          && (!ignoreExpCard || !EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)Item, 3, 0LL)) )
        {
          list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)EventBonusFilterEntity__CheckBonusFilterType(
                                                                                                   v12,
                                                                                                   1,
                                                                                                   0LL);
          if ( ((unsigned __int8)list & 1) != 0
            || (list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)EventBonusFilterEntity__CheckBonusFilterType(v12, 2, 0LL),
                ((unsigned __int8)list & 1) != 0) )
          {
            max_length = eventIdList->max_length;
            if ( max_length >= 1 )
            {
              v17 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v17 >= max_length )
                  sub_1B88814(list, eventIdList);
                if ( v12->fields.eventId == eventIdList->m_Items[v17 + 1] )
                  break;
                if ( (int)++v17 >= max_length )
                  goto LABEL_12;
              }
              if ( !v9 )
                break;
              items = v9->fields._items;
              v19 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v9->fields._version;
              if ( !items )
                break;
              size = v9->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  (Il2CppObject *)v12,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
              }
              else
              {
                v21 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v21[4] = (Il2CppClass *)v12;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v14, v15);
              }
            }
          }
        }
      }
LABEL_12:
      if ( ++v10 == Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v9;
    }
LABEL_30:
    sub_1B8880C(list, eventIdList);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v9;
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetOtherEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  const MethodInfo *v6; // x2
  System_Int32_array *TargetEventEquipIdList; // x0
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Int32_array *v10; // x22
  int32_t v11; // w23
  Il2CppObject *v12; // x24
  int32_t v13; // w2
  int32_t v14; // w3
  EventBonusFilterEntity_c *v15; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v17; // x10
  int32_t v18; // w1
  ServantStatusBattleListViewItem_o *v19; // x25
  System_Func_int__bool__o *v20; // x26
  System_Int32_array *v21; // x24
  unsigned __int64 v22; // x27
  __int64 v23; // x25
  System_Func_int__bool__o *v24; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  System_Int32_array *v29; // [xsp+0h] [xbp-70h]
  EventBonusFilterMaster_o *v30; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5B030 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventBonusFilterEntity_TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__);
    sub_1B885B0(&EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo);
    sub_1B885B0(&Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__);
    sub_1B885B0(&EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo);
    byte_4A5B030 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v29 = eventIdList;
  TargetEventEquipIdList = EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  v10 = TargetEventEquipIdList;
  v11 = 0;
  v30 = this;
  while ( 1 )
  {
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                     list,
                                                     (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v11 >= (int)TargetEventEquipIdList )
      break;
    v12 = (Il2CppObject *)sub_1B887FC(EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor(v12, 0LL);
    TargetEventEquipIdList = (System_Int32_array *)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_42;
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                     (System_Collections_ObjectModel_Collection_T__o *)TargetEventEquipIdList,
                                                     v11,
                                                     (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v12 )
      goto LABEL_42;
    if ( TargetEventEquipIdList )
    {
      v15 = EventBonusFilterEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(TargetEventEquipIdList->obj.klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventBonusFilterEntity_c *)TargetEventEquipIdList->obj.klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo )
          v17 = (Il2CppClass *)TargetEventEquipIdList;
        else
          v17 = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      v12[1].klass = v17;
      v19 = (ServantStatusBattleListViewItem_o *)&v12[1];
      if ( LOBYTE(TargetEventEquipIdList->obj.klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventBonusFilterEntity_c *)TargetEventEquipIdList->obj.klass->_2.typeHierarchy[methodPtr_low - 1] == v15 )
          v18 = (int)TargetEventEquipIdList;
        else
          v18 = 0;
      }
      else
      {
        v18 = 0;
      }
    }
    else
    {
      v18 = 0;
      v12[1].klass = 0LL;
      v19 = (ServantStatusBattleListViewItem_o *)&v12[1];
    }
    sub_1B88554(v19, v18, v13, v14);
    TargetEventEquipIdList = (System_Int32_array *)v19->klass;
    if ( v19->klass )
    {
      if ( v29 )
      {
        v20 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v20,
          v12,
          Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__,
          0LL);
        TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__48671312(
                                                         v29,
                                                         (System_Func_T__bool__o *)v20,
                                                         (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
        if ( ((unsigned __int8)TargetEventEquipIdList & 1) != 0 )
          goto LABEL_38;
        TargetEventEquipIdList = (System_Int32_array *)v19->klass;
        if ( !v19->klass )
          goto LABEL_42;
      }
      TargetEventEquipIdList = EventBonusFilterEntity__GetEquipIdList(
                                 (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                 0LL);
      if ( !TargetEventEquipIdList )
        goto LABEL_42;
      v21 = TargetEventEquipIdList;
      if ( (int)TargetEventEquipIdList->max_length >= 1 )
      {
        v22 = 0LL;
        while ( 1 )
        {
          v23 = sub_1B887FC(EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v23, 0LL);
          if ( v22 >= v21->max_length )
            sub_1B88814(TargetEventEquipIdList, v8);
          if ( !v23 )
            break;
          *(_DWORD *)(v23 + 16) = v21->m_Items[v22 + 1];
          if ( !v10
            || (v24 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v24,
                  (Il2CppObject *)v23,
                  Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__,
                  0LL),
                TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__48671312(
                                                                 v10,
                                                                 (System_Func_T__bool__o *)v24,
                                                                 (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816),
                ((unsigned __int8)TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v5 )
              break;
            TargetEventEquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                             v5,
                                                             *(_DWORD *)(v23 + 16),
                                                             (const MethodInfo_34E148C *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
            {
              v8 = *(unsigned int *)(v23 + 16);
              items = v5->fields._items;
              v26 = Method_System_Collections_Generic_List_int__Add__;
              ++v5->fields._version;
              if ( !items )
                break;
              size = v5->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v5,
                  v8,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v5->fields._size = size + 1;
                items->m_Items[size + 1] = v8;
              }
            }
          }
          if ( (__int64)++v22 >= (int)v21->max_length )
            goto LABEL_38;
        }
LABEL_42:
        sub_1B8880C(TargetEventEquipIdList, v8);
      }
    }
LABEL_38:
    this = v30;
    ++v11;
    list = (System_Collections_ObjectModel_Collection_T__o *)v30->fields.list;
    if ( !list )
      goto LABEL_42;
  }
  if ( !v5 )
    goto LABEL_42;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetTargetEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  System_Collections_Generic_List_object__o *FilterList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  System_Int32_array *EquipIdList; // x0
  __int64 v11; // x1
  System_Int32_array *v12; // x20
  __int64 v13; // x8
  unsigned __int64 v14; // x26
  int32_t v15; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5B02F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5B02F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( eventIdList )
  {
    FilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetFilterList(
                                                                this,
                                                                eventIdList,
                                                                0,
                                                                v8);
    if ( !FilterList )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      FilterList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v21.fields._current )
        sub_1B8880C(0LL, v9);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v21.fields._current, 0LL);
      v12 = EquipIdList;
      if ( !EquipIdList )
        sub_1B8880C(0LL, v11);
      v13 = *(_QWORD *)&EquipIdList->max_length;
      if ( (int)v13 >= 1 )
      {
        v14 = 0LL;
        do
        {
          if ( v14 >= (unsigned int)v13 )
            sub_1B88814(EquipIdList, v11);
          if ( !v5 )
            sub_1B8880C(EquipIdList, v11);
          v15 = v12->m_Items[v14 + 1];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v5,
                                                v15,
                                                (const MethodInfo_34E148C *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
          {
            items = v5->fields._items;
            v17 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !items )
              sub_1B8880C(EquipIdList, v11);
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                v15,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = size + 1;
              items->m_Items[size + 1] = v15;
            }
          }
          LODWORD(v13) = v12->max_length;
          ++v14;
        }
        while ( (__int64)v14 < (int)v13 );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v5 )
LABEL_28:
    sub_1B8880C(FilterList, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall EventBonusFilterMaster__TryGetEntity(
        EventBonusFilterMaster_o *this,
        EventBonusFilterEntity_o **entity,
        int32_t eventId,
        int32_t type,
        int32_t value,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B02B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
    byte_4A5B02B = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, priority, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void __fastcall EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B033 & 1) == 0 )
  {
    sub_1B885B0(&EventBonusFilterMaster___c_TypeInfo);
    byte_4A5B033 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventBonusFilterMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventBonusFilterMaster___c_TypeInfo->static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventBonusFilterMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall EventBonusFilterMaster___c___ctor(EventBonusFilterMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventBonusFilterMaster___c___GetBonusSkillFilterList_b__7_0(
        EventBonusFilterMaster___c_o *this,
        EventBonusFilterEntity_o *x,
        EventBonusFilterEntity_o *y,
        const MethodInfo *method)
{
  int32_t eventId; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !x || !y )
    sub_1B8880C(this, x);
  eventId = x->fields.eventId;
  v5 = y->fields.eventId;
  result = eventId - v5;
  if ( eventId == v5 )
    return y->fields.priority - x->fields.priority;
  return result;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass4_0___ctor(
        EventBonusFilterMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass4_0___GetEventIdListBySvtId_b__0(
        EventBonusFilterMaster___c__DisplayClass4_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass6_0___ctor(
        EventBonusFilterMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass6_0___GetOtherEventEquipIdList_b__0(
        EventBonusFilterMaster___c__DisplayClass6_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B8880C(this, x);
  return entity->fields.eventId == x;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass6_1___ctor(
        EventBonusFilterMaster___c__DisplayClass6_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass6_1___GetOtherEventEquipIdList_b__1(
        EventBonusFilterMaster___c__DisplayClass6_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.id == x;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass7_0___ctor(
        EventBonusFilterMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass7_0___GetBonusSkillFilterList_b__1(
        EventBonusFilterMaster___c__DisplayClass7_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *e; // x8

  e = this->fields.e;
  if ( !e )
    sub_1B8880C(this, eventId);
  return e->fields.eventId == eventId;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass8_0___ctor(
        EventBonusFilterMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass8_0___GetEventBonusSkillIds_b__0(
        EventBonusFilterMaster___c__DisplayClass8_0_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *e; // x8

  e = this->fields.e;
  if ( !e )
    sub_1B8880C(this, value);
  return e->fields.value == value;
}