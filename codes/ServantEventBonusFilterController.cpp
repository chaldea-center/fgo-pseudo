void __fastcall ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB160D & 1) == 0 )
  {
    sub_1BAB41C(&ServantEventBonusFilterController_TypeInfo, v1);
    byte_4AB160D = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void __fastcall ServantEventBonusFilterController___ctor(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20

  if ( (byte_4AB160C & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, method);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v3);
    byte_4AB160C = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_31B6460 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v4;
  sub_1BAB3C0(&this->fields.defaultFilterData);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
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
  sub_1BAB3C0(&this->fields.sort);
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

  if ( (byte_4AB1605 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_4AB1605 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BAB678(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BAB678(0LL, v7);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  System_Collections_Generic_List_object__o *v20; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o **p_itemList; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_object; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x22
  float v26; // s8
  Il2CppObject *current; // x22
  Il2CppObject *itemPrefab; // x21
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  ServantEventBonusFilterItem_o *v31; // x21
  __int64 v32; // x1
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v35; // x0
  const MethodInfo *v36; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x1
  struct UISprite_o *baseSprite; // x8
  System_Collections_Generic_List_object__o *v43; // x0
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  UIWidget_o *v48; // x20
  float y; // s9
  float v50; // s0
  int32_t v51; // w1
  UnityEngine_GameObject_o *v52; // x0
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB1607 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1BAB41C(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v3);
    sub_1BAB41C(&Method_DataManager_GetMaster_EventMaster___, v4);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int___ctor__, v11);
    sub_1BAB41C(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__, v15);
    sub_1BAB41C(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo, v16);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___, v17);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v18);
    sub_1BAB41C(&ServantEventBonusFilterController_TypeInfo, v19);
    byte_4AB1607 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v20 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v20;
  p_itemList = &this->fields.itemList;
  sub_1BAB3C0(&this->fields.itemList);
  if ( (this->fields.eventId & 0x80000000) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
LABEL_45:
      sub_1BAB678(Master_object, v24);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_1BAB668(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_3401638 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !EventValUpEventIdHash )
      goto LABEL_45;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_340283C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v25 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                     (const MethodInfo_2EFCF54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v25 )
    goto LABEL_45;
  Master_object = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                     (EventBonusFilterMaster_o *)v25,
                                     (System_Int32_array *)Master_object,
                                     0LL);
  if ( !Master_object )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v26 = 0.0;
  v54 = v53;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    current = v54.fields._current;
    itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v29 = UnityEngine_Object__Instantiate_object_(
            itemPrefab,
            (const MethodInfo_2F483D8 *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v31 = (ServantEventBonusFilterItem_o *)v29;
    if ( !v29 )
      sub_1BAB678(0LL, v30);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v29, 0LL);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_1BAB678(0LL, v32);
    v35 = UnityEngine_GameObject__get_transform(baseObject, 0LL);
    if ( !transform )
      sub_1BAB678(v35, v35);
    UnityEngine_Transform__SetParent_69821868(transform, v35, 0, 0LL);
    ServantEventBonusFilterItem__Init(v31, (EventBonusFilterEntity_o *)current, this->fields.sort, v36);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v26, 0LL);
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
    if ( !v38 )
      sub_1BAB678(0LL, v39);
    UnityEngine_GameObject__SetActive(v38, 1, 0LL);
    baseSprite = v31->fields.baseSprite;
    if ( !baseSprite )
      sub_1BAB678(v40, v41);
    v43 = (System_Collections_Generic_List_object__o *)*p_itemList;
    v26 = (float)(v26 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_1BAB678(0LL, v41);
    items = v43->fields._items;
    v45 = Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__;
    ++v43->fields._version;
    if ( !items )
      sub_1BAB678(v43, v41);
    size = v43->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v43,
        (Il2CppObject *)v31,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &items->obj.klass + size;
      v43->fields._size = size + 1;
      v47[4] = (Il2CppClass *)v31;
      sub_1BAB3C0(v47 + 4);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_object = (EventMaster_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_45;
  v48 = (UIWidget_o *)Master_object;
  Master_object = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0LL);
  if ( !Master_object )
    goto LABEL_45;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Master_object, 0LL);
  Master_object = (EventMaster_o *)ServantEventBonusFilterController_TypeInfo;
  y = localPosition.fields.y;
  if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  if ( !v48 )
    goto LABEL_45;
  v50 = fabsf((float)(v26 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v51 = v50 == INFINITY ? 0x80000000 : (int)v50;
  UIWidget__set_height(v48, v51, 0LL);
  Master_object = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_object )
    goto LABEL_45;
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionY(v52, (float)-v48->fields.mHeight, 0LL);
  UIWidget__set_height(v48, v48->fields.mHeight + 12, 0LL);
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
  if ( (byte_4AB1609 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_int_____, method);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Intersect_int_____, v3);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____, v4);
    sub_1BAB41C(&System_Func_KeyValuePair_int__int_____int____TypeInfo, v5);
    sub_1BAB41C(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__, v6);
    sub_1BAB41C(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__, v7);
    this = (ServantEventBonusFilterController_o *)sub_1BAB41C(&ServantEventBonusFilterController___c_TypeInfo, v8);
    byte_4AB1609 = 1;
  }
  sort = v2->fields.sort;
  if ( !sort )
    sub_1BAB678(this, method);
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
    _9__16_0 = (System_Func_T__TResult__o *)sub_1BAB668(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v14,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      0LL);
    static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_1BAB3C0(&static_fields->__9__16_0);
  }
  v16 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_2EEF27C *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
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
    _9__16_1 = (System_Func_T__TResult__o *)sub_1BAB668(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v20,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      0LL);
    v21 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v21->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_1BAB3C0(&v21->__9__16_1);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_2EEF27C *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v23 = System_Linq_Enumerable__Intersect_object_(
          v18,
          v22,
          (const MethodInfo_2EE90DC *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_object_(
            v23,
            (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_int_____);
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
  if ( (byte_4AB160B & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_EventBonusFilterMaster___, sort);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v8);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Intersect_int___, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__AddRange__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    userServantEntity = (UserServantEntity_o *)sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v19);
    byte_4AB160B = 1;
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
  v20 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  v21 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_26;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_26;
  v23 = userServantEntity;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v31,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_31B726C *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v32,
            (const MethodInfo_3304574 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v24 )
      break;
    key = (int32_t)v32.fields._current.fields.key;
    if ( eventId < 1 || LODWORD(v32.fields._current.fields.key) == eventId )
    {
      if ( !v23 )
        sub_1BAB678(v24, v25);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v23,
                                                                            (int32_t)v32.fields._current.fields.key,
                                                                            (System_Int32_array *)v32.fields._current.fields.value,
                                                                            0LL);
      if ( !v20 )
        sub_1BAB678(EventBonusSkillIds, EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v20,
        EventBonusSkillIds,
        (const MethodInfo_3530AA4 *)Method_System_Collections_Generic_List_int__AddRange__);
      v28 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v23,
                                                             key,
                                                             idList,
                                                             0LL);
      if ( !v21 )
        sub_1BAB678(v28, v28);
      System_Collections_Generic_List_int___AddRange(
        v21,
        v28,
        (const MethodInfo_3530AA4 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v32,
    (const MethodInfo_3304698 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v21 )
LABEL_26:
    sub_1BAB678(userServantEntity, sort);
  if ( v21->fields._size > 0 )
  {
    v29 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v21,
            (System_Collections_Generic_IEnumerable_TSource__o *)v20,
            (const MethodInfo_2EE9068 *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v29,
             (const MethodInfo_2EE04F4 *)Method_System_Linq_Enumerable_Count_int___) >= v21->fields._size;
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

  if ( (byte_4AB1604 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_4AB1604 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BAB678(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BAB678(0LL, v7);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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

  if ( (byte_4AB1608 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int____Add__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int__Contains__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1BAB41C(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v12);
    byte_4AB1608 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_31B6460 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v13;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.defaultFilterData;
  sub_1BAB3C0(&this->fields.defaultFilterData);
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_1BAB668(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_3401638 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BAB678(0LL, v16);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v18 )
      break;
    if ( !v27.fields._current )
      sub_1BAB678(v18, v19);
    klass = v27.fields._current[5].klass;
    if ( !klass )
      sub_1BAB678(v18, v19);
    if ( !v15 )
      sub_1BAB678(v18, v19);
    name = (int32_t)klass->_1.name;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v15,
            name,
            (const MethodInfo_3401D2C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v15,
        name,
        (const MethodInfo_340283C *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_1BAB678(0LL, v22);
      SvtEventBonusFilterInt = ListViewSort__GetSvtEventBonusFilterInt(sort, name, 0LL);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_1BAB678(0LL, v24);
        System_Collections_Generic_Dictionary_int__object___Add(
          *p_defaultFilterData,
          name,
          &SvtEventBonusFilterInt->obj,
          (const MethodInfo_31B6E34 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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

  if ( (byte_4AB160A & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, isEnable);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v7);
    byte_4AB160A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BAB678(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)klass, i, 0LL) )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v10 )
      break;
    if ( !v13.fields._current )
      sub_1BAB678(v10, v11);
    klass = v13.fields._current[4].klass;
    if ( !klass )
      sub_1BAB678(0LL, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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

  if ( (byte_4AB1606 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_11809/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, v3);
    sub_1BAB41C(&StringLiteral_11807/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, v4);
    byte_4AB1606 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11809/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0LL),
        !explanationLabel) )
  {
    sub_1BAB678(v6, v7);
  }
  UILabel__set_text(explanationLabel, v6, 0LL);
}


void __fastcall ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AB160E & 1) == 0 )
  {
    sub_1BAB41C(&ServantEventBonusFilterController___c_TypeInfo, v1);
    byte_4AB160E = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(ServantEventBonusFilterController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantEventBonusFilterController___c_TypeInfo->static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v2;
  sub_1BAB3C0(ServantEventBonusFilterController___c_TypeInfo->static_fields);
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
  if ( (byte_4AB160F & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, *(_QWORD *)&pair.fields.key);
    byte_4AB160F = 1;
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
  if ( (byte_4AB1610 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, *(_QWORD *)&pair.fields.key);
    byte_4AB1610 = 1;
  }
  return value;
}