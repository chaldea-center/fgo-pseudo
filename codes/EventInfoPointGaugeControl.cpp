void EventInfoPointGaugeControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  EventInfoPointGaugeControl_c *v3; // x8
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x9
  int32_t v5; // w1
  struct EventInfoPointGaugeControl_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C28802 & 1) == 0 )
  {
    sub_1C2D490(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C2D490(&StringLiteral_16533/*"_battle"*/);
    sub_1C2D490(&StringLiteral_17204/*"bit_gauge_change"*/);
    byte_4C28802 = 1;
  }
  EventInfoPointGaugeControl_TypeInfo->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE = (struct System_String_o *)StringLiteral_17204/*"bit_gauge_change"*/;
  sub_1C2D434((CGThumbnailListItem_o *)EventInfoPointGaugeControl_TypeInfo->static_fields, StringLiteral_17204/*"bit_gauge_change"*/, v1, v2);
  v3 = EventInfoPointGaugeControl_TypeInfo;
  static_fields = EventInfoPointGaugeControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_GAUGE_POSITION.fields.x = 0xC3B98000C1F80000LL;
  static_fields->EVENT_POINT_GAUGE_POSITION.fields.z = 0.0;
  v5 = StringLiteral_16533/*"_battle"*/;
  v6 = v3->static_fields;
  v6->BATTLE_MODE_SUFFIX = (struct System_String_o *)StringLiteral_16533/*"_battle"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->BATTLE_MODE_SUFFIX, v5, v7, v8);
}


void EventInfoPointGaugeControl___ctor(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *EventInfoPointGaugeControl__CreateEventPointGaugePrefab(
        EventInfoPointGaugeControl_o *this,
        System_Nullable_Vector3__o pos,
        float subMarginX,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  AssetData_o *eventInfoAssetData; // x0
  Il2CppObject *Object_object__51051712; // x22
  bool v10; // w8
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *v12; // x22
  bool v13; // w8
  float z; // s2
  float y; // s1
  float x; // s0 OVERLAPPED
  EventInfoPointGaugeControl_c *v17; // x0
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x8
  Il2CppObject *Component_object; // x0
  struct EventInfoPointGaugeComponent_o **p_EventPointGaugeComponent_k__BackingField; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UnityEngine_GameObject_o *EffectParent; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  v5 = *(_QWORD *)&pos.fields.value.fields.y;
  v6 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4C287F7 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
    sub_1C2D490(&Method_System_Nullable_Vector3__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6215/*"EventInfoPointGaugePrefab"*/);
    byte_4C287F7 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( !eventInfoAssetData )
    goto LABEL_20;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              eventInfoAssetData,
                              (System_String_o *)StringLiteral_6215/*"EventInfoPointGaugePrefab"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0);
  result = 0;
  if ( !v10 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__Instantiate_object_(
            Object_object__51051712,
            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0);
    result = 0;
    if ( !v13 )
    {
      GameObjectExtensions__SafeSetParent_35924288((UnityEngine_GameObject_o *)v12, this->fields.eventRoot, 0);
      if ( (_BYTE)v6 )
      {
        z = *((float *)&v5 + 1);
        y = *(float *)&v5;
        x = *((float *)&v6 + 1);
      }
      else
      {
        v17 = EventInfoPointGaugeControl_TypeInfo;
        if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v17 = EventInfoPointGaugeControl_TypeInfo;
        }
        static_fields = v17->static_fields;
        x = static_fields->EVENT_POINT_GAUGE_POSITION.fields.x;
        y = static_fields->EVENT_POINT_GAUGE_POSITION.fields.y;
        z = static_fields->EVENT_POINT_GAUGE_POSITION.fields.z;
      }
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v12, *(UnityEngine_Vector3_o *)&x, 0);
      if ( v12 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v12,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
        this->fields._EventPointGaugeComponent_k__BackingField = (struct EventInfoPointGaugeComponent_o *)Component_object;
        p_EventPointGaugeComponent_k__BackingField = &this->fields._EventPointGaugeComponent_k__BackingField;
        sub_1C2D434(
          (CGThumbnailListItem_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
          (int32_t)Component_object,
          v21,
          v22);
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
            sub_1C2D434(
              (CGThumbnailListItem_o *)&this->fields.eventPointGaugeEffectParent,
              (int32_t)EffectParent,
              v24,
              v25);
            return (UnityEngine_GameObject_o *)v12;
          }
        }
      }
LABEL_20:
      sub_1C2D6EC(eventInfoAssetData, *(_QWORD *)&pos.fields.hasValue);
    }
  }
  return result;
}


void EventInfoPointGaugeControl__DestroyEventInfo(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_eventPointGaugeObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C287FF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C287FF = 1;
  }
  eventPointGaugeObj = this->fields.eventPointGaugeObj;
  p_eventPointGaugeObj = (CGThumbnailListItem_o *)&this->fields.eventPointGaugeObj;
  v4 = (UnityEngine_Object_o *)eventPointGaugeObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_eventPointGaugeObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(klass, 0);
    p_eventPointGaugeObj->klass = 0;
    sub_1C2D434(p_eventPointGaugeObj, 0, v7, v8);
  }
}


void EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_eventPointGaugeChangeEffectPrefab; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeChangeEffectPrefab; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C287FD & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C287FD = 1;
  }
  eventPointGaugeChangeEffectPrefab = this->fields.eventPointGaugeChangeEffectPrefab;
  p_eventPointGaugeChangeEffectPrefab = (CGThumbnailListItem_o *)&this->fields.eventPointGaugeChangeEffectPrefab;
  v4 = (UnityEngine_Object_o *)eventPointGaugeChangeEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(v4, 0);
  p_eventPointGaugeChangeEffectPrefab->klass = 0;
  sub_1C2D434(p_eventPointGaugeChangeEffectPrefab, 0, v6, v7);
}


void EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoPointGaugeControl_o *v3; // x19
  struct UnityEngine_GameObject_array *eventPointGaugeEffectPrefabList; // x8
  unsigned __int64 v5; // x21
  __int64 max_length; // x22
  UnityEngine_Object_o *v7; // x20
  const MethodInfo *v8; // x3
  struct UnityEngine_GameObject_array *v9; // x8
  Il2CppClass **v10; // x0

  v3 = this;
  if ( (byte_4C287FE & 1) == 0 )
  {
    this = (EventInfoPointGaugeControl_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C287FE = 1;
  }
  eventPointGaugeEffectPrefabList = v3->fields.eventPointGaugeEffectPrefabList;
  if ( eventPointGaugeEffectPrefabList && (int)eventPointGaugeEffectPrefabList->max_length >= 1 )
  {
    v5 = 0;
    max_length = (unsigned int)eventPointGaugeEffectPrefabList->max_length;
    while ( 1 )
    {
      if ( v5 >= LODWORD(eventPointGaugeEffectPrefabList->max_length) )
LABEL_15:
        sub_1C2D6F4(this, method, v2);
      v7 = (UnityEngine_Object_o *)eventPointGaugeEffectPrefabList->m_Items[v5];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v7, 0);
      v9 = v3->fields.eventPointGaugeEffectPrefabList;
      if ( !v9 )
LABEL_13:
        sub_1C2D6EC(this, method);
      if ( v5 >= LODWORD(v9->max_length) )
        goto LABEL_15;
      v10 = &v9->obj.klass + v5;
      v10[4] = 0;
      sub_1C2D434((CGThumbnailListItem_o *)(v10 + 4), 0, v2, v8);
      if ( ++v5 == max_length )
        break;
      eventPointGaugeEffectPrefabList = v3->fields.eventPointGaugeEffectPrefabList;
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

  if ( (byte_4C287F6 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C287F6 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0
    || (v6 = (QuestGroupMaster_o *)Instance,
        (Instance = (DataManager_o *)QuestGroupMaster__GetEntityListByGroupId(
                                       (QuestGroupMaster_o *)Instance,
                                       eventId,
                                       1,
                                       0)) == 0) )
  {
    sub_1C2D6EC(Instance, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
  v7 = 0;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1C2D6EC(v8, v9);
    GroupId = QuestGroupMaster__GetGroupId(
                v6,
                *(_DWORD *)((char *)&v14.fields._current->klass + (unsigned __int64)&word_10),
                12,
                0);
    v12 = *(_DWORD *)((char *)&word_10 + (_QWORD)current);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !((GroupId < 1) | !CondType__IsQuestClear_40102980(v12, -1, 0, 0)) )
      v7 = GroupId;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
  return v7;
}


bool EventInfoPointGaugeControl__IsEventPointGaugeOpen(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C287F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C287F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
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
  const MethodInfo *v11; // x3
  __int64 v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  AssetData_o *eventInfoAssetData; // x0
  AssetLoader_LoadEndDataHandler_o *v16; // x19

  if ( (byte_4C287F1 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__);
    sub_1C2D490(&EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo);
    sub_1C2D490(&StringLiteral_6189/*"Event/Info"*/);
    byte_4C287F1 = 1;
  }
  v7 = sub_1C2D6DC(EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callBack;
  v12 = v7 + 24;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callBack, v13, v14);
  *(_DWORD *)(v7 + 32) = eventId;
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData && !AssetData__get_IsEmpty(eventInfoAssetData, 0) )
  {
    if ( *(_QWORD *)v12 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v12 + 64LL),
        *(unsigned int *)(v7 + 32),
        *(_QWORD *)(*(_QWORD *)v12 + 40LL));
  }
  else
  {
    v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v16,
      (Il2CppObject *)v7,
      Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6189/*"Event/Info"*/, v16, 1, 0);
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
  const MethodInfo *v11; // x3
  __int64 v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_4C287F8 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__);
    sub_1C2D490(&EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo);
    sub_1C2D490(&StringLiteral_5870/*"Effect/Event/{0}"*/);
    byte_4C287F8 = 1;
  }
  v7 = sub_1C2D6DC(EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callbackEndFunc;
  v12 = v7 + 24;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callbackEndFunc, v13, v14);
  *(_DWORD *)(v7 + 32) = eventId;
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData && !AssetData__get_IsEmpty(eventPointGaugeEffectAssetData, 0) )
  {
    if ( *(_QWORD *)v12 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v12 + 64LL),
        *(unsigned int *)(v7 + 32),
        *(_QWORD *)(*(_QWORD *)v12 + 40LL));
  }
  else
  {
    v16 = (Il2CppObject *)System_Int32__ToString((int)v7 + 32, 0);
    v17 = System_String__Format((System_String_o *)StringLiteral_5870/*"Effect/Event/{0}"*/, v16, 0);
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v18,
      (Il2CppObject *)v7,
      Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v17, v18, 1, 0);
  }
}


void EventInfoPointGaugeControl__LoadEventPointGaugeEffect_43383576(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callbackEndFunc,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3

  if ( (byte_4C287F9 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__);
    sub_1C2D490(&EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo);
    sub_1C2D490(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_4C287F9 = 1;
  }
  v7 = sub_1C2D6DC(EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = callbackEndFunc;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callbackEndFunc, v10, v11);
  v12 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1C2D6DC(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
  EventInfoPointGaugeControl_assetLoadFinish___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
    v13);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(this, v12, eventId, v14);
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
  const MethodInfo *v17; // x3
  __int64 v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8
  struct System_String_array **p_addEffectNameList; // x8
  struct EventInfoPointGaugeComponent_o *v24; // x8
  struct System_String_array *v25; // x28
  struct UnityEngine_GameObject_array **p_eventPointGaugeEffectPrefabList; // x24
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  unsigned __int64 v30; // x29
  System_String_o **m_Items; // x19
  __int64 v32; // x25
  System_Text_StringBuilder_o *v33; // x26
  __int64 v34; // x2
  System_String_o *BATTLE_MODE_SUFFIX; // x1
  EventInfoPointGaugeControl_c *v36; // x0
  AssetData_o *eventPointGaugeEffectAssetData; // x27
  Il2CppObject *Object_object__51051712; // x26
  Il2CppObject *v39; // x26
  const MethodInfo *v40; // x3
  struct UnityEngine_GameObject_array *v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x26
  System_Action_o *klass; // x27
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  CGThumbnailListItem_o *v48; // x0
  int32_t v49; // w1
  CGThumbnailListItem_o *v50; // [xsp+0h] [xbp-80h]
  __int64 max_length; // [xsp+10h] [xbp-70h]
  int32_t v54; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C287FC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__);
    sub_1C2D490(&EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C287FC = 1;
  }
  v54 = 0;
  v13 = sub_1C2D6DC(EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
LABEL_61:
    sub_1C2D6EC(Component_object, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 32) = callback;
  v18 = v13 + 32;
  *(_DWORD *)(v13 + 24) = basePoint;
  *(_DWORD *)(v13 + 28) = addPoint;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 32), (int32_t)callback, v19, v20);
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
    if ( !*(_QWORD *)v18 )
      goto LABEL_61;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v18 + 64LL),
      *(_QWORD *)(*(_QWORD *)v18 + 40LL));
    return;
  }
  v24 = this->fields._EventPointGaugeComponent_k__BackingField;
  if ( !v24 )
    goto LABEL_61;
  p_addEffectNameList = &v24->fields.subEffectNameList;
LABEL_15:
  v25 = *p_addEffectNameList;
  EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(this, v15);
  p_eventPointGaugeEffectPrefabList = &this->fields.eventPointGaugeEffectPrefabList;
  if ( this->fields.eventPointGaugeEffectPrefabList )
  {
    if ( !v25 )
      goto LABEL_61;
  }
  else
  {
    if ( !v25 )
      goto LABEL_61;
    v27 = sub_1C2D538(UnityEngine_GameObject___TypeInfo, LODWORD(v25->max_length));
    *p_eventPointGaugeEffectPrefabList = (struct UnityEngine_GameObject_array *)v27;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventPointGaugeEffectPrefabList, v27, v28, v29);
  }
  if ( (int)v25->max_length >= 1 )
  {
    max_length = (unsigned int)v25->max_length;
    v50 = (CGThumbnailListItem_o *)(v13 + 40);
    v30 = 0;
    m_Items = v25->m_Items;
    v32 = 32;
    do
    {
      v33 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(v33, 0);
      if ( v30 >= LODWORD(v25->max_length) )
LABEL_62:
        sub_1C2D6F4(Component_object, v15, v34);
      if ( !v33 )
        goto LABEL_61;
      System_Text_StringBuilder__Append_63542928(v33, m_Items[v30], 0);
      if ( v30 )
      {
        if ( v30 != 1 )
          goto LABEL_32;
        System_Text_StringBuilder__Append_63542928(v33, (System_String_o *)StringLiteral_16105/*"_"*/, 0);
        v54 = gaugeState;
        BATTLE_MODE_SUFFIX = System_Int32__ToString((int32_t)&v54, 0);
      }
      else
      {
        if ( !isBattleMode )
          goto LABEL_32;
        v36 = EventInfoPointGaugeControl_TypeInfo;
        if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v36 = EventInfoPointGaugeControl_TypeInfo;
        }
        BATTLE_MODE_SUFFIX = v36->static_fields->BATTLE_MODE_SUFFIX;
      }
      System_Text_StringBuilder__Append_63542928(v33, BATTLE_MODE_SUFFIX, 0);
LABEL_32:
      eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
      Component_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v33->klass->vtable._3_ToString.methodPtr)(
                           v33,
                           v33->klass->vtable._3_ToString.method);
      if ( !eventPointGaugeEffectAssetData )
        goto LABEL_61;
      Object_object__51051712 = AssetData__GetObject_object__51051712(
                                  eventPointGaugeEffectAssetData,
                                  (System_String_o *)Component_object,
                                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0);
      if ( (Component_object & 1) != 0 )
      {
        if ( v30 >= LODWORD(v25->max_length) )
          goto LABEL_62;
        Component_object = (__int64)this->fields.eventPointGaugeEffectAssetData;
        if ( !Component_object )
          goto LABEL_61;
        Object_object__51051712 = AssetData__GetObject_object__51051712(
                                    (AssetData_o *)Component_object,
                                    m_Items[v30],
                                    (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0);
      if ( (Component_object & 1) != 0 )
        goto LABEL_58;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v39 = UnityEngine_Object__Instantiate_object_(
              Object_object__51051712,
              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v39, 0, 0);
      if ( (Component_object & 1) != 0 )
        goto LABEL_58;
      v41 = *p_eventPointGaugeEffectPrefabList;
      if ( !*p_eventPointGaugeEffectPrefabList )
        goto LABEL_61;
      if ( v30 >= LODWORD(v41->max_length) )
        goto LABEL_62;
      v41->m_Items[v30] = (UnityEngine_GameObject_o *)v39;
      sub_1C2D434((CGThumbnailListItem_o *)((char *)v41 + v32), (int32_t)v39, v34, v40);
      GameObjectExtensions__SafeSetParent_35924288(
        (UnityEngine_GameObject_o *)v39,
        this->fields.eventPointGaugeEffectParent,
        0);
      Component_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                    (UnityEngine_GameObject_o *)v39,
                                    (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
      v44 = Component_object;
      if ( !v30 )
      {
        if ( !Component_object )
          goto LABEL_61;
        *(_QWORD *)(Component_object + 32) = 0;
        v48 = (CGThumbnailListItem_o *)(Component_object + 32);
        v49 = 0;
LABEL_55:
        sub_1C2D434(v48, v49, v42, v43);
        goto LABEL_56;
      }
      if ( v30 == 1 )
      {
        klass = (System_Action_o *)v50->klass;
        if ( !v50->klass )
        {
          klass = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            klass,
            (Il2CppObject *)v13,
            Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__,
            0);
          *(_QWORD *)(v13 + 40) = klass;
          sub_1C2D434(v50, (int32_t)klass, v46, v47);
        }
        if ( !v44 )
          goto LABEL_61;
        *(_QWORD *)(v44 + 32) = klass;
        v48 = (CGThumbnailListItem_o *)(v44 + 32);
        v49 = (int)klass;
        goto LABEL_55;
      }
LABEL_56:
      ++v30;
      v32 += 8;
    }
    while ( max_length != v30 );
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
  const MethodInfo *v17; // x3
  __int64 v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Object_object__51051712; // x22
  Il2CppObject *v22; // x0
  struct UnityEngine_GameObject_o **p_eventPointGaugeChangeEffectPrefab; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *Component_object; // x19
  System_Action_o *v27; // x20
  System_Action_o *v28; // x22

  if ( (byte_4C287FB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__);
    sub_1C2D490(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__);
    sub_1C2D490(&EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo);
    byte_4C287FB = 1;
  }
  v13 = sub_1C2D6DC(EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_18;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 32) = callback;
  v18 = v13 + 32;
  *(_DWORD *)(v13 + 24) = afterGauge;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 32), (int32_t)callback, v19, v20);
  if ( !this->fields.eventPointGaugeEffectAssetData || !beforeGauge || *(_DWORD *)(v13 + 24) <= beforeGauge )
    goto LABEL_21;
  EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(this, v15);
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( !eventPointGaugeEffectAssetData )
    goto LABEL_18;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              eventPointGaugeEffectAssetData,
                              name,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  eventPointGaugeEffectAssetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Object_object__51051712,
                                                    0,
                                                    0);
  if ( ((unsigned __int8)eventPointGaugeEffectAssetData & 1) != 0 )
    goto LABEL_21;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = UnityEngine_Object__Instantiate_object_(
          Object_object__51051712,
          (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.eventPointGaugeChangeEffectPrefab = (struct UnityEngine_GameObject_o *)v22;
  p_eventPointGaugeChangeEffectPrefab = &this->fields.eventPointGaugeChangeEffectPrefab;
  sub_1C2D434((CGThumbnailListItem_o *)p_eventPointGaugeChangeEffectPrefab, (int32_t)v22, v24, v25);
  eventPointGaugeEffectAssetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)*p_eventPointGaugeChangeEffectPrefab,
                                                    0,
                                                    0);
  if ( ((unsigned __int8)eventPointGaugeEffectAssetData & 1) != 0 )
  {
LABEL_21:
    if ( *(_QWORD *)v18 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v18 + 64LL),
        *(_QWORD *)(*(_QWORD *)v18 + 40LL));
      return;
    }
LABEL_18:
    sub_1C2D6EC(eventPointGaugeEffectAssetData, v15);
  }
  GameObjectExtensions__SafeSetParent_35924288(*p_eventPointGaugeChangeEffectPrefab, parent, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *p_eventPointGaugeChangeEffectPrefab,
                       (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
  v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v13,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
    0);
  v28 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v13,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
    0);
  if ( !Component_object )
    goto LABEL_18;
  EventPointGaugeChangeEffectAction__Setup((EventPointGaugeChangeEffectAction_o *)Component_object, v27, v28, 0);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  TerminalPramsManager_c *v14; // x0
  const MethodInfo *v15; // x2
  EventInfoPointGaugeControl_o *v16; // x0
  int32_t m_CachedPtr; // w26
  int32_t EventPointGaugeState; // w0
  int32_t v19; // w23
  EventInfoPointGaugeControl_c *v20; // x0
  UnityEngine_GameObject_o *eventPointGaugeEffectParent; // x21
  int32_t v22; // w22
  bool v23; // zf
  System_String_o *EVENT_POINT_GAUGE_EFFECT_CHANGE; // x24
  int32_t v25; // w23
  System_Action_o *v26; // x25
  const MethodInfo *v27; // x6

  if ( (byte_4C287FA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__);
    sub_1C2D490(&EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo);
    byte_4C287FA = 1;
  }
  v7 = sub_1C2D6DC(EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), (int32_t)callback, v12, v13);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24732 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24732 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v7 + 20) = v14->static_fields->_BeforeEventActivityPoint_k__BackingField;
  *(_DWORD *)(v7 + 16) = UserEventPointMaster__GetEventActivityPoint(eventId, 0);
  if ( !byte_4C24733 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24733 = 1;
  }
  v16 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr = v16[1].fields.eventRoot[17].fields.m_CachedPtr;
  EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v16, eventId, v15);
  *(_DWORD *)(v7 + 32) = EventPointGaugeState;
  v19 = EventPointGaugeState;
  v20 = EventInfoPointGaugeControl_TypeInfo;
  eventPointGaugeEffectParent = this->fields.eventPointGaugeEffectParent;
  if ( EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    v22 = v19;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
    v20 = EventInfoPointGaugeControl_TypeInfo;
    v22 = *(_DWORD *)(v7 + 32);
  }
  v23 = v19 == 1 && m_CachedPtr == 0;
  EVENT_POINT_GAUGE_EFFECT_CHANGE = v20->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE;
  if ( v23 )
    v25 = 1;
  else
    v25 = m_CachedPtr;
  v26 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__,
    0);
  EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
    this,
    eventPointGaugeEffectParent,
    EVENT_POINT_GAUGE_EFFECT_CHANGE,
    v25,
    v22,
    v26,
    v27);
}


void EventInfoPointGaugeControl__ReleaseEventInfoAsset(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_eventInfoAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *eventInfoAssetData; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C28801 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C28801 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  p_eventInfoAssetData = (CGThumbnailListItem_o *)&this->fields.eventInfoAssetData;
  v4 = eventInfoAssetData;
  if ( eventInfoAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(v4, 0);
    p_eventInfoAssetData->klass = 0;
    sub_1C2D434(p_eventInfoAssetData, 0, v6, v7);
  }
}


void EventInfoPointGaugeControl__ReleasePointGaugeEffectAsset(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_eventPointGaugeEffectAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *eventPointGaugeEffectAssetData; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C28800 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C28800 = 1;
  }
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  p_eventPointGaugeEffectAssetData = (CGThumbnailListItem_o *)&this->fields.eventPointGaugeEffectAssetData;
  v4 = eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(v4, 0);
    p_eventPointGaugeEffectAssetData->klass = 0;
    sub_1C2D434(p_eventPointGaugeEffectAssetData, 0, v6, v7);
  }
}


void EventInfoPointGaugeControl__SetRootObject(
        EventInfoPointGaugeControl_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.eventRoot = root;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventRoot, (int32_t)root, (int32_t)method, v3);
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
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t eventId; // w22
  const MethodInfo *v22; // x5
  const MethodInfo *v23; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v24; // x22
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3

  v8 = *(_QWORD *)&pos.fields.value.fields.y;
  v9 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4C287F3 & 1) == 0 )
  {
    sub_1C2D490(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C2D490(&Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__);
    sub_1C2D490(&EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo);
    sub_1C2D490(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_4C287F3 = 1;
  }
  v14 = sub_1C2D6DC(EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 48) = callback;
  *(_BYTE *)(v14 + 24) = isActive;
  *(_QWORD *)(v14 + 28) = v9;
  *(_QWORD *)(v14 + 36) = v8;
  *(float *)(v14 + 44) = subMarginX;
  sub_1C2D434((CGThumbnailListItem_o *)(v14 + 48), (int32_t)callback, v19, v20);
  if ( !eventDetailEntity )
LABEL_13:
    sub_1C2D6EC(v15, v16);
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
        v22);
      EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        this,
        eventDetailEntity->fields.eventId,
        *(System_Action_o **)(v14 + 48),
        v23);
    }
    else
    {
      v24 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1C2D6DC(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v24,
        (Il2CppObject *)v14,
        Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__,
        v25);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v24, eventDetailEntity->fields.eventId, v26);
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
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  int EventActivityPoint; // w22
  EventInfoPointGaugeControl_o *v23; // x0
  int32_t EventPointGaugeState; // w22
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_c *v26; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w22
  unsigned int BeforeEventActivityPointGauge_k__BackingField; // w21
  const MethodInfo *v29; // x2
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x19
  bool v31; // zf
  const MethodInfo *v32; // x1
  System_Nullable_Vector3__o v33; // 0:x1.16

  v7 = *(_QWORD *)&pos.fields.value.fields.y;
  v8 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4C287F4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C287F4 = 1;
  }
  p_eventPointGaugeObj = &this->fields.eventPointGaugeObj;
  eventPointGaugeObj = (UnityEngine_Object_o *)this->fields.eventPointGaugeObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(eventPointGaugeObj, 0, 0) )
  {
    *(_QWORD *)&v33.fields.hasValue = v8;
    *(_QWORD *)&v33.fields.value.fields.y = v7;
    EventPointGaugePrefab = EventInfoPointGaugeControl__CreateEventPointGaugePrefab(this, v33, subMarginX, v14);
    this->fields.eventPointGaugeObj = EventPointGaugePrefab;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventPointGaugeObj, (int32_t)EventPointGaugePrefab, v16, v17);
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
    if ( !byte_4C24722 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24722 = 1;
    }
    v23 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(v23[1].fields.eventRoot[17].monitor) = EventActivityPoint;
    EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v23, eventId, v21);
    if ( !byte_4C24723 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24723 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_BeforeEventActivityPointGauge_k__BackingField = EventPointGaugeState;
    TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24732 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24732 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPoint_k__BackingField = v26->static_fields->_BeforeEventActivityPoint_k__BackingField;
  if ( !byte_4C24733 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4C24733 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPointGauge_k__BackingField = v26->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
  gameObject = (UnityEngine_GameObject_o *)EventInfoPointGaugeControl__GetEventPointGaugeState(
                                             (EventInfoPointGaugeControl_o *)v26,
                                             eventId,
                                             v20);
  EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
  v31 = (_DWORD)gameObject == 1 && BeforeEventActivityPointGauge_k__BackingField == 0;
  v19 = v31 ? 1LL : BeforeEventActivityPointGauge_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
LABEL_41:
    sub_1C2D6EC(gameObject, v19);
  EventPointGaugeComponent_k__BackingField->fields._GaugeStateId_k__BackingField = v19;
  EventPointGaugeComponent_k__BackingField->fields._MainPoint_k__BackingField = BeforeEventActivityPoint_k__BackingField;
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, v19, v29);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(EventPointGaugeComponent_k__BackingField, v32);
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
  const MethodInfo *v16; // x3
  int32_t eventId; // w21
  const MethodInfo *v18; // x5
  TerminalPramsManager_c *v19; // x0
  TerminalPramsManager_c *v20; // x0
  Il2CppObject *v21; // x21
  TerminalPramsManager_c *v22; // x0
  EventInfoPointGaugeControl_assetLoadFinish_o *v23; // x21
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  UserEventPointEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v7 = *(_QWORD *)&pos.fields.value.fields.y;
  v8 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4C287F2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&EventInfoPointGaugeControl_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__);
    sub_1C2D490(&EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo);
    sub_1C2D490(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_4C287F2 = 1;
  }
  entity = 0;
  v12 = sub_1C2D6DC(EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_56;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
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
        v18);
    }
    else
    {
      v23 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1C2D6DC(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v23,
        (Il2CppObject *)v12,
        Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__,
        v24);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v23, eventDetailEntity->fields.eventId, v25);
    }
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventUiMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_56;
  if ( !EventUiMaster__HasEntity(Master_object, eventDetailEntity->fields.eventId, 0)
    && EventDetailEntity__IsEventActivityPoint(eventDetailEntity, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24732 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24732 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    if ( v19->static_fields->_BeforeEventActivityPoint_k__BackingField >= 1 )
    {
      if ( !v19->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v19);
      if ( !byte_4C24733 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24733 = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v20 = TerminalPramsManager_TypeInfo;
      }
      if ( v20->static_fields->_BeforeEventActivityPointGauge_k__BackingField >= 1 )
      {
        if ( !v20->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v20);
        if ( TerminalPramsManager__CheckEventActivityPointSaveData(0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v21 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventPointMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
          }
          Master_object = (EventUiMaster_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Master_object = (EventUiMaster_o *)NetworkManager_TypeInfo;
          }
          if ( v21 )
          {
            if ( UserEventPointMaster__TryGetEntity(
                   (UserEventPointMaster_o *)v21,
                   &entity,
                   (int64_t)Master_object[2].fields.list[1].monitor,
                   eventDetailEntity->fields.eventId,
                   0,
                   0) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C24722 )
              {
                sub_1C2D490(&TerminalPramsManager_TypeInfo);
                byte_4C24722 = 1;
              }
              v22 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v22 = TerminalPramsManager_TypeInfo;
              }
              v22->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
              if ( !byte_4C24723 )
              {
                sub_1C2D490(&TerminalPramsManager_TypeInfo);
                v22 = TerminalPramsManager_TypeInfo;
                byte_4C24723 = 1;
              }
              if ( !v22->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v22);
                v22 = TerminalPramsManager_TypeInfo;
              }
              v22->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
              TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
            }
            return;
          }
LABEL_56:
          sub_1C2D6EC(Master_object, v14);
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
  const MethodInfo *v3; // x3

  this->fields._EventPointGaugeComponent_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  const MethodInfo *v3; // x3
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callBack; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, prefabData);
  _4__this->fields.eventInfoAssetData = prefabData;
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.eventInfoAssetData, (int32_t)prefabData, (int32_t)method, v3);
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
    sub_1C2D6EC(_4__this, *(_QWORD *)&eventId);
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
  const MethodInfo *v12; // x3

  if ( (byte_4C28804 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__);
    sub_1C2D490(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_4C28804 = 1;
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
    _9__1 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1C2D6DC(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    EventInfoPointGaugeControl_assetLoadFinish___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      v10);
    this->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
  }
  if ( !v9 )
LABEL_8:
    sub_1C2D6EC(_4__this, *(_QWORD *)&eventId);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(v9, _9__1, eventId, v7);
}


void EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, eId);
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
  const MethodInfo *v3; // x3
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, prefabData);
  _4__this->fields.eventPointGaugeEffectAssetData = prefabData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&_4__this->fields.eventPointGaugeEffectAssetData,
    (int32_t)prefabData,
    (int32_t)method,
    v3);
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
  const MethodInfo *v17; // x3

  if ( (byte_4C28805 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__);
    byte_4C28805 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24747 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24747 = 1;
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
    if ( !byte_4C24747 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24747 = 1;
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
      _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v16, v17);
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
    sub_1C2D6EC(EventPointGaugeComponent_k__BackingField, method);
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
  if ( !byte_4C24722 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24722 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_BeforeEventActivityPoint_k__BackingField = v6;
  v8 = this->fields.afterGauge;
  if ( !byte_4C24723 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C24723 = 1;
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

  if ( (byte_4C28806 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C28806 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v3->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  if ( !byte_4C21ACB )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C21ACB = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = EVENT_POINT_EFFECT_STATE_NONE;
  afterPoint = this->fields.afterPoint;
  if ( !byte_4C24722 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C24722 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = afterPoint;
  afterGauge = this->fields.afterGauge;
  if ( !byte_4C24723 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C24723 = 1;
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7283C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A727F4;
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
  if ( (byte_4C28803 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    byte_4C28803 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void EventInfoPointGaugeControl_assetLoadFinish__EndInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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