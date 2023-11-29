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

  if ( (byte_40FB6E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FB6E6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  UnityEngine_Component_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v11; // x22
  System_String_o *name; // x0
  System_String_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0

  if ( (byte_40FB6E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___, ent);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_585, v6);
    sub_B16FFC(&StringLiteral_651, v7);
    byte_40FB6E4 = 1;
  }
  baseAssistLevelPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.baseAssistLevelPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    baseAssistLevelPrefab,
                                    (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
  {
    if ( !v9 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
    if ( !this->fields.baseAssistLevelPrefab
      || (v11 = (UnityEngine_Object_o *)gameObject,
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab, 0LL),
          !ent)
      || (v13 = System_String__Concat_43747144(
                  name,
                  (System_String_o *)StringLiteral_585,
                  ent->fields.value,
                  (System_String_o *)StringLiteral_651,
                  0LL),
          !v11)
      || (UnityEngine_Object__set_name(v11, v13, 0LL),
          v14 = UnityEngine_Component__get_gameObject(v9, 0LL),
          GameObjectExtensions__SafeSetParent_27425996(v14, this->fields.rootObject, 0LL),
          (v15 = UnityEngine_Component__get_gameObject(v9, 0LL)) == 0LL) )
    {
LABEL_14:
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(v15, 1, 0LL);
  }
  return (EventInfoAssistLevelCounterComponent_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
EventInfoAssistLevelCounterComponent_AssistData_o *__fastcall EventInfoAssistLevelCounterControl__GetAssistData(
        EventInfoAssistLevelCounterControl_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *assistDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40FB6E5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__,
      *(_QWORD *)&assistId);
    sub_B16FFC(&Method_System_Predicate_EventInfoAssistLevelCounterComponent_AssistData___ctor__, v7);
    sub_B16FFC(&System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__, v9);
    sub_B16FFC(&EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo, v10);
    byte_40FB6E5 = 1;
  }
  v11 = (EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *)sub_B170CC(
                                                                        EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo,
                                                                        *(_QWORD *)&assistId,
                                                                        method,
                                                                        v3,
                                                                        v4);
  EventInfoAssistLevelCounterControl___c__DisplayClass14_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.assistId = assistId,
        assistDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.assistDataList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_EventInfoAssistLevelCounterComponent_AssistData___ctor__),
        !assistDataList) )
  {
    sub_B170D4();
  }
  return (EventInfoAssistLevelCounterComponent_AssistData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                assistDataList,
                                                                (System_Predicate_T__o *)v17,
                                                                (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40FB6E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__, entity);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo, v10);
    byte_40FB6E0 = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
  *(p_eventUiEntity - 1) = (struct EventUiEntity_o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)(p_eventUiEntity - 1),
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  __int64 v9; // x3
  __int64 v10; // x4
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w21
  CommonUI_o *v13; // x20
  AssistEffectConfirmDialog_ClickDelegate_o *v14; // x22

  if ( (byte_40FB6E3 & 1) == 0 )
  {
    sub_B16FFC(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FB6E3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (eventId = eventUiEntity->fields.eventId,
          v13 = (CommonUI_o *)Instance,
          v14 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                               AssistEffectConfirmDialog_ClickDelegate_TypeInfo,
                                                               v7,
                                                               v8,
                                                               v9,
                                                               v10),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v14,
            (Il2CppObject *)this,
            Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__,
            0LL),
          !v13) )
    {
      sub_B170D4();
    }
    CommonUI__OpenAssistEffectConfirmDialog(v13, eventId, v14, 0LL);
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

  if ( (byte_40FB6E2 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__,
      method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__get_Current__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__, v5);
    byte_40FB6E2 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)assistCompnentList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    EventInfoAssistLevelCounterComponent__UpdateDisp((EventInfoAssistLevelCounterComponent_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
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
  __int64 v24; // x3
  __int64 v25; // x4
  UISprite_o *v26; // x21
  System_String_o *buttonSpriteName; // x22
  EventInfoAssistLevelCounterControl___c_c *v28; // x0
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v31; // x22
  struct EventInfoAssistLevelCounterControl___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v40; // x0
  Il2CppObject *current; // x20
  int32_t v42; // w1
  const MethodInfo *v43; // x2
  System_Int32_array **AssistData; // x21
  const MethodInfo *v45; // x2
  EventInfoAssistLevelCounterComponent_o *AssistLevel; // x20
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

  if ( (byte_40FB6E1 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, entitys);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_EventUiValueEntity___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__get_Current__, v9);
    sub_B16FFC(&Method_System_Func_EventUiValueEntity__int___ctor__, v10);
    sub_B16FFC(&System_Func_EventUiValueEntity__int__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__, v15);
    sub_B16FFC(&EventInfoAssistLevelCounterControl___c_TypeInfo, v16);
    byte_40FB6E1 = 1;
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
        v26 = this->fields.openDialogButtonSprite;
        buttonSpriteName = this->fields.buttonSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v26, buttonSpriteName, 0LL);
      }
      v28 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      if ( (BYTE3(EventInfoAssistLevelCounterControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoAssistLevelCounterControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoAssistLevelCounterControl___c_TypeInfo);
        v28 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      }
      static_fields = v28->static_fields;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)static_fields->__9;
        _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                     System_Func_EventUiValueEntity__int__TypeInfo,
                                                                                     v22,
                                                                                     v23,
                                                                                     v24,
                                                                                     v25);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__10_0,
          v31,
          Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_EventUiValueEntity__int___ctor__);
        v32 = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        v32->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v32->__9__10_0,
          (System_Int32_array **)_9__10_0,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__10_0,
                                                                   (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      v40 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                             v39,
                                                                                             (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
      if ( !v40 )
        sub_B170D4();
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v55,
        v40,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
      v56 = v55;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v56,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__) )
      {
        current = v56.fields.current;
        if ( !v56.fields.current )
          sub_B170D4();
        if ( HIDWORD(v56.fields.current[1].klass) == 6 )
        {
          v42 = System_Int32__Parse((System_String_o *)v56.fields.current[1].monitor, 0LL);
          AssistData = (System_Int32_array **)EventInfoAssistLevelCounterControl__GetAssistData(this, v42, v43);
          AssistLevel = EventInfoAssistLevelCounterControl__CreateAssistLevel(
                          this,
                          (EventUiValueEntity_o *)current,
                          v45);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssistLevel, 0LL, 0LL) )
          {
            if ( !AssistLevel )
              sub_B170D4();
            AssistLevel->fields.assistData = (struct EventInfoAssistLevelCounterComponent_AssistData_o *)AssistData;
            sub_B16F98(
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
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)assistCompnentList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)AssistLevel,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v56,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FB9 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoAssistLevelCounterControl___c_TypeInfo, v1);
    byte_40F6FB9 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoAssistLevelCounterControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
  return data->fields.assistId == this->fields.assistId;
}