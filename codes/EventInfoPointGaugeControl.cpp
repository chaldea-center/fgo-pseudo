void EventInfoPointGaugeControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  EventInfoPointGaugeControl_c *v7; // x8
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x9
  int32_t v9; // w1
  struct EventInfoPointGaugeControl_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D31E32 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C93AD4(&StringLiteral_16640/*"_battle"*/);
    sub_1C93AD4(&StringLiteral_17338/*"bit_gauge_change"*/);
    byte_4D31E32 = 1;
  }
  EventInfoPointGaugeControl_TypeInfo->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE = (struct System_String_o *)StringLiteral_17338/*"bit_gauge_change"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventInfoPointGaugeControl_TypeInfo->static_fields,
    StringLiteral_17338/*"bit_gauge_change"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = EventInfoPointGaugeControl_TypeInfo;
  static_fields = EventInfoPointGaugeControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_GAUGE_POSITION.fields.x = 0xC3B98000C1F80000LL;
  static_fields->EVENT_POINT_GAUGE_POSITION.fields.z = 0.0;
  v9 = StringLiteral_16640/*"_battle"*/;
  v10 = v7->static_fields;
  v10->BATTLE_MODE_SUFFIX = (struct System_String_o *)StringLiteral_16640/*"_battle"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10->BATTLE_MODE_SUFFIX, v9, v11, v12, v13, v14, v15, v16);
}


void EventInfoPointGaugeControl___ctor(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_GameObject_o *EventInfoPointGaugeControl__CreateEventPointGaugePrefab(
        EventInfoPointGaugeControl_o *this,
        System_Nullable_Vector3__o pos,
        float subMarginX,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  AssetData_o *eventInfoAssetData; // x0
  Il2CppObject *Object_object__51927708; // x22
  bool v10; // w8
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *v12; // x22
  bool v13; // w8
  float x; // s0
  EventInfoPointGaugeControl_c *v15; // x0
  Il2CppObject *Component_object; // x0
  struct EventInfoPointGaugeComponent_o **p_EventPointGaugeComponent_k__BackingField; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct UnityEngine_GameObject_o *EffectParent; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  UnityEngine_Vector3_o v31; // 0:kr00_12.12
  UnityEngine_Vector3_o EVENT_POINT_GAUGE_POSITION; // 0:kr14_12.12
  __int64 v33; // 0:s1.4,4:s2.4

  v5 = *(_QWORD *)&pos.fields.value.fields.y;
  v6 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4D31E27 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
    sub_1C93AD4(&Method_System_Nullable_Vector3__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_6255/*"EventInfoPointGaugePrefab"*/);
    byte_4D31E27 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( !eventInfoAssetData )
    goto LABEL_20;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              eventInfoAssetData,
                              (System_String_o *)StringLiteral_6255/*"EventInfoPointGaugePrefab"*/,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51927708, 0, 0);
  result = 0;
  if ( !v10 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__Instantiate_object_(
            Object_object__51927708,
            (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0);
    result = 0;
    if ( !v13 )
    {
      GameObjectExtensions__SafeSetParent_36750960((UnityEngine_GameObject_o *)v12, this->fields.eventRoot, 0);
      if ( (_BYTE)v6 )
      {
        v33 = v5;
        x = *((float *)&v6 + 1);
      }
      else
      {
        v15 = EventInfoPointGaugeControl_TypeInfo;
        if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v15 = EventInfoPointGaugeControl_TypeInfo;
        }
        EVENT_POINT_GAUGE_POSITION = v15->static_fields->EVENT_POINT_GAUGE_POSITION;
        x = EVENT_POINT_GAUGE_POSITION.fields.x;
        v33 = *(_QWORD *)&EVENT_POINT_GAUGE_POSITION.fields.y;
      }
      v31.fields.x = x;
      *(_QWORD *)&v31.fields.y = v33;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v12, v31, 0);
      if ( v12 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v12,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
        this->fields._EventPointGaugeComponent_k__BackingField = (struct EventInfoPointGaugeComponent_o *)Component_object;
        p_EventPointGaugeComponent_k__BackingField = &this->fields._EventPointGaugeComponent_k__BackingField;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
          (int32_t)Component_object,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        eventInfoAssetData = (AssetData_o *)this->fields._EventPointGaugeComponent_k__BackingField;
        if ( eventInfoAssetData )
        {
          EventInfoPointGaugeComponent__SetupSubMarginX(
            (EventInfoPointGaugeComponent_o *)eventInfoAssetData,
            subMarginX,
            *(const MethodInfo **)&pos.fields.hasValue);
          eventInfoAssetData = (AssetData_o *)*p_EventPointGaugeComponent_k__BackingField;
          if ( *p_EventPointGaugeComponent_k__BackingField )
          {
            EffectParent = EventInfoPointGaugeComponent__GetGenerateEffectParent(
                             (EventInfoPointGaugeComponent_o *)eventInfoAssetData,
                             *(const MethodInfo **)&pos.fields.hasValue);
            this->fields.eventPointGaugeEffectParent = EffectParent;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&this->fields.eventPointGaugeEffectParent,
              (int32_t)EffectParent,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
            return (UnityEngine_GameObject_o *)v12;
          }
        }
      }
LABEL_20:
      sub_1C93D2C(eventInfoAssetData, *(_QWORD *)&pos.fields.hasValue);
    }
  }
  return result;
}


void EventInfoPointGaugeControl__DestroyEventInfo(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_eventPointGaugeObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D31E2F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E2F = 1;
  }
  eventPointGaugeObj = this->fields.eventPointGaugeObj;
  p_eventPointGaugeObj = (GrandQuestFolderBoardItem_o *)&this->fields.eventPointGaugeObj;
  v4 = (UnityEngine_Object_o *)eventPointGaugeObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_eventPointGaugeObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(klass, 0);
    p_eventPointGaugeObj->klass = 0;
    sub_1C93A78(p_eventPointGaugeObj, 0, v7, v8, v9, v10, v11, v12);
  }
}


void EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_eventPointGaugeChangeEffectPrefab; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeChangeEffectPrefab; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D31E2D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E2D = 1;
  }
  eventPointGaugeChangeEffectPrefab = this->fields.eventPointGaugeChangeEffectPrefab;
  p_eventPointGaugeChangeEffectPrefab = (GrandQuestFolderBoardItem_o *)&this->fields.eventPointGaugeChangeEffectPrefab;
  v4 = (UnityEngine_Object_o *)eventPointGaugeChangeEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(v4, 0);
  p_eventPointGaugeChangeEffectPrefab->klass = 0;
  sub_1C93A78(p_eventPointGaugeChangeEffectPrefab, 0, v6, v7, v8, v9, v10, v11);
}


void EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointGaugeControl_o *v2; // x19
  struct UnityEngine_GameObject_array *eventPointGaugeEffectPrefabList; // x8
  unsigned __int64 v4; // x21
  __int64 max_length; // x22
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UnityEngine_GameObject_array *v14; // x8
  Il2CppClass **v15; // x0

  v2 = this;
  if ( (byte_4D31E2E & 1) == 0 )
  {
    this = (EventInfoPointGaugeControl_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E2E = 1;
  }
  eventPointGaugeEffectPrefabList = v2->fields.eventPointGaugeEffectPrefabList;
  if ( eventPointGaugeEffectPrefabList && (int)eventPointGaugeEffectPrefabList->max_length >= 1 )
  {
    v4 = 0;
    max_length = (unsigned int)eventPointGaugeEffectPrefabList->max_length;
    while ( 1 )
    {
      if ( v4 >= LODWORD(eventPointGaugeEffectPrefabList->max_length) )
LABEL_15:
        sub_1C93D34(this);
      v6 = (UnityEngine_Object_o *)eventPointGaugeEffectPrefabList->m_Items[v4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v6, 0);
      v14 = v2->fields.eventPointGaugeEffectPrefabList;
      if ( !v14 )
LABEL_13:
        sub_1C93D2C(this, v7);
      if ( v4 >= LODWORD(v14->max_length) )
        goto LABEL_15;
      v15 = &v14->obj.klass + v4;
      v15[4] = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 4), 0, v8, v9, v10, v11, v12, v13);
      if ( ++v4 == max_length )
        break;
      eventPointGaugeEffectPrefabList = v2->fields.eventPointGaugeEffectPrefabList;
      if ( !eventPointGaugeEffectPrefabList )
        goto LABEL_13;
    }
  }
}


int32_t EventInfoPointGaugeControl__GetEventPointGaugeState(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  QuestGroupMaster_o *v6; // x20
  int32_t v7; // w19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x22
  int32_t GroupId; // w21
  int32_t v12; // w22
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D31E26 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31E26 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0
    || (v6 = (QuestGroupMaster_o *)Instance,
        (Instance = (DataManager_o *)QuestGroupMaster__GetEntityListByGroupId(
                                       (QuestGroupMaster_o *)Instance,
                                       eventId,
                                       1,
                                       0)) == 0) )
  {
    sub_1C93D2C(Instance, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
  v7 = 0;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1C93D2C(v8, v9);
    GroupId = QuestGroupMaster__GetGroupId(
                v6,
                *(_DWORD *)((char *)&v14.fields._current->klass + (unsigned __int64)&word_10),
                12,
                0);
    v12 = *(_DWORD *)((char *)&word_10 + (_QWORD)current);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !((GroupId < 1) | !CondType__IsQuestClear_41038904(v12, -1, 0, 0)) )
      v7 = GroupId;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
  return v7;
}


bool EventInfoPointGaugeControl__IsEventPointGaugeOpen(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D31E25 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31E25 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, eventId, 0, 0, 0);
}


void EventInfoPointGaugeControl__LoadEventInfoAssetData(
        EventInfoPointGaugeControl_o *this,
        EventInfoPointGaugeControl_assetLoadFinish_o *callBack,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  AssetData_o *eventInfoAssetData; // x0
  AssetLoader_LoadEndDataHandler_o *v24; // x19

  if ( (byte_4D31E21 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__);
    sub_1C93AD4(&EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_6229/*"Event/Info"*/);
    byte_4D31E21 = 1;
  }
  v7 = sub_1C93D20(EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callBack;
  v16 = v7 + 24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callBack, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v7 + 32) = eventId;
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData && !AssetData__get_IsEmpty(eventInfoAssetData, 0) )
  {
    if ( *(_QWORD *)v16 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v16 + 64LL),
        *(unsigned int *)(v7 + 32),
        *(_QWORD *)(*(_QWORD *)v16 + 40LL));
  }
  else
  {
    v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v24,
      (Il2CppObject *)v7,
      Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6229/*"Event/Info"*/, v24, 1, 0);
  }
}


void EventInfoPointGaugeControl__LoadEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21

  if ( (byte_4D31E28 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__);
    sub_1C93AD4(&EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_5906/*"Effect/Event/{0}"*/);
    byte_4D31E28 = 1;
  }
  v7 = sub_1C93D20(EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callbackEndFunc;
  v16 = v7 + 24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callbackEndFunc, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v7 + 32) = eventId;
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData && !AssetData__get_IsEmpty(eventPointGaugeEffectAssetData, 0) )
  {
    if ( *(_QWORD *)v16 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v16 + 64LL),
        *(unsigned int *)(v7 + 32),
        *(_QWORD *)(*(_QWORD *)v16 + 40LL));
  }
  else
  {
    v24 = (Il2CppObject *)System_Int32__ToString((int)v7 + 32, 0);
    v25 = System_String__Format((System_String_o *)StringLiteral_5906/*"Effect/Event/{0}"*/, v24, 0);
    v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v26,
      (Il2CppObject *)v7,
      Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v25, v26, 1, 0);
  }
}


void EventInfoPointGaugeControl__LoadEventPointGaugeEffect_44226548(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callbackEndFunc,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  EventInfoPointGaugeControl_assetLoadFinish_o *v16; // x21
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3

  if ( (byte_4D31E29 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__);
    sub_1C93AD4(&EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo);
    sub_1C93AD4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_4D31E29 = 1;
  }
  v7 = sub_1C93D20(EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_QWORD *)(v7 + 16) = callbackEndFunc;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)callbackEndFunc, v10, v11, v12, v13, v14, v15);
  v16 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1C93D20(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
  EventInfoPointGaugeControl_assetLoadFinish___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
    v17);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(this, v16, eventId, v18);
}


void EventInfoPointGaugeControl__PlayEventPointGaugeAddEffect(
        EventInfoPointGaugeControl_o *this,
        int32_t gaugeState,
        int32_t effectState,
        int32_t basePoint,
        int32_t addPoint,
        System_Action_o *callback,
        bool isBattleMode,
        const MethodInfo *method)
{
  __int64 v13; // x22
  __int64 Component_object; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8
  struct System_String_array **p_addEffectNameList; // x8
  struct EventInfoPointGaugeComponent_o *v32; // x8
  struct System_String_array *v33; // x28
  struct UnityEngine_GameObject_array **p_eventPointGaugeEffectPrefabList; // x24
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  unsigned __int64 v42; // x29
  System_String_o **m_Items; // x19
  __int64 v44; // x25
  System_Text_StringBuilder_o *v45; // x26
  System_String_o *BATTLE_MODE_SUFFIX; // x1
  EventInfoPointGaugeControl_c *v47; // x0
  AssetData_o *eventPointGaugeEffectAssetData; // x27
  Il2CppObject *Object_object__51927708; // x26
  Il2CppObject *v50; // x26
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct UnityEngine_GameObject_array *v57; // x8
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  __int64 v64; // x26
  System_Action_o *klass; // x27
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  GrandQuestFolderBoardItem_o *v72; // x0
  int32_t v73; // w1
  GrandQuestFolderBoardItem_o *v74; // [xsp+0h] [xbp-80h]
  __int64 max_length; // [xsp+10h] [xbp-70h]
  int32_t v78; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4D31E2C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
    sub_1C93AD4(&UnityEngine_GameObject___TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__);
    sub_1C93AD4(&EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    byte_4D31E2C = 1;
  }
  v78 = 0;
  v13 = sub_1C93D20(EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
LABEL_61:
    sub_1C93D2C(Component_object, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = callback;
  v22 = v13 + 32;
  *(_DWORD *)(v13 + 24) = basePoint;
  *(_DWORD *)(v13 + 28) = addPoint;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)callback, v23, v24, v25, v26, v27, v28);
  if ( !this->fields.eventPointGaugeEffectAssetData )
    goto LABEL_58;
  Component_object = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Component_object = (__int64)TerminalPramsManager_TypeInfo;
  }
  static_fields = *(struct TerminalPramsManager_StaticFields **)(Component_object + 184);
  if ( static_fields->EVENT_POINT_EFFECT_STATE_ADD == effectState )
  {
    EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
    if ( !EventPointGaugeComponent_k__BackingField )
      goto LABEL_61;
    p_addEffectNameList = &EventPointGaugeComponent_k__BackingField->fields.addEffectNameList;
    goto LABEL_15;
  }
  if ( !*(_DWORD *)(Component_object + 224) )
  {
    j_il2cpp_runtime_class_init_0(Component_object);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
  }
  if ( static_fields->EVENT_POINT_EFFECT_STATE_SUB != effectState )
  {
LABEL_58:
    if ( !*(_QWORD *)v22 )
      goto LABEL_61;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v22 + 64LL),
      *(_QWORD *)(*(_QWORD *)v22 + 40LL));
    return;
  }
  v32 = this->fields._EventPointGaugeComponent_k__BackingField;
  if ( !v32 )
    goto LABEL_61;
  p_addEffectNameList = &v32->fields.subEffectNameList;
LABEL_15:
  v33 = *p_addEffectNameList;
  EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(this, v15);
  p_eventPointGaugeEffectPrefabList = &this->fields.eventPointGaugeEffectPrefabList;
  if ( this->fields.eventPointGaugeEffectPrefabList )
  {
    if ( !v33 )
      goto LABEL_61;
  }
  else
  {
    if ( !v33 )
      goto LABEL_61;
    v35 = sub_1C93B7C(UnityEngine_GameObject___TypeInfo, LODWORD(v33->max_length));
    *p_eventPointGaugeEffectPrefabList = (struct UnityEngine_GameObject_array *)v35;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventPointGaugeEffectPrefabList,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( (int)v33->max_length >= 1 )
  {
    max_length = (unsigned int)v33->max_length;
    v74 = (GrandQuestFolderBoardItem_o *)(v13 + 40);
    v42 = 0;
    m_Items = v33->m_Items;
    v44 = 32;
    do
    {
      v45 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(v45, 0);
      if ( v42 >= LODWORD(v33->max_length) )
LABEL_62:
        sub_1C93D34(Component_object);
      if ( !v45 )
        goto LABEL_61;
      System_Text_StringBuilder__Append_64509684(v45, m_Items[v42], 0);
      if ( v42 )
      {
        if ( v42 != 1 )
          goto LABEL_32;
        System_Text_StringBuilder__Append_64509684(v45, (System_String_o *)StringLiteral_16207/*"_"*/, 0);
        v78 = gaugeState;
        BATTLE_MODE_SUFFIX = System_Int32__ToString((int32_t)&v78, 0);
      }
      else
      {
        if ( !isBattleMode )
          goto LABEL_32;
        v47 = EventInfoPointGaugeControl_TypeInfo;
        if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v47 = EventInfoPointGaugeControl_TypeInfo;
        }
        BATTLE_MODE_SUFFIX = v47->static_fields->BATTLE_MODE_SUFFIX;
      }
      System_Text_StringBuilder__Append_64509684(v45, BATTLE_MODE_SUFFIX, 0);
LABEL_32:
      eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
      Component_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v45->klass->vtable._3_ToString.methodPtr)(
                           v45,
                           v45->klass->vtable._3_ToString.method);
      if ( !eventPointGaugeEffectAssetData )
        goto LABEL_61;
      Object_object__51927708 = AssetData__GetObject_object__51927708(
                                  eventPointGaugeEffectAssetData,
                                  (System_String_o *)Component_object,
                                  (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51927708, 0, 0);
      if ( (Component_object & 1) != 0 )
      {
        if ( v42 >= LODWORD(v33->max_length) )
          goto LABEL_62;
        Component_object = (__int64)this->fields.eventPointGaugeEffectAssetData;
        if ( !Component_object )
          goto LABEL_61;
        Object_object__51927708 = AssetData__GetObject_object__51927708(
                                    (AssetData_o *)Component_object,
                                    m_Items[v42],
                                    (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51927708, 0, 0);
      if ( (Component_object & 1) != 0 )
        goto LABEL_58;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v50 = UnityEngine_Object__Instantiate_object_(
              Object_object__51927708,
              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v50, 0, 0);
      if ( (Component_object & 1) != 0 )
        goto LABEL_58;
      v57 = *p_eventPointGaugeEffectPrefabList;
      if ( !*p_eventPointGaugeEffectPrefabList )
        goto LABEL_61;
      if ( v42 >= LODWORD(v57->max_length) )
        goto LABEL_62;
      v57->m_Items[v42] = (UnityEngine_GameObject_o *)v50;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)v57 + v44), (int32_t)v50, v51, v52, v53, v54, v55, v56);
      GameObjectExtensions__SafeSetParent_36750960(
        (UnityEngine_GameObject_o *)v50,
        this->fields.eventPointGaugeEffectParent,
        0);
      Component_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                    (UnityEngine_GameObject_o *)v50,
                                    (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
      v64 = Component_object;
      if ( !v42 )
      {
        if ( !Component_object )
          goto LABEL_61;
        *(_QWORD *)(Component_object + 32) = 0;
        v72 = (GrandQuestFolderBoardItem_o *)(Component_object + 32);
        v73 = 0;
LABEL_55:
        sub_1C93A78(v72, v73, v58, v59, v60, v61, v62, v63);
        goto LABEL_56;
      }
      if ( v42 == 1 )
      {
        klass = (System_Action_o *)v74->klass;
        if ( !v74->klass )
        {
          klass = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            klass,
            (Il2CppObject *)v13,
            Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__,
            0);
          *(_QWORD *)(v13 + 40) = klass;
          sub_1C93A78(v74, (int32_t)klass, v66, v67, v68, v69, v70, v71);
        }
        if ( !v64 )
          goto LABEL_61;
        *(_QWORD *)(v64 + 32) = klass;
        v72 = (GrandQuestFolderBoardItem_o *)(v64 + 32);
        v73 = (int)klass;
        goto LABEL_55;
      }
LABEL_56:
      ++v42;
      v44 += 8;
    }
    while ( max_length != v42 );
  }
}


void EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
        EventInfoPointGaugeControl_o *this,
        UnityEngine_GameObject_o *parent,
        System_String_o *name,
        int32_t beforeGauge,
        int32_t afterGauge,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x21
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppObject *Object_object__51927708; // x22
  Il2CppObject *v30; // x0
  struct UnityEngine_GameObject_o **p_eventPointGaugeChangeEffectPrefab; // x19
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *Component_object; // x19
  System_Action_o *v39; // x20
  System_Action_o *v40; // x22

  if ( (byte_4D31E2B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__);
    sub_1C93AD4(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__);
    sub_1C93AD4(&EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo);
    byte_4D31E2B = 1;
  }
  v13 = sub_1C93D20(EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_18;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = callback;
  v22 = v13 + 32;
  *(_DWORD *)(v13 + 24) = afterGauge;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)callback, v23, v24, v25, v26, v27, v28);
  if ( !this->fields.eventPointGaugeEffectAssetData || !beforeGauge || *(_DWORD *)(v13 + 24) <= beforeGauge )
    goto LABEL_21;
  EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(this, v15);
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( !eventPointGaugeEffectAssetData )
    goto LABEL_18;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              eventPointGaugeEffectAssetData,
                              name,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  eventPointGaugeEffectAssetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Object_object__51927708,
                                                    0,
                                                    0);
  if ( ((unsigned __int8)eventPointGaugeEffectAssetData & 1) != 0 )
    goto LABEL_21;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v30 = UnityEngine_Object__Instantiate_object_(
          Object_object__51927708,
          (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.eventPointGaugeChangeEffectPrefab = (struct UnityEngine_GameObject_o *)v30;
  p_eventPointGaugeChangeEffectPrefab = &this->fields.eventPointGaugeChangeEffectPrefab;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)p_eventPointGaugeChangeEffectPrefab,
    (int32_t)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  eventPointGaugeEffectAssetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)*p_eventPointGaugeChangeEffectPrefab,
                                                    0,
                                                    0);
  if ( ((unsigned __int8)eventPointGaugeEffectAssetData & 1) != 0 )
  {
LABEL_21:
    if ( *(_QWORD *)v22 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v22 + 64LL),
        *(_QWORD *)(*(_QWORD *)v22 + 40LL));
      return;
    }
LABEL_18:
    sub_1C93D2C(eventPointGaugeEffectAssetData, v15);
  }
  GameObjectExtensions__SafeSetParent_36750960(*p_eventPointGaugeChangeEffectPrefab, parent, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *p_eventPointGaugeChangeEffectPrefab,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
  v39 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v13,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
    0);
  v40 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v13,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
    0);
  if ( !Component_object )
    goto LABEL_18;
  EventPointGaugeChangeEffectAction__Setup((EventPointGaugeChangeEffectAction_o *)Component_object, v39, v40, 0);
}


void EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  TerminalPramsManager_c *v22; // x0
  const MethodInfo *v23; // x2
  EventInfoPointGaugeControl_o *v24; // x0
  int32_t m_CachedPtr; // w26
  int32_t EventPointGaugeState; // w0
  int32_t v27; // w23
  EventInfoPointGaugeControl_c *v28; // x0
  UnityEngine_GameObject_o *eventPointGaugeEffectParent; // x21
  int32_t v30; // w22
  bool v31; // zf
  System_String_o *EVENT_POINT_GAUGE_EFFECT_CHANGE; // x24
  int32_t v33; // w23
  System_Action_o *v34; // x25
  const MethodInfo *v35; // x6

  if ( (byte_4D31E2A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__);
    sub_1C93AD4(&EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo);
    byte_4D31E2A = 1;
  }
  v7 = sub_1C93D20(EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2DDED )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2DDED = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v7 + 20) = v22->static_fields->_BeforeEventActivityPoint_k__BackingField;
  *(_DWORD *)(v7 + 16) = UserEventPointMaster__GetEventActivityPoint(eventId, 0);
  if ( !byte_4D2DDEE )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2DDEE = 1;
  }
  v24 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr = v24[1].fields.eventRoot[17].fields.m_CachedPtr;
  EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v24, eventId, v23);
  *(_DWORD *)(v7 + 32) = EventPointGaugeState;
  v27 = EventPointGaugeState;
  v28 = EventInfoPointGaugeControl_TypeInfo;
  eventPointGaugeEffectParent = this->fields.eventPointGaugeEffectParent;
  if ( EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    v30 = v27;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
    v28 = EventInfoPointGaugeControl_TypeInfo;
    v30 = *(_DWORD *)(v7 + 32);
  }
  v31 = v27 == 1 && m_CachedPtr == 0;
  EVENT_POINT_GAUGE_EFFECT_CHANGE = v28->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE;
  if ( v31 )
    v33 = 1;
  else
    v33 = m_CachedPtr;
  v34 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v7,
    Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__,
    0);
  EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
    this,
    eventPointGaugeEffectParent,
    EVENT_POINT_GAUGE_EFFECT_CHANGE,
    v33,
    v30,
    v34,
    v35);
}


void EventInfoPointGaugeControl__ReleaseEventInfoAsset(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_eventInfoAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *eventInfoAssetData; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D31E31 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D31E31 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  p_eventInfoAssetData = (GrandQuestFolderBoardItem_o *)&this->fields.eventInfoAssetData;
  v4 = eventInfoAssetData;
  if ( eventInfoAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41247948(v4, 0);
    p_eventInfoAssetData->klass = 0;
    sub_1C93A78(p_eventInfoAssetData, 0, v6, v7, v8, v9, v10, v11);
  }
}


void EventInfoPointGaugeControl__ReleasePointGaugeEffectAsset(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_eventPointGaugeEffectAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *eventPointGaugeEffectAssetData; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D31E30 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D31E30 = 1;
  }
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  p_eventPointGaugeEffectAssetData = (GrandQuestFolderBoardItem_o *)&this->fields.eventPointGaugeEffectAssetData;
  v4 = eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41247948(v4, 0);
    p_eventPointGaugeEffectAssetData->klass = 0;
    sub_1C93A78(p_eventPointGaugeEffectAssetData, 0, v6, v7, v8, v9, v10, v11);
  }
}


void EventInfoPointGaugeControl__SetRootObject(
        EventInfoPointGaugeControl_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.eventRoot = root;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventRoot,
    (int32_t)root,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoPointGaugeControl__SetupEventPointGaugeAndPlayEffect(
        EventInfoPointGaugeControl_o *this,
        EventDetailEntity_o *eventDetailEntity,
        bool isActive,
        System_Action_o *callback,
        System_Nullable_Vector3__o pos,
        float subMarginX,
        const MethodInfo *method)
{
  __int64 v8; // x23
  __int64 v9; // x24
  __int64 v14; // x21
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t eventId; // w22
  const MethodInfo *v30; // x5
  const MethodInfo *v31; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3

  v8 = *(_QWORD *)&pos.fields.value.fields.y;
  v9 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4D31E23 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__);
    sub_1C93AD4(&EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo);
    sub_1C93AD4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_4D31E23 = 1;
  }
  v14 = sub_1C93D20(EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 16), (int32_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 48) = callback;
  *(_BYTE *)(v14 + 24) = isActive;
  *(_QWORD *)(v14 + 28) = v9;
  *(_QWORD *)(v14 + 36) = v8;
  *(float *)(v14 + 44) = subMarginX;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 48), (int32_t)callback, v23, v24, v25, v26, v27, v28);
  if ( !eventDetailEntity )
LABEL_13:
    sub_1C93D2C(v15, v16);
  eventId = eventDetailEntity->fields.eventId;
  if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v16) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v14 + 24),
        *(System_Nullable_Vector3__o *)(v14 + 28),
        *(float *)(v14 + 44),
        v30);
      EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        this,
        eventDetailEntity->fields.eventId,
        *(System_Action_o **)(v14 + 48),
        v31);
    }
    else
    {
      v32 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1C93D20(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v32,
        (Il2CppObject *)v14,
        Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__,
        v33);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v32, eventDetailEntity->fields.eventId, v34);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v14 + 48), 0);
  }
}


void EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        bool isActive,
        System_Nullable_Vector3__o pos,
        float subMarginX,
        const MethodInfo *method)
{
  __int64 v7; // x23
  __int64 v8; // x24
  struct UnityEngine_GameObject_o **p_eventPointGaugeObj; // x22
  UnityEngine_Object_o *eventPointGaugeObj; // x25
  const MethodInfo *v14; // x3
  struct UnityEngine_GameObject_o *EventPointGaugePrefab; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  int EventActivityPoint; // w22
  EventInfoPointGaugeControl_o *v27; // x0
  int32_t EventPointGaugeState; // w22
  TerminalPramsManager_c *v29; // x0
  TerminalPramsManager_c *v30; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w22
  unsigned int BeforeEventActivityPointGauge_k__BackingField; // w21
  const MethodInfo *v33; // x2
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x19
  bool v35; // zf
  const MethodInfo *v36; // x1
  System_Nullable_Vector3__o v37; // 0:x1.16

  v7 = *(_QWORD *)&pos.fields.value.fields.y;
  v8 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4D31E24 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D31E24 = 1;
  }
  p_eventPointGaugeObj = &this->fields.eventPointGaugeObj;
  eventPointGaugeObj = (UnityEngine_Object_o *)this->fields.eventPointGaugeObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(eventPointGaugeObj, 0, 0) )
  {
    *(_QWORD *)&v37.fields.hasValue = v8;
    *(_QWORD *)&v37.fields.value.fields.y = v7;
    EventPointGaugePrefab = EventInfoPointGaugeControl__CreateEventPointGaugePrefab(this, v37, subMarginX, v14);
    this->fields.eventPointGaugeObj = EventPointGaugePrefab;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventPointGaugeObj,
      (int32_t)EventPointGaugePrefab,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  gameObject = *p_eventPointGaugeObj;
  if ( !*p_eventPointGaugeObj )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__CheckEventActivityPointSaveData(0) )
  {
    EventActivityPoint = UserEventPointMaster__GetEventActivityPoint(eventId, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2DDDC )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2DDDC = 1;
    }
    v27 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(v27[1].fields.eventRoot[17].monitor) = EventActivityPoint;
    EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v27, eventId, v25);
    if ( !byte_4D2DDDD )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2DDDD = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    v29->static_fields->_BeforeEventActivityPointGauge_k__BackingField = EventPointGaugeState;
    TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2DDED )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2DDED = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPoint_k__BackingField = v30->static_fields->_BeforeEventActivityPoint_k__BackingField;
  if ( !byte_4D2DDEE )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
    byte_4D2DDEE = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPointGauge_k__BackingField = v30->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
  gameObject = (UnityEngine_GameObject_o *)EventInfoPointGaugeControl__GetEventPointGaugeState(
                                             (EventInfoPointGaugeControl_o *)v30,
                                             eventId,
                                             v24);
  EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
  v35 = (_DWORD)gameObject == 1 && BeforeEventActivityPointGauge_k__BackingField == 0;
  v23 = v35 ? 1LL : BeforeEventActivityPointGauge_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
LABEL_41:
    sub_1C93D2C(gameObject, v23);
  EventPointGaugeComponent_k__BackingField->fields._GaugeStateId_k__BackingField = v23;
  EventPointGaugeComponent_k__BackingField->fields._MainPoint_k__BackingField = BeforeEventActivityPoint_k__BackingField;
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, v23, v33);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(EventPointGaugeComponent_k__BackingField, v36);
}


void EventInfoPointGaugeControl__SetupEventPointGaugeDisp(
        EventInfoPointGaugeControl_o *this,
        EventDetailEntity_o *eventDetailEntity,
        bool isActive,
        System_Nullable_Vector3__o pos,
        float subMarginX,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v12; // x23
  EventUiMaster_o *Master_object; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t eventId; // w21
  const MethodInfo *v22; // x5
  TerminalPramsManager_c *v23; // x0
  TerminalPramsManager_c *v24; // x0
  Il2CppObject *v25; // x21
  TerminalPramsManager_c *v26; // x0
  EventInfoPointGaugeControl_assetLoadFinish_o *v27; // x21
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  UserEventPointEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v7 = *(_QWORD *)&pos.fields.value.fields.y;
  v8 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4D31E22 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__);
    sub_1C93AD4(&EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo);
    sub_1C93AD4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_4D31E22 = 1;
  }
  entity = 0;
  v12 = sub_1C93D20(EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_56;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 16), (int32_t)this, v15, v16, v17, v18, v19, v20);
  *(_BYTE *)(v12 + 24) = isActive;
  *(_QWORD *)(v12 + 28) = v8;
  *(_QWORD *)(v12 + 36) = v7;
  *(float *)(v12 + 44) = subMarginX;
  if ( !eventDetailEntity )
    goto LABEL_56;
  eventId = eventDetailEntity->fields.eventId;
  if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v14) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v12 + 24),
        *(System_Nullable_Vector3__o *)(v12 + 28),
        *(float *)(v12 + 44),
        v22);
    }
    else
    {
      v27 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1C93D20(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v27,
        (Il2CppObject *)v12,
        Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__,
        v28);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v27, eventDetailEntity->fields.eventId, v29);
    }
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventUiMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_56;
  if ( !EventUiMaster__HasEntity(Master_object, eventDetailEntity->fields.eventId, 0)
    && EventDetailEntity__IsEventActivityPoint(eventDetailEntity, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2DDED )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2DDED = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
    }
    if ( v23->static_fields->_BeforeEventActivityPoint_k__BackingField >= 1 )
    {
      if ( !v23->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v23);
      if ( !byte_4D2DDEE )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2DDEE = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
      }
      if ( v24->static_fields->_BeforeEventActivityPointGauge_k__BackingField >= 1 )
      {
        if ( !v24->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v24);
        if ( TerminalPramsManager__CheckEventActivityPointSaveData(0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v25 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventPointMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2A55B )
          {
            sub_1C93AD4(&NetworkManager_TypeInfo);
            byte_4D2A55B = 1;
          }
          Master_object = (EventUiMaster_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Master_object = (EventUiMaster_o *)NetworkManager_TypeInfo;
          }
          if ( v25 )
          {
            if ( UserEventPointMaster__TryGetEntity(
                   (UserEventPointMaster_o *)v25,
                   &entity,
                   (int64_t)Master_object[2].fields.list[1].monitor,
                   eventDetailEntity->fields.eventId,
                   0,
                   0) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4D2DDDC )
              {
                sub_1C93AD4(&TerminalPramsManager_TypeInfo);
                byte_4D2DDDC = 1;
              }
              v26 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v26 = TerminalPramsManager_TypeInfo;
              }
              v26->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
              if ( !byte_4D2DDDD )
              {
                sub_1C93AD4(&TerminalPramsManager_TypeInfo);
                v26 = TerminalPramsManager_TypeInfo;
                byte_4D2DDDD = 1;
              }
              if ( !v26->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v26);
                v26 = TerminalPramsManager_TypeInfo;
              }
              v26->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
              TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
            }
            return;
          }
LABEL_56:
          sub_1C93D2C(Master_object, v14);
        }
      }
    }
  }
}


EventInfoPointGaugeComponent_o *EventInfoPointGaugeControl__get_EventPointGaugeComponent(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  return this->fields._EventPointGaugeComponent_k__BackingField;
}


void EventInfoPointGaugeControl__set_EventPointGaugeComponent(
        EventInfoPointGaugeControl_o *this,
        EventInfoPointGaugeComponent_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EventPointGaugeComponent_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoPointGaugeControl___c__DisplayClass16_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPointGaugeControl___c__DisplayClass16_0___LoadEventInfoAssetData_b__0(
        EventInfoPointGaugeControl___c__DisplayClass16_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callBack; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, prefabData);
  _4__this->fields.eventInfoAssetData = prefabData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.eventInfoAssetData,
    (int32_t)prefabData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  callBack = this->fields.callBack;
  if ( callBack )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callBack->fields.invoke_impl)(
      callBack->fields.method_code,
      (unsigned int)this->fields.eventId,
      callBack->fields.method);
}


void EventInfoPointGaugeControl___c__DisplayClass17_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPointGaugeControl___c__DisplayClass17_0___SetupEventPointGaugeDisp_b__0(
        EventInfoPointGaugeControl___c__DisplayClass17_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  EventInfoPointGaugeControl_o *_4__this; // x0
  const MethodInfo *v7; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
          _4__this,
          eventId,
          this->fields.isActive,
          this->fields.pos,
          this->fields.subMarginX,
          v3),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(_4__this, *(_QWORD *)&eventId);
  }
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(_4__this, 0, eventId, v7);
}


void EventInfoPointGaugeControl___c__DisplayClass18_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  EventInfoPointGaugeControl_o *_4__this; // x0
  const MethodInfo *v7; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *_9__1; // x23
  EventInfoPointGaugeControl_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D31E34 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__);
    sub_1C93AD4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_4D31E34 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
    _4__this,
    eventId,
    this->fields.isActive,
    this->fields.pos,
    this->fields.subMarginX,
    v3);
  _9__1 = this->fields.__9__1;
  v9 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1C93D20(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    EventInfoPointGaugeControl_assetLoadFinish___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      v10);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12, v13, v14, v15, v16);
  }
  if ( !v9 )
LABEL_8:
    sub_1C93D2C(_4__this, *(_QWORD *)&eventId);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(v9, _9__1, eventId, v7);
}


void EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, eId);
  EventInfoPointGaugeControl__PlayEventPointGaugeEffect(this->fields.__4__this, eId, this->fields.callback, v3);
}


void EventInfoPointGaugeControl___c__DisplayClass23_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPointGaugeControl___c__DisplayClass23_0___LoadEventPointGaugeEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass23_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, prefabData);
  _4__this->fields.eventPointGaugeEffectAssetData = prefabData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.eventPointGaugeEffectAssetData,
    (int32_t)prefabData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  callbackEndFunc = this->fields.callbackEndFunc;
  if ( callbackEndFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackEndFunc->fields.invoke_impl)(
      callbackEndFunc->fields.method_code,
      (unsigned int)this->fields.eventId,
      callbackEndFunc->fields.method);
}


void EventInfoPointGaugeControl___c__DisplayClass24_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPointGaugeControl___c__DisplayClass24_0___LoadEventPointGaugeEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass24_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callbackEndFunc, 0);
}


void EventInfoPointGaugeControl___c__DisplayClass25_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPointGaugeControl___c__DisplayClass25_0___PlayEventPointGaugeEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x7
  TerminalPramsManager_c *EventPointGaugeComponent_k__BackingField; // x0
  struct EventInfoPointGaugeControl_o *v5; // x8
  int32_t v6; // w21
  TerminalPramsManager_c *v7; // x0
  int32_t v8; // w21
  int32_t afterPoint; // w26
  int32_t beforePoint; // w27
  EventInfoPointGaugeControl_o *_4__this; // x21
  int32_t afterGauge; // w22
  int32_t EventActivityPointEffectState_k__BackingField; // w20
  System_Action_o *_9__1; // x24
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D31E35 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__);
    byte_4D31E35 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2DE03 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2DE03 = 1;
  }
  EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
  }
  if ( EventPointGaugeComponent_k__BackingField->static_fields->_EventActivityPointEffectState_k__BackingField != EventPointGaugeComponent_k__BackingField->static_fields->EVENT_POINT_EFFECT_STATE_NONE )
  {
    afterPoint = this->fields.afterPoint;
    beforePoint = this->fields.beforePoint;
    _4__this = this->fields.__4__this;
    afterGauge = this->fields.afterGauge;
    if ( !EventPointGaugeComponent_k__BackingField->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventPointGaugeComponent_k__BackingField);
    if ( !byte_4D2DE03 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2DE03 = 1;
    }
    EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    }
    EventActivityPointEffectState_k__BackingField = EventPointGaugeComponent_k__BackingField->static_fields->_EventActivityPointEffectState_k__BackingField;
    _9__1 = this->fields.__9__1;
    v15 = this->fields.beforePoint;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v16, v17, v18, v19, v20, v21);
    }
    if ( _4__this )
    {
      EventInfoPointGaugeControl__PlayEventPointGaugeAddEffect(
        _4__this,
        afterGauge,
        EventActivityPointEffectState_k__BackingField,
        v15,
        afterPoint - beforePoint,
        _9__1,
        0,
        v2);
      return;
    }
LABEL_33:
    sub_1C93D2C(EventPointGaugeComponent_k__BackingField, method);
  }
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_33;
  EventPointGaugeComponent_k__BackingField = (TerminalPramsManager_c *)v5->fields._EventPointGaugeComponent_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
    goto LABEL_33;
  LODWORD(EventPointGaugeComponent_k__BackingField->_1.interopData) = this->fields.afterPoint;
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(
    (EventInfoPointGaugeComponent_o *)EventPointGaugeComponent_k__BackingField,
    method);
  v6 = this->fields.afterPoint;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2DDDC )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2DDDC = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_BeforeEventActivityPoint_k__BackingField = v6;
  v8 = this->fields.afterGauge;
  if ( !byte_4D2DDDD )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D2DDDD = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v8;
  TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoPointGaugeControl___c__DisplayClass25_0___PlayEventPointGaugeEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EVENT_POINT_EFFECT_STATE_NONE; // w21
  int32_t afterPoint; // w21
  int32_t afterGauge; // w21

  if ( (byte_4D31E36 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D31E36 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v3->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  if ( !byte_4D2AFE6 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4D2AFE6 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = EVENT_POINT_EFFECT_STATE_NONE;
  afterPoint = this->fields.afterPoint;
  if ( !byte_4D2DDDC )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4D2DDDC = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = afterPoint;
  afterGauge = this->fields.afterGauge;
  if ( !byte_4D2DDDD )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4D2DDDD = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPointGauge_k__BackingField = afterGauge;
  TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoPointGaugeControl___c__DisplayClass26_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPointGaugeControl___c__DisplayClass26_0___PlayEventPointGaugeChangeEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoPointGaugeControl_o *_4__this; // x8
  EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventPointGaugeComponent_k__BackingField = _4__this->fields._EventPointGaugeComponent_k__BackingField) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, this->fields.afterGauge, v2);
}


void EventInfoPointGaugeControl___c__DisplayClass26_0___PlayEventPointGaugeChangeEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_1C93D2C(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void EventInfoPointGaugeControl___c__DisplayClass27_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPointGaugeControl___c__DisplayClass27_0___PlayEventPointGaugeAddEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoPointGaugeControl_o *_4__this; // x8
  EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventPointGaugeComponent_k__BackingField = _4__this->fields._EventPointGaugeComponent_k__BackingField) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  EventPointGaugeComponent_k__BackingField->fields._MainPoint_k__BackingField = this->fields.basePoint;
  EventPointGaugeComponent_k__BackingField->fields._BufferPoint_k__BackingField += this->fields.addPoint;
  EventInfoPointGaugeComponent__PlayGaugeAnime(EventPointGaugeComponent_k__BackingField, this->fields.callback, v2);
}


void EventInfoPointGaugeControl_assetLoadFinish___ctor(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC96F8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC96B0;
}


System_IAsyncResult_o *EventInfoPointGaugeControl_assetLoadFinish__BeginInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        int32_t eventId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = eventId;
  if ( (byte_4D31E33 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D31E33 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void EventInfoPointGaugeControl_assetLoadFinish__EndInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void EventInfoPointGaugeControl_assetLoadFinish__Invoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    eventId,
    this->fields.method);
}