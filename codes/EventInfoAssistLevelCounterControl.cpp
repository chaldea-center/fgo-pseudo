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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B4509C & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B4509C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
  CommonUI__CloseAssistEffectConfirmDialog((CommonUI_o *)Instance, 0LL);
}


EventInfoAssistLevelCounterComponent_o *__fastcall EventInfoAssistLevelCounterControl__CreateAssistLevel(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *baseAssistLevelPrefab; // x20
  Il2CppObject *v9; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x22
  UnityEngine_GameObject_o *v13; // x0

  if ( (byte_4B4509A & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___, ent);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_655/*"("*/, v6);
    sub_1BDB878(&StringLiteral_767/*")"*/, v7);
    byte_4B4509A = 1;
  }
  baseAssistLevelPrefab = (Il2CppObject *)this->fields.baseAssistLevelPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         baseAssistLevelPrefab,
         (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_13;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
    if ( !this->fields.baseAssistLevelPrefab
      || (v12 = gameObject,
          gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                 (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab,
                                                 0LL),
          !ent)
      || (gameObject = (UnityEngine_Object_o *)System_String__Concat_62612512(
                                                 (System_String_o *)gameObject,
                                                 (System_String_o *)StringLiteral_655/*"("*/,
                                                 ent->fields.value,
                                                 (System_String_o *)StringLiteral_767/*")"*/,
                                                 0LL),
          !v12)
      || (UnityEngine_Object__set_name(v12, (System_String_o *)gameObject, 0LL),
          v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL),
          GameObjectExtensions__SafeSetParent_35216896(v13, this->fields.rootObject, 0LL),
          (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v9,
                                                  0LL)) == 0LL) )
    {
LABEL_13:
      sub_1BDBAD4(gameObject, v11);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__o *assistDataList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4B4509B & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__,
      *(_QWORD *)&assistId);
    sub_1BDB878(&System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo, v5);
    sub_1BDB878(&Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__, v6);
    sub_1BDB878(&EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo, v7);
    byte_4B4509B = 1;
  }
  v8 = sub_1BDBAC4(EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = assistId,
        assistDataList = this->fields.assistDataList,
        v12 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__,
          0LL),
        !assistDataList) )
  {
    sub_1BDBAD4(v9, v10);
  }
  return (EventInfoAssistLevelCounterComponent_AssistData_o *)System_Collections_Generic_List_object___Find(
                                                                (System_Collections_Generic_List_object__o *)assistDataList,
                                                                (System_Predicate_T__o *)v12,
                                                                (const MethodInfo_36D642C *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
}


void __fastcall EventInfoAssistLevelCounterControl__Initialization(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B45096 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__, entity);
    sub_1BDB878(&System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo, v6);
    byte_4B45096 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  v7 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
  this->fields.assistCompnentList = (struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *)v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.assistCompnentList, (int32_t)v7, v8, v9);
}


void __fastcall EventInfoAssistLevelCounterControl__OnClickOpenDialogButton(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v11; // x20
  int32_t eventId; // w21
  AssistEffectConfirmDialog_ClickDelegate_o *v13; // x22

  if ( (byte_4B45099 & 1) == 0 )
  {
    sub_1BDB878(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BDB878(&Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__, v3);
    sub_1BDB878(&Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B45099 = 1;
  }
  v6 = Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BDB890(Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v11 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v13 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v13,
            (Il2CppObject *)this,
            Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__,
            0LL),
          !v11) )
    {
      sub_1BDBAD4(Instance, v9);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v11, eventId, v13, 0LL);
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B45098 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__,
      method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__, v3);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__get_Current__,
      v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__, v5);
    byte_4B45098 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
    sub_1BDBAD4(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)assistCompnentList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BDBAD4(0LL, v7);
    EventInfoAssistLevelCounterComponent__UpdateDisp((EventInfoAssistLevelCounterComponent_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
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
  UnityEngine_Object_o *baseAssistLevelPrefab; // x21
  UnityEngine_Object_o *titleSprite; // x21
  UISprite_o *v18; // x21
  System_String_o *titleSpriteName; // x22
  UnityEngine_Object_o *openDialogButtonSprite; // x21
  UISprite_o *v21; // x21
  System_String_o *buttonSpriteName; // x22
  EventInfoAssistLevelCounterControl___c_c *v23; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v25; // x22
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_object__o *v30; // x0
  __int64 v31; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x20
  int32_t v35; // w1
  const MethodInfo *v36; // x2
  EventInfoAssistLevelCounterComponent_AssistData_o *AssistData; // x21
  const MethodInfo *v38; // x2
  EventInfoAssistLevelCounterComponent_o *AssistLevel; // x20
  _BOOL8 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x1
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_List_object__o *assistCompnentList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x8
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B45097 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, entitys);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_EventUiValueEntity___, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__get_Current__, v9);
    sub_1BDB878(&System_Func_EventUiValueEntity__int__TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__, v12);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v13);
    sub_1BDB878(&Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__, v14);
    sub_1BDB878(&EventInfoAssistLevelCounterControl___c_TypeInfo, v15);
    byte_4B45097 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  if ( entitys )
  {
    baseAssistLevelPrefab = (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseAssistLevelPrefab, 0LL, 0LL) )
    {
      titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleSprite, 0LL, 0LL) )
      {
        v18 = this->fields.titleSprite;
        titleSpriteName = this->fields.titleSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v18, titleSpriteName, 0LL);
      }
      openDialogButtonSprite = (UnityEngine_Object_o *)this->fields.openDialogButtonSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(openDialogButtonSprite, 0LL, 0LL) )
      {
        v21 = this->fields.openDialogButtonSprite;
        buttonSpriteName = this->fields.buttonSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v21, buttonSpriteName, 0LL);
      }
      v23 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      if ( !EventInfoAssistLevelCounterControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoAssistLevelCounterControl___c_TypeInfo);
        v23 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      }
      _9__10_0 = (System_Func_object__int__o *)v23->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v23 = EventInfoAssistLevelCounterControl___c_TypeInfo;
        }
        v25 = (Il2CppObject *)v23->static_fields->__9;
        _9__10_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__10_0,
          v25,
          Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__,
          0LL);
        static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v27, v28);
      }
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__10_0,
                                                                   (const MethodInfo_305FB80 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      v30 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v29,
                                                           (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
      if ( !v30 )
        sub_1BDBAD4(0LL, v31);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v53,
        v30,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
      v54 = v53;
      while ( 1 )
      {
        v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v54,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
        if ( !v32 )
          break;
        current = v54.fields._current;
        if ( !v54.fields._current )
          sub_1BDBAD4(v32, v33);
        if ( HIDWORD(v54.fields._current[1].klass) == 6 )
        {
          v35 = System_Int32__Parse((System_String_o *)v54.fields._current[1].monitor, 0LL);
          AssistData = EventInfoAssistLevelCounterControl__GetAssistData(this, v35, v36);
          AssistLevel = EventInfoAssistLevelCounterControl__CreateAssistLevel(
                          this,
                          (EventUiValueEntity_o *)current,
                          v38);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v40 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssistLevel, 0LL, 0LL);
          if ( !v40 )
          {
            if ( !AssistLevel )
              sub_1BDBAD4(v40, v41);
            AssistLevel->fields.assistData = AssistData;
            sub_1BDB81C((CGThumbnailListItem_o *)&AssistLevel->fields.assistData, (int32_t)AssistData, v42, v43);
            EventInfoAssistLevelCounterComponent__UpdateDisp(AssistLevel, v44);
            assistCompnentList = (System_Collections_Generic_List_object__o *)this->fields.assistCompnentList;
            if ( !assistCompnentList )
              sub_1BDBAD4(0LL, v45);
            items = assistCompnentList->fields._items;
            v50 = Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__;
            ++assistCompnentList->fields._version;
            if ( !items )
              sub_1BDBAD4(assistCompnentList, v45);
            size = assistCompnentList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                assistCompnentList,
                (Il2CppObject *)AssistLevel,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v52 = &items->obj.klass + size;
              assistCompnentList->fields._size = size + 1;
              v52[4] = (Il2CppClass *)AssistLevel;
              sub_1BDB81C((CGThumbnailListItem_o *)(v52 + 4), (int32_t)AssistLevel, v46, v47);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v54,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B4509D & 1) == 0 )
  {
    sub_1BDB878(&EventInfoAssistLevelCounterControl___c_TypeInfo, v1);
    byte_4B4509D = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventInfoAssistLevelCounterControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoAssistLevelCounterControl___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, 0LL);
  return data->fields.assistId == this->fields.assistId;
}