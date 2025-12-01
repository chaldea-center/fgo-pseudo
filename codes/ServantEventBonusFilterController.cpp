void ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  if ( (byte_4CC1CAF & 1) == 0 )
  {
    sub_1C713B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4CC1CAF = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void ServantEventBonusFilterController___ctor(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20

  if ( (byte_4CC1CAE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    byte_4CC1CAE = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  sub_1C71354(&this->fields.defaultFilterData, v3);
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
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CC1CAD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C713B0(&EventDropUpValInfo_TypeInfo);
    sub_1C713B0(&FunctionEntity_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC1CAD = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v2 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_26;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 14),
               0);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      current = v21.fields._current;
      v7 = sub_1C715FC(FunctionEntity_TypeInfo);
      FunctionEntity___ctor((FunctionEntity_o *)v7, 0);
      if ( !v7 )
        sub_1C71608(v8, v9);
      *(_QWORD *)(v7 + 24) = 111;
      v10 = (EventDropUpValInfo_o *)sub_1C715FC(EventDropUpValInfo_TypeInfo);
      EventDropUpValInfo___ctor(v10, 0, (FunctionEntity_o *)v7, 0);
      if ( !current )
        sub_1C71608(v11, v12);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
      if ( !v10 )
        sub_1C71608(OnlyMaxFuncGroupId, v14);
      v10->fields.groupId = OnlyMaxFuncGroupId;
      if ( !v2 )
        sub_1C71608(OnlyMaxFuncGroupId, v14);
      items = v2->fields._items;
      v16 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
      ++v2->fields._version;
      if ( !items )
        sub_1C71608(OnlyMaxFuncGroupId, v14);
      size = v2->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v2,
          (Il2CppObject *)v10,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v2->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v10;
        sub_1C71354(v18 + 4, v10);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v2 )
LABEL_26:
    sub_1C71608(Instance, v5);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v2,
                                       (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
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
  sub_1C71354(&this->fields.sort, sortParam);
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

  if ( (byte_4CC1CA6 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4CC1CA6 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C71608(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C71608(0, v4);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__InitItems(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o **p_itemList; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x23
  Il2CppObject *v9; // x22
  System_Collections_Generic_List_object__o *BonusSkillFilterList; // x21
  System_Collections_Generic_List_int__o *v11; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x24
  _BOOL8 v15; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 skillId; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  ServantEventBonusFilterController_o *v24; // x22
  const MethodInfo *v25; // x1
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *FriendshipUpCampaignInfo; // x23
  System_Collections_Generic_IEnumerable_TSource__o *NeedAddAnnotationSkillIds; // x22
  float v28; // s8
  EventBonusFilterEntity_o *v29; // x23
  Il2CppObject *itemPrefab; // x21
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  ServantEventBonusFilterItem_o *v33; // x21
  __int64 v34; // x1
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  ListViewSort_o *sort; // x24
  bool v41; // w0
  const MethodInfo *v42; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x0
  __int64 v47; // x1
  struct UISprite_o *baseSprite; // x8
  System_Collections_Generic_List_object__o *v49; // x0
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x8
  UIWidget_o *v54; // x20
  float y; // s9
  float v56; // s0
  int32_t v57; // w1
  UnityEngine_GameObject_o *v58; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+10h] [xbp-B0h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC1CA8 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantEventBonusFilterController_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC1CA8 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v3;
  p_itemList = &this->fields.itemList;
  sub_1C71354(&this->fields.itemList, v3);
  if ( this->fields.eventId < 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
LABEL_66:
      sub_1C71608(Master_object, v7);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0, 0);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !EventValUpEventIdHash )
      goto LABEL_66;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_36C1F64 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v8 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                     (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v9 )
    goto LABEL_66;
  BonusSkillFilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                                        (EventBonusFilterMaster_o *)v9,
                                                                        (System_Int32_array *)Master_object,
                                                                        0);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !BonusSkillFilterList )
    goto LABEL_66;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    BonusSkillFilterList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v61 = v59;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    if ( !v12 )
      break;
    current = v61.fields._current;
    if ( !v61.fields._current )
      sub_1C71608(v12, v13);
    v15 = EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)v61.fields._current, 4, 0);
    if ( v15 )
    {
      if ( !v8 )
        sub_1C71608(v15, v16);
      v17 = SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v8, &entity, (int32_t)current[1].monitor, 1, 0);
      if ( v17 )
      {
        if ( !entity )
          sub_1C71608(v17, v18);
        if ( !v11 )
          sub_1C71608(v17, v18);
        skillId = (unsigned int)entity->fields.skillId;
        items = v11->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C71608(v17, skillId);
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            skillId,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size] = skillId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  if ( !Master_object )
    goto LABEL_66;
  Master_object = (EventMaster_o *)ServantPassiveSkillMaster__GetEventBonusSkillIds(
                                     (ServantPassiveSkillMaster_o *)Master_object,
                                     0);
  if ( !v11 )
    goto LABEL_66;
  System_Collections_Generic_List_int___AddRange(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
  v23 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_316E3D4 *)Method_System_Linq_Enumerable_Distinct_int___);
  v24 = (ServantEventBonusFilterController_o *)System_Linq_Enumerable__ToArray_int_(
                                                 v23,
                                                 (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  FriendshipUpCampaignInfo = (System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *)ServantEventBonusFilterController__GetFriendshipUpCampaignInfo(
                                                                                               v24,
                                                                                               v25);
  Master_object = (EventMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_66;
  NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                     (PartyOrganizationUtility_o *)Master_object,
                                                                                     (System_Collections_Generic_IEnumerable_int__o *)v24,
                                                                                     FriendshipUpCampaignInfo,
                                                                                     0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    BonusSkillFilterList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v28 = 0.0;
  v61 = v59;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    v29 = (EventBonusFilterEntity_o *)v61.fields._current;
    itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v31 = UnityEngine_Object__Instantiate_object_(
            itemPrefab,
            (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v33 = (ServantEventBonusFilterItem_o *)v31;
    if ( !v31 )
      sub_1C71608(0, v32);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v31, 0);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_1C71608(0, v34);
    v37 = UnityEngine_GameObject__get_transform(baseObject, 0);
    if ( !transform )
      sub_1C71608(v37, v37);
    UnityEngine_Transform__SetParent_71748048(transform, v37, 0, 0);
    if ( !v29 )
      sub_1C71608(v38, v39);
    sort = this->fields.sort;
    v41 = System_Linq_Enumerable__Contains_int_(
            NeedAddAnnotationSkillIds,
            v29->fields.value,
            (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
    ServantEventBonusFilterItem__Init(v33, v29, sort, v41, v42);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, v28, 0);
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33, 0);
    if ( !v44 )
      sub_1C71608(0, v45);
    UnityEngine_GameObject__SetActive(v44, 1, 0);
    baseSprite = v33->fields.baseSprite;
    if ( !baseSprite )
      sub_1C71608(v46, v47);
    v49 = (System_Collections_Generic_List_object__o *)*p_itemList;
    v28 = (float)(v28 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_1C71608(0, v47);
    v50 = v49->fields._items;
    v51 = Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__;
    ++v49->fields._version;
    if ( !v50 )
      sub_1C71608(v49, v47);
    v52 = v49->fields._size;
    if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v49,
        (Il2CppObject *)v33,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &v50->obj.klass + v52;
      v49->fields._size = v52 + 1;
      v53[4] = (Il2CppClass *)v33;
      sub_1C71354(v53 + 4, v33);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_object = (EventMaster_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_66;
  v54 = (UIWidget_o *)Master_object;
  Master_object = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0);
  if ( !Master_object )
    goto LABEL_66;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Master_object, 0);
  Master_object = (EventMaster_o *)ServantEventBonusFilterController_TypeInfo;
  y = localPosition.fields.y;
  if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  if ( !v54 )
    goto LABEL_66;
  v56 = fabsf((float)(v28 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v57 = v56 == INFINITY ? 0x80000000 : (int)v56;
  UIWidget__set_height(v54, v57, 0);
  Master_object = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_object )
    goto LABEL_66;
  v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionY(v58, (float)-v54->fields.mHeight, 0);
  UIWidget__set_height(v54, v54->fields.mHeight + 12, 0);
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
  if ( (byte_4CC1CAA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_int_____);
    sub_1C713B0(&Method_System_Linq_Enumerable_Intersect_int_____);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
    sub_1C713B0(&System_Func_KeyValuePair_int__int_____int____TypeInfo);
    sub_1C713B0(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__);
    sub_1C713B0(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__);
    this = (ServantEventBonusFilterController_o *)sub_1C713B0(&ServantEventBonusFilterController___c_TypeInfo);
    byte_4CC1CAA = 1;
  }
  sort = v2->fields.sort;
  if ( !sort )
    sub_1C71608(this, method);
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
    _9__16_0 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v8,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      0);
    static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_1C71354(&static_fields->__9__16_0, _9__16_0);
  }
  v10 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_317BF3C *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
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
    _9__16_1 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v14,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      0);
    v15 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v15->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_1C71354(&v15->__9__16_1, _9__16_1);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_317BF3C *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v17 = System_Linq_Enumerable__Intersect_object_(
          v12,
          v16,
          (const MethodInfo_317590C *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_object_(
            v17,
            (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_int_____);
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
  if ( (byte_4CC1CAC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    userServantEntity = (UserServantEntity_o *)sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC1CAC = 1;
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
  v7 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_26;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_26;
  v10 = userServantEntity;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_34626CC *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_35BA0B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v11 )
      break;
    key = (int32_t)v19.fields._current.fields.key;
    if ( eventId < 1 || LODWORD(v19.fields._current.fields.key) == eventId )
    {
      if ( !v10 )
        sub_1C71608(v11, v12);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v10,
                                                                            (int32_t)v19.fields._current.fields.key,
                                                                            (System_Int32_array *)v19.fields._current.fields.value,
                                                                            0);
      if ( !v7 )
        sub_1C71608(EventBonusSkillIds, EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v7,
        EventBonusSkillIds,
        (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
      v15 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v10,
                                                             key,
                                                             idList,
                                                             0);
      if ( !v8 )
        sub_1C71608(v15, v15);
      System_Collections_Generic_List_int___AddRange(
        v8,
        v15,
        (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_35BA1D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v8 )
LABEL_26:
    sub_1C71608(userServantEntity, sort);
  if ( v8->fields._size > 0 )
  {
    v16 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v8,
            (System_Collections_Generic_IEnumerable_TSource__o *)v7,
            (const MethodInfo_3175898 *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v16,
             (const MethodInfo_316ADD8 *)Method_System_Linq_Enumerable_Count_int___) >= v8->fields._size;
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

  if ( (byte_4CC1CA5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4CC1CA5 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C71608(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C71608(0, v4);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__SetDefaultFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  System_Collections_Generic_Dictionary_int__object__o **p_defaultFilterData; // x20
  System_Collections_Generic_HashSet_int__o *v5; // x21
  __int64 v6; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppClass *klass; // x8
  int32_t name; // w22
  __int64 v12; // x1
  ListViewSort_o *sort; // x0
  __int64 v14; // x1
  System_Int32_array *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC1CA9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4CC1CA9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.defaultFilterData;
  sub_1C71354(&this->fields.defaultFilterData, v3);
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C71608(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v17.fields._current )
      sub_1C71608(v8, v9);
    klass = v17.fields._current[5].klass;
    if ( !klass )
      sub_1C71608(v8, v9);
    if ( !v5 )
      sub_1C71608(v8, v9);
    name = (int32_t)klass->_1.name;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v5,
            name,
            (const MethodInfo_36C1454 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v5,
        name,
        (const MethodInfo_36C1F64 *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_1C71608(0, v12);
      SvtEventBonusFilterInt = ListViewSort__GetSvtEventBonusFilterInt(sort, name, 0);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_1C71608(0, v14);
        System_Collections_Generic_Dictionary_int__object___Add(
          *p_defaultFilterData,
          name,
          &SvtEventBonusFilterInt->obj,
          (const MethodInfo_3462294 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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

  if ( (byte_4CC1CAB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4CC1CAB = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C71608(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider(v9, i, 0) )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields._current )
      sub_1C71608(v7, v8);
    v9 = *(UICommonButton_o **)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_40);
    if ( !v9 )
      sub_1C71608(0, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void ServantEventBonusFilterController__SetupLabel(ServantEventBonusFilterController_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *explanationLabel; // x19

  if ( (byte_4CC1CA7 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11848/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/);
    sub_1C713B0(&StringLiteral_11846/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/);
    byte_4CC1CA7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11848/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0),
        explanationLabel = this->fields.explanationLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11846/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0),
        !explanationLabel) )
  {
    sub_1C71608(v4, v5);
  }
  UILabel__set_text(explanationLabel, v4, 0);
}


void ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CC1CB0 & 1) == 0 )
  {
    sub_1C713B0(&ServantEventBonusFilterController___c_TypeInfo);
    byte_4CC1CB0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ServantEventBonusFilterController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantEventBonusFilterController___c_TypeInfo->static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v1;
  sub_1C71354(ServantEventBonusFilterController___c_TypeInfo->static_fields, v1);
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
  if ( (byte_4CC1CB1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_4CC1CB1 = 1;
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
  if ( (byte_4CC1CB2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_4CC1CB2 = 1;
  }
  return value;
}