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
  __int64 v3; // x1

  if ( (byte_42B1E2F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B1E2F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  CommonUI__CloseAssistEffectConfirmDialog(Instance, 0LL);
}


EventInfoAssistLevelCounterComponent_o *__fastcall EventInfoAssistLevelCounterControl__CreateAssistLevel(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  UnityEngine_UI_Dropdown_DropdownItem_o *baseAssistLevelPrefab; // x20
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x22
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_42B1E2D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_593/*"("*/);
    sub_B52984(&StringLiteral_661/*")"*/);
    byte_42B1E2D = 1;
  }
  baseAssistLevelPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.baseAssistLevelPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 baseAssistLevelPrefab,
                                 (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_14;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    if ( !this->fields.baseAssistLevelPrefab
      || (v9 = gameObject,
          gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                 (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab,
                                                 0LL),
          !ent)
      || (gameObject = (UnityEngine_Object_o *)System_String__Concat_44571728(
                                                 (System_String_o *)gameObject,
                                                 (System_String_o *)StringLiteral_593/*"("*/,
                                                 ent->fields.value,
                                                 (System_String_o *)StringLiteral_661/*")"*/,
                                                 0LL),
          !v9)
      || (UnityEngine_Object__set_name(v9, (System_String_o *)gameObject, 0LL),
          v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL),
          GameObjectExtensions__SafeSetParent_32091088(v10, this->fields.rootObject, 0LL),
          (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v6,
                                                  0LL)) == 0LL) )
    {
LABEL_14:
      sub_B52A5C(gameObject, v8);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  return (EventInfoAssistLevelCounterComponent_o *)v6;
}


EventInfoAssistLevelCounterComponent_AssistData_o *__fastcall EventInfoAssistLevelCounterControl__GetAssistData(
        EventInfoAssistLevelCounterControl_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *assistDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42B1E2E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
    sub_B52984(&Method_System_Predicate_EventInfoAssistLevelCounterComponent_AssistData___ctor__);
    sub_B52984(&System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo);
    sub_B52984(&Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__);
    sub_B52984(&EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo);
    byte_42B1E2E = 1;
  }
  v5 = (EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *)sub_B52A54(EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo);
  EventInfoAssistLevelCounterControl___c__DisplayClass14_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.assistId = assistId,
        assistDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.assistDataList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_EventInfoAssistLevelCounterComponent_AssistData___ctor__),
        !assistDataList) )
  {
    sub_B52A5C(v6, v7);
  }
  return (EventInfoAssistLevelCounterComponent_AssistData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                assistDataList,
                                                                (System_Predicate_T__o *)v9,
                                                                (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
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
  struct EventUiEntity_o **p_eventUiEntity; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42B1E29 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo);
    byte_42B1E29 = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)p_eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
  *(p_eventUiEntity - 1) = (struct EventUiEntity_o *)v11;
  sub_B52920(
    (BattleServantConfConponent_o *)(p_eventUiEntity - 1),
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall EventInfoAssistLevelCounterControl__OnClickOpenDialogButton(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w21
  CommonUI_o *v7; // x20
  AssistEffectConfirmDialog_ClickDelegate_o *v8; // x22

  if ( (byte_42B1E2C & 1) == 0 )
  {
    sub_B52984(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1E2C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (eventId = eventUiEntity->fields.eventId,
          v7 = (CommonUI_o *)Instance,
          v8 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_B52A54(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__,
            0LL),
          !v7) )
    {
      sub_B52A5C(Instance, v4);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v7, eventId, v8, 0LL);
  }
}


void __fastcall EventInfoAssistLevelCounterControl__Redisplay(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *assistCompnentList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B1E2B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
    byte_42B1E2B = 1;
  }
  memset(&v5, 0, sizeof(v5));
  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)assistCompnentList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B52A5C(0LL, v4);
    EventInfoAssistLevelCounterComponent__UpdateDisp((EventInfoAssistLevelCounterComponent_o *)v5.fields.current, v4);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
}


void __fastcall EventInfoAssistLevelCounterControl__Setup(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseAssistLevelPrefab; // x21
  UnityEngine_Object_o *titleSprite; // x21
  UISprite_o *v7; // x21
  System_String_o *titleSpriteName; // x22
  UnityEngine_Object_o *openDialogButtonSprite; // x21
  UISprite_o *v10; // x21
  System_String_o *buttonSpriteName; // x22
  EventInfoAssistLevelCounterControl___c_c *v12; // x0
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v15; // x22
  struct EventInfoAssistLevelCounterControl___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v24; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x20
  int32_t v29; // w1
  const MethodInfo *v30; // x2
  System_Int32_array **AssistData; // x21
  const MethodInfo *v32; // x2
  EventInfoAssistLevelCounterComponent_o *AssistLevel; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *assistCompnentList; // x0
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B1E2A & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__get_Current__);
    sub_B52984(&Method_System_Func_EventUiValueEntity__int___ctor__);
    sub_B52984(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__);
    sub_B52984(&EventInfoAssistLevelCounterControl___c_TypeInfo);
    byte_42B1E2A = 1;
  }
  memset(&v46, 0, sizeof(v46));
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
        v7 = this->fields.titleSprite;
        titleSpriteName = this->fields.titleSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v7, titleSpriteName, 0LL);
      }
      openDialogButtonSprite = (UnityEngine_Object_o *)this->fields.openDialogButtonSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(openDialogButtonSprite, 0LL, 0LL) )
      {
        v10 = this->fields.openDialogButtonSprite;
        buttonSpriteName = this->fields.buttonSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v10, buttonSpriteName, 0LL);
      }
      v12 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      if ( (BYTE3(EventInfoAssistLevelCounterControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoAssistLevelCounterControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoAssistLevelCounterControl___c_TypeInfo);
        v12 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      }
      static_fields = v12->static_fields;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        }
        v15 = (Il2CppObject *)static_fields->__9;
        _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__10_0,
          v15,
          Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__,
          (const MethodInfo_2BC9C68 *)Method_System_Func_EventUiValueEntity__int___ctor__);
        v16 = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        v16->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v16->__9__10_0,
          (System_Int32_array **)_9__10_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__10_0,
                                                                   (const MethodInfo_1B666DC *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      v24 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                             v23,
                                                                                             (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
      if ( !v24 )
        sub_B52A5C(0LL, v25);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v45,
        v24,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
      v46 = v45;
      while ( 1 )
      {
        v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v46,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
        if ( !v26 )
          break;
        current = v46.fields.current;
        if ( !v46.fields.current )
          sub_B52A5C(v26, v27);
        if ( HIDWORD(v46.fields.current[1].klass) == 6 )
        {
          v29 = System_Int32__Parse((System_String_o *)v46.fields.current[1].monitor, 0LL);
          AssistData = (System_Int32_array **)EventInfoAssistLevelCounterControl__GetAssistData(this, v29, v30);
          AssistLevel = EventInfoAssistLevelCounterControl__CreateAssistLevel(
                          this,
                          (EventUiValueEntity_o *)current,
                          v32);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v34 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssistLevel, 0LL, 0LL);
          if ( !v34 )
          {
            if ( !AssistLevel )
              sub_B52A5C(v34, v35);
            AssistLevel->fields.assistData = (struct EventInfoAssistLevelCounterComponent_AssistData_o *)AssistData;
            sub_B52920(
              (BattleServantConfConponent_o *)&AssistLevel->fields.assistData,
              AssistData,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41);
            EventInfoAssistLevelCounterComponent__UpdateDisp(AssistLevel, v42);
            assistCompnentList = this->fields.assistCompnentList;
            if ( !assistCompnentList )
              sub_B52A5C(0LL, v43);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)assistCompnentList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)AssistLevel,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v46,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x0

  if ( (byte_42AD8E1 & 1) == 0 )
  {
    sub_B52984(&EventInfoAssistLevelCounterControl___c_TypeInfo);
    byte_42AD8E1 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventInfoAssistLevelCounterControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoAssistLevelCounterControl___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return data->fields.assistId == this->fields.assistId;
}