void __fastcall ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418AB51 & 1) == 0 )
  {
    sub_B2C35C(&ServantEventBonusFilterController_TypeInfo, v1);
    byte_418AB51 = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void __fastcall ServantEventBonusFilterController___ctor(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418AB50 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v3);
    byte_418AB50 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AB49 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_418AB49 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B2C434(0LL, v7);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemList; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v26; // x1
  System_Int32_array *EventValUpEventIdList; // x21
  float v28; // s8
  Il2CppObject *current; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *itemPrefab; // x21
  UnityEngine_Component_o *v31; // x0
  __int64 v32; // x1
  ServantEventBonusFilterItem_o *v33; // x21
  __int64 v34; // x1
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v37; // x0
  const MethodInfo *v38; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x0
  __int64 v43; // x1
  struct UISprite_o *baseSprite; // x8
  UIWidget_o *v45; // x20
  float y; // s9
  float v47; // s0
  double v48; // d0
  UnityEngine_GameObject_o *v49; // x0
  __int64 v50; // x0
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418AB4B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v8);
    sub_B2C35C(&int___TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&ServantEventBonusFilterController_TypeInfo, v16);
    byte_418AB4B = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v17;
  p_itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( (this->fields.eventId & 0x80000000) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
LABEL_46:
      sub_B2C434(Master_WarQuestSelectionMaster, v26);
    EventValUpEventIdList = EventMaster__GetEventValUpEventIdList(Master_WarQuestSelectionMaster, 0, 0LL);
  }
  else
  {
    Master_WarQuestSelectionMaster = (EventMaster_o *)sub_B2C374(int___TypeInfo, 1LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_46;
    EventValUpEventIdList = (System_Int32_array *)Master_WarQuestSelectionMaster;
    if ( !LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
    {
      v50 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v50, 0LL);
    }
    LODWORD(Master_WarQuestSelectionMaster->fields.list) = this->fields.eventId;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  Master_WarQuestSelectionMaster = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                      (EventBonusFilterMaster_o *)Master_WarQuestSelectionMaster,
                                                      EventValUpEventIdList,
                                                      0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v52 = v51;
  v28 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    current = v52.fields.current;
    itemPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.itemPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v31 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       itemPrefab,
                                       (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v33 = (ServantEventBonusFilterItem_o *)v31;
    if ( !v31 )
      sub_B2C434(0LL, v32);
    transform = UnityEngine_Component__get_transform(v31, 0LL);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_B2C434(0LL, v34);
    v37 = UnityEngine_GameObject__get_transform(baseObject, 0LL);
    if ( !transform )
      sub_B2C434(v37, v37);
    UnityEngine_Transform__SetParent_35435768(transform, v37, 0, 0LL);
    ServantEventBonusFilterItem__Init(v33, (EventBonusFilterEntity_o *)current, this->fields.sort, v38);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v28, 0LL);
    v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33, 0LL);
    if ( !v40 )
      sub_B2C434(0LL, v41);
    UnityEngine_GameObject__SetActive(v40, 1, 0LL);
    baseSprite = v33->fields.baseSprite;
    if ( !baseSprite )
      sub_B2C434(v42, v43);
    v28 = (float)(v28 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_B2C434(0LL, v43);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *p_itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_WarQuestSelectionMaster = (EventMaster_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_46;
  v45 = (UIWidget_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (EventMaster_o *)UnityEngine_GameObject__get_transform(this->fields.baseObject, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
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
  if ( !v45 )
    goto LABEL_46;
  v47 = fabsf((float)(v28 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v48 = v47 == INFINITY ? -v47 : v47;
  UIWidget__set_height(v45, (int)v48, 0LL);
  Master_WarQuestSelectionMaster = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_46;
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  GameObjectExtensions__SetLocalPositionY(v49, (float)-v45->fields.mHeight, 0LL);
  UIWidget__set_height(v45, v45->fields.mHeight + 12, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtEventBonusFilterDic; // x19
  int32_t key; // w21
  Il2CppObject *value; // x20
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int v17; // w19
  int v18; // w20
  _BOOL4 v19; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+30h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_418AB4D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_SequenceEqual_int___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v10);
    this = (ServantEventBonusFilterController_o *)sub_B2C35C(
                                                    &Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__,
                                                    v11);
    byte_418AB4D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  sort = v2->fields.sort;
  if ( !sort )
    goto LABEL_21;
  this = (ServantEventBonusFilterController_o *)v2->fields.defaultFilterData;
  if ( !this )
    goto LABEL_21;
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sort->fields.svtEventBonusFilterDic;
  this = (ServantEventBonusFilterController_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                  (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__int____get_Count__);
  if ( !svtEventBonusFilterDic )
    goto LABEL_21;
  if ( (_DWORD)this != System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                         svtEventBonusFilterDic,
                         (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__int____get_Count__) )
  {
    LOBYTE(v19) = 1;
    return v19;
  }
  this = (ServantEventBonusFilterController_o *)v2->fields.defaultFilterData;
  if ( !this )
LABEL_21:
    sub_B2C434(this, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v22,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__) )
  {
    key = (int32_t)v22.fields.current.fields.key;
    value = v22.fields.current.fields.value;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)svtEventBonusFilterDic,
           (int32_t)v22.fields.current.fields.key,
           (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               svtEventBonusFilterDic,
               key,
               (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
      if ( Item )
      {
        if ( !value )
          sub_B2C434(Item, Item);
        if ( LODWORD(value[1].monitor) == LODWORD(Item->fields._EvalValueWarsituation_k__BackingField)
          && System_Linq_Enumerable__SequenceEqual_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)value,
               (System_Collections_Generic_IEnumerable_TSource__o *)Item,
               (const MethodInfo_1A984CC *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
        {
          continue;
        }
      }
    }
    v17 = 1;
    v18 = 3;
    goto LABEL_18;
  }
  v17 = 0;
  v18 = 1;
LABEL_18:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v22,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  return v17 & ((unsigned int)(v18 + 1) >> 2);
}


bool __fastcall ServantEventBonusFilterController__IsHideServant(
        UserServantEntity_o *userServantEntity,
        ListViewSort_o *sort,
        int32_t eventId,
        const MethodInfo *method)
{
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
  ServantEventBonusFilterController___c__DisplayClass18_0_o *v22; // x20
  System_Collections_Generic_List_int__o *v23; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x24
  EventBonusFilterMaster_o *v27; // x23
  _BOOL8 v28; // x0
  System_Collections_Generic_IEnumerable_T__o *EventBonusSkillIds; // x0
  System_Func_int__bool__o *v30; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+30h] [xbp-70h] BYREF
  System_String_array *explanationList; // [xsp+58h] [xbp-48h] BYREF
  System_String_array *titleList; // [xsp+68h] [xbp-38h] BYREF

  if ( (byte_418AB4F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventBonusFilterMaster___, sort);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int____67413720, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v12);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v13);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B2C35C(&Method_ServantEventBonusFilterController___c__DisplayClass18_0__IsHideServant_b__0__, v20);
    sub_B2C35C(&ServantEventBonusFilterController___c__DisplayClass18_0_TypeInfo, v21);
    byte_418AB4F = 1;
  }
  titleList = 0LL;
  explanationList = 0LL;
  memset(&v33, 0, sizeof(v33));
  v22 = (ServantEventBonusFilterController___c__DisplayClass18_0_o *)sub_B2C42C(ServantEventBonusFilterController___c__DisplayClass18_0_TypeInfo);
  ServantEventBonusFilterController___c__DisplayClass18_0___ctor(v22, 0LL);
  if ( !eventId )
    return 0;
  v23 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_24;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_24;
  v27 = (EventBonusFilterMaster_o *)Master_WarQuestSelectionMaster;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v32,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)svtEventBonusFilterDic,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v28 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v33,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v28 )
      break;
    if ( eventId < 1 || LODWORD(v33.fields.current.fields.key) == eventId )
    {
      if ( !v27 )
        sub_B2C434(v28, LODWORD(v33.fields.current.fields.key));
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            v27,
                                                                            (int32_t)v33.fields.current.fields.key,
                                                                            (System_Int32_array *)v33.fields.current.fields.value,
                                                                            0LL);
      if ( !v23 )
        sub_B2C434(EventBonusSkillIds, EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v23,
        EventBonusSkillIds,
        (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v33,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v22 || !userServantEntity )
LABEL_24:
    sub_B2C434(Master_WarQuestSelectionMaster, v25);
  UserServantEntity__getPassiveSkillInfo(
    userServantEntity,
    &v22->fields.skillIdList,
    &titleList,
    &explanationList,
    -1,
    0LL);
  if ( !v22->fields.skillIdList )
    return 0;
  v30 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v30,
    (Il2CppObject *)v22,
    Method_ServantEventBonusFilterController___c__DisplayClass18_0__IsHideServant_b__0__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  return System_Linq_Enumerable__Count_int__27839656(
           (System_Collections_Generic_IEnumerable_TSource__o *)v23,
           (System_Func_TSource__bool__o *)v30,
           (const MethodInfo_1A8CCA8 *)Method_System_Linq_Enumerable_Count_int____67413720) != 0;
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
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AB48 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_418AB48 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B2C434(0LL, v7);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v13; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_defaultFilterData; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_HashSet_int__o *v21; // x21
  __int64 v22; // x1
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  _DWORD *monitor; // x8
  int32_t v27; // w22
  __int64 v28; // x1
  ListViewSort_o *sort; // x0
  __int64 v30; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418AB4C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v10);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v12);
    byte_418AB4C = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v13 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v13,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v13;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.defaultFilterData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v21,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, v22);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v24 )
      break;
    if ( !v33.fields.current )
      sub_B2C434(v24, v25);
    monitor = v33.fields.current[4].monitor;
    if ( !monitor )
      sub_B2C434(v24, v25);
    if ( !v21 )
      sub_B2C434(v24, v25);
    v27 = monitor[4];
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v21,
            v27,
            (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v21,
        v27,
        (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_B2C434(0LL, v28);
      SvtEventBonusFilterInt = (WarBoardEvalValueSquare_EvalValueSquare_o *)ListViewSort__GetSvtEventBonusFilterInt(
                                                                              sort,
                                                                              v27,
                                                                              0LL);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_B2C434(0LL, v30);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          *p_defaultFilterData,
          v27,
          SvtEventBonusFilterInt,
          (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  UICommonButton_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418AB4E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, isEnable);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v7);
    byte_418AB4E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, isEnable);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider(monitor, i, 0LL) )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v10 )
      break;
    if ( !v13.fields.current )
      sub_B2C434(v10, v11);
    monitor = (UICommonButton_o *)v13.fields.current[3].monitor;
    if ( !monitor )
      sub_B2C434(0LL, v11);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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

  if ( (byte_418AB4A & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_11904/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, v3);
    sub_B2C35C(&StringLiteral_11902/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, v4);
    byte_418AB4A = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11904/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11902/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0LL),
        !explanationLabel) )
  {
    sub_B2C434(v6, v7);
  }
  UILabel__set_text(explanationLabel, v6, 0LL);
}


void __fastcall ServantEventBonusFilterController___c__DisplayClass18_0___ctor(
        ServantEventBonusFilterController___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEventBonusFilterController___c__DisplayClass18_0___IsHideServant_b__0(
        ServantEventBonusFilterController___c__DisplayClass18_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_41853E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x);
    byte_41853E5 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.skillIdList,
           x,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}