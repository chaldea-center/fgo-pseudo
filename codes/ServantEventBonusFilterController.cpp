void __fastcall ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB998 & 1) == 0 )
  {
    sub_B5D5C4(&ServantEventBonusFilterController_TypeInfo, v1, v2, v3);
    byte_42EB998 = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void __fastcall ServantEventBonusFilterController___ctor(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB997 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5, v6, v7);
    byte_42EB997 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB990 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v11, v12, v13);
    byte_42EB990 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B5D69C(0LL, v15);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v16.fields.current, v15);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__InitItems(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemList; // x20
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v66; // x1
  EventBonusFilterMaster_o *v67; // x22
  float v68; // s8
  Il2CppObject *current; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *itemPrefab; // x21
  UnityEngine_Component_o *v71; // x0
  __int64 v72; // x1
  ServantEventBonusFilterItem_o *v73; // x21
  __int64 v74; // x1
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v77; // x0
  const MethodInfo *v78; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v80; // x0
  __int64 v81; // x1
  __int64 v82; // x0
  __int64 v83; // x1
  struct UISprite_o *baseSprite; // x8
  UIWidget_o *v85; // x20
  float y; // s9
  float v87; // s0
  double v88; // d0
  UnityEngine_GameObject_o *v89; // x0
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB992 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___, v47, v48, v49);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&ServantEventBonusFilterController_TypeInfo, v53, v54, v55);
    byte_42EB992 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v56;
  p_itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( (this->fields.eventId & 0x80000000) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
LABEL_45:
      sub_B5D69C(Master_WarQuestSelectionMaster, v66);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_WarQuestSelectionMaster, 0, 0LL);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
    if ( !EventValUpEventIdHash )
      goto LABEL_45;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v67 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_WarQuestSelectionMaster = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                                      (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v67 )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                      v67,
                                                      (System_Int32_array *)Master_WarQuestSelectionMaster,
                                                      0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v90,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v91 = v90;
  v68 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v91,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    current = v91.fields.current;
    itemPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.itemPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v71 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       itemPrefab,
                                       (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v73 = (ServantEventBonusFilterItem_o *)v71;
    if ( !v71 )
      sub_B5D69C(0LL, v72);
    transform = UnityEngine_Component__get_transform(v71, 0LL);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_B5D69C(0LL, v74);
    v77 = UnityEngine_GameObject__get_transform(baseObject, 0LL);
    if ( !transform )
      sub_B5D69C(v77, v77);
    UnityEngine_Transform__SetParent_35741212(transform, v77, 0, 0LL);
    ServantEventBonusFilterItem__Init(v73, (EventBonusFilterEntity_o *)current, this->fields.sort, v78);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v73, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v68, 0LL);
    v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v73, 0LL);
    if ( !v80 )
      sub_B5D69C(0LL, v81);
    UnityEngine_GameObject__SetActive(v80, 1, 0LL);
    baseSprite = v73->fields.baseSprite;
    if ( !baseSprite )
      sub_B5D69C(v82, v83);
    v68 = (float)(v68 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_B5D69C(0LL, v83);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *p_itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v91,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_WarQuestSelectionMaster = (EventMaster_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_45;
  v85 = (UIWidget_o *)Master_WarQuestSelectionMaster;
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
  if ( !v85 )
    goto LABEL_45;
  v87 = fabsf((float)(v68 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v88 = v87 == INFINITY ? -v87 : v87;
  UIWidget__set_height(v85, (int)v88, 0LL);
  Master_WarQuestSelectionMaster = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  GameObjectExtensions__SetLocalPositionY(v89, (float)-v85->fields.mHeight, 0LL);
  UIWidget__set_height(v85, v85->fields.mHeight + 12, 0LL);
}


bool __fastcall ServantEventBonusFilterController__IsChangeFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantEventBonusFilterController_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_IEnumerable_TSource__o *svtEventBonusFilterDic; // x19
  System_Collections_Generic_IEnumerable_TSource__o *defaultFilterData; // x20
  ServantEventBonusFilterController___c_c *v29; // x0
  struct ServantEventBonusFilterController___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__16_0; // x21
  Il2CppObject *v32; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v40; // x0
  ServantEventBonusFilterController___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  struct ServantEventBonusFilterController___c_StaticFields *v43; // x9
  System_Func_T__TResult__o *_9__16_1; // x21
  Il2CppObject *v45; // x22
  struct ServantEventBonusFilterController___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0

  v4 = this;
  if ( (byte_42EB994 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int_____, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Intersect_int_____, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_int__int_____int_____ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_KeyValuePair_int__int_____int____TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__, v17, v18, v19);
    sub_B5D5C4(&Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__, v20, v21, v22);
    this = (ServantEventBonusFilterController_o *)sub_B5D5C4(
                                                    &ServantEventBonusFilterController___c_TypeInfo,
                                                    v23,
                                                    v24,
                                                    v25);
    byte_42EB994 = 1;
  }
  sort = v4->fields.sort;
  if ( !sort )
    sub_B5D69C(this, method);
  svtEventBonusFilterDic = (System_Collections_Generic_IEnumerable_TSource__o *)sort->fields.svtEventBonusFilterDic;
  defaultFilterData = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.defaultFilterData;
  v29 = ServantEventBonusFilterController___c_TypeInfo;
  if ( (BYTE3(ServantEventBonusFilterController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo);
    v29 = ServantEventBonusFilterController___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__16_0 = (System_Func_T__TResult__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_T__TResult__o *)sub_B5D694(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_0,
      v32,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_0__,
      (const MethodInfo_27936F4 *)Method_System_Func_KeyValuePair_int__int_____int_____ctor__);
    v33 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v33->__9__16_0 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v33->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
          defaultFilterData,
          (System_Func_TSource__TResult__o *)_9__16_0,
          (const MethodInfo_1CAFFDC *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v41 = ServantEventBonusFilterController___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v40;
  if ( (BYTE3(ServantEventBonusFilterController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController___c_TypeInfo);
    v41 = ServantEventBonusFilterController___c_TypeInfo;
  }
  v43 = v41->static_fields;
  _9__16_1 = (System_Func_T__TResult__o *)v43->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v43 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__16_1 = (System_Func_T__TResult__o *)sub_B5D694(System_Func_KeyValuePair_int__int_____int____TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__16_1,
      v45,
      Method_ServantEventBonusFilterController___c__IsChangeFilterData_b__16_1__,
      (const MethodInfo_27936F4 *)Method_System_Func_KeyValuePair_int__int_____int_____ctor__);
    v46 = ServantEventBonusFilterController___c_TypeInfo->static_fields;
    v46->__9__16_1 = (struct System_Func_KeyValuePair_int__int_____int____o *)_9__16_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v46->__9__16_1,
      (System_Int32_array **)_9__16_1,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               svtEventBonusFilterDic,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_1CAFFDC *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__int_____int_____);
  v54 = System_Linq_Enumerable__Intersect_string_(
          v42,
          v53,
          (const MethodInfo_1CACDB8 *)Method_System_Linq_Enumerable_Intersect_int_____);
  return !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
            v54,
            (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_int_____);
}


bool __fastcall ServantEventBonusFilterController__IsHideServant(
        UserServantEntity_o *userServantEntity,
        ListViewSort_o *sort,
        int32_t eventId,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_Collections_Generic_List_int__o *v46; // x20
  System_Collections_Generic_List_int__o *v47; // x19
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x23
  UserServantEntity_o *v49; // x22
  _BOOL8 v50; // x0
  __int64 v51; // x1
  int32_t key; // w23
  System_Collections_Generic_IEnumerable_T__o *EventBonusSkillIds; // x0
  System_Collections_Generic_IEnumerable_T__o *v54; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+30h] [xbp-80h] BYREF
  System_String_array *explanationList; // [xsp+60h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+68h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+78h] [xbp-38h] BYREF

  v6 = userServantEntity;
  if ( (byte_42EB996 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBonusFilterMaster___, (_DWORD)sort, eventId, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Intersect_int___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v40, v41, v42);
    userServantEntity = (UserServantEntity_o *)sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v43, v44, v45);
    byte_42EB996 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  memset(&v58, 0, sizeof(v58));
  if ( !eventId )
    return 0;
  if ( !v6 )
    goto LABEL_27;
  UserServantEntity__getPassiveSkillInfo(v6, &idList, &titleList, &explanationList, -1, 0LL);
  if ( !idList )
    return 0;
  v46 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v46,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v47 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v47,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !sort )
    goto LABEL_27;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_27;
  v49 = userServantEntity;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v57,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)svtEventBonusFilterDic,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v50 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v58,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v50 )
      break;
    key = (int32_t)v58.fields.current.fields.key;
    if ( eventId < 1 || LODWORD(v58.fields.current.fields.key) == eventId )
    {
      if ( !v49 )
        sub_B5D69C(v50, v51);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            (EventBonusFilterMaster_o *)v49,
                                                                            (int32_t)v58.fields.current.fields.key,
                                                                            (System_Int32_array *)v58.fields.current.fields.value,
                                                                            0LL);
      if ( !v46 )
        sub_B5D69C(EventBonusSkillIds, EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v46,
        EventBonusSkillIds,
        (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      v54 = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                             (EventBonusFilterMaster_o *)v49,
                                                             key,
                                                             idList,
                                                             0LL);
      if ( !v47 )
        sub_B5D69C(v54, v54);
      System_Collections_Generic_List_int___AddRange(
        v47,
        v54,
        (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v58,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v47 )
LABEL_27:
    sub_B5D69C(userServantEntity, sort);
  if ( v47->fields._size >= 1 )
  {
    v55 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v47,
            (System_Collections_Generic_IEnumerable_TSource__o *)v46,
            (const MethodInfo_1CACD4C *)Method_System_Linq_Enumerable_Intersect_int___);
    return System_Linq_Enumerable__Count_int_(
             v55,
             (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___) >= v47->fields._size;
  }
  return 0;
}


void __fastcall ServantEventBonusFilterController__RefreshButtonState(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB98F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v11, v12, v13);
    byte_42EB98F = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B5D69C(0LL, v15);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v16.fields.current, v15);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetDefaultFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v35; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_defaultFilterData; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_HashSet_int__o *v43; // x21
  __int64 v44; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _BOOL8 v46; // x0
  __int64 v47; // x1
  _DWORD *monitor; // x8
  int32_t v49; // w22
  __int64 v50; // x1
  ListViewSort_o *sort; // x0
  __int64 v52; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EB993 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v32, v33, v34);
    byte_42EB993 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v35 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v35,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v35;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.defaultFilterData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v43,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, v44);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v54,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v55 = v54;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v55,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v46 )
      break;
    if ( !v55.fields.current )
      sub_B5D69C(v46, v47);
    monitor = v55.fields.current[4].monitor;
    if ( !monitor )
      sub_B5D69C(v46, v47);
    if ( !v43 )
      sub_B5D69C(v46, v47);
    v49 = monitor[4];
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v43,
            v49,
            (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v43,
        v49,
        (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_B5D69C(0LL, v50);
      SvtEventBonusFilterInt = (WarBoardEvalValueSquare_EvalValueSquare_o *)ListViewSort__GetSvtEventBonusFilterInt(
                                                                              sort,
                                                                              v49,
                                                                              0LL);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_B5D69C(0LL, v52);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          *p_defaultFilterData,
          v49,
          SvtEventBonusFilterInt,
          (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v55,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEventBonusFilterController__SetEnableFilterButton(
        ServantEventBonusFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  UICommonButton_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EB995 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__,
      isEnable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v12, v13, v14);
    byte_42EB995 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, isEnable);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider(monitor, i, 0LL) )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v17 )
      break;
    if ( !v20.fields.current )
      sub_B5D69C(v17, v18);
    monitor = (UICommonButton_o *)v20.fields.current[3].monitor;
    if ( !monitor )
      sub_B5D69C(0LL, v18);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetupLabel(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILabel_o *titleLabel; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  UILabel_o *explanationLabel; // x19

  if ( (byte_42EB991 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12053/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12051/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, v8, v9, v10);
    byte_42EB991 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12053/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v12, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12051/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0LL),
        !explanationLabel) )
  {
    sub_B5D69C(v12, v13);
  }
  UILabel__set_text(explanationLabel, v12, 0LL);
}


void __fastcall ServantEventBonusFilterController___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantEventBonusFilterController___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D55 & 1) == 0 )
  {
    sub_B5D5C4(&ServantEventBonusFilterController___c_TypeInfo, v1, v2, v3);
    byte_42E5D55 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantEventBonusFilterController___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantEventBonusFilterController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantEventBonusFilterController___c_o *)v4;
  sub_B5D560(static_fields);
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
  if ( (byte_42E5D56 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__,
      pair.fields.key,
      pair.fields.value,
      method);
    byte_42E5D56 = 1;
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
  if ( (byte_42E5D57 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__,
      pair.fields.key,
      pair.fields.value,
      method);
    byte_42E5D57 = 1;
  }
  return value;
}