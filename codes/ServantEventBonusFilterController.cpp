void __fastcall ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421751D & 1) == 0 )
  {
    sub_B0D8A4(&ServantEventBonusFilterController_TypeInfo, v1);
    byte_421751D = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void __fastcall ServantEventBonusFilterController___ctor(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421751C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    byte_421751C = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  sub_B0D840(
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

  if ( (byte_4217515 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_4217515 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemList; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x21
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  EventBonusFilterMaster_o *v33; // x22
  float v34; // s8
  Il2CppObject *current; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *itemPrefab; // x21
  UnityEngine_Component_o *v37; // x0
  ServantEventBonusFilterItem_o *v38; // x21
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v41; // x0
  const MethodInfo *v42; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v44; // x0
  __int64 v45; // x0
  struct UISprite_o *baseSprite; // x8
  UIWidget_o *v47; // x20
  float y; // s9
  float v49; // s0
  double v50; // d0
  UnityEngine_GameObject_o *v51; // x0
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217517 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v12);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo, v17);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&ServantEventBonusFilterController_TypeInfo, v20);
    byte_4217517 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v21;
  p_itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( (this->fields.eventId & 0x80000000) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
LABEL_45:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_WarQuestSelectionMaster, 0, 0LL);
  }
  else
  {
    EventValUpEventIdHash = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                                           v29,
                                                                           v30);
    System_Collections_Generic_HashSet_int____ctor(
      EventValUpEventIdHash,
      (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
    if ( !EventValUpEventIdHash )
      goto LABEL_45;
    System_Collections_Generic_HashSet_int___Add(
      EventValUpEventIdHash,
      this->fields.eventId,
      (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v33 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_WarQuestSelectionMaster = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                                      (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v33 )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                      v33,
                                                      (System_Int32_array *)Master_WarQuestSelectionMaster,
                                                      0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v52,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v53 = v52;
  v34 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v53,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    current = v53.fields.current;
    itemPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.itemPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v37 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       itemPrefab,
                                       (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v38 = (ServantEventBonusFilterItem_o *)v37;
    if ( !v37 )
      sub_B0D97C(0LL);
    transform = UnityEngine_Component__get_transform(v37, 0LL);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_B0D97C(0LL);
    v41 = UnityEngine_GameObject__get_transform(baseObject, 0LL);
    if ( !transform )
      sub_B0D97C(v41);
    UnityEngine_Transform__SetParent_35056148(transform, v41, 0, 0LL);
    ServantEventBonusFilterItem__Init(v38, (EventBonusFilterEntity_o *)current, this->fields.sort, v42);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v34, 0LL);
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0LL);
    if ( !v44 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v44, 1, 0LL);
    baseSprite = v38->fields.baseSprite;
    if ( !baseSprite )
      sub_B0D97C(v45);
    v34 = (float)(v34 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *p_itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v53,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Master_WarQuestSelectionMaster = (EventMaster_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_45;
  v47 = (UIWidget_o *)Master_WarQuestSelectionMaster;
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
  if ( !v47 )
    goto LABEL_45;
  v49 = fabsf((float)(v34 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v50 = v49 == INFINITY ? -v49 : v49;
  UIWidget__set_height(v47, (int)v50, 0LL);
  Master_WarQuestSelectionMaster = (EventMaster_o *)this->fields.bottomLineSprite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  GameObjectExtensions__SetLocalPositionY(v51, (float)-v47->fields.mHeight, 0LL);
  UIWidget__set_height(v47, v47->fields.mHeight + 12, 0LL);
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
  if ( (byte_4217519 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v10);
    this = (ServantEventBonusFilterController_o *)sub_B0D8A4(
                                                    &Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__,
                                                    v11);
    byte_4217519 = 1;
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
                                                  (const MethodInfo_2E90024 *)Method_System_Collections_Generic_Dictionary_int__int____get_Count__);
  if ( !svtEventBonusFilterDic )
    goto LABEL_21;
  if ( (_DWORD)this != System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                         svtEventBonusFilterDic,
                         (const MethodInfo_2E90024 *)Method_System_Collections_Generic_Dictionary_int__int____get_Count__) )
  {
    LOBYTE(v19) = 1;
    return v19;
  }
  this = (ServantEventBonusFilterController_o *)v2->fields.defaultFilterData;
  if ( !this )
LABEL_21:
    sub_B0D97C(this);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v22,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__) )
  {
    key = (int32_t)v22.fields.current.fields.key;
    value = v22.fields.current.fields.value;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)svtEventBonusFilterDic,
           (int32_t)v22.fields.current.fields.key,
           (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               svtEventBonusFilterDic,
               key,
               (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
      if ( Item )
      {
        if ( !value )
          sub_B0D97C(Item);
        if ( LODWORD(value[1].monitor) == LODWORD(Item->fields._EvalValueWarsituation_k__BackingField)
          && System_Linq_Enumerable__SequenceEqual_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)value,
               (System_Collections_Generic_IEnumerable_TSource__o *)Item,
               (const MethodInfo_1B53798 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
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
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  return v17 & ((unsigned int)(v18 + 1) >> 2);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x24
  EventBonusFilterMaster_o *v28; // x23
  _BOOL8 v29; // x0
  System_Collections_Generic_IEnumerable_T__o *EventBonusSkillIds; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Func_int__bool__o *v33; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+30h] [xbp-70h] BYREF
  System_String_array *explanationList; // [xsp+58h] [xbp-48h] BYREF
  System_String_array *titleList; // [xsp+68h] [xbp-38h] BYREF

  if ( (byte_421751B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBonusFilterMaster___, sort);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int____67988208, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v12);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v13);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B0D8A4(&Method_ServantEventBonusFilterController___c__DisplayClass18_0__IsHideServant_b__0__, v20);
    sub_B0D8A4(&ServantEventBonusFilterController___c__DisplayClass18_0_TypeInfo, v21);
    byte_421751B = 1;
  }
  titleList = 0LL;
  explanationList = 0LL;
  memset(&v36, 0, sizeof(v36));
  v22 = (ServantEventBonusFilterController___c__DisplayClass18_0_o *)sub_B0D974(
                                                                       ServantEventBonusFilterController___c__DisplayClass18_0_TypeInfo,
                                                                       sort,
                                                                       *(_QWORD *)&eventId);
  ServantEventBonusFilterController___c__DisplayClass18_0___ctor(v22, 0LL);
  if ( !eventId )
    return 0;
  v25 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v23, v24);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_24;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_24;
  v28 = (EventBonusFilterMaster_o *)Master_WarQuestSelectionMaster;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)svtEventBonusFilterDic,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v29 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v36,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    if ( !v29 )
      break;
    if ( eventId < 1 || LODWORD(v36.fields.current.fields.key) == eventId )
    {
      if ( !v28 )
        sub_B0D97C(v29);
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            v28,
                                                                            (int32_t)v36.fields.current.fields.key,
                                                                            (System_Int32_array *)v36.fields.current.fields.value,
                                                                            0LL);
      if ( !v25 )
        sub_B0D97C(EventBonusSkillIds);
      System_Collections_Generic_List_int___AddRange(
        v25,
        EventBonusSkillIds,
        (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v36,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v22 || !userServantEntity )
LABEL_24:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  UserServantEntity__getPassiveSkillInfo(
    userServantEntity,
    &v22->fields.skillIdList,
    &titleList,
    &explanationList,
    -1,
    0LL);
  if ( !v22->fields.skillIdList )
    return 0;
  v33 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v31, v32);
  System_Func_int__bool____ctor(
    v33,
    (Il2CppObject *)v22,
    Method_ServantEventBonusFilterController___c__DisplayClass18_0__IsHideServant_b__0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  return System_Linq_Enumerable__Count_int__28606324(
           (System_Collections_Generic_IEnumerable_TSource__o *)v25,
           (System_Func_TSource__bool__o *)v33,
           (const MethodInfo_1B47F74 *)Method_System_Linq_Enumerable_Count_int____67988208) != 0;
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

  if ( (byte_4217514 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_4217514 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v14; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_defaultFilterData; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_HashSet_int__o *v24; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _BOOL8 v26; // x0
  _DWORD *monitor; // x8
  int32_t v28; // w22
  ListViewSort_o *sort; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4217518 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v11);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v13);
    byte_4217518 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v14 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   method,
                                                                                                   v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v14,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v14;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.defaultFilterData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v26 )
      break;
    if ( !v32.fields.current )
      sub_B0D97C(v26);
    monitor = v32.fields.current[4].monitor;
    if ( !monitor )
      sub_B0D97C(v26);
    if ( !v24 )
      sub_B0D97C(v26);
    v28 = monitor[4];
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v24,
            v28,
            (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v24,
        v28,
        (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_B0D97C(0LL);
      SvtEventBonusFilterInt = (WarBoardEvalValueSquare_EvalValueSquare_o *)ListViewSort__GetSvtEventBonusFilterInt(
                                                                              sort,
                                                                              v28,
                                                                              0LL);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_B0D97C(0LL);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          *p_defaultFilterData,
          v28,
          SvtEventBonusFilterInt,
          (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  UICommonButton_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421751A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, isEnable);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v7);
    byte_421751A = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider(monitor, i, 0LL) )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__);
    if ( !v10 )
      break;
    if ( !v12.fields.current )
      sub_B0D97C(v10);
    monitor = (UICommonButton_o *)v12.fields.current[3].monitor;
    if ( !monitor )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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

  if ( (byte_4217516 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_11941/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, v3);
    sub_B0D8A4(&StringLiteral_11939/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, v4);
    byte_4217516 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11941/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11939/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_EXPLANATION"*/, 0LL),
        !explanationLabel) )
  {
    sub_B0D97C(v6);
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
  if ( (byte_421222C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x);
    byte_421222C = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.skillIdList,
           x,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
}