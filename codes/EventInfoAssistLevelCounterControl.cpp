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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B169BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B169BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseAssistEffectConfirmDialog((CommonUI_o *)Instance, 0LL);
}


EventInfoAssistLevelCounterComponent_o *__fastcall EventInfoAssistLevelCounterControl__CreateAssistLevel(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *baseAssistLevelPrefab; // x20
  Il2CppObject *v12; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x22
  UnityEngine_GameObject_o *v16; // x0

  if ( (byte_4B169BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___, ent, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_691/*"("*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v9, v10);
    byte_4B169BA = 1;
  }
  baseAssistLevelPrefab = (Il2CppObject *)this->fields.baseAssistLevelPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ent);
  v12 = UnityEngine_Object__Instantiate_object_(
          baseAssistLevelPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_EventInfoAssistLevelCounterComponent___);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_13;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    if ( !this->fields.baseAssistLevelPrefab
      || (v15 = gameObject,
          gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                 (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab,
                                                 0LL),
          !ent)
      || (gameObject = (UnityEngine_Object_o *)System_String__Concat_62414484(
                                                 (System_String_o *)gameObject,
                                                 (System_String_o *)StringLiteral_691/*"("*/,
                                                 ent->fields.value,
                                                 (System_String_o *)StringLiteral_809/*")"*/,
                                                 0LL),
          !v15)
      || (UnityEngine_Object__set_name(v15, (System_String_o *)gameObject, 0LL),
          v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL),
          GameObjectExtensions__SafeSetParent_34336992(v16, this->fields.rootObject, 0LL),
          (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v12,
                                                  0LL)) == 0LL) )
    {
LABEL_13:
      sub_1BCAA3C(gameObject, v14);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  return (EventInfoAssistLevelCounterComponent_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
EventInfoAssistLevelCounterComponent_AssistData_o *__fastcall EventInfoAssistLevelCounterControl__GetAssistData(
        EventInfoAssistLevelCounterControl_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__o *assistDataList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B169BB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__,
      *(_QWORD *)&assistId,
      method);
    sub_1BCA7E0(&System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__, v8, v9);
    sub_1BCA7E0(&EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo, v10, v11);
    byte_4B169BB = 1;
  }
  v12 = sub_1BCAA2C(EventInfoAssistLevelCounterControl___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&assistId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = assistId,
        assistDataList = this->fields.assistDataList,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_EventInfoAssistLevelCounterComponent_AssistData__TypeInfo,
                                              v14,
                                              v15,
                                              v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_EventInfoAssistLevelCounterControl___c__DisplayClass14_0__GetAssistData_b__0__,
          0LL),
        !assistDataList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (EventInfoAssistLevelCounterComponent_AssistData_o *)System_Collections_Generic_List_object___Find(
                                                                (System_Collections_Generic_List_object__o *)assistDataList,
                                                                (System_Predicate_T__o *)v18,
                                                                (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent_AssistData__Find__);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B169B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__, entity, method);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo, v10, v11);
    byte_4B169B6 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent___ctor__);
  this->fields.assistCompnentList = (struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *)v15;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.assistCompnentList,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall EventInfoAssistLevelCounterControl__OnClickOpenDialogButton(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v17; // x20
  int32_t eventId; // w21
  AssistEffectConfirmDialog_ClickDelegate_o *v19; // x22

  if ( (byte_4B169B9 & 1) == 0 )
  {
    sub_1BCA7E0(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B169B9 = 1;
  }
  v10 = Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_EventInfoAssistLevelCounterControl_OnClickOpenDialogButton__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v17 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v19 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                               AssistEffectConfirmDialog_ClickDelegate_TypeInfo,
                                                               v13,
                                                               v14,
                                                               v15),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v19,
            (Il2CppObject *)this,
            Method_EventInfoAssistLevelCounterControl_CloseAssistEffectFonfirmDialog__,
            0LL),
          !v17) )
    {
      sub_1BCAA3C(Instance, v13);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v17, eventId, v19, 0LL);
  }
}


void __fastcall EventInfoAssistLevelCounterControl__Redisplay(
        EventInfoAssistLevelCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__o *assistCompnentList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B169B8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__, v8, v9);
    byte_4B169B8 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)assistCompnentList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BCAA3C(0LL, v11);
    EventInfoAssistLevelCounterComponent__UpdateDisp((EventInfoAssistLevelCounterComponent_o *)v12.fields._current, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoAssistLevelCounterComponent__Dispose__);
}


void __fastcall EventInfoAssistLevelCounterControl__Setup(
        EventInfoAssistLevelCounterControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *baseAssistLevelPrefab; // x21
  __int64 v28; // x1
  UnityEngine_Object_o *titleSprite; // x21
  __int64 v30; // x1
  UISprite_o *v31; // x21
  System_String_o *titleSpriteName; // x22
  UnityEngine_Object_o *openDialogButtonSprite; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  UISprite_o *v37; // x21
  System_String_o *buttonSpriteName; // x22
  EventInfoAssistLevelCounterControl___c_c *v39; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v41; // x22
  struct EventInfoAssistLevelCounterControl___c_StaticFields *static_fields; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Collections_Generic_List_object__o *v50; // x0
  __int64 v51; // x1
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *current; // x20
  int32_t v55; // w1
  const MethodInfo *v56; // x2
  EventInfoAssistLevelCounterComponent_AssistData_o *AssistData; // x21
  const MethodInfo *v58; // x2
  __int64 v59; // x1
  EventInfoAssistLevelCounterComponent_o *AssistLevel; // x20
  _BOOL8 v61; // x0
  __int64 v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  const MethodInfo *v69; // x1
  __int64 v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_Generic_List_object__o *assistCompnentList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x8
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B169B7 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, entitys, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventUiValueEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__get_Current__, v13, v14);
    sub_1BCA7E0(&System_Func_EventUiValueEntity__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__, v23, v24);
    sub_1BCA7E0(&EventInfoAssistLevelCounterControl___c_TypeInfo, v25, v26);
    byte_4B169B7 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  if ( entitys )
  {
    baseAssistLevelPrefab = (UnityEngine_Object_o *)this->fields.baseAssistLevelPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entitys);
    if ( !UnityEngine_Object__op_Equality(baseAssistLevelPrefab, 0LL, 0LL) )
    {
      titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      if ( UnityEngine_Object__op_Inequality(titleSprite, 0LL, 0LL) )
      {
        v31 = this->fields.titleSprite;
        titleSpriteName = this->fields.titleSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30);
        AtlasManager__SetEventUI(v31, titleSpriteName, 0LL);
      }
      openDialogButtonSprite = (UnityEngine_Object_o *)this->fields.openDialogButtonSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
      if ( UnityEngine_Object__op_Inequality(openDialogButtonSprite, 0LL, 0LL) )
      {
        v37 = this->fields.openDialogButtonSprite;
        buttonSpriteName = this->fields.buttonSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v34);
        AtlasManager__SetEventUI(v37, buttonSpriteName, 0LL);
      }
      v39 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      if ( !EventInfoAssistLevelCounterControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoAssistLevelCounterControl___c_TypeInfo, v34);
        v39 = EventInfoAssistLevelCounterControl___c_TypeInfo;
      }
      _9__10_0 = (System_Func_object__int__o *)v39->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39, v34);
          v39 = EventInfoAssistLevelCounterControl___c_TypeInfo;
        }
        v41 = (Il2CppObject *)v39->static_fields->__9;
        _9__10_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                   System_Func_EventUiValueEntity__int__TypeInfo,
                                                   v34,
                                                   v35,
                                                   v36);
        System_Func_object__int____ctor(
          _9__10_0,
          v41,
          Method_EventInfoAssistLevelCounterControl___c__Setup_b__10_0__,
          0LL);
        static_fields = EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
          (int64_t)_9__10_0,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
      v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__10_0,
                                                                   (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      v50 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v49,
                                                           (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventUiValueEntity___);
      if ( !v50 )
        sub_1BCAA3C(0LL, v51);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v82,
        v50,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventUiValueEntity__GetEnumerator__);
      v83 = v82;
      while ( 1 )
      {
        v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v83,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__MoveNext__);
        if ( !v52 )
          break;
        current = v83.fields._current;
        if ( !v83.fields._current )
          sub_1BCAA3C(v52, v53);
        if ( HIDWORD(v83.fields._current[1].klass) == 6 )
        {
          v55 = System_Int32__Parse((System_String_o *)v83.fields._current[1].monitor, 0LL);
          AssistData = EventInfoAssistLevelCounterControl__GetAssistData(this, v55, v56);
          AssistLevel = EventInfoAssistLevelCounterControl__CreateAssistLevel(
                          this,
                          (EventUiValueEntity_o *)current,
                          v58);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
          v61 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssistLevel, 0LL, 0LL);
          if ( !v61 )
          {
            if ( !AssistLevel )
              sub_1BCAA3C(v61, v62);
            AssistLevel->fields.assistData = AssistData;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&AssistLevel->fields.assistData,
              (int64_t)AssistData,
              v63,
              v64,
              v65,
              v66,
              v67,
              v68);
            EventInfoAssistLevelCounterComponent__UpdateDisp(AssistLevel, v69);
            assistCompnentList = (System_Collections_Generic_List_object__o *)this->fields.assistCompnentList;
            if ( !assistCompnentList )
              sub_1BCAA3C(0LL, v70);
            items = assistCompnentList->fields._items;
            v79 = Method_System_Collections_Generic_List_EventInfoAssistLevelCounterComponent__Add__;
            ++assistCompnentList->fields._version;
            if ( !items )
              sub_1BCAA3C(assistCompnentList, v70);
            size = assistCompnentList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                assistCompnentList,
                (Il2CppObject *)AssistLevel,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
            }
            else
            {
              v81 = &items->obj.klass + size;
              assistCompnentList->fields._size = size + 1;
              v81[4] = (Il2CppClass *)AssistLevel;
              sub_1BCA784((PartyOrganizationUtility_o *)(v81 + 4), (int64_t)AssistLevel, v71, v72, v73, v74, v75, v76);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v83,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventUiValueEntity__Dispose__);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B169BD & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoAssistLevelCounterControl___c_TypeInfo, v1, v2);
    byte_4B169BD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoAssistLevelCounterControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoAssistLevelCounterControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoAssistLevelCounterControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return data->fields.assistId == this->fields.assistId;
}