void __fastcall ServantEventBonusFilterController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD08F & 1) == 0 )
  {
    sub_B16FFC(&ServantEventBonusFilterController_TypeInfo, v1);
    byte_40FD08F = 1;
  }
  ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT = 50;
}


void __fastcall ServantEventBonusFilterController___ctor(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD08E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v6);
    byte_40FD08E = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v7,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  sub_B16F98(
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

  if ( (byte_40FD087 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_40FD087 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    ServantEventBonusFilterItem__InitButton((ServantEventBonusFilterItem_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__InitItems(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemList; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x2
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  System_Int32_array *EventValUpEventIdList; // x21
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  EventBonusFilterMaster_o *v34; // x0
  System_Collections_Generic_List_EventBonusFilterEntity__o *BonusSkillFilterList; // x0
  float v36; // s8
  Il2CppObject *current; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *itemPrefab; // x21
  UnityEngine_Component_o *v39; // x0
  ServantEventBonusFilterItem_o *v40; // x21
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Transform_o *v43; // x1
  const MethodInfo *v44; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v46; // x0
  struct UISprite_o *baseSprite; // x8
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v49; // x20
  UnityEngine_Transform_o *v50; // x0
  float y; // s9
  float v52; // s0
  double v53; // d0
  UnityEngine_Component_o *bottomLineSprite; // x0
  UnityEngine_GameObject_o *v55; // x0
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD089 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v11);
    sub_B16FFC(&int___TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo, v16);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&ServantEventBonusFilterController_TypeInfo, v19);
    byte_40FD089 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantEventBonusFilterItem__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *)v20;
  p_itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( (this->fields.eventId & 0x80000000) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
LABEL_46:
      sub_B170D4();
    EventValUpEventIdList = EventMaster__GetEventValUpEventIdList(Master_WarQuestSelectionMaster, 0, 0LL);
  }
  else
  {
    v29 = sub_B17014(int___TypeInfo, 1LL, v28);
    if ( !v29 )
      goto LABEL_46;
    EventValUpEventIdList = (System_Int32_array *)v29;
    if ( !*(_DWORD *)(v29 + 24) )
    {
      sub_B17100(v29, v30, v31);
      sub_B170A0();
    }
    *(_DWORD *)(v29 + 32) = this->fields.eventId;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v34 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !v34 )
    goto LABEL_46;
  BonusSkillFilterList = EventBonusFilterMaster__GetBonusSkillFilterList(v34, EventValUpEventIdList, 0LL);
  if ( !BonusSkillFilterList )
    goto LABEL_46;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BonusSkillFilterList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
  v57 = v56;
  v36 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
  {
    current = v57.fields.current;
    itemPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.itemPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v39 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       itemPrefab,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_ServantEventBonusFilterItem___);
    v40 = (ServantEventBonusFilterItem_o *)v39;
    if ( !v39 )
      sub_B170D4();
    transform = UnityEngine_Component__get_transform(v39, 0LL);
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      sub_B170D4();
    v43 = UnityEngine_GameObject__get_transform(baseObject, 0LL);
    if ( !transform )
      sub_B170D4();
    UnityEngine_Transform__SetParent_34930292(transform, v43, 0, 0LL);
    ServantEventBonusFilterItem__Init(v40, (EventBonusFilterEntity_o *)current, this->fields.sort, v44);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v36, 0LL);
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL);
    if ( !v46 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v46, 1, 0LL);
    baseSprite = v40->fields.baseSprite;
    if ( !baseSprite )
      sub_B170D4();
    v36 = (float)(v36 - (float)baseSprite->fields.mHeight) + 2.0;
    if ( !*p_itemList )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *p_itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.baseObject )
    goto LABEL_46;
  v49 = (UIWidget_o *)Component_WebViewObject;
  v50 = UnityEngine_GameObject__get_transform(this->fields.baseObject, 0LL);
  if ( !v50 )
    goto LABEL_46;
  localPosition = UnityEngine_Transform__get_localPosition(v50, 0LL);
  y = localPosition.fields.y;
  if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  }
  if ( !v49 )
    goto LABEL_46;
  v52 = fabsf((float)(v36 + y) + (float)ServantEventBonusFilterController_TypeInfo->static_fields->ADJUST_HEIGHT);
  v53 = v52 == INFINITY ? -v52 : v52;
  UIWidget__set_height(v49, (int)v53, 0LL);
  bottomLineSprite = (UnityEngine_Component_o *)this->fields.bottomLineSprite;
  if ( !bottomLineSprite )
    goto LABEL_46;
  v55 = UnityEngine_Component__get_gameObject(bottomLineSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v55, (float)-v49->fields.mHeight, 0LL);
  UIWidget__set_height(v49, v49->fields.mHeight + 12, 0LL);
}


bool __fastcall ServantEventBonusFilterController__IsChangeFilterData(
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
  struct ListViewSort_o *sort; // x8
  struct System_Collections_Generic_Dictionary_int__int____o *defaultFilterData; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtEventBonusFilterDic; // x19
  int32_t Count; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *v16; // x0
  int32_t key; // w21
  Il2CppObject *value; // x20
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int v20; // w19
  int v21; // w20
  _BOOL4 v22; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40FD08B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v11);
    byte_40FD08B = 1;
  }
  memset(&v25, 0, sizeof(v25));
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_21;
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    goto LABEL_21;
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sort->fields.svtEventBonusFilterDic;
  Count = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)defaultFilterData,
            (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__int____get_Count__);
  if ( !svtEventBonusFilterDic )
    goto LABEL_21;
  if ( Count != System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                  svtEventBonusFilterDic,
                  (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__int____get_Count__) )
  {
    LOBYTE(v22) = 1;
    return v22;
  }
  v16 = this->fields.defaultFilterData;
  if ( !v16 )
LABEL_21:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v24,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v16,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v25,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__) )
  {
    key = (int32_t)v25.fields.current.fields.key;
    value = v25.fields.current.fields.value;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)svtEventBonusFilterDic,
           (int32_t)v25.fields.current.fields.key,
           (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               svtEventBonusFilterDic,
               key,
               (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
      if ( Item )
      {
        if ( !value )
          sub_B170D4();
        if ( LODWORD(value[1].monitor) == LODWORD(Item->fields._EvalValueWarsituation_k__BackingField)
          && System_Linq_Enumerable__SequenceEqual_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)value,
               (System_Collections_Generic_IEnumerable_TSource__o *)Item,
               (const MethodInfo_19C21B0 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
        {
          continue;
        }
      }
    }
    v20 = 1;
    v21 = 3;
    goto LABEL_18;
  }
  v20 = 0;
  v21 = 1;
LABEL_18:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v25,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  return v20 & ((unsigned int)(v21 + 1) >> 2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEventBonusFilterController__IsHideServant(
        UserServantEntity_o *userServantEntity,
        ListViewSort_o *sort,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  ServantEventBonusFilterController___c__DisplayClass18_0_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_int__o *v28; // x21
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x24
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  EventBonusFilterMaster_o *v31; // x23
  System_Collections_Generic_IEnumerable_T__o *EventBonusSkillIds; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Func_int__bool__o *v37; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+30h] [xbp-70h] BYREF
  System_String_array *explanationList; // [xsp+58h] [xbp-48h] BYREF
  System_String_array *titleList; // [xsp+68h] [xbp-38h] BYREF

  if ( (byte_40FD08D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventBonusFilterMaster___, sort);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int____66838552, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__, v13);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v14);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B16FFC(&Method_ServantEventBonusFilterController___c__DisplayClass18_0__IsHideServant_b__0__, v21);
    sub_B16FFC(&ServantEventBonusFilterController___c__DisplayClass18_0_TypeInfo, v22);
    byte_40FD08D = 1;
  }
  titleList = 0LL;
  explanationList = 0LL;
  memset(&v40, 0, sizeof(v40));
  v23 = (ServantEventBonusFilterController___c__DisplayClass18_0_o *)sub_B170CC(
                                                                       ServantEventBonusFilterController___c__DisplayClass18_0_TypeInfo,
                                                                       sort,
                                                                       *(_QWORD *)&eventId,
                                                                       method,
                                                                       v4);
  ServantEventBonusFilterController___c__DisplayClass18_0___ctor(v23, 0LL);
  if ( !eventId )
    return 0;
  v28 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v24,
                                                    v25,
                                                    v26,
                                                    v27);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !sort )
    goto LABEL_24;
  svtEventBonusFilterDic = sort->fields.svtEventBonusFilterDic;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_24;
  v31 = (EventBonusFilterMaster_o *)Master_WarQuestSelectionMaster;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v39,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)svtEventBonusFilterDic,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  v40 = v39;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v40,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__) )
  {
    if ( eventId < 1 || LODWORD(v40.fields.current.fields.key) == eventId )
    {
      if ( !v31 )
        sub_B170D4();
      EventBonusSkillIds = (System_Collections_Generic_IEnumerable_T__o *)EventBonusFilterMaster__GetEventBonusSkillIds(
                                                                            v31,
                                                                            (int32_t)v40.fields.current.fields.key,
                                                                            (System_Int32_array *)v40.fields.current.fields.value,
                                                                            0LL);
      if ( !v28 )
        sub_B170D4();
      System_Collections_Generic_List_int___AddRange(
        v28,
        EventBonusSkillIds,
        (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v40,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !v23 || !userServantEntity )
LABEL_24:
    sub_B170D4();
  UserServantEntity__getPassiveSkillInfo(
    userServantEntity,
    &v23->fields.skillIdList,
    &titleList,
    &explanationList,
    -1,
    0LL);
  if ( !v23->fields.skillIdList )
    return 0;
  v37 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v33, v34, v35, v36);
  System_Func_int__bool____ctor(
    v37,
    (Il2CppObject *)v23,
    Method_ServantEventBonusFilterController___c__DisplayClass18_0__IsHideServant_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  return System_Linq_Enumerable__Count_int__26035184(
           (System_Collections_Generic_IEnumerable_TSource__o *)v28,
           (System_Func_TSource__bool__o *)v37,
           (const MethodInfo_18D43F0 *)Method_System_Linq_Enumerable_Count_int____66838552) != 0;
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

  if ( (byte_40FD086 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v5);
    byte_40FD086 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    ServantEventBonusFilterItem__RefreshButtonState((ServantEventBonusFilterItem_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
}


void __fastcall ServantEventBonusFilterController__SetDefaultFilterData(
        ServantEventBonusFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v16; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_defaultFilterData; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_HashSet_int__o *v28; // x21
  struct System_Collections_Generic_List_ServantEventBonusFilterItem__o *itemList; // x0
  _DWORD *monitor; // x8
  int32_t v31; // w22
  ListViewSort_o *sort; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *SvtEventBonusFilterInt; // x2
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FD08A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v13);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v15);
    byte_40FD08A = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v16 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   method,
                                                                                                   v2,
                                                                                                   v3,
                                                                                                   v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v16,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int____o *)v16;
  p_defaultFilterData = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.defaultFilterData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v28 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26,
                                                       v27);
  System_Collections_Generic_HashSet_int____ctor(
    v28,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v35.fields.current )
      sub_B170D4();
    monitor = v35.fields.current[4].monitor;
    if ( !monitor )
      sub_B170D4();
    if ( !v28 )
      sub_B170D4();
    v31 = monitor[4];
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v28,
            v31,
            (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      System_Collections_Generic_HashSet_int___Add(
        v28,
        v31,
        (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      sort = this->fields.sort;
      if ( !sort )
        sub_B170D4();
      SvtEventBonusFilterInt = (WarBoardEvalValueSquare_EvalValueSquare_o *)ListViewSort__GetSvtEventBonusFilterInt(
                                                                              sort,
                                                                              v31,
                                                                              0LL);
      if ( SvtEventBonusFilterInt )
      {
        if ( !*p_defaultFilterData )
          sub_B170D4();
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          *p_defaultFilterData,
          v31,
          SvtEventBonusFilterInt,
          (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  bool v9; // w19
  UICommonButton_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD08C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__, isEnable);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__, v7);
    byte_40FD08C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEventBonusFilterItem__GetEnumerator__);
  v9 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B170D4();
    monitor = (UICommonButton_o *)v11.fields.current[3].monitor;
    if ( !monitor )
      sub_B170D4();
    UICommonButton__SetButtonEnableWithCollider(monitor, v9, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEventBonusFilterItem__Dispose__);
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
  System_String_o *v8; // x0

  if ( (byte_40FD088 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_11854, v3);
    sub_B16FFC(&StringLiteral_11852, v4);
    byte_40FD088 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11854, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11852, 0LL),
        !explanationLabel) )
  {
    sub_B170D4();
  }
  UILabel__set_text(explanationLabel, v8, 0LL);
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
  if ( (byte_40F7629 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x);
    byte_40F7629 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.skillIdList,
           x,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
}