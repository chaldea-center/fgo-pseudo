void __fastcall EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FD37 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__, method);
    byte_4A6FD37 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    276,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetBonusSkillFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x19
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w23
  Il2CppObject *v22; // x24
  int32_t v23; // w2
  int32_t v24; // w3
  EventBonusFilterEntity_c *v25; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v27; // x10
  int32_t v28; // w1
  ServantStatusBattleListViewItem_o *v29; // x25
  System_Func_int__bool__o *v30; // x26
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Comparison_T__o *v37; // x19
  Il2CppObject *v38; // x20
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList;
  if ( (byte_4A6FD3C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&System_Comparison_EventBonusFilterEntity__TypeInfo, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_Any_int____76211008, v7);
    sub_1B90010(&EventBonusFilterEntity_TypeInfo, v8);
    sub_1B90010(&System_Func_int__bool__TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v12);
    sub_1B90010(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v13);
    sub_1B90010(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__, v14);
    sub_1B90010(&Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__, v15);
    sub_1B90010(&EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, v16);
    sub_1B90010(&EventBonusFilterMaster___c_TypeInfo, v17);
    byte_4A6FD3C = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_42;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( v3 && v3[1].monitor )
  {
    if ( Count >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        v22 = (Il2CppObject *)sub_1B9025C(EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo);
        System_Object___ctor(v22, 0LL);
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 v21,
                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v22 )
          break;
        if ( list )
        {
          v25 = EventBonusFilterEntity_TypeInfo;
          methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
          {
            if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventBonusFilterEntity_TypeInfo )
              v27 = (Il2CppClass *)list;
            else
              v27 = 0LL;
          }
          else
          {
            v27 = 0LL;
          }
          v22[1].klass = v27;
          v29 = (ServantStatusBattleListViewItem_o *)&v22[1];
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
          {
            if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v25 )
              v28 = (int)list;
            else
              v28 = 0;
          }
          else
          {
            v28 = 0;
          }
        }
        else
        {
          v28 = 0;
          v22[1].klass = 0LL;
          v29 = (ServantStatusBattleListViewItem_o *)&v22[1];
        }
        sub_1B8FFB4(v29, v28, v23, v24);
        if ( v29->klass )
        {
          if ( EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)v29->klass, 4, 0LL) )
            goto LABEL_26;
          list = v29->klass;
          if ( !v29->klass )
            break;
          if ( EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)list, 5, 0LL) )
          {
LABEL_26:
            v30 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v30,
              v22,
              Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__,
              0LL);
            list = (void *)System_Linq_Enumerable__Any_int__48879508(
                             v3,
                             (System_Func_TSource__bool__o *)v30,
                             (const MethodInfo_2E9D794 *)Method_System_Linq_Enumerable_Any_int____76211008);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v20 )
                break;
              eventIdList = (System_Int32_array *)v29->klass;
              items = v20->fields._items;
              v34 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  &eventIdList->obj,
                  *(const MethodInfo_35109C0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v36 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v36[4] = (Il2CppClass *)eventIdList;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)eventIdList, v31, v32);
              }
            }
          }
        }
        if ( Count == ++v21 )
          goto LABEL_33;
      }
LABEL_42:
      sub_1B9026C(list, eventIdList);
    }
LABEL_33:
    list = EventBonusFilterMaster___c_TypeInfo;
    if ( !EventBonusFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBonusFilterMaster___c_TypeInfo);
      list = EventBonusFilterMaster___c_TypeInfo;
    }
    v37 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v37 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = EventBonusFilterMaster___c_TypeInfo;
      }
      v38 = (Il2CppObject *)**((_QWORD **)list + 23);
      v37 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventBonusFilterEntity__TypeInfo);
      System_Comparison_object____ctor(
        v37,
        v38,
        Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__,
        0LL);
      static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Comparison_EventBonusFilterEntity__o *)v37;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v37, v40, v41);
    }
    if ( !v20 )
      goto LABEL_42;
    System_Collections_Generic_List_object___Sort_55649412(
      v20,
      v37,
      (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
EventBonusFilterEntity_o *__fastcall EventBonusFilterMaster__GetEntity(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        int32_t type,
        int32_t value,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A6FD35 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4A6FD35 = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, priority, 0LL);
  return (EventBonusFilterEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_312C900 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventBonusFilterMaster__GetEventBonusSkillIds(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        System_Int32_array *objectValues,
        const MethodInfo *method)
{
  __int64 v6; // x1
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
  System_Collections_Generic_List_int__o *v20; // x22
  __int64 namespaze_low; // x1
  void *list; // x0
  int v23; // w24
  int32_t v24; // w25
  Il2CppObject *v25; // x26
  int32_t v26; // w2
  int32_t v27; // w3
  EventBonusFilterEntity_c *v28; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v30; // x10
  int32_t v31; // w1
  ServantStatusBattleListViewItem_o *v32; // x27
  System_Func_int__bool__o *v33; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+0h] [xbp-70h]

  if ( (byte_4A6FD3D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B90010(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, v7);
    sub_1B90010(&DataManager_TypeInfo, v8);
    sub_1B90010(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v9);
    sub_1B90010(&Method_System_Linq_Enumerable_Any_int____76211008, v10);
    sub_1B90010(&EventBonusFilterEntity_TypeInfo, v11);
    sub_1B90010(&System_Func_int__bool__TypeInfo, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B90010(&Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__, v18);
    sub_1B90010(&EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, v19);
    byte_4A6FD3D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = (int)list;
    v24 = 0;
    while ( 1 )
    {
      v25 = (Il2CppObject *)sub_1B9025C(EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo);
      System_Object___ctor(v25, 0LL);
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v24,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v25 )
        break;
      if ( list )
      {
        v28 = EventBonusFilterEntity_TypeInfo;
        methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventBonusFilterEntity_TypeInfo )
            v30 = (Il2CppClass *)list;
          else
            v30 = 0LL;
        }
        else
        {
          v30 = 0LL;
        }
        v25[1].klass = v30;
        v32 = (ServantStatusBattleListViewItem_o *)&v25[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v28 )
            v31 = (int)list;
          else
            v31 = 0;
        }
        else
        {
          v31 = 0;
        }
      }
      else
      {
        v31 = 0;
        v25[1].klass = 0LL;
        v32 = (ServantStatusBattleListViewItem_o *)&v25[1];
      }
      sub_1B8FFB4(v32, v31, v26, v27);
      list = v32->klass;
      if ( v32->klass && *((_DWORD *)list + 4) == eventId )
      {
        if ( EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)list, 4, 0LL) )
          goto LABEL_27;
        list = v32->klass;
        if ( !v32->klass )
          break;
        list = (void *)EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)list, 5, 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
LABEL_27:
          v33 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v33,
            v25,
            Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__,
            0LL);
          list = (void *)System_Linq_Enumerable__Any_int__48879508(
                           (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                           (System_Func_TSource__bool__o *)v33,
                           (const MethodInfo_2E9D794 *)Method_System_Linq_Enumerable_Any_int____76211008);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            list = v32->klass;
            if ( !v32->klass )
              break;
            list = (void *)EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)list, 4, 0LL);
            if ( !v32->klass )
              break;
            namespaze_low = LODWORD(v32->klass->_1.namespaze);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v35 = Method_System_Collections_Generic_List_int__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v20,
                  namespaze_low,
                  *(const MethodInfo_34F399C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v20->fields._size = size + 1;
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
                       (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v20 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v20,
                *((System_Collections_Generic_IEnumerable_T__o **)list + 5),
                (const MethodInfo_34F3BA8 *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_41;
    }
LABEL_43:
    sub_1B9026C(list, namespaze_low);
  }
LABEL_41:
  if ( !v20 )
    goto LABEL_43;
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventBonusFilterMaster__GetEventIdListBySvtId(
        EventBonusFilterMaster_o *this,
        int32_t svtId,
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
  __int64 v15; // x1
  __int64 v16; // x20
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  __int64 klass_low; // x1
  System_Collections_Generic_List_int__o *v19; // x21
  int32_t v20; // w22
  System_Func_int__bool__o **v21; // x23
  Il2CppObject *Item; // x0
  Il2CppObject *v23; // x24
  __int64 methodPtr_low; // x10
  System_Int32_array *EquipIdList; // x0
  System_Func_int__bool__o *v26; // x26
  System_Int32_array *v27; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10

  if ( (byte_4A6FD39 & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Any_int____76172960, *(_QWORD *)&svtId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B90010(&EventBonusFilterEntity_TypeInfo, v7);
    sub_1B90010(&System_Func_int__bool__TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Sort__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B90010(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__, v14);
    sub_1B90010(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo, v15);
    byte_4A6FD39 = 1;
  }
  v16 = sub_1B9025C(EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  *(_DWORD *)(v16 + 16) = svtId;
  v19 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  v20 = 0;
  v21 = (System_Func_int__bool__o **)(v16 + 24);
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                             (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                             (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v20 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v20,
             (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v23 = Item;
      methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo )
      {
        EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, 0LL);
        v26 = *v21;
        v27 = EquipIdList;
        if ( !*v21 )
        {
          v26 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v26,
            (Il2CppObject *)v16,
            Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__,
            0LL);
          *(_QWORD *)(v16 + 24) = v26;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)v26, v28, v29);
        }
        list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)BasicHelper__Any_int__48730980(
                                                                                                 v27,
                                                                                                 (System_Func_T__bool__o *)v26,
                                                                                                 (const MethodInfo_2E79364 *)Method_BasicHelper_Any_int____76172960);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v19 )
            goto LABEL_23;
          klass_low = LODWORD(v23[1].klass);
          items = v19->fields._items;
          v31 = Method_System_Collections_Generic_List_int__Add__;
          ++v19->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v19,
              klass_low,
              *(const MethodInfo_34F399C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v19->fields._size = size + 1;
            items->m_Items[size + 1] = klass_low;
          }
        }
      }
    }
    list = this->fields.list;
    ++v20;
    if ( !list )
      goto LABEL_23;
  }
  if ( !v19 )
LABEL_23:
    sub_1B9026C(list, klass_low);
  System_Collections_Generic_List_int___Sort(
    v19,
    (const MethodInfo_34F52E0 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        bool ignoreExpCard,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v14; // x23
  int32_t v15; // w24
  Il2CppObject *Item; // x0
  EventBonusFilterEntity_o *v17; // x25
  __int64 methodPtr_low; // x10
  int32_t v19; // w2
  int32_t v20; // w3
  signed int max_length; // w8
  __int64 v22; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4A6FD38 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B90010(&EventBonusFilterEntity_TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v10);
    sub_1B90010(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v11);
    byte_4A6FD38 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length && Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v15,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = (EventBonusFilterEntity_o *)Item;
        methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo
          && (!ignoreExpCard || !EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)Item, 3, 0LL)) )
        {
          list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)EventBonusFilterEntity__CheckBonusFilterType(
                                                                                                   v17,
                                                                                                   1,
                                                                                                   0LL);
          if ( ((unsigned __int8)list & 1) != 0
            || (list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)EventBonusFilterEntity__CheckBonusFilterType(v17, 2, 0LL),
                ((unsigned __int8)list & 1) != 0) )
          {
            max_length = eventIdList->max_length;
            if ( max_length >= 1 )
            {
              v22 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v22 >= max_length )
                  sub_1B90274(list, eventIdList);
                if ( v17->fields.eventId == eventIdList->m_Items[v22 + 1] )
                  break;
                if ( (int)++v22 >= max_length )
                  goto LABEL_12;
              }
              if ( !v14 )
                break;
              items = v14->fields._items;
              v24 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v14->fields._version;
              if ( !items )
                break;
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  (Il2CppObject *)v17,
                  *(const MethodInfo_35109C0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v26 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v26[4] = (Il2CppClass *)v17;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v17, v19, v20);
              }
            }
          }
        }
      }
LABEL_12:
      if ( ++v15 == Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v14;
    }
LABEL_30:
    sub_1B9026C(list, eventIdList);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v14;
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetOtherEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_int__o *v18; // x21
  const MethodInfo *v19; // x2
  System_Int32_array *TargetEventEquipIdList; // x0
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Int32_array *v23; // x22
  int32_t v24; // w23
  Il2CppObject *v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  EventBonusFilterEntity_c *v28; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v30; // x10
  int32_t v31; // w1
  ServantStatusBattleListViewItem_o *v32; // x25
  System_Func_int__bool__o *v33; // x26
  System_Int32_array *v34; // x24
  unsigned __int64 v35; // x27
  __int64 v36; // x25
  System_Func_int__bool__o *v37; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  System_Int32_array *v42; // [xsp+0h] [xbp-70h]
  EventBonusFilterMaster_o *v43; // [xsp+8h] [xbp-68h]

  if ( (byte_4A6FD3B & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Any_int____76172960, eventIdList);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B90010(&EventBonusFilterEntity_TypeInfo, v7);
    sub_1B90010(&System_Func_int__bool__TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_int__IndexOf__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B90010(&Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__, v14);
    sub_1B90010(&EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v15);
    sub_1B90010(&Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__, v16);
    sub_1B90010(&EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo, v17);
    byte_4A6FD3B = 1;
  }
  v18 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  v42 = eventIdList;
  TargetEventEquipIdList = EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v19);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  v23 = TargetEventEquipIdList;
  v24 = 0;
  v43 = this;
  while ( 1 )
  {
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                     list,
                                                     (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v24 >= (int)TargetEventEquipIdList )
      break;
    v25 = (Il2CppObject *)sub_1B9025C(EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor(v25, 0LL);
    TargetEventEquipIdList = (System_Int32_array *)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_42;
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                     (System_Collections_ObjectModel_Collection_T__o *)TargetEventEquipIdList,
                                                     v24,
                                                     (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v25 )
      goto LABEL_42;
    if ( TargetEventEquipIdList )
    {
      v28 = EventBonusFilterEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(TargetEventEquipIdList->obj.klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventBonusFilterEntity_c *)TargetEventEquipIdList->obj.klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo )
          v30 = (Il2CppClass *)TargetEventEquipIdList;
        else
          v30 = 0LL;
      }
      else
      {
        v30 = 0LL;
      }
      v25[1].klass = v30;
      v32 = (ServantStatusBattleListViewItem_o *)&v25[1];
      if ( LOBYTE(TargetEventEquipIdList->obj.klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventBonusFilterEntity_c *)TargetEventEquipIdList->obj.klass->_2.typeHierarchy[methodPtr_low - 1] == v28 )
          v31 = (int)TargetEventEquipIdList;
        else
          v31 = 0;
      }
      else
      {
        v31 = 0;
      }
    }
    else
    {
      v31 = 0;
      v25[1].klass = 0LL;
      v32 = (ServantStatusBattleListViewItem_o *)&v25[1];
    }
    sub_1B8FFB4(v32, v31, v26, v27);
    TargetEventEquipIdList = (System_Int32_array *)v32->klass;
    if ( v32->klass )
    {
      if ( v42 )
      {
        v33 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v33,
          v25,
          Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__,
          0LL);
        TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__48730980(
                                                         v42,
                                                         (System_Func_T__bool__o *)v33,
                                                         (const MethodInfo_2E79364 *)Method_BasicHelper_Any_int____76172960);
        if ( ((unsigned __int8)TargetEventEquipIdList & 1) != 0 )
          goto LABEL_38;
        TargetEventEquipIdList = (System_Int32_array *)v32->klass;
        if ( !v32->klass )
          goto LABEL_42;
      }
      TargetEventEquipIdList = EventBonusFilterEntity__GetEquipIdList(
                                 (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                 0LL);
      if ( !TargetEventEquipIdList )
        goto LABEL_42;
      v34 = TargetEventEquipIdList;
      if ( (int)TargetEventEquipIdList->max_length >= 1 )
      {
        v35 = 0LL;
        while ( 1 )
        {
          v36 = sub_1B9025C(EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v36, 0LL);
          if ( v35 >= v34->max_length )
            sub_1B90274(TargetEventEquipIdList, v21);
          if ( !v36 )
            break;
          *(_DWORD *)(v36 + 16) = v34->m_Items[v35 + 1];
          if ( !v23
            || (v37 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v37,
                  (Il2CppObject *)v36,
                  Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__,
                  0LL),
                TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__48730980(
                                                                 v23,
                                                                 (System_Func_T__bool__o *)v37,
                                                                 (const MethodInfo_2E79364 *)Method_BasicHelper_Any_int____76172960),
                ((unsigned __int8)TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v18 )
              break;
            TargetEventEquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                             v18,
                                                             *(_DWORD *)(v36 + 16),
                                                             (const MethodInfo_34F4618 *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
            {
              v21 = *(unsigned int *)(v36 + 16);
              items = v18->fields._items;
              v39 = Method_System_Collections_Generic_List_int__Add__;
              ++v18->fields._version;
              if ( !items )
                break;
              size = v18->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v18,
                  v21,
                  *(const MethodInfo_34F399C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
              }
              else
              {
                v18->fields._size = size + 1;
                items->m_Items[size + 1] = v21;
              }
            }
          }
          if ( (__int64)++v35 >= (int)v34->max_length )
            goto LABEL_38;
        }
LABEL_42:
        sub_1B9026C(TargetEventEquipIdList, v21);
      }
    }
LABEL_38:
    this = v43;
    ++v24;
    list = (System_Collections_ObjectModel_Collection_T__o *)v43->fields.list;
    if ( !list )
      goto LABEL_42;
  }
  if ( !v18 )
    goto LABEL_42;
  return System_Collections_Generic_List_int___ToArray(
           v18,
           (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetTargetEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
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
  System_Collections_Generic_List_int__o *v13; // x19
  System_Collections_Generic_List_object__o *FilterList; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  System_Int32_array *EquipIdList; // x0
  __int64 v19; // x1
  System_Int32_array *v20; // x20
  __int64 v21; // x8
  unsigned __int64 v22; // x26
  int32_t v23; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A6FD3A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, eventIdList);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_int__IndexOf__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_4A6FD3A = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v13 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( eventIdList )
  {
    FilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetFilterList(
                                                                this,
                                                                eventIdList,
                                                                0,
                                                                v16);
    if ( !FilterList )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      FilterList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v29 = v28;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v29.fields._current )
        sub_1B9026C(0LL, v17);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v29.fields._current, 0LL);
      v20 = EquipIdList;
      if ( !EquipIdList )
        sub_1B9026C(0LL, v19);
      v21 = *(_QWORD *)&EquipIdList->max_length;
      if ( (int)v21 >= 1 )
      {
        v22 = 0LL;
        do
        {
          if ( v22 >= (unsigned int)v21 )
            sub_1B90274(EquipIdList, v19);
          if ( !v13 )
            sub_1B9026C(EquipIdList, v19);
          v23 = v20->m_Items[v22 + 1];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v13,
                                                v23,
                                                (const MethodInfo_34F4618 *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
          {
            items = v13->fields._items;
            v25 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !items )
              sub_1B9026C(EquipIdList, v19);
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                v23,
                *(const MethodInfo_34F399C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = size + 1;
              items->m_Items[size + 1] = v23;
            }
          }
          LODWORD(v21) = v20->max_length;
          ++v22;
        }
        while ( (__int64)v22 < (int)v21 );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v13 )
LABEL_28:
    sub_1B9026C(FilterList, v15);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4A6FD36 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__, entity);
    byte_4A6FD36 = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, priority, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void __fastcall EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6FD3E & 1) == 0 )
  {
    sub_1B90010(&EventBonusFilterMaster___c_TypeInfo, v1);
    byte_4A6FD3E = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(EventBonusFilterMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventBonusFilterMaster___c_TypeInfo->static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)EventBonusFilterMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B9026C(this, x);
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
    sub_1B9026C(this, x);
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
    sub_1B9026C(this, eventId);
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
    sub_1B9026C(this, value);
  return e->fields.value == value;
}