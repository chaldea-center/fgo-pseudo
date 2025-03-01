void __fastcall EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD60A & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__, method);
    byte_4BFD60A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    280,
    (const MethodInfo_327D914 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
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
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  __int64 v21; // x24
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Func_int__bool__o *v28; // x26
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Comparison_T__o *v39; // x19
  Il2CppObject *v40; // x20
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList;
  if ( (byte_4BFD608 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__, eventIdList);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__, v5);
    sub_1C2E12C(&System_Comparison_EventBonusFilterEntity__TypeInfo, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_int____77799352, v7);
    sub_1C2E12C(&System_Func_int__bool__TypeInfo, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v11);
    sub_1C2E12C(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v12);
    sub_1C2E12C(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__4_0__, v13);
    sub_1C2E12C(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetBonusSkillFilterList_b__1__, v14);
    sub_1C2E12C(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo, v15);
    sub_1C2E12C(&EventBonusFilterMaster___c_TypeInfo, v16);
    byte_4BFD608 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( v3 && v3[1].monitor )
  {
    if ( Count >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = sub_1C2E378(EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v21, 0LL);
        list = (int64_t)this->fields.list;
        if ( !list )
          break;
        list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)list,
                          v20,
                          (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
        if ( !v21 )
          break;
        *(_QWORD *)(v21 + 16) = list;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 16), list, v22, v23, v24, v25, v26, v27);
        if ( *(_QWORD *)(v21 + 16) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v21 + 16) + 20LL) & 0xFFFFFFFE) == 4 )
          {
            v28 = (System_Func_int__bool__o *)sub_1C2E378(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v28,
              (Il2CppObject *)v21,
              Method_EventBonusFilterMaster___c__DisplayClass4_0__GetBonusSkillFilterList_b__1__,
              0LL);
            list = System_Linq_Enumerable__Any_int__50195920(
                     v3,
                     (System_Func_TSource__bool__o *)v28,
                     (const MethodInfo_2FDEDD0 *)Method_System_Linq_Enumerable_Any_int____77799352);
            if ( (list & 1) != 0 )
            {
              if ( !v19 )
                break;
              eventIdList = *(System_Int32_array **)(v21 + 16);
              items = v19->fields._items;
              v36 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  &eventIdList->obj,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v38[4] = (Il2CppClass *)eventIdList;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)eventIdList, v29, v30, v31, v32, v33, v34);
              }
            }
          }
        }
        if ( Count == ++v20 )
          goto LABEL_19;
      }
LABEL_28:
      sub_1C2E388(list, eventIdList);
    }
LABEL_19:
    list = (int64_t)EventBonusFilterMaster___c_TypeInfo;
    if ( !EventBonusFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBonusFilterMaster___c_TypeInfo);
      list = (int64_t)EventBonusFilterMaster___c_TypeInfo;
    }
    v39 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
    if ( !v39 )
    {
      if ( !*(_DWORD *)(list + 224) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = (int64_t)EventBonusFilterMaster___c_TypeInfo;
      }
      v40 = **(Il2CppObject ***)(list + 184);
      v39 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_EventBonusFilterEntity__TypeInfo);
      System_Comparison_object____ctor(
        v39,
        v40,
        Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__4_0__,
        0LL);
      static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)v39;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v39, v42, v43, v44, v45, v46, v47);
    }
    if ( !v19 )
      goto LABEL_28;
    System_Collections_Generic_List_object___Sort_57070448(
      v19,
      v39,
      (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v19;
}


// local variable allocation has failed, the output may be wrong!
EventBonusFilterEntity_o *__fastcall EventBonusFilterMaster__GetEntity(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BFD60B & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BFD60B = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, *(const MethodInfo **)&value);
  return (EventBonusFilterEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_327FC38 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventBonusFilterMaster__GetEventBonusSkillIds(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        System_Int32_array *objectValues,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_int__o *v20; // x22
  __int64 v21; // x1
  int64_t list; // x0
  int v23; // w24
  int32_t v24; // w25
  __int64 v25; // x26
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 *v32; // x27
  __int64 v33; // x8
  System_Func_int__bool__o *v34; // x28
  __int64 v35; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+8h] [xbp-68h]

  if ( (byte_4BFD609 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__, v7);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, v8);
    sub_1C2E12C(&DataManager_TypeInfo, v9);
    sub_1C2E12C(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v10);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_int____77799352, v11);
    sub_1C2E12C(&System_Func_int__bool__TypeInfo, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1C2E12C(&Method_EventBonusFilterMaster___c__DisplayClass5_0__GetEventBonusSkillIds_b__0__, v18);
    sub_1C2E12C(&EventBonusFilterMaster___c__DisplayClass5_0_TypeInfo, v19);
    byte_4BFD609 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = list;
    v24 = 0;
    while ( 1 )
    {
      v25 = sub_1C2E378(EventBonusFilterMaster___c__DisplayClass5_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v25, 0LL);
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v24,
                        (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
      if ( !v25 )
        break;
      *(_QWORD *)(v25 + 16) = list;
      v32 = (__int64 *)(v25 + 16);
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v25 + 16), list, v26, v27, v28, v29, v30, v31);
      v33 = *(_QWORD *)(v25 + 16);
      if ( v33 )
      {
        if ( *(_DWORD *)(v33 + 16) == eventId && (*(_DWORD *)(v33 + 20) & 0xFFFFFFFE) == 4 )
        {
          v34 = (System_Func_int__bool__o *)sub_1C2E378(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v34,
            (Il2CppObject *)v25,
            Method_EventBonusFilterMaster___c__DisplayClass5_0__GetEventBonusSkillIds_b__0__,
            0LL);
          list = System_Linq_Enumerable__Any_int__50195920(
                   (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                   (System_Func_TSource__bool__o *)v34,
                   (const MethodInfo_2FDEDD0 *)Method_System_Linq_Enumerable_Any_int____77799352);
          if ( (list & 1) != 0 )
          {
            v35 = *v32;
            if ( !*v32 )
              break;
            v21 = *(unsigned int *)(v35 + 24);
            if ( *(_DWORD *)(v35 + 20) == 4 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v37 = Method_System_Collections_Generic_List_int__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v20,
                  v21,
                  *(const MethodInfo_364E888 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v20->fields._size = size + 1;
                items->m_Items[size + 1] = v21;
              }
            }
            else
            {
              list = (int64_t)Master_object;
              if ( !Master_object )
                break;
              list = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                Master_object,
                                v21,
                                (const MethodInfo_327B180 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v20 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v20,
                *(System_Collections_Generic_IEnumerable_T__o **)(list + 40),
                (const MethodInfo_364EA94 *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C2E388(list, v21);
  }
LABEL_26:
  if ( !v20 )
    goto LABEL_28;
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_3650340 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v15; // x20
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  const MethodInfo *klass_low; // x1
  System_Collections_Generic_List_int__o *v18; // x21
  int32_t v19; // w22
  System_Func_int__bool__o **v20; // x23
  Il2CppObject *Item; // x0
  Il2CppObject *v22; // x24
  System_Int32_array *EquipIdList; // x0
  System_Func_int__bool__o *v24; // x26
  System_Int32_array *v25; // x25
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10

  if ( (byte_4BFD605 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Any_int____77760784, *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__, v5);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__, v6);
    sub_1C2E12C(&System_Func_int__bool__TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Sort__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1C2E12C(&Method_EventBonusFilterMaster___c__DisplayClass1_0__GetEventIdListBySvtId_b__0__, v13);
    sub_1C2E12C(&EventBonusFilterMaster___c__DisplayClass1_0_TypeInfo, v14);
    byte_4BFD605 = 1;
  }
  v15 = sub_1C2E378(EventBonusFilterMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_21;
  *(_DWORD *)(v15 + 16) = svtId;
  v18 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  v19 = 0;
  v20 = (System_Func_int__bool__o **)(v15 + 24);
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                      (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                      (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    if ( v19 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_21;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v19,
             (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    if ( Item )
    {
      v22 = Item;
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, klass_low);
      v24 = *v20;
      v25 = EquipIdList;
      if ( !*v20 )
      {
        v24 = (System_Func_int__bool__o *)sub_1C2E378(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v24,
          (Il2CppObject *)v15,
          Method_EventBonusFilterMaster___c__DisplayClass1_0__GetEventIdListBySvtId_b__0__,
          0LL);
        *(_QWORD *)(v15 + 24) = v24;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)v24, v26, v27, v28, v29, v30, v31);
      }
      list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)BasicHelper__Any_int__50053052(
                                                                                        v25,
                                                                                        (System_Func_T__bool__o *)v24,
                                                                                        (const MethodInfo_2FBBFBC *)Method_BasicHelper_Any_int____77760784);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_21;
        klass_low = (const MethodInfo *)LODWORD(v22[1].klass);
        items = v18->fields._items;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v18,
            (int32_t)klass_low,
            *(const MethodInfo_364E888 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size + 1] = (int)klass_low;
        }
      }
    }
    list = this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v18 )
LABEL_21:
    sub_1C2E388(list, klass_low);
  System_Collections_Generic_List_int___Sort(
    v18,
    (const MethodInfo_36501CC *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v18,
           (const MethodInfo_3650340 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        bool ignoreExpCard,
        bool checkIsOpen,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v15; // x24
  int32_t v16; // w25
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int v23; // w8
  int64_t v24; // x26
  signed int max_length; // w8
  __int64 v26; // x10
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4BFD604 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__, eventIdList);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v11);
    sub_1C2E12C(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v12);
    byte_4BFD604 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length && Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v16,
                        (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
      if ( list )
      {
        v23 = *(_DWORD *)(list + 20);
        v24 = list;
        if ( (v23 != 3 || !ignoreExpCard) && (unsigned int)(v23 - 1) <= 1 )
        {
          if ( !checkIsOpen
            || (list = EventBonusFilterEntity__IsOpen((EventBonusFilterEntity_o *)list, (const MethodInfo *)eventIdList),
                (list & 1) != 0) )
          {
            max_length = eventIdList->max_length;
            if ( max_length >= 1 )
            {
              v26 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v26 >= max_length )
                  sub_1C2E390(list, eventIdList);
                if ( *(_DWORD *)(v24 + 16) == eventIdList->m_Items[v26 + 1] )
                  break;
                if ( (int)++v26 >= max_length )
                  goto LABEL_26;
              }
              if ( !v15 )
                break;
              items = v15->fields._items;
              v28 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v15->fields._version;
              if ( !items )
                break;
              size = v15->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v15,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                v15->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v24;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 4), v24, v17, v18, v19, v20, v21, v22);
              }
            }
          }
        }
      }
LABEL_26:
      if ( ++v16 == Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v15;
    }
LABEL_29:
    sub_1C2E388(list, eventIdList);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v15;
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
  System_Collections_Generic_List_int__o *v17; // x21
  const MethodInfo *v18; // x2
  int64_t TargetEventEquipIdList; // x0
  const MethodInfo *v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Int32_array *v22; // x22
  int32_t v23; // w23
  __int64 v24; // x24
  EventBonusFilterMaster_o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t *v32; // x25
  System_Func_int__bool__o *v33; // x26
  int64_t v34; // x24
  unsigned __int64 v35; // x27
  __int64 v36; // x25
  System_Func_int__bool__o *v37; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  System_Int32_array *v42; // [xsp+8h] [xbp-68h]

  if ( (byte_4BFD607 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Any_int____77760784, eventIdList);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__, v5);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__, v6);
    sub_1C2E12C(&System_Func_int__bool__TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__IndexOf__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1C2E12C(&Method_EventBonusFilterMaster___c__DisplayClass3_0__GetOtherEventEquipIdList_b__0__, v13);
    sub_1C2E12C(&EventBonusFilterMaster___c__DisplayClass3_0_TypeInfo, v14);
    sub_1C2E12C(&Method_EventBonusFilterMaster___c__DisplayClass3_1__GetOtherEventEquipIdList_b__1__, v15);
    sub_1C2E12C(&EventBonusFilterMaster___c__DisplayClass3_1_TypeInfo, v16);
    byte_4BFD607 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  v42 = eventIdList;
  TargetEventEquipIdList = (int64_t)EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v18);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  v22 = (System_Int32_array *)TargetEventEquipIdList;
  v23 = 0;
  while ( 1 )
  {
    TargetEventEquipIdList = System_Collections_ObjectModel_Collection_object___get_Count(
                               list,
                               (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Count__);
    if ( v23 >= (int)TargetEventEquipIdList )
      break;
    v24 = sub_1C2E378(EventBonusFilterMaster___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0LL);
    TargetEventEquipIdList = (int64_t)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_30;
    v25 = this;
    TargetEventEquipIdList = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)TargetEventEquipIdList,
                                        v23,
                                        (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_EventBonusFilterEntity__get_Item__);
    if ( !v24 )
      goto LABEL_30;
    *(_QWORD *)(v24 + 16) = TargetEventEquipIdList;
    v32 = (int64_t *)(v24 + 16);
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 16), TargetEventEquipIdList, v26, v27, v28, v29, v30, v31);
    TargetEventEquipIdList = *(_QWORD *)(v24 + 16);
    if ( TargetEventEquipIdList )
    {
      if ( v42 )
      {
        v33 = (System_Func_int__bool__o *)sub_1C2E378(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v33,
          (Il2CppObject *)v24,
          Method_EventBonusFilterMaster___c__DisplayClass3_0__GetOtherEventEquipIdList_b__0__,
          0LL);
        TargetEventEquipIdList = BasicHelper__Any_int__50053052(
                                   v42,
                                   (System_Func_T__bool__o *)v33,
                                   (const MethodInfo_2FBBFBC *)Method_BasicHelper_Any_int____77760784);
        if ( (TargetEventEquipIdList & 1) != 0 )
          goto LABEL_26;
        TargetEventEquipIdList = *v32;
        if ( !*v32 )
          goto LABEL_30;
      }
      TargetEventEquipIdList = (int64_t)EventBonusFilterEntity__GetEquipIdList(
                                          (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                          v20);
      if ( !TargetEventEquipIdList )
        goto LABEL_30;
      v34 = TargetEventEquipIdList;
      if ( *(int *)(TargetEventEquipIdList + 24) >= 1 )
      {
        v35 = 0LL;
        while ( 1 )
        {
          v36 = sub_1C2E378(EventBonusFilterMaster___c__DisplayClass3_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v36, 0LL);
          if ( v35 >= *(unsigned int *)(v34 + 24) )
            sub_1C2E390(TargetEventEquipIdList, v20);
          if ( !v36 )
            break;
          *(_DWORD *)(v36 + 16) = *(_DWORD *)(v34 + 32 + 4 * v35);
          if ( !v22
            || (v37 = (System_Func_int__bool__o *)sub_1C2E378(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v37,
                  (Il2CppObject *)v36,
                  Method_EventBonusFilterMaster___c__DisplayClass3_1__GetOtherEventEquipIdList_b__1__,
                  0LL),
                TargetEventEquipIdList = BasicHelper__Any_int__50053052(
                                           v22,
                                           (System_Func_T__bool__o *)v37,
                                           (const MethodInfo_2FBBFBC *)Method_BasicHelper_Any_int____77760784),
                (TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v17 )
              break;
            TargetEventEquipIdList = System_Collections_Generic_List_int___IndexOf(
                                       v17,
                                       *(_DWORD *)(v36 + 16),
                                       (const MethodInfo_364F504 *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
            {
              v20 = (const MethodInfo *)*(unsigned int *)(v36 + 16);
              items = v17->fields._items;
              v39 = Method_System_Collections_Generic_List_int__Add__;
              ++v17->fields._version;
              if ( !items )
                break;
              size = v17->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v17,
                  (int32_t)v20,
                  *(const MethodInfo_364E888 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
              }
              else
              {
                v17->fields._size = size + 1;
                items->m_Items[size + 1] = (int)v20;
              }
            }
          }
          if ( (__int64)++v35 >= *(int *)(v34 + 24) )
            goto LABEL_26;
        }
LABEL_30:
        sub_1C2E388(TargetEventEquipIdList, v20);
      }
    }
LABEL_26:
    list = (System_Collections_ObjectModel_Collection_T__o *)v25->fields.list;
    this = v25;
    ++v23;
    if ( !list )
      goto LABEL_30;
  }
  if ( !v17 )
    goto LABEL_30;
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_3650340 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x1
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

  if ( (byte_4BFD606 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, eventIdList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__IndexOf__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_4BFD606 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v13 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( eventIdList )
  {
    FilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetFilterList(
                                                                this,
                                                                eventIdList,
                                                                0,
                                                                1,
                                                                v16);
    if ( !FilterList )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      FilterList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v29 = v28;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v29.fields._current )
        sub_1C2E388(0LL, v17);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v29.fields._current, v17);
      v20 = EquipIdList;
      if ( !EquipIdList )
        sub_1C2E388(0LL, v19);
      v21 = *(_QWORD *)&EquipIdList->max_length;
      if ( (int)v21 >= 1 )
      {
        v22 = 0LL;
        do
        {
          if ( v22 >= (unsigned int)v21 )
            sub_1C2E390(EquipIdList, v19);
          if ( !v13 )
            sub_1C2E388(EquipIdList, v19);
          v23 = v20->m_Items[v22 + 1];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v13,
                                                v23,
                                                (const MethodInfo_364F504 *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
          {
            items = v13->fields._items;
            v25 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !items )
              sub_1C2E388(EquipIdList, v19);
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                v23,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v13 )
LABEL_28:
    sub_1C2E388(FilterList, v15);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_3650340 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBonusFilterMaster__TryGetEntity(
        EventBonusFilterMaster_o *this,
        EventBonusFilterEntity_o **entity,
        int32_t eventId,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BFD60C & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__, entity);
    byte_4BFD60C = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_327FC84 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void __fastcall EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFD60D & 1) == 0 )
  {
    sub_1C2E12C(&EventBonusFilterMaster___c_TypeInfo, v1);
    byte_4BFD60D = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(EventBonusFilterMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventBonusFilterMaster___c_TypeInfo->static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EventBonusFilterMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall EventBonusFilterMaster___c___ctor(EventBonusFilterMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventBonusFilterMaster___c___GetBonusSkillFilterList_b__4_0(
        EventBonusFilterMaster___c_o *this,
        EventBonusFilterEntity_o *x,
        EventBonusFilterEntity_o *y,
        const MethodInfo *method)
{
  int32_t eventId; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !x || !y )
    sub_1C2E388(this, x);
  eventId = x->fields.eventId;
  v5 = y->fields.eventId;
  result = eventId - v5;
  if ( eventId == v5 )
    return y->fields.priority - x->fields.priority;
  return result;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass1_0___ctor(
        EventBonusFilterMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass1_0___GetEventIdListBySvtId_b__0(
        EventBonusFilterMaster___c__DisplayClass1_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass3_0___ctor(
        EventBonusFilterMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass3_0___GetOtherEventEquipIdList_b__0(
        EventBonusFilterMaster___c__DisplayClass3_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C2E388(this, x);
  return entity->fields.eventId == x;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass3_1___ctor(
        EventBonusFilterMaster___c__DisplayClass3_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass3_1___GetOtherEventEquipIdList_b__1(
        EventBonusFilterMaster___c__DisplayClass3_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.id == x;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass4_0___ctor(
        EventBonusFilterMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass4_0___GetBonusSkillFilterList_b__1(
        EventBonusFilterMaster___c__DisplayClass4_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *e; // x8

  e = this->fields.e;
  if ( !e )
    sub_1C2E388(this, eventId);
  return e->fields.eventId == eventId;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass5_0___ctor(
        EventBonusFilterMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass5_0___GetEventBonusSkillIds_b__0(
        EventBonusFilterMaster___c__DisplayClass5_0_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *e; // x8

  e = this->fields.e;
  if ( !e )
    sub_1C2E388(this, value);
  return e->fields.value == value;
}