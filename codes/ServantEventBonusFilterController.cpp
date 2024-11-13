void __fastcall ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B119A1 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, v1, v2);
    byte_4B119A1 = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void __fastcall ServantEventBonusFilterController___ctor(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20

  if ( (byte_4B119A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5, v6);
    byte_4B119A0 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v7;
  sub_1BCA784(&this->fields.defaultFilterData, v7);
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
  sub_1BCA784(&this->fields.sort, sortParam);
  this->fields.eventId = targetEventId;
  ServantEventBonusFilterController__SetupLabel(this, v6);
  ServantEventBonusFilterController__InitItems(this, v7);
  ServantEventBonusFilterController__SetDefaultFilterData(this, v8);
}


void __fastcall ServantEventBonusFilterController__InitAllButton(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11999 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v8, v9);
    byte_4B11999 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BCAA3C(0LL, v11);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v12.fields._current, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__InitItems(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *v39; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o **p_itemList; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_object; // x0
  __int64 v46; // x1
  __int64 v47; // x1
  Il2CppObject *v48; // x22
  float v49; // s8
  __int64 v50; // x1
  Il2CppObject *current; // x22
  Il2CppObject *itemPrefab; // x21
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  ServantEventBonusFilterItem_o *v55; // x21
  __int64 v56; // x1
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v59; // x0
  const MethodInfo *v60; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x0
  __int64 v65; // x1
  struct UISprite_o *baseSprite; // x8
  System_Collections_Generic_List_object__o *v67; // x0
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x8
  UIWidget_o *v72; // x20
  float y; // s9
  float v74; // s0
  int32_t v75; // w1
  UnityEngine_GameObject_o *v76; // x0
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1199B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___, v33, v34);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v35, v36);
    sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, v37, v38);
    byte_4B1199B = 1;
  }
  memset(&v78, 0, sizeof(v78));
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v39;
  p_itemList = &this->fields.itemList;
  sub_1BCA784(&this->fields.itemList, v39);
  if ( (this->fields.eventId & 0x80000000) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
LABEL_45:
      sub_1BCAA3C(Master_object, v46);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                                           v41,
                                                                           v42,
                                                                           v43);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !EventValUpEventIdHash )
      goto LABEL_45;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
  v48 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                     (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v48 )
    goto LABEL_45;
  Master_object = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                     (EventBonusFilterMaster_o *)v48,
                                     (System_Int32_array *)Master_object,
                                     0LL);
  if ( !Master_object )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v49 = 0.0;
  v78 = v77;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    current = v78.fields._current;
    itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
    v53 = UnityEngine_Object__Instantiate_object_(
            itemPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v55 = (ServantEventBonusFilterItem_o *)v53;
    if ( !v53 )
      sub_1BCAA3C(0LL, v54);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v53, 0LL);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_1BCAA3C(0LL, v56);
    v59 = UnityEngine_GameObject__get_transform(baseObject, 0LL);
    if ( !transform )
      sub_1BCAA3C(v59, v59);
    UnityEngine_Transform__SetParent_70175492(transform, v59, 0, 0LL);
    ServantEventBonusFilterItem__Init(v55, (EventBonusFilterEntity_o *)current, this->fields.sort, v60);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v55, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v49, 0LL);
    v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v55, 0LL);
    if ( !v62 )
      sub_1BCAA3C(0LL, v63);
    UnityEngine_GameObject__SetActive(v62, 1, 0LL);
    baseSprite = v55->fields.baseSprite;
    if ( !baseSprite )
      sub_1BCAA3C(v64, v65);
    v67 = (System_Collections_Generic_List_object__o *)*p_itemList;
    v49 = (float)(v49 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_1BCAA3C(0LL, v65);
    items = v67->fields._items;
    v69 = Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__;
    ++v67->fields._version;
    if ( !items )
      sub_1BCAA3C(v67, v65);
    size = v67->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v67,
        (Il2CppObject *)v55,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
    }
    else
    {
      v71 = &items->obj.klass + size;
      v67->fields._size = size + 1;
      v71[4] = (Il2CppClass *)v55;
      sub_1BCA784(v71 + 4, v55);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_object = (EventMaster_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_45;
  v72 = (UIWidget_o *)Master_object;
  Master_object = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0LL);
  if ( !Master_object )
    goto LABEL_45;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Master_object, 0LL);
  Master_object = (EventMaster_o *)ServantEventBonusFilterController_TypeInfo;
  y = localPosition.fields.y;
  if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v46);
  if ( !v72 )
    goto LABEL_45;
  v74 = fabsf((float)(v49 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v75 = v74 == INFINITY ? 0x80000000 : (int)v74;
  UIWidget__set_height(v72, v75, 0LL);
  Master_object = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_object )
    goto LABEL_45;
  v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionY(v76, (float)-v72->fields.mHeight, 0LL);
  UIWidget__set_height(v72, v72->fields.mHeight + 12, 0LL);
}


bool __fastcall ServantEventBonusFilterController__IsChangeFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantEventBonusFilterController_o *v4; // x20
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
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_IEnumerable_TSource__o *svtEventBonusFilterDic; // x19
  System_Collections_Generic_IEnumerable_TSource__o *defaultFilterData; // x20
  ServantEventBonusFilterController___c_c *v20; // x0
  System_Func_T__TResult__o *_9__16_0; // x21
  Il2CppObject *v22; // x22
  struct ServantEventBonusFilterController___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  ServantEventBonusFilterController___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Func_T__TResult__o *_9__16_1; // x21
  Il2CppObject *v31; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  v4 = this;
  if ( (byte_4B1199D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int_____, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_int_____, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____, v7, v8);
    sub_1BCA7E0(&System_Func_KeyValuePair_int__int_____int____TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__, v11, v12);
    sub_1BCA7E0(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__, v13, v14);
    this = (ServantEventBonusFilterController_o *)sub_1BCA7E0(&ServantEventBonusFilterController___c_TypeInfo, v15, v16);
    byte_4B1199D = 1;
  }
  sort = v4->fields.sort;
  if ( !sort )
    sub_1BCAA3C(this, method);
  svtEventBonusFilterDic = (System_Collections_Generic_IEnumerable_TSource__o *)sort->fields.svtEventBonusFilterDic;
  defaultFilterData = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.defaultFilterData;
  v20 = ServantEventBonusFilterController___c_TypeInfo;
  if ( !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo, method);
    v20 = ServantEventBonusFilterController___c_TypeInfo;
  }
  _9__16_0 = (System_Func_T__TResult__o *)v20->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, method);
      v20 = ServantEventBonusFilterController___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__16_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_KeyValuePair_int__int_____int____TypeInfo,
                                              method,
                                              v2,
                                              v3);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v22,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      0LL);
    static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_1BCA784(&static_fields->__9__16_0, _9__16_0);
  }
  v24 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_2F3C944 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v28 = ServantEventBonusFilterController___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  if ( !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo, v25);
    v28 = ServantEventBonusFilterController___c_TypeInfo;
  }
  _9__16_1 = (System_Func_T__TResult__o *)v28->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v25);
      v28 = ServantEventBonusFilterController___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__16_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_KeyValuePair_int__int_____int____TypeInfo,
                                              v25,
                                              v26,
                                              v27);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v31,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      0LL);
    v32 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v32->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_1BCA784(&v32->__9__16_1, _9__16_1);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_2F3C944 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v34 = System_Linq_Enumerable__Intersect_object_(
          v29,
          v33,
          (const MethodInfo_2F367A4 *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_object_(
            v34,
            (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_int_____);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEventBonusFilterController__IsHideServant(
        UserServantEntity_o *userServantEntity,
        ListViewSort_o *sort,
        int32_t eventId,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x19
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_int__o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_int__o *v40; // x19
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x23
  UserServantEntity_o *v42; // x22
  _BOOL8 v43; // x0
  __int64 v44; // x1
  int32_t key; // w23
  System_Collections_Generic_IEnumerable_T__o *EventBonusSkillIds; // x0
  System_Collections_Generic_IEnumerable_T__o *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v51; // [xsp+30h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+58h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+60h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+68h] [xbp-48h] BYREF

  v6 = userServantEntity;
  if ( (byte_4B1199F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBonusFilterMaster___, sort, *(_QWORD *)&eventId);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_int___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v29, v30);
    userServantEntity = (UserServantEntity_o *)sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v31, v32);
    byte_4B1199F = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  memset(&v51, 0, sizeof(v51));
  if ( !eventId )
    return 0;
  if ( !v6 )
    goto LABEL_26;
  UserServantEntity__getPassiveSkillInfo(v6, &idList, &titleList, &explanationList, -1, 0LL, 0LL);
  if ( !idList )
    return 0;
  v36 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v33,
                                                    v34,
                                                    v35);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v40 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v37,
                                                    v38,
                                                    v39);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_26;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_26;
  v42 = userServantEntity;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v50,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v43 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v51,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v43 )
      break;
    key = (int32_t)v51.fields._current.fields.key;
    if ( eventId < 1 || LODWORD(v51.fields._current.fields.key) == eventId )
    {
      if ( !v42 )
        sub_1BCAA3C(v43, v44);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v42,
                                                                            (int32_t)v51.fields._current.fields.key,
                                                                            (System_Int32_array *)v51.fields._current.fields.value,
                                                                            0LL);
      if ( !v36 )
        sub_1BCAA3C(EventBonusSkillIds, EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v36,
        EventBonusSkillIds,
        (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
      v47 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v42,
                                                             key,
                                                             idList,
                                                             0LL);
      if ( !v40 )
        sub_1BCAA3C(v47, v47);
      System_Collections_Generic_List_int___AddRange(
        v40,
        v47,
        (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v51,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v40 )
LABEL_26:
    sub_1BCAA3C(userServantEntity, sort);
  if ( v40->fields._size > 0 )
  {
    v48 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v40,
            (System_Collections_Generic_IEnumerable_TSource__o *)v36,
            (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v48,
             (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___) >= v40->fields._size;
  }
  return 0;
}


void __fastcall ServantEventBonusFilterController__RefreshButtonState(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11998 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v8, v9);
    byte_4B11998 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BCAA3C(0LL, v11);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v12.fields._current, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetDefaultFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  System_Collections_Generic_Dictionary_int__object__o *v25; // x21
  System_Collections_Generic_Dictionary_int__object__o **p_defaultFilterData; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_HashSet_int__o *v30; // x21
  __int64 v31; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppClass *klass; // x8
  int32_t name; // w22
  __int64 v37; // x1
  ListViewSort_o *sort; // x0
  __int64 v39; // x1
  System_Int32_array *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1199C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v23, v24);
    byte_4B1199C = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v25,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v25;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.defaultFilterData;
  sub_1BCA784(&this->fields.defaultFilterData, v25);
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, v31);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v33 )
      break;
    if ( !v42.fields._current )
      sub_1BCAA3C(v33, v34);
    klass = v42.fields._current[5].klass;
    if ( !klass )
      sub_1BCAA3C(v33, v34);
    if ( !v30 )
      sub_1BCAA3C(v33, v34);
    name = (int32_t)klass->_1.name;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v30,
            name,
            (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v30,
        name,
        (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_1BCAA3C(0LL, v37);
      SvtEventBonusFilterInt = ListViewSort__GetSvtEventBonusFilterInt(sort, name, 0LL);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_1BCAA3C(0LL, v39);
        System_Collections_Generic_Dictionary_int__object___Add(
          *p_defaultFilterData,
          name,
          &SvtEventBonusFilterInt->obj,
          (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEventBonusFilterController__SetEnableFilterButton(
        ServantEventBonusFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1199E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__,
      isEnable,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v9, v10);
    byte_4B1199E = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)klass, i, 0LL) )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v13 )
      break;
    if ( !v16.fields._current )
      sub_1BCAA3C(v13, v14);
    klass = v16.fields._current[4].klass;
    if ( !klass )
      sub_1BCAA3C(0LL, v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetupLabel(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *titleLabel; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  UILabel_o *explanationLabel; // x19

  if ( (byte_4B1199A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_11938/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_11936/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, v6, v7);
    byte_4B1199A = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11938/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v9, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11936/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0LL),
        !explanationLabel) )
  {
    sub_1BCAA3C(v9, v10);
  }
  UILabel__set_text(explanationLabel, v9, 0LL);
}


void __fastcall ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B119A2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantEventBonusFilterController___c_TypeInfo, v1, v2);
    byte_4B119A2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantEventBonusFilterController___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantEventBonusFilterController___c_TypeInfo->static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v4;
  sub_1BCA784(ServantEventBonusFilterController___c_TypeInfo->static_fields, v4);
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
  if ( (byte_4B119A3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__,
      *(_QWORD *)&pair.fields.key,
      pair.fields.value);
    byte_4B119A3 = 1;
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
  if ( (byte_4B119A4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__,
      *(_QWORD *)&pair.fields.key,
      pair.fields.value);
    byte_4B119A4 = 1;
  }
  return value;
}