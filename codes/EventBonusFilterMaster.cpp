void __fastcall EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66A7F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__, method);
    byte_4B66A7F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    280,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
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
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w23
  Il2CppObject *v22; // x24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  EventBonusFilterEntity_c *v29; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v31; // x10
  int64_t v32; // x1
  PartyOrganizationUtility_o *v33; // x25
  System_Func_int__bool__o *v34; // x26
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Comparison_T__o *v45; // x19
  Il2CppObject *v46; // x20
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList;
  if ( (byte_4B66A84 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&System_Comparison_EventBonusFilterEntity__TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_int____77200408, v7);
    sub_1BE4ACC(&EventBonusFilterEntity_TypeInfo, v8);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v13);
    sub_1BE4ACC(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__, v14);
    sub_1BE4ACC(&Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__, v15);
    sub_1BE4ACC(&EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, v16);
    sub_1BE4ACC(&EventBonusFilterMaster___c_TypeInfo, v17);
    byte_4B66A84 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( v3 && v3[1].monitor )
  {
    if ( Count >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        v22 = (Il2CppObject *)sub_1BE4D18(EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo);
        System_Object___ctor(v22, 0LL);
        list = (int64_t)this->fields.list;
        if ( !list )
          break;
        list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)list,
                          v21,
                          (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v22 )
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
          v22[1].klass = v31;
          v33 = (PartyOrganizationUtility_o *)&v22[1];
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
          {
            if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v29 )
              v32 = list;
            else
              v32 = 0LL;
          }
          else
          {
            v32 = 0LL;
          }
        }
        else
        {
          v32 = 0LL;
          v22[1].klass = 0LL;
          v33 = (PartyOrganizationUtility_o *)&v22[1];
        }
        sub_1BE4A70(v33, v32, v23, v24, v25, v26, v27, v28);
        if ( v33->klass )
        {
          if ( (HIDWORD(v33->klass->_1.name) & 0xFFFFFFFE) == 4 )
          {
            v34 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v34,
              v22,
              Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__,
              0LL);
            list = System_Linq_Enumerable__Any_int__49703016(
                     v3,
                     (System_Func_TSource__bool__o *)v34,
                     (const MethodInfo_2F66868 *)Method_System_Linq_Enumerable_Any_int____77200408);
            if ( (list & 1) != 0 )
            {
              if ( !v20 )
                break;
              eventIdList = (System_Int32_array *)v33->klass;
              items = v20->fields._items;
              v42 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  &eventIdList->obj,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                v44 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v44[4] = (Il2CppClass *)eventIdList;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)eventIdList, v35, v36, v37, v38, v39, v40);
              }
            }
          }
        }
        if ( Count == ++v21 )
          goto LABEL_31;
      }
LABEL_40:
      sub_1BE4D28(list, eventIdList);
    }
LABEL_31:
    list = (int64_t)EventBonusFilterMaster___c_TypeInfo;
    if ( !EventBonusFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBonusFilterMaster___c_TypeInfo);
      list = (int64_t)EventBonusFilterMaster___c_TypeInfo;
    }
    v45 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
    if ( !v45 )
    {
      if ( !*(_DWORD *)(list + 224) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = (int64_t)EventBonusFilterMaster___c_TypeInfo;
      }
      v46 = **(Il2CppObject ***)(list + 184);
      v45 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventBonusFilterEntity__TypeInfo);
      System_Comparison_object____ctor(
        v45,
        v46,
        Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__,
        0LL);
      static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Comparison_EventBonusFilterEntity__o *)v45;
      sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)v45, v48, v49, v50, v51, v52, v53);
    }
    if ( !v20 )
      goto LABEL_40;
    System_Collections_Generic_List_object___Sort_56548584(
      v20,
      v45,
      (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
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

  if ( (byte_4B66A7D & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B66A7D = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&priority);
  return (EventBonusFilterEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
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
  int64_t list; // x0
  int v23; // w24
  int32_t v24; // w25
  Il2CppObject *v25; // x26
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  EventBonusFilterEntity_c *v32; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v34; // x10
  int64_t v35; // x1
  PartyOrganizationUtility_o *v36; // x27
  PartyOrganizationUtility_c *klass; // x8
  System_Func_int__bool__o *v38; // x28
  PartyOrganizationUtility_c *v39; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+0h] [xbp-70h]

  if ( (byte_4B66A85 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, v7);
    sub_1BE4ACC(&DataManager_TypeInfo, v8);
    sub_1BE4ACC(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_int____77200408, v10);
    sub_1BE4ACC(&EventBonusFilterEntity_TypeInfo, v11);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1BE4ACC(&Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__, v18);
    sub_1BE4ACC(&EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, v19);
    byte_4B66A85 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_40;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = list;
    v24 = 0;
    while ( 1 )
    {
      v25 = (Il2CppObject *)sub_1BE4D18(EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo);
      System_Object___ctor(v25, 0LL);
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v24,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v25 )
        break;
      if ( list )
      {
        v32 = EventBonusFilterEntity_TypeInfo;
        methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventBonusFilterEntity_TypeInfo )
            v34 = (Il2CppClass *)list;
          else
            v34 = 0LL;
        }
        else
        {
          v34 = 0LL;
        }
        v25[1].klass = v34;
        v36 = (PartyOrganizationUtility_o *)&v25[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v32 )
            v35 = list;
          else
            v35 = 0LL;
        }
        else
        {
          v35 = 0LL;
        }
      }
      else
      {
        v35 = 0LL;
        v25[1].klass = 0LL;
        v36 = (PartyOrganizationUtility_o *)&v25[1];
      }
      sub_1BE4A70(v36, v35, v26, v27, v28, v29, v30, v31);
      klass = v36->klass;
      if ( v36->klass )
      {
        if ( LODWORD(klass->_1.name) == eventId && (HIDWORD(klass->_1.name) & 0xFFFFFFFE) == 4 )
        {
          v38 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v38,
            v25,
            Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__,
            0LL);
          list = System_Linq_Enumerable__Any_int__49703016(
                   (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                   (System_Func_TSource__bool__o *)v38,
                   (const MethodInfo_2F66868 *)Method_System_Linq_Enumerable_Any_int____77200408);
          if ( (list & 1) != 0 )
          {
            v39 = v36->klass;
            if ( !v36->klass )
              break;
            namespaze_low = LODWORD(v39->_1.namespaze);
            if ( HIDWORD(v39->_1.name) == 4 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v41 = Method_System_Collections_Generic_List_int__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v20,
                  namespaze_low,
                  *(const MethodInfo_35CF200 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
              }
              else
              {
                v20->fields._size = size + 1;
                items->m_Items[size + 1] = namespaze_low;
              }
            }
            else
            {
              list = (int64_t)Master_object;
              if ( !Master_object )
                break;
              list = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                Master_object,
                                namespaze_low,
                                (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v20 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v20,
                *(System_Collections_Generic_IEnumerable_T__o **)(list + 40),
                (const MethodInfo_35CF40C *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_38;
    }
LABEL_40:
    sub_1BE4D28(list, namespaze_low);
  }
LABEL_38:
  if ( !v20 )
    goto LABEL_40;
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  const MethodInfo *klass_low; // x1
  System_Collections_Generic_List_int__o *v19; // x21
  int32_t v20; // w22
  System_Func_int__bool__o **v21; // x23
  Il2CppObject *Item; // x0
  Il2CppObject *v23; // x24
  __int64 methodPtr_low; // x10
  System_Int32_array *EquipIdList; // x0
  System_Func_int__bool__o *v26; // x26
  System_Int32_array *v27; // x25
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10

  if ( (byte_4B66A81 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_int____77161864, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BE4ACC(&EventBonusFilterEntity_TypeInfo, v7);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Sort__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1BE4ACC(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__, v14);
    sub_1BE4ACC(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo, v15);
    byte_4B66A81 = 1;
  }
  v16 = sub_1BE4D18(EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  *(_DWORD *)(v16 + 16) = svtId;
  v19 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  v20 = 0;
  v21 = (System_Func_int__bool__o **)(v16 + 24);
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                             (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v20 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v20,
             (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v23 = Item;
      methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo )
      {
        EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, klass_low);
        v26 = *v21;
        v27 = EquipIdList;
        if ( !*v21 )
        {
          v26 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v26,
            (Il2CppObject *)v16,
            Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__,
            0LL);
          *(_QWORD *)(v16 + 24) = v26;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)v26, v28, v29, v30, v31, v32, v33);
        }
        list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)BasicHelper__Any_int__49561084(
                                                                                                 v27,
                                                                                                 (System_Func_T__bool__o *)v26,
                                                                                                 (const MethodInfo_2F43DFC *)Method_BasicHelper_Any_int____77161864);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v19 )
            goto LABEL_23;
          klass_low = (const MethodInfo *)LODWORD(v23[1].klass);
          items = v19->fields._items;
          v35 = Method_System_Collections_Generic_List_int__Add__;
          ++v19->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v19,
              (int32_t)klass_low,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v19->fields._size = size + 1;
            items->m_Items[size + 1] = (int)klass_low;
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
    sub_1BE4D28(list, klass_low);
  System_Collections_Generic_List_int___Sort(
    v19,
    (const MethodInfo_35D0B44 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        bool ignoreExpCard,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  System_Int32_array *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v14; // x23
  int32_t v15; // w24
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 methodPtr_low; // x10
  int items_high; // w8
  unsigned int v24; // w9
  _BOOL4 v25; // w8
  int max_length; // w8
  __int64 v27; // x10
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  v4 = ignoreExpCard;
  v5 = eventIdList;
  if ( (byte_4B66A80 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&EventBonusFilterEntity_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v11);
    byte_4B66A80 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( v5 && *(_QWORD *)&v5->max_length && Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        eventIdList = (System_Int32_array *)list;
        methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventBonusFilterEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo )
        {
          items_high = HIDWORD(list->fields.items);
          v24 = items_high - 1;
          v25 = items_high == 3;
          if ( v24 <= 1 && (!v25 || !v4) )
          {
            max_length = v5->max_length;
            if ( max_length >= 1 )
            {
              v27 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v27 >= max_length )
                  sub_1BE4D30(list, list);
                if ( LODWORD(list->fields.items) == v5->m_Items[v27 + 1] )
                  break;
                if ( (int)++v27 >= max_length )
                  goto LABEL_12;
              }
              if ( !v14 )
                break;
              items = v14->fields._items;
              v29 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v14->fields._version;
              if ( !items )
                break;
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  (Il2CppObject *)list,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
              }
              else
              {
                v31 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v31[4] = (Il2CppClass *)eventIdList;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)eventIdList, v16, v17, v18, v19, v20, v21);
              }
            }
          }
        }
      }
LABEL_12:
      if ( ++v15 == Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v14;
    }
LABEL_28:
    sub_1BE4D28(list, eventIdList);
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
  int64_t TargetEventEquipIdList; // x0
  const MethodInfo *v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Int32_array *v23; // x22
  int32_t v24; // w23
  Il2CppObject *v25; // x24
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  EventBonusFilterEntity_c *v32; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v34; // x10
  int64_t v35; // x1
  PartyOrganizationUtility_o *v36; // x25
  System_Func_int__bool__o *v37; // x26
  int64_t v38; // x24
  unsigned __int64 v39; // x27
  __int64 v40; // x25
  System_Func_int__bool__o *v41; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  System_Int32_array *v46; // [xsp+0h] [xbp-70h]
  EventBonusFilterMaster_o *v47; // [xsp+8h] [xbp-68h]

  if ( (byte_4B66A83 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_int____77161864, eventIdList);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BE4ACC(&EventBonusFilterEntity_TypeInfo, v7);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__IndexOf__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1BE4ACC(&Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__, v14);
    sub_1BE4ACC(&EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v15);
    sub_1BE4ACC(&Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__, v16);
    sub_1BE4ACC(&EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo, v17);
    byte_4B66A83 = 1;
  }
  v18 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  v46 = eventIdList;
  TargetEventEquipIdList = (int64_t)EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v19);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  v23 = (System_Int32_array *)TargetEventEquipIdList;
  v24 = 0;
  v47 = this;
  while ( 1 )
  {
    TargetEventEquipIdList = System_Collections_ObjectModel_Collection_object___get_Count(
                               list,
                               (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v24 >= (int)TargetEventEquipIdList )
      break;
    v25 = (Il2CppObject *)sub_1BE4D18(EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor(v25, 0LL);
    TargetEventEquipIdList = (int64_t)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_42;
    TargetEventEquipIdList = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)TargetEventEquipIdList,
                                        v24,
                                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v25 )
      goto LABEL_42;
    if ( TargetEventEquipIdList )
    {
      v32 = EventBonusFilterEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)TargetEventEquipIdList + 304LL) >= (unsigned int)methodPtr_low )
      {
        if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)TargetEventEquipIdList + 200LL)
                                          + 8 * methodPtr_low
                                          - 8) == EventBonusFilterEntity_TypeInfo )
          v34 = (Il2CppClass *)TargetEventEquipIdList;
        else
          v34 = 0LL;
      }
      else
      {
        v34 = 0LL;
      }
      v25[1].klass = v34;
      v36 = (PartyOrganizationUtility_o *)&v25[1];
      if ( *(unsigned __int8 *)(*(_QWORD *)TargetEventEquipIdList + 304LL) >= (unsigned int)methodPtr_low )
      {
        if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)TargetEventEquipIdList + 200LL)
                                          + 8 * methodPtr_low
                                          - 8) == v32 )
          v35 = TargetEventEquipIdList;
        else
          v35 = 0LL;
      }
      else
      {
        v35 = 0LL;
      }
    }
    else
    {
      v35 = 0LL;
      v25[1].klass = 0LL;
      v36 = (PartyOrganizationUtility_o *)&v25[1];
    }
    sub_1BE4A70(v36, v35, v26, v27, v28, v29, v30, v31);
    TargetEventEquipIdList = (int64_t)v36->klass;
    if ( v36->klass )
    {
      if ( v46 )
      {
        v37 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v37,
          v25,
          Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__,
          0LL);
        TargetEventEquipIdList = BasicHelper__Any_int__49561084(
                                   v46,
                                   (System_Func_T__bool__o *)v37,
                                   (const MethodInfo_2F43DFC *)Method_BasicHelper_Any_int____77161864);
        if ( (TargetEventEquipIdList & 1) != 0 )
          goto LABEL_38;
        TargetEventEquipIdList = (int64_t)v36->klass;
        if ( !v36->klass )
          goto LABEL_42;
      }
      TargetEventEquipIdList = (int64_t)EventBonusFilterEntity__GetEquipIdList(
                                          (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                          v21);
      if ( !TargetEventEquipIdList )
        goto LABEL_42;
      v38 = TargetEventEquipIdList;
      if ( *(int *)(TargetEventEquipIdList + 24) >= 1 )
      {
        v39 = 0LL;
        while ( 1 )
        {
          v40 = sub_1BE4D18(EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v40, 0LL);
          if ( v39 >= *(unsigned int *)(v38 + 24) )
            sub_1BE4D30(TargetEventEquipIdList, v21);
          if ( !v40 )
            break;
          *(_DWORD *)(v40 + 16) = *(_DWORD *)(v38 + 32 + 4 * v39);
          if ( !v23
            || (v41 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v41,
                  (Il2CppObject *)v40,
                  Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__,
                  0LL),
                TargetEventEquipIdList = BasicHelper__Any_int__49561084(
                                           v23,
                                           (System_Func_T__bool__o *)v41,
                                           (const MethodInfo_2F43DFC *)Method_BasicHelper_Any_int____77161864),
                (TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v18 )
              break;
            TargetEventEquipIdList = System_Collections_Generic_List_int___IndexOf(
                                       v18,
                                       *(_DWORD *)(v40 + 16),
                                       (const MethodInfo_35CFE7C *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
            {
              v21 = (const MethodInfo *)*(unsigned int *)(v40 + 16);
              items = v18->fields._items;
              v43 = Method_System_Collections_Generic_List_int__Add__;
              ++v18->fields._version;
              if ( !items )
                break;
              size = v18->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v18,
                  (int32_t)v21,
                  *(const MethodInfo_35CF200 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
              }
              else
              {
                v18->fields._size = size + 1;
                items->m_Items[size + 1] = (int)v21;
              }
            }
          }
          if ( (__int64)++v39 >= *(int *)(v38 + 24) )
            goto LABEL_38;
        }
LABEL_42:
        sub_1BE4D28(TargetEventEquipIdList, v21);
      }
    }
LABEL_38:
    this = v47;
    ++v24;
    list = (System_Collections_ObjectModel_Collection_T__o *)v47->fields.list;
    if ( !list )
      goto LABEL_42;
  }
  if ( !v18 )
    goto LABEL_42;
  return System_Collections_Generic_List_int___ToArray(
           v18,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B66A82 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, eventIdList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__IndexOf__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_4B66A82 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v13 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
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
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v29 = v28;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v29.fields._current )
        sub_1BE4D28(0LL, v17);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v29.fields._current, v17);
      v20 = EquipIdList;
      if ( !EquipIdList )
        sub_1BE4D28(0LL, v19);
      v21 = *(_QWORD *)&EquipIdList->max_length;
      if ( (int)v21 >= 1 )
      {
        v22 = 0LL;
        do
        {
          if ( v22 >= (unsigned int)v21 )
            sub_1BE4D30(EquipIdList, v19);
          if ( !v13 )
            sub_1BE4D28(EquipIdList, v19);
          v23 = v20->m_Items[v22 + 1];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v13,
                                                v23,
                                                (const MethodInfo_35CFE7C *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
          {
            items = v13->fields._items;
            v25 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !items )
              sub_1BE4D28(EquipIdList, v19);
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                v23,
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v13 )
LABEL_28:
    sub_1BE4D28(FilterList, v15);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B66A7E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__, entity);
    byte_4B66A7E = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&value);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
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

  if ( (byte_4B66A86 & 1) == 0 )
  {
    sub_1BE4ACC(&EventBonusFilterMaster___c_TypeInfo, v1);
    byte_4B66A86 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventBonusFilterMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventBonusFilterMaster___c_TypeInfo->static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, x);
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
    sub_1BE4D28(this, x);
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
    sub_1BE4D28(this, eventId);
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
    sub_1BE4D28(this, value);
  return e->fields.value == value;
}