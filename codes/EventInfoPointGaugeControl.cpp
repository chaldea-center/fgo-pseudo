void __fastcall EventInfoPointGaugeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  EventInfoPointGaugeControl_c *v6; // x8
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x9
  int32_t v8; // w1
  struct EventInfoPointGaugeControl_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FDBD7 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoPointGaugeControl_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_16459/*"_battle"*/, v4);
    sub_1B640C8(&StringLiteral_17169/*"bit_gauge_change"*/, v5);
    byte_49FDBD7 = 1;
  }
  EventInfoPointGaugeControl_TypeInfo->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE = (struct System_String_o *)StringLiteral_17169/*"bit_gauge_change"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoPointGaugeControl_TypeInfo->static_fields,
    StringLiteral_17169/*"bit_gauge_change"*/,
    v2,
    v3);
  v6 = EventInfoPointGaugeControl_TypeInfo;
  static_fields = EventInfoPointGaugeControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_GAUGE_POSITION.fields.x = 0xC3B98000C1F80000LL;
  static_fields->EVENT_POINT_GAUGE_POSITION.fields.z = 0.0;
  v8 = StringLiteral_16459/*"_battle"*/;
  v9 = v6->static_fields;
  v9->BATTLE_MODE_SUFFIX = (struct System_String_o *)StringLiteral_16459/*"_battle"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->BATTLE_MODE_SUFFIX, v8, v10, v11);
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
  Il2CppObject *Object_object__48347676; // x22
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
  int32_t v29; // w3
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  struct UnityEngine_GameObject_o *EffectParent; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  v5 = *(_QWORD *)&pos.fields.value.fields.y;
  v6 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_49FDBCD & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, *(_QWORD *)&pos.fields.hasValue);
    sub_1B640C8(&EventInfoPointGaugeControl_TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___, v9);
    sub_1B640C8(&Method_System_Nullable_Vector3__GetValueOrDefault__, v10);
    sub_1B640C8(&Method_System_Nullable_Vector3__get_HasValue__, v11);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_6157/*"EventInfoPointGaugePrefab"*/, v14);
    byte_49FDBCD = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( !eventInfoAssetData )
    goto LABEL_20;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              eventInfoAssetData,
                              (System_String_o *)StringLiteral_6157/*"EventInfoPointGaugePrefab"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL);
  result = 0LL;
  if ( !v17 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__Instantiate_object_(
            Object_object__48347676,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v20 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0LL, 0LL);
    result = 0LL;
    if ( !v20 )
    {
      GameObjectExtensions__SafeSetParent_33381252((UnityEngine_GameObject_o *)v19, this->fields.eventRoot, 0LL);
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
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
        this->fields._EventPointGaugeComponent_k__BackingField = (struct EventInfoPointGaugeComponent_o *)Component_object;
        p_EventPointGaugeComponent_k__BackingField = &this->fields._EventPointGaugeComponent_k__BackingField;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
          (int32_t)Component_object,
          v28,
          v29);
        eventInfoAssetData = (AssetData_o *)this->fields._EventPointGaugeComponent_k__BackingField;
        if ( eventInfoAssetData )
        {
          EventInfoPointGaugeComponent__SetupSubMarginX(
            (EventInfoPointGaugeComponent_o *)eventInfoAssetData,
            subMarginX,
            v30);
          eventInfoAssetData = (AssetData_o *)*p_EventPointGaugeComponent_k__BackingField;
          if ( *p_EventPointGaugeComponent_k__BackingField )
          {
            EffectParent = EventInfoPointGaugeComponent__GetGenerateEffectParent(
                             (EventInfoPointGaugeComponent_o *)eventInfoAssetData,
                             v31);
            this->fields.eventPointGaugeEffectParent = EffectParent;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&this->fields.eventPointGaugeEffectParent,
              (int32_t)EffectParent,
              v33,
              v34);
            return (UnityEngine_GameObject_o *)v19;
          }
        }
      }
LABEL_20:
      sub_1B64324(eventInfoAssetData);
    }
  }
  return result;
}


void __fastcall EventInfoPointGaugeControl__DestroyEventInfo(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_eventPointGaugeObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FDBD5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FDBD5 = 1;
  }
  eventPointGaugeObj = this->fields.eventPointGaugeObj;
  p_eventPointGaugeObj = (ServantStatusBattleListViewItem_o *)&this->fields.eventPointGaugeObj;
  v4 = (UnityEngine_Object_o *)eventPointGaugeObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_eventPointGaugeObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(klass, 0LL);
    p_eventPointGaugeObj->klass = 0LL;
    sub_1B6406C(p_eventPointGaugeObj, 0, v7, v8);
  }
}


void __fastcall EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_eventPointGaugeChangeEffectPrefab; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeChangeEffectPrefab; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FDBD3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FDBD3 = 1;
  }
  eventPointGaugeChangeEffectPrefab = this->fields.eventPointGaugeChangeEffectPrefab;
  p_eventPointGaugeChangeEffectPrefab = (ServantStatusBattleListViewItem_o *)&this->fields.eventPointGaugeChangeEffectPrefab;
  v4 = (UnityEngine_Object_o *)eventPointGaugeChangeEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(v4, 0LL);
  p_eventPointGaugeChangeEffectPrefab->klass = 0LL;
  sub_1B6406C(p_eventPointGaugeChangeEffectPrefab, 0, v6, v7);
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
  int32_t v8; // w3
  struct UnityEngine_GameObject_array *v9; // x8
  Il2CppClass **v10; // x0

  v2 = this;
  if ( (byte_49FDBD4 & 1) == 0 )
  {
    this = (EventInfoPointGaugeControl_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FDBD4 = 1;
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
        sub_1B6432C(this, method);
      v6 = (UnityEngine_Object_o *)eventPointGaugeEffectPrefabList->m_Items[v4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v6, 0LL);
      v9 = v2->fields.eventPointGaugeEffectPrefabList;
      if ( !v9 )
LABEL_13:
        sub_1B64324(this);
      if ( v4 >= v9->max_length )
        goto LABEL_15;
      v10 = &v9->obj.klass + v4;
      v10[4] = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 4), 0, v7, v8);
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
  QuestGroupMaster_o *v11; // x20
  int32_t v12; // w19
  _BOOL8 v13; // x0
  Il2CppObject *current; // x22
  int32_t GroupId; // w21
  int32_t klass; // w22
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FDBCC & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FDBCC = 1;
  }
  memset(&v18, 0, sizeof(v18));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (v11 = (QuestGroupMaster_o *)Instance,
        (Instance = (DataManager_o *)QuestGroupMaster__GetEntityListByGroupId(
                                       (QuestGroupMaster_o *)Instance,
                                       eventId,
                                       1,
                                       0LL)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
  v12 = 0;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    if ( !v13 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1B64324(v13);
    GroupId = QuestGroupMaster__GetGroupId(v11, (int32_t)v18.fields._current[1].klass, 12, 0LL);
    klass = (int32_t)current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !((GroupId < 1) | !CondType__IsQuestClear_37285996(klass, -1, 0, 0LL)) )
      v12 = GroupId;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
  return v12;
}


bool __fastcall EventInfoPointGaugeControl__IsEventPointGaugeOpen(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FDBCB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FDBCB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, eventId, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  AssetData_o *eventInfoAssetData; // x0
  AssetLoader_LoadEndDataHandler_o *v21; // x19

  if ( (byte_49FDBC7 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, callBack);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B640C8(&Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__, v8);
    sub_1B640C8(&EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_6139/*"Event/Info"*/, v10);
    byte_49FDBC7 = 1;
  }
  v11 = sub_1B64314(EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo, callBack, *(_QWORD *)&eventId);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = callBack;
  v15 = v11 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)callBack, v16, v17);
  *(_DWORD *)(v11 + 32) = eventId;
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData && !AssetData__get_IsEmpty(eventInfoAssetData, 0LL) )
  {
    if ( *(_QWORD *)v15 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v15 + 64LL),
        *(unsigned int *)(v11 + 32),
        *(_QWORD *)(*(_QWORD *)v15 + 40LL));
  }
  else
  {
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19);
    AssetLoader_LoadEndDataHandler___ctor(
      v21,
      (Il2CppObject *)v11,
      Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6139/*"Event/Info"*/, v21, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  Il2CppObject *v19; // x0
  System_String_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  AssetLoader_LoadEndDataHandler_o *v23; // x21

  if ( (byte_49FDBCE & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, callbackEndFunc);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B640C8(&Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__, v8);
    sub_1B640C8(&EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_5814/*"Effect/Event/{0}"*/, v10);
    byte_49FDBCE = 1;
  }
  v11 = sub_1B64314(EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo, callbackEndFunc, *(_QWORD *)&eventId);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = callbackEndFunc;
  v15 = v11 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)callbackEndFunc, v16, v17);
  *(_DWORD *)(v11 + 32) = eventId;
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData && !AssetData__get_IsEmpty(eventPointGaugeEffectAssetData, 0LL) )
  {
    if ( *(_QWORD *)v15 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v15 + 64LL),
        *(unsigned int *)(v11 + 32),
        *(_QWORD *)(*(_QWORD *)v15 + 40LL));
  }
  else
  {
    v19 = (Il2CppObject *)System_Int32__ToString((int)v11 + 32, 0LL);
    v20 = System_String__Format((System_String_o *)StringLiteral_5814/*"Effect/Event/{0}"*/, v19, 0LL);
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v21, v22);
    AssetLoader_LoadEndDataHandler___ctor(
      v23,
      (Il2CppObject *)v11,
      Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v20, v23, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__LoadEventPointGaugeEffect_40785000(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callbackEndFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  EventInfoPointGaugeControl_assetLoadFinish_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3

  if ( (byte_49FDBCF & 1) == 0 )
  {
    sub_1B640C8(
      &Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
      *(_QWORD *)&eventId);
    sub_1B640C8(&EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo, v7);
    sub_1B640C8(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v8);
    byte_49FDBCF = 1;
  }
  v9 = sub_1B64314(EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo, *(_QWORD *)&eventId, callbackEndFunc);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 16) = callbackEndFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)callbackEndFunc, v11, v12);
  v15 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1B64314(
                                                          EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                          v13,
                                                          v14);
  EventInfoPointGaugeControl_assetLoadFinish___ctor(
    v15,
    (Il2CppObject *)v9,
    Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
    v16);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(this, v15, eventId, v17);
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
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x1
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8
  struct System_String_array **p_addEffectNameList; // x8
  struct EventInfoPointGaugeComponent_o *v35; // x8
  struct System_String_array *v36; // x28
  __int64 v37; // x1
  __int64 v38; // x2
  struct UnityEngine_GameObject_array **p_eventPointGaugeEffectPrefabList; // x24
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  unsigned __int64 v43; // x29
  System_String_o **m_Items; // x19
  __int64 v45; // x25
  System_Text_StringBuilder_o *v46; // x26
  __int64 v47; // x1
  System_String_o *BATTLE_MODE_SUFFIX; // x1
  EventInfoPointGaugeControl_c *v49; // x0
  AssetData_o *eventPointGaugeEffectAssetData; // x27
  Il2CppObject *Object_object__48347676; // x26
  Il2CppObject *v52; // x26
  int32_t v53; // w2
  int32_t v54; // w3
  struct UnityEngine_GameObject_array *v55; // x8
  int32_t v56; // w3
  __int64 v57; // x26
  System_Action_o *klass; // x27
  int32_t v59; // w2
  int32_t v60; // w3
  ServantStatusBattleListViewItem_o *v61; // x0
  int32_t v62; // w1
  ServantStatusBattleListViewItem_o *v63; // [xsp+0h] [xbp-80h]
  __int64 v66; // [xsp+10h] [xbp-70h]
  int32_t v67; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_49FDBD2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&gaugeState);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v13);
    sub_1B640C8(&EventInfoPointGaugeControl_TypeInfo, v14);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___, v15);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v16);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v19);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
    sub_1B640C8(&Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__, v21);
    sub_1B640C8(&EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo, v22);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v23);
    byte_49FDBD2 = 1;
  }
  v67 = 0;
  v24 = sub_1B64314(
          EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo,
          *(_QWORD *)&gaugeState,
          *(_QWORD *)&effectState);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
LABEL_61:
    sub_1B64324(Component_object);
  *(_QWORD *)(v24 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)this, v26, v27);
  *(_QWORD *)(v24 + 32) = callback;
  v28 = v24 + 32;
  *(_DWORD *)(v24 + 24) = basePoint;
  *(_DWORD *)(v24 + 28) = addPoint;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)callback, v29, v30);
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
    if ( !*(_QWORD *)v28 )
      goto LABEL_61;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v28 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v28 + 64LL),
      *(_QWORD *)(*(_QWORD *)v28 + 40LL));
    return;
  }
  v35 = this->fields._EventPointGaugeComponent_k__BackingField;
  if ( !v35 )
    goto LABEL_61;
  p_addEffectNameList = &v35->fields.subEffectNameList;
LABEL_15:
  v36 = *p_addEffectNameList;
  EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(this, v31);
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
    v40 = sub_1B64170(UnityEngine_GameObject___TypeInfo, v36->max_length);
    *p_eventPointGaugeEffectPrefabList = (struct UnityEngine_GameObject_array *)v40;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventPointGaugeEffectPrefabList, v40, v41, v42);
  }
  if ( (int)*(_QWORD *)&v36->max_length >= 1 )
  {
    v66 = (unsigned int)*(_QWORD *)&v36->max_length;
    v63 = (ServantStatusBattleListViewItem_o *)(v24 + 40);
    v43 = 0LL;
    m_Items = v36->m_Items;
    v45 = 32LL;
    do
    {
      v46 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v37, v38);
      System_Text_StringBuilder___ctor(v46, 0LL);
      if ( v43 >= v36->max_length )
LABEL_62:
        sub_1B6432C(Component_object, v47);
      if ( !v46 )
        goto LABEL_61;
      System_Text_StringBuilder__Append_60536548(v46, m_Items[v43], 0LL);
      if ( v43 )
      {
        if ( v43 != 1 )
          goto LABEL_32;
        System_Text_StringBuilder__Append_60536548(v46, (System_String_o *)StringLiteral_16054/*"_"*/, 0LL);
        v67 = gaugeState;
        BATTLE_MODE_SUFFIX = System_Int32__ToString((int32_t)&v67, 0LL);
      }
      else
      {
        if ( !isBattleMode )
          goto LABEL_32;
        v49 = EventInfoPointGaugeControl_TypeInfo;
        if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v49 = EventInfoPointGaugeControl_TypeInfo;
        }
        BATTLE_MODE_SUFFIX = v49->static_fields->BATTLE_MODE_SUFFIX;
      }
      System_Text_StringBuilder__Append_60536548(v46, BATTLE_MODE_SUFFIX, 0LL);
LABEL_32:
      eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
      Component_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v46->klass->vtable._3_ToString.method)(
                           v46,
                           v46->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !eventPointGaugeEffectAssetData )
        goto LABEL_61;
      Object_object__48347676 = AssetData__GetObject_object__48347676(
                                  eventPointGaugeEffectAssetData,
                                  (System_String_o *)Component_object,
                                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL);
      if ( (Component_object & 1) != 0 )
      {
        if ( v43 >= v36->max_length )
          goto LABEL_62;
        Component_object = (__int64)this->fields.eventPointGaugeEffectAssetData;
        if ( !Component_object )
          goto LABEL_61;
        Object_object__48347676 = AssetData__GetObject_object__48347676(
                                    (AssetData_o *)Component_object,
                                    m_Items[v43],
                                    (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL);
      if ( (Component_object & 1) != 0 )
        goto LABEL_58;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v52 = UnityEngine_Object__Instantiate_object_(
              Object_object__48347676,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v52, 0LL, 0LL);
      if ( (Component_object & 1) != 0 )
        goto LABEL_58;
      v55 = *p_eventPointGaugeEffectPrefabList;
      if ( !*p_eventPointGaugeEffectPrefabList )
        goto LABEL_61;
      if ( v43 >= v55->max_length )
        goto LABEL_62;
      v55->m_Items[v43] = (UnityEngine_GameObject_o *)v52;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v55 + v45), (int32_t)v52, v53, v54);
      GameObjectExtensions__SafeSetParent_33381252(
        (UnityEngine_GameObject_o *)v52,
        this->fields.eventPointGaugeEffectParent,
        0LL);
      Component_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                    (UnityEngine_GameObject_o *)v52,
                                    (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
      v57 = Component_object;
      if ( !v43 )
      {
        if ( !Component_object )
          goto LABEL_61;
        *(_QWORD *)(Component_object + 32) = 0LL;
        v61 = (ServantStatusBattleListViewItem_o *)(Component_object + 32);
        v62 = 0;
LABEL_55:
        sub_1B6406C(v61, v62, v38, v56);
        goto LABEL_56;
      }
      if ( v43 == 1 )
      {
        klass = (System_Action_o *)v63->klass;
        if ( !v63->klass )
        {
          klass = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
          System_Action___ctor(
            klass,
            (Il2CppObject *)v24,
            Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__,
            0LL);
          *(_QWORD *)(v24 + 40) = klass;
          sub_1B6406C(v63, (int32_t)klass, v59, v60);
        }
        if ( !v57 )
          goto LABEL_61;
        *(_QWORD *)(v57 + 32) = klass;
        v61 = (ServantStatusBattleListViewItem_o *)(v57 + 32);
        v62 = (int)klass;
        goto LABEL_55;
      }
LABEL_56:
      ++v43;
      v45 += 8LL;
    }
    while ( v66 != v43 );
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
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x1
  Il2CppObject *Object_object__48347676; // x22
  Il2CppObject *v29; // x0
  struct UnityEngine_GameObject_o **p_eventPointGaugeChangeEffectPrefab; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *Component_object; // x19
  __int64 v34; // x1
  __int64 v35; // x2
  System_Action_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x22

  if ( (byte_49FDBD1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, parent);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v13);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___, v14);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__, v17);
    sub_1B640C8(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__, v18);
    sub_1B640C8(&EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo, v19);
    byte_49FDBD1 = 1;
  }
  v20 = sub_1B64314(EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo, parent, name);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)this, v22, v23);
  *(_QWORD *)(v20 + 32) = callback;
  v24 = v20 + 32;
  *(_DWORD *)(v20 + 24) = afterGauge;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)callback, v25, v26);
  if ( !this->fields.eventPointGaugeEffectAssetData || !beforeGauge || *(_DWORD *)(v20 + 24) <= beforeGauge )
    goto LABEL_21;
  EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(this, v27);
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( !eventPointGaugeEffectAssetData )
    goto LABEL_18;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              eventPointGaugeEffectAssetData,
                              name,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  eventPointGaugeEffectAssetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Object_object__48347676,
                                                    0LL,
                                                    0LL);
  if ( ((unsigned __int8)eventPointGaugeEffectAssetData & 1) != 0 )
    goto LABEL_21;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = UnityEngine_Object__Instantiate_object_(
          Object_object__48347676,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.eventPointGaugeChangeEffectPrefab = (struct UnityEngine_GameObject_o *)v29;
  p_eventPointGaugeChangeEffectPrefab = &this->fields.eventPointGaugeChangeEffectPrefab;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_eventPointGaugeChangeEffectPrefab, (int32_t)v29, v31, v32);
  eventPointGaugeEffectAssetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)*p_eventPointGaugeChangeEffectPrefab,
                                                    0LL,
                                                    0LL);
  if ( ((unsigned __int8)eventPointGaugeEffectAssetData & 1) != 0 )
  {
LABEL_21:
    if ( *(_QWORD *)v24 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v24 + 64LL),
        *(_QWORD *)(*(_QWORD *)v24 + 40LL));
      return;
    }
LABEL_18:
    sub_1B64324(eventPointGaugeEffectAssetData);
  }
  GameObjectExtensions__SafeSetParent_33381252(*p_eventPointGaugeChangeEffectPrefab, parent, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *p_eventPointGaugeChangeEffectPrefab,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
  v36 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v34, v35);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v20,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
    0LL);
  v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v20,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
    0LL);
  if ( !Component_object )
    goto LABEL_18;
  EventPointGaugeChangeEffectAction__Setup((EventPointGaugeChangeEffectAction_o *)Component_object, v36, v39, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  TerminalPramsManager_c *v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  EventInfoPointGaugeControl_o *v21; // x0
  int32_t m_CachedPtr; // w26
  int32_t EventPointGaugeState; // w0
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t v26; // w23
  EventInfoPointGaugeControl_c *v27; // x0
  UnityEngine_GameObject_o *eventPointGaugeEffectParent; // x21
  int32_t v29; // w22
  bool v30; // zf
  System_String_o *EVENT_POINT_GAUGE_EFFECT_CHANGE; // x24
  int32_t v32; // w23
  System_Action_o *v33; // x25
  const MethodInfo *v34; // x6

  if ( (byte_49FDBD0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&EventInfoPointGaugeControl_TypeInfo, v7);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    sub_1B640C8(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__, v9);
    sub_1B640C8(&EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo, v10);
    byte_49FDBD0 = 1;
  }
  v11 = sub_1B64314(EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo, *(_QWORD *)&eventId, callback);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_QWORD *)(v11 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 40) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 40), (int32_t)callback, v15, v16);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9ACD )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v17);
    byte_49F9ACD = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v11 + 20) = v18->static_fields->_BeforeEventActivityPoint_k__BackingField;
  *(_DWORD *)(v11 + 16) = UserEventPointMaster__GetEventActivityPoint(eventId, 0LL);
  if ( !byte_49F9ACE )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
    byte_49F9ACE = 1;
  }
  v21 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr = v21[1].fields.eventRoot[17].fields.m_CachedPtr;
  EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v21, eventId, v20);
  *(_DWORD *)(v11 + 32) = EventPointGaugeState;
  v26 = EventPointGaugeState;
  v27 = EventInfoPointGaugeControl_TypeInfo;
  eventPointGaugeEffectParent = this->fields.eventPointGaugeEffectParent;
  if ( EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    v29 = v26;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
    v27 = EventInfoPointGaugeControl_TypeInfo;
    v29 = *(_DWORD *)(v11 + 32);
  }
  v30 = v26 == 1 && m_CachedPtr == 0;
  EVENT_POINT_GAUGE_EFFECT_CHANGE = v27->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE;
  if ( v30 )
    v32 = 1;
  else
    v32 = m_CachedPtr;
  v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v11,
    Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__,
    0LL);
  EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
    this,
    eventPointGaugeEffectParent,
    EVENT_POINT_GAUGE_EFFECT_CHANGE,
    v32,
    v29,
    v33,
    v34);
}


void __fastcall EventInfoPointGaugeControl__ReleaseAsset(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  AssetData_o *eventInfoAssetData; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  ServantStatusBattleListViewItem_o *p_eventPointGaugeEffectAssetData; // x19
  AssetData_o *v7; // x20
  struct AssetData_o *eventPointGaugeEffectAssetData; // t1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FDBD6 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49FDBD6 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37477464(eventInfoAssetData, 0LL);
    this->fields.eventInfoAssetData = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventInfoAssetData, 0, v4, v5);
  }
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  p_eventPointGaugeEffectAssetData = (ServantStatusBattleListViewItem_o *)&this->fields.eventPointGaugeEffectAssetData;
  v7 = eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37477464(v7, 0LL);
    p_eventPointGaugeEffectAssetData->klass = 0LL;
    sub_1B6406C(p_eventPointGaugeEffectAssetData, 0, v9, v10);
  }
}


void __fastcall EventInfoPointGaugeControl__SetRootObject(
        EventInfoPointGaugeControl_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.eventRoot = root;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventRoot, (int32_t)root, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  int32_t eventId; // w22
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x5
  const MethodInfo *v28; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v29; // x22
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3

  v8 = *(_QWORD *)&pos.fields.value.fields.y;
  v9 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_49FDBC9 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoPointGaugeControl_TypeInfo, eventDetailEntity);
    sub_1B640C8(&Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__, v14);
    sub_1B640C8(&EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo, v15);
    sub_1B640C8(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v16);
    byte_49FDBC9 = 1;
  }
  v17 = sub_1B64314(EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo, eventDetailEntity, isActive);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_13;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v19, v20);
  *(_QWORD *)(v17 + 48) = callback;
  *(_BYTE *)(v17 + 24) = isActive;
  *(_QWORD *)(v17 + 28) = v9;
  *(_QWORD *)(v17 + 36) = v8;
  *(float *)(v17 + 44) = subMarginX;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 48), (int32_t)callback, v21, v22);
  if ( !eventDetailEntity )
LABEL_13:
    sub_1B64324(v18);
  eventId = eventDetailEntity->fields.eventId;
  if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v23) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v17 + 24),
        *(System_Nullable_Vector3__o *)(v17 + 28),
        *(float *)(v17 + 44),
        v27);
      EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        this,
        eventDetailEntity->fields.eventId,
        *(System_Action_o **)(v17 + 48),
        v28);
    }
    else
    {
      v29 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1B64314(
                                                              EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                              v25,
                                                              v26);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v29,
        (Il2CppObject *)v17,
        Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__,
        v30);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v29, eventDetailEntity->fields.eventId, v31);
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
  int32_t v18; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int EventActivityPoint; // w22
  EventInfoPointGaugeControl_o *v25; // x0
  __int64 v26; // x1
  int32_t EventPointGaugeState; // w22
  TerminalPramsManager_c *v28; // x0
  TerminalPramsManager_c *v29; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w22
  int BeforeEventActivityPointGauge_k__BackingField; // w21
  const MethodInfo *v32; // x2
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x19
  bool v34; // zf
  int32_t v35; // w1
  const MethodInfo *v36; // x1
  System_Nullable_Vector3__o v37; // 0:x1.16

  v7 = *(_QWORD *)&pos.fields.value.fields.y;
  v8 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_49FDBCA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
    byte_49FDBCA = 1;
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
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventPointGaugeObj,
      (int32_t)EventPointGaugePrefab,
      v17,
      v18);
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
    if ( !byte_49F9ABD )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v22);
      byte_49F9ABD = 1;
    }
    v25 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(v25[1].fields.eventRoot[17].monitor) = EventActivityPoint;
    EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v25, eventId, v23);
    if ( !byte_49F9ABE )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v26);
      byte_49F9ABE = 1;
    }
    v28 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
    }
    v28->static_fields->_BeforeEventActivityPointGauge_k__BackingField = EventPointGaugeState;
    TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9ACD )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
    byte_49F9ACD = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPoint_k__BackingField = v29->static_fields->_BeforeEventActivityPoint_k__BackingField;
  if ( !byte_49F9ACE )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
    v29 = TerminalPramsManager_TypeInfo;
    byte_49F9ACE = 1;
  }
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPointGauge_k__BackingField = v29->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
  gameObject = (UnityEngine_GameObject_o *)EventInfoPointGaugeControl__GetEventPointGaugeState(
                                             (EventInfoPointGaugeControl_o *)v29,
                                             eventId,
                                             v21);
  EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
  v34 = (_DWORD)gameObject == 1 && BeforeEventActivityPointGauge_k__BackingField == 0;
  v35 = v34 ? 1 : BeforeEventActivityPointGauge_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
LABEL_41:
    sub_1B64324(gameObject);
  EventPointGaugeComponent_k__BackingField->fields._GaugeStateId_k__BackingField = v35;
  EventPointGaugeComponent_k__BackingField->fields._MainPoint_k__BackingField = BeforeEventActivityPoint_k__BackingField;
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, v35, v32);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(EventPointGaugeComponent_k__BackingField, v36);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  int32_t eventId; // w21
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x5
  __int64 v28; // x1
  TerminalPramsManager_c *v29; // x0
  TerminalPramsManager_c *v30; // x0
  Il2CppObject *MasterData_object; // x21
  __int64 v32; // x1
  EventInfoPointGaugeControl_assetLoadFinish_o *v33; // x21
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  TerminalPramsManager_c *v36; // x0

  v7 = *(_QWORD *)&pos.fields.value.fields.y;
  v8 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_49FDBC8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventPointMaster___, eventDetailEntity);
    sub_1B640C8(&EventInfoPointGaugeControl_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
    sub_1B640C8(&Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__, v16);
    sub_1B640C8(&EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo, v17);
    sub_1B640C8(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v18);
    byte_49FDBC8 = 1;
  }
  v19 = sub_1B64314(EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo, eventDetailEntity, isActive);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_47;
  *(_QWORD *)(v19 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)this, v21, v22);
  *(_BYTE *)(v19 + 24) = isActive;
  *(_QWORD *)(v19 + 28) = v8;
  *(_QWORD *)(v19 + 36) = v7;
  *(float *)(v19 + 44) = subMarginX;
  if ( !eventDetailEntity )
    goto LABEL_47;
  eventId = eventDetailEntity->fields.eventId;
  if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v23) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v19 + 24),
        *(System_Nullable_Vector3__o *)(v19 + 28),
        *(float *)(v19 + 44),
        v27);
    }
    else
    {
      v33 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1B64314(
                                                              EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                              v25,
                                                              v26);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v33,
        (Il2CppObject *)v19,
        Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__,
        v34);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v33, eventDetailEntity->fields.eventId, v35);
    }
    return;
  }
  if ( EventDetailEntity__IsEventActivityPoint(eventDetailEntity, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9ACD )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v28);
      byte_49F9ACD = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    if ( v29->static_fields->_BeforeEventActivityPoint_k__BackingField >= 1 )
    {
      if ( !v29->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v29);
      if ( !byte_49F9ACE )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v28);
        byte_49F9ACE = 1;
      }
      v30 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v30 = TerminalPramsManager_TypeInfo;
      }
      if ( v30->static_fields->_BeforeEventActivityPointGauge_k__BackingField >= 1 )
      {
        if ( !v30->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v30);
        if ( TerminalPramsManager__CheckEventActivityPointSaveData(0LL) )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
            if ( MasterData_object )
            {
              if ( !UserEventPointMaster__GetEntity(
                      (UserEventPointMaster_o *)MasterData_object,
                      (int64_t)Instance,
                      eventDetailEntity->fields.eventId,
                      0,
                      0LL) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_49F9ABD )
                {
                  sub_1B640C8(&TerminalPramsManager_TypeInfo, v32);
                  byte_49F9ABD = 1;
                }
                v36 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v36 = TerminalPramsManager_TypeInfo;
                }
                v36->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
                if ( !byte_49F9ABE )
                {
                  sub_1B640C8(&TerminalPramsManager_TypeInfo, v32);
                  v36 = TerminalPramsManager_TypeInfo;
                  byte_49F9ABE = 1;
                }
                if ( !v36->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v36);
                  v36 = TerminalPramsManager_TypeInfo;
                }
                v36->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
                TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
              }
              return;
            }
          }
LABEL_47:
          sub_1B64324(Instance);
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
  int32_t v3; // w3

  this->fields._EventPointGaugeComponent_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
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
  int32_t v3; // w3
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callBack; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  _4__this->fields.eventInfoAssetData = prefabData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&_4__this->fields.eventInfoAssetData,
    (int32_t)prefabData,
    (int32_t)method,
    v3);
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
    sub_1B64324(_4__this);
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
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *_9__1; // x23
  EventInfoPointGaugeControl_o *v12; // x21
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FDBD9 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      *(_QWORD *)&eventId);
    sub_1B640C8(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v6);
    byte_49FDBD9 = 1;
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
  v12 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1B64314(
                                                              EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                              v8,
                                                              v9);
    EventInfoPointGaugeControl_assetLoadFinish___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      v13);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v14, v15);
  }
  if ( !v12 )
LABEL_8:
    sub_1B64324(_4__this);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(v12, _9__1, eventId, v10);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1B64324(this);
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
  int32_t v3; // w3
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  _4__this->fields.eventPointGaugeEffectAssetData = prefabData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&_4__this->fields.eventPointGaugeEffectAssetData,
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
  __int64 v2; // x2
  const MethodInfo *v3; // x7
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalPramsManager_c *EventPointGaugeComponent_k__BackingField; // x0
  struct EventInfoPointGaugeControl_o *v8; // x8
  __int64 v9; // x1
  int32_t v10; // w21
  TerminalPramsManager_c *v11; // x0
  int32_t v12; // w21
  int32_t afterPoint; // w26
  int32_t beforePoint; // w27
  EventInfoPointGaugeControl_o *_4__this; // x21
  int32_t afterGauge; // w22
  int32_t EventActivityPointEffectState_k__BackingField; // w20
  System_Action_o *_9__1; // x24
  int32_t v19; // w23
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FDBDA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    sub_1B640C8(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__, v6);
    byte_49FDBDA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AE4 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9AE4 = 1;
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
    if ( !byte_49F9AE4 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
      byte_49F9AE4 = 1;
    }
    EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    }
    EventActivityPointEffectState_k__BackingField = EventPointGaugeComponent_k__BackingField->static_fields->_EventActivityPointEffectState_k__BackingField;
    _9__1 = this->fields.__9__1;
    v19 = this->fields.beforePoint;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v20, v21);
    }
    if ( _4__this )
    {
      EventInfoPointGaugeControl__PlayEventPointGaugeAddEffect(
        _4__this,
        afterGauge,
        EventActivityPointEffectState_k__BackingField,
        v19,
        afterPoint - beforePoint,
        _9__1,
        0,
        v3);
      return;
    }
LABEL_33:
    sub_1B64324(EventPointGaugeComponent_k__BackingField);
  }
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_33;
  EventPointGaugeComponent_k__BackingField = (TerminalPramsManager_c *)v8->fields._EventPointGaugeComponent_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
    goto LABEL_33;
  LODWORD(EventPointGaugeComponent_k__BackingField->_1.interopData) = this->fields.afterPoint;
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(
    (EventInfoPointGaugeComponent_o *)EventPointGaugeComponent_k__BackingField,
    method);
  v10 = this->fields.afterPoint;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9ABD )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    byte_49F9ABD = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_BeforeEventActivityPoint_k__BackingField = v10;
  v12 = this->fields.afterGauge;
  if ( !byte_49F9ABE )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9ABE = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v12;
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

  if ( (byte_49FDBDB & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49FDBDB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v3->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  if ( !byte_49F9AD5 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_49F9AD5 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = EVENT_POINT_EFFECT_STATE_NONE;
  afterPoint = this->fields.afterPoint;
  if ( !byte_49F9ABD )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_49F9ABD = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = afterPoint;
  afterGauge = this->fields.afterGauge;
  if ( !byte_49F9ABE )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_49F9ABE = 1;
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AD1EC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AD1A4;
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
  if ( (byte_49FDBD8 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&eventId);
    byte_49FDBD8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall EventInfoPointGaugeControl_assetLoadFinish__EndInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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