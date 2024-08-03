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

  if ( (byte_49FCF26 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FCF26 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  UnityEngine_Object_o *v11; // x22
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_49FCF24 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___, ent);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_697/*"("*/, v6);
    sub_1B640C8(&StringLiteral_815/*")"*/, v7);
    byte_49FCF24 = 1;
  }
  baseAssistLevelPrefab = (Il2CppObject *)this->fields.baseAssistLevelPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         baseAssistLevelPrefab,
         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_13;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
    if ( !this->fields.baseAssistLevelPrefab
      || (v11 = gameObject,
          gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                 (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab,
                                                 0LL),
          !ent)
      || (gameObject = (UnityEngine_Object_o *)System_String__Concat_61388660(
                                                 (System_String_o *)gameObject,
                                                 (System_String_o *)StringLiteral_697/*"("*/,
                                                 ent->fields.value,
                                                 (System_String_o *)StringLiteral_815/*")"*/,
                                                 0LL),
          !v11)
      || (UnityEngine_Object__set_name(v11, (System_String_o *)gameObject, 0LL),
          v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL),
          GameObjectExtensions__SafeSetParent_33381252(v12, this->fields.rootObject, 0LL),
          (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v9,
                                                  0LL)) == 0LL) )
    {
LABEL_13:
      sub_1B64324(gameObject);
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
  __int64 v11; // x2
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__o *assistDataList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FCF25 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__,
      *(_QWORD *)&assistId);
    sub_1B640C8(&System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo, v5);
    sub_1B640C8(&Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__, v6);
    sub_1B640C8(&EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo, v7);
    byte_49FCF25 = 1;
  }
  v8 = sub_1B64314(EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&assistId, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = assistId,
        assistDataList = this->fields.assistDataList,
        v13 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo,
                                              v10,
                                              v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__,
          0LL),
        !assistDataList) )
  {
    sub_1B64324(v9);
  }
  return (EventInfoAssistLevelCounterComponent_AssistData_o *)System_Collections_Generic_List_object___Find(
                                                                (System_Collections_Generic_List_object__o *)assistDataList,
                                                                (System_Predicate_T__o *)v13,
                                                                (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
}


void __fastcall EventInfoAssistLevelCounterControl__Initialization(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FCF20 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__, entity);
    sub_1B640C8(&System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo, v6);
    byte_49FCF20 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
  this->fields.assistCompnentList = (struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assistCompnentList, (int32_t)v9, v10, v11);
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
  __int64 v10; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v12; // x20
  int32_t eventId; // w21
  AssistEffectConfirmDialog_ClickDelegate_o *v14; // x22

  if ( (byte_49FCF23 & 1) == 0 )
  {
    sub_1B640C8(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__, v3);
    sub_1B640C8(&Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FCF23 = 1;
  }
  v6 = Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v12 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v14 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                               AssistEffectConfirmDialog_ClickDelegate_TypeInfo,
                                                               v9,
                                                               v10),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v14,
            (Il2CppObject *)this,
            Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__,
            0LL),
          !v12) )
    {
      sub_1B64324(Instance);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v12, eventId, v14, 0LL);
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

  if ( (byte_49FCF22 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__,
      method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__, v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__get_Current__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__, v5);
    byte_49FCF22 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)assistCompnentList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    EventInfoAssistLevelCounterComponent__UpdateDisp((EventInfoAssistLevelCounterComponent_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
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
  __int64 v21; // x1
  __int64 v22; // x2
  UISprite_o *v23; // x21
  System_String_o *buttonSpriteName; // x22
  EventInfoAssistLevelCounterControl___c_c *v25; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v27; // x22
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_List_object__o *v32; // x0
  _BOOL8 v33; // x0
  Il2CppObject *current; // x20
  int32_t v35; // w1
  const MethodInfo *v36; // x2
  EventInfoAssistLevelCounterComponent_AssistData_o *AssistData; // x21
  const MethodInfo *v38; // x2
  EventInfoAssistLevelCounterComponent_o *AssistLevel; // x20
  _BOOL8 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  const MethodInfo *v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_List_object__o *assistCompnentList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x8
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FCF21 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, entitys);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_EventUiValueEntity___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__get_Current__, v9);
    sub_1B640C8(&System_Func_EventUiValueEntity__int__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__, v14);
    sub_1B640C8(&EventInfoAssistLevelCounterControl___c_TypeInfo, v15);
    byte_49FCF21 = 1;
  }
  memset(&v52, 0, sizeof(v52));
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
        v23 = this->fields.openDialogButtonSprite;
        buttonSpriteName = this->fields.buttonSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v23, buttonSpriteName, 0LL);
      }
      v25 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      if ( !EventInfoAssistLevelCounterControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoAssistLevelCounterControl___c_TypeInfo);
        v25 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      }
      _9__10_0 = (System_Func_object__int__o *)v25->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = EventInfoAssistLevelCounterControl___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v25->static_fields->__9;
        _9__10_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventUiValueEntity__int__TypeInfo, v21, v22);
        System_Func_object__int____ctor(
          _9__10_0,
          v27,
          Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__,
          0LL);
        static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v29, v30);
      }
      v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__10_0,
                                                                   (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      v32 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v31,
                                                           (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
      if ( !v32 )
        sub_1B64324(0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        v32,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
      v52 = v51;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v52,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
        if ( !v33 )
          break;
        current = v52.fields._current;
        if ( !v52.fields._current )
          sub_1B64324(v33);
        if ( HIDWORD(v52.fields._current[1].klass) == 6 )
        {
          v35 = System_Int32__Parse((System_String_o *)v52.fields._current[1].monitor, 0LL);
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
              sub_1B64324(v40);
            AssistLevel->fields.assistData = AssistData;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&AssistLevel->fields.assistData,
              (int32_t)AssistData,
              v41,
              v42);
            EventInfoAssistLevelCounterComponent__UpdateDisp(AssistLevel, v43);
            assistCompnentList = (System_Collections_Generic_List_object__o *)this->fields.assistCompnentList;
            if ( !assistCompnentList )
              sub_1B64324(0LL);
            items = assistCompnentList->fields._items;
            v48 = Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__;
            ++assistCompnentList->fields._version;
            if ( !items )
              sub_1B64324(assistCompnentList);
            size = assistCompnentList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                assistCompnentList,
                (Il2CppObject *)AssistLevel,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v50 = &items->obj.klass + size;
              assistCompnentList->fields._size = size + 1;
              v50[4] = (Il2CppClass *)AssistLevel;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)AssistLevel, v44, v45);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v52,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCF27 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoAssistLevelCounterControl___c_TypeInfo, v1);
    byte_49FCF27 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventInfoAssistLevelCounterControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoAssistLevelCounterControl___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return data->fields.assistId == this->fields.assistId;
}