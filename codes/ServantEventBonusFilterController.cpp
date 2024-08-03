void __fastcall ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F7767 & 1) == 0 )
  {
    sub_1B640C8(&ServantEventBonusFilterController_TypeInfo, v1);
    byte_49F7767 = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void __fastcall ServantEventBonusFilterController___ctor(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20

  if ( (byte_49F7766 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    byte_49F7766 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v5;
  sub_1B6406C(&this->fields.defaultFilterData);
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
  sub_1B6406C(&this->fields.sort);
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

  if ( (byte_49F775F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_49F775F = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__InitItems(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_List_object__o *v21; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o **p_itemList; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_object; // x0
  Il2CppObject *v27; // x22
  float v28; // s8
  Il2CppObject *current; // x22
  Il2CppObject *itemPrefab; // x21
  Il2CppObject *v31; // x0
  ServantEventBonusFilterItem_o *v32; // x21
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v35; // x0
  const MethodInfo *v36; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x0
  struct UISprite_o *baseSprite; // x8
  System_Collections_Generic_List_object__o *v41; // x0
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x8
  UIWidget_o *v46; // x20
  float y; // s9
  float v48; // s0
  int32_t v49; // w1
  UnityEngine_GameObject_o *v50; // x0
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F7761 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo, v17);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&ServantEventBonusFilterController_TypeInfo, v20);
    byte_49F7761 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v21;
  p_itemList = &this->fields.itemList;
  sub_1B6406C(&this->fields.itemList);
  if ( (this->fields.eventId & 0x80000000) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
LABEL_45:
      sub_1B64324(Master_object);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                                           v23,
                                                                           v24);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !EventValUpEventIdHash )
      goto LABEL_45;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v27 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                     (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v27 )
    goto LABEL_45;
  Master_object = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                     (EventBonusFilterMaster_o *)v27,
                                     (System_Int32_array *)Master_object,
                                     0LL);
  if ( !Master_object )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v28 = 0.0;
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    current = v52.fields._current;
    itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v31 = UnityEngine_Object__Instantiate_object_(
            itemPrefab,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v32 = (ServantEventBonusFilterItem_o *)v31;
    if ( !v31 )
      sub_1B64324(0LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v31, 0LL);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_1B64324(0LL);
    v35 = UnityEngine_GameObject__get_transform(baseObject, 0LL);
    if ( !transform )
      sub_1B64324(v35);
    UnityEngine_Transform__SetParent_69148984(transform, v35, 0, 0LL);
    ServantEventBonusFilterItem__Init(v32, (EventBonusFilterEntity_o *)current, this->fields.sort, v36);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v32, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v28, 0LL);
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v32, 0LL);
    if ( !v38 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v38, 1, 0LL);
    baseSprite = v32->fields.baseSprite;
    if ( !baseSprite )
      sub_1B64324(v39);
    v41 = (System_Collections_Generic_List_object__o *)*p_itemList;
    v28 = (float)(v28 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_1B64324(0LL);
    items = v41->fields._items;
    v43 = Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__;
    ++v41->fields._version;
    if ( !items )
      sub_1B64324(v41);
    size = v41->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v41,
        (Il2CppObject *)v32,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &items->obj.klass + size;
      v41->fields._size = size + 1;
      v45[4] = (Il2CppClass *)v32;
      sub_1B6406C(v45 + 4);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_object = (EventMaster_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_45;
  v46 = (UIWidget_o *)Master_object;
  Master_object = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0LL);
  if ( !Master_object )
    goto LABEL_45;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Master_object, 0LL);
  Master_object = (EventMaster_o *)ServantEventBonusFilterController_TypeInfo;
  y = localPosition.fields.y;
  if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    Master_object = (EventMaster_o *)j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  if ( !v46 )
    goto LABEL_45;
  v48 = fabsf((float)(v28 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v49 = v48 == INFINITY ? 0x80000000 : (int)v48;
  UIWidget__set_height(v46, v49, 0LL);
  Master_object = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_object )
    goto LABEL_45;
  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionY(v50, (float)-v46->fields.mHeight, 0LL);
  UIWidget__set_height(v46, v46->fields.mHeight + 12, 0LL);
}


bool __fastcall ServantEventBonusFilterController__IsChangeFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantEventBonusFilterController_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_IEnumerable_TSource__o *svtEventBonusFilterDic; // x19
  System_Collections_Generic_IEnumerable_TSource__o *defaultFilterData; // x20
  ServantEventBonusFilterController___c_c *v13; // x0
  System_Func_T__TResult__o *_9__16_0; // x21
  Il2CppObject *v15; // x22
  struct ServantEventBonusFilterController___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  ServantEventBonusFilterController___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_T__TResult__o *_9__16_1; // x21
  Il2CppObject *v23; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  v3 = this;
  if ( (byte_49F7763 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_int_____, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Intersect_int_____, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____, v5);
    sub_1B640C8(&System_Func_KeyValuePair_int__int_____int____TypeInfo, v6);
    sub_1B640C8(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__, v7);
    sub_1B640C8(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__, v8);
    this = (ServantEventBonusFilterController_o *)sub_1B640C8(&ServantEventBonusFilterController___c_TypeInfo, v9);
    byte_49F7763 = 1;
  }
  sort = v3->fields.sort;
  if ( !sort )
    sub_1B64324(this);
  svtEventBonusFilterDic = (System_Collections_Generic_IEnumerable_TSource__o *)sort->fields.svtEventBonusFilterDic;
  defaultFilterData = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.defaultFilterData;
  v13 = ServantEventBonusFilterController___c_TypeInfo;
  if ( !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo);
    v13 = ServantEventBonusFilterController___c_TypeInfo;
  }
  _9__16_0 = (System_Func_T__TResult__o *)v13->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ServantEventBonusFilterController___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__16_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                              System_Func_KeyValuePair_int__int_____int____TypeInfo,
                                              method,
                                              v2);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v15,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      0LL);
    static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_1B6406C(&static_fields->__9__16_0);
  }
  v17 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_2E64604 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v20 = ServantEventBonusFilterController___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo);
    v20 = ServantEventBonusFilterController___c_TypeInfo;
  }
  _9__16_1 = (System_Func_T__TResult__o *)v20->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ServantEventBonusFilterController___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__16_1 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_KeyValuePair_int__int_____int____TypeInfo, v18, v19);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v23,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      0LL);
    v24 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v24->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_1B6406C(&v24->__9__16_1);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_2E64604 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v26 = System_Linq_Enumerable__Intersect_object_(
          v21,
          v25,
          (const MethodInfo_2E5E4D0 *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_object_(
            v26,
            (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_int_____);
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x19
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x23
  UserServantEntity_o *v27; // x22
  _BOOL8 v28; // x0
  int32_t key; // w23
  System_Collections_Generic_IEnumerable_T__o *EventBonusSkillIds; // x0
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+30h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+58h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+60h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+68h] [xbp-48h] BYREF

  v6 = userServantEntity;
  if ( (byte_49F7765 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventBonusFilterMaster___, sort);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Intersect_int___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    userServantEntity = (UserServantEntity_o *)sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v19);
    byte_49F7765 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  memset(&v35, 0, sizeof(v35));
  if ( !eventId )
    return 0;
  if ( !v6 )
    goto LABEL_26;
  UserServantEntity__getPassiveSkillInfo(v6, &idList, &titleList, &explanationList, -1, 0LL, 0LL);
  if ( !idList )
    return 0;
  v22 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v25 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v23, v24);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_26;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_26;
  v27 = userServantEntity;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v34,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v28 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v35,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v28 )
      break;
    key = (int32_t)v35.fields._current.fields.key;
    if ( eventId < 1 || LODWORD(v35.fields._current.fields.key) == eventId )
    {
      if ( !v27 )
        sub_1B64324(v28);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v27,
                                                                            (int32_t)v35.fields._current.fields.key,
                                                                            (System_Int32_array *)v35.fields._current.fields.value,
                                                                            0LL);
      if ( !v22 )
        sub_1B64324(EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v22,
        EventBonusSkillIds,
        (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
      v31 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v27,
                                                             key,
                                                             idList,
                                                             0LL);
      if ( !v25 )
        sub_1B64324(v31);
      System_Collections_Generic_List_int___AddRange(
        v25,
        v31,
        (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v35,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v25 )
LABEL_26:
    sub_1B64324(userServantEntity);
  if ( v25->fields._size > 0 )
  {
    v32 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v25,
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (const MethodInfo_2E5E45C *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v32,
             (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___) >= v25->fields._size;
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

  if ( (byte_49F775E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_49F775E = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetDefaultFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_Dictionary_int__object__o *v14; // x21
  System_Collections_Generic_Dictionary_int__object__o **p_defaultFilterData; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_HashSet_int__o *v18; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _BOOL8 v20; // x0
  Il2CppClass *klass; // x8
  int32_t name; // w22
  ListViewSort_o *sort; // x0
  System_Int32_array *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F7762 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v13);
    byte_49F7762 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v14,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v14;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.defaultFilterData;
  sub_1B6406C(&this->fields.defaultFilterData);
  v18 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_HashSet_int____ctor(
    v18,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v20 )
      break;
    if ( !v26.fields._current )
      sub_1B64324(v20);
    klass = v26.fields._current[5].klass;
    if ( !klass )
      sub_1B64324(v20);
    if ( !v18 )
      sub_1B64324(v20);
    name = (int32_t)klass->_1.name;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v18,
            name,
            (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v18,
        name,
        (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_1B64324(0LL);
      SvtEventBonusFilterInt = ListViewSort__GetSvtEventBonusFilterInt(sort, name, 0LL);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_1B64324(0LL);
        System_Collections_Generic_Dictionary_int__object___Add(
          *p_defaultFilterData,
          name,
          &SvtEventBonusFilterInt->obj,
          (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F7764 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, isEnable);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v7);
    byte_49F7764 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)klass, i, 0LL) )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v10 )
      break;
    if ( !v12.fields._current )
      sub_1B64324(v10);
    klass = v12.fields._current[4].klass;
    if ( !klass )
      sub_1B64324(0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetupLabel(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *v6; // x0
  UILabel_o *explanationLabel; // x19

  if ( (byte_49F7760 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_11745/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, v3);
    sub_1B640C8(&StringLiteral_11743/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, v4);
    byte_49F7760 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11745/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11743/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0LL),
        !explanationLabel) )
  {
    sub_1B64324(v6);
  }
  UILabel__set_text(explanationLabel, v6, 0LL);
}


void __fastcall ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F7768 & 1) == 0 )
  {
    sub_1B640C8(&ServantEventBonusFilterController___c_TypeInfo, v1);
    byte_49F7768 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantEventBonusFilterController___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantEventBonusFilterController___c_TypeInfo->static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v3;
  sub_1B6406C(ServantEventBonusFilterController___c_TypeInfo->static_fields);
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
  if ( (byte_49F7769 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, *(_QWORD *)&pair.fields.key);
    byte_49F7769 = 1;
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
  if ( (byte_49F776A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, *(_QWORD *)&pair.fields.key);
    byte_49F776A = 1;
  }
  return value;
}