void __fastcall ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  if ( (byte_42B2ED1 & 1) == 0 )
  {
    sub_B52984(&ServantEventBonusFilterController_TypeInfo);
    byte_42B2ED1 = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void __fastcall ServantEventBonusFilterController___ctor(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B2ED0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    byte_42B2ED0 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEventBonusFilterController__Init(
        ServantEventBonusFilterController_o *this,
        ListViewSort_o *sortParam,
        int32_t targetEventId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  this->fields.sort = sortParam;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)sortParam,
    *(System_String_array ***)&targetEventId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventId = targetEventId;
  ServantEventBonusFilterController__SetupLabel(this, v10);
  ServantEventBonusFilterController__InitItems(this, v11);
  ServantEventBonusFilterController__SetDefaultFilterData(this, v12);
}


void __fastcall ServantEventBonusFilterController__InitAllButton(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B2EC9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_42B2EC9 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B52A5C(0LL, v4);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v5.fields.current, v4);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__InitItems(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemList; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  EventBonusFilterMaster_o *v14; // x22
  float v15; // s8
  Il2CppObject *current; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *itemPrefab; // x21
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  ServantEventBonusFilterItem_o *v20; // x21
  __int64 v21; // x1
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v24; // x0
  const MethodInfo *v25; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 v30; // x1
  struct UISprite_o *baseSprite; // x8
  UIWidget_o *v32; // x20
  float y; // s9
  float v34; // s0
  double v35; // d0
  UnityEngine_GameObject_o *v36; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2ECB & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantEventBonusFilterController_TypeInfo);
    byte_42B2ECB = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v3;
  p_itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemList;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.itemList, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
  if ( (this->fields.eventId & 0x80000000) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
LABEL_45:
      sub_B52A5C(Master_WarQuestSelectionMaster, v13);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_WarQuestSelectionMaster, 0, 0LL);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    if ( !EventValUpEventIdHash )
      goto LABEL_45;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_WarQuestSelectionMaster = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                                      (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v14 )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                      v14,
                                                      (System_Int32_array *)Master_WarQuestSelectionMaster,
                                                      0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v38 = v37;
  v15 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    current = v38.fields.current;
    itemPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.itemPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       itemPrefab,
                                       (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v20 = (ServantEventBonusFilterItem_o *)v18;
    if ( !v18 )
      sub_B52A5C(0LL, v19);
    transform = UnityEngine_Component__get_transform(v18, 0LL);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_B52A5C(0LL, v21);
    v24 = UnityEngine_GameObject__get_transform(baseObject, 0LL);
    if ( !transform )
      sub_B52A5C(v24, v24);
    UnityEngine_Transform__SetParent_35737932(transform, v24, 0, 0LL);
    ServantEventBonusFilterItem__Init(v20, (EventBonusFilterEntity_o *)current, this->fields.sort, v25);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v15, 0LL);
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
    if ( !v27 )
      sub_B52A5C(0LL, v28);
    UnityEngine_GameObject__SetActive(v27, 1, 0LL);
    baseSprite = v20->fields.baseSprite;
    if ( !baseSprite )
      sub_B52A5C(v29, v30);
    v15 = (float)(v15 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_B52A5C(0LL, v30);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *p_itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_WarQuestSelectionMaster = (EventMaster_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_45;
  v32 = (UIWidget_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  localPosition = UnityEngine_Transform__get_localPosition(
                    (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                    0LL);
  y = localPosition.fields.y;
  Master_WarQuestSelectionMaster = (EventMaster_o *)ServantEventBonusFilterController_TypeInfo;
  if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  }
  if ( !v32 )
    goto LABEL_45;
  v34 = fabsf((float)(v15 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v35 = v34 == INFINITY ? -v34 : v34;
  UIWidget__set_height(v32, (int)v35, 0LL);
  Master_WarQuestSelectionMaster = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  GameObjectExtensions__SetLocalPositionY(v36, (float)-v32->fields.mHeight, 0LL);
  UIWidget__set_height(v32, v32->fields.mHeight + 12, 0LL);
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
  struct ServantEventBonusFilterController___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__16_0; // x21
  Il2CppObject *v9; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0
  ServantEventBonusFilterController___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  struct ServantEventBonusFilterController___c_StaticFields *v20; // x9
  System_Func_T__TResult__o *_9__16_1; // x21
  Il2CppObject *v22; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  v2 = this;
  if ( (byte_42B2ECD & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_int_____);
    sub_B52984(&Method_System_Linq_Enumerable_Intersect_int_____);
    sub_B52984(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
    sub_B52984(&Method_System_Func_KeyValuePair_int__int_____int_____ctor__);
    sub_B52984(&System_Func_KeyValuePair_int__int_____int____TypeInfo);
    sub_B52984(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__);
    sub_B52984(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__);
    this = (ServantEventBonusFilterController_o *)sub_B52984(&ServantEventBonusFilterController___c_TypeInfo);
    byte_42B2ECD = 1;
  }
  sort = v2->fields.sort;
  if ( !sort )
    sub_B52A5C(this, method);
  svtEventBonusFilterDic = (System_Collections_Generic_IEnumerable_TSource__o *)sort->fields.svtEventBonusFilterDic;
  defaultFilterData = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.defaultFilterData;
  v6 = ServantEventBonusFilterController___c_TypeInfo;
  if ( (BYTE3(ServantEventBonusFilterController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo);
    v6 = ServantEventBonusFilterController___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__16_0 = (System_Func_T__TResult__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_T__TResult__o *)sub_B52A54(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v9,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      (const MethodInfo_277A020 *)Method_System_Func_KeyValuePair_int__int_____int_____ctor__);
    v10 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v10->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v10->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_1B67038 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v18 = ServantEventBonusFilterController___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( (BYTE3(ServantEventBonusFilterController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo);
    v18 = ServantEventBonusFilterController___c_TypeInfo;
  }
  v20 = v18->static_fields;
  _9__16_1 = (System_Func_T__TResult__o *)v20->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v20 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__16_1 = (System_Func_T__TResult__o *)sub_B52A54(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v22,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      (const MethodInfo_277A020 *)Method_System_Func_KeyValuePair_int__int_____int_____ctor__);
    v23 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v23->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v23->__9__16_1,
      (System_Int32_array **)_9__16_1,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_1B67038 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v31 = System_Linq_Enumerable__Intersect_string_(
          v19,
          v30,
          (const MethodInfo_1B63EE0 *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
            v31,
            (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_int_____);
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
  System_String_array *explanationList; // [xsp+60h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+68h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+78h] [xbp-38h] BYREF

  v6 = userServantEntity;
  if ( (byte_42B2ECF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    userServantEntity = (UserServantEntity_o *)sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B2ECF = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  memset(&v19, 0, sizeof(v19));
  if ( !eventId )
    return 0;
  if ( !v6 )
    goto LABEL_27;
  UserServantEntity__getPassiveSkillInfo(v6, &idList, &titleList, &explanationList, -1, 0LL);
  if ( !idList )
    return 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_27;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_27;
  v10 = userServantEntity;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)svtEventBonusFilterDic,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v19,
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v11 )
      break;
    key = (int32_t)v19.fields.current.fields.key;
    if ( eventId < 1 || LODWORD(v19.fields.current.fields.key) == eventId )
    {
      if ( !v10 )
        sub_B52A5C(v11, v12);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v10,
                                                                            (int32_t)v19.fields.current.fields.key,
                                                                            (System_Int32_array *)v19.fields.current.fields.value,
                                                                            0LL);
      if ( !v7 )
        sub_B52A5C(EventBonusSkillIds, EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v7,
        EventBonusSkillIds,
        (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
      v15 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v10,
                                                             key,
                                                             idList,
                                                             0LL);
      if ( !v8 )
        sub_B52A5C(v15, v15);
      System_Collections_Generic_List_int___AddRange(
        v8,
        v15,
        (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v19,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v8 )
LABEL_27:
    sub_B52A5C(userServantEntity, sort);
  if ( v8->fields._size >= 1 )
  {
    v16 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v8,
            (System_Collections_Generic_IEnumerable_TSource__o *)v7,
            (const MethodInfo_1B63E74 *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v16,
             (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___) >= v8->fields._size;
  }
  return 0;
}


void __fastcall ServantEventBonusFilterController__RefreshButtonState(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B2EC8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_42B2EC8 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B52A5C(0LL, v4);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v5.fields.current, v4);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetDefaultFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_defaultFilterData; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_HashSet_int__o *v11; // x21
  __int64 v12; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  _DWORD *monitor; // x8
  int32_t v17; // w22
  __int64 v18; // x1
  ListViewSort_o *sort; // x0
  __int64 v20; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B2ECC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_42B2ECC = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.defaultFilterData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v14 )
      break;
    if ( !v23.fields.current )
      sub_B52A5C(v14, v15);
    monitor = v23.fields.current[4].monitor;
    if ( !monitor )
      sub_B52A5C(v14, v15);
    if ( !v11 )
      sub_B52A5C(v14, v15);
    v17 = monitor[4];
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v11,
            v17,
            (const MethodInfo_24D9CCC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v11,
        v17,
        (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_B52A5C(0LL, v18);
      SvtEventBonusFilterInt = (WarBoardEvalValueSquare_EvalValueSquare_o *)ListViewSort__GetSvtEventBonusFilterInt(
                                                                              sort,
                                                                              v17,
                                                                              0LL);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_B52A5C(0LL, v20);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          *p_defaultFilterData,
          v17,
          SvtEventBonusFilterInt,
          (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  UICommonButton_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B2ECE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
    byte_42B2ECE = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, isEnable);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider(monitor, i, 0LL) )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields.current )
      sub_B52A5C(v7, v8);
    monitor = (UICommonButton_o *)v10.fields.current[3].monitor;
    if ( !monitor )
      sub_B52A5C(0LL, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetupLabel(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *explanationLabel; // x19

  if ( (byte_42B2ECA & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11996/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/);
    sub_B52984(&StringLiteral_11994/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/);
    byte_42B2ECA = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0LL),
        !explanationLabel) )
  {
    sub_B52A5C(v4, v5);
  }
  UILabel__set_text(explanationLabel, v4, 0LL);
}


void __fastcall ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantEventBonusFilterController___c_StaticFields *static_fields; // x0

  if ( (byte_42AD33D & 1) == 0 )
  {
    sub_B52984(&ServantEventBonusFilterController___c_TypeInfo);
    byte_42AD33D = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantEventBonusFilterController___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v1;
  sub_B52920(static_fields);
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
  if ( (byte_42AD33E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_42AD33E = 1;
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
  if ( (byte_42AD33F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_42AD33F = 1;
  }
  return value;
}