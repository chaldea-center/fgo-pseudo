void __fastcall ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49B6363 & 1) == 0 )
  {
    sub_1B4CF90(&ServantEventBonusFilterController_TypeInfo, v1);
    byte_49B6363 = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void __fastcall ServantEventBonusFilterController___ctor(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49B6362 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v3);
    byte_49B6362 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.defaultFilterData, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


EventDropUpValInfo_array *__fastcall ServantEventBonusFilterController__GetFriendshipUpCampaignInfo(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
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
  Il2CppObject *Master_object; // x20
  void *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  EventDropUpValInfo_o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 OnlyMaxFuncGroupId; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49B6361 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventCampaignMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v2);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v5);
    sub_1B4CF90(&EventDropUpValInfo_TypeInfo, v6);
    sub_1B4CF90(&FunctionEntity_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v12);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    byte_49B6361 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_26;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 13),
               0LL);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v35 = v34;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      current = v35.fields._current;
      v19 = sub_1B4D1DC(FunctionEntity_TypeInfo);
      FunctionEntity___ctor((FunctionEntity_o *)v19, 0LL);
      if ( !v19 )
        sub_1B4D1EC(v20, v21);
      *(_QWORD *)(v19 + 24) = 111LL;
      v22 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
      EventDropUpValInfo___ctor(v22, 0, (FunctionEntity_o *)v19, 0LL);
      if ( !current )
        sub_1B4D1EC(v23, v24);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0LL);
      if ( !v22 )
        sub_1B4D1EC(OnlyMaxFuncGroupId, v26);
      v22->fields.groupId = OnlyMaxFuncGroupId;
      if ( !v14 )
        sub_1B4D1EC(OnlyMaxFuncGroupId, v26);
      items = v14->fields._items;
      v30 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1B4D1EC(OnlyMaxFuncGroupId, v26);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v22,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v22;
        sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v22, v27, v28);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v14 )
LABEL_26:
    sub_1B4D1EC(Instance, v17);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v14,
                                       (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


void __fastcall ServantEventBonusFilterController__Init(
        ServantEventBonusFilterController_o *this,
        ListViewSort_o *sortParam,
        int32_t targetEventId,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  this->fields.sort = sortParam;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)sortParam, targetEventId, method);
  this->fields.eventId = targetEventId;
  ServantEventBonusFilterController__SetupLabel(this, v6);
  ServantEventBonusFilterController__InitItems(this, v7);
  ServantEventBonusFilterController__SetDefaultFilterData(this, v8);
}


void __fastcall ServantEventBonusFilterController__InitAllButton(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B635A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_49B635A = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B4D1EC(0LL, v7);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__InitItems(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_List_object__o *v29; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o **p_itemList; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_object; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x22
  System_Collections_Generic_List_object__o *BonusSkillFilterList; // x21
  System_Collections_Generic_List_int__o *v39; // x22
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x24
  _BOOL8 v43; // x0
  __int64 v44; // x1
  _BOOL8 v45; // x0
  __int64 v46; // x1
  __int64 skillId; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  ServantEventBonusFilterController_o *v52; // x22
  const MethodInfo *v53; // x1
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *FriendshipUpCampaignInfo; // x23
  System_Collections_Generic_IEnumerable_TSource__o *NeedAddAnnotationSkillIds; // x22
  float v56; // s8
  EventBonusFilterEntity_o *v57; // x23
  Il2CppObject *itemPrefab; // x21
  Il2CppObject *v59; // x0
  __int64 v60; // x1
  ServantEventBonusFilterItem_o *v61; // x21
  __int64 v62; // x1
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  ListViewSort_o *sort; // x24
  bool v69; // w0
  const MethodInfo *v70; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x0
  __int64 v75; // x1
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct UISprite_o *baseSprite; // x8
  System_Collections_Generic_List_object__o *v79; // x0
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x8
  UIWidget_o *v84; // x20
  float y; // s9
  float v86; // s0
  int32_t v87; // w1
  UnityEngine_GameObject_o *v88; // x0
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+10h] [xbp-B0h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B635C & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMaster___, v4);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Distinct_int___, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1B4CF90(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__, v22);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_1B4CF90(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo, v24);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___, v25);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v26);
    sub_1B4CF90(&ServantEventBonusFilterController_TypeInfo, v27);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    byte_49B635C = 1;
  }
  memset(&v91, 0, sizeof(v91));
  entity = 0LL;
  v29 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v29;
  p_itemList = &this->fields.itemList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v29, v31, v32);
  if ( (this->fields.eventId & 0x80000000) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
LABEL_66:
      sub_1B4D1EC(Master_object, v35);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_343E3DC *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !EventValUpEventIdHash )
      goto LABEL_66;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v36 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v37 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                     (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v37 )
    goto LABEL_66;
  BonusSkillFilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                                        (EventBonusFilterMaster_o *)v37,
                                                                        (System_Int32_array *)Master_object,
                                                                        0LL);
  v39 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !BonusSkillFilterList )
    goto LABEL_66;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    BonusSkillFilterList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v91 = v89;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v91,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    if ( !v40 )
      break;
    current = v91.fields._current;
    if ( !v91.fields._current )
      sub_1B4D1EC(v40, v41);
    v43 = EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)v91.fields._current, 4, 0LL);
    if ( v43 )
    {
      if ( !v36 )
        sub_1B4D1EC(v43, v44);
      v45 = SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v36, &entity, (int32_t)current[1].monitor, 1, 0LL);
      if ( v45 )
      {
        if ( !entity )
          sub_1B4D1EC(v45, v46);
        if ( !v39 )
          sub_1B4D1EC(v45, v46);
        skillId = (unsigned int)entity->fields.skillId;
        items = v39->fields._items;
        v49 = Method_System_Collections_Generic_List_int__Add__;
        ++v39->fields._version;
        if ( !items )
          sub_1B4D1EC(v45, skillId);
        size = v39->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v39,
            skillId,
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v39->fields._size = size + 1;
          items->m_Items[size + 1] = skillId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v91,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  if ( !Master_object )
    goto LABEL_66;
  Master_object = (EventMaster_o *)ServantPassiveSkillMaster__GetEventBonusSkillIds(
                                     (ServantPassiveSkillMaster_o *)Master_object,
                                     0LL);
  if ( !v39 )
    goto LABEL_66;
  System_Collections_Generic_List_int___AddRange(
    v39,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
  v51 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v39,
          (const MethodInfo_2F2176C *)Method_System_Linq_Enumerable_Distinct_int___);
  v52 = (ServantEventBonusFilterController_o *)System_Linq_Enumerable__ToArray_int_(
                                                 v51,
                                                 (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
  FriendshipUpCampaignInfo = (System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *)ServantEventBonusFilterController__GetFriendshipUpCampaignInfo(
                                                                                               v52,
                                                                                               v53);
  Master_object = (EventMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_66;
  NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                     (PartyOrganizationUtility_o *)Master_object,
                                                                                     (System_Collections_Generic_IEnumerable_int__o *)v52,
                                                                                     FriendshipUpCampaignInfo,
                                                                                     0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    BonusSkillFilterList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v56 = 0.0;
  v91 = v89;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v91,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    v57 = (EventBonusFilterEntity_o *)v91.fields._current;
    itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v59 = UnityEngine_Object__Instantiate_object_(
            itemPrefab,
            (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v61 = (ServantEventBonusFilterItem_o *)v59;
    if ( !v59 )
      sub_1B4D1EC(0LL, v60);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v59, 0LL);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_1B4D1EC(0LL, v62);
    v65 = UnityEngine_GameObject__get_transform(baseObject, 0LL);
    if ( !transform )
      sub_1B4D1EC(v65, v65);
    UnityEngine_Transform__SetParent_68825864(transform, v65, 0, 0LL);
    if ( !v57 )
      sub_1B4D1EC(v66, v67);
    sort = this->fields.sort;
    v69 = System_Linq_Enumerable__Contains_int_(
            NeedAddAnnotationSkillIds,
            v57->fields.value,
            (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___);
    ServantEventBonusFilterItem__Init(v61, v57, sort, v69, v70);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v61, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v56, 0LL);
    v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v61, 0LL);
    if ( !v72 )
      sub_1B4D1EC(0LL, v73);
    UnityEngine_GameObject__SetActive(v72, 1, 0LL);
    baseSprite = v61->fields.baseSprite;
    if ( !baseSprite )
      sub_1B4D1EC(v74, v75);
    v79 = (System_Collections_Generic_List_object__o *)*p_itemList;
    v56 = (float)(v56 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_1B4D1EC(0LL, v75);
    v80 = v79->fields._items;
    v81 = Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__;
    ++v79->fields._version;
    if ( !v80 )
      sub_1B4D1EC(v79, v75);
    v82 = v79->fields._size;
    if ( (unsigned int)v82 >= v80->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v79,
        (Il2CppObject *)v61,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
    }
    else
    {
      v83 = &v80->obj.klass + v82;
      v79->fields._size = v82 + 1;
      v83[4] = (Il2CppClass *)v61;
      sub_1B4CF34((CGThumbnailListItem_o *)(v83 + 4), (int32_t)v61, v76, v77);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v91,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_object = (EventMaster_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_66;
  v84 = (UIWidget_o *)Master_object;
  Master_object = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0LL);
  if ( !Master_object )
    goto LABEL_66;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Master_object, 0LL);
  Master_object = (EventMaster_o *)ServantEventBonusFilterController_TypeInfo;
  y = localPosition.fields.y;
  if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  if ( !v84 )
    goto LABEL_66;
  v86 = fabsf((float)(v56 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v87 = v86 == INFINITY ? 0x80000000 : (int)v86;
  UIWidget__set_height(v84, v87, 0LL);
  Master_object = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_object )
    goto LABEL_66;
  v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionY(v88, (float)-v84->fields.mHeight, 0LL);
  UIWidget__set_height(v84, v84->fields.mHeight + 12, 0LL);
}


bool __fastcall ServantEventBonusFilterController__IsChangeFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  ServantEventBonusFilterController_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_IEnumerable_TSource__o *svtEventBonusFilterDic; // x19
  System_Collections_Generic_IEnumerable_TSource__o *defaultFilterData; // x20
  ServantEventBonusFilterController___c_c *v12; // x0
  System_Func_T__TResult__o *_9__16_0; // x21
  Il2CppObject *v14; // x22
  struct ServantEventBonusFilterController___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  ServantEventBonusFilterController___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_T__TResult__o *_9__16_1; // x21
  Il2CppObject *v22; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  v2 = this;
  if ( (byte_49B635E & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_int_____, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Intersect_int_____, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____, v4);
    sub_1B4CF90(&System_Func_KeyValuePair_int__int_____int____TypeInfo, v5);
    sub_1B4CF90(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__, v6);
    sub_1B4CF90(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__, v7);
    this = (ServantEventBonusFilterController_o *)sub_1B4CF90(&ServantEventBonusFilterController___c_TypeInfo, v8);
    byte_49B635E = 1;
  }
  sort = v2->fields.sort;
  if ( !sort )
    sub_1B4D1EC(this, method);
  svtEventBonusFilterDic = (System_Collections_Generic_IEnumerable_TSource__o *)sort->fields.svtEventBonusFilterDic;
  defaultFilterData = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.defaultFilterData;
  v12 = ServantEventBonusFilterController___c_TypeInfo;
  if ( !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo);
    v12 = ServantEventBonusFilterController___c_TypeInfo;
  }
  _9__16_0 = (System_Func_T__TResult__o *)v12->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ServantEventBonusFilterController___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__16_0 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v14,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      0LL);
    static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_2F2F11C *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v19 = ServantEventBonusFilterController___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo);
    v19 = ServantEventBonusFilterController___c_TypeInfo;
  }
  _9__16_1 = (System_Func_T__TResult__o *)v19->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ServantEventBonusFilterController___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__16_1 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v22,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      0LL);
    v23 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v23->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v23->__9__16_1, (int32_t)_9__16_1, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_2F2F11C *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v27 = System_Linq_Enumerable__Intersect_object_(
          v20,
          v26,
          (const MethodInfo_2F28BA8 *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_object_(
            v27,
            (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_int_____);
}


bool __fastcall ServantEventBonusFilterController__IsHideServant(
        UserServantEntity_o *userServantEntity,
        ListViewSort_o *sort,
        int32_t eventId,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x19
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
  System_Collections_Generic_List_int__o *v20; // x20
  System_Collections_Generic_List_int__o *v21; // x19
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x23
  UserServantEntity_o *v23; // x22
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t key; // w23
  System_Collections_Generic_IEnumerable_T__o *EventBonusSkillIds; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+30h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+58h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+60h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+68h] [xbp-48h] BYREF

  v6 = userServantEntity;
  if ( (byte_49B6360 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventBonusFilterMaster___, sort);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v8);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Intersect_int___, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    userServantEntity = (UserServantEntity_o *)sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v19);
    byte_49B6360 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  memset(&v32, 0, sizeof(v32));
  if ( !eventId )
    return 0;
  if ( !v6 )
    goto LABEL_26;
  UserServantEntity__getPassiveSkillInfo(v6, &idList, &titleList, &explanationList, -1, 0LL, 0LL);
  if ( !idList )
    return 0;
  v20 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  v21 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_26;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_26;
  v23 = userServantEntity;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v31,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_31F72B8 *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v32,
            (const MethodInfo_3344C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v24 )
      break;
    key = (int32_t)v32.fields._current.fields.key;
    if ( eventId < 1 || LODWORD(v32.fields._current.fields.key) == eventId )
    {
      if ( !v23 )
        sub_1B4D1EC(v24, v25);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v23,
                                                                            (int32_t)v32.fields._current.fields.key,
                                                                            (System_Int32_array *)v32.fields._current.fields.value,
                                                                            0LL);
      if ( !v20 )
        sub_1B4D1EC(EventBonusSkillIds, EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v20,
        EventBonusSkillIds,
        (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
      v28 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v23,
                                                             key,
                                                             idList,
                                                             0LL);
      if ( !v21 )
        sub_1B4D1EC(v28, v28);
      System_Collections_Generic_List_int___AddRange(
        v21,
        v28,
        (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v32,
    (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v21 )
LABEL_26:
    sub_1B4D1EC(userServantEntity, sort);
  if ( v21->fields._size > 0 )
  {
    v29 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v21,
            (System_Collections_Generic_IEnumerable_TSource__o *)v20,
            (const MethodInfo_2F28B34 *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v29,
             (const MethodInfo_2F1EC4C *)Method_System_Linq_Enumerable_Count_int___) >= v21->fields._size;
  }
  return 0;
}


void __fastcall ServantEventBonusFilterController__RefreshButtonState(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B6359 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_49B6359 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B4D1EC(0LL, v7);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetDefaultFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__object__o *v13; // x21
  System_Collections_Generic_Dictionary_int__object__o **p_defaultFilterData; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_HashSet_int__o *v17; // x21
  __int64 v18; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppClass *klass; // x8
  int32_t name; // w22
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  __int64 v26; // x1
  System_Int32_array *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49B635D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int____Add__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int__Contains__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v12);
    byte_49B635D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v13;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.defaultFilterData;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.defaultFilterData, (int32_t)v13, v15, v16);
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_343E3DC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B4D1EC(0LL, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v20 )
      break;
    if ( !v29.fields._current )
      sub_1B4D1EC(v20, v21);
    klass = v29.fields._current[5].klass;
    if ( !klass )
      sub_1B4D1EC(v20, v21);
    if ( !v17 )
      sub_1B4D1EC(v20, v21);
    name = (int32_t)klass->_1.name;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v17,
            name,
            (const MethodInfo_343EAD0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v17,
        name,
        (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_1B4D1EC(0LL, v24);
      SvtEventBonusFilterInt = ListViewSort__GetSvtEventBonusFilterInt(sort, name, 0LL);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_1B4D1EC(0LL, v26);
        System_Collections_Generic_Dictionary_int__object___Add(
          *p_defaultFilterData,
          name,
          &SvtEventBonusFilterInt->obj,
          (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEventBonusFilterController__SetEnableFilterButton(
        ServantEventBonusFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B635F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, isEnable);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v7);
    byte_49B635F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B4D1EC(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)klass, i, 0LL) )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v10 )
      break;
    if ( !v13.fields._current )
      sub_1B4D1EC(v10, v11);
    klass = v13.fields._current[4].klass;
    if ( !klass )
      sub_1B4D1EC(0LL, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetupLabel(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *explanationLabel; // x19

  if ( (byte_49B635B & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_11578/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, v3);
    sub_1B4CF90(&StringLiteral_11576/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, v4);
    byte_49B635B = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11578/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11576/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0LL),
        !explanationLabel) )
  {
    sub_1B4D1EC(v6, v7);
  }
  UILabel__set_text(explanationLabel, v6, 0LL);
}


void __fastcall ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B6364 & 1) == 0 )
  {
    sub_1B4CF90(&ServantEventBonusFilterController___c_TypeInfo, v1);
    byte_49B6364 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ServantEventBonusFilterController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantEventBonusFilterController___c_TypeInfo->static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)ServantEventBonusFilterController___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ServantEventBonusFilterController___c___ctor(
        ServantEventBonusFilterController___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall ServantEventBonusFilterController___c___IsChangeFilterData_b__16_0(
        ServantEventBonusFilterController___c_o *this,
        System_Collections_Generic_KeyValuePair_int__int____o pair,
        const MethodInfo *method)
{
  System_Int32_array *value; // x19

  value = pair.fields.value;
  if ( (byte_49B6365 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, *(_QWORD *)&pair.fields.key);
    byte_49B6365 = 1;
  }
  return value;
}


System_Int32_array *__fastcall ServantEventBonusFilterController___c___IsChangeFilterData_b__16_1(
        ServantEventBonusFilterController___c_o *this,
        System_Collections_Generic_KeyValuePair_int__int____o pair,
        const MethodInfo *method)
{
  System_Int32_array *value; // x19

  value = pair.fields.value;
  if ( (byte_49B6366 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, *(_QWORD *)&pair.fields.key);
    byte_49B6366 = 1;
  }
  return value;
}