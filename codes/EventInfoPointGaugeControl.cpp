void EventInfoPointGaugeControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  EventInfoPointGaugeControl_c *v8; // x8
  __int64 v9; // x1
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x9
  struct EventInfoPointGaugeControl_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59725C5 & 1) == 0 )
  {
    sub_2213A60(&EventInfoPointGaugeControl_TypeInfo);
    sub_2213A60(&StringLiteral_17209/*"_battle"*/);
    sub_2213A60(&StringLiteral_17949/*"bit_gauge_change"*/);
    byte_59725C5 = 1;
  }
  v7 = StringLiteral_17949/*"bit_gauge_change"*/;
  EventInfoPointGaugeControl_TypeInfo->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE = (struct System_String_o *)StringLiteral_17949/*"bit_gauge_change"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoPointGaugeControl_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = EventInfoPointGaugeControl_TypeInfo;
  v9 = StringLiteral_17209/*"_battle"*/;
  static_fields = EventInfoPointGaugeControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_GAUGE_POSITION.fields.x = 0xC3B98000C1F80000LL;
  static_fields->EVENT_POINT_GAUGE_POSITION.fields.z = 0.0;
  v11 = v8->static_fields;
  v11->BATTLE_MODE_SUFFIX = (struct System_String_o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->BATTLE_MODE_SUFFIX, v9, v12, v13, v14, v15, v16, v17);
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
  __int64 v9; // x1
  Il2CppObject *Object_object__58532980; // x22
  __int64 v11; // x1
  bool v12; // w8
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *v14; // x22
  bool v15; // w8
  __int64 v16; // x1
  __int64 v17; // kr00_8
  float x; // s0 OVERLAPPED
  EventInfoPointGaugeControl_c *v19; // x0
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x8
  Il2CppObject *Component_object; // x0
  struct EventInfoPointGaugeComponent_o **p_EventPointGaugeComponent_k__BackingField; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct UnityEngine_GameObject_o *EffectParent; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  v5 = *(_QWORD *)&pos.fields.value.fields.y;
  v6 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_59725BA & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&EventInfoPointGaugeControl_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
    sub_2213A60(&Method_System_Nullable_Vector3__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6488/*"EventInfoPointGaugePrefab"*/);
    byte_59725BA = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( !eventInfoAssetData )
    goto LABEL_20;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              eventInfoAssetData,
                              (System_String_o *)StringLiteral_6488/*"EventInfoPointGaugePrefab"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
  result = 0;
  if ( !v12 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v14 = UnityEngine_Object__Instantiate_object_(
            Object_object__58532980,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0, 0);
    result = 0;
    if ( !v15 )
    {
      GameObjectExtensions__SafeSetParent_42897308((UnityEngine_GameObject_o *)v14, this->fields.eventRoot, 0);
      if ( (_BYTE)v6 )
      {
        v17 = v5;
        x = *((float *)&v6 + 1);
      }
      else
      {
        v19 = EventInfoPointGaugeControl_TypeInfo;
        if ( !*(&EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo, v16);
          v19 = EventInfoPointGaugeControl_TypeInfo;
        }
        static_fields = v19->static_fields;
        x = static_fields->EVENT_POINT_GAUGE_POSITION.fields.x;
        v17 = *(_QWORD *)&static_fields->EVENT_POINT_GAUGE_POSITION.fields.y;
      }
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v14, *(UnityEngine_Vector3_o *)&x, 0);
      if ( v14 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v14,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
        this->fields._EventPointGaugeComponent_k__BackingField = (struct EventInfoPointGaugeComponent_o *)Component_object;
        p_EventPointGaugeComponent_k__BackingField = &this->fields._EventPointGaugeComponent_k__BackingField;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
          (int32_t)Component_object,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
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
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.eventPointGaugeEffectParent,
              (int32_t)EffectParent,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35);
            return (UnityEngine_GameObject_o *)v14;
          }
        }
      }
LABEL_20:
      sub_2213CDC(eventInfoAssetData, *(_QWORD *)&pos.fields.hasValue);
    }
  }
  return result;
}


void EventInfoPointGaugeControl__DestroyEventInfo(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_eventPointGaugeObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeObj; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *klass; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59725C2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59725C2 = 1;
  }
  eventPointGaugeObj = this->fields.eventPointGaugeObj;
  p_eventPointGaugeObj = (MissionNaviTransitionBoardItem_o *)&this->fields.eventPointGaugeObj;
  v4 = (UnityEngine_Object_o *)eventPointGaugeObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_eventPointGaugeObj->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800(klass, 0);
    p_eventPointGaugeObj->klass = 0;
    sub_2213A04(p_eventPointGaugeObj, 0, v8, v9, v10, v11, v12, v13);
  }
}


void EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_eventPointGaugeChangeEffectPrefab; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeChangeEffectPrefab; // t1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59725C0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59725C0 = 1;
  }
  eventPointGaugeChangeEffectPrefab = this->fields.eventPointGaugeChangeEffectPrefab;
  p_eventPointGaugeChangeEffectPrefab = (MissionNaviTransitionBoardItem_o *)&this->fields.eventPointGaugeChangeEffectPrefab;
  v4 = (UnityEngine_Object_o *)eventPointGaugeChangeEffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_83459800(v4, 0);
  p_eventPointGaugeChangeEffectPrefab->klass = 0;
  sub_2213A04(p_eventPointGaugeChangeEffectPrefab, 0, v6, v7, v8, v9, v10, v11);
}


void EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointGaugeControl_o *v2; // x19
  struct UnityEngine_GameObject_array *eventPointGaugeEffectPrefabList; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  __int64 v6; // x23
  __int64 v7; // x24
  struct UnityEngine_GameObject_array *v8; // x8
  UnityEngine_Object_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UnityEngine_GameObject_array *v16; // x8

  v2 = this;
  if ( (byte_59725C1 & 1) == 0 )
  {
    this = (EventInfoPointGaugeControl_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59725C1 = 1;
  }
  eventPointGaugeEffectPrefabList = v2->fields.eventPointGaugeEffectPrefabList;
  if ( eventPointGaugeEffectPrefabList )
  {
    max_length = eventPointGaugeEffectPrefabList->max_length;
    if ( (int)max_length >= 1 )
    {
      v5 = 0;
      v6 = (unsigned int)max_length;
      v7 = 32;
      do
      {
        v8 = v2->fields.eventPointGaugeEffectPrefabList;
        if ( !v8 )
          goto LABEL_14;
        if ( v5 >= LODWORD(v8->max_length) )
          goto LABEL_15;
        v9 = *(UnityEngine_Object_o **)((char *)&v8->obj.klass + v7);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        UnityEngine_Object__Destroy_83459800(v9, 0);
        v16 = v2->fields.eventPointGaugeEffectPrefabList;
        if ( !v16 )
LABEL_14:
          sub_2213CDC(this, method);
        if ( v5 >= LODWORD(v16->max_length) )
LABEL_15:
          sub_2213CE4(this);
        *(Il2CppClass **)((char *)&v16->obj.klass + v7) = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v16 + v7), 0, v10, v11, v12, v13, v14, v15);
        ++v5;
        v7 += 8;
      }
      while ( v6 != v5 );
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
  __int64 v11; // x1
  int32_t GroupId; // w21
  int32_t v13; // w22
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59725B9 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59725B9 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0
    || (v6 = (QuestGroupMaster_o *)Instance,
        (Instance = (DataManager_o *)QuestGroupMaster__GetEntityListByGroupId(
                                       (QuestGroupMaster_o *)Instance,
                                       eventId,
                                       1,
                                       0)) == 0) )
  {
    sub_2213CDC(Instance, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
  v7 = 0;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_2213CDC(v8, v9);
    GroupId = QuestGroupMaster__GetGroupId(
                v6,
                *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&word_10),
                12,
                0);
    v13 = *(_DWORD *)((char *)&word_10 + (_QWORD)current);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
    if ( CondType__IsQuestClear_47284152(v13, -1, 0, 0) && GroupId > 0 )
      v7 = GroupId;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
  return v7;
}


bool EventInfoPointGaugeControl__IsEventPointGaugeOpen(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59725B8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59725B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, eventId, 0, 0, 0);
}


void EventInfoPointGaugeControl__LoadEventInfoAssetData(
        EventInfoPointGaugeControl_o *this,
        EventInfoPointGaugeControl_assetLoadFinish_o *callBack,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  AssetData_o *eventInfoAssetData; // x0
  AssetLoader_LoadEndDataHandler_o *v24; // x19
  __int64 v25; // x1

  if ( (byte_59725B4 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__);
    sub_2213A60(&EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo);
    sub_2213A60(&StringLiteral_6458/*"Event/Info"*/);
    byte_59725B4 = 1;
  }
  v7 = sub_2213CCC(EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callBack;
  v16 = v7 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callBack, v17, v18, v19, v20, v21, v22);
  eventInfoAssetData = this->fields.eventInfoAssetData;
  *(_DWORD *)(v7 + 32) = eventId;
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
    v24 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v24,
      (Il2CppObject *)v7,
      Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6458/*"Event/Info"*/, v24, 1, 0, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  __int64 v27; // x1

  if ( (byte_59725BB & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__);
    sub_2213A60(&EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo);
    sub_2213A60(&StringLiteral_6129/*"Effect/Event/{0}"*/);
    byte_59725BB = 1;
  }
  v7 = sub_2213CCC(EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callbackEndFunc;
  v16 = v7 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callbackEndFunc, v17, v18, v19, v20, v21, v22);
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  *(_DWORD *)(v7 + 32) = eventId;
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
    v25 = System_String__Format((System_String_o *)StringLiteral_6129/*"Effect/Event/{0}"*/, v24, 0);
    v26 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v26,
      (Il2CppObject *)v7,
      Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v27);
    AssetManager__loadAssetStorage(v25, v26, 1, 0, 0);
  }
}


void EventInfoPointGaugeControl__LoadEventPointGaugeEffect_51482556(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callbackEndFunc,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  EventInfoPointGaugeControl_assetLoadFinish_o *v16; // x21
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3

  if ( (byte_59725BC & 1) == 0 )
  {
    sub_2213A60(&Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__);
    sub_2213A60(&EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo);
    sub_2213A60(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_59725BC = 1;
  }
  v7 = sub_2213CCC(EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = callbackEndFunc;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)callbackEndFunc, v10, v11, v12, v13, v14, v15);
  v16 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_2213CCC(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x23
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *v30; // x8
  struct System_String_array **p_subEffectNameList; // x8
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8
  struct System_String_array *v33; // x27
  struct UnityEngine_GameObject_array **p_eventPointGaugeEffectPrefabList; // x24
  __int64 v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  unsigned __int64 v42; // x28
  System_String_o **m_Items; // x20
  __int64 v44; // x29
  System_Text_StringBuilder_o *v45; // x25
  __int64 v46; // x1
  System_String_o *BATTLE_MODE_SUFFIX; // x1
  EventInfoPointGaugeControl_c *v48; // x0
  AssetData_o *eventPointGaugeEffectAssetData; // x26
  __int64 v50; // x1
  Il2CppObject *Object_object__58532980; // x25
  Il2CppObject *v52; // x25
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct UnityEngine_GameObject_array *v59; // x8
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 v66; // x25
  System_Action_o *v67; // x26
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  MissionNaviTransitionBoardItem_o *v74; // x0
  int32_t v75; // w1
  __int64 max_length; // [xsp+10h] [xbp-70h]
  int32_t v79; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_59725BF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&EventInfoPointGaugeControl_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__);
    sub_2213A60(&EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_59725BF = 1;
  }
  v79 = 0;
  v13 = sub_2213CCC(EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_63;
  *(_QWORD *)(v13 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = callback;
  v22 = v13 + 32;
  *(_DWORD *)(v13 + 24) = basePoint;
  *(_DWORD *)(v13 + 28) = addPoint;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)callback, v23, v24, v25, v26, v27, v28);
  if ( !this->fields.eventPointGaugeEffectAssetData )
  {
LABEL_18:
    if ( *(_QWORD *)v22 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v22 + 64LL),
        *(_QWORD *)(*(_QWORD *)v22 + 40LL));
      return;
    }
LABEL_63:
    sub_2213CDC(Component_object, v15);
  }
  Component_object = (__int64)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
    Component_object = (__int64)TerminalPramsManager_TypeInfo;
  }
  static_fields = *(struct TerminalPramsManager_StaticFields **)(Component_object + 184);
  if ( static_fields->EVENT_POINT_EFFECT_STATE_ADD != effectState )
  {
    if ( !*(_DWORD *)(Component_object + 228) )
    {
      j_il2cpp_runtime_class_init_0(Component_object, v15);
      static_fields = TerminalPramsManager_TypeInfo->static_fields;
    }
    if ( static_fields->EVENT_POINT_EFFECT_STATE_SUB == effectState )
    {
      EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
      if ( !EventPointGaugeComponent_k__BackingField )
        goto LABEL_63;
      p_subEffectNameList = &EventPointGaugeComponent_k__BackingField->fields.subEffectNameList;
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  v30 = this->fields._EventPointGaugeComponent_k__BackingField;
  if ( !v30 )
    goto LABEL_63;
  p_subEffectNameList = &v30->fields.addEffectNameList;
LABEL_15:
  v33 = *p_subEffectNameList;
  EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(this, v15);
  p_eventPointGaugeEffectPrefabList = &this->fields.eventPointGaugeEffectPrefabList;
  if ( this->fields.eventPointGaugeEffectPrefabList )
  {
    if ( !v33 )
      goto LABEL_63;
  }
  else
  {
    if ( !v33 )
      goto LABEL_63;
    v35 = sub_2213B20(UnityEngine_GameObject___TypeInfo, LODWORD(v33->max_length));
    *p_eventPointGaugeEffectPrefabList = (struct UnityEngine_GameObject_array *)v35;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventPointGaugeEffectPrefabList,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( (int)v33->max_length < 1 )
    return;
  v42 = 0;
  m_Items = v33->m_Items;
  v44 = 32;
  max_length = (unsigned int)v33->max_length;
  while ( 1 )
  {
    v45 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v45, 0);
    if ( v42 >= LODWORD(v33->max_length) )
LABEL_64:
      sub_2213CE4(Component_object);
    if ( !v45 )
      goto LABEL_63;
    System_Text_StringBuilder__Append_75735064(v45, m_Items[v42], 0);
    if ( v42 )
    {
      if ( v42 != 1 )
        goto LABEL_34;
      System_Text_StringBuilder__Append_75735064(v45, (System_String_o *)StringLiteral_16746/*"_"*/, 0);
      v79 = gaugeState;
      BATTLE_MODE_SUFFIX = System_Int32__ToString((int32_t)&v79, 0);
    }
    else
    {
      if ( !isBattleMode )
        goto LABEL_34;
      v48 = EventInfoPointGaugeControl_TypeInfo;
      if ( !*(&EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo, v46);
        v48 = EventInfoPointGaugeControl_TypeInfo;
      }
      BATTLE_MODE_SUFFIX = v48->static_fields->BATTLE_MODE_SUFFIX;
    }
    System_Text_StringBuilder__Append_75735064(v45, BATTLE_MODE_SUFFIX, 0);
LABEL_34:
    eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
    Component_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v45->klass->vtable._3_ToString.methodPtr)(
                         v45,
                         v45->klass->vtable._3_ToString.method);
    if ( !eventPointGaugeEffectAssetData )
      goto LABEL_63;
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                eventPointGaugeEffectAssetData,
                                (System_String_o *)Component_object,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
    Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
    if ( (Component_object & 1) != 0 )
    {
      if ( v42 >= LODWORD(v33->max_length) )
        goto LABEL_64;
      Component_object = (__int64)this->fields.eventPointGaugeEffectAssetData;
      if ( !Component_object )
        goto LABEL_63;
      Object_object__58532980 = AssetData__GetObject_object__58532980(
                                  (AssetData_o *)Component_object,
                                  m_Items[v42],
                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
    if ( (Component_object & 1) != 0 )
      break;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    v52 = UnityEngine_Object__Instantiate_object_(
            Object_object__58532980,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v52, 0, 0);
    if ( (Component_object & 1) != 0 )
      break;
    v59 = *p_eventPointGaugeEffectPrefabList;
    if ( !*p_eventPointGaugeEffectPrefabList )
      goto LABEL_63;
    if ( v42 >= LODWORD(v59->max_length) )
      goto LABEL_64;
    v59->m_Items[v42] = (UnityEngine_GameObject_o *)v52;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v59 + v44), (int32_t)v52, v53, v54, v55, v56, v57, v58);
    GameObjectExtensions__SafeSetParent_42897308(
      (UnityEngine_GameObject_o *)v52,
      this->fields.eventPointGaugeEffectParent,
      0);
    Component_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                  (UnityEngine_GameObject_o *)v52,
                                  (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
    v66 = Component_object;
    if ( !v42 )
    {
      if ( !Component_object )
        goto LABEL_63;
      *(_QWORD *)(Component_object + 32) = 0;
      v74 = (MissionNaviTransitionBoardItem_o *)(Component_object + 32);
      v75 = 0;
LABEL_57:
      sub_2213A04(v74, v75, v60, v61, v62, v63, v64, v65);
      goto LABEL_58;
    }
    if ( v42 == 1 )
    {
      v67 = *(System_Action_o **)(v13 + 40);
      if ( !v67 )
      {
        v67 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v67,
          (Il2CppObject *)v13,
          Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__,
          0);
        *(_QWORD *)(v13 + 40) = v67;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)v67, v68, v69, v70, v71, v72, v73);
      }
      if ( !v66 )
        goto LABEL_63;
      *(_QWORD *)(v66 + 32) = v67;
      v74 = (MissionNaviTransitionBoardItem_o *)(v66 + 32);
      v75 = (int)v67;
      goto LABEL_57;
    }
LABEL_58:
    ++v42;
    v44 += 8;
    if ( max_length == v42 )
      return;
  }
  if ( !*(_QWORD *)v22 )
    goto LABEL_63;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v22 + 64LL),
    *(_QWORD *)(*(_QWORD *)v22 + 40LL));
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x23
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  Il2CppObject *Object_object__58532980; // x22
  Il2CppObject *v31; // x0
  struct UnityEngine_GameObject_o **p_eventPointGaugeChangeEffectPrefab; // x19
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *Component_object; // x19
  System_Action_o *v40; // x20
  System_Action_o *v41; // x22

  if ( (byte_59725BE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__);
    sub_2213A60(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__);
    sub_2213A60(&EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo);
    byte_59725BE = 1;
  }
  v13 = sub_2213CCC(EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_18;
  *(_QWORD *)(v13 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = callback;
  v22 = v13 + 32;
  *(_DWORD *)(v13 + 24) = afterGauge;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)callback, v23, v24, v25, v26, v27, v28);
  if ( !this->fields.eventPointGaugeEffectAssetData || !beforeGauge || *(_DWORD *)(v13 + 24) <= beforeGauge )
    goto LABEL_21;
  EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(this, v15);
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( !eventPointGaugeEffectAssetData )
    goto LABEL_18;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              eventPointGaugeEffectAssetData,
                              name,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  eventPointGaugeEffectAssetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Object_object__58532980,
                                                    0,
                                                    0);
  if ( ((unsigned __int8)eventPointGaugeEffectAssetData & 1) != 0 )
    goto LABEL_21;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v31 = UnityEngine_Object__Instantiate_object_(
          Object_object__58532980,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.eventPointGaugeChangeEffectPrefab = (struct UnityEngine_GameObject_o *)v31;
  p_eventPointGaugeChangeEffectPrefab = &this->fields.eventPointGaugeChangeEffectPrefab;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_eventPointGaugeChangeEffectPrefab,
    (int32_t)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
    sub_2213CDC(eventPointGaugeEffectAssetData, v15);
  }
  GameObjectExtensions__SafeSetParent_42897308(*p_eventPointGaugeChangeEffectPrefab, parent, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *p_eventPointGaugeChangeEffectPrefab,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
  v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v13,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
    0);
  v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v13,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
    0);
  if ( !Component_object )
    goto LABEL_18;
  EventPointGaugeChangeEffectAction__Setup((EventPointGaugeChangeEffectAction_o *)Component_object, v40, v41, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  TerminalPramsManager_c *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  EventInfoPointGaugeControl_o *v26; // x0
  int32_t monitor; // w26
  __int64 v28; // x1
  int32_t EventPointGaugeState; // w23
  EventInfoPointGaugeControl_c *v30; // x0
  UnityEngine_GameObject_o *eventPointGaugeEffectParent; // x21
  int32_t v32; // w22
  _BOOL4 v33; // w9
  System_String_o *EVENT_POINT_GAUGE_EFFECT_CHANGE; // x23
  int32_t v35; // w24
  System_Action_o *v36; // x25
  const MethodInfo *v37; // x6

  if ( (byte_59725BD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventInfoPointGaugeControl_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__);
    sub_2213A60(&EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo);
    byte_59725BD = 1;
  }
  v7 = sub_2213CCC(EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
  if ( !byte_596DB4E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4E = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
    v23 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v7 + 20) = v23->static_fields->_BeforeEventActivityPoint_k__BackingField;
  *(_DWORD *)(v7 + 16) = UserEventPointMaster__GetEventActivityPoint(eventId, 0);
  if ( !byte_596DB4F )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4F = 1;
  }
  v26 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
    v26 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  }
  monitor = (int32_t)v26[1].fields.eventRoot[18].monitor;
  EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v26, eventId, v25);
  v30 = EventInfoPointGaugeControl_TypeInfo;
  eventPointGaugeEffectParent = this->fields.eventPointGaugeEffectParent;
  *(_DWORD *)(v7 + 32) = EventPointGaugeState;
  if ( *(&v30->_2.cctor_finished + 1) )
  {
    v32 = EventPointGaugeState;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v30, v28);
    v30 = EventInfoPointGaugeControl_TypeInfo;
    v32 = *(_DWORD *)(v7 + 32);
  }
  v33 = EventPointGaugeState == 1;
  EVENT_POINT_GAUGE_EFFECT_CHANGE = v30->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE;
  if ( monitor )
    v35 = monitor;
  else
    v35 = v33;
  v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__,
    0);
  EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
    this,
    eventPointGaugeEffectParent,
    EVENT_POINT_GAUGE_EFFECT_CHANGE,
    v35,
    v32,
    v36,
    v37);
}


void EventInfoPointGaugeControl__ReleaseEventInfoAsset(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_eventInfoAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *eventInfoAssetData; // t1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59725C4 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_59725C4 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  p_eventInfoAssetData = (MissionNaviTransitionBoardItem_o *)&this->fields.eventInfoAssetData;
  v4 = eventInfoAssetData;
  if ( eventInfoAssetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_47496972(v4, 0);
    p_eventInfoAssetData->klass = 0;
    sub_2213A04(p_eventInfoAssetData, 0, v6, v7, v8, v9, v10, v11);
  }
}


void EventInfoPointGaugeControl__ReleasePointGaugeEffectAsset(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_eventPointGaugeEffectAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *eventPointGaugeEffectAssetData; // t1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59725C3 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_59725C3 = 1;
  }
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  p_eventPointGaugeEffectAssetData = (MissionNaviTransitionBoardItem_o *)&this->fields.eventPointGaugeEffectAssetData;
  v4 = eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_47496972(v4, 0);
    p_eventPointGaugeEffectAssetData->klass = 0;
    sub_2213A04(p_eventPointGaugeEffectAssetData, 0, v6, v7, v8, v9, v10, v11);
  }
}


void EventInfoPointGaugeControl__SetRootObject(
        EventInfoPointGaugeControl_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.eventRoot = root;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventRoot,
    (int32_t)root,
    (System_String_o *)method,
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t eventId; // w22
  const MethodInfo *v30; // x5
  const MethodInfo *v31; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3

  v8 = *(_QWORD *)&pos.fields.value.fields.y;
  v9 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_59725B6 & 1) == 0 )
  {
    sub_2213A60(&EventInfoPointGaugeControl_TypeInfo);
    sub_2213A60(&Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__);
    sub_2213A60(&EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo);
    sub_2213A60(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_59725B6 = 1;
  }
  v14 = sub_2213CCC(EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 16), (int32_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 48) = callback;
  *(_BYTE *)(v14 + 24) = isActive;
  *(_QWORD *)(v14 + 28) = v9;
  *(_QWORD *)(v14 + 36) = v8;
  *(float *)(v14 + 44) = subMarginX;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 48), (int32_t)callback, v23, v24, v25, v26, v27, v28);
  if ( !eventDetailEntity )
LABEL_13:
    sub_2213CDC(v15, v16);
  eventId = eventDetailEntity->fields.eventId;
  if ( !*(&EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo, v16);
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
      v32 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_2213CCC(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
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


// local variable allocation has failed, the output may be wrong!
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
  struct UnityEngine_GameObject_o **p_eventPointGaugeObj; // x21
  UnityEngine_Object_o *eventPointGaugeObj; // x25
  const MethodInfo *v14; // x3
  struct UnityEngine_GameObject_o *EventPointGaugePrefab; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  int EventActivityPoint; // w22
  EventInfoPointGaugeControl_o *v30; // x0
  __int64 v31; // x1
  int32_t EventPointGaugeState; // w22
  TerminalPramsManager_c *v33; // x0
  TerminalPramsManager_c *v34; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w22
  int32_t BeforeEventActivityPointGauge_k__BackingField; // w21
  const MethodInfo *v37; // x2
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x19
  EventInfoPointGaugeComponent_o *v39; // x0
  bool v40; // zf
  int32_t v41; // w1
  const MethodInfo *v42; // x1
  System_Nullable_Vector3__o v43; // 0:x1.16

  v7 = *(_QWORD *)&pos.fields.value.fields.y;
  v8 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_59725B7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59725B7 = 1;
  }
  p_eventPointGaugeObj = &this->fields.eventPointGaugeObj;
  eventPointGaugeObj = (UnityEngine_Object_o *)this->fields.eventPointGaugeObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
  if ( UnityEngine_Object__op_Equality(eventPointGaugeObj, 0, 0) )
  {
    *(_QWORD *)&v43.fields.hasValue = v8;
    *(_QWORD *)&v43.fields.value.fields.y = v7;
    EventPointGaugePrefab = EventInfoPointGaugeControl__CreateEventPointGaugePrefab(this, v43, subMarginX, v14);
    this->fields.eventPointGaugeObj = EventPointGaugePrefab;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventPointGaugeObj,
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
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
  if ( !TerminalPramsManager__CheckEventActivityPointSaveData(0) )
  {
    EventActivityPoint = UserEventPointMaster__GetEventActivityPoint(eventId, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27);
    if ( !byte_596DB3C )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB3C = 1;
    }
    v30 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27);
      v30 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(v30[1].fields.eventRoot[18].klass) = EventActivityPoint;
    EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v30, eventId, v28);
    if ( !byte_596DB3D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB3D = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
      v33 = TerminalPramsManager_TypeInfo;
    }
    v33->static_fields->_BeforeEventActivityPointGauge_k__BackingField = EventPointGaugeState;
    TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
  if ( !byte_596DB4E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4E = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
    v34 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPoint_k__BackingField = v34->static_fields->_BeforeEventActivityPoint_k__BackingField;
  if ( !byte_596DB4F )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
    byte_596DB4F = 1;
  }
  if ( !*(&v34->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v34, v25);
    v34 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPointGauge_k__BackingField = v34->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
  gameObject = (UnityEngine_GameObject_o *)EventInfoPointGaugeControl__GetEventPointGaugeState(
                                             (EventInfoPointGaugeControl_o *)v34,
                                             eventId,
                                             v26);
  EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
LABEL_41:
    sub_2213CDC(gameObject, v23);
  v40 = (_DWORD)gameObject == 1;
  v39 = this->fields._EventPointGaugeComponent_k__BackingField;
  EventPointGaugeComponent_k__BackingField->fields._MainPoint_k__BackingField = BeforeEventActivityPoint_k__BackingField;
  v40 = v40 && BeforeEventActivityPointGauge_k__BackingField == 0;
  if ( v40 )
    v41 = 1;
  else
    v41 = BeforeEventActivityPointGauge_k__BackingField;
  EventPointGaugeComponent_k__BackingField->fields._GaugeStateId_k__BackingField = v41;
  EventInfoPointGaugeComponent__ChangeDispGauge(v39, v41, v37);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(EventPointGaugeComponent_k__BackingField, v42);
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
  __int64 v12; // x24
  Il2CppObject *Master_object; // x0
  const MethodInfo *v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t eventId; // w21
  __int64 v22; // x1
  const MethodInfo *v23; // x5
  __int64 v24; // x1
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_c *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  Il2CppObject *v29; // x20
  long double v30; // q0
  __int64 v31; // x1
  long double v32; // q0
  EventInfoPointGaugeControl_assetLoadFinish_o *v33; // x21
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  UserEventPointEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v7 = *(_QWORD *)&pos.fields.value.fields.y;
  v8 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_59725B5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventInfoPointGaugeControl_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__);
    sub_2213A60(&EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo);
    sub_2213A60(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_59725B5 = 1;
  }
  entity = 0;
  v12 = sub_2213CCC(EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_44;
  *(_QWORD *)(v12 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 16), (int32_t)this, v15, v16, v17, v18, v19, v20);
  *(_BYTE *)(v12 + 24) = isActive;
  *(_QWORD *)(v12 + 28) = v8;
  *(_QWORD *)(v12 + 36) = v7;
  *(float *)(v12 + 44) = subMarginX;
  if ( !eventDetailEntity )
    goto LABEL_44;
  eventId = eventDetailEntity->fields.eventId;
  if ( !*(&EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo, v14);
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
        v23);
    }
    else
    {
      v33 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_2213CCC(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v33,
        (Il2CppObject *)v12,
        Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__,
        v34);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v33, eventDetailEntity->fields.eventId, v35);
    }
    return;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !EventUiMaster__HasEntity((EventUiMaster_o *)Master_object, eventDetailEntity->fields.eventId, 0)
    && EventDetailEntity__IsEventActivityPoint(eventDetailEntity, 0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
    if ( !byte_596DB4E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB4E = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
      v25 = TerminalPramsManager_TypeInfo;
    }
    if ( v25->static_fields->_BeforeEventActivityPoint_k__BackingField >= 1 )
    {
      if ( !*(&v25->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v25, v24);
      if ( !byte_596DB4F )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB4F = 1;
      }
      v26 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
        v26 = TerminalPramsManager_TypeInfo;
      }
      if ( v26->static_fields->_BeforeEventActivityPointGauge_k__BackingField >= 1 )
      {
        if ( !*(&v26->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v26, v24);
        if ( TerminalPramsManager__CheckEventActivityPointSaveData(0) )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
          v29 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventPointMaster___);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v30 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
          Master_object = (Il2CppObject *)sub_2417958(0, v30);
          if ( v29 )
          {
            if ( UserEventPointMaster__TryGetEntity(
                   (UserEventPointMaster_o *)v29,
                   &entity,
                   (int64_t)Master_object,
                   eventDetailEntity->fields.eventId,
                   0,
                   0) )
            {
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v32 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
              sub_312C1C8(0, 0, v32);
              sub_312C224(0, 0);
              TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
            }
            return;
          }
LABEL_44:
          sub_2213CDC(Master_object, v14);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventPointGaugeComponent_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callBack; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, prefabData);
  _4__this->fields.eventInfoAssetData = prefabData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.eventInfoAssetData,
    (int32_t)prefabData,
    (System_String_o *)method,
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
    sub_2213CDC(_4__this, *(_QWORD *)&eventId);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59725C6 & 1) == 0 )
  {
    sub_2213A60(&Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__);
    sub_2213A60(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    byte_59725C6 = 1;
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
    _9__1 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_2213CCC(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    EventInfoPointGaugeControl_assetLoadFinish___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      v10);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12, v13, v14, v15, v16);
  }
  if ( !v9 )
LABEL_8:
    sub_2213CDC(_4__this, *(_QWORD *)&eventId);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(v9, _9__1, eventId, v7);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, *(_QWORD *)&eId);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, prefabData);
  _4__this->fields.eventPointGaugeEffectAssetData = prefabData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.eventPointGaugeEffectAssetData,
    (int32_t)prefabData,
    (System_String_o *)method,
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
  __int64 v6; // x1
  int32_t v7; // w21
  TerminalPramsManager_c *v8; // x0
  int32_t v9; // w22
  int v10; // w9
  int32_t afterPoint; // w26
  int32_t beforePoint; // w27
  EventInfoPointGaugeControl_o *_4__this; // x21
  int32_t afterGauge; // w22
  System_Action_o *_9__1; // x24
  int32_t v16; // w23
  int32_t EventActivityPointEffectState_k__BackingField; // w20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_59725C7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__);
    byte_59725C7 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596DB64 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB64 = 1;
  }
  EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
  }
  if ( EventPointGaugeComponent_k__BackingField->static_fields->_EventActivityPointEffectState_k__BackingField != EventPointGaugeComponent_k__BackingField->static_fields->EVENT_POINT_EFFECT_STATE_NONE )
  {
    afterPoint = this->fields.afterPoint;
    beforePoint = this->fields.beforePoint;
    _4__this = this->fields.__4__this;
    afterGauge = this->fields.afterGauge;
    if ( !*(&EventPointGaugeComponent_k__BackingField->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventPointGaugeComponent_k__BackingField, method);
    if ( !byte_596DB64 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB64 = 1;
    }
    EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    }
    _9__1 = this->fields.__9__1;
    v16 = this->fields.beforePoint;
    EventActivityPointEffectState_k__BackingField = EventPointGaugeComponent_k__BackingField->static_fields->_EventActivityPointEffectState_k__BackingField;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__9__1,
        (int32_t)_9__1,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    if ( _4__this )
    {
      EventInfoPointGaugeControl__PlayEventPointGaugeAddEffect(
        _4__this,
        afterGauge,
        EventActivityPointEffectState_k__BackingField,
        v16,
        afterPoint - beforePoint,
        _9__1,
        0,
        v2);
      return;
    }
LABEL_33:
    sub_2213CDC(EventPointGaugeComponent_k__BackingField, method);
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
  v7 = this->fields.afterPoint;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_596DB3C )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB3C = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v9 = this->fields.afterGauge;
  v10 = (unsigned __int8)byte_596DB3D;
  v8->static_fields->_BeforeEventActivityPoint_k__BackingField = v7;
  if ( !v10 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596DB3D = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v6);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v9;
  TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoPointGaugeControl___c__DisplayClass25_0___PlayEventPointGaugeEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EVENT_POINT_EFFECT_STATE_NONE; // w22
  int32_t afterPoint; // w21
  int v6; // w9
  int32_t afterGauge; // w22
  int v8; // w9

  if ( (byte_59725C8 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59725C8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v3->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  if ( !byte_596ABDC )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_596ABDC = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  afterPoint = this->fields.afterPoint;
  v6 = (unsigned __int8)byte_596DB3C;
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = EVENT_POINT_EFFECT_STATE_NONE;
  if ( !v6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_596DB3C = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  afterGauge = this->fields.afterGauge;
  v8 = (unsigned __int8)byte_596DB3D;
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = afterPoint;
  if ( !v8 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_596DB3D = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
  System_Action_o *callback; // x1
  int v6; // w9

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventPointGaugeComponent_k__BackingField = _4__this->fields._EventPointGaugeComponent_k__BackingField) == 0 )
  {
    sub_2213CDC(this, method);
  }
  callback = this->fields.callback;
  v6 = this->fields.addPoint + EventPointGaugeComponent_k__BackingField->fields._BufferPoint_k__BackingField;
  EventPointGaugeComponent_k__BackingField->fields._MainPoint_k__BackingField = this->fields.basePoint;
  EventPointGaugeComponent_k__BackingField->fields._BufferPoint_k__BackingField = v6;
  EventInfoPointGaugeComponent__PlayGaugeAnime(EventPointGaugeComponent_k__BackingField, callback, v2);
}


void EventInfoPointGaugeControl_assetLoadFinish___ctor(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200F7DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200F794;
}


System_IAsyncResult_o *EventInfoPointGaugeControl_assetLoadFinish__BeginInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        int32_t eventId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = eventId;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void EventInfoPointGaugeControl_assetLoadFinish__EndInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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