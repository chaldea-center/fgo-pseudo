void __fastcall ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFCD80 & 1) == 0 )
  {
    sub_1BC3008(&ServantEventBonusFilterController_TypeInfo, v1);
    byte_4AFCD80 = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void __fastcall ServantEventBonusFilterController___ctor(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20

  if ( (byte_4AFCD7F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, method);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v3);
    byte_4AFCD7F = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v4;
  sub_1BC2FAC(&this->fields.defaultFilterData);
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
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4AFCD7E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v2);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v5);
    sub_1BC3008(&EventDropUpValInfo_TypeInfo, v6);
    sub_1BC3008(&FunctionEntity_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, v11);
    sub_1BC3008(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v12);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    byte_4AFCD7E = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v14 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_26;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 14),
               0LL);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v33 = v32;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      current = v33.fields._current;
      v19 = sub_1BC3254(FunctionEntity_TypeInfo);
      FunctionEntity___ctor((FunctionEntity_o *)v19, 0LL);
      if ( !v19 )
        sub_1BC3264(v20, v21);
      *(_QWORD *)(v19 + 24) = 111LL;
      v22 = (EventDropUpValInfo_o *)sub_1BC3254(EventDropUpValInfo_TypeInfo);
      EventDropUpValInfo___ctor(v22, 0, (FunctionEntity_o *)v19, 0LL);
      if ( !current )
        sub_1BC3264(v23, v24);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0LL);
      if ( !v22 )
        sub_1BC3264(OnlyMaxFuncGroupId, v26);
      v22->fields.groupId = OnlyMaxFuncGroupId;
      if ( !v14 )
        sub_1BC3264(OnlyMaxFuncGroupId, v26);
      items = v14->fields._items;
      v28 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BC3264(OnlyMaxFuncGroupId, v26);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v22,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v22;
        sub_1BC2FAC(v30 + 4);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v14 )
LABEL_26:
    sub_1BC3264(Instance, v17);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v14,
                                       (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
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
  sub_1BC2FAC(&this->fields.sort);
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

  if ( (byte_4AFCD77 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_4AFCD77 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BC3264(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BC3264(0LL, v7);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_object; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x23
  Il2CppObject *v35; // x22
  System_Collections_Generic_List_object__o *BonusSkillFilterList; // x21
  System_Collections_Generic_List_int__o *v37; // x22
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x24
  _BOOL8 v41; // x0
  __int64 v42; // x1
  _BOOL8 v43; // x0
  __int64 v44; // x1
  __int64 skillId; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  ServantEventBonusFilterController_o *v50; // x22
  const MethodInfo *v51; // x1
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *FriendshipUpCampaignInfo; // x23
  System_Collections_Generic_IEnumerable_TSource__o *NeedAddAnnotationSkillIds; // x22
  float v54; // s8
  EventBonusFilterEntity_o *v55; // x23
  Il2CppObject *itemPrefab; // x21
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  ServantEventBonusFilterItem_o *v59; // x21
  __int64 v60; // x1
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  ListViewSort_o *sort; // x24
  bool v67; // w0
  const MethodInfo *v68; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x0
  __int64 v73; // x1
  struct UISprite_o *baseSprite; // x8
  System_Collections_Generic_List_object__o *v75; // x0
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x8
  UIWidget_o *v80; // x20
  float y; // s9
  float v82; // s0
  int32_t v83; // w1
  UnityEngine_GameObject_o *v84; // x0
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+10h] [xbp-B0h] BYREF
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFCD79 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1BC3008(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_1BC3008(&Method_System_Linq_Enumerable_Distinct_int___, v9);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1BC3008(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__AddRange__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__, v22);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_1BC3008(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo, v24);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___, v25);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v26);
    sub_1BC3008(&ServantEventBonusFilterController_TypeInfo, v27);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    byte_4AFCD79 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  entity = 0LL;
  v29 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v29;
  p_itemList = &this->fields.itemList;
  sub_1BC2FAC(&this->fields.itemList);
  if ( (this->fields.eventId & 0x80000000) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
LABEL_66:
      sub_1BC3264(Master_object, v33);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !EventValUpEventIdHash )
      goto LABEL_66;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v34 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v35 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                     (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v35 )
    goto LABEL_66;
  BonusSkillFilterList = (System_Collections_Generic_List_object__o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                                        (EventBonusFilterMaster_o *)v35,
                                                                        (System_Int32_array *)Master_object,
                                                                        0LL);
  v37 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !BonusSkillFilterList )
    goto LABEL_66;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    BonusSkillFilterList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v87 = v85;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v87,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    if ( !v38 )
      break;
    current = v87.fields._current;
    if ( !v87.fields._current )
      sub_1BC3264(v38, v39);
    v41 = EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)v87.fields._current, 4, 0LL);
    if ( v41 )
    {
      if ( !v34 )
        sub_1BC3264(v41, v42);
      v43 = SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v34, &entity, (int32_t)current[1].monitor, 1, 0LL);
      if ( v43 )
      {
        if ( !entity )
          sub_1BC3264(v43, v44);
        if ( !v37 )
          sub_1BC3264(v43, v44);
        skillId = (unsigned int)entity->fields.skillId;
        items = v37->fields._items;
        v47 = Method_System_Collections_Generic_List_int__Add__;
        ++v37->fields._version;
        if ( !items )
          sub_1BC3264(v43, skillId);
        size = v37->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v37,
            skillId,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v37->fields._size = size + 1;
          items->m_Items[size + 1] = skillId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v87,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  if ( !Master_object )
    goto LABEL_66;
  Master_object = (EventMaster_o *)ServantPassiveSkillMaster__GetEventBonusSkillIds(
                                     (ServantPassiveSkillMaster_o *)Master_object,
                                     0LL);
  if ( !v37 )
    goto LABEL_66;
  System_Collections_Generic_List_int___AddRange(
    v37,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_3684028 *)Method_System_Collections_Generic_List_int__AddRange__);
  v49 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (const MethodInfo_3021078 *)Method_System_Linq_Enumerable_Distinct_int___);
  v50 = (ServantEventBonusFilterController_o *)System_Linq_Enumerable__ToArray_int_(
                                                 v49,
                                                 (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  FriendshipUpCampaignInfo = (System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *)ServantEventBonusFilterController__GetFriendshipUpCampaignInfo(
                                                                                               v50,
                                                                                               v51);
  Master_object = (EventMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_66;
  NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                     (PartyOrganizationUtility_o *)Master_object,
                                                                                     (System_Collections_Generic_IEnumerable_int__o *)v50,
                                                                                     FriendshipUpCampaignInfo,
                                                                                     0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    BonusSkillFilterList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v54 = 0.0;
  v87 = v85;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v87,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    v55 = (EventBonusFilterEntity_o *)v87.fields._current;
    itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v57 = UnityEngine_Object__Instantiate_object_(
            itemPrefab,
            (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v59 = (ServantEventBonusFilterItem_o *)v57;
    if ( !v57 )
      sub_1BC3264(0LL, v58);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v57, 0LL);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_1BC3264(0LL, v60);
    v63 = UnityEngine_GameObject__get_transform(baseObject, 0LL);
    if ( !transform )
      sub_1BC3264(v63, v63);
    UnityEngine_Transform__SetParent_70057560(transform, v63, 0, 0LL);
    if ( !v55 )
      sub_1BC3264(v64, v65);
    sort = this->fields.sort;
    v67 = System_Linq_Enumerable__Contains_int_(
            NeedAddAnnotationSkillIds,
            v55->fields.value,
            (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
    ServantEventBonusFilterItem__Init(v59, v55, sort, v67, v68);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v59, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v54, 0LL);
    v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v59, 0LL);
    if ( !v70 )
      sub_1BC3264(0LL, v71);
    UnityEngine_GameObject__SetActive(v70, 1, 0LL);
    baseSprite = v59->fields.baseSprite;
    if ( !baseSprite )
      sub_1BC3264(v72, v73);
    v75 = (System_Collections_Generic_List_object__o *)*p_itemList;
    v54 = (float)(v54 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_1BC3264(0LL, v73);
    v76 = v75->fields._items;
    v77 = Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__;
    ++v75->fields._version;
    if ( !v76 )
      sub_1BC3264(v75, v73);
    v78 = v75->fields._size;
    if ( (unsigned int)v78 >= v76->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v75,
        (Il2CppObject *)v59,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    }
    else
    {
      v79 = &v76->obj.klass + v78;
      v75->fields._size = v78 + 1;
      v79[4] = (Il2CppClass *)v59;
      sub_1BC2FAC(v79 + 4);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v87,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_object = (EventMaster_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_66;
  v80 = (UIWidget_o *)Master_object;
  Master_object = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0LL);
  if ( !Master_object )
    goto LABEL_66;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Master_object, 0LL);
  Master_object = (EventMaster_o *)ServantEventBonusFilterController_TypeInfo;
  y = localPosition.fields.y;
  if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  if ( !v80 )
    goto LABEL_66;
  v82 = fabsf((float)(v54 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v83 = v82 == INFINITY ? 0x80000000 : (int)v82;
  UIWidget__set_height(v80, v83, 0LL);
  Master_object = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_object )
    goto LABEL_66;
  v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionY(v84, (float)-v80->fields.mHeight, 0LL);
  UIWidget__set_height(v80, v80->fields.mHeight + 12, 0LL);
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
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  ServantEventBonusFilterController___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_T__TResult__o *_9__16_1; // x21
  Il2CppObject *v20; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  v2 = this;
  if ( (byte_4AFCD7B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_int_____, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Intersect_int_____, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____, v4);
    sub_1BC3008(&System_Func_KeyValuePair_int__int_____int____TypeInfo, v5);
    sub_1BC3008(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__, v6);
    sub_1BC3008(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__, v7);
    this = (ServantEventBonusFilterController_o *)sub_1BC3008(&ServantEventBonusFilterController___c_TypeInfo, v8);
    byte_4AFCD7B = 1;
  }
  sort = v2->fields.sort;
  if ( !sort )
    sub_1BC3264(this, method);
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
    _9__16_0 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v14,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      0LL);
    static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_1BC2FAC(&static_fields->__9__16_0);
  }
  v16 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_302EA9C *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
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
    _9__16_1 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v20,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      0LL);
    v21 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v21->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_1BC2FAC(&v21->__9__16_1);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_302EA9C *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v23 = System_Linq_Enumerable__Intersect_object_(
          v18,
          v22,
          (const MethodInfo_30285B0 *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_object_(
            v23,
            (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_int_____);
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
  if ( (byte_4AFCD7D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventBonusFilterMaster___, sort);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v8);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1BC3008(&Method_System_Linq_Enumerable_Intersect_int___, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__AddRange__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    userServantEntity = (UserServantEntity_o *)sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v19);
    byte_4AFCD7D = 1;
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
  v20 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  v21 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_26;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_26;
  v23 = userServantEntity;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v31,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v32,
            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v24 )
      break;
    key = (int32_t)v32.fields._current.fields.key;
    if ( eventId < 1 || LODWORD(v32.fields._current.fields.key) == eventId )
    {
      if ( !v23 )
        sub_1BC3264(v24, v25);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v23,
                                                                            (int32_t)v32.fields._current.fields.key,
                                                                            (System_Int32_array *)v32.fields._current.fields.value,
                                                                            0LL);
      if ( !v20 )
        sub_1BC3264(EventBonusSkillIds, EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v20,
        EventBonusSkillIds,
        (const MethodInfo_3684028 *)Method_System_Collections_Generic_List_int__AddRange__);
      v28 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v23,
                                                             key,
                                                             idList,
                                                             0LL);
      if ( !v21 )
        sub_1BC3264(v28, v28);
      System_Collections_Generic_List_int___AddRange(
        v21,
        v28,
        (const MethodInfo_3684028 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v32,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v21 )
LABEL_26:
    sub_1BC3264(userServantEntity, sort);
  if ( v21->fields._size > 0 )
  {
    v29 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v21,
            (System_Collections_Generic_IEnumerable_TSource__o *)v20,
            (const MethodInfo_302853C *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v29,
             (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___) >= v21->fields._size;
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

  if ( (byte_4AFCD76 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_4AFCD76 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BC3264(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BC3264(0LL, v7);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  System_Collections_Generic_HashSet_int__o *v15; // x21
  __int64 v16; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppClass *klass; // x8
  int32_t name; // w22
  __int64 v22; // x1
  ListViewSort_o *sort; // x0
  __int64 v24; // x1
  System_Int32_array *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AFCD7A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int____Add__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Contains__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v12);
    byte_4AFCD7A = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v13;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.defaultFilterData;
  sub_1BC2FAC(&this->fields.defaultFilterData);
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BC3264(0LL, v16);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v18 )
      break;
    if ( !v27.fields._current )
      sub_1BC3264(v18, v19);
    klass = v27.fields._current[5].klass;
    if ( !klass )
      sub_1BC3264(v18, v19);
    if ( !v15 )
      sub_1BC3264(v18, v19);
    name = (int32_t)klass->_1.name;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v15,
            name,
            (const MethodInfo_355857C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v15,
        name,
        (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_1BC3264(0LL, v22);
      SvtEventBonusFilterInt = ListViewSort__GetSvtEventBonusFilterInt(sort, name, 0LL);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_1BC3264(0LL, v24);
        System_Collections_Generic_Dictionary_int__object___Add(
          *p_defaultFilterData,
          name,
          &SvtEventBonusFilterInt->obj,
          (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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

  if ( (byte_4AFCD7C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, isEnable);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v7);
    byte_4AFCD7C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BC3264(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)klass, i, 0LL) )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v10 )
      break;
    if ( !v13.fields._current )
      sub_1BC3264(v10, v11);
    klass = v13.fields._current[4].klass;
    if ( !klass )
      sub_1BC3264(0LL, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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

  if ( (byte_4AFCD78 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_11727/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, v3);
    sub_1BC3008(&StringLiteral_11725/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, v4);
    byte_4AFCD78 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11727/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11725/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0LL),
        !explanationLabel) )
  {
    sub_1BC3264(v6, v7);
  }
  UILabel__set_text(explanationLabel, v6, 0LL);
}


void __fastcall ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFCD81 & 1) == 0 )
  {
    sub_1BC3008(&ServantEventBonusFilterController___c_TypeInfo, v1);
    byte_4AFCD81 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ServantEventBonusFilterController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantEventBonusFilterController___c_TypeInfo->static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v2;
  sub_1BC2FAC(ServantEventBonusFilterController___c_TypeInfo->static_fields);
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
  if ( (byte_4AFCD82 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, *(_QWORD *)&pair.fields.key);
    byte_4AFCD82 = 1;
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
  if ( (byte_4AFCD83 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, *(_QWORD *)&pair.fields.key);
    byte_4AFCD83 = 1;
  }
  return value;
}