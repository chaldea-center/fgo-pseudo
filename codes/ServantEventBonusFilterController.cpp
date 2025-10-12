void ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  if ( (byte_4C323B0 & 1) == 0 )
  {
    sub_1C32C20(&ServantEventBonusFilterController_TypeInfo);
    byte_4C323B0 = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void ServantEventBonusFilterController___ctor(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20

  if ( (byte_4C323AF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    byte_4C323AF = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  sub_1C32BC4(&this->fields.defaultFilterData, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


EventDropUpValInfo_array *ServantEventBonusFilterController__GetFriendshipUpCampaignInfo(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x19
  Il2CppObject *Master_object; // x20
  void *Instance; // x0
  Il2CppObject *current; // x21
  __int64 v6; // x22
  __int64 v7; // x0
  EventDropUpValInfo_o *v8; // x20
  __int64 v9; // x0
  __int64 OnlyMaxFuncGroupId; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C323AE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C32C20(&EventDropUpValInfo_TypeInfo);
    sub_1C32C20(&FunctionEntity_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C323AE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v2 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_26;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 14),
               0);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v17 = v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      current = v17.fields._current;
      v6 = sub_1C32E6C(FunctionEntity_TypeInfo);
      FunctionEntity___ctor((FunctionEntity_o *)v6, 0);
      if ( !v6 )
        sub_1C32E7C(v7);
      *(_QWORD *)(v6 + 24) = 111;
      v8 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
      EventDropUpValInfo___ctor(v8, 0, (FunctionEntity_o *)v6, 0);
      if ( !current )
        sub_1C32E7C(v9);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
      if ( !v8 )
        sub_1C32E7C(OnlyMaxFuncGroupId);
      v8->fields.groupId = OnlyMaxFuncGroupId;
      if ( !v2 )
        sub_1C32E7C(OnlyMaxFuncGroupId);
      items = v2->fields._items;
      v12 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
      ++v2->fields._version;
      if ( !items )
        sub_1C32E7C(OnlyMaxFuncGroupId);
      size = v2->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v2,
          (Il2CppObject *)v8,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v2->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v8;
        sub_1C32BC4(v14 + 4, v8);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v2 )
LABEL_26:
    sub_1C32E7C(Instance);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v2,
                                       (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


void ServantEventBonusFilterController__Init(
        ServantEventBonusFilterController_o *this,
        ListViewSort_o *sortParam,
        int32_t targetEventId,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  this->fields.sort = sortParam;
  sub_1C32BC4(&this->fields.sort, sortParam);
  this->fields.eventId = targetEventId;
  ServantEventBonusFilterController__SetupLabel(this, v6);
  ServantEventBonusFilterController__InitItems(this, v7);
  ServantEventBonusFilterController__SetDefaultFilterData(this, v8);
}


void ServantEventBonusFilterController__InitAllButton(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C323A7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4C323A7 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C32E7C(0);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__InitItems(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o **p_itemList; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_object; // x0
  Il2CppObject *v7; // x23
  Il2CppObject *v8; // x22
  System_Collections_Generic_List_object__o *BonusSkillFilterList; // x21
  System_Collections_Generic_List_int__o *v10; // x22
  _BOOL8 v11; // x0
  Il2CppObject *current; // x24
  _BOOL8 v13; // x0
  _BOOL8 v14; // x0
  int32_t skillId; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  ServantEventBonusFilterController_o *v20; // x22
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *FriendshipUpCampaignInfo; // x23
  System_Collections_Generic_IEnumerable_TSource__o *NeedAddAnnotationSkillIds; // x22
  float v24; // s8
  EventBonusFilterEntity_o *v25; // x23
  Il2CppObject *itemPrefab; // x21
  Il2CppObject *v27; // x0
  ServantEventBonusFilterItem_o *v28; // x21
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v31; // x0
  __int64 v32; // x0
  ListViewSort_o *sort; // x24
  bool v34; // w0
  const MethodInfo *v35; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v37; // x0
  __int64 v38; // x0
  struct UISprite_o *baseSprite; // x8
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x8
  UIWidget_o *v45; // x20
  float y; // s9
  float v47; // s0
  int32_t v48; // w1
  UnityEngine_GameObject_o *v49; // x0
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+10h] [xbp-B0h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C323A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantEventBonusFilterController_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C323A9 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v3;
  p_itemList = &this->fields.itemList;
  sub_1C32BC4(&this->fields.itemList, v3);
  if ( this->fields.eventId < 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
LABEL_66:
      sub_1C32E7C(Master_object);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0, 0);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !EventValUpEventIdHash )
      goto LABEL_66;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                     (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v8 )
    goto LABEL_66;
  BonusSkillFilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                                        (EventBonusFilterMaster_o *)v8,
                                                                        (System_Int32_array *)Master_object,
                                                                        0);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !BonusSkillFilterList )
    goto LABEL_66;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    BonusSkillFilterList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v52 = v50;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v52.fields._current;
    if ( !v52.fields._current )
      sub_1C32E7C(v11);
    v13 = EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)v52.fields._current, 4, 0);
    if ( v13 )
    {
      if ( !v7 )
        sub_1C32E7C(v13);
      v14 = SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v7, &entity, (int32_t)current[1].monitor, 1, 0);
      if ( v14 )
      {
        if ( !entity )
          sub_1C32E7C(v14);
        if ( !v10 )
          sub_1C32E7C(v14);
        skillId = entity->fields.skillId;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1C32E7C(v14);
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            skillId,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size] = skillId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  if ( !Master_object )
    goto LABEL_66;
  Master_object = (EventMaster_o *)ServantPassiveSkillMaster__GetEventBonusSkillIds(
                                     (ServantPassiveSkillMaster_o *)Master_object,
                                     0);
  if ( !v10 )
    goto LABEL_66;
  System_Collections_Generic_List_int___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
  v19 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          (const MethodInfo_31005DC *)Method_System_Linq_Enumerable_Distinct_int___);
  v20 = (ServantEventBonusFilterController_o *)System_Linq_Enumerable__ToArray_int_(
                                                 v19,
                                                 (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  FriendshipUpCampaignInfo = (System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *)ServantEventBonusFilterController__GetFriendshipUpCampaignInfo(
                                                                                               v20,
                                                                                               v21);
  Master_object = (EventMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_66;
  NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                     (PartyOrganizationUtility_o *)Master_object,
                                                                                     (System_Collections_Generic_IEnumerable_int__o *)v20,
                                                                                     FriendshipUpCampaignInfo,
                                                                                     0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    BonusSkillFilterList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v24 = 0.0;
  v52 = v50;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    v25 = (EventBonusFilterEntity_o *)v52.fields._current;
    itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__Instantiate_object_(
            itemPrefab,
            (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v28 = (ServantEventBonusFilterItem_o *)v27;
    if ( !v27 )
      sub_1C32E7C(0);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v27, 0);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_1C32E7C(0);
    v31 = UnityEngine_GameObject__get_transform(baseObject, 0);
    if ( !transform )
      sub_1C32E7C(v31);
    UnityEngine_Transform__SetParent_71246900(transform, v31, 0, 0);
    if ( !v25 )
      sub_1C32E7C(v32);
    sort = this->fields.sort;
    v34 = System_Linq_Enumerable__Contains_int_(
            NeedAddAnnotationSkillIds,
            v25->fields.value,
            (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
    ServantEventBonusFilterItem__Init(v28, v25, sort, v34, v35);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, v24, 0);
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0);
    if ( !v37 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(v37, 1, 0);
    baseSprite = v28->fields.baseSprite;
    if ( !baseSprite )
      sub_1C32E7C(v38);
    v40 = (System_Collections_Generic_List_object__o *)*p_itemList;
    v24 = (float)(v24 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_1C32E7C(0);
    v41 = v40->fields._items;
    v42 = Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__;
    ++v40->fields._version;
    if ( !v41 )
      sub_1C32E7C(v40);
    v43 = v40->fields._size;
    if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v40,
        (Il2CppObject *)v28,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &v41->obj.klass + v43;
      v40->fields._size = v43 + 1;
      v44[4] = (Il2CppClass *)v28;
      sub_1C32BC4(v44 + 4, v28);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_object = (EventMaster_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_66;
  v45 = (UIWidget_o *)Master_object;
  Master_object = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0);
  if ( !Master_object )
    goto LABEL_66;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Master_object, 0);
  Master_object = (EventMaster_o *)ServantEventBonusFilterController_TypeInfo;
  y = localPosition.fields.y;
  if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  if ( !v45 )
    goto LABEL_66;
  v47 = fabsf((float)(v24 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v48 = v47 == INFINITY ? 0x80000000 : (int)v47;
  UIWidget__set_height(v45, v48, 0);
  Master_object = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_object )
    goto LABEL_66;
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionY(v49, (float)-v45->fields.mHeight, 0);
  UIWidget__set_height(v45, v45->fields.mHeight + 12, 0);
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
  System_Collections_Generic_IEnumerable_TResult__o *v10; // x0
  ServantEventBonusFilterController___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x20
  System_Func_T__TResult__o *_9__16_1; // x21
  Il2CppObject *v14; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  v2 = this;
  if ( (byte_4C323AB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_int_____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Intersect_int_____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
    sub_1C32C20(&System_Func_KeyValuePair_int__int_____int____TypeInfo);
    sub_1C32C20(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__);
    sub_1C32C20(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__);
    this = (ServantEventBonusFilterController_o *)sub_1C32C20(&ServantEventBonusFilterController___c_TypeInfo);
    byte_4C323AB = 1;
  }
  sort = v2->fields.sort;
  if ( !sort )
    sub_1C32E7C(this);
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
    _9__16_0 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v8,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      0);
    static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_1C32BC4(&static_fields->__9__16_0, _9__16_0);
  }
  v10 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_310E144 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v11 = ServantEventBonusFilterController___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  if ( !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo);
    v11 = ServantEventBonusFilterController___c_TypeInfo;
  }
  _9__16_1 = (System_Func_T__TResult__o *)v11->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ServantEventBonusFilterController___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__16_1 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v14,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      0);
    v15 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v15->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_1C32BC4(&v15->__9__16_1, _9__16_1);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_310E144 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v17 = System_Linq_Enumerable__Intersect_object_(
          v12,
          v16,
          (const MethodInfo_3107B14 *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_object_(
            v17,
            (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_int_____);
}


bool ServantEventBonusFilterController__IsHideServant(
        UserServantEntity_o *userServantEntity,
        ListViewSort_o *sort,
        int32_t eventId,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x19
  System_Collections_Generic_List_int__o *v7; // x20
  System_Collections_Generic_List_int__o *v8; // x19
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x23
  UserServantEntity_o *v10; // x22
  _BOOL8 v11; // x0
  int32_t key; // w23
  System_Collections_Generic_IEnumerable_T__o *EventBonusSkillIds; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+30h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+58h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+60h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+68h] [xbp-48h] BYREF

  v6 = userServantEntity;
  if ( (byte_4C323AD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    userServantEntity = (UserServantEntity_o *)sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C323AD = 1;
  }
  titleList = 0;
  idList = 0;
  explanationList = 0;
  memset(&v18, 0, sizeof(v18));
  if ( !eventId )
    return 0;
  if ( !v6 )
    goto LABEL_26;
  UserServantEntity__getPassiveSkillInfo(v6, &idList, &titleList, &explanationList, -1, 0, 0);
  if ( !idList )
    return 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_26;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_26;
  v10 = userServantEntity;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_33F0154 *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v18,
            (const MethodInfo_3546B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v11 )
      break;
    key = (int32_t)v18.fields._current.fields.key;
    if ( eventId < 1 || LODWORD(v18.fields._current.fields.key) == eventId )
    {
      if ( !v10 )
        sub_1C32E7C(v11);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v10,
                                                                            (int32_t)v18.fields._current.fields.key,
                                                                            (System_Int32_array *)v18.fields._current.fields.value,
                                                                            0);
      if ( !v7 )
        sub_1C32E7C(EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v7,
        EventBonusSkillIds,
        (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
      v14 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v10,
                                                             key,
                                                             idList,
                                                             0);
      if ( !v8 )
        sub_1C32E7C(v14);
      System_Collections_Generic_List_int___AddRange(
        v8,
        v14,
        (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v18,
    (const MethodInfo_3546CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v8 )
LABEL_26:
    sub_1C32E7C(userServantEntity);
  if ( v8->fields._size > 0 )
  {
    v15 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v8,
            (System_Collections_Generic_IEnumerable_TSource__o *)v7,
            (const MethodInfo_3107AA0 *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v15,
             (const MethodInfo_30FCFE0 *)Method_System_Linq_Enumerable_Count_int___) >= v8->fields._size;
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

  if ( (byte_4C323A6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4C323A6 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C32E7C(0);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__SetDefaultFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  System_Collections_Generic_Dictionary_int__object__o **p_defaultFilterData; // x20
  System_Collections_Generic_HashSet_int__o *v5; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _BOOL8 v7; // x0
  Il2CppClass *klass; // x8
  int32_t name; // w22
  ListViewSort_o *sort; // x0
  System_Int32_array *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C323AA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4C323AA = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.defaultFilterData;
  sub_1C32BC4(&this->fields.defaultFilterData, v3);
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v13.fields._current )
      sub_1C32E7C(v7);
    klass = v13.fields._current[5].klass;
    if ( !klass )
      sub_1C32E7C(v7);
    if ( !v5 )
      sub_1C32E7C(v7);
    name = (int32_t)klass->_1.name;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v5,
            name,
            (const MethodInfo_3649914 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v5,
        name,
        (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_1C32E7C(0);
      SvtEventBonusFilterInt = ListViewSort__GetSvtEventBonusFilterInt(sort, name, 0);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_1C32E7C(0);
        System_Collections_Generic_Dictionary_int__object___Add(
          *p_defaultFilterData,
          name,
          &SvtEventBonusFilterInt->obj,
          (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__SetEnableFilterButton(
        ServantEventBonusFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v7; // x0
  UICommonButton_o *v8; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C323AC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4C323AC = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider(v8, i, 0) )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v9.fields._current )
      sub_1C32E7C(v7);
    v8 = *(UICommonButton_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&dword_40);
    if ( !v8 )
      sub_1C32E7C(0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__SetupLabel(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v4; // x0
  UILabel_o *explanationLabel; // x19

  if ( (byte_4C323A8 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11842/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/);
    sub_1C32C20(&StringLiteral_11840/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/);
    byte_4C323A8 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0),
        explanationLabel = this->fields.explanationLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0),
        !explanationLabel) )
  {
    sub_1C32E7C(v4);
  }
  UILabel__set_text(explanationLabel, v4, 0);
}


void ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C323B1 & 1) == 0 )
  {
    sub_1C32C20(&ServantEventBonusFilterController___c_TypeInfo);
    byte_4C323B1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ServantEventBonusFilterController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantEventBonusFilterController___c_TypeInfo->static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v1;
  sub_1C32BC4(ServantEventBonusFilterController___c_TypeInfo->static_fields, v1);
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
  if ( (byte_4C323B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_4C323B2 = 1;
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
  if ( (byte_4C323B3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_4C323B3 = 1;
  }
  return value;
}