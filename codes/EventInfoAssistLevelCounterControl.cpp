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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E9FBB & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E9FBB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseAssistEffectConfirmDialog(Instance, 0LL);
}


EventInfoAssistLevelCounterComponent_o *__fastcall EventInfoAssistLevelCounterControl__CreateAssistLevel(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiValueEntity_o *ent,
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
  UnityEngine_UI_Dropdown_DropdownItem_o *baseAssistLevelPrefab; // x20
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x22
  UnityEngine_GameObject_o *v20; // x0

  if ( (byte_42E9FB9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___,
      (_DWORD)ent,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_592/*"("*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v12, v13, v14);
    byte_42E9FB9 = 1;
  }
  baseAssistLevelPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.baseAssistLevelPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  baseAssistLevelPrefab,
                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_14;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
    if ( !this->fields.baseAssistLevelPrefab
      || (v19 = gameObject,
          gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                 (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab,
                                                 0LL),
          !ent)
      || (gameObject = (UnityEngine_Object_o *)System_String__Concat_44581200(
                                                 (System_String_o *)gameObject,
                                                 (System_String_o *)StringLiteral_592/*"("*/,
                                                 ent->fields.value,
                                                 (System_String_o *)StringLiteral_659/*")"*/,
                                                 0LL),
          !v19)
      || (UnityEngine_Object__set_name(v19, (System_String_o *)gameObject, 0LL),
          v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL),
          GameObjectExtensions__SafeSetParent_32436524(v20, this->fields.rootObject, 0LL),
          (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v16,
                                                  0LL)) == 0LL) )
    {
LABEL_14:
      sub_B5D69C(gameObject, v18);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  return (EventInfoAssistLevelCounterComponent_o *)v16;
}


EventInfoAssistLevelCounterComponent_AssistData_o *__fastcall EventInfoAssistLevelCounterControl__GetAssistData(
        EventInfoAssistLevelCounterControl_o *this,
        int32_t assistId,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *assistDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E9FBA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__,
      assistId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_EventInfoAssistLevelCounterComponent_AssistData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__, v12, v13, v14);
    sub_B5D5C4(&EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo, v15, v16, v17);
    byte_42E9FBA = 1;
  }
  v18 = (EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *)sub_B5D694(EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo);
  EventInfoAssistLevelCounterControl___c__DisplayClass14_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.assistId = assistId,
        assistDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.assistDataList,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_EventInfoAssistLevelCounterComponent_AssistData___ctor__),
        !assistDataList) )
  {
    sub_B5D69C(v19, v20);
  }
  return (EventInfoAssistLevelCounterComponent_AssistData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                assistDataList,
                                                                (System_Predicate_T__o *)v22,
                                                                (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct EventUiEntity_o **p_eventUiEntity; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E9FB5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__,
      (_DWORD)entity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo, v10, v11, v12);
    byte_42E9FB5 = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
  *(p_eventUiEntity - 1) = (struct EventUiEntity_o *)v14;
  sub_B5D560(
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
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w21
  CommonUI_o *v18; // x20
  AssistEffectConfirmDialog_ClickDelegate_o *v19; // x22

  if ( (byte_42E9FB8 & 1) == 0 )
  {
    sub_B5D5C4(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E9FB8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (eventId = eventUiEntity->fields.eventId,
          v18 = (CommonUI_o *)Instance,
          v19 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_B5D694(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v19,
            (Il2CppObject *)this,
            Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__,
            0LL),
          !v18) )
    {
      sub_B5D69C(Instance, v15);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v18, eventId, v19, 0LL);
  }
}


void __fastcall EventInfoAssistLevelCounterControl__Redisplay(
        EventInfoAssistLevelCounterControl_o *this,
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
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *assistCompnentList; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9FB7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42E9FB7 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)assistCompnentList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B5D69C(0LL, v15);
    EventInfoAssistLevelCounterComponent__UpdateDisp((EventInfoAssistLevelCounterComponent_o *)v16.fields.current, v15);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
}


void __fastcall EventInfoAssistLevelCounterControl__Setup(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiValueEntity_array *entitys,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  UnityEngine_Object_o *baseAssistLevelPrefab; // x21
  UnityEngine_Object_o *titleSprite; // x21
  UISprite_o *v44; // x21
  System_String_o *titleSpriteName; // x22
  UnityEngine_Object_o *openDialogButtonSprite; // x21
  UISprite_o *v47; // x21
  System_String_o *buttonSpriteName; // x22
  EventInfoAssistLevelCounterControl___c_c *v49; // x0
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v52; // x22
  struct EventInfoAssistLevelCounterControl___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v61; // x0
  __int64 v62; // x1
  _BOOL8 v63; // x0
  __int64 v64; // x1
  Il2CppObject *current; // x20
  int32_t v66; // w1
  const MethodInfo *v67; // x2
  System_Int32_array **AssistData; // x21
  const MethodInfo *v69; // x2
  EventInfoAssistLevelCounterComponent_o *AssistLevel; // x20
  _BOOL8 v71; // x0
  __int64 v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  const MethodInfo *v79; // x1
  __int64 v80; // x1
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *assistCompnentList; // x0
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E9FB6 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)entitys, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_EventUiValueEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_EventUiValueEntity__int___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_EventUiValueEntity__int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__, v36, v37, v38);
    sub_B5D5C4(&EventInfoAssistLevelCounterControl___c_TypeInfo, v39, v40, v41);
    byte_42E9FB6 = 1;
  }
  memset(&v83, 0, sizeof(v83));
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
        v44 = this->fields.titleSprite;
        titleSpriteName = this->fields.titleSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v44, titleSpriteName, 0LL);
      }
      openDialogButtonSprite = (UnityEngine_Object_o *)this->fields.openDialogButtonSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(openDialogButtonSprite, 0LL, 0LL) )
      {
        v47 = this->fields.openDialogButtonSprite;
        buttonSpriteName = this->fields.buttonSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v47, buttonSpriteName, 0LL);
      }
      v49 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      if ( (BYTE3(EventInfoAssistLevelCounterControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoAssistLevelCounterControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoAssistLevelCounterControl___c_TypeInfo);
        v49 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      }
      static_fields = v49->static_fields;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        }
        v52 = (Il2CppObject *)static_fields->__9;
        _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__10_0,
          v52,
          Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__,
          (const MethodInfo_2C2F87C *)Method_System_Func_EventUiValueEntity__int___ctor__);
        v53 = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        v53->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v53->__9__10_0,
          (System_Int32_array **)_9__10_0,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__10_0,
                                                                   (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      v61 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                             v60,
                                                                                             (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
      if ( !v61 )
        sub_B5D69C(0LL, v62);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v82,
        v61,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
      v83 = v82;
      while ( 1 )
      {
        v63 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v83,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
        if ( !v63 )
          break;
        current = v83.fields.current;
        if ( !v83.fields.current )
          sub_B5D69C(v63, v64);
        if ( HIDWORD(v83.fields.current[1].klass) == 6 )
        {
          v66 = System_Int32__Parse((System_String_o *)v83.fields.current[1].monitor, 0LL);
          AssistData = (System_Int32_array **)EventInfoAssistLevelCounterControl__GetAssistData(this, v66, v67);
          AssistLevel = EventInfoAssistLevelCounterControl__CreateAssistLevel(
                          this,
                          (EventUiValueEntity_o *)current,
                          v69);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v71 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssistLevel, 0LL, 0LL);
          if ( !v71 )
          {
            if ( !AssistLevel )
              sub_B5D69C(v71, v72);
            AssistLevel->fields.assistData = (struct EventInfoAssistLevelCounterComponent_AssistData_o *)AssistData;
            sub_B5D560(
              (BattleServantConfConponent_o *)&AssistLevel->fields.assistData,
              AssistData,
              v73,
              v74,
              v75,
              v76,
              v77,
              v78);
            EventInfoAssistLevelCounterComponent__UpdateDisp(AssistLevel, v79);
            assistCompnentList = this->fields.assistCompnentList;
            if ( !assistCompnentList )
              sub_B5D69C(0LL, v80);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)assistCompnentList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)AssistLevel,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v83,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterControl___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E651F & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoAssistLevelCounterControl___c_TypeInfo, v1, v2, v3);
    byte_42E651F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoAssistLevelCounterControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoAssistLevelCounterControl___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return data->fields.assistId == this->fields.assistId;
}