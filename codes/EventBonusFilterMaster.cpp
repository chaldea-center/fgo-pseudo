void __fastcall EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC2DE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__, method);
    byte_49FC2DE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    276,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetBonusSkillFilterList(
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
  void *list; // x0
  int32_t Count; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t v25; // w23
  Il2CppObject *v26; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  EventBonusFilterEntity_c *v29; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v31; // x10
  int32_t v32; // w1
  ServantStatusBattleListViewItem_o *v33; // x25
  System_Func_int__bool__o *v34; // x26
  int32_t v35; // w3
  Il2CppObject *klass; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Comparison_T__o *v41; // x19
  Il2CppObject *v42; // x20
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  int32_t v45; // w3

  if ( (byte_49FC2E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_EventBonusFilterEntity__TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_int____75747256, v7);
    sub_1B640C8(&EventBonusFilterEntity_TypeInfo, v8);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v13);
    sub_1B640C8(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__, v14);
    sub_1B640C8(&Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__, v15);
    sub_1B640C8(&EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, v16);
    sub_1B640C8(&EventBonusFilterMaster___c_TypeInfo, v17);
    byte_49FC2E3 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_40;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length )
  {
    if ( Count >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        v26 = (Il2CppObject *)sub_1B64314(EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, v23, v24);
        System_Object___ctor(v26, 0LL);
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 v25,
                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v26 )
          break;
        if ( list )
        {
          v29 = EventBonusFilterEntity_TypeInfo;
          methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
          {
            if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventBonusFilterEntity_TypeInfo )
              v31 = (Il2CppClass *)list;
            else
              v31 = 0LL;
          }
          else
          {
            v31 = 0LL;
          }
          v26[1].klass = v31;
          v33 = (ServantStatusBattleListViewItem_o *)&v26[1];
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
          {
            if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v29 )
              v32 = (int)list;
            else
              v32 = 0;
          }
          else
          {
            v32 = 0;
          }
        }
        else
        {
          v32 = 0;
          v26[1].klass = 0LL;
          v33 = (ServantStatusBattleListViewItem_o *)&v26[1];
        }
        sub_1B6406C(v33, v32, v27, v28);
        if ( v33->klass )
        {
          if ( (HIDWORD(v33->klass->_1.name) & 0xFFFFFFFE) == 4 )
          {
            v34 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v23, v24);
            System_Func_int__bool____ctor(
              v34,
              v26,
              Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__,
              0LL);
            list = (void *)System_Linq_Enumerable__Any_int__48531000(
                             (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                             (System_Func_TSource__bool__o *)v34,
                             (const MethodInfo_2E48638 *)Method_System_Linq_Enumerable_Any_int____75747256);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v22 )
                break;
              klass = (Il2CppObject *)v33->klass;
              items = v22->fields._items;
              v38 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v22->fields._version;
              if ( !items )
                break;
              size = v22->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  klass,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v40 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v40[4] = (Il2CppClass *)klass;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)klass, v24, v35);
              }
            }
          }
        }
        if ( Count == ++v25 )
          goto LABEL_31;
      }
LABEL_40:
      sub_1B64324(list);
    }
LABEL_31:
    list = EventBonusFilterMaster___c_TypeInfo;
    if ( !EventBonusFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBonusFilterMaster___c_TypeInfo);
      list = EventBonusFilterMaster___c_TypeInfo;
    }
    v41 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v41 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = EventBonusFilterMaster___c_TypeInfo;
      }
      v42 = (Il2CppObject *)**((_QWORD **)list + 23);
      v41 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventBonusFilterEntity__TypeInfo, v23, v24);
      System_Comparison_object____ctor(
        v41,
        v42,
        Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__,
        0LL);
      static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Comparison_EventBonusFilterEntity__o *)v41;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v41, v44, v45);
    }
    if ( !v22 )
      goto LABEL_40;
    System_Collections_Generic_List_object___Sort_55243320(
      v22,
      v41,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v22;
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

  if ( (byte_49FC2DC & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FC2DC = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&priority);
  return (EventBonusFilterEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x22
  void *list; // x0
  __int64 namespaze_low; // x1
  __int64 v25; // x2
  int v26; // w24
  int32_t v27; // w25
  Il2CppObject *v28; // x26
  int32_t v29; // w2
  int32_t v30; // w3
  EventBonusFilterEntity_c *v31; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v33; // x10
  int32_t v34; // w1
  ServantStatusBattleListViewItem_o *v35; // x27
  ServantStatusBattleListViewItem_c *klass; // x8
  System_Func_int__bool__o *v37; // x28
  ServantStatusBattleListViewItem_c *v38; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+0h] [xbp-70h]

  if ( (byte_49FC2E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_int____75747256, v10);
    sub_1B640C8(&EventBonusFilterEntity_TypeInfo, v11);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B640C8(&Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__, v18);
    sub_1B640C8(&EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, v19);
    byte_49FC2E4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_40;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v26 = (int)list;
    v27 = 0;
    while ( 1 )
    {
      v28 = (Il2CppObject *)sub_1B64314(EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, namespaze_low, v25);
      System_Object___ctor(v28, 0LL);
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v27,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v28 )
        break;
      if ( list )
      {
        v31 = EventBonusFilterEntity_TypeInfo;
        methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventBonusFilterEntity_TypeInfo )
            v33 = (Il2CppClass *)list;
          else
            v33 = 0LL;
        }
        else
        {
          v33 = 0LL;
        }
        v28[1].klass = v33;
        v35 = (ServantStatusBattleListViewItem_o *)&v28[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v31 )
            v34 = (int)list;
          else
            v34 = 0;
        }
        else
        {
          v34 = 0;
        }
      }
      else
      {
        v34 = 0;
        v28[1].klass = 0LL;
        v35 = (ServantStatusBattleListViewItem_o *)&v28[1];
      }
      sub_1B6406C(v35, v34, v29, v30);
      klass = v35->klass;
      if ( v35->klass )
      {
        if ( LODWORD(klass->_1.name) == eventId && (HIDWORD(klass->_1.name) & 0xFFFFFFFE) == 4 )
        {
          v37 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, namespaze_low, v25);
          System_Func_int__bool____ctor(
            v37,
            v28,
            Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__,
            0LL);
          list = (void *)System_Linq_Enumerable__Any_int__48531000(
                           (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                           (System_Func_TSource__bool__o *)v37,
                           (const MethodInfo_2E48638 *)Method_System_Linq_Enumerable_Any_int____75747256);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            v38 = v35->klass;
            if ( !v35->klass )
              break;
            namespaze_low = LODWORD(v38->_1.namespaze);
            if ( HIDWORD(v38->_1.name) == 4 )
            {
              if ( !v22 )
                break;
              items = v22->fields._items;
              v40 = Method_System_Collections_Generic_List_int__Add__;
              ++v22->fields._version;
              if ( !items )
                break;
              size = v22->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v22,
                  namespaze_low,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
              }
              else
              {
                v22->fields._size = size + 1;
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
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v22 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v22,
                *((System_Collections_Generic_IEnumerable_T__o **)list + 5),
                (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( v26 == ++v27 )
        goto LABEL_38;
    }
LABEL_40:
    sub_1B64324(list);
  }
LABEL_38:
  if ( !v22 )
    goto LABEL_40;
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x21
  int32_t v21; // w22
  System_Func_int__bool__o **v22; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v24; // x1
  Il2CppObject *v25; // x24
  __int64 methodPtr_low; // x10
  System_Int32_array *EquipIdList; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Func_int__bool__o *v30; // x26
  System_Int32_array *v31; // x25
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10

  if ( (byte_49FC2E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B640C8(&EventBonusFilterEntity_TypeInfo, v7);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Sort__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__, v14);
    sub_1B640C8(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo, v15);
    byte_49FC2E0 = 1;
  }
  v16 = sub_1B64314(EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo, *(_QWORD *)&svtId, method);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  *(_DWORD *)(v16 + 16) = svtId;
  v20 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v18, v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  v21 = 0;
  v22 = (System_Func_int__bool__o **)(v16 + 24);
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                             (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v21,
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v25 = Item;
      methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo )
      {
        EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, v24);
        v30 = *v22;
        v31 = EquipIdList;
        if ( !*v22 )
        {
          v30 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v28, v29);
          System_Func_int__bool____ctor(
            v30,
            (Il2CppObject *)v16,
            Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__,
            0LL);
          *(_QWORD *)(v16 + 24) = v30;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)v30, v32, v33);
        }
        list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)BasicHelper__Any_int__48383472(
                                                                                                 v31,
                                                                                                 (System_Func_T__bool__o *)v30,
                                                                                                 (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v20 )
            goto LABEL_23;
          klass = (int32_t)v25[1].klass;
          items = v20->fields._items;
          v36 = Method_System_Collections_Generic_List_int__Add__;
          ++v20->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v20,
              klass,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v20->fields._size = size + 1;
            items->m_Items[size + 1] = klass;
          }
        }
      }
    }
    list = this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_23;
  }
  if ( !v20 )
LABEL_23:
    sub_1B64324(list);
  System_Collections_Generic_List_int___Sort(
    v20,
    (const MethodInfo_34918C0 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        bool ignoreExpCard,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x23
  int32_t v17; // w24
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_ObjectModel_Collection_T__o *v20; // x1
  __int64 methodPtr_low; // x10
  int items_high; // w8
  unsigned int v23; // w9
  _BOOL4 v24; // w8
  signed int max_length; // w8
  __int64 v26; // x10
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  v4 = ignoreExpCard;
  if ( (byte_49FC2DF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&EventBonusFilterEntity_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v11);
    byte_49FC2DF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length && Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = list;
        methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventBonusFilterEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo )
        {
          items_high = HIDWORD(list->fields.items);
          v23 = items_high - 1;
          v24 = items_high == 3;
          if ( v23 <= 1 && (!v24 || !v4) )
          {
            max_length = eventIdList->max_length;
            if ( max_length >= 1 )
            {
              v26 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v26 >= max_length )
                  sub_1B6432C(list, list);
                if ( LODWORD(list->fields.items) == eventIdList->m_Items[v26 + 1] )
                  break;
                if ( (int)++v26 >= max_length )
                  goto LABEL_12;
              }
              if ( !v16 )
                break;
              items = v16->fields._items;
              v28 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v16->fields._version;
              if ( !items )
                break;
              size = v16->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v16,
                  (Il2CppObject *)list,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                v16->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v20;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v20, v18, v19);
              }
            }
          }
        }
      }
LABEL_12:
      if ( ++v17 == Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v16;
    }
LABEL_28:
    sub_1B64324(list);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v16;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Int32_array *v22; // x22
  int32_t v23; // w23
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  EventBonusFilterEntity_c *v29; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v31; // x10
  int32_t v32; // w1
  ServantStatusBattleListViewItem_o *v33; // x25
  const MethodInfo *v34; // x1
  __int64 v35; // x2
  System_Func_int__bool__o *v36; // x26
  __int64 v37; // x1
  __int64 v38; // x2
  System_Int32_array *v39; // x24
  unsigned __int64 v40; // x27
  __int64 v41; // x25
  __int64 v42; // x1
  __int64 v43; // x2
  System_Func_int__bool__o *v44; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  System_Int32_array *v49; // [xsp+0h] [xbp-70h]
  EventBonusFilterMaster_o *v50; // [xsp+8h] [xbp-68h]

  if ( (byte_49FC2E2 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, eventIdList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B640C8(&EventBonusFilterEntity_TypeInfo, v7);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__IndexOf__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__, v14);
    sub_1B640C8(&EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v15);
    sub_1B640C8(&Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__, v16);
    sub_1B640C8(&EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo, v17);
    byte_49FC2E2 = 1;
  }
  v18 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    eventIdList,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v49 = eventIdList;
  TargetEventEquipIdList = EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v19);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  v22 = TargetEventEquipIdList;
  v23 = 0;
  v50 = this;
  while ( 1 )
  {
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                     list,
                                                     (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v23 >= (int)TargetEventEquipIdList )
      break;
    v26 = (Il2CppObject *)sub_1B64314(EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v24, v25);
    System_Object___ctor(v26, 0LL);
    TargetEventEquipIdList = (System_Int32_array *)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_42;
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                     (System_Collections_ObjectModel_Collection_T__o *)TargetEventEquipIdList,
                                                     v23,
                                                     (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v26 )
      goto LABEL_42;
    if ( TargetEventEquipIdList )
    {
      v29 = EventBonusFilterEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(TargetEventEquipIdList->obj.klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventBonusFilterEntity_c *)TargetEventEquipIdList->obj.klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo )
          v31 = (Il2CppClass *)TargetEventEquipIdList;
        else
          v31 = 0LL;
      }
      else
      {
        v31 = 0LL;
      }
      v26[1].klass = v31;
      v33 = (ServantStatusBattleListViewItem_o *)&v26[1];
      if ( LOBYTE(TargetEventEquipIdList->obj.klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventBonusFilterEntity_c *)TargetEventEquipIdList->obj.klass->_2.typeHierarchy[methodPtr_low - 1] == v29 )
          v32 = (int)TargetEventEquipIdList;
        else
          v32 = 0;
      }
      else
      {
        v32 = 0;
      }
    }
    else
    {
      v32 = 0;
      v26[1].klass = 0LL;
      v33 = (ServantStatusBattleListViewItem_o *)&v26[1];
    }
    sub_1B6406C(v33, v32, v27, v28);
    TargetEventEquipIdList = (System_Int32_array *)v33->klass;
    if ( v33->klass )
    {
      if ( v49 )
      {
        v36 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v34, v35);
        System_Func_int__bool____ctor(
          v36,
          v26,
          Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__,
          0LL);
        TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__48383472(
                                                         v49,
                                                         (System_Func_T__bool__o *)v36,
                                                         (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
        if ( ((unsigned __int8)TargetEventEquipIdList & 1) != 0 )
          goto LABEL_38;
        TargetEventEquipIdList = (System_Int32_array *)v33->klass;
        if ( !v33->klass )
          goto LABEL_42;
      }
      TargetEventEquipIdList = EventBonusFilterEntity__GetEquipIdList(
                                 (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                 v34);
      if ( !TargetEventEquipIdList )
        goto LABEL_42;
      v39 = TargetEventEquipIdList;
      if ( (int)TargetEventEquipIdList->max_length >= 1 )
      {
        v40 = 0LL;
        while ( 1 )
        {
          v41 = sub_1B64314(EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo, v37, v38);
          System_Object___ctor((Il2CppObject *)v41, 0LL);
          if ( v40 >= v39->max_length )
            sub_1B6432C(TargetEventEquipIdList, v42);
          if ( !v41 )
            break;
          *(_DWORD *)(v41 + 16) = v39->m_Items[v40 + 1];
          if ( !v22
            || (v44 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v42, v43),
                System_Func_int__bool____ctor(
                  v44,
                  (Il2CppObject *)v41,
                  Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__,
                  0LL),
                TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__48383472(
                                                                 v22,
                                                                 (System_Func_T__bool__o *)v44,
                                                                 (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408),
                ((unsigned __int8)TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v18 )
              break;
            TargetEventEquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                             v18,
                                                             *(_DWORD *)(v41 + 16),
                                                             (const MethodInfo_3490BF8 *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
            {
              v37 = *(unsigned int *)(v41 + 16);
              items = v18->fields._items;
              v46 = Method_System_Collections_Generic_List_int__Add__;
              ++v18->fields._version;
              if ( !items )
                break;
              size = v18->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v18,
                  v37,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              }
              else
              {
                v18->fields._size = size + 1;
                items->m_Items[size + 1] = v37;
              }
            }
          }
          if ( (__int64)++v40 >= (int)v39->max_length )
            goto LABEL_38;
        }
LABEL_42:
        sub_1B64324(TargetEventEquipIdList);
      }
    }
LABEL_38:
    this = v50;
    ++v23;
    list = (System_Collections_ObjectModel_Collection_T__o *)v50->fields.list;
    if ( !list )
      goto LABEL_42;
  }
  if ( !v18 )
    goto LABEL_42;
  return System_Collections_Generic_List_int___ToArray(
           v18,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  System_Int32_array *EquipIdList; // x0
  __int64 v18; // x1
  System_Int32_array *v19; // x20
  __int64 v20; // x8
  unsigned __int64 v21; // x26
  int32_t v22; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FC2E1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, eventIdList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__IndexOf__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_49FC2E1 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    eventIdList,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( eventIdList )
  {
    FilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetFilterList(
                                                                this,
                                                                eventIdList,
                                                                0,
                                                                v15);
    if ( !FilterList )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      FilterList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v28 = v27;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v28.fields._current )
        sub_1B64324(0LL);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v28.fields._current, v16);
      v19 = EquipIdList;
      if ( !EquipIdList )
        sub_1B64324(0LL);
      v20 = *(_QWORD *)&EquipIdList->max_length;
      if ( (int)v20 >= 1 )
      {
        v21 = 0LL;
        do
        {
          if ( v21 >= (unsigned int)v20 )
            sub_1B6432C(EquipIdList, v18);
          if ( !v13 )
            sub_1B64324(EquipIdList);
          v22 = v19->m_Items[v21 + 1];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v13,
                                                v22,
                                                (const MethodInfo_3490BF8 *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
          {
            items = v13->fields._items;
            v24 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !items )
              sub_1B64324(EquipIdList);
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                v22,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = size + 1;
              items->m_Items[size + 1] = v22;
            }
          }
          LODWORD(v20) = v19->max_length;
          ++v21;
        }
        while ( (__int64)v21 < (int)v20 );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v13 )
LABEL_28:
    sub_1B64324(FilterList);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49FC2DD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__, entity);
    byte_49FC2DD = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&value);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void __fastcall EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC2E5 & 1) == 0 )
  {
    sub_1B640C8(&EventBonusFilterMaster___c_TypeInfo, v1);
    byte_49FC2E5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventBonusFilterMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventBonusFilterMaster___c_TypeInfo->static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventBonusFilterMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return e->fields.value == value;
}