void __fastcall EventInfoAssistLevelCounterControl___ctor(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoAssistLevelCounterControl__CloseAssistEffectFonfirmDialog(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4216212 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4216212 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseAssistEffectConfirmDialog(Instance, 0LL);
}


EventInfoAssistLevelCounterComponent_o *__fastcall EventInfoAssistLevelCounterControl__CreateAssistLevel(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *baseAssistLevelPrefab; // x20
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v11; // x22
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_4216210 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___, ent);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_591/*"("*/, v6);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v7);
    byte_4216210 = 1;
  }
  baseAssistLevelPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.baseAssistLevelPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 baseAssistLevelPrefab,
                                 (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_14;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
    if ( !this->fields.baseAssistLevelPrefab
      || (v11 = gameObject,
          gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                 (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab,
                                                 0LL),
          !ent)
      || (gameObject = (UnityEngine_Object_o *)System_String__Concat_43853316(
                                                 (System_String_o *)gameObject,
                                                 (System_String_o *)StringLiteral_591/*"("*/,
                                                 ent->fields.value,
                                                 (System_String_o *)StringLiteral_658/*")"*/,
                                                 0LL),
          !v11)
      || (UnityEngine_Object__set_name(v11, (System_String_o *)gameObject, 0LL),
          v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL),
          GameObjectExtensions__SafeSetParent_31184716(v12, this->fields.rootObject, 0LL),
          (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v9,
                                                  0LL)) == 0LL) )
    {
LABEL_14:
      sub_B0D97C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  return (EventInfoAssistLevelCounterComponent_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
EventInfoAssistLevelCounterComponent_AssistData_o *__fastcall EventInfoAssistLevelCounterControl__GetAssistData(
        EventInfoAssistLevelCounterControl_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *assistDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4216211 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__,
      *(_QWORD *)&assistId);
    sub_B0D8A4(&Method_System_Predicate_EventInfoAssistLevelCounterComponent_AssistData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo, v6);
    sub_B0D8A4(&Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__, v7);
    sub_B0D8A4(&EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo, v8);
    byte_4216211 = 1;
  }
  v9 = (EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *)sub_B0D974(
                                                                       EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo,
                                                                       *(_QWORD *)&assistId,
                                                                       method);
  EventInfoAssistLevelCounterControl___c__DisplayClass14_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.assistId = assistId,
        assistDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.assistDataList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventInfoAssistLevelCounterComponent_AssistData___ctor__),
        !assistDataList) )
  {
    sub_B0D97C(v10);
  }
  return (EventInfoAssistLevelCounterComponent_AssistData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                assistDataList,
                                                                (System_Predicate_T__o *)v14,
                                                                (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
}


void __fastcall EventInfoAssistLevelCounterControl__Initialization(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  struct EventUiEntity_o **p_eventUiEntity; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_421620C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__, entity);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo, v10);
    byte_421620C = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo,
                                                                                                  v12,
                                                                                                  v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
  *(p_eventUiEntity - 1) = (struct EventUiEntity_o *)v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)(p_eventUiEntity - 1),
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall EventInfoAssistLevelCounterControl__OnClickOpenDialogButton(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w21
  CommonUI_o *v11; // x20
  AssistEffectConfirmDialog_ClickDelegate_o *v12; // x22

  if ( (byte_421620F & 1) == 0 )
  {
    sub_B0D8A4(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_421620F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (eventId = eventUiEntity->fields.eventId,
          v11 = (CommonUI_o *)Instance,
          v12 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                               AssistEffectConfirmDialog_ClickDelegate_TypeInfo,
                                                               v7,
                                                               v8),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__,
            0LL),
          !v11) )
    {
      sub_B0D97C(Instance);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v11, eventId, v12, 0LL);
  }
}


void __fastcall EventInfoAssistLevelCounterControl__Redisplay(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *assistCompnentList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421620E & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__,
      method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__, v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__get_Current__,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__, v5);
    byte_421620E = 1;
  }
  memset(&v8, 0, sizeof(v8));
  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)assistCompnentList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    EventInfoAssistLevelCounterComponent__UpdateDisp((EventInfoAssistLevelCounterComponent_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
}


void __fastcall EventInfoAssistLevelCounterControl__Setup(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
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
  UnityEngine_Object_o *baseAssistLevelPrefab; // x21
  UnityEngine_Object_o *titleSprite; // x21
  UISprite_o *v19; // x21
  System_String_o *titleSpriteName; // x22
  UnityEngine_Object_o *openDialogButtonSprite; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  UISprite_o *v24; // x21
  System_String_o *buttonSpriteName; // x22
  EventInfoAssistLevelCounterControl___c_c *v26; // x0
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v29; // x22
  struct EventInfoAssistLevelCounterControl___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v38; // x0
  _BOOL8 v39; // x0
  Il2CppObject *current; // x20
  int32_t v41; // w1
  const MethodInfo *v42; // x2
  System_Int32_array **AssistData; // x21
  const MethodInfo *v44; // x2
  EventInfoAssistLevelCounterComponent_o *AssistLevel; // x20
  _BOOL8 v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x1
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *assistCompnentList; // x0
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_421620D & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, entitys);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_EventUiValueEntity___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__get_Current__, v9);
    sub_B0D8A4(&Method_System_Func_EventUiValueEntity__int___ctor__, v10);
    sub_B0D8A4(&System_Func_EventUiValueEntity__int__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__, v15);
    sub_B0D8A4(&EventInfoAssistLevelCounterControl___c_TypeInfo, v16);
    byte_421620D = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( entitys )
  {
    baseAssistLevelPrefab = (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(baseAssistLevelPrefab, 0LL, 0LL) )
    {
      titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(titleSprite, 0LL, 0LL) )
      {
        v19 = this->fields.titleSprite;
        titleSpriteName = this->fields.titleSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v19, titleSpriteName, 0LL);
      }
      openDialogButtonSprite = (UnityEngine_Object_o *)this->fields.openDialogButtonSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(openDialogButtonSprite, 0LL, 0LL) )
      {
        v24 = this->fields.openDialogButtonSprite;
        buttonSpriteName = this->fields.buttonSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v24, buttonSpriteName, 0LL);
      }
      v26 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      if ( (BYTE3(EventInfoAssistLevelCounterControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoAssistLevelCounterControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoAssistLevelCounterControl___c_TypeInfo);
        v26 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      }
      static_fields = v26->static_fields;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        }
        v29 = (Il2CppObject *)static_fields->__9;
        _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                     System_Func_EventUiValueEntity__int__TypeInfo,
                                                                                     v22,
                                                                                     v23);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__10_0,
          v29,
          Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__,
          (const MethodInfo_2619564 *)Method_System_Func_EventUiValueEntity__int___ctor__);
        v30 = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        v30->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v30->__9__10_0,
          (System_Int32_array **)_9__10_0,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__10_0,
                                                                   (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      v38 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                             v37,
                                                                                             (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
      if ( !v38 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v55,
        v38,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
      v56 = v55;
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v56,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
        if ( !v39 )
          break;
        current = v56.fields.current;
        if ( !v56.fields.current )
          sub_B0D97C(v39);
        if ( HIDWORD(v56.fields.current[1].klass) == 6 )
        {
          v41 = System_Int32__Parse((System_String_o *)v56.fields.current[1].monitor, 0LL);
          AssistData = (System_Int32_array **)EventInfoAssistLevelCounterControl__GetAssistData(this, v41, v42);
          AssistLevel = EventInfoAssistLevelCounterControl__CreateAssistLevel(
                          this,
                          (EventUiValueEntity_o *)current,
                          v44);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v46 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssistLevel, 0LL, 0LL);
          if ( !v46 )
          {
            if ( !AssistLevel )
              sub_B0D97C(v46);
            AssistLevel->fields.assistData = (struct EventInfoAssistLevelCounterComponent_AssistData_o *)AssistData;
            sub_B0D840(
              (BattleServantConfConponent_o *)&AssistLevel->fields.assistData,
              AssistData,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52);
            EventInfoAssistLevelCounterComponent__UpdateDisp(AssistLevel, v53);
            assistCompnentList = this->fields.assistCompnentList;
            if ( !assistCompnentList )
              sub_B0D97C(0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)assistCompnentList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)AssistLevel,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v56,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x0

  if ( (byte_4211B4B & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoAssistLevelCounterControl___c_TypeInfo, v1);
    byte_4211B4B = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoAssistLevelCounterControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoAssistLevelCounterControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventInfoAssistLevelCounterControl___c___ctor(
        EventInfoAssistLevelCounterControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoAssistLevelCounterControl___c___Setup_b__10_0(
        EventInfoAssistLevelCounterControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B0D97C(this);
  return ent->fields.priority;
}


void __fastcall EventInfoAssistLevelCounterControl___c__DisplayClass14_0___ctor(
        EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoAssistLevelCounterControl___c__DisplayClass14_0___GetAssistData_b__0(
        EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *this,
        EventInfoAssistLevelCounterComponent_AssistData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B0D97C(this);
  return data->fields.assistId == this->fields.assistId;
}