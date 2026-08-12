void ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  if ( (byte_596B1EE & 1) == 0 )
  {
    sub_2213A60(&ServantEventBonusFilterController_TypeInfo);
    byte_596B1EE = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void ServantEventBonusFilterController___ctor(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596B1ED & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    byte_596B1ED = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.defaultFilterData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


EventDropUpValInfo_array *ServantEventBonusFilterController__GetFriendshipUpCampaignInfo(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Master_object; // x20
  void *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  EventDropUpValInfo_c *v12; // x0
  EventDropUpValInfo_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 OnlyMaxFuncGroupId; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596B1EC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_2213A60(&EventDropUpValInfo_TypeInfo);
    sub_2213A60(&FunctionEntity_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596B1EC = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v2 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_26;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 17),
               0);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v30 = v29;
    v29.fields._list = 0;
    *(_QWORD *)&v29.fields._index = &v30;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      current = v30.fields._current;
      v9 = sub_2213CCC(FunctionEntity_TypeInfo);
      FunctionEntity___ctor((FunctionEntity_o *)v9, 0);
      if ( !v9 )
        sub_2213CDC(v10, v11);
      v12 = EventDropUpValInfo_TypeInfo;
      *(_QWORD *)(v9 + 24) = 111;
      v13 = (EventDropUpValInfo_o *)sub_2213CCC(v12);
      EventDropUpValInfo___ctor(v13, 0, (FunctionEntity_o *)v9, 0);
      if ( !current )
        sub_2213CDC(v14, v15);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
      if ( !v13 )
        sub_2213CDC(OnlyMaxFuncGroupId, v17);
      v13->fields.groupId = OnlyMaxFuncGroupId;
      if ( !v2
        || (items = v2->fields._items,
            v25 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__,
            ++v2->fields._version,
            !items) )
      {
        sub_2213CDC(OnlyMaxFuncGroupId, v17);
      }
      size = v2->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v2,
          (Il2CppObject *)v13,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v2->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v13, v18, v19, v20, v21, v22, v23);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v2 )
      return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v2,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
LABEL_26:
    sub_2213CDC(Instance, v7);
  }
  if ( !v2 )
    goto LABEL_26;
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v2,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void ServantEventBonusFilterController__Init(
        ServantEventBonusFilterController_o *this,
        ListViewSort_o *sortParam,
        int32_t targetEventId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  this->fields.sort = sortParam;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
    (int32_t)sortParam,
    *(System_String_o **)&targetEventId,
    (System_String_o *)method,
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
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596B1E5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_596B1E5 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v5, 0, sizeof(v5));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_2213CDC(0, v4);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__InitItems(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o **p_itemList; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_object; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x22
  System_Collections_Generic_List_object__o *BonusSkillFilterList; // x21
  System_Collections_Generic_List_int__o *v21; // x22
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x24
  _BOOL8 v25; // x0
  __int64 v26; // x1
  _BOOL8 v27; // x0
  __int64 skillId; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  ServantEventBonusFilterController_o *v35; // x22
  const MethodInfo *v36; // x1
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *FriendshipUpCampaignInfo; // x23
  System_Collections_Generic_IEnumerable_TSource__o *NeedAddAnnotationSkillIds; // x22
  float v39; // s8
  __int64 v40; // x1
  __int64 v41; // x2
  EventBonusFilterEntity_o *v42; // x23
  Il2CppObject *itemPrefab; // x21
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  ServantEventBonusFilterItem_o *v46; // x21
  __int64 v47; // x1
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  ListViewSort_o *sort; // x24
  bool v54; // w0
  const MethodInfo *v55; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x0
  __int64 v60; // x1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct UISprite_o *baseSprite; // x8
  System_Collections_Generic_List_object__o *v68; // x0
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x8
  UIWidget_o *v73; // x20
  float v74; // s9
  float v75; // s0
  int32_t v76; // w1
  UnityEngine_GameObject_o *v77; // x0
  __int64 v78; // x2
  float y; // s1
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+10h] [xbp-B0h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_596B1E7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantEventBonusFilterController_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596B1E7 = 1;
  }
  entity = 0;
  memset(&v82, 0, sizeof(v82));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v3;
  p_itemList = &this->fields.itemList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  if ( this->fields.eventId < 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
LABEL_66:
      sub_2213CDC(Master_object, v15);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0, 0);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !EventValUpEventIdHash )
      goto LABEL_66;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
  v18 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                     (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v19 )
    goto LABEL_66;
  BonusSkillFilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                                        (EventBonusFilterMaster_o *)v19,
                                                                        (System_Int32_array *)Master_object,
                                                                        0);
  v21 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !BonusSkillFilterList )
    goto LABEL_66;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    BonusSkillFilterList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v82 = v80;
  v80.fields._list = 0;
  *(_QWORD *)&v80.fields._index = &v82;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v82,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    if ( !v22 )
      break;
    current = v82.fields._current;
    if ( !v82.fields._current )
      sub_2213CDC(v22, v23);
    v25 = EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)v82.fields._current, 4, 0);
    if ( v25 )
    {
      if ( !v18 )
        sub_2213CDC(v25, v26);
      v27 = SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v18, &entity, (int32_t)current[1].monitor, 1, 0);
      if ( v27 )
      {
        if ( !entity )
          sub_2213CDC(v27, skillId);
        if ( !v21
          || (items = v21->fields._items,
              skillId = (unsigned int)entity->fields.skillId,
              v30 = Method_System_Collections_Generic_List_int__Add__,
              ++v21->fields._version,
              !items) )
        {
          sub_2213CDC(v27, skillId);
        }
        size = v21->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v21,
            skillId,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v21->fields._size = size + 1;
          items->m_Items[size] = skillId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v82,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32, v33);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  if ( !Master_object )
    goto LABEL_66;
  Master_object = (EventMaster_o *)ServantPassiveSkillMaster__GetEventBonusSkillIds(
                                     (ServantPassiveSkillMaster_o *)Master_object,
                                     0);
  if ( !v21 )
    goto LABEL_66;
  System_Collections_Generic_List_int___AddRange(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  v34 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
  v35 = (ServantEventBonusFilterController_o *)System_Linq_Enumerable__ToArray_int_(
                                                 v34,
                                                 (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  FriendshipUpCampaignInfo = (System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *)ServantEventBonusFilterController__GetFriendshipUpCampaignInfo(
                                                                                               v35,
                                                                                               v36);
  Master_object = (EventMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_66;
  NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                     (PartyOrganizationUtility_o *)Master_object,
                                                                                     (System_Collections_Generic_IEnumerable_int__o *)v35,
                                                                                     FriendshipUpCampaignInfo,
                                                                                     0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    BonusSkillFilterList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v39 = 0.0;
  v82 = v80;
  v80.fields._list = 0;
  *(_QWORD *)&v80.fields._index = &v82;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v82,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    v42 = (EventBonusFilterEntity_o *)v82.fields._current;
    itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
    v44 = UnityEngine_Object__Instantiate_object_(
            itemPrefab,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v46 = (ServantEventBonusFilterItem_o *)v44;
    if ( !v44 )
      sub_2213CDC(0, v45);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v44, 0);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_2213CDC(0, v47);
    v50 = UnityEngine_GameObject__get_transform(baseObject, 0);
    if ( !transform )
      sub_2213CDC(v50, v50);
    UnityEngine_Transform__SetParent_83492444(transform, v50, 0, 0);
    if ( !v42 )
      sub_2213CDC(v51, v52);
    sort = this->fields.sort;
    v54 = System_Linq_Enumerable__Contains_int_(
            NeedAddAnnotationSkillIds,
            v42->fields.value,
            (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
    ServantEventBonusFilterItem__Init(v46, v42, sort, v54, v55);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v46, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, v39, 0);
    v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v46, 0);
    if ( !v57 )
      sub_2213CDC(0, v58);
    UnityEngine_GameObject__SetActive(v57, 1, 0);
    baseSprite = v46->fields.baseSprite;
    if ( !baseSprite )
      sub_2213CDC(v59, v60);
    v68 = (System_Collections_Generic_List_object__o *)*p_itemList;
    v39 = (float)(v39 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList
      || (v69 = v68->fields._items,
          v70 = Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__,
          ++v68->fields._version,
          !v69) )
    {
      sub_2213CDC(v68, v60);
    }
    v71 = v68->fields._size;
    if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v68,
        (Il2CppObject *)v46,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = &v69->obj.klass + v71;
      v68->fields._size = v71 + 1;
      v72[4] = (Il2CppClass *)v46;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v72 + 4), (int32_t)v46, v61, v62, v63, v64, v65, v66);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v82,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_object = (EventMaster_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_66;
  v73 = (UIWidget_o *)Master_object;
  Master_object = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0);
  if ( !Master_object )
    goto LABEL_66;
  y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Master_object, 0).fields.y;
  Master_object = (EventMaster_o *)ServantEventBonusFilterController_TypeInfo;
  v74 = y;
  if ( !*(&ServantEventBonusFilterController_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v15, v78);
  if ( !v73 )
    goto LABEL_66;
  v75 = fabsf((float)(v39 + v74) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v76 = v75 == INFINITY ? 0x80000000 : (int)v75;
  UIWidget__set_height(v73, v76, 0);
  Master_object = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_object )
    goto LABEL_66;
  v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionY(v77, (float)-v73->fields.mHeight, 0);
  UIWidget__set_height(v73, v73->fields.mHeight + 12, 0);
}


bool ServantEventBonusFilterController__IsChangeFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantEventBonusFilterController_o *v3; // x20
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_IEnumerable_TSource__o *svtEventBonusFilterDic; // x19
  System_Collections_Generic_IEnumerable_TSource__o *defaultFilterData; // x20
  ServantEventBonusFilterController___c_c *v7; // x0
  struct ServantEventBonusFilterController___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__16_0; // x21
  Il2CppObject *v10; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  ServantEventBonusFilterController___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  struct ServantEventBonusFilterController___c_StaticFields *v23; // x9
  System_Func_T__TResult__o *_9__16_1; // x21
  Il2CppObject *v25; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  v3 = this;
  if ( (byte_596B1E9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int_____);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int_____);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
    sub_2213A60(&System_Func_KeyValuePair_int__int_____int____TypeInfo);
    sub_2213A60(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__);
    sub_2213A60(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__);
    this = (ServantEventBonusFilterController_o *)sub_2213A60(&ServantEventBonusFilterController___c_TypeInfo);
    byte_596B1E9 = 1;
  }
  sort = v3->fields.sort;
  if ( !sort )
    sub_2213CDC(this, method);
  svtEventBonusFilterDic = (System_Collections_Generic_IEnumerable_TSource__o *)sort->fields.svtEventBonusFilterDic;
  defaultFilterData = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.defaultFilterData;
  v7 = ServantEventBonusFilterController___c_TypeInfo;
  if ( !*(&ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo, method, v2);
    v7 = ServantEventBonusFilterController___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__16_0 = (System_Func_T__TResult__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, method, v2);
      static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v10,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      0);
    v11 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v11->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__16_0, (int32_t)_9__16_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_388A934 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v21 = ServantEventBonusFilterController___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !*(&ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo, v19, v20);
    v21 = ServantEventBonusFilterController___c_TypeInfo;
  }
  v23 = v21->static_fields;
  _9__16_1 = (System_Func_T__TResult__o *)v23->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v19, v20);
      v23 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)v23->__9;
    _9__16_1 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v25,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      0);
    v26 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v26->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__16_1, (int32_t)_9__16_1, v27, v28, v29, v30, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_388A934 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v34 = System_Linq_Enumerable__Intersect_object_(
          v22,
          v33,
          (const MethodInfo_3883538 *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_object_(
            v34,
            (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_int_____);
}


bool ServantEventBonusFilterController__IsHideServant(
        UserServantEntity_o *userServantEntity,
        ListViewSort_o *sort,
        int32_t eventId,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x20
  int32_t ServantId; // w21
  int32_t DispLimitCountStageSealAfterIndexZero; // w0
  System_Collections_Generic_List_int__o *v9; // x21
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x23
  UserServantEntity_o *v13; // x22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t key; // w23
  System_Collections_Generic_IEnumerable_T__o *EventBonusSkillIds; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+40h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+68h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+70h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+78h] [xbp-48h] BYREF

  v6 = userServantEntity;
  if ( (byte_596B1EB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    userServantEntity = (UserServantEntity_o *)sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596B1EB = 1;
  }
  titleList = 0;
  idList = 0;
  explanationList = 0;
  memset(&v22, 0, sizeof(v22));
  if ( !eventId )
    return 0;
  if ( !v6 )
    goto LABEL_26;
  ServantId = UserServantEntity__GetServantId(v6, -1, 0);
  DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(v6, -1, 0, 0);
  UserServantEntity__GetTransformedPassiveSkillInfo(
    v6,
    &idList,
    &titleList,
    &explanationList,
    ServantId,
    DispLimitCountStageSealAfterIndexZero,
    0,
    1,
    0,
    0);
  if ( !idList )
    return 0;
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_26;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, v11);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_26;
  v13 = userServantEntity;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v22 = v21;
  v21.fields._dictionary = 0;
  *(_QWORD *)&v21.fields._version = &v22;
  while ( 1 )
  {
    v14 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v22,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v14 )
      break;
    key = (int32_t)v22.fields._current.fields.key;
    if ( eventId < 1 || LODWORD(v22.fields._current.fields.key) == eventId )
    {
      if ( !v13 )
        sub_2213CDC(v14, v15);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v13,
                                                                            (int32_t)v22.fields._current.fields.key,
                                                                            (System_Int32_array *)v22.fields._current.fields.value,
                                                                            0);
      if ( !v9 )
        sub_2213CDC(EventBonusSkillIds, EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v9,
        EventBonusSkillIds,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
      v18 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v13,
                                                             key,
                                                             idList,
                                                             0);
      if ( !v10 )
        sub_2213CDC(v18, v18);
      System_Collections_Generic_List_int___AddRange(
        v10,
        v18,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v22,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v10 )
LABEL_26:
    sub_2213CDC(userServantEntity, sort);
  if ( v10->fields._size > 0 )
  {
    v19 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v10,
            (System_Collections_Generic_IEnumerable_TSource__o *)v9,
            (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v19,
             (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___) >= v10->fields._size;
  }
  return 0;
}


void ServantEventBonusFilterController__RefreshButtonState(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596B1E4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_596B1E4 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v5, 0, sizeof(v5));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_2213CDC(0, v4);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__SetDefaultFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  System_Collections_Generic_Dictionary_int__object__o **p_defaultFilterData; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
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

  if ( (byte_596B1E8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_596B1E8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.defaultFilterData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.defaultFilterData, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_2213CDC(0, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v14 )
      break;
    if ( !v23.fields._current )
      sub_2213CDC(v14, v15);
    klass = v23.fields._current[5].klass;
    if ( !klass )
      sub_2213CDC(v14, v15);
    if ( !v11 )
      sub_2213CDC(v14, v15);
    name = (int32_t)klass->_1.name;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v11,
            name,
            (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v11,
        name,
        (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_2213CDC(0, v18);
      SvtEventBonusFilterInt = ListViewSort__GetSvtEventBonusFilterInt(sort, name, 0);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_2213CDC(0, v20);
        System_Collections_Generic_Dictionary_int__object___Add(
          *p_defaultFilterData,
          name,
          &SvtEventBonusFilterInt->obj,
          (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void ServantEventBonusFilterController__SetEnableFilterButton(
        ServantEventBonusFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  UICommonButton_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v9; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596B1EA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_596B1EA = 1;
  }
  itemList = this->fields.itemList;
  memset(&v10, 0, sizeof(v10));
  if ( !itemList )
    sub_2213CDC(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v8 = 0;
  v9 = &v10;
  while ( 1 )
  {
    v6 = (UICommonButton_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                               &v10,
                               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( ((unsigned __int8)v6 & 1) == 0 )
      break;
    if ( !v10.fields._current
      || (v6 = *(UICommonButton_o **)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_40)) == 0 )
    {
      sub_2213CDC(v6, v7);
    }
    UICommonButton__SetButtonEnableWithCollider(v6, isEnable, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__SetupLabel(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *explanationLabel; // x19

  if ( (byte_596B1E6 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12354/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/);
    sub_2213A60(&StringLiteral_12352/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/);
    byte_596B1E6 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12354/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v5, 0),
        explanationLabel = this->fields.explanationLabel,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12352/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0),
        !explanationLabel) )
  {
    sub_2213CDC(v5, v6);
  }
  UILabel__set_text(explanationLabel, v5, 0);
}


void ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B1EF & 1) == 0 )
  {
    sub_2213A60(&ServantEventBonusFilterController___c_TypeInfo);
    byte_596B1EF = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantEventBonusFilterController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantEventBonusFilterController___c_TypeInfo->static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantEventBonusFilterController___c_TypeInfo->static_fields,
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
  if ( (byte_596B1F0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_596B1F0 = 1;
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
  if ( (byte_596B1F1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_596B1F1 = 1;
  }
  return value;
}