void __fastcall ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  if ( (byte_4A56358 & 1) == 0 )
  {
    sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4A56358 = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void __fastcall ServantEventBonusFilterController___ctor(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20

  if ( (byte_4A56357 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    byte_4A56357 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  sub_1B88554(&this->fields.defaultFilterData, v3);
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
  sub_1B88554(&this->fields.sort, sortParam);
  this->fields.eventId = targetEventId;
  ServantEventBonusFilterController__SetupLabel(this, v6);
  ServantEventBonusFilterController__InitItems(this, v7);
  ServantEventBonusFilterController__SetDefaultFilterData(this, v8);
}


void __fastcall ServantEventBonusFilterController__InitAllButton(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A56350 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4A56350 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1B8880C(0LL, v4);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__InitItems(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o **p_itemList; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x22
  float v9; // s8
  Il2CppObject *current; // x22
  Il2CppObject *itemPrefab; // x21
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  ServantEventBonusFilterItem_o *v14; // x21
  __int64 v15; // x1
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  struct UISprite_o *baseSprite; // x8
  System_Collections_Generic_List_object__o *v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  UIWidget_o *v31; // x20
  float y; // s9
  float v33; // s0
  int32_t v34; // w1
  UnityEngine_GameObject_o *v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A56352 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4A56352 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v3;
  p_itemList = &this->fields.itemList;
  sub_1B88554(&this->fields.itemList, v3);
  if ( (this->fields.eventId & 0x80000000) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
LABEL_45:
      sub_1B8880C(Master_object, v7);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !EventValUpEventIdHash )
      goto LABEL_45;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v8 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                     (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v8 )
    goto LABEL_45;
  Master_object = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                     (EventBonusFilterMaster_o *)v8,
                                     (System_Int32_array *)Master_object,
                                     0LL);
  if ( !Master_object )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v9 = 0.0;
  v37 = v36;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    current = v37.fields._current;
    itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__Instantiate_object_(
            itemPrefab,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v14 = (ServantEventBonusFilterItem_o *)v12;
    if ( !v12 )
      sub_1B8880C(0LL, v13);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0LL);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_1B8880C(0LL, v15);
    v18 = UnityEngine_GameObject__get_transform(baseObject, 0LL);
    if ( !transform )
      sub_1B8880C(v18, v18);
    UnityEngine_Transform__SetParent_69480628(transform, v18, 0, 0LL);
    ServantEventBonusFilterItem__Init(v14, (EventBonusFilterEntity_o *)current, this->fields.sort, v19);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v9, 0LL);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
    if ( !v21 )
      sub_1B8880C(0LL, v22);
    UnityEngine_GameObject__SetActive(v21, 1, 0LL);
    baseSprite = v14->fields.baseSprite;
    if ( !baseSprite )
      sub_1B8880C(v23, v24);
    v26 = (System_Collections_Generic_List_object__o *)*p_itemList;
    v9 = (float)(v9 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_1B8880C(0LL, v24);
    items = v26->fields._items;
    v28 = Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__;
    ++v26->fields._version;
    if ( !items )
      sub_1B8880C(v26, v24);
    size = v26->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)v14,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v26->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v14;
      sub_1B88554(v30 + 4, v14);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_object = (EventMaster_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_45;
  v31 = (UIWidget_o *)Master_object;
  Master_object = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0LL);
  if ( !Master_object )
    goto LABEL_45;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Master_object, 0LL);
  Master_object = (EventMaster_o *)ServantEventBonusFilterController_TypeInfo;
  y = localPosition.fields.y;
  if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    Master_object = (EventMaster_o *)j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  if ( !v31 )
    goto LABEL_45;
  v33 = fabsf((float)(v9 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v34 = v33 == INFINITY ? 0x80000000 : (int)v33;
  UIWidget__set_height(v31, v34, 0LL);
  Master_object = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_object )
    goto LABEL_45;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionY(v35, (float)-v31->fields.mHeight, 0LL);
  UIWidget__set_height(v31, v31->fields.mHeight + 12, 0LL);
}


bool __fastcall ServantEventBonusFilterController__IsChangeFilterData(
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
  if ( (byte_4A56354 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int_____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Intersect_int_____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
    sub_1B885B0(&System_Func_KeyValuePair_int__int_____int____TypeInfo);
    sub_1B885B0(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__);
    sub_1B885B0(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__);
    this = (ServantEventBonusFilterController_o *)sub_1B885B0(&ServantEventBonusFilterController___c_TypeInfo);
    byte_4A56354 = 1;
  }
  sort = v2->fields.sort;
  if ( !sort )
    sub_1B8880C(this, method);
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
    _9__16_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v8,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      0LL);
    static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_1B88554(&static_fields->__9__16_0, _9__16_0);
  }
  v10 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_2EAB370 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
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
    _9__16_1 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v14,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      0LL);
    v15 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v15->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_1B88554(&v15->__9__16_1, _9__16_1);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_2EAB370 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v17 = System_Linq_Enumerable__Intersect_object_(
          v12,
          v16,
          (const MethodInfo_2EA523C *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_object_(
            v17,
            (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_int_____);
}


bool __fastcall ServantEventBonusFilterController__IsHideServant(
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
  if ( (byte_4A56356 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    userServantEntity = (UserServantEntity_o *)sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A56356 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  memset(&v19, 0, sizeof(v19));
  if ( !eventId )
    return 0;
  if ( !v6 )
    goto LABEL_26;
  UserServantEntity__getPassiveSkillInfo(v6, &idList, &titleList, &explanationList, -1, 0LL, 0LL);
  if ( !idList )
    return 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_26;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_26;
  v10 = userServantEntity;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v11 )
      break;
    key = (int32_t)v19.fields._current.fields.key;
    if ( eventId < 1 || LODWORD(v19.fields._current.fields.key) == eventId )
    {
      if ( !v10 )
        sub_1B8880C(v11, v12);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v10,
                                                                            (int32_t)v19.fields._current.fields.key,
                                                                            (System_Int32_array *)v19.fields._current.fields.value,
                                                                            0LL);
      if ( !v7 )
        sub_1B8880C(EventBonusSkillIds, EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v7,
        EventBonusSkillIds,
        (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
      v15 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v10,
                                                             key,
                                                             idList,
                                                             0LL);
      if ( !v8 )
        sub_1B8880C(v15, v15);
      System_Collections_Generic_List_int___AddRange(
        v8,
        v15,
        (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v8 )
LABEL_26:
    sub_1B8880C(userServantEntity, sort);
  if ( v8->fields._size > 0 )
  {
    v16 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v8,
            (System_Collections_Generic_IEnumerable_TSource__o *)v7,
            (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v16,
             (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___) >= v8->fields._size;
  }
  return 0;
}


void __fastcall ServantEventBonusFilterController__RefreshButtonState(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5634F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4A5634F = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1B8880C(0LL, v4);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetDefaultFilterData(
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

  if ( (byte_4A56353 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4A56353 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.defaultFilterData;
  sub_1B88554(&this->fields.defaultFilterData, v3);
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v17.fields._current )
      sub_1B8880C(v8, v9);
    klass = v17.fields._current[5].klass;
    if ( !klass )
      sub_1B8880C(v8, v9);
    if ( !v5 )
      sub_1B8880C(v8, v9);
    name = (int32_t)klass->_1.name;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v5,
            name,
            (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v5,
        name,
        (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_1B8880C(0LL, v12);
      SvtEventBonusFilterInt = ListViewSort__GetSvtEventBonusFilterInt(sort, name, 0LL);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_1B8880C(0LL, v14);
        System_Collections_Generic_Dictionary_int__object___Add(
          *p_defaultFilterData,
          name,
          &SvtEventBonusFilterInt->obj,
          (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEventBonusFilterController__SetEnableFilterButton(
        ServantEventBonusFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A56355 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_4A56355 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)klass, i, 0LL) )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields._current )
      sub_1B8880C(v7, v8);
    klass = v10.fields._current[4].klass;
    if ( !klass )
      sub_1B8880C(0LL, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetupLabel(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *explanationLabel; // x19

  if ( (byte_4A56351 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11800/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/);
    sub_1B885B0(&StringLiteral_11798/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/);
    byte_4A56351 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11800/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11798/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0LL),
        !explanationLabel) )
  {
    sub_1B8880C(v4, v5);
  }
  UILabel__set_text(explanationLabel, v4, 0LL);
}


void __fastcall ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A56359 & 1) == 0 )
  {
    sub_1B885B0(&ServantEventBonusFilterController___c_TypeInfo);
    byte_4A56359 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantEventBonusFilterController___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantEventBonusFilterController___c_TypeInfo->static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v1;
  sub_1B88554(ServantEventBonusFilterController___c_TypeInfo->static_fields, v1);
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
  if ( (byte_4A5635A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_4A5635A = 1;
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
  if ( (byte_4A5635B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_4A5635B = 1;
  }
  return value;
}