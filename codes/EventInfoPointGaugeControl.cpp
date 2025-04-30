void __fastcall EventInfoPointGaugeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  EventInfoPointGaugeControl_c *v6; // x8
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x9
  int32_t v8; // w1
  struct EventInfoPointGaugeControl_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4FADB & 1) == 0 )
  {
    sub_1B863B8(&EventInfoPointGaugeControl_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_16295/*"_battle"*/, v4);
    sub_1B863B8(&StringLiteral_17000/*"bit_gauge_change"*/, v5);
    byte_4A4FADB = 1;
  }
  EventInfoPointGaugeControl_TypeInfo->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE = (struct System_String_o *)StringLiteral_17000/*"bit_gauge_change"*/;
  sub_1B8635C((CGThumbnailListItem_o *)EventInfoPointGaugeControl_TypeInfo->static_fields, StringLiteral_17000/*"bit_gauge_change"*/, v2, v3);
  v6 = EventInfoPointGaugeControl_TypeInfo;
  static_fields = EventInfoPointGaugeControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_GAUGE_POSITION.fields.x = 0xC3B98000C1F80000LL;
  static_fields->EVENT_POINT_GAUGE_POSITION.fields.z = 0.0;
  v8 = StringLiteral_16295/*"_battle"*/;
  v9 = v6->static_fields;
  v9->BATTLE_MODE_SUFFIX = (struct System_String_o *)StringLiteral_16295/*"_battle"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v9->BATTLE_MODE_SUFFIX, v8, v10, v11);
}


void __fastcall EventInfoPointGaugeControl___ctor(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventInfoPointGaugeControl__CreateEventPointGaugePrefab(
        EventInfoPointGaugeControl_o *this,
        System_Nullable_Vector3__o pos,
        float subMarginX,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  AssetData_o *eventInfoAssetData; // x0
  Il2CppObject *Object_object__49610244; // x22
  bool v17; // w8
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *v19; // x22
  bool v20; // w8
  float z; // s2
  float y; // s1
  float x; // s0
  EventInfoPointGaugeControl_c *v24; // x0
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x8
  Il2CppObject *Component_object; // x0
  struct EventInfoPointGaugeComponent_o **p_EventPointGaugeComponent_k__BackingField; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct UnityEngine_GameObject_o *EffectParent; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  v5 = *(_QWORD *)&pos.fields.value.fields.y;
  v6 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4A4FAD0 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, *(_QWORD *)&pos.fields.hasValue);
    sub_1B863B8(&EventInfoPointGaugeControl_TypeInfo, v8);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___, v9);
    sub_1B863B8(&Method_System_Nullable_Vector3__GetValueOrDefault__, v10);
    sub_1B863B8(&Method_System_Nullable_Vector3__get_HasValue__, v11);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_6153/*"EventInfoPointGaugePrefab"*/, v14);
    byte_4A4FAD0 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( !eventInfoAssetData )
    goto LABEL_20;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              eventInfoAssetData,
                              (System_String_o *)StringLiteral_6153/*"EventInfoPointGaugePrefab"*/,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49610244, 0LL, 0LL);
  result = 0LL;
  if ( !v17 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__Instantiate_object_(
            Object_object__49610244,
            (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v20 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0LL, 0LL);
    result = 0LL;
    if ( !v20 )
    {
      GameObjectExtensions__SafeSetParent_34388184((UnityEngine_GameObject_o *)v19, this->fields.eventRoot, 0LL);
      if ( (_BYTE)v6 )
      {
        z = *((float *)&v5 + 1);
        y = *(float *)&v5;
        x = *((float *)&v6 + 1);
      }
      else
      {
        v24 = EventInfoPointGaugeControl_TypeInfo;
        if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v24 = EventInfoPointGaugeControl_TypeInfo;
        }
        static_fields = v24->static_fields;
        x = static_fields->EVENT_POINT_GAUGE_POSITION.fields.x;
        y = static_fields->EVENT_POINT_GAUGE_POSITION.fields.y;
        z = static_fields->EVENT_POINT_GAUGE_POSITION.fields.z;
      }
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v19, *(UnityEngine_Vector3_o *)&x, 0LL);
      if ( v19 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v19,
                             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
        this->fields._EventPointGaugeComponent_k__BackingField = (struct EventInfoPointGaugeComponent_o *)Component_object;
        p_EventPointGaugeComponent_k__BackingField = &this->fields._EventPointGaugeComponent_k__BackingField;
        sub_1B8635C(
          (CGThumbnailListItem_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
          (int32_t)Component_object,
          v28,
          v29);
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
            sub_1B8635C(
              (CGThumbnailListItem_o *)&this->fields.eventPointGaugeEffectParent,
              (int32_t)EffectParent,
              v31,
              v32);
            return (UnityEngine_GameObject_o *)v19;
          }
        }
      }
LABEL_20:
      sub_1B86614(eventInfoAssetData, *(_QWORD *)&pos.fields.hasValue);
    }
  }
  return result;
}


void __fastcall EventInfoPointGaugeControl__DestroyEventInfo(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_eventPointGaugeObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4A4FAD8 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4FAD8 = 1;
  }
  eventPointGaugeObj = this->fields.eventPointGaugeObj;
  p_eventPointGaugeObj = (CGThumbnailListItem_o *)&this->fields.eventPointGaugeObj;
  v4 = (UnityEngine_Object_o *)eventPointGaugeObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_eventPointGaugeObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(klass, 0LL);
    p_eventPointGaugeObj->klass = 0LL;
    sub_1B8635C(p_eventPointGaugeObj, 0, v7, v8);
  }
}


void __fastcall EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_eventPointGaugeChangeEffectPrefab; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeChangeEffectPrefab; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A4FAD6 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4FAD6 = 1;
  }
  eventPointGaugeChangeEffectPrefab = this->fields.eventPointGaugeChangeEffectPrefab;
  p_eventPointGaugeChangeEffectPrefab = (CGThumbnailListItem_o *)&this->fields.eventPointGaugeChangeEffectPrefab;
  v4 = (UnityEngine_Object_o *)eventPointGaugeChangeEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69356292(v4, 0LL);
  p_eventPointGaugeChangeEffectPrefab->klass = 0LL;
  sub_1B8635C(p_eventPointGaugeChangeEffectPrefab, 0, v6, v7);
}


void __fastcall EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointGaugeControl_o *v2; // x19
  struct UnityEngine_GameObject_array *eventPointGaugeEffectPrefabList; // x8
  unsigned __int64 v4; // x21
  __int64 v5; // x22
  UnityEngine_Object_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_GameObject_array *v9; // x8
  Il2CppClass **v10; // x0

  v2 = this;
  if ( (byte_4A4FAD7 & 1) == 0 )
  {
    this = (EventInfoPointGaugeControl_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4FAD7 = 1;
  }
  eventPointGaugeEffectPrefabList = v2->fields.eventPointGaugeEffectPrefabList;
  if ( eventPointGaugeEffectPrefabList && (int)*(_QWORD *)&eventPointGaugeEffectPrefabList->max_length >= 1 )
  {
    v4 = 0LL;
    v5 = (unsigned int)*(_QWORD *)&eventPointGaugeEffectPrefabList->max_length;
    while ( 1 )
    {
      if ( v4 >= eventPointGaugeEffectPrefabList->max_length )
LABEL_15:
        sub_1B8661C(this, method);
      v6 = (UnityEngine_Object_o *)eventPointGaugeEffectPrefabList->m_Items[v4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69356292(v6, 0LL);
      v9 = v2->fields.eventPointGaugeEffectPrefabList;
      if ( !v9 )
LABEL_13:
        sub_1B86614(this, method);
      if ( v4 >= v9->max_length )
        goto LABEL_15;
      v10 = &v9->obj.klass + v4;
      v10[4] = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)(v10 + 4), 0, v7, v8);
      if ( ++v4 == v5 )
        break;
      eventPointGaugeEffectPrefabList = v2->fields.eventPointGaugeEffectPrefabList;
      if ( !eventPointGaugeEffectPrefabList )
        goto LABEL_13;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventInfoPointGaugeControl__GetEventPointGaugeState(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  QuestGroupMaster_o *v12; // x20
  int32_t v13; // w19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x22
  int32_t GroupId; // w21
  int32_t klass; // w22
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A4FACF & 1) == 0 )
  {
    sub_1B863B8(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4FACF = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (v12 = (QuestGroupMaster_o *)Instance,
        (Instance = (DataManager_o *)QuestGroupMaster__GetEntityListByGroupId(
                                       (QuestGroupMaster_o *)Instance,
                                       eventId,
                                       1,
                                       0LL)) == 0LL) )
  {
    sub_1B86614(Instance, v11);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
  v13 = 0;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    if ( !v14 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1B86614(v14, v15);
    GroupId = QuestGroupMaster__GetGroupId(v12, (int32_t)v20.fields._current[1].klass, 12, 0LL);
    klass = (int32_t)current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !((GroupId < 1) | !CondType__IsQuestClear_38542260(klass, -1, 0, 0LL)) )
      v13 = GroupId;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
  return v13;
}


bool __fastcall EventInfoPointGaugeControl__IsEventPointGaugeOpen(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A4FACE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A4FACE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v5);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, eventId, 0LL, 0, 0LL);
}


void __fastcall EventInfoPointGaugeControl__LoadEventInfoAssetData(
        EventInfoPointGaugeControl_o *this,
        EventInfoPointGaugeControl_assetLoadFinish_o *callBack,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  AssetData_o *eventInfoAssetData; // x0
  AssetLoader_LoadEndDataHandler_o *v20; // x19

  if ( (byte_4A4FACA & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, callBack);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B863B8(&Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__, v8);
    sub_1B863B8(&EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_6130/*"Event/Info"*/, v10);
    byte_4A4FACA = 1;
  }
  v11 = sub_1B86604(EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B86614(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = callBack;
  v16 = v11 + 24;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)callBack, v17, v18);
  *(_DWORD *)(v11 + 32) = eventId;
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData && !AssetData__get_IsEmpty(eventInfoAssetData, 0LL) )
  {
    if ( *(_QWORD *)v16 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v16 + 64LL),
        *(unsigned int *)(v11 + 32),
        *(_QWORD *)(*(_QWORD *)v16 + 40LL));
  }
  else
  {
    v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v20,
      (Il2CppObject *)v11,
      Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6130/*"Event/Info"*/, v20, 1, 0LL);
  }
}


void __fastcall EventInfoPointGaugeControl__LoadEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21

  if ( (byte_4A4FAD1 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, callbackEndFunc);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B863B8(&Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__, v8);
    sub_1B863B8(&EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_5812/*"Effect/Event/{0}"*/, v10);
    byte_4A4FAD1 = 1;
  }
  v11 = sub_1B86604(EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B86614(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = callbackEndFunc;
  v16 = v11 + 24;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)callbackEndFunc, v17, v18);
  *(_DWORD *)(v11 + 32) = eventId;
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData && !AssetData__get_IsEmpty(eventPointGaugeEffectAssetData, 0LL) )
  {
    if ( *(_QWORD *)v16 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v16 + 64LL),
        *(unsigned int *)(v11 + 32),
        *(_QWORD *)(*(_QWORD *)v16 + 40LL));
  }
  else
  {
    v20 = (Il2CppObject *)System_Int32__ToString((int)v11 + 32, 0LL);
    v21 = System_String__Format((System_String_o *)StringLiteral_5812/*"Effect/Event/{0}"*/, v20, 0LL);
    v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v22,
      (Il2CppObject *)v11,
      Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v21, v22, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__LoadEventPointGaugeEffect_41884412(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callbackEndFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4A4FAD2 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
      *(_QWORD *)&eventId);
    sub_1B863B8(&EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo, v7);
    sub_1B863B8(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v8);
    byte_4A4FAD2 = 1;
  }
  v9 = sub_1B86604(EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B86614(v10, v11);
  *(_QWORD *)(v9 + 16) = callbackEndFunc;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)callbackEndFunc, v12, v13);
  v14 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1B86604(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
  EventInfoPointGaugeControl_assetLoadFinish___ctor(
    v14,
    (Il2CppObject *)v9,
    Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
    v15);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(this, v14, eventId, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__PlayEventPointGaugeAddEffect(
        EventInfoPointGaugeControl_o *this,
        int32_t gaugeState,
        int32_t effectState,
        int32_t basePoint,
        int32_t addPoint,
        System_Action_o *callback,
        bool isBattleMode,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x22
  __int64 Component_object; // x0
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x23
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8
  struct System_String_array **p_addEffectNameList; // x8
  struct EventInfoPointGaugeComponent_o *v35; // x8
  struct System_String_array *v36; // x28
  struct UnityEngine_GameObject_array **p_eventPointGaugeEffectPrefabList; // x24
  __int64 v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  unsigned __int64 v41; // x29
  System_String_o **m_Items; // x19
  __int64 v43; // x25
  System_Text_StringBuilder_o *v44; // x26
  System_String_o *BATTLE_MODE_SUFFIX; // x1
  EventInfoPointGaugeControl_c *v46; // x0
  AssetData_o *eventPointGaugeEffectAssetData; // x27
  Il2CppObject *Object_object__49610244; // x26
  Il2CppObject *v49; // x26
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct UnityEngine_GameObject_array *v52; // x8
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x26
  System_Action_o *klass; // x27
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  CGThumbnailListItem_o *v59; // x0
  int32_t v60; // w1
  CGThumbnailListItem_o *v61; // [xsp+0h] [xbp-80h]
  __int64 v64; // [xsp+10h] [xbp-70h]
  int32_t v65; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A4FAD5 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&gaugeState);
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, v13);
    sub_1B863B8(&EventInfoPointGaugeControl_TypeInfo, v14);
    sub_1B863B8(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___, v15);
    sub_1B863B8(&UnityEngine_GameObject___TypeInfo, v16);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v18);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v19);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v20);
    sub_1B863B8(&Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__, v21);
    sub_1B863B8(&EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo, v22);
    sub_1B863B8(&StringLiteral_15886/*"_"*/, v23);
    byte_4A4FAD5 = 1;
  }
  v65 = 0;
  v24 = sub_1B86604(EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
LABEL_61:
    sub_1B86614(Component_object, v26);
  *(_QWORD *)(v24 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v24 + 16), (int32_t)this, v27, v28);
  *(_QWORD *)(v24 + 32) = callback;
  v29 = v24 + 32;
  *(_DWORD *)(v24 + 24) = basePoint;
  *(_DWORD *)(v24 + 28) = addPoint;
  sub_1B8635C((CGThumbnailListItem_o *)(v24 + 32), (int32_t)callback, v30, v31);
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
    if ( !*(_QWORD *)v29 )
      goto LABEL_61;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v29 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v29 + 64LL),
      *(_QWORD *)(*(_QWORD *)v29 + 40LL));
    return;
  }
  v35 = this->fields._EventPointGaugeComponent_k__BackingField;
  if ( !v35 )
    goto LABEL_61;
  p_addEffectNameList = &v35->fields.subEffectNameList;
LABEL_15:
  v36 = *p_addEffectNameList;
  EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(this, v26);
  p_eventPointGaugeEffectPrefabList = &this->fields.eventPointGaugeEffectPrefabList;
  if ( this->fields.eventPointGaugeEffectPrefabList )
  {
    if ( !v36 )
      goto LABEL_61;
  }
  else
  {
    if ( !v36 )
      goto LABEL_61;
    v38 = sub_1B86460(UnityEngine_GameObject___TypeInfo, v36->max_length);
    *p_eventPointGaugeEffectPrefabList = (struct UnityEngine_GameObject_array *)v38;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventPointGaugeEffectPrefabList, v38, v39, v40);
  }
  if ( (int)*(_QWORD *)&v36->max_length >= 1 )
  {
    v64 = (unsigned int)*(_QWORD *)&v36->max_length;
    v61 = (CGThumbnailListItem_o *)(v24 + 40);
    v41 = 0LL;
    m_Items = v36->m_Items;
    v43 = 32LL;
    do
    {
      v44 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(v44, 0LL);
      if ( v41 >= v36->max_length )
LABEL_62:
        sub_1B8661C(Component_object, v26);
      if ( !v44 )
        goto LABEL_61;
      System_Text_StringBuilder__Append_61730360(v44, m_Items[v41], 0LL);
      if ( v41 )
      {
        if ( v41 != 1 )
          goto LABEL_32;
        System_Text_StringBuilder__Append_61730360(v44, (System_String_o *)StringLiteral_15886/*"_"*/, 0LL);
        v65 = gaugeState;
        BATTLE_MODE_SUFFIX = System_Int32__ToString((int32_t)&v65, 0LL);
      }
      else
      {
        if ( !isBattleMode )
          goto LABEL_32;
        v46 = EventInfoPointGaugeControl_TypeInfo;
        if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v46 = EventInfoPointGaugeControl_TypeInfo;
        }
        BATTLE_MODE_SUFFIX = v46->static_fields->BATTLE_MODE_SUFFIX;
      }
      System_Text_StringBuilder__Append_61730360(v44, BATTLE_MODE_SUFFIX, 0LL);
LABEL_32:
      eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
      Component_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v44->klass->vtable._3_ToString.method)(
                           v44,
                           v44->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !eventPointGaugeEffectAssetData )
        goto LABEL_61;
      Object_object__49610244 = AssetData__GetObject_object__49610244(
                                  eventPointGaugeEffectAssetData,
                                  (System_String_o *)Component_object,
                                  (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49610244, 0LL, 0LL);
      if ( (Component_object & 1) != 0 )
      {
        if ( v41 >= v36->max_length )
          goto LABEL_62;
        Component_object = (__int64)this->fields.eventPointGaugeEffectAssetData;
        if ( !Component_object )
          goto LABEL_61;
        Object_object__49610244 = AssetData__GetObject_object__49610244(
                                    (AssetData_o *)Component_object,
                                    m_Items[v41],
                                    (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49610244, 0LL, 0LL);
      if ( (Component_object & 1) != 0 )
        goto LABEL_58;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v49 = UnityEngine_Object__Instantiate_object_(
              Object_object__49610244,
              (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v49, 0LL, 0LL);
      if ( (Component_object & 1) != 0 )
        goto LABEL_58;
      v52 = *p_eventPointGaugeEffectPrefabList;
      if ( !*p_eventPointGaugeEffectPrefabList )
        goto LABEL_61;
      if ( v41 >= v52->max_length )
        goto LABEL_62;
      v52->m_Items[v41] = (UnityEngine_GameObject_o *)v49;
      sub_1B8635C((CGThumbnailListItem_o *)((char *)v52 + v43), (int32_t)v49, v50, v51);
      GameObjectExtensions__SafeSetParent_34388184(
        (UnityEngine_GameObject_o *)v49,
        this->fields.eventPointGaugeEffectParent,
        0LL);
      Component_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                    (UnityEngine_GameObject_o *)v49,
                                    (const MethodInfo_2FC28D8 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
      v55 = Component_object;
      if ( !v41 )
      {
        if ( !Component_object )
          goto LABEL_61;
        *(_QWORD *)(Component_object + 32) = 0LL;
        v59 = (CGThumbnailListItem_o *)(Component_object + 32);
        v60 = 0;
LABEL_55:
        sub_1B8635C(v59, v60, v53, v54);
        goto LABEL_56;
      }
      if ( v41 == 1 )
      {
        klass = (System_Action_o *)v61->klass;
        if ( !v61->klass )
        {
          klass = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            klass,
            (Il2CppObject *)v24,
            Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__,
            0LL);
          *(_QWORD *)(v24 + 40) = klass;
          sub_1B8635C(v61, (int32_t)klass, v57, v58);
        }
        if ( !v55 )
          goto LABEL_61;
        *(_QWORD *)(v55 + 32) = klass;
        v59 = (CGThumbnailListItem_o *)(v55 + 32);
        v60 = (int)klass;
        goto LABEL_55;
      }
LABEL_56:
      ++v41;
      v43 += 8LL;
    }
    while ( v64 != v41 );
  }
}


void __fastcall EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
        EventInfoPointGaugeControl_o *this,
        UnityEngine_GameObject_o *parent,
        System_String_o *name,
        int32_t beforeGauge,
        int32_t afterGauge,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x21
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x23
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *Object_object__49610244; // x22
  Il2CppObject *v29; // x0
  struct UnityEngine_GameObject_o **p_eventPointGaugeChangeEffectPrefab; // x19
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *Component_object; // x19
  System_Action_o *v34; // x20
  System_Action_o *v35; // x22

  if ( (byte_4A4FAD4 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, parent);
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, v13);
    sub_1B863B8(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___, v14);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B863B8(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__, v17);
    sub_1B863B8(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__, v18);
    sub_1B863B8(&EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo, v19);
    byte_4A4FAD4 = 1;
  }
  v20 = sub_1B86604(EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v20 + 16), (int32_t)this, v23, v24);
  *(_QWORD *)(v20 + 32) = callback;
  v25 = v20 + 32;
  *(_DWORD *)(v20 + 24) = afterGauge;
  sub_1B8635C((CGThumbnailListItem_o *)(v20 + 32), (int32_t)callback, v26, v27);
  if ( !this->fields.eventPointGaugeEffectAssetData || !beforeGauge || *(_DWORD *)(v20 + 24) <= beforeGauge )
    goto LABEL_21;
  EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(this, v22);
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( !eventPointGaugeEffectAssetData )
    goto LABEL_18;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              eventPointGaugeEffectAssetData,
                              name,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  eventPointGaugeEffectAssetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Object_object__49610244,
                                                    0LL,
                                                    0LL);
  if ( ((unsigned __int8)eventPointGaugeEffectAssetData & 1) != 0 )
    goto LABEL_21;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = UnityEngine_Object__Instantiate_object_(
          Object_object__49610244,
          (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.eventPointGaugeChangeEffectPrefab = (struct UnityEngine_GameObject_o *)v29;
  p_eventPointGaugeChangeEffectPrefab = &this->fields.eventPointGaugeChangeEffectPrefab;
  sub_1B8635C((CGThumbnailListItem_o *)p_eventPointGaugeChangeEffectPrefab, (int32_t)v29, v31, v32);
  eventPointGaugeEffectAssetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)*p_eventPointGaugeChangeEffectPrefab,
                                                    0LL,
                                                    0LL);
  if ( ((unsigned __int8)eventPointGaugeEffectAssetData & 1) != 0 )
  {
LABEL_21:
    if ( *(_QWORD *)v25 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v25 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v25 + 64LL),
        *(_QWORD *)(*(_QWORD *)v25 + 40LL));
      return;
    }
LABEL_18:
    sub_1B86614(eventPointGaugeEffectAssetData, v22);
  }
  GameObjectExtensions__SafeSetParent_34388184(*p_eventPointGaugeChangeEffectPrefab, parent, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *p_eventPointGaugeChangeEffectPrefab,
                       (const MethodInfo_2FC28D8 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
  v34 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v20,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
    0LL);
  v35 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v20,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
    0LL);
  if ( !Component_object )
    goto LABEL_18;
  EventPointGaugeChangeEffectAction__Setup((EventPointGaugeChangeEffectAction_o *)Component_object, v34, v35, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  TerminalPramsManager_c *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  EventInfoPointGaugeControl_o *v22; // x0
  int32_t m_CachedPtr; // w26
  int32_t EventPointGaugeState; // w0
  int32_t v25; // w23
  EventInfoPointGaugeControl_c *v26; // x0
  UnityEngine_GameObject_o *eventPointGaugeEffectParent; // x21
  int32_t v28; // w22
  bool v29; // zf
  System_String_o *EVENT_POINT_GAUGE_EFFECT_CHANGE; // x24
  int32_t v31; // w23
  System_Action_o *v32; // x25
  const MethodInfo *v33; // x6

  if ( (byte_4A4FAD3 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&EventInfoPointGaugeControl_TypeInfo, v7);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    sub_1B863B8(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__, v9);
    sub_1B863B8(&EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo, v10);
    byte_4A4FAD3 = 1;
  }
  v11 = sub_1B86604(EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B86614(v12, v13);
  *(_QWORD *)(v11 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 40) = callback;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 40), (int32_t)callback, v16, v17);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B99B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v18);
    byte_4A4B99B = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v11 + 20) = v19->static_fields->_BeforeEventActivityPoint_k__BackingField;
  *(_DWORD *)(v11 + 16) = UserEventPointMaster__GetEventActivityPoint(eventId, 0LL);
  if ( !byte_4A4B99C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v20);
    byte_4A4B99C = 1;
  }
  v22 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr = v22[1].fields.eventRoot[17].fields.m_CachedPtr;
  EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v22, eventId, v21);
  *(_DWORD *)(v11 + 32) = EventPointGaugeState;
  v25 = EventPointGaugeState;
  v26 = EventInfoPointGaugeControl_TypeInfo;
  eventPointGaugeEffectParent = this->fields.eventPointGaugeEffectParent;
  if ( EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    v28 = v25;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
    v26 = EventInfoPointGaugeControl_TypeInfo;
    v28 = *(_DWORD *)(v11 + 32);
  }
  v29 = v25 == 1 && m_CachedPtr == 0;
  EVENT_POINT_GAUGE_EFFECT_CHANGE = v26->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE;
  if ( v29 )
    v31 = 1;
  else
    v31 = m_CachedPtr;
  v32 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v11,
    Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__,
    0LL);
  EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
    this,
    eventPointGaugeEffectParent,
    EVENT_POINT_GAUGE_EFFECT_CHANGE,
    v31,
    v28,
    v32,
    v33);
}


void __fastcall EventInfoPointGaugeControl__ReleaseEventInfoAsset(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_eventInfoAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *eventInfoAssetData; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A4FADA & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    byte_4A4FADA = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  p_eventInfoAssetData = (CGThumbnailListItem_o *)&this->fields.eventInfoAssetData;
  v4 = eventInfoAssetData;
  if ( eventInfoAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38744968(v4, 0LL);
    p_eventInfoAssetData->klass = 0LL;
    sub_1B8635C(p_eventInfoAssetData, 0, v6, v7);
  }
}


void __fastcall EventInfoPointGaugeControl__ReleasePointGaugeEffectAsset(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_eventPointGaugeEffectAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *eventPointGaugeEffectAssetData; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A4FAD9 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    byte_4A4FAD9 = 1;
  }
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  p_eventPointGaugeEffectAssetData = (CGThumbnailListItem_o *)&this->fields.eventPointGaugeEffectAssetData;
  v4 = eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38744968(v4, 0LL);
    p_eventPointGaugeEffectAssetData->klass = 0LL;
    sub_1B8635C(p_eventPointGaugeEffectAssetData, 0, v6, v7);
  }
}


void __fastcall EventInfoPointGaugeControl__SetRootObject(
        EventInfoPointGaugeControl_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.eventRoot = root;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventRoot, (int32_t)root, (int32_t)method, v3);
}


void __fastcall EventInfoPointGaugeControl__SetupEventPointGaugeAndPlayEffect(
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x21
  __int64 v18; // x0
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t eventId; // w22
  const MethodInfo *v25; // x5
  const MethodInfo *v26; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v27; // x22
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3

  v8 = *(_QWORD *)&pos.fields.value.fields.y;
  v9 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4A4FACC & 1) == 0 )
  {
    sub_1B863B8(&EventInfoPointGaugeControl_TypeInfo, eventDetailEntity);
    sub_1B863B8(&Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__, v14);
    sub_1B863B8(&EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo, v15);
    sub_1B863B8(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v16);
    byte_4A4FACC = 1;
  }
  v17 = sub_1B86604(EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_13;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 48) = callback;
  *(_BYTE *)(v17 + 24) = isActive;
  *(_QWORD *)(v17 + 28) = v9;
  *(_QWORD *)(v17 + 36) = v8;
  *(float *)(v17 + 44) = subMarginX;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 48), (int32_t)callback, v22, v23);
  if ( !eventDetailEntity )
LABEL_13:
    sub_1B86614(v18, v19);
  eventId = eventDetailEntity->fields.eventId;
  if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v19) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v17 + 24),
        *(System_Nullable_Vector3__o *)(v17 + 28),
        *(float *)(v17 + 44),
        v25);
      EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        this,
        eventDetailEntity->fields.eventId,
        *(System_Action_o **)(v17 + 48),
        v26);
    }
    else
    {
      v27 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1B86604(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v27,
        (Il2CppObject *)v17,
        Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__,
        v28);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v27, eventDetailEntity->fields.eventId, v29);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v17 + 48), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        bool isActive,
        System_Nullable_Vector3__o pos,
        float subMarginX,
        const MethodInfo *method)
{
  __int64 v7; // x23
  __int64 v8; // x24
  __int64 v12; // x1
  struct UnityEngine_GameObject_o **p_eventPointGaugeObj; // x22
  UnityEngine_Object_o *eventPointGaugeObj; // x25
  const MethodInfo *v15; // x3
  struct UnityEngine_GameObject_o *EventPointGaugePrefab; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  int EventActivityPoint; // w22
  EventInfoPointGaugeControl_o *v26; // x0
  __int64 v27; // x1
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
  if ( (byte_4A4FACD & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
    byte_4A4FACD = 1;
  }
  p_eventPointGaugeObj = &this->fields.eventPointGaugeObj;
  eventPointGaugeObj = (UnityEngine_Object_o *)this->fields.eventPointGaugeObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(eventPointGaugeObj, 0LL, 0LL) )
  {
    *(_QWORD *)&v37.fields.hasValue = v8;
    *(_QWORD *)&v37.fields.value.fields.y = v7;
    EventPointGaugePrefab = EventInfoPointGaugeControl__CreateEventPointGaugePrefab(this, v37, subMarginX, v15);
    this->fields.eventPointGaugeObj = EventPointGaugePrefab;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventPointGaugeObj, (int32_t)EventPointGaugePrefab, v17, v18);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  gameObject = *p_eventPointGaugeObj;
  if ( !*p_eventPointGaugeObj )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__CheckEventActivityPointSaveData(0LL) )
  {
    EventActivityPoint = UserEventPointMaster__GetEventActivityPoint(eventId, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B98B )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v23);
      byte_4A4B98B = 1;
    }
    v26 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(v26[1].fields.eventRoot[17].monitor) = EventActivityPoint;
    EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v26, eventId, v24);
    if ( !byte_4A4B98C )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v27);
      byte_4A4B98C = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    v29->static_fields->_BeforeEventActivityPointGauge_k__BackingField = EventPointGaugeState;
    TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B99B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v21);
    byte_4A4B99B = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPoint_k__BackingField = v30->static_fields->_BeforeEventActivityPoint_k__BackingField;
  if ( !byte_4A4B99C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v21);
    v30 = TerminalPramsManager_TypeInfo;
    byte_4A4B99C = 1;
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
                                             v22);
  EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
  v35 = (_DWORD)gameObject == 1 && BeforeEventActivityPointGauge_k__BackingField == 0;
  v20 = v35 ? 1LL : BeforeEventActivityPointGauge_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
LABEL_41:
    sub_1B86614(gameObject, v20);
  EventPointGaugeComponent_k__BackingField->fields._GaugeStateId_k__BackingField = v20;
  EventPointGaugeComponent_k__BackingField->fields._MainPoint_k__BackingField = BeforeEventActivityPoint_k__BackingField;
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, v20, v33);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(EventPointGaugeComponent_k__BackingField, v36);
}


void __fastcall EventInfoPointGaugeControl__SetupEventPointGaugeDisp(
        EventInfoPointGaugeControl_o *this,
        EventDetailEntity_o *eventDetailEntity,
        bool isActive,
        System_Nullable_Vector3__o pos,
        float subMarginX,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t eventId; // w21
  const MethodInfo *v25; // x5
  __int64 v26; // x1
  TerminalPramsManager_c *v27; // x0
  TerminalPramsManager_c *v28; // x0
  Il2CppObject *MasterData_object; // x21
  __int64 v30; // x1
  EventInfoPointGaugeControl_assetLoadFinish_o *v31; // x21
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  TerminalPramsManager_c *v34; // x0

  v7 = *(_QWORD *)&pos.fields.value.fields.y;
  v8 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4A4FACB & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventPointMaster___, eventDetailEntity);
    sub_1B863B8(&EventInfoPointGaugeControl_TypeInfo, v12);
    sub_1B863B8(&NetworkManager_TypeInfo, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v15);
    sub_1B863B8(&Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__, v16);
    sub_1B863B8(&EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo, v17);
    sub_1B863B8(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v18);
    byte_4A4FACB = 1;
  }
  v19 = sub_1B86604(EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_51;
  *(_QWORD *)(v19 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v19 + 16), (int32_t)this, v22, v23);
  *(_BYTE *)(v19 + 24) = isActive;
  *(_QWORD *)(v19 + 28) = v8;
  *(_QWORD *)(v19 + 36) = v7;
  *(float *)(v19 + 44) = subMarginX;
  if ( !eventDetailEntity )
    goto LABEL_51;
  eventId = eventDetailEntity->fields.eventId;
  if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v21) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v19 + 24),
        *(System_Nullable_Vector3__o *)(v19 + 28),
        *(float *)(v19 + 44),
        v25);
    }
    else
    {
      v31 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1B86604(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v31,
        (Il2CppObject *)v19,
        Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__,
        v32);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v31, eventDetailEntity->fields.eventId, v33);
    }
    return;
  }
  if ( EventDetailEntity__IsEventActivityPoint(eventDetailEntity, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B99B )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v26);
      byte_4A4B99B = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    if ( v27->static_fields->_BeforeEventActivityPoint_k__BackingField >= 1 )
    {
      if ( !v27->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v27);
      if ( !byte_4A4B99C )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v26);
        byte_4A4B99C = 1;
      }
      v28 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v28 = TerminalPramsManager_TypeInfo;
      }
      if ( v28->static_fields->_BeforeEventActivityPointGauge_k__BackingField >= 1 )
      {
        if ( !v28->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v28);
        if ( TerminalPramsManager__CheckEventActivityPointSaveData(0LL) )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4A48C25 )
            {
              sub_1B863B8(&NetworkManager_TypeInfo, v21);
              byte_4A48C25 = 1;
            }
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = (DataManager_o *)NetworkManager_TypeInfo;
            }
            if ( MasterData_object )
            {
              if ( !UserEventPointMaster__GetEntity(
                      (UserEventPointMaster_o *)MasterData_object,
                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                      eventDetailEntity->fields.eventId,
                      0,
                      0LL) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4A4B98B )
                {
                  sub_1B863B8(&TerminalPramsManager_TypeInfo, v30);
                  byte_4A4B98B = 1;
                }
                v34 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v34 = TerminalPramsManager_TypeInfo;
                }
                v34->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
                if ( !byte_4A4B98C )
                {
                  sub_1B863B8(&TerminalPramsManager_TypeInfo, v30);
                  v34 = TerminalPramsManager_TypeInfo;
                  byte_4A4B98C = 1;
                }
                if ( !v34->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v34);
                  v34 = TerminalPramsManager_TypeInfo;
                }
                v34->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
                TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
              }
              return;
            }
          }
LABEL_51:
          sub_1B86614(Instance, v21);
        }
      }
    }
  }
}


EventInfoPointGaugeComponent_o *__fastcall EventInfoPointGaugeControl__get_EventPointGaugeComponent(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  return this->fields._EventPointGaugeComponent_k__BackingField;
}


void __fastcall EventInfoPointGaugeControl__set_EventPointGaugeComponent(
        EventInfoPointGaugeControl_o *this,
        EventInfoPointGaugeComponent_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventPointGaugeComponent_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass16_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass16_0___LoadEventInfoAssetData_b__0(
        EventInfoPointGaugeControl___c__DisplayClass16_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callBack; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, prefabData);
  _4__this->fields.eventInfoAssetData = prefabData;
  sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.eventInfoAssetData, (int32_t)prefabData, (int32_t)method, v3);
  callBack = this->fields.callBack;
  if ( callBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callBack->fields.m_target)(
      callBack->fields.original_method_info,
      (unsigned int)this->fields.eventId,
      *(_QWORD *)&callBack->fields.extra_arg);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass17_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl___c__DisplayClass17_0___SetupEventPointGaugeDisp_b__0(
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
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B86614(_4__this, *(_QWORD *)&eventId);
  }
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(_4__this, 0LL, eventId, v7);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass18_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  EventInfoPointGaugeControl_o *_4__this; // x0
  const MethodInfo *v8; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *_9__1; // x23
  EventInfoPointGaugeControl_o *v10; // x21
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4A4FADD & 1) == 0 )
  {
    sub_1B863B8(
      &Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      *(_QWORD *)&eventId);
    sub_1B863B8(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v6);
    byte_4A4FADD = 1;
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
  v10 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1B86604(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    EventInfoPointGaugeControl_assetLoadFinish___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      v11);
    this->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v12, v13);
  }
  if ( !v10 )
LABEL_8:
    sub_1B86614(_4__this, *(_QWORD *)&eventId);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(v10, _9__1, eventId, v8);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1B86614(this, eId);
  EventInfoPointGaugeControl__PlayEventPointGaugeEffect(this->fields.__4__this, eId, this->fields.callback, v3);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass23_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass23_0___LoadEventPointGaugeEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass23_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, prefabData);
  _4__this->fields.eventPointGaugeEffectAssetData = prefabData;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&_4__this->fields.eventPointGaugeEffectAssetData,
    (int32_t)prefabData,
    (int32_t)method,
    v3);
  callbackEndFunc = this->fields.callbackEndFunc;
  if ( callbackEndFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackEndFunc->fields.m_target)(
      callbackEndFunc->fields.original_method_info,
      (unsigned int)this->fields.eventId,
      *(_QWORD *)&callbackEndFunc->fields.extra_arg);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass24_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass24_0___LoadEventPointGaugeEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass24_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callbackEndFunc, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass25_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass25_0___PlayEventPointGaugeEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x7
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *EventPointGaugeComponent_k__BackingField; // x0
  struct EventInfoPointGaugeControl_o *v7; // x8
  __int64 v8; // x1
  int32_t v9; // w21
  TerminalPramsManager_c *v10; // x0
  int32_t v11; // w21
  int32_t afterPoint; // w26
  int32_t beforePoint; // w27
  EventInfoPointGaugeControl_o *_4__this; // x21
  int32_t afterGauge; // w22
  int32_t EventActivityPointEffectState_k__BackingField; // w20
  System_Action_o *_9__1; // x24
  int32_t v18; // w23
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4A4FADE & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v4);
    sub_1B863B8(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__, v5);
    byte_4A4FADE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B9B0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B9B0 = 1;
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
    if ( !byte_4A4B9B0 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
      byte_4A4B9B0 = 1;
    }
    EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    }
    EventActivityPointEffectState_k__BackingField = EventPointGaugeComponent_k__BackingField->static_fields->_EventActivityPointEffectState_k__BackingField;
    _9__1 = this->fields.__9__1;
    v18 = this->fields.beforePoint;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v19, v20);
    }
    if ( _4__this )
    {
      EventInfoPointGaugeControl__PlayEventPointGaugeAddEffect(
        _4__this,
        afterGauge,
        EventActivityPointEffectState_k__BackingField,
        v18,
        afterPoint - beforePoint,
        _9__1,
        0,
        v2);
      return;
    }
LABEL_33:
    sub_1B86614(EventPointGaugeComponent_k__BackingField, method);
  }
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_33;
  EventPointGaugeComponent_k__BackingField = (TerminalPramsManager_c *)v7->fields._EventPointGaugeComponent_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
    goto LABEL_33;
  LODWORD(EventPointGaugeComponent_k__BackingField->_1.interopData) = this->fields.afterPoint;
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(
    (EventInfoPointGaugeComponent_o *)EventPointGaugeComponent_k__BackingField,
    method);
  v9 = this->fields.afterPoint;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B98B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    byte_4A4B98B = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_BeforeEventActivityPoint_k__BackingField = v9;
  v11 = this->fields.afterGauge;
  if ( !byte_4A4B98C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B98C = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v11;
  TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass25_0___PlayEventPointGaugeEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EVENT_POINT_EFFECT_STATE_NONE; // w21
  int32_t afterPoint; // w21
  int32_t afterGauge; // w21

  if ( (byte_4A4FADF & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4FADF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v3->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  if ( !byte_4A4907C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A4907C = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = EVENT_POINT_EFFECT_STATE_NONE;
  afterPoint = this->fields.afterPoint;
  if ( !byte_4A4B98B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A4B98B = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = afterPoint;
  afterGauge = this->fields.afterGauge;
  if ( !byte_4A4B98C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A4B98C = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPointGauge_k__BackingField = afterGauge;
  TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass26_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass26_0___PlayEventPointGaugeChangeEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoPointGaugeControl_o *_4__this; // x8
  EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventPointGaugeComponent_k__BackingField = _4__this->fields._EventPointGaugeComponent_k__BackingField) == 0LL )
  {
    sub_1B86614(this, method);
  }
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, this->fields.afterGauge, v2);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass26_0___PlayEventPointGaugeChangeEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_1B86614(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass27_0___ctor(
        EventInfoPointGaugeControl___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass27_0___PlayEventPointGaugeAddEffect_b__0(
        EventInfoPointGaugeControl___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoPointGaugeControl_o *_4__this; // x8
  EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventPointGaugeComponent_k__BackingField = _4__this->fields._EventPointGaugeComponent_k__BackingField) == 0LL )
  {
    sub_1B86614(this, method);
  }
  EventPointGaugeComponent_k__BackingField->fields._MainPoint_k__BackingField = this->fields.basePoint;
  EventPointGaugeComponent_k__BackingField->fields._BufferPoint_k__BackingField += this->fields.addPoint;
  EventInfoPointGaugeComponent__PlayGaugeAnime(EventPointGaugeComponent_k__BackingField, this->fields.callback, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl_assetLoadFinish___ctor(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D3A68;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3A20;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventInfoPointGaugeControl_assetLoadFinish__BeginInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        int32_t eventId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = eventId;
  if ( (byte_4A4FADC & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&eventId);
    byte_4A4FADC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall EventInfoPointGaugeControl_assetLoadFinish__EndInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall EventInfoPointGaugeControl_assetLoadFinish__Invoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    eventId,
    *(_QWORD *)&this->fields.extra_arg);
}