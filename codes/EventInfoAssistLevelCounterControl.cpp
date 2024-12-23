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

  if ( (byte_4B67376 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B67376 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v3);
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

  if ( (byte_4B67374 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___, ent);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_691/*"("*/, v6);
    sub_1BE4ACC(&StringLiteral_809/*")"*/, v7);
    byte_4B67374 = 1;
  }
  baseAssistLevelPrefab = (Il2CppObject *)this->fields.baseAssistLevelPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         baseAssistLevelPrefab,
         (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
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
      || (gameObject = (UnityEngine_Object_o *)System_String__Concat_62712072(
                                                 (System_String_o *)gameObject,
                                                 (System_String_o *)StringLiteral_691/*"("*/,
                                                 ent->fields.value,
                                                 (System_String_o *)StringLiteral_809/*")"*/,
                                                 0LL),
          !v12)
      || (UnityEngine_Object__set_name(v12, (System_String_o *)gameObject, 0LL),
          v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL),
          GameObjectExtensions__SafeSetParent_34492740(v13, this->fields.rootObject, 0LL),
          (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v9,
                                                  0LL)) == 0LL) )
    {
LABEL_13:
      sub_1BE4D28(gameObject, v11);
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

  if ( (byte_4B67375 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__,
      *(_QWORD *)&assistId);
    sub_1BE4ACC(&System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo, v5);
    sub_1BE4ACC(&Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__, v6);
    sub_1BE4ACC(&EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo, v7);
    byte_4B67375 = 1;
  }
  v8 = sub_1BE4D18(EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = assistId,
        assistDataList = this->fields.assistDataList,
        v12 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__,
          0LL),
        !assistDataList) )
  {
    sub_1BE4D28(v9, v10);
  }
  return (EventInfoAssistLevelCounterComponent_AssistData_o *)System_Collections_Generic_List_object___Find(
                                                                (System_Collections_Generic_List_object__o *)assistDataList,
                                                                (System_Predicate_T__o *)v12,
                                                                (const MethodInfo_35EC88C *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
}


void __fastcall EventInfoAssistLevelCounterControl__Initialization(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B67370 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__, entity);
    sub_1BE4ACC(&System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo, v10);
    byte_4B67370 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
  this->fields.assistCompnentList = (struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *)v11;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.assistCompnentList,
    (int64_t)v11,
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

  if ( (byte_4B67373 & 1) == 0 )
  {
    sub_1BE4ACC(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BE4ACC(&Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__, v3);
    sub_1BE4ACC(&Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B67373 = 1;
  }
  v6 = Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BE4AE4(Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v11 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v13 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_1BE4D18(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v13,
            (Il2CppObject *)this,
            Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__,
            0LL),
          !v11) )
    {
      sub_1BE4D28(Instance, v9);
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

  if ( (byte_4B67372 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__,
      method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__, v3);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__get_Current__,
      v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__, v5);
    byte_4B67372 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
    sub_1BE4D28(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)assistCompnentList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BE4D28(0LL, v7);
    EventInfoAssistLevelCounterComponent__UpdateDisp((EventInfoAssistLevelCounterComponent_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_object__o *v34; // x0
  __int64 v35; // x1
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppObject *current; // x20
  int32_t v39; // w1
  const MethodInfo *v40; // x2
  EventInfoAssistLevelCounterComponent_AssistData_o *AssistData; // x21
  const MethodInfo *v42; // x2
  EventInfoAssistLevelCounterComponent_o *AssistLevel; // x20
  _BOOL8 v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  const MethodInfo *v52; // x1
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_object__o *assistCompnentList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x8
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B67371 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, entitys);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_EventUiValueEntity___, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__get_Current__, v9);
    sub_1BE4ACC(&System_Func_EventUiValueEntity__int__TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__, v12);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v13);
    sub_1BE4ACC(&Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__, v14);
    sub_1BE4ACC(&EventInfoAssistLevelCounterControl___c_TypeInfo, v15);
    byte_4B67371 = 1;
  }
  memset(&v66, 0, sizeof(v66));
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
        _9__10_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__10_0,
          v25,
          Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__,
          0LL);
        static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
          (int64_t)_9__10_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__10_0,
                                                                   (const MethodInfo_2F826FC *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      v34 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v33,
                                                           (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
      if ( !v34 )
        sub_1BE4D28(0LL, v35);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v65,
        v34,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
      v66 = v65;
      while ( 1 )
      {
        v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v66,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
        if ( !v36 )
          break;
        current = v66.fields._current;
        if ( !v66.fields._current )
          sub_1BE4D28(v36, v37);
        if ( HIDWORD(v66.fields._current[1].klass) == 6 )
        {
          v39 = System_Int32__Parse((System_String_o *)v66.fields._current[1].monitor, 0LL);
          AssistData = EventInfoAssistLevelCounterControl__GetAssistData(this, v39, v40);
          AssistLevel = EventInfoAssistLevelCounterControl__CreateAssistLevel(
                          this,
                          (EventUiValueEntity_o *)current,
                          v42);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v44 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssistLevel, 0LL, 0LL);
          if ( !v44 )
          {
            if ( !AssistLevel )
              sub_1BE4D28(v44, v45);
            AssistLevel->fields.assistData = AssistData;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&AssistLevel->fields.assistData,
              (int64_t)AssistData,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51);
            EventInfoAssistLevelCounterComponent__UpdateDisp(AssistLevel, v52);
            assistCompnentList = (System_Collections_Generic_List_object__o *)this->fields.assistCompnentList;
            if ( !assistCompnentList )
              sub_1BE4D28(0LL, v53);
            items = assistCompnentList->fields._items;
            v62 = Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__;
            ++assistCompnentList->fields._version;
            if ( !items )
              sub_1BE4D28(assistCompnentList, v53);
            size = assistCompnentList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                assistCompnentList,
                (Il2CppObject *)AssistLevel,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
            }
            else
            {
              v64 = &items->obj.klass + size;
              assistCompnentList->fields._size = size + 1;
              v64[4] = (Il2CppClass *)AssistLevel;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)AssistLevel, v54, v55, v56, v57, v58, v59);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v66,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B67377 & 1) == 0 )
  {
    sub_1BE4ACC(&EventInfoAssistLevelCounterControl___c_TypeInfo, v1);
    byte_4B67377 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventInfoAssistLevelCounterControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoAssistLevelCounterControl___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, 0LL);
  return data->fields.assistId == this->fields.assistId;
}