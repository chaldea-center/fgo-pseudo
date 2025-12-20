void ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  if ( (byte_4D27712 & 1) == 0 )
  {
    sub_1C94098(&ServantEventBonusFilterController_TypeInfo);
    byte_4D27712 = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void ServantEventBonusFilterController___ctor(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D27711 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    byte_4D27711 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.defaultFilterData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


EventDropUpValInfo_array *ServantEventBonusFilterController__GetFriendshipUpCampaignInfo(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x19
  Il2CppObject *Master_object; // x20
  void *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x21
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  EventDropUpValInfo_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 OnlyMaxFuncGroupId; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D27710 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C94098(&EventDropUpValInfo_TypeInfo);
    sub_1C94098(&FunctionEntity_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D27710 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v2 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_26;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 17),
               0);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v27 = v26;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      current = v27.fields._current;
      v7 = sub_1C942E4(FunctionEntity_TypeInfo);
      FunctionEntity___ctor((FunctionEntity_o *)v7, 0);
      if ( !v7 )
        sub_1C942F0(v8, v9);
      *(_QWORD *)(v7 + 24) = 111;
      v10 = (EventDropUpValInfo_o *)sub_1C942E4(EventDropUpValInfo_TypeInfo);
      EventDropUpValInfo___ctor(v10, 0, (FunctionEntity_o *)v7, 0);
      if ( !current )
        sub_1C942F0(v11, v12);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
      if ( !v10 )
        sub_1C942F0(OnlyMaxFuncGroupId, v14);
      v10->fields.groupId = OnlyMaxFuncGroupId;
      if ( !v2 )
        sub_1C942F0(OnlyMaxFuncGroupId, v14);
      items = v2->fields._items;
      v22 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
      ++v2->fields._version;
      if ( !items )
        sub_1C942F0(OnlyMaxFuncGroupId, v14);
      size = v2->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v2,
          (Il2CppObject *)v10,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v2->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v10;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v10, v15, v16, v17, v18, v19, v20);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v2 )
LABEL_26:
    sub_1C942F0(Instance, v5);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v2,
                                       (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


void ServantEventBonusFilterController__Init(
        ServantEventBonusFilterController_o *this,
        ListViewSort_o *sortParam,
        int32_t targetEventId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  this->fields.sort = sortParam;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.sort,
    (int32_t)sortParam,
    targetEventId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventId = targetEventId;
  ServantEventBonusFilterController__SetupLabel(this, v10);
  ServantEventBonusFilterController__InitItems(this, v11);
  ServantEventBonusFilterController__SetDefaultFilterData(this, v12);
}


void ServantEventBonusFilterController__InitAllButton(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D27709 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4D27709 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C942F0(0, v4);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__InitItems(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o **p_itemList; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_object; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x23
  Il2CppObject *v15; // x22
  System_Collections_Generic_List_object__o *BonusSkillFilterList; // x21
  System_Collections_Generic_List_int__o *v17; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x24
  _BOOL8 v21; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  __int64 skillId; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  ServantEventBonusFilterController_o *v30; // x22
  const MethodInfo *v31; // x1
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *FriendshipUpCampaignInfo; // x23
  System_Collections_Generic_IEnumerable_TSource__o *NeedAddAnnotationSkillIds; // x22
  float v34; // s8
  EventBonusFilterEntity_o *v35; // x23
  Il2CppObject *itemPrefab; // x21
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  ServantEventBonusFilterItem_o *v39; // x21
  __int64 v40; // x1
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  ListViewSort_o *sort; // x24
  bool v47; // w0
  const MethodInfo *v48; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  struct UISprite_o *baseSprite; // x8
  System_Collections_Generic_List_object__o *v61; // x0
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x8
  UIWidget_o *v66; // x20
  float y; // s9
  float v68; // s0
  int32_t v69; // w1
  UnityEngine_GameObject_o *v70; // x0
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+10h] [xbp-B0h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2770B & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C94098(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantEventBonusFilterController_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2770B = 1;
  }
  memset(&v73, 0, sizeof(v73));
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v3;
  p_itemList = &this->fields.itemList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.itemList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  if ( this->fields.eventId < 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
LABEL_66:
      sub_1C942F0(Master_object, v13);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0, 0);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !EventValUpEventIdHash )
      goto LABEL_66;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                     (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v15 )
    goto LABEL_66;
  BonusSkillFilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                                        (EventBonusFilterMaster_o *)v15,
                                                                        (System_Int32_array *)Master_object,
                                                                        0);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !BonusSkillFilterList )
    goto LABEL_66;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    BonusSkillFilterList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v73 = v71;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v73.fields._current;
    if ( !v73.fields._current )
      sub_1C942F0(v18, v19);
    v21 = EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)v73.fields._current, 4, 0);
    if ( v21 )
    {
      if ( !v14 )
        sub_1C942F0(v21, v22);
      v23 = SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v14, &entity, (int32_t)current[1].monitor, 1, 0);
      if ( v23 )
      {
        if ( !entity )
          sub_1C942F0(v23, v24);
        if ( !v17 )
          sub_1C942F0(v23, v24);
        skillId = (unsigned int)entity->fields.skillId;
        items = v17->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          sub_1C942F0(v23, skillId);
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            skillId,
            *(const MethodInfo_384DE10 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size] = skillId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  if ( !Master_object )
    goto LABEL_66;
  Master_object = (EventMaster_o *)ServantPassiveSkillMaster__GetEventBonusSkillIds(
                                     (ServantPassiveSkillMaster_o *)Master_object,
                                     0);
  if ( !v17 )
    goto LABEL_66;
  System_Collections_Generic_List_int___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
  v29 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
          (const MethodInfo_31BF694 *)Method_System_Linq_Enumerable_Distinct_int___);
  v30 = (ServantEventBonusFilterController_o *)System_Linq_Enumerable__ToArray_int_(
                                                 v29,
                                                 (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  FriendshipUpCampaignInfo = (System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *)ServantEventBonusFilterController__GetFriendshipUpCampaignInfo(
                                                                                               v30,
                                                                                               v31);
  Master_object = (EventMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_66;
  NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                     (PartyOrganizationUtility_o *)Master_object,
                                                                                     (System_Collections_Generic_IEnumerable_int__o *)v30,
                                                                                     FriendshipUpCampaignInfo,
                                                                                     0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    BonusSkillFilterList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v34 = 0.0;
  v73 = v71;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    v35 = (EventBonusFilterEntity_o *)v73.fields._current;
    itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v37 = UnityEngine_Object__Instantiate_object_(
            itemPrefab,
            (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v39 = (ServantEventBonusFilterItem_o *)v37;
    if ( !v37 )
      sub_1C942F0(0, v38);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v37, 0);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_1C942F0(0, v40);
    v43 = UnityEngine_GameObject__get_transform(baseObject, 0);
    if ( !transform )
      sub_1C942F0(v43, v43);
    UnityEngine_Transform__SetParent_72134412(transform, v43, 0, 0);
    if ( !v35 )
      sub_1C942F0(v44, v45);
    sort = this->fields.sort;
    v47 = System_Linq_Enumerable__Contains_int_(
            NeedAddAnnotationSkillIds,
            v35->fields.value,
            (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
    ServantEventBonusFilterItem__Init(v39, v35, sort, v47, v48);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, v34, 0);
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39, 0);
    if ( !v50 )
      sub_1C942F0(0, v51);
    UnityEngine_GameObject__SetActive(v50, 1, 0);
    baseSprite = v39->fields.baseSprite;
    if ( !baseSprite )
      sub_1C942F0(v52, v53);
    v61 = (System_Collections_Generic_List_object__o *)*p_itemList;
    v34 = (float)(v34 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_1C942F0(0, v53);
    v62 = v61->fields._items;
    v63 = Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__;
    ++v61->fields._version;
    if ( !v62 )
      sub_1C942F0(v61, v53);
    v64 = v61->fields._size;
    if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v61,
        (Il2CppObject *)v39,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    }
    else
    {
      v65 = &v62->obj.klass + v64;
      v61->fields._size = v64 + 1;
      v65[4] = (Il2CppClass *)v39;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v65 + 4), (int32_t)v39, v54, v55, v56, v57, v58, v59);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_object = (EventMaster_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_66;
  v66 = (UIWidget_o *)Master_object;
  Master_object = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0);
  if ( !Master_object )
    goto LABEL_66;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Master_object, 0);
  Master_object = (EventMaster_o *)ServantEventBonusFilterController_TypeInfo;
  y = localPosition.fields.y;
  if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  if ( !v66 )
    goto LABEL_66;
  v68 = fabsf((float)(v34 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v69 = v68 == INFINITY ? 0x80000000 : (int)v68;
  UIWidget__set_height(v66, v69, 0);
  Master_object = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_object )
    goto LABEL_66;
  v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionY(v70, (float)-v66->fields.mHeight, 0);
  UIWidget__set_height(v66, v66->fields.mHeight + 12, 0);
}


bool ServantEventBonusFilterController__IsChangeFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  ServantEventBonusFilterController_o *v2; // x20
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_IEnumerable_TSource__o *svtEventBonusFilterDic; // x19
  System_Collections_Generic_IEnumerable_TSource__o *defaultFilterData; // x20
  ServantEventBonusFilterController___c_c *v6; // x0
  System_Func_T__TResult__o *_9__16_0; // x21
  Il2CppObject *v8; // x22
  struct ServantEventBonusFilterController___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  ServantEventBonusFilterController___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_T__TResult__o *_9__16_1; // x21
  Il2CppObject *v20; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  v2 = this;
  if ( (byte_4D2770D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_int_____);
    sub_1C94098(&Method_System_Linq_Enumerable_Intersect_int_____);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
    sub_1C94098(&System_Func_KeyValuePair_int__int_____int____TypeInfo);
    sub_1C94098(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__);
    sub_1C94098(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__);
    this = (ServantEventBonusFilterController_o *)sub_1C94098(&ServantEventBonusFilterController___c_TypeInfo);
    byte_4D2770D = 1;
  }
  sort = v2->fields.sort;
  if ( !sort )
    sub_1C942F0(this, method);
  svtEventBonusFilterDic = (System_Collections_Generic_IEnumerable_TSource__o *)sort->fields.svtEventBonusFilterDic;
  defaultFilterData = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.defaultFilterData;
  v6 = ServantEventBonusFilterController___c_TypeInfo;
  if ( !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo);
    v6 = ServantEventBonusFilterController___c_TypeInfo;
  }
  _9__16_0 = (System_Func_T__TResult__o *)v6->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ServantEventBonusFilterController___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v6->static_fields->__9;
    _9__16_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v8,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      0);
    static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_0,
      (int32_t)_9__16_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_31CD704 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v17 = ServantEventBonusFilterController___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo);
    v17 = ServantEventBonusFilterController___c_TypeInfo;
  }
  _9__16_1 = (System_Func_T__TResult__o *)v17->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ServantEventBonusFilterController___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__16_1 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v20,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      0);
    v21 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v21->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v21->__9__16_1, (int32_t)_9__16_1, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_31CD704 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v29 = System_Linq_Enumerable__Intersect_object_(
          v18,
          v28,
          (const MethodInfo_31C6BCC *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_object_(
            v29,
            (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_int_____);
}


bool ServantEventBonusFilterController__IsHideServant(
        UserServantEntity_o *userServantEntity,
        ListViewSort_o *sort,
        int32_t eventId,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x19
  System_Collections_Generic_List_int__o *v7; // x21
  System_Collections_Generic_List_int__o *v8; // x19
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x23
  UserServantEntity_o *v10; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int32_t key; // w23
  System_Collections_Generic_IEnumerable_T__o *EventBonusSkillIds; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+30h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+58h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+60h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+68h] [xbp-48h] BYREF

  v6 = userServantEntity;
  if ( (byte_4D2770F & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_1C94098(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    userServantEntity = (UserServantEntity_o *)sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2770F = 1;
  }
  titleList = 0;
  idList = 0;
  explanationList = 0;
  memset(&v19, 0, sizeof(v19));
  if ( !eventId )
    return 0;
  if ( !v6 )
    goto LABEL_26;
  UserServantEntity__getPassiveSkillInfo(v6, &idList, &titleList, &explanationList, -1, 0, 1, 0, 0);
  if ( !idList )
    return 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_26;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_26;
  v10 = userServantEntity;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v11 )
      break;
    key = (int32_t)v19.fields._current.fields.key;
    if ( eventId < 1 || LODWORD(v19.fields._current.fields.key) == eventId )
    {
      if ( !v10 )
        sub_1C942F0(v11, v12);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v10,
                                                                            (int32_t)v19.fields._current.fields.key,
                                                                            (System_Int32_array *)v19.fields._current.fields.value,
                                                                            0);
      if ( !v7 )
        sub_1C942F0(EventBonusSkillIds, EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v7,
        EventBonusSkillIds,
        (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
      v15 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v10,
                                                             key,
                                                             idList,
                                                             0);
      if ( !v8 )
        sub_1C942F0(v15, v15);
      System_Collections_Generic_List_int___AddRange(
        v8,
        v15,
        (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v8 )
LABEL_26:
    sub_1C942F0(userServantEntity, sort);
  if ( v8->fields._size > 0 )
  {
    v16 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v8,
            (System_Collections_Generic_IEnumerable_TSource__o *)v7,
            (const MethodInfo_31C6B58 *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v16,
             (const MethodInfo_31BC098 *)Method_System_Linq_Enumerable_Count_int___) >= v8->fields._size;
  }
  return 0;
}


void ServantEventBonusFilterController__RefreshButtonState(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D27708 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4D27708 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C942F0(0, v4);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__SetDefaultFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  System_Collections_Generic_Dictionary_int__object__o **p_defaultFilterData; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_HashSet_int__o *v11; // x21
  __int64 v12; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppClass *klass; // x8
  int32_t name; // w22
  __int64 v18; // x1
  ListViewSort_o *sort; // x0
  __int64 v20; // x1
  System_Int32_array *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2770C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4D2770C = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.defaultFilterData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.defaultFilterData, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v14 )
      break;
    if ( !v23.fields._current )
      sub_1C942F0(v14, v15);
    klass = v23.fields._current[5].klass;
    if ( !klass )
      sub_1C942F0(v14, v15);
    if ( !v11 )
      sub_1C942F0(v14, v15);
    name = (int32_t)klass->_1.name;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v11,
            name,
            (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v11,
        name,
        (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_1C942F0(0, v18);
      SvtEventBonusFilterInt = ListViewSort__GetSvtEventBonusFilterInt(sort, name, 0);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_1C942F0(0, v20);
        System_Collections_Generic_Dictionary_int__object___Add(
          *p_defaultFilterData,
          name,
          &SvtEventBonusFilterInt->obj,
          (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void ServantEventBonusFilterController__SetEnableFilterButton(
        ServantEventBonusFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UICommonButton_o *v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2770E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4D2770E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider(v9, i, 0) )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields._current )
      sub_1C942F0(v7, v8);
    v9 = *(UICommonButton_o **)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_40);
    if ( !v9 )
      sub_1C942F0(0, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__SetupLabel(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *explanationLabel; // x19

  if ( (byte_4D2770A & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11890/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/);
    sub_1C94098(&StringLiteral_11888/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/);
    byte_4D2770A = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0),
        explanationLabel = this->fields.explanationLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0),
        !explanationLabel) )
  {
    sub_1C942F0(v4, v5);
  }
  UILabel__set_text(explanationLabel, v4, 0);
}


void ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D27713 & 1) == 0 )
  {
    sub_1C94098(&ServantEventBonusFilterController___c_TypeInfo);
    byte_4D27713 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ServantEventBonusFilterController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantEventBonusFilterController___c_TypeInfo->static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantEventBonusFilterController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantEventBonusFilterController___c___ctor(
        ServantEventBonusFilterController___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *ServantEventBonusFilterController___c___IsChangeFilterData_b__16_0(
        ServantEventBonusFilterController___c_o *this,
        System_Collections_Generic_KeyValuePair_int__int____o pair,
        const MethodInfo *method)
{
  System_Int32_array *value; // x19

  value = pair.fields.value;
  if ( (byte_4D27714 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_4D27714 = 1;
  }
  return value;
}


System_Int32_array *ServantEventBonusFilterController___c___IsChangeFilterData_b__16_1(
        ServantEventBonusFilterController___c_o *this,
        System_Collections_Generic_KeyValuePair_int__int____o pair,
        const MethodInfo *method)
{
  System_Int32_array *value; // x19

  value = pair.fields.value;
  if ( (byte_4D27715 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_4D27715 = 1;
  }
  return value;
}