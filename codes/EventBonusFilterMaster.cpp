void __fastcall EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B160B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__, method, v2);
    byte_4B160B9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    276,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetBonusSkillFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  int64_t list; // x0
  int32_t Count; // w22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_object__o *v36; // x21
  int64_t v37; // x2
  __int64 v38; // x3
  int32_t v39; // w23
  Il2CppObject *v40; // x24
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  EventBonusFilterEntity_c *v47; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v49; // x10
  int64_t v50; // x1
  PartyOrganizationUtility_o *v51; // x25
  System_Func_int__bool__o *v52; // x26
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  System_Comparison_T__o *v61; // x19
  Il2CppObject *v62; // x20
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList;
  if ( (byte_4B160BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Comparison_EventBonusFilterEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int____76878416, v9, v10);
    sub_1BCA7E0(&EventBonusFilterEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__, v23, v24);
    sub_1BCA7E0(&Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__, v25, v26);
    sub_1BCA7E0(&EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&EventBonusFilterMaster___c_TypeInfo, v29, v30);
    byte_4B160BE = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( v3 && v3[1].monitor )
  {
    if ( Count >= 1 )
    {
      v39 = 0;
      while ( 1 )
      {
        v40 = (Il2CppObject *)sub_1BCAA2C(EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, eventIdList, v37, v38);
        System_Object___ctor(v40, 0LL);
        list = (int64_t)this->fields.list;
        if ( !list )
          break;
        list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)list,
                          v39,
                          (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v40 )
          break;
        if ( list )
        {
          v47 = EventBonusFilterEntity_TypeInfo;
          methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
          {
            if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventBonusFilterEntity_TypeInfo )
              v49 = (Il2CppClass *)list;
            else
              v49 = 0LL;
          }
          else
          {
            v49 = 0LL;
          }
          v40[1].klass = v49;
          v51 = (PartyOrganizationUtility_o *)&v40[1];
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
          {
            if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v47 )
              v50 = list;
            else
              v50 = 0LL;
          }
          else
          {
            v50 = 0LL;
          }
        }
        else
        {
          v50 = 0LL;
          v40[1].klass = 0LL;
          v51 = (PartyOrganizationUtility_o *)&v40[1];
        }
        sub_1BCA784(v51, v50, v41, v42, v43, v44, v45, v46);
        if ( v51->klass )
        {
          if ( (HIDWORD(v51->klass->_1.name) & 0xFFFFFFFE) == 4 )
          {
            v52 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, eventIdList, v37, v38);
            System_Func_int__bool____ctor(
              v52,
              v40,
              Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__,
              0LL);
            list = System_Linq_Enumerable__Any_int__49415144(
                     v3,
                     (System_Func_TSource__bool__o *)v52,
                     (const MethodInfo_2F203E8 *)Method_System_Linq_Enumerable_Any_int____76878416);
            if ( (list & 1) != 0 )
            {
              if ( !v36 )
                break;
              eventIdList = (System_Int32_array *)v51->klass;
              items = v36->fields._items;
              v58 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v36->fields._version;
              if ( !items )
                break;
              size = v36->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v36,
                  &eventIdList->obj,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
              }
              else
              {
                v60 = &items->obj.klass + size;
                v36->fields._size = size + 1;
                v60[4] = (Il2CppClass *)eventIdList;
                sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)eventIdList, v37, v38, v53, v54, v55, v56);
              }
            }
          }
        }
        if ( Count == ++v39 )
          goto LABEL_31;
      }
LABEL_40:
      sub_1BCAA3C(list, eventIdList);
    }
LABEL_31:
    list = (int64_t)EventBonusFilterMaster___c_TypeInfo;
    if ( !EventBonusFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBonusFilterMaster___c_TypeInfo, eventIdList);
      list = (int64_t)EventBonusFilterMaster___c_TypeInfo;
    }
    v61 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
    if ( !v61 )
    {
      if ( !*(_DWORD *)(list + 224) )
      {
        j_il2cpp_runtime_class_init_0(list, eventIdList);
        list = (int64_t)EventBonusFilterMaster___c_TypeInfo;
      }
      v62 = **(Il2CppObject ***)(list + 184);
      v61 = (System_Comparison_T__o *)sub_1BCAA2C(
                                        System_Comparison_EventBonusFilterEntity__TypeInfo,
                                        eventIdList,
                                        v37,
                                        v38);
      System_Comparison_object____ctor(
        v61,
        v62,
        Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__,
        0LL);
      static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Comparison_EventBonusFilterEntity__o *)v61;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)v61, v64, v65, v66, v67, v68, v69);
    }
    if ( !v36 )
      goto LABEL_40;
    System_Collections_Generic_List_object___Sort_56244000(
      v36,
      v61,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v36;
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

  if ( (byte_4B160B7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&type);
    byte_4B160B7 = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&priority);
  return (EventBonusFilterEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventBonusFilterMaster__GetEventBonusSkillIds(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        System_Int32_array *objectValues,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_int__o *v37; // x22
  __int64 namespaze_low; // x1
  int64_t list; // x0
  __int64 v40; // x2
  __int64 v41; // x3
  int v42; // w24
  int32_t v43; // w25
  Il2CppObject *v44; // x26
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  EventBonusFilterEntity_c *v51; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v53; // x10
  int64_t v54; // x1
  PartyOrganizationUtility_o *v55; // x27
  PartyOrganizationUtility_c *klass; // x8
  System_Func_int__bool__o *v57; // x28
  PartyOrganizationUtility_c *v58; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+0h] [xbp-70h]

  if ( (byte_4B160BF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      objectValues);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v12,
      v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int____76878416, v14, v15);
    sub_1BCA7E0(&EventBonusFilterEntity_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__, v30, v31);
    sub_1BCA7E0(&EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, v32, v33);
    byte_4B160BF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v37 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v34,
                                                    v35,
                                                    v36);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_40;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v42 = list;
    v43 = 0;
    while ( 1 )
    {
      v44 = (Il2CppObject *)sub_1BCAA2C(EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, namespaze_low, v40, v41);
      System_Object___ctor(v44, 0LL);
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v43,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v44 )
        break;
      if ( list )
      {
        v51 = EventBonusFilterEntity_TypeInfo;
        methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventBonusFilterEntity_TypeInfo )
            v53 = (Il2CppClass *)list;
          else
            v53 = 0LL;
        }
        else
        {
          v53 = 0LL;
        }
        v44[1].klass = v53;
        v55 = (PartyOrganizationUtility_o *)&v44[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v51 )
            v54 = list;
          else
            v54 = 0LL;
        }
        else
        {
          v54 = 0LL;
        }
      }
      else
      {
        v54 = 0LL;
        v44[1].klass = 0LL;
        v55 = (PartyOrganizationUtility_o *)&v44[1];
      }
      sub_1BCA784(v55, v54, v45, v46, v47, v48, v49, v50);
      klass = v55->klass;
      if ( v55->klass )
      {
        if ( LODWORD(klass->_1.name) == eventId && (HIDWORD(klass->_1.name) & 0xFFFFFFFE) == 4 )
        {
          v57 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, namespaze_low, v40, v41);
          System_Func_int__bool____ctor(
            v57,
            v44,
            Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__,
            0LL);
          list = System_Linq_Enumerable__Any_int__49415144(
                   (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                   (System_Func_TSource__bool__o *)v57,
                   (const MethodInfo_2F203E8 *)Method_System_Linq_Enumerable_Any_int____76878416);
          if ( (list & 1) != 0 )
          {
            v58 = v55->klass;
            if ( !v55->klass )
              break;
            namespaze_low = LODWORD(v58->_1.namespaze);
            if ( HIDWORD(v58->_1.name) == 4 )
            {
              if ( !v37 )
                break;
              items = v37->fields._items;
              v60 = Method_System_Collections_Generic_List_int__Add__;
              ++v37->fields._version;
              if ( !items )
                break;
              size = v37->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v37,
                  namespaze_low,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
              }
              else
              {
                v37->fields._size = size + 1;
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
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v37 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v37,
                *(System_Collections_Generic_IEnumerable_T__o **)(list + 40),
                (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( v42 == ++v43 )
        goto LABEL_38;
    }
LABEL_40:
    sub_1BCAA3C(list, namespaze_low);
  }
LABEL_38:
  if ( !v37 )
    goto LABEL_40;
  return System_Collections_Generic_List_int___ToArray(
           v37,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventBonusFilterMaster__GetEventIdListBySvtId(
        EventBonusFilterMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x20
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  const MethodInfo *klass_low; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_int__o *v33; // x21
  int32_t v34; // w22
  System_Func_int__bool__o **v35; // x23
  Il2CppObject *Item; // x0
  Il2CppObject *v37; // x24
  __int64 methodPtr_low; // x10
  System_Int32_array *EquipIdList; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Func_int__bool__o *v43; // x26
  System_Int32_array *v44; // x25
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10

  if ( (byte_4B160BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&EventBonusFilterEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Sort__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__, v24, v25);
    sub_1BCA7E0(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo, v26, v27);
    byte_4B160BB = 1;
  }
  v28 = sub_1BCAA2C(EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo, *(_QWORD *)&svtId, method, v3);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_23;
  *(_DWORD *)(v28 + 16) = svtId;
  v33 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    klass_low,
                                                    v31,
                                                    v32);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  v34 = 0;
  v35 = (System_Func_int__bool__o **)(v28 + 24);
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                             (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v34 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v34,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v37 = Item;
      methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo )
      {
        EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, klass_low);
        v43 = *v35;
        v44 = EquipIdList;
        if ( !*v35 )
        {
          v43 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v40, v41, v42);
          System_Func_int__bool____ctor(
            v43,
            (Il2CppObject *)v28,
            Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__,
            0LL);
          *(_QWORD *)(v28 + 24) = v43;
          sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)v43, v45, v46, v47, v48, v49, v50);
        }
        list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)BasicHelper__Any_int__49273364(
                                                                                                 v44,
                                                                                                 (System_Func_T__bool__o *)v43,
                                                                                                 (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_23;
          klass_low = (const MethodInfo *)LODWORD(v37[1].klass);
          items = v33->fields._items;
          v52 = Method_System_Collections_Generic_List_int__Add__;
          ++v33->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v33->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v33,
              (int32_t)klass_low,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v33->fields._size = size + 1;
            items->m_Items[size + 1] = (int)klass_low;
          }
        }
      }
    }
    list = this->fields.list;
    ++v34;
    if ( !list )
      goto LABEL_23;
  }
  if ( !v33 )
LABEL_23:
    sub_1BCAA3C(list, klass_low);
  System_Collections_Generic_List_int___Sort(
    v33,
    (const MethodInfo_358657C *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v33,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        bool ignoreExpCard,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  System_Int32_array *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x23
  int32_t v23; // w24
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 methodPtr_low; // x10
  int items_high; // w8
  unsigned int v32; // w9
  _BOOL4 v33; // w8
  int max_length; // w8
  __int64 v35; // x10
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0

  v4 = ignoreExpCard;
  v5 = eventIdList;
  if ( (byte_4B160BA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventIdList,
      ignoreExpCard);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventBonusFilterEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v15, v16);
    byte_4B160BA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( v5 && *(_QWORD *)&v5->max_length && Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v23,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        eventIdList = (System_Int32_array *)list;
        methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventBonusFilterEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventBonusFilterEntity_TypeInfo )
        {
          items_high = HIDWORD(list->fields.items);
          v32 = items_high - 1;
          v33 = items_high == 3;
          if ( v32 <= 1 && (!v33 || !v4) )
          {
            max_length = v5->max_length;
            if ( max_length >= 1 )
            {
              v35 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v35 >= max_length )
                  sub_1BCAA44(list, list);
                if ( LODWORD(list->fields.items) == v5->m_Items[v35 + 1] )
                  break;
                if ( (int)++v35 >= max_length )
                  goto LABEL_12;
              }
              if ( !v22 )
                break;
              items = v22->fields._items;
              v37 = Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__;
              ++v22->fields._version;
              if ( !items )
                break;
              size = v22->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  (Il2CppObject *)list,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v39[4] = (Il2CppClass *)eventIdList;
                sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)eventIdList, v24, v25, v26, v27, v28, v29);
              }
            }
          }
        }
      }
LABEL_12:
      if ( ++v23 == Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v22;
    }
LABEL_28:
    sub_1BCAA3C(list, eventIdList);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v22;
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetOtherEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_int__o *v32; // x21
  const MethodInfo *v33; // x2
  int64_t TargetEventEquipIdList; // x0
  const MethodInfo *v35; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Int32_array *v37; // x22
  int32_t v38; // w23
  __int64 v39; // x2
  __int64 v40; // x3
  Il2CppObject *v41; // x24
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  EventBonusFilterEntity_c *v48; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v50; // x10
  int64_t v51; // x1
  PartyOrganizationUtility_o *v52; // x25
  __int64 v53; // x2
  __int64 v54; // x3
  System_Func_int__bool__o *v55; // x26
  __int64 v56; // x2
  __int64 v57; // x3
  int64_t v58; // x24
  unsigned __int64 v59; // x27
  __int64 v60; // x25
  __int64 v61; // x2
  __int64 v62; // x3
  System_Func_int__bool__o *v63; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  System_Int32_array *v68; // [xsp+0h] [xbp-70h]
  EventBonusFilterMaster_o *v69; // [xsp+8h] [xbp-68h]

  if ( (byte_4B160BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, eventIdList, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&EventBonusFilterEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__IndexOf__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__, v24, v25);
    sub_1BCA7E0(&EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__, v28, v29);
    sub_1BCA7E0(&EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo, v30, v31);
    byte_4B160BD = 1;
  }
  v32 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    eventIdList,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v68 = eventIdList;
  TargetEventEquipIdList = (int64_t)EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v33);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  v37 = (System_Int32_array *)TargetEventEquipIdList;
  v38 = 0;
  v69 = this;
  while ( 1 )
  {
    TargetEventEquipIdList = System_Collections_ObjectModel_Collection_object___get_Count(
                               list,
                               (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v38 >= (int)TargetEventEquipIdList )
      break;
    v41 = (Il2CppObject *)sub_1BCAA2C(EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v35, v39, v40);
    System_Object___ctor(v41, 0LL);
    TargetEventEquipIdList = (int64_t)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_42;
    TargetEventEquipIdList = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)TargetEventEquipIdList,
                                        v38,
                                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v41 )
      goto LABEL_42;
    if ( TargetEventEquipIdList )
    {
      v48 = EventBonusFilterEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventBonusFilterEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)TargetEventEquipIdList + 304LL) >= (unsigned int)methodPtr_low )
      {
        if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)TargetEventEquipIdList + 200LL)
                                          + 8 * methodPtr_low
                                          - 8) == EventBonusFilterEntity_TypeInfo )
          v50 = (Il2CppClass *)TargetEventEquipIdList;
        else
          v50 = 0LL;
      }
      else
      {
        v50 = 0LL;
      }
      v41[1].klass = v50;
      v52 = (PartyOrganizationUtility_o *)&v41[1];
      if ( *(unsigned __int8 *)(*(_QWORD *)TargetEventEquipIdList + 304LL) >= (unsigned int)methodPtr_low )
      {
        if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)TargetEventEquipIdList + 200LL)
                                          + 8 * methodPtr_low
                                          - 8) == v48 )
          v51 = TargetEventEquipIdList;
        else
          v51 = 0LL;
      }
      else
      {
        v51 = 0LL;
      }
    }
    else
    {
      v51 = 0LL;
      v41[1].klass = 0LL;
      v52 = (PartyOrganizationUtility_o *)&v41[1];
    }
    sub_1BCA784(v52, v51, v42, v43, v44, v45, v46, v47);
    TargetEventEquipIdList = (int64_t)v52->klass;
    if ( v52->klass )
    {
      if ( v68 )
      {
        v55 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v35, v53, v54);
        System_Func_int__bool____ctor(
          v55,
          v41,
          Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__,
          0LL);
        TargetEventEquipIdList = BasicHelper__Any_int__49273364(
                                   v68,
                                   (System_Func_T__bool__o *)v55,
                                   (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
        if ( (TargetEventEquipIdList & 1) != 0 )
          goto LABEL_38;
        TargetEventEquipIdList = (int64_t)v52->klass;
        if ( !v52->klass )
          goto LABEL_42;
      }
      TargetEventEquipIdList = (int64_t)EventBonusFilterEntity__GetEquipIdList(
                                          (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                          v35);
      if ( !TargetEventEquipIdList )
        goto LABEL_42;
      v58 = TargetEventEquipIdList;
      if ( *(int *)(TargetEventEquipIdList + 24) >= 1 )
      {
        v59 = 0LL;
        while ( 1 )
        {
          v60 = sub_1BCAA2C(EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo, v35, v56, v57);
          System_Object___ctor((Il2CppObject *)v60, 0LL);
          if ( v59 >= *(unsigned int *)(v58 + 24) )
            sub_1BCAA44(TargetEventEquipIdList, v35);
          if ( !v60 )
            break;
          *(_DWORD *)(v60 + 16) = *(_DWORD *)(v58 + 32 + 4 * v59);
          if ( !v37
            || (v63 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v35, v61, v62),
                System_Func_int__bool____ctor(
                  v63,
                  (Il2CppObject *)v60,
                  Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__,
                  0LL),
                TargetEventEquipIdList = BasicHelper__Any_int__49273364(
                                           v37,
                                           (System_Func_T__bool__o *)v63,
                                           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176),
                (TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v32 )
              break;
            TargetEventEquipIdList = System_Collections_Generic_List_int___IndexOf(
                                       v32,
                                       *(_DWORD *)(v60 + 16),
                                       (const MethodInfo_35858B4 *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
            {
              v35 = (const MethodInfo *)*(unsigned int *)(v60 + 16);
              items = v32->fields._items;
              v65 = Method_System_Collections_Generic_List_int__Add__;
              ++v32->fields._version;
              if ( !items )
                break;
              size = v32->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v32,
                  (int32_t)v35,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
              }
              else
              {
                v32->fields._size = size + 1;
                items->m_Items[size + 1] = (int)v35;
              }
            }
          }
          if ( (__int64)++v59 >= *(int *)(v58 + 24) )
            goto LABEL_38;
        }
LABEL_42:
        sub_1BCAA3C(TargetEventEquipIdList, v35);
      }
    }
LABEL_38:
    this = v69;
    ++v38;
    list = (System_Collections_ObjectModel_Collection_T__o *)v69->fields.list;
    if ( !list )
      goto LABEL_42;
  }
  if ( !v32 )
    goto LABEL_42;
  return System_Collections_Generic_List_int___ToArray(
           v32,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetTargetEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x19
  System_Collections_Generic_List_object__o *FilterList; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  System_Int32_array *EquipIdList; // x0
  __int64 v28; // x1
  System_Int32_array *v29; // x20
  __int64 v30; // x8
  unsigned __int64 v31; // x26
  int32_t v32; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B160BC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__,
      eventIdList,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__IndexOf__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v20, v21);
    byte_4B160BC = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v22 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    eventIdList,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( eventIdList )
  {
    FilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetFilterList(
                                                                this,
                                                                eventIdList,
                                                                0,
                                                                v25);
    if ( !FilterList )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      FilterList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v38 = v37;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v38.fields._current )
        sub_1BCAA3C(0LL, v26);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v38.fields._current, v26);
      v29 = EquipIdList;
      if ( !EquipIdList )
        sub_1BCAA3C(0LL, v28);
      v30 = *(_QWORD *)&EquipIdList->max_length;
      if ( (int)v30 >= 1 )
      {
        v31 = 0LL;
        do
        {
          if ( v31 >= (unsigned int)v30 )
            sub_1BCAA44(EquipIdList, v28);
          if ( !v22 )
            sub_1BCAA3C(EquipIdList, v28);
          v32 = v29->m_Items[v31 + 1];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v22,
                                                v32,
                                                (const MethodInfo_35858B4 *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
          {
            items = v22->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v22->fields._version;
            if ( !items )
              sub_1BCAA3C(EquipIdList, v28);
            size = v22->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v22,
                v32,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v22->fields._size = size + 1;
              items->m_Items[size + 1] = v32;
            }
          }
          LODWORD(v30) = v29->max_length;
          ++v31;
        }
        while ( (__int64)v31 < (int)v30 );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v22 )
LABEL_28:
    sub_1BCAA3C(FilterList, v24);
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B160B8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B160B8 = 1;
  }
  PK = (Il2CppObject *)EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&value);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void __fastcall EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B160C0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventBonusFilterMaster___c_TypeInfo, v1, v2);
    byte_4B160C0 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventBonusFilterMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventBonusFilterMaster___c_TypeInfo->static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventBonusFilterMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBonusFilterMaster___c__DisplayClass6_0___GetOtherEventEquipIdList_b__0(
        EventBonusFilterMaster___c__DisplayClass6_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, *(_QWORD *)&x);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBonusFilterMaster___c__DisplayClass7_0___GetBonusSkillFilterList_b__1(
        EventBonusFilterMaster___c__DisplayClass7_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *e; // x8

  e = this->fields.e;
  if ( !e )
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  return e->fields.eventId == eventId;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass8_0___ctor(
        EventBonusFilterMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBonusFilterMaster___c__DisplayClass8_0___GetEventBonusSkillIds_b__0(
        EventBonusFilterMaster___c__DisplayClass8_0_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *e; // x8

  e = this->fields.e;
  if ( !e )
    sub_1BCAA3C(this, *(_QWORD *)&value);
  return e->fields.value == value;
}