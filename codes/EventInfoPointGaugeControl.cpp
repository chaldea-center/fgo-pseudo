void __fastcall EventInfoPointGaugeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  EventInfoPointGaugeControl_c *v12; // x8
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x9
  int64_t v14; // x1
  struct EventInfoPointGaugeControl_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B177AB & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoPointGaugeControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_16697/*"_battle"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17411/*"bit_gauge_change"*/, v10, v11);
    byte_4B177AB = 1;
  }
  EventInfoPointGaugeControl_TypeInfo->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE = (struct System_String_o *)StringLiteral_17411/*"bit_gauge_change"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoPointGaugeControl_TypeInfo->static_fields,
    StringLiteral_17411/*"bit_gauge_change"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = EventInfoPointGaugeControl_TypeInfo;
  static_fields = EventInfoPointGaugeControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_GAUGE_POSITION.fields.x = 0xC3B98000C1F80000LL;
  static_fields->EVENT_POINT_GAUGE_POSITION.fields.z = 0.0;
  v14 = StringLiteral_16697/*"_battle"*/;
  v15 = v12->static_fields;
  v15->BATTLE_MODE_SUFFIX = (struct System_String_o *)StringLiteral_16697/*"_battle"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15->BATTLE_MODE_SUFFIX, v14, v16, v17, v18, v19, v20, v21);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  AssetData_o *eventInfoAssetData; // x0
  __int64 v23; // x1
  Il2CppObject *Object_object__49237568; // x22
  __int64 v25; // x1
  bool v26; // w8
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *v28; // x22
  bool v29; // w8
  __int64 v30; // x1
  float z; // s2
  float y; // s1
  float x; // s0
  EventInfoPointGaugeControl_c *v34; // x0
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x8
  Il2CppObject *Component_object; // x0
  struct EventInfoPointGaugeComponent_o **p_EventPointGaugeComponent_k__BackingField; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct UnityEngine_GameObject_o *EffectParent; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  v5 = *(_QWORD *)&pos.fields.value.fields.y;
  v6 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4B177A1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_AssetData_GetObject_GameObject____76836696,
      *(_QWORD *)&pos.fields.hasValue,
      *(_QWORD *)&pos.fields.value.fields.y);
    sub_1BCA7E0(&EventInfoPointGaugeControl_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___, v10, v11);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__GetValueOrDefault__, v12, v13);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_HasValue__, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_6303/*"EventInfoPointGaugePrefab"*/, v20, v21);
    byte_4B177A1 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( !eventInfoAssetData )
    goto LABEL_20;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              eventInfoAssetData,
                              (System_String_o *)StringLiteral_6303/*"EventInfoPointGaugePrefab"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  v26 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL);
  result = 0LL;
  if ( !v26 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    v28 = UnityEngine_Object__Instantiate_object_(
            Object_object__49237568,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v29 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v28, 0LL, 0LL);
    result = 0LL;
    if ( !v29 )
    {
      GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v28, this->fields.eventRoot, 0LL);
      if ( (_BYTE)v6 )
      {
        z = *((float *)&v5 + 1);
        y = *(float *)&v5;
        x = *((float *)&v6 + 1);
      }
      else
      {
        v34 = EventInfoPointGaugeControl_TypeInfo;
        if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo, v30);
          v34 = EventInfoPointGaugeControl_TypeInfo;
        }
        static_fields = v34->static_fields;
        x = static_fields->EVENT_POINT_GAUGE_POSITION.fields.x;
        y = static_fields->EVENT_POINT_GAUGE_POSITION.fields.y;
        z = static_fields->EVENT_POINT_GAUGE_POSITION.fields.z;
      }
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v28, *(UnityEngine_Vector3_o *)&x, 0LL);
      if ( v28 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v28,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
        this->fields._EventPointGaugeComponent_k__BackingField = (struct EventInfoPointGaugeComponent_o *)Component_object;
        p_EventPointGaugeComponent_k__BackingField = &this->fields._EventPointGaugeComponent_k__BackingField;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
          (int64_t)Component_object,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
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
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.eventPointGaugeEffectParent,
              (int64_t)EffectParent,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50);
            return (UnityEngine_GameObject_o *)v28;
          }
        }
      }
LABEL_20:
      sub_1BCAA3C(eventInfoAssetData, *(_QWORD *)&pos.fields.hasValue);
    }
  }
  return result;
}


void __fastcall EventInfoPointGaugeControl__DestroyEventInfo(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_eventPointGaugeObj; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeObj; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B177A9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B177A9 = 1;
  }
  eventPointGaugeObj = this->fields.eventPointGaugeObj;
  p_eventPointGaugeObj = (PartyOrganizationUtility_o *)&this->fields.eventPointGaugeObj;
  v5 = (UnityEngine_Object_o *)eventPointGaugeObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_eventPointGaugeObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_eventPointGaugeObj->klass = 0LL;
    sub_1BCA784(p_eventPointGaugeObj, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_eventPointGaugeChangeEffectPrefab; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeChangeEffectPrefab; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B177A7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B177A7 = 1;
  }
  eventPointGaugeChangeEffectPrefab = this->fields.eventPointGaugeChangeEffectPrefab;
  p_eventPointGaugeChangeEffectPrefab = (PartyOrganizationUtility_o *)&this->fields.eventPointGaugeChangeEffectPrefab;
  v5 = (UnityEngine_Object_o *)eventPointGaugeChangeEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(v5, 0LL);
  p_eventPointGaugeChangeEffectPrefab->klass = 0LL;
  sub_1BCA784(p_eventPointGaugeChangeEffectPrefab, 0LL, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoPointGaugeControl_o *v3; // x19
  struct UnityEngine_GameObject_array *eventPointGaugeEffectPrefabList; // x8
  unsigned __int64 v5; // x21
  __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UnityEngine_GameObject_array *v14; // x8
  Il2CppClass **v15; // x0

  v3 = this;
  if ( (byte_4B177A8 & 1) == 0 )
  {
    this = (EventInfoPointGaugeControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B177A8 = 1;
  }
  eventPointGaugeEffectPrefabList = v3->fields.eventPointGaugeEffectPrefabList;
  if ( eventPointGaugeEffectPrefabList && (int)*(_QWORD *)&eventPointGaugeEffectPrefabList->max_length >= 1 )
  {
    v5 = 0LL;
    v6 = (unsigned int)*(_QWORD *)&eventPointGaugeEffectPrefabList->max_length;
    while ( 1 )
    {
      if ( v5 >= eventPointGaugeEffectPrefabList->max_length )
LABEL_15:
        sub_1BCAA44(this, method);
      v7 = (UnityEngine_Object_o *)eventPointGaugeEffectPrefabList->m_Items[v5];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__Destroy_70154244(v7, 0LL);
      v14 = v3->fields.eventPointGaugeEffectPrefabList;
      if ( !v14 )
LABEL_13:
        sub_1BCAA3C(this, method);
      if ( v5 >= v14->max_length )
        goto LABEL_15;
      v15 = &v14->obj.klass + v5;
      v15[4] = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 4), 0LL, v8, v9, v10, v11, v12, v13);
      if ( ++v5 == v6 )
        break;
      eventPointGaugeEffectPrefabList = v3->fields.eventPointGaugeEffectPrefabList;
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  QuestGroupMaster_o *v18; // x20
  int32_t v19; // w19
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x22
  __int64 v23; // x1
  int32_t GroupId; // w21
  int32_t klass; // w22
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B177A0 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B177A0 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (v18 = (QuestGroupMaster_o *)Instance,
        (Instance = (DataManager_o *)QuestGroupMaster__GetEntityListByGroupId(
                                       (QuestGroupMaster_o *)Instance,
                                       eventId,
                                       1,
                                       0LL)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v17);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
  v19 = 0;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    if ( !v20 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1BCAA3C(v20, v21);
    GroupId = QuestGroupMaster__GetGroupId(v18, (int32_t)v27.fields._current[1].klass, 12, 0LL);
    klass = (int32_t)current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v23);
    if ( !((GroupId < 1) | !CondType__IsQuestClear_38310172(klass, -1, 0, 0LL)) )
      v19 = GroupId;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
  return v19;
}


bool __fastcall EventInfoPointGaugeControl__IsEventPointGaugeOpen(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1779F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1779F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  AssetData_o *eventInfoAssetData; // x0
  AssetLoader_LoadEndDataHandler_o *v35; // x19
  __int64 v36; // x1

  if ( (byte_4B1779B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callBack, *(_QWORD *)&eventId);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__, v9, v10);
    sub_1BCA7E0(&EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_6280/*"Event/Info"*/, v13, v14);
    byte_4B1779B = 1;
  }
  v15 = sub_1BCAA2C(EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo, callBack, *(_QWORD *)&eventId, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = callBack;
  v24 = v15 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)callBack, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v15 + 32) = eventId;
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData && !AssetData__get_IsEmpty(eventInfoAssetData, 0LL) )
  {
    if ( *(_QWORD *)v24 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v24 + 64LL),
        *(unsigned int *)(v15 + 32),
        *(_QWORD *)(*(_QWORD *)v24 + 40LL));
  }
  else
  {
    v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v31, v32, v33);
    AssetLoader_LoadEndDataHandler___ctor(
      v35,
      (Il2CppObject *)v15,
      Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6280/*"Event/Info"*/, v35, 1, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  Il2CppObject *v32; // x0
  System_String_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  AssetLoader_LoadEndDataHandler_o *v37; // x21
  __int64 v38; // x1

  if ( (byte_4B177A2 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callbackEndFunc, *(_QWORD *)&eventId);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__, v9, v10);
    sub_1BCA7E0(&EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_5953/*"Effect/Event/{0}"*/, v13, v14);
    byte_4B177A2 = 1;
  }
  v15 = sub_1BCAA2C(
          EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo,
          callbackEndFunc,
          *(_QWORD *)&eventId,
          method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = callbackEndFunc;
  v24 = v15 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)callbackEndFunc, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v15 + 32) = eventId;
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData && !AssetData__get_IsEmpty(eventPointGaugeEffectAssetData, 0LL) )
  {
    if ( *(_QWORD *)v24 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v24 + 64LL),
        *(unsigned int *)(v15 + 32),
        *(_QWORD *)(*(_QWORD *)v24 + 40LL));
  }
  else
  {
    v32 = (Il2CppObject *)System_Int32__ToString((int)v15 + 32, 0LL);
    v33 = System_String__Format((System_String_o *)StringLiteral_5953/*"Effect/Event/{0}"*/, v32, 0LL);
    v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v34, v35, v36);
    AssetLoader_LoadEndDataHandler___ctor(
      v37,
      (Il2CppObject *)v15,
      Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v38);
    AssetManager__loadAssetStorage(v33, v37, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__LoadEventPointGaugeEffect_41629564(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callbackEndFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v23; // x21
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3

  if ( (byte_4B177A3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
      *(_QWORD *)&eventId,
      callbackEndFunc);
    sub_1BCA7E0(&EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo, v7, v8);
    sub_1BCA7E0(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v9, v10);
    byte_4B177A3 = 1;
  }
  v11 = sub_1BCAA2C(
          EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo,
          *(_QWORD *)&eventId,
          callbackEndFunc,
          method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  *(_QWORD *)(v11 + 16) = callbackEndFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)callbackEndFunc, v14, v15, v16, v17, v18, v19);
  v23 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1BCAA2C(
                                                          EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                          v20,
                                                          v21,
                                                          v22);
  EventInfoPointGaugeControl_assetLoadFinish___ctor(
    v23,
    (Il2CppObject *)v11,
    Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
    v24);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(this, v23, eventId, v25);
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x22
  __int64 Component_object; // x0
  const MethodInfo *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x23
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8
  struct System_String_array **p_addEffectNameList; // x8
  struct EventInfoPointGaugeComponent_o *v54; // x8
  struct System_String_array *v55; // x28
  int64_t v56; // x2
  __int64 v57; // x3
  struct UnityEngine_GameObject_array **p_eventPointGaugeEffectPrefabList; // x24
  int64_t v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  unsigned __int64 v66; // x29
  System_String_o **m_Items; // x19
  __int64 v68; // x25
  System_Text_StringBuilder_o *v69; // x26
  __int64 v70; // x1
  System_String_o *BATTLE_MODE_SUFFIX; // x1
  EventInfoPointGaugeControl_c *v72; // x0
  AssetData_o *eventPointGaugeEffectAssetData; // x27
  __int64 v74; // x1
  Il2CppObject *Object_object__49237568; // x26
  Il2CppObject *v76; // x26
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct UnityEngine_GameObject_array *v83; // x8
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x26
  System_Action_o *klass; // x27
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  PartyOrganizationUtility_o *v96; // x0
  int64_t v97; // x1
  PartyOrganizationUtility_o *v98; // [xsp+0h] [xbp-80h]
  __int64 v101; // [xsp+10h] [xbp-70h]
  int32_t v102; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B177A6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&gaugeState, *(_QWORD *)&effectState);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v13, v14);
    sub_1BCA7E0(&EventInfoPointGaugeControl_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___, v17, v18);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v25, v26);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__, v29, v30);
    sub_1BCA7E0(&EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v33, v34);
    byte_4B177A6 = 1;
  }
  v102 = 0;
  v35 = sub_1BCAA2C(
          EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo,
          *(_QWORD *)&gaugeState,
          *(_QWORD *)&effectState,
          *(_QWORD *)&basePoint);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
LABEL_61:
    sub_1BCAA3C(Component_object, v37);
  *(_QWORD *)(v35 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)this, v38, v39, v40, v41, v42, v43);
  *(_QWORD *)(v35 + 32) = callback;
  v44 = v35 + 32;
  *(_DWORD *)(v35 + 24) = basePoint;
  *(_DWORD *)(v35 + 28) = addPoint;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)callback, v45, v46, v47, v48, v49, v50);
  if ( !this->fields.eventPointGaugeEffectAssetData )
    goto LABEL_58;
  Component_object = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v37);
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
    j_il2cpp_runtime_class_init_0(Component_object, v37);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
  }
  if ( static_fields->EVENT_POINT_EFFECT_STATE_SUB != effectState )
  {
LABEL_58:
    if ( !*(_QWORD *)v44 )
      goto LABEL_61;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v44 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v44 + 64LL),
      *(_QWORD *)(*(_QWORD *)v44 + 40LL));
    return;
  }
  v54 = this->fields._EventPointGaugeComponent_k__BackingField;
  if ( !v54 )
    goto LABEL_61;
  p_addEffectNameList = &v54->fields.subEffectNameList;
LABEL_15:
  v55 = *p_addEffectNameList;
  EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(this, v37);
  p_eventPointGaugeEffectPrefabList = &this->fields.eventPointGaugeEffectPrefabList;
  if ( this->fields.eventPointGaugeEffectPrefabList )
  {
    if ( !v55 )
      goto LABEL_61;
  }
  else
  {
    if ( !v55 )
      goto LABEL_61;
    v59 = sub_1BCA888(UnityEngine_GameObject___TypeInfo, v55->max_length);
    *p_eventPointGaugeEffectPrefabList = (struct UnityEngine_GameObject_array *)v59;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventPointGaugeEffectPrefabList,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  if ( (int)*(_QWORD *)&v55->max_length >= 1 )
  {
    v101 = (unsigned int)*(_QWORD *)&v55->max_length;
    v98 = (PartyOrganizationUtility_o *)(v35 + 40);
    v66 = 0LL;
    m_Items = v55->m_Items;
    v68 = 32LL;
    do
    {
      v69 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v37, v56, v57);
      System_Text_StringBuilder___ctor(v69, 0LL);
      if ( v66 >= v55->max_length )
LABEL_62:
        sub_1BCAA44(Component_object, v37);
      if ( !v69 )
        goto LABEL_61;
      System_Text_StringBuilder__Append_61563116(v69, m_Items[v66], 0LL);
      if ( v66 )
      {
        if ( v66 != 1 )
          goto LABEL_32;
        System_Text_StringBuilder__Append_61563116(v69, (System_String_o *)StringLiteral_16290/*"_"*/, 0LL);
        v102 = gaugeState;
        BATTLE_MODE_SUFFIX = System_Int32__ToString((int32_t)&v102, 0LL);
      }
      else
      {
        if ( !isBattleMode )
          goto LABEL_32;
        v72 = EventInfoPointGaugeControl_TypeInfo;
        if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo, v70);
          v72 = EventInfoPointGaugeControl_TypeInfo;
        }
        BATTLE_MODE_SUFFIX = v72->static_fields->BATTLE_MODE_SUFFIX;
      }
      System_Text_StringBuilder__Append_61563116(v69, BATTLE_MODE_SUFFIX, 0LL);
LABEL_32:
      eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
      Component_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v69->klass->vtable._3_ToString.method)(
                           v69,
                           v69->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !eventPointGaugeEffectAssetData )
        goto LABEL_61;
      Object_object__49237568 = AssetData__GetObject_object__49237568(
                                  eventPointGaugeEffectAssetData,
                                  (System_String_o *)Component_object,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v74);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL);
      if ( (Component_object & 1) != 0 )
      {
        if ( v66 >= v55->max_length )
          goto LABEL_62;
        Component_object = (__int64)this->fields.eventPointGaugeEffectAssetData;
        if ( !Component_object )
          goto LABEL_61;
        Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    (AssetData_o *)Component_object,
                                    m_Items[v66],
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL);
      if ( (Component_object & 1) != 0 )
        goto LABEL_58;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
      v76 = UnityEngine_Object__Instantiate_object_(
              Object_object__49237568,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      Component_object = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v76, 0LL, 0LL);
      if ( (Component_object & 1) != 0 )
        goto LABEL_58;
      v83 = *p_eventPointGaugeEffectPrefabList;
      if ( !*p_eventPointGaugeEffectPrefabList )
        goto LABEL_61;
      if ( v66 >= v83->max_length )
        goto LABEL_62;
      v83->m_Items[v66] = (UnityEngine_GameObject_o *)v76;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)v83 + v68), (int64_t)v76, v77, v78, v79, v80, v81, v82);
      GameObjectExtensions__SafeSetParent_34336992(
        (UnityEngine_GameObject_o *)v76,
        this->fields.eventPointGaugeEffectParent,
        0LL);
      Component_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                    (UnityEngine_GameObject_o *)v76,
                                    (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
      v88 = Component_object;
      if ( !v66 )
      {
        if ( !Component_object )
          goto LABEL_61;
        *(_QWORD *)(Component_object + 32) = 0LL;
        v96 = (PartyOrganizationUtility_o *)(Component_object + 32);
        v97 = 0LL;
LABEL_55:
        sub_1BCA784(v96, v97, v56, v57, v84, v85, v86, v87);
        goto LABEL_56;
      }
      if ( v66 == 1 )
      {
        klass = (System_Action_o *)v98->klass;
        if ( !v98->klass )
        {
          klass = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v56, v57);
          System_Action___ctor(
            klass,
            (Il2CppObject *)v35,
            Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__,
            0LL);
          *(_QWORD *)(v35 + 40) = klass;
          sub_1BCA784(v98, (int64_t)klass, v90, v91, v92, v93, v94, v95);
        }
        if ( !v88 )
          goto LABEL_61;
        *(_QWORD *)(v88 + 32) = klass;
        v96 = (PartyOrganizationUtility_o *)(v88 + 32);
        v97 = (int64_t)klass;
        goto LABEL_55;
      }
LABEL_56:
      ++v66;
      v68 += 8LL;
    }
    while ( v101 != v66 );
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v27; // x21
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  const MethodInfo *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x23
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  Il2CppObject *Object_object__49237568; // x22
  Il2CppObject *v45; // x0
  struct UnityEngine_GameObject_o **p_eventPointGaugeChangeEffectPrefab; // x19
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  Il2CppObject *Component_object; // x19
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_o *v57; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x22

  if ( (byte_4B177A5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, parent, name);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v13, v14);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(
      &Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
      v21,
      v22);
    sub_1BCA7E0(
      &Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
      v23,
      v24);
    sub_1BCA7E0(&EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo, v25, v26);
    byte_4B177A5 = 1;
  }
  v27 = sub_1BCAA2C(EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo, parent, name, *(_QWORD *)&beforeGauge);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_18;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 32) = callback;
  v36 = v27 + 32;
  *(_DWORD *)(v27 + 24) = afterGauge;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)callback, v37, v38, v39, v40, v41, v42);
  if ( !this->fields.eventPointGaugeEffectAssetData || !beforeGauge || *(_DWORD *)(v27 + 24) <= beforeGauge )
    goto LABEL_21;
  EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(this, v29);
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( !eventPointGaugeEffectAssetData )
    goto LABEL_18;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              eventPointGaugeEffectAssetData,
                              name,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  eventPointGaugeEffectAssetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Object_object__49237568,
                                                    0LL,
                                                    0LL);
  if ( ((unsigned __int8)eventPointGaugeEffectAssetData & 1) != 0 )
    goto LABEL_21;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  v45 = UnityEngine_Object__Instantiate_object_(
          Object_object__49237568,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.eventPointGaugeChangeEffectPrefab = (struct UnityEngine_GameObject_o *)v45;
  p_eventPointGaugeChangeEffectPrefab = &this->fields.eventPointGaugeChangeEffectPrefab;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_eventPointGaugeChangeEffectPrefab,
    (int64_t)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  eventPointGaugeEffectAssetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)*p_eventPointGaugeChangeEffectPrefab,
                                                    0LL,
                                                    0LL);
  if ( ((unsigned __int8)eventPointGaugeEffectAssetData & 1) != 0 )
  {
LABEL_21:
    if ( *(_QWORD *)v36 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v36 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v36 + 64LL),
        *(_QWORD *)(*(_QWORD *)v36 + 40LL));
      return;
    }
LABEL_18:
    sub_1BCAA3C(eventPointGaugeEffectAssetData, v29);
  }
  GameObjectExtensions__SafeSetParent_34336992(*p_eventPointGaugeChangeEffectPrefab, parent, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *p_eventPointGaugeChangeEffectPrefab,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
  v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v54, v55, v56);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v27,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
    0LL);
  v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v27,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
    0LL);
  if ( !Component_object )
    goto LABEL_18;
  EventPointGaugeChangeEffectAction__Setup((EventPointGaugeChangeEffectAction_o *)Component_object, v57, v61, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  TerminalPramsManager_c *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  EventInfoPointGaugeControl_o *v35; // x0
  int32_t m_CachedPtr; // w26
  int32_t EventPointGaugeState; // w0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  int32_t v41; // w23
  EventInfoPointGaugeControl_c *v42; // x0
  UnityEngine_GameObject_o *eventPointGaugeEffectParent; // x21
  int32_t v44; // w22
  bool v45; // zf
  System_String_o *EVENT_POINT_GAUGE_EFFECT_CHANGE; // x24
  int32_t v47; // w23
  System_Action_o *v48; // x25
  const MethodInfo *v49; // x6

  if ( (byte_4B177A4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, callback);
    sub_1BCA7E0(&EventInfoPointGaugeControl_TypeInfo, v7, v8);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__, v11, v12);
    sub_1BCA7E0(&EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo, v13, v14);
    byte_4B177A4 = 1;
  }
  v15 = sub_1BCAA2C(EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo, *(_QWORD *)&eventId, callback, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 40), (int64_t)callback, v24, v25, v26, v27, v28, v29);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v30);
  if ( !byte_4B1380F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v30, v31);
    byte_4B1380F = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v30);
    v32 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v15 + 20) = v32->static_fields->_BeforeEventActivityPoint_k__BackingField;
  *(_DWORD *)(v15 + 16) = UserEventPointMaster__GetEventActivityPoint(eventId, 0LL);
  if ( !byte_4B13810 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v34);
    byte_4B13810 = 1;
  }
  v35 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
    v35 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr = v35[1].fields.eventRoot[17].fields.m_CachedPtr;
  EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v35, eventId, v34);
  *(_DWORD *)(v15 + 32) = EventPointGaugeState;
  v41 = EventPointGaugeState;
  v42 = EventInfoPointGaugeControl_TypeInfo;
  eventPointGaugeEffectParent = this->fields.eventPointGaugeEffectParent;
  if ( EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    v44 = v41;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo, v38);
    v42 = EventInfoPointGaugeControl_TypeInfo;
    v44 = *(_DWORD *)(v15 + 32);
  }
  v45 = v41 == 1 && m_CachedPtr == 0;
  EVENT_POINT_GAUGE_EFFECT_CHANGE = v42->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE;
  if ( v45 )
    v47 = 1;
  else
    v47 = m_CachedPtr;
  v48 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v15,
    Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__,
    0LL);
  EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
    this,
    eventPointGaugeEffectParent,
    EVENT_POINT_GAUGE_EFFECT_CHANGE,
    v47,
    v44,
    v48,
    v49);
}


void __fastcall EventInfoPointGaugeControl__ReleaseAsset(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_o *eventInfoAssetData; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_eventPointGaugeEffectAssetData; // x19
  AssetData_o *v12; // x20
  struct AssetData_o *eventPointGaugeEffectAssetData; // t1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B177AA & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B177AA = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_38505704(eventInfoAssetData, 0LL);
    this->fields.eventInfoAssetData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventInfoAssetData, 0LL, v5, v6, v7, v8, v9, v10);
  }
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  p_eventPointGaugeEffectAssetData = (PartyOrganizationUtility_o *)&this->fields.eventPointGaugeEffectAssetData;
  v12 = eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_38505704(v12, 0LL);
    p_eventPointGaugeEffectAssetData->klass = 0LL;
    sub_1BCA784(p_eventPointGaugeEffectAssetData, 0LL, v14, v15, v16, v17, v18, v19);
  }
}


void __fastcall EventInfoPointGaugeControl__SetRootObject(
        EventInfoPointGaugeControl_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.eventRoot = root;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventRoot, (int64_t)root, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x21
  __int64 v21; // x0
  const MethodInfo *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t eventId; // w22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  const MethodInfo *v39; // x5
  const MethodInfo *v40; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v41; // x22
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3

  v8 = *(_QWORD *)&pos.fields.value.fields.y;
  v9 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4B1779D & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoPointGaugeControl_TypeInfo, eventDetailEntity, isActive);
    sub_1BCA7E0(
      &Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__,
      v14,
      v15);
    sub_1BCA7E0(&EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v18, v19);
    byte_4B1779D = 1;
  }
  v20 = sub_1BCAA2C(EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo, eventDetailEntity, isActive, callback);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_13;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 48) = callback;
  *(_BYTE *)(v20 + 24) = isActive;
  *(_QWORD *)(v20 + 28) = v9;
  *(_QWORD *)(v20 + 36) = v8;
  *(float *)(v20 + 44) = subMarginX;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 48), (int64_t)callback, v29, v30, v31, v32, v33, v34);
  if ( !eventDetailEntity )
LABEL_13:
    sub_1BCAA3C(v21, v22);
  eventId = eventDetailEntity->fields.eventId;
  if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo, v22);
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v22) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v20 + 24),
        *(System_Nullable_Vector3__o *)(v20 + 28),
        *(float *)(v20 + 44),
        v39);
      EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        this,
        eventDetailEntity->fields.eventId,
        *(System_Action_o **)(v20 + 48),
        v40);
    }
    else
    {
      v41 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1BCAA2C(
                                                              EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                              v36,
                                                              v37,
                                                              v38);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v41,
        (Il2CppObject *)v20,
        Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__,
        v42);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v41, eventDetailEntity->fields.eventId, v43);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v20 + 48), 0LL);
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
  __int64 v13; // x2
  struct UnityEngine_GameObject_o **p_eventPointGaugeObj; // x22
  UnityEngine_Object_o *eventPointGaugeObj; // x25
  const MethodInfo *v16; // x3
  struct UnityEngine_GameObject_o *EventPointGaugePrefab; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  int EventActivityPoint; // w22
  EventInfoPointGaugeControl_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t EventPointGaugeState; // w22
  TerminalPramsManager_c *v36; // x0
  TerminalPramsManager_c *v37; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w22
  unsigned int BeforeEventActivityPointGauge_k__BackingField; // w21
  const MethodInfo *v40; // x2
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x19
  bool v42; // zf
  const MethodInfo *v43; // x1
  System_Nullable_Vector3__o v44; // 0:x1.16

  v7 = *(_QWORD *)&pos.fields.value.fields.y;
  v8 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4B1779E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId, isActive);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    byte_4B1779E = 1;
  }
  p_eventPointGaugeObj = &this->fields.eventPointGaugeObj;
  eventPointGaugeObj = (UnityEngine_Object_o *)this->fields.eventPointGaugeObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
  if ( UnityEngine_Object__op_Equality(eventPointGaugeObj, 0LL, 0LL) )
  {
    *(_QWORD *)&v44.fields.hasValue = v8;
    *(_QWORD *)&v44.fields.value.fields.y = v7;
    EventPointGaugePrefab = EventInfoPointGaugeControl__CreateEventPointGaugePrefab(this, v44, subMarginX, v16);
    this->fields.eventPointGaugeObj = EventPointGaugePrefab;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventPointGaugeObj,
      (int64_t)EventPointGaugePrefab,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
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
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
  if ( !TerminalPramsManager__CheckEventActivityPointSaveData(0LL) )
  {
    EventActivityPoint = UserEventPointMaster__GetEventActivityPoint(eventId, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29);
    if ( !byte_4B137FF )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v29, v30);
      byte_4B137FF = 1;
    }
    v32 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29);
      v32 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(v32[1].fields.eventRoot[17].monitor) = EventActivityPoint;
    EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v32, eventId, v30);
    if ( !byte_4B13800 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v34);
      byte_4B13800 = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
      v36 = TerminalPramsManager_TypeInfo;
    }
    v36->static_fields->_BeforeEventActivityPointGauge_k__BackingField = EventPointGaugeState;
    TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27);
  if ( !byte_4B1380F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v27, v28);
    byte_4B1380F = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27);
    v37 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPoint_k__BackingField = v37->static_fields->_BeforeEventActivityPoint_k__BackingField;
  if ( !byte_4B13810 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v27, v28);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4B13810 = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37, v27);
    v37 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPointGauge_k__BackingField = v37->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
  gameObject = (UnityEngine_GameObject_o *)EventInfoPointGaugeControl__GetEventPointGaugeState(
                                             (EventInfoPointGaugeControl_o *)v37,
                                             eventId,
                                             v28);
  EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
  v42 = (_DWORD)gameObject == 1 && BeforeEventActivityPointGauge_k__BackingField == 0;
  v25 = v42 ? 1LL : BeforeEventActivityPointGauge_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
LABEL_41:
    sub_1BCAA3C(gameObject, v25);
  EventPointGaugeComponent_k__BackingField->fields._GaugeStateId_k__BackingField = v25;
  EventPointGaugeComponent_k__BackingField->fields._MainPoint_k__BackingField = BeforeEventActivityPoint_k__BackingField;
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, v25, v40);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(EventPointGaugeComponent_k__BackingField, v43);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t eventId; // w21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  const MethodInfo *v39; // x5
  __int64 v40; // x1
  __int64 v41; // x2
  TerminalPramsManager_c *v42; // x0
  TerminalPramsManager_c *v43; // x0
  __int64 v44; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  EventInfoPointGaugeControl_assetLoadFinish_o *v48; // x21
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  TerminalPramsManager_c *v51; // x0

  v7 = *(_QWORD *)&pos.fields.value.fields.y;
  v8 = *(_QWORD *)&pos.fields.hasValue;
  if ( (byte_4B1779C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, eventDetailEntity, isActive);
    sub_1BCA7E0(&EventInfoPointGaugeControl_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__, v20, v21);
    sub_1BCA7E0(&EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo, v22, v23);
    sub_1BCA7E0(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v24, v25);
    byte_4B1779C = 1;
  }
  v26 = sub_1BCAA2C(
          EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo,
          eventDetailEntity,
          isActive,
          *(_QWORD *)&pos.fields.hasValue);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_47;
  *(_QWORD *)(v26 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)this, v29, v30, v31, v32, v33, v34);
  *(_BYTE *)(v26 + 24) = isActive;
  *(_QWORD *)(v26 + 28) = v8;
  *(_QWORD *)(v26 + 36) = v7;
  *(float *)(v26 + 44) = subMarginX;
  if ( !eventDetailEntity )
    goto LABEL_47;
  eventId = eventDetailEntity->fields.eventId;
  if ( !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo, v28);
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v28) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v26 + 24),
        *(System_Nullable_Vector3__o *)(v26 + 28),
        *(float *)(v26 + 44),
        v39);
    }
    else
    {
      v48 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1BCAA2C(
                                                              EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                              v36,
                                                              v37,
                                                              v38);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v48,
        (Il2CppObject *)v26,
        Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__,
        v49);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v48, eventDetailEntity->fields.eventId, v50);
    }
    return;
  }
  if ( EventDetailEntity__IsEventActivityPoint(eventDetailEntity, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v40);
    if ( !byte_4B1380F )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v40, v41);
      byte_4B1380F = 1;
    }
    v42 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v40);
      v42 = TerminalPramsManager_TypeInfo;
    }
    if ( v42->static_fields->_BeforeEventActivityPoint_k__BackingField >= 1 )
    {
      if ( !v42->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v42, v40);
      if ( !byte_4B13810 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v40, v41);
        byte_4B13810 = 1;
      }
      v43 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v40);
        v43 = TerminalPramsManager_TypeInfo;
      }
      if ( v43->static_fields->_BeforeEventActivityPointGauge_k__BackingField >= 1 )
      {
        if ( !v43->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v43, v40);
        if ( TerminalPramsManager__CheckEventActivityPointSaveData(0LL) )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v44);
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
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v46);
                if ( !byte_4B137FF )
                {
                  sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v46, v47);
                  byte_4B137FF = 1;
                }
                v51 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v46);
                  v51 = TerminalPramsManager_TypeInfo;
                }
                v51->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
                if ( !byte_4B13800 )
                {
                  sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v46, v47);
                  v51 = TerminalPramsManager_TypeInfo;
                  byte_4B13800 = 1;
                }
                if ( !v51->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v51, v46);
                  v51 = TerminalPramsManager_TypeInfo;
                }
                v51->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
                TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
              }
              return;
            }
          }
LABEL_47:
          sub_1BCAA3C(Instance, v28);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EventPointGaugeComponent_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callBack; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, prefabData);
  _4__this->fields.eventInfoAssetData = prefabData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.eventInfoAssetData,
    (int64_t)prefabData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1BCAA3C(_4__this, *(_QWORD *)&eventId);
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
  __int64 v7; // x2
  EventInfoPointGaugeControl_o *_4__this; // x0
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *_9__1; // x23
  EventInfoPointGaugeControl_o *v12; // x21
  const MethodInfo *v13; // x3
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B177AD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v6, v7);
    byte_4B177AD = 1;
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
    _9__1 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_1BCAA2C(
                                                              EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                              *(_QWORD *)&eventId,
                                                              v9,
                                                              v10);
    EventInfoPointGaugeControl_assetLoadFinish___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      v13);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v14, v15, v16, v17, v18, v19);
  }
  if ( !v12 )
LABEL_8:
    sub_1BCAA3C(_4__this, *(_QWORD *)&eventId);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(v12, _9__1, eventId, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, *(_QWORD *)&eId);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, prefabData);
  _4__this->fields.eventPointGaugeEffectAssetData = prefabData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.eventPointGaugeEffectAssetData,
    (int64_t)prefabData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v3; // x3
  const MethodInfo *v4; // x7
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *EventPointGaugeComponent_k__BackingField; // x0
  struct EventInfoPointGaugeControl_o *v11; // x8
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v14; // w21
  TerminalPramsManager_c *v15; // x0
  int32_t v16; // w21
  int32_t afterPoint; // w26
  int32_t beforePoint; // w27
  EventInfoPointGaugeControl_o *_4__this; // x21
  int32_t afterGauge; // w22
  int32_t EventActivityPointEffectState_k__BackingField; // w20
  System_Action_o *_9__1; // x24
  int32_t v23; // w23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B177AE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__, v8, v9);
    byte_4B177AE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B13825 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13825 = 1;
  }
  EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
    if ( !EventPointGaugeComponent_k__BackingField->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventPointGaugeComponent_k__BackingField, method);
    if ( !byte_4B13825 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
      byte_4B13825 = 1;
    }
    EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    }
    EventActivityPointEffectState_k__BackingField = EventPointGaugeComponent_k__BackingField->static_fields->_EventActivityPointEffectState_k__BackingField;
    _9__1 = this->fields.__9__1;
    v23 = this->fields.beforePoint;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v24, v25, v26, v27, v28, v29);
    }
    if ( _4__this )
    {
      EventInfoPointGaugeControl__PlayEventPointGaugeAddEffect(
        _4__this,
        afterGauge,
        EventActivityPointEffectState_k__BackingField,
        v23,
        afterPoint - beforePoint,
        _9__1,
        0,
        v4);
      return;
    }
LABEL_33:
    sub_1BCAA3C(EventPointGaugeComponent_k__BackingField, method);
  }
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_33;
  EventPointGaugeComponent_k__BackingField = (TerminalPramsManager_c *)v11->fields._EventPointGaugeComponent_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
    goto LABEL_33;
  LODWORD(EventPointGaugeComponent_k__BackingField->_1.interopData) = this->fields.afterPoint;
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(
    (EventInfoPointGaugeComponent_o *)EventPointGaugeComponent_k__BackingField,
    method);
  v14 = this->fields.afterPoint;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
  if ( !byte_4B137FF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    byte_4B137FF = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_BeforeEventActivityPoint_k__BackingField = v14;
  v16 = this->fields.afterGauge;
  if ( !byte_4B13800 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    v15 = TerminalPramsManager_TypeInfo;
    byte_4B13800 = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15, v12);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v16;
  TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass25_0___PlayEventPointGaugeEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  int32_t EVENT_POINT_EFFECT_STATE_NONE; // w21
  int32_t afterPoint; // w21
  int32_t afterGauge; // w21

  if ( (byte_4B177AF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B177AF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v4->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  if ( !byte_4B11137 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4B11137 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventActivityPointEffectState_k__BackingField = EVENT_POINT_EFFECT_STATE_NONE;
  afterPoint = this->fields.afterPoint;
  if ( !byte_4B137FF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4B137FF = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BeforeEventActivityPoint_k__BackingField = afterPoint;
  afterGauge = this->fields.afterGauge;
  if ( !byte_4B13800 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4B13800 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BeforeEventActivityPointGauge_k__BackingField = afterGauge;
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0DE6C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0DE24;
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
  if ( (byte_4B177AC & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&eventId, callback);
    byte_4B177AC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall EventInfoPointGaugeControl_assetLoadFinish__EndInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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