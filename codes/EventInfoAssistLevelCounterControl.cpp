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

  if ( (byte_4C276CE & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C276CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
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

  if ( (byte_4C276CC & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_654/*"("*/);
    sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C276CC = 1;
  }
  baseAssistLevelPrefab = (Il2CppObject *)this->fields.baseAssistLevelPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         baseAssistLevelPrefab,
         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
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
      || (gameObject = (UnityEngine_Object_o *)System_String__Concat_63498116(
                                                 (System_String_o *)gameObject,
                                                 (System_String_o *)StringLiteral_654/*"("*/,
                                                 ent->fields.value,
                                                 (System_String_o *)StringLiteral_759/*")"*/,
                                                 0),
          !v9)
      || (UnityEngine_Object__set_name(v9, (System_String_o *)gameObject, 0),
          v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0),
          GameObjectExtensions__SafeSetParent_35924288(v10, this->fields.rootObject, 0),
          (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0)) == 0) )
    {
LABEL_13:
      sub_1C2D6EC(gameObject, v8);
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
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__o *assistDataList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C276CD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
    sub_1C2D490(&System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo);
    sub_1C2D490(&Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__);
    sub_1C2D490(&EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo);
    byte_4C276CD = 1;
  }
  v5 = sub_1C2D6DC(EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = assistId,
        assistDataList = this->fields.assistDataList,
        v9 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__,
          0),
        !assistDataList) )
  {
    sub_1C2D6EC(v6, v7);
  }
  return (EventInfoAssistLevelCounterComponent_AssistData_o *)System_Collections_Generic_List_object___Find(
                                                                (System_Collections_Generic_List_object__o *)assistDataList,
                                                                (System_Predicate_T__o *)v9,
                                                                (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
}


void EventInfoAssistLevelCounterControl__Initialization(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C276C8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo);
    byte_4C276C8 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
  this->fields.assistCompnentList = (struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.assistCompnentList, (int32_t)v6, v7, v8);
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

  if ( (byte_4C276CB & 1) == 0 )
  {
    sub_1C2D490(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__);
    sub_1C2D490(&Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C276CB = 1;
  }
  v3 = Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v8 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v10 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v10,
            (Il2CppObject *)this,
            Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__,
            0),
          !v8) )
    {
      sub_1C2D6EC(Instance, v6);
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
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C276CA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
    byte_4C276CA = 1;
  }
  memset(&v5, 0, sizeof(v5));
  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)assistCompnentList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C2D6EC(0, v4);
    EventInfoAssistLevelCounterComponent__UpdateDisp((EventInfoAssistLevelCounterComponent_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
}


void EventInfoAssistLevelCounterControl__Setup(
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
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v14; // x22
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_object__o *v19; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x20
  int32_t v24; // w1
  const MethodInfo *v25; // x2
  EventInfoAssistLevelCounterComponent_AssistData_o *AssistData; // x21
  const MethodInfo *v27; // x2
  EventInfoAssistLevelCounterComponent_o *AssistLevel; // x20
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_object__o *assistCompnentList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x8
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C276C9 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__get_Current__);
    sub_1C2D490(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__);
    sub_1C2D490(&EventInfoAssistLevelCounterControl___c_TypeInfo);
    byte_4C276C9 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( entitys )
  {
    baseAssistLevelPrefab = (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseAssistLevelPrefab, 0, 0) )
    {
      titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleSprite, 0, 0) )
      {
        v7 = this->fields.titleSprite;
        titleSpriteName = this->fields.titleSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v7, titleSpriteName, 0);
      }
      openDialogButtonSprite = (UnityEngine_Object_o *)this->fields.openDialogButtonSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(openDialogButtonSprite, 0, 0) )
      {
        v10 = this->fields.openDialogButtonSprite;
        buttonSpriteName = this->fields.buttonSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v10, buttonSpriteName, 0);
      }
      v12 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      if ( !EventInfoAssistLevelCounterControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoAssistLevelCounterControl___c_TypeInfo);
        v12 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      }
      _9__10_0 = (System_Func_object__int__o *)v12->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = EventInfoAssistLevelCounterControl___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__10_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__10_0,
          v14,
          Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__,
          0);
        static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v16, v17);
      }
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__10_0,
                                                                   (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      v19 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v18,
                                                           (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
      if ( !v19 )
        sub_1C2D6EC(0, v20);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        v19,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
      v43 = v42;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v43,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
        if ( !v21 )
          break;
        current = v43.fields._current;
        if ( !v43.fields._current )
          sub_1C2D6EC(v21, v22);
        if ( HIDWORD(v43.fields._current[1].klass) == 6 )
        {
          v24 = System_Int32__Parse((System_String_o *)v43.fields._current[1].monitor, 0);
          AssistData = EventInfoAssistLevelCounterControl__GetAssistData(this, v24, v25);
          AssistLevel = EventInfoAssistLevelCounterControl__CreateAssistLevel(
                          this,
                          (EventUiValueEntity_o *)current,
                          v27);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v29 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssistLevel, 0, 0);
          if ( !v29 )
          {
            if ( !AssistLevel )
              sub_1C2D6EC(v29, v30);
            AssistLevel->fields.assistData = AssistData;
            sub_1C2D434((CGThumbnailListItem_o *)&AssistLevel->fields.assistData, (int32_t)AssistData, v31, v32);
            EventInfoAssistLevelCounterComponent__UpdateDisp(AssistLevel, v33);
            assistCompnentList = (System_Collections_Generic_List_object__o *)this->fields.assistCompnentList;
            if ( !assistCompnentList )
              sub_1C2D6EC(0, v34);
            items = assistCompnentList->fields._items;
            v39 = Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__;
            ++assistCompnentList->fields._version;
            if ( !items )
              sub_1C2D6EC(assistCompnentList, v34);
            size = assistCompnentList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                assistCompnentList,
                (Il2CppObject *)AssistLevel,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &items->obj.klass + size;
              assistCompnentList->fields._size = size + 1;
              v41[4] = (Il2CppClass *)AssistLevel;
              sub_1C2D434((CGThumbnailListItem_o *)(v41 + 4), (int32_t)AssistLevel, v35, v36);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v43,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    }
  }
}


void EventInfoAssistLevelCounterControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C276CF & 1) == 0 )
  {
    sub_1C2D490(&EventInfoAssistLevelCounterControl___c_TypeInfo);
    byte_4C276CF = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventInfoAssistLevelCounterControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoAssistLevelCounterControl___c_o *)v1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return data->fields.assistId == this->fields.assistId;
}