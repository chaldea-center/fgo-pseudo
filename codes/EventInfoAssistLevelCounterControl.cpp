void EventInfoAssistLevelCounterControl___ctor(EventInfoAssistLevelCounterControl_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoAssistLevelCounterControl__CloseAssistEffectFonfirmDialog(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5970A62 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5970A62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseAssistEffectConfirmDialog((CommonUI_o *)Instance, 0);
}


EventInfoAssistLevelCounterComponent_o *EventInfoAssistLevelCounterControl__CreateAssistLevel(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  Il2CppObject *baseAssistLevelPrefab; // x20
  Il2CppObject *v6; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x22
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_5970A60 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_681/*"("*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    byte_5970A60 = 1;
  }
  baseAssistLevelPrefab = (Il2CppObject *)this->fields.baseAssistLevelPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ent);
  v6 = UnityEngine_Object__Instantiate_object_(
         baseAssistLevelPrefab,
         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_13;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    if ( !this->fields.baseAssistLevelPrefab
      || (v9 = gameObject,
          gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                 (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab,
                                                 0),
          !ent)
      || (gameObject = (UnityEngine_Object_o *)System_String__Concat_75696856(
                                                 (System_String_o *)gameObject,
                                                 (System_String_o *)StringLiteral_681/*"("*/,
                                                 ent->fields.value,
                                                 (System_String_o *)StringLiteral_789/*")"*/,
                                                 0),
          !v9)
      || (UnityEngine_Object__set_name(v9, (System_String_o *)gameObject, 0),
          v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0),
          GameObjectExtensions__SafeSetParent_42897308(v10, this->fields.rootObject, 0),
          (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0)) == 0) )
    {
LABEL_13:
      sub_2213CDC(gameObject, v8);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  return (EventInfoAssistLevelCounterComponent_o *)v6;
}


EventInfoAssistLevelCounterComponent_AssistData_o *EventInfoAssistLevelCounterControl__GetAssistData(
        EventInfoAssistLevelCounterControl_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__o *assistDataList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_5970A61 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
    sub_2213A60(&System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo);
    sub_2213A60(&Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__);
    sub_2213A60(&EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo);
    byte_5970A61 = 1;
  }
  v5 = sub_2213CCC(EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (assistDataList = this->fields.assistDataList,
        *(_DWORD *)(v5 + 16) = assistId,
        v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__,
          0),
        !assistDataList) )
  {
    sub_2213CDC(v6, v7);
  }
  return (EventInfoAssistLevelCounterComponent_AssistData_o *)System_Collections_Generic_List_object___Find(
                                                                (System_Collections_Generic_List_object__o *)assistDataList,
                                                                (System_Predicate_T__o *)v9,
                                                                (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
}


void EventInfoAssistLevelCounterControl__Initialization(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5970A5C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo);
    byte_5970A5C = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
  this->fields.assistCompnentList = (struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assistCompnentList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void EventInfoAssistLevelCounterControl__OnClickOpenDialogButton(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v8; // x20
  int32_t eventId; // w21
  AssistEffectConfirmDialog_ClickDelegate_o *v10; // x22

  if ( (byte_5970A5F & 1) == 0 )
  {
    sub_2213A60(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__);
    sub_2213A60(&Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5970A5F = 1;
  }
  v3 = Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v8 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v10 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_2213CCC(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v10,
            (Il2CppObject *)this,
            Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__,
            0),
          !v8) )
    {
      sub_2213CDC(Instance, v6);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v8, eventId, v10, 0);
  }
}


void EventInfoAssistLevelCounterControl__Redisplay(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *assistCompnentList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5970A5E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
    byte_5970A5E = 1;
  }
  assistCompnentList = this->fields.assistCompnentList;
  memset(&v5, 0, sizeof(v5));
  if ( !assistCompnentList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)assistCompnentList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_2213CDC(0, v4);
    EventInfoAssistLevelCounterComponent__UpdateDisp((EventInfoAssistLevelCounterComponent_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
}


void EventInfoAssistLevelCounterControl__Setup(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseAssistLevelPrefab; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *titleSprite; // x21
  __int64 v8; // x1
  UISprite_o *v9; // x21
  System_String_o *titleSpriteName; // x22
  UnityEngine_Object_o *openDialogButtonSprite; // x21
  __int64 v12; // x1
  UISprite_o *v13; // x21
  System_String_o *buttonSpriteName; // x22
  EventInfoAssistLevelCounterControl___c_c *v15; // x0
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v18; // x22
  struct EventInfoAssistLevelCounterControl___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_object__o *v27; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x20
  int32_t v32; // w1
  const MethodInfo *v33; // x2
  EventInfoAssistLevelCounterComponent_AssistData_o *AssistData; // x21
  const MethodInfo *v35; // x2
  __int64 v36; // x1
  EventInfoAssistLevelCounterComponent_o *AssistLevel; // x20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  const MethodInfo *v46; // x1
  __int64 v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Collections_Generic_List_object__o *assistCompnentList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x8
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5970A5D & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__get_Current__);
    sub_2213A60(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__);
    sub_2213A60(&EventInfoAssistLevelCounterControl___c_TypeInfo);
    byte_5970A5D = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( entitys )
  {
    baseAssistLevelPrefab = (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entitys);
    if ( !UnityEngine_Object__op_Equality(baseAssistLevelPrefab, 0, 0) )
    {
      titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Inequality(titleSprite, 0, 0) )
      {
        v9 = this->fields.titleSprite;
        titleSpriteName = this->fields.titleSpriteName;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
        AtlasManager__SetEventUI(v9, titleSpriteName, 0);
      }
      openDialogButtonSprite = (UnityEngine_Object_o *)this->fields.openDialogButtonSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(openDialogButtonSprite, 0, 0) )
      {
        v13 = this->fields.openDialogButtonSprite;
        buttonSpriteName = this->fields.buttonSpriteName;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
        AtlasManager__SetEventUI(v13, buttonSpriteName, 0);
      }
      v15 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      if ( !*(&EventInfoAssistLevelCounterControl___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventInfoAssistLevelCounterControl___c_TypeInfo, v12);
        v15 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      }
      static_fields = v15->static_fields;
      _9__10_0 = (System_Func_object__int__o *)static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !*(&v15->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v15, v12);
          static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        }
        v18 = (Il2CppObject *)static_fields->__9;
        _9__10_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__10_0,
          v18,
          Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__,
          0);
        v19 = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        v19->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v19->__9__10_0,
          (int32_t)_9__10_0,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__10_0,
                                                                   (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      v27 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v26,
                                                           (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
      if ( !v27 )
        sub_2213CDC(0, v28);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v59,
        v27,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
      v60 = v59;
      v59.fields._list = 0;
      *(_QWORD *)&v59.fields._index = &v60;
      while ( 1 )
      {
        v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v60,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
        if ( !v29 )
          break;
        current = v60.fields._current;
        if ( !v60.fields._current )
          sub_2213CDC(v29, v30);
        if ( HIDWORD(v60.fields._current[1].klass) == 6 )
        {
          v32 = System_Int32__Parse((System_String_o *)v60.fields._current[1].monitor, 0);
          AssistData = EventInfoAssistLevelCounterControl__GetAssistData(this, v32, v33);
          AssistLevel = EventInfoAssistLevelCounterControl__CreateAssistLevel(
                          this,
                          (EventUiValueEntity_o *)current,
                          v35);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
          v38 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssistLevel, 0, 0);
          if ( !v38 )
          {
            if ( !AssistLevel )
              sub_2213CDC(v38, v39);
            AssistLevel->fields.assistData = AssistData;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&AssistLevel->fields.assistData,
              (int32_t)AssistData,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
            EventInfoAssistLevelCounterComponent__UpdateDisp(AssistLevel, v46);
            assistCompnentList = (System_Collections_Generic_List_object__o *)this->fields.assistCompnentList;
            if ( !assistCompnentList
              || (items = assistCompnentList->fields._items,
                  v56 = Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__,
                  ++assistCompnentList->fields._version,
                  !items) )
            {
              sub_2213CDC(assistCompnentList, v47);
            }
            size = assistCompnentList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                assistCompnentList,
                (Il2CppObject *)AssistLevel,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
            }
            else
            {
              v58 = &items->obj.klass + size;
              assistCompnentList->fields._size = size + 1;
              v58[4] = (Il2CppClass *)AssistLevel;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v58 + 4),
                (int32_t)AssistLevel,
                v48,
                v49,
                v50,
                v51,
                v52,
                v53);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v60,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    }
  }
}


void EventInfoAssistLevelCounterControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970A63 & 1) == 0 )
  {
    sub_2213A60(&EventInfoAssistLevelCounterControl___c_TypeInfo);
    byte_5970A63 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoAssistLevelCounterControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoAssistLevelCounterControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoAssistLevelCounterControl___c___ctor(
        EventInfoAssistLevelCounterControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventInfoAssistLevelCounterControl___c___Setup_b__10_0(
        EventInfoAssistLevelCounterControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_2213CDC(this, 0);
  return ent->fields.priority;
}


void EventInfoAssistLevelCounterControl___c__DisplayClass14_0___ctor(
        EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoAssistLevelCounterControl___c__DisplayClass14_0___GetAssistData_b__0(
        EventInfoAssistLevelCounterControl___c__DisplayClass14_0_o *this,
        EventInfoAssistLevelCounterComponent_AssistData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  return data->fields.assistId == this->fields.assistId;
}