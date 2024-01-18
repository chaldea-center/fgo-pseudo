void __fastcall EventInfoPointGaugeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  EventInfoPointGaugeControl_c *v12; // x8
  struct EventInfoPointGaugeControl_StaticFields *v13; // x9
  struct EventInfoPointGaugeControl_StaticFields *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4188685 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoPointGaugeControl_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_16135/*"_battle"*/, v8);
    sub_B2C35C(&StringLiteral_16767/*"bit_gauge_change"*/, v9);
    byte_4188685 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoPointGaugeControl_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16767/*"bit_gauge_change"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16767/*"bit_gauge_change"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventInfoPointGaugeControl_TypeInfo;
  v13 = EventInfoPointGaugeControl_TypeInfo->static_fields;
  *(_QWORD *)&v13->EVENT_POINT_GAUGE_POSITION.fields.x = 0xC3B98000C1F80000LL;
  v13->EVENT_POINT_GAUGE_POSITION.fields.z = 0.0;
  v14 = v12->static_fields;
  v15 = (System_Int32_array **)StringLiteral_16135/*"_battle"*/;
  v14->BATTLE_MODE_SUFFIX = (struct System_String_o *)StringLiteral_16135/*"_battle"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->BATTLE_MODE_SUFFIX, v15, v16, v17, v18, v19, v20, v21);
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
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  bool v17; // w8
  UnityEngine_GameObject_o *result; // x0
  UnityEngine_Object_o *v19; // x22
  bool v20; // w8
  float x; // s0
  float y; // s1
  float z; // s2
  EventInfoPointGaugeControl_c *v24; // x0
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *Component_srcLineSprite; // x0
  struct EventInfoPointGaugeComponent_o **p_EventPointGaugeComponent_k__BackingField; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UnityEngine_GameObject_o *EffectParent; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  v5 = *(_QWORD *)&pos.fields.value.fields.z;
  v6 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_418867B & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, *(_QWORD *)&pos.fields.value.fields.x);
    sub_B2C35C(&EventInfoPointGaugeControl_TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___, v9);
    sub_B2C35C(&Method_System_Nullable_Vector3__GetValueOrDefault__, v10);
    sub_B2C35C(&Method_System_Nullable_Vector3__get_HasValue__, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_6167/*"EventInfoPointGaugePrefab"*/, v14);
    byte_418867B = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( !eventInfoAssetData )
    goto LABEL_23;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventInfoAssetData,
                                                             (System_String_o *)StringLiteral_6167/*"EventInfoPointGaugePrefab"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v17 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v19 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                    (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v20 = UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
    result = 0LL;
    if ( !v20 )
    {
      GameObjectExtensions__SafeSetParent_31331952((UnityEngine_GameObject_o *)v19, this->fields.eventRoot, 0LL);
      if ( (v5 & 0xFF00000000LL) != 0 )
      {
        y = *((float *)&v6 + 1);
        x = *(float *)&v6;
        z = *(float *)&v5;
      }
      else
      {
        v24 = EventInfoPointGaugeControl_TypeInfo;
        if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
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
        Component_srcLineSprite = (struct EventInfoPointGaugeComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)v19,
                                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
        this->fields._EventPointGaugeComponent_k__BackingField = Component_srcLineSprite;
        p_EventPointGaugeComponent_k__BackingField = &this->fields._EventPointGaugeComponent_k__BackingField;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
          (System_Int32_array **)Component_srcLineSprite,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        eventInfoAssetData = (AssetData_o *)this->fields._EventPointGaugeComponent_k__BackingField;
        if ( eventInfoAssetData )
        {
          EventInfoPointGaugeComponent__SetupSubMarginX(
            (EventInfoPointGaugeComponent_o *)eventInfoAssetData,
            subMarginX,
            *(const MethodInfo **)&pos.fields.value.fields.x);
          eventInfoAssetData = (AssetData_o *)*p_EventPointGaugeComponent_k__BackingField;
          if ( *p_EventPointGaugeComponent_k__BackingField )
          {
            EffectParent = EventInfoPointGaugeComponent__GetGenerateEffectParent(
                             (EventInfoPointGaugeComponent_o *)eventInfoAssetData,
                             *(const MethodInfo **)&pos.fields.value.fields.x);
            this->fields.eventPointGaugeEffectParent = EffectParent;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.eventPointGaugeEffectParent,
              (System_Int32_array **)EffectParent,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            return (UnityEngine_GameObject_o *)v19;
          }
        }
      }
LABEL_23:
      sub_B2C434(eventInfoAssetData, *(_QWORD *)&pos.fields.value.fields.x);
    }
  }
  return result;
}


void __fastcall EventInfoPointGaugeControl__DestroyEventInfo(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_eventPointGaugeObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeObj; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4188683 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188683 = 1;
  }
  eventPointGaugeObj = this->fields.eventPointGaugeObj;
  p_eventPointGaugeObj = (BattleServantConfConponent_o *)&this->fields.eventPointGaugeObj;
  v4 = (UnityEngine_Object_o *)eventPointGaugeObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_eventPointGaugeObj->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(klass, 0LL);
    p_eventPointGaugeObj->klass = 0LL;
    sub_B2C2F8(p_eventPointGaugeObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_eventPointGaugeChangeEffectPrefab; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeChangeEffectPrefab; // t1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4188681 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188681 = 1;
  }
  eventPointGaugeChangeEffectPrefab = this->fields.eventPointGaugeChangeEffectPrefab;
  p_eventPointGaugeChangeEffectPrefab = (BattleServantConfConponent_o *)&this->fields.eventPointGaugeChangeEffectPrefab;
  v4 = (UnityEngine_Object_o *)eventPointGaugeChangeEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(v4, 0LL);
  p_eventPointGaugeChangeEffectPrefab->klass = 0LL;
  sub_B2C2F8(p_eventPointGaugeChangeEffectPrefab, 0LL, v6, v7, v8, v9, v10, v11);
}


void __fastcall EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointGaugeControl_o *v2; // x19
  struct UnityEngine_GameObject_array *eventPointGaugeEffectPrefabList; // x8
  __int64 v4; // x9
  unsigned __int64 v5; // x21
  signed __int64 v6; // x22
  __int64 v7; // x23
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UnityEngine_GameObject_array *v16; // x8
  __int64 v17; // x0

  v2 = this;
  if ( (byte_4188682 & 1) == 0 )
  {
    this = (EventInfoPointGaugeControl_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188682 = 1;
  }
  eventPointGaugeEffectPrefabList = v2->fields.eventPointGaugeEffectPrefabList;
  if ( eventPointGaugeEffectPrefabList )
  {
    v4 = *(_QWORD *)&eventPointGaugeEffectPrefabList->max_length;
    if ( (int)v4 >= 1 )
    {
      v5 = 0LL;
      v6 = (int)v4;
      v7 = 32LL;
      while ( 1 )
      {
        if ( v5 >= eventPointGaugeEffectPrefabList->max_length )
        {
LABEL_16:
          v17 = sub_B2C460(this);
          sub_B2C400(v17, 0LL);
        }
        v8 = (UnityEngine_Object_o *)eventPointGaugeEffectPrefabList->m_Items[v5];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v8, 0LL);
        v16 = v2->fields.eventPointGaugeEffectPrefabList;
        if ( !v16 )
LABEL_14:
          sub_B2C434(this, v9);
        if ( v5 >= v16->max_length )
          goto LABEL_16;
        *(Il2CppClass **)((char *)&v16->obj.klass + v7) = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)((char *)v16 + v7), 0LL, v10, v11, v12, v13, v14, v15);
        if ( (__int64)++v5 >= v6 )
          break;
        eventPointGaugeEffectPrefabList = v2->fields.eventPointGaugeEffectPrefabList;
        v7 += 8LL;
        if ( !eventPointGaugeEffectPrefabList )
          goto LABEL_14;
      }
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
  Il2CppObject *current; // x22
  int32_t GroupId; // w21
  int32_t klass; // w22
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418867A & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418867A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (v12 = (QuestGroupMaster_o *)Instance,
        (Instance = (DataManager_o *)QuestGroupMaster__GetEntityListByGroupId(
                                       (QuestGroupMaster_o *)Instance,
                                       eventId,
                                       1,
                                       0LL)) == 0LL) )
  {
    sub_B2C434(Instance, v11);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
  v13 = 0;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    if ( !v17 )
      break;
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B2C434(v17, v18);
    GroupId = QuestGroupMaster__GetGroupId(v12, (int32_t)v20.fields.current[1].klass, 12, 0LL);
    klass = (int32_t)current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !((GroupId < 1) | !CondType__IsQuestClear_25746984(klass, -1, 0, 0LL)) )
      v13 = GroupId;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
  return v13;
}


bool __fastcall EventInfoPointGaugeControl__IsEventPointGaugeOpen(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188679 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188679 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
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
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  EventInfoPointGaugeControl_assetLoadFinish_o **v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  AssetData_o *eventInfoAssetData; // x0
  AssetLoader_LoadEndDataHandler_o *v28; // x19

  if ( (byte_4188675 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, callBack);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B2C35C(&Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__, v8);
    sub_B2C35C(&EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6149/*"Event/Info"*/, v10);
    byte_4188675 = 1;
  }
  v11 = sub_B2C42C(EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass16_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass16_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = callBack;
  v20 = (EventInfoPointGaugeControl_assetLoadFinish_o **)(v11 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callBack, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v11 + 32) = eventId;
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData && !AssetData__get_IsEmpty(eventInfoAssetData, 0LL) )
  {
    if ( *v20 )
      EventInfoPointGaugeControl_assetLoadFinish__Invoke(*v20, *(_DWORD *)(v11 + 32), 0LL);
  }
  else
  {
    v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v28,
      (Il2CppObject *)v11,
      Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6149/*"Event/Info"*/, v28, 1, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  EventInfoPointGaugeControl_assetLoadFinish_o **v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  Il2CppObject *v28; // x0
  System_String_o *v29; // x20
  AssetLoader_LoadEndDataHandler_o *v30; // x21

  if ( (byte_418867C & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, callbackEndFunc);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B2C35C(&Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__, v8);
    sub_B2C35C(&EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_5839/*"Effect/Event/{0}"*/, v10);
    byte_418867C = 1;
  }
  v11 = sub_B2C42C(EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass23_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass23_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = callbackEndFunc;
  v20 = (EventInfoPointGaugeControl_assetLoadFinish_o **)(v11 + 24);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)callbackEndFunc,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *(_DWORD *)(v11 + 32) = eventId;
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData && !AssetData__get_IsEmpty(eventPointGaugeEffectAssetData, 0LL) )
  {
    if ( *v20 )
      EventInfoPointGaugeControl_assetLoadFinish__Invoke(*v20, *(_DWORD *)(v11 + 32), 0LL);
  }
  else
  {
    v28 = (Il2CppObject *)System_Int32__ToString((int)v11 + 32, 0LL);
    v29 = System_String__Format((System_String_o *)StringLiteral_5839/*"Effect/Event/{0}"*/, v28, 0LL);
    v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v30,
      (Il2CppObject *)v11,
      Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v29, v30, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__LoadEventPointGaugeEffect_26572032(
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  EventInfoPointGaugeControl_assetLoadFinish_o *v18; // x21
  const MethodInfo *v19; // x3

  if ( (byte_418867D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
      *(_QWORD *)&eventId);
    sub_B2C35C(&EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo, v7);
    sub_B2C35C(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v8);
    byte_418867D = 1;
  }
  v9 = sub_B2C42C(EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass24_0___ctor((EventInfoPointGaugeControl___c__DisplayClass24_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = callbackEndFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)callbackEndFunc,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B2C42C(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
  EventInfoPointGaugeControl_assetLoadFinish___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
    0LL);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(this, v18, eventId, v19);
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
  __int64 Component_UIWidget; // x0
  const MethodInfo *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 *v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8
  __int64 *p_subEffectNameList; // x8
  struct EventInfoPointGaugeComponent_o *v43; // x8
  __int64 v44; // x28
  struct UnityEngine_GameObject_array **p_eventPointGaugeEffectPrefabList; // x24
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x8
  unsigned __int64 v54; // x20
  __int64 v55; // x19
  System_Text_StringBuilder_o *v56; // x26
  System_String_o *BATTLE_MODE_SUFFIX; // x1
  EventInfoPointGaugeControl_c *v58; // x0
  AssetData_o *eventPointGaugeEffectAssetData; // x27
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x26
  UnityEngine_Object_o *v61; // x26
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  unsigned int *v68; // x27
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x26
  System_Action_o *klass; // x27
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  BattleServantConfConponent_o *v83; // x0
  System_Int32_array **v84; // x1
  __int64 v85; // x0
  __int64 v86; // x0
  BattleServantConfConponent_o *v87; // [xsp+0h] [xbp-70h]
  signed __int64 v90; // [xsp+10h] [xbp-60h]
  int32_t v91; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4188680 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&gaugeState);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v13);
    sub_B2C35C(&EventInfoPointGaugeControl_TypeInfo, v14);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___, v15);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v16);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v20);
    sub_B2C35C(&Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__, v21);
    sub_B2C35C(&EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v23);
    byte_4188680 = 1;
  }
  v91 = 0;
  v24 = sub_B2C42C(EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass27_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass27_0_o *)v24,
    0LL);
  if ( !v24 )
LABEL_69:
    sub_B2C434(Component_UIWidget, v26);
  *(_QWORD *)(v24 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 32) = callback;
  v33 = (__int64 *)(v24 + 32);
  *(_DWORD *)(v24 + 24) = basePoint;
  *(_DWORD *)(v24 + 28) = addPoint;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 32), (System_Int32_array **)callback, v34, v35, v36, v37, v38, v39);
  if ( !this->fields.eventPointGaugeEffectAssetData )
    goto LABEL_66;
  Component_UIWidget = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Component_UIWidget = (__int64)TerminalPramsManager_TypeInfo;
  }
  static_fields = *(struct TerminalPramsManager_StaticFields **)(Component_UIWidget + 184);
  if ( static_fields->EVENT_POINT_EFFECT_STATE_ADD == effectState )
  {
    EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
    if ( !EventPointGaugeComponent_k__BackingField )
      goto LABEL_69;
    p_subEffectNameList = (__int64 *)&EventPointGaugeComponent_k__BackingField->fields.subEffectNameList;
    goto LABEL_17;
  }
  if ( (*(_BYTE *)(Component_UIWidget + 307) & 4) != 0 && !*(_DWORD *)(Component_UIWidget + 224) )
  {
    j_il2cpp_runtime_class_init_0(Component_UIWidget);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
  }
  if ( static_fields->EVENT_POINT_EFFECT_STATE_SUB != effectState )
  {
LABEL_66:
    Component_UIWidget = *v33;
    if ( !*v33 )
      goto LABEL_69;
    System_Action__Invoke((System_Action_o *)Component_UIWidget, 0LL);
    return;
  }
  v43 = this->fields._EventPointGaugeComponent_k__BackingField;
  if ( !v43 )
    goto LABEL_69;
  p_subEffectNameList = (__int64 *)&v43->fields.rootFSOffset;
LABEL_17:
  v44 = *p_subEffectNameList;
  EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(this, v26);
  p_eventPointGaugeEffectPrefabList = &this->fields.eventPointGaugeEffectPrefabList;
  if ( this->fields.eventPointGaugeEffectPrefabList )
  {
    if ( !v44 )
      goto LABEL_69;
  }
  else
  {
    if ( !v44 )
      goto LABEL_69;
    v46 = (System_Int32_array **)sub_B2C374(UnityEngine_GameObject___TypeInfo, *(unsigned int *)(v44 + 24));
    *p_eventPointGaugeEffectPrefabList = (struct UnityEngine_GameObject_array *)v46;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventPointGaugeEffectPrefabList,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = *(_QWORD *)(v44 + 24);
  if ( (int)v53 >= 1 )
  {
    v87 = (BattleServantConfConponent_o *)(v24 + 40);
    v90 = (int)v53;
    v54 = 0LL;
    v55 = 8LL;
    do
    {
      v56 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(v56, 0LL);
      if ( v54 >= *(unsigned int *)(v44 + 24) )
      {
LABEL_70:
        v85 = sub_B2C460(Component_UIWidget);
        sub_B2C400(v85, 0LL);
      }
      if ( !v56 )
        goto LABEL_69;
      System_Text_StringBuilder__Append_42408700(v56, *(System_String_o **)(v44 + v55 * 4), 0LL);
      if ( v55 == 8 )
      {
        if ( !isBattleMode )
          goto LABEL_35;
        v58 = EventInfoPointGaugeControl_TypeInfo;
        if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v58 = EventInfoPointGaugeControl_TypeInfo;
        }
        BATTLE_MODE_SUFFIX = v58->static_fields->BATTLE_MODE_SUFFIX;
      }
      else
      {
        if ( v55 != 10 )
          goto LABEL_35;
        System_Text_StringBuilder__Append_42408700(v56, (System_String_o *)StringLiteral_15905/*"_"*/, 0LL);
        v91 = gaugeState;
        BATTLE_MODE_SUFFIX = System_Int32__ToString((int32_t)&v91, 0LL);
      }
      System_Text_StringBuilder__Append_42408700(v56, BATTLE_MODE_SUFFIX, 0LL);
LABEL_35:
      eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
      Component_UIWidget = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v56->klass->vtable._3_ToString.method)(
                             v56,
                             v56->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !eventPointGaugeEffectAssetData )
        goto LABEL_69;
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 eventPointGaugeEffectAssetData,
                                                                 (System_String_o *)Component_UIWidget,
                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_UIWidget = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      if ( (Component_UIWidget & 1) != 0 )
      {
        if ( v54 >= *(unsigned int *)(v44 + 24) )
          goto LABEL_70;
        Component_UIWidget = (__int64)this->fields.eventPointGaugeEffectAssetData;
        if ( !Component_UIWidget )
          goto LABEL_69;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   (AssetData_o *)Component_UIWidget,
                                                                   *(System_String_o **)(v44 + v55 * 4),
                                                                   (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
        goto LABEL_66;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v61 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      Component_UIWidget = UnityEngine_Object__op_Equality(v61, 0LL, 0LL);
      if ( (Component_UIWidget & 1) != 0 )
        goto LABEL_66;
      v68 = (unsigned int *)*p_eventPointGaugeEffectPrefabList;
      if ( !*p_eventPointGaugeEffectPrefabList )
        goto LABEL_69;
      if ( v61 )
      {
        Component_UIWidget = sub_B2C41C(v61, *(_QWORD *)(*(_QWORD *)v68 + 64LL));
        if ( !Component_UIWidget )
        {
          v86 = sub_B2C454(0LL);
          sub_B2C400(v86, 0LL);
        }
      }
      if ( v54 >= v68[6] )
        goto LABEL_70;
      *(_QWORD *)&v68[v55] = v61;
      sub_B2C2F8((BattleServantConfConponent_o *)&v68[v55], (System_Int32_array **)v61, v62, v63, v64, v65, v66, v67);
      GameObjectExtensions__SafeSetParent_31331952(
        (UnityEngine_GameObject_o *)v61,
        this->fields.eventPointGaugeEffectParent,
        0LL);
      Component_UIWidget = (__int64)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                      (UnityEngine_GameObject_o *)v61,
                                      (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
      v75 = Component_UIWidget;
      if ( v55 == 8 )
      {
        if ( !Component_UIWidget )
          goto LABEL_69;
        *(_QWORD *)(Component_UIWidget + 24) = 0LL;
        v83 = (BattleServantConfConponent_o *)(Component_UIWidget + 24);
        v84 = 0LL;
LABEL_63:
        sub_B2C2F8(v83, v84, v69, v70, v71, v72, v73, v74);
        goto LABEL_64;
      }
      if ( v55 == 10 )
      {
        klass = (System_Action_o *)v87->klass;
        if ( !v87->klass )
        {
          klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            klass,
            (Il2CppObject *)v24,
            Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__,
            0LL);
          *(_QWORD *)(v24 + 40) = klass;
          sub_B2C2F8(v87, (System_Int32_array **)klass, v77, v78, v79, v80, v81, v82);
        }
        if ( !v75 )
          goto LABEL_69;
        *(_QWORD *)(v75 + 24) = klass;
        v83 = (BattleServantConfConponent_o *)(v75 + 24);
        v84 = (System_Int32_array **)klass;
        goto LABEL_63;
      }
LABEL_64:
      ++v54;
      v55 += 2LL;
    }
    while ( (__int64)v54 < v90 );
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  AssetData_o **v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x23
  struct UnityEngine_GameObject_o *v37; // x0
  struct UnityEngine_GameObject_o **p_eventPointGaugeChangeEffectPrefab; // x19
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UIWidget_o *Component_UIWidget; // x19
  System_Action_o *v46; // x20
  System_Action_o *v47; // x22

  if ( (byte_418867F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, parent);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v13);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___, v14);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__, v17);
    sub_B2C35C(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__, v18);
    sub_B2C35C(&EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo, v19);
    byte_418867F = 1;
  }
  v20 = sub_B2C42C(EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass26_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass26_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_20;
  *(_QWORD *)(v20 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 32) = callback;
  v29 = (AssetData_o **)(v20 + 32);
  *(_DWORD *)(v20 + 24) = afterGauge;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)callback, v30, v31, v32, v33, v34, v35);
  if ( !this->fields.eventPointGaugeEffectAssetData || !beforeGauge || *(_DWORD *)(v20 + 24) <= beforeGauge )
    goto LABEL_16;
  EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(this, v22);
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( !eventPointGaugeEffectAssetData )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventPointGaugeEffectAssetData,
                                                             name,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    goto LABEL_16;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v37 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.eventPointGaugeChangeEffectPrefab = v37;
  p_eventPointGaugeChangeEffectPrefab = &this->fields.eventPointGaugeChangeEffectPrefab;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_eventPointGaugeChangeEffectPrefab,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)*p_eventPointGaugeChangeEffectPrefab, 0LL, 0LL) )
  {
LABEL_16:
    eventPointGaugeEffectAssetData = *v29;
    if ( *v29 )
    {
      System_Action__Invoke((System_Action_o *)eventPointGaugeEffectAssetData, 0LL);
      return;
    }
LABEL_20:
    sub_B2C434(eventPointGaugeEffectAssetData, v22);
  }
  GameObjectExtensions__SafeSetParent_31331952(*p_eventPointGaugeChangeEffectPrefab, parent, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         *p_eventPointGaugeChangeEffectPrefab,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v20,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
    0LL);
  v47 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v20,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
    0LL);
  if ( !Component_UIWidget )
    goto LABEL_20;
  EventPointGaugeChangeEffectAction__Setup((EventPointGaugeChangeEffectAction_o *)Component_UIWidget, v46, v47, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  TerminalPramsManager_c *v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  EventInfoPointGaugeControl_o *v30; // x0
  int32_t v31; // w22
  int32_t EventPointGaugeState; // w0
  int32_t v33; // w21
  UnityEngine_GameObject_o *eventPointGaugeEffectParent; // x23
  EventInfoPointGaugeControl_c *v35; // x0
  bool v36; // zf
  System_String_o *EVENT_POINT_GAUGE_EFFECT_CHANGE; // x24
  System_Action_o *v38; // x25
  const MethodInfo *v39; // x6

  if ( (byte_418867E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&EventInfoPointGaugeControl_TypeInfo, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__, v9);
    sub_B2C35C(&EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo, v10);
    byte_418867E = 1;
  }
  v11 = sub_B2C42C(EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass25_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass25_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  *(_QWORD *)(v11 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)callback, v20, v21, v22, v23, v24, v25);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184725 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v26);
    byte_4184725 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v11 + 20) = v27->static_fields->_BeforeEventActivityPoint_k__BackingField;
  *(_DWORD *)(v11 + 16) = UserEventPointMaster__GetEventActivityPoint(eventId, 0LL);
  if ( !byte_4184726 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    byte_4184726 = 1;
  }
  v30 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  }
  v31 = *((_DWORD *)v30[2].monitor + 100);
  EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v30, eventId, v29);
  *(_DWORD *)(v11 + 32) = EventPointGaugeState;
  v33 = EventPointGaugeState;
  eventPointGaugeEffectParent = this->fields.eventPointGaugeEffectParent;
  v36 = EventPointGaugeState == 1;
  v35 = EventInfoPointGaugeControl_TypeInfo;
  v36 = v36 && v31 == 0;
  if ( v36 )
    v31 = 1;
  if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
    v35 = EventInfoPointGaugeControl_TypeInfo;
    v33 = *(_DWORD *)(v11 + 32);
  }
  EVENT_POINT_GAUGE_EFFECT_CHANGE = v35->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE;
  v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v11,
    Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__,
    0LL);
  EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
    this,
    eventPointGaugeEffectParent,
    EVENT_POINT_GAUGE_EFFECT_CHANGE,
    v31,
    v33,
    v38,
    v39);
}


void __fastcall EventInfoPointGaugeControl__ReleaseAsset(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  AssetData_o *eventInfoAssetData; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_eventPointGaugeEffectAssetData; // x19
  AssetData_o *v11; // x20
  struct AssetData_o *eventPointGaugeEffectAssetData; // t1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4188684 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_4188684 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30152684(eventInfoAssetData, 0LL);
    this->fields.eventInfoAssetData = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventInfoAssetData, 0LL, v4, v5, v6, v7, v8, v9);
  }
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  p_eventPointGaugeEffectAssetData = (BattleServantConfConponent_o *)&this->fields.eventPointGaugeEffectAssetData;
  v11 = eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30152684(v11, 0LL);
    p_eventPointGaugeEffectAssetData->klass = 0LL;
    sub_B2C2F8(p_eventPointGaugeEffectAssetData, 0LL, v13, v14, v15, v16, v17, v18);
  }
}


void __fastcall EventInfoPointGaugeControl__SetRootObject(
        EventInfoPointGaugeControl_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventRoot = root;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventRoot,
    (System_Int32_array **)root,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t eventId; // w22
  const MethodInfo *v33; // x5
  const MethodInfo *v34; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v35; // x22
  const MethodInfo *v36; // x3

  v8 = *(_QWORD *)&pos.fields.value.fields.z;
  v9 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_4188677 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoPointGaugeControl_TypeInfo, eventDetailEntity);
    sub_B2C35C(&Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__, v14);
    sub_B2C35C(&EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo, v15);
    sub_B2C35C(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v16);
    byte_4188677 = 1;
  }
  v17 = sub_B2C42C(EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass18_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass18_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_14;
  *(_QWORD *)(v17 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 48) = callback;
  *(_BYTE *)(v17 + 24) = isActive;
  *(_QWORD *)(v17 + 28) = v9;
  *(_QWORD *)(v17 + 36) = v8;
  *(float *)(v17 + 44) = subMarginX;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 48), (System_Int32_array **)callback, v26, v27, v28, v29, v30, v31);
  if ( !eventDetailEntity )
LABEL_14:
    sub_B2C434(v18, v19);
  eventId = eventDetailEntity->fields.eventId;
  if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  }
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
        v33);
      EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        this,
        eventDetailEntity->fields.eventId,
        *(System_Action_o **)(v17 + 48),
        v34);
    }
    else
    {
      v35 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B2C42C(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v35,
        (Il2CppObject *)v17,
        Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__,
        0LL);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v35, eventDetailEntity->fields.eventId, v36);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  bool v25; // w21
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  int EventActivityPoint; // w22
  EventInfoPointGaugeControl_o *v31; // x0
  __int64 v32; // x1
  int32_t EventPointGaugeState; // w22
  TerminalPramsManager_c *v34; // x0
  TerminalPramsManager_c *v35; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w22
  unsigned int BeforeEventActivityPointGauge_k__BackingField; // w21
  const MethodInfo *v38; // x2
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x19
  bool v40; // zf
  const MethodInfo *v41; // x1
  System_Nullable_Vector3__o v42; // 0:x1.16

  v7 = *(_QWORD *)&pos.fields.value.fields.z;
  v8 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_4188678 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
    byte_4188678 = 1;
  }
  p_eventPointGaugeObj = &this->fields.eventPointGaugeObj;
  eventPointGaugeObj = (UnityEngine_Object_o *)this->fields.eventPointGaugeObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(eventPointGaugeObj, 0LL, 0LL) )
  {
    *(_QWORD *)&v42.fields.value.fields.x = v8;
    *(_QWORD *)&v42.fields.value.fields.z = v7;
    EventPointGaugePrefab = EventInfoPointGaugeControl__CreateEventPointGaugePrefab(this, v42, subMarginX, v15);
    this->fields.eventPointGaugeObj = EventPointGaugePrefab;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventPointGaugeObj,
      (System_Int32_array **)EventPointGaugePrefab,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_49;
  v25 = isActive;
  UnityEngine_GameObject__SetActive(gameObject, v25, 0LL);
  gameObject = *p_eventPointGaugeObj;
  if ( !*p_eventPointGaugeObj )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(gameObject, v25, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !TerminalPramsManager__CheckEventActivityPointSaveData(0LL) )
  {
    EventActivityPoint = UserEventPointMaster__GetEventActivityPoint(eventId, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184705 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
      byte_4184705 = 1;
    }
    v31 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    }
    *((_DWORD *)v31[2].monitor + 99) = EventActivityPoint;
    EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v31, eventId, v29);
    if ( !byte_4184706 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v32);
      byte_4184706 = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    v34->static_fields->_BeforeEventActivityPointGauge_k__BackingField = EventPointGaugeState;
    TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184725 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v26);
    byte_4184725 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPoint_k__BackingField = v35->static_fields->_BeforeEventActivityPoint_k__BackingField;
  if ( !byte_4184726 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v26);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4184726 = 1;
  }
  if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPointGauge_k__BackingField = v35->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
  gameObject = (UnityEngine_GameObject_o *)EventInfoPointGaugeControl__GetEventPointGaugeState(
                                             (EventInfoPointGaugeControl_o *)v35,
                                             eventId,
                                             v27);
  EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
  v40 = (_DWORD)gameObject == 1 && BeforeEventActivityPointGauge_k__BackingField == 0;
  v24 = v40 ? 1LL : BeforeEventActivityPointGauge_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
LABEL_49:
    sub_B2C434(gameObject, v24);
  HIDWORD(EventPointGaugeComponent_k__BackingField->fields.gaugeTweenHeight) = v24;
  EventPointGaugeComponent_k__BackingField->fields.maxPoint = BeforeEventActivityPoint_k__BackingField;
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, v24, v38);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(EventPointGaugeComponent_k__BackingField, v41);
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t eventId; // w21
  const MethodInfo *v29; // x5
  __int64 v30; // x1
  TerminalPramsManager_c *v31; // x0
  TerminalPramsManager_c *v32; // x0
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v34; // x1
  EventInfoPointGaugeControl_assetLoadFinish_o *v35; // x21
  const MethodInfo *v36; // x3
  TerminalPramsManager_c *v37; // x0

  v7 = *(_QWORD *)&pos.fields.value.fields.z;
  v8 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_4188676 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, eventDetailEntity);
    sub_B2C35C(&EventInfoPointGaugeControl_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    sub_B2C35C(&Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__, v16);
    sub_B2C35C(&EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo, v17);
    sub_B2C35C(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v18);
    byte_4188676 = 1;
  }
  v19 = sub_B2C42C(EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass17_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass17_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_57;
  *(_QWORD *)(v19 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 28) = v8;
  *(_QWORD *)(v19 + 36) = v7;
  *(_BYTE *)(v19 + 24) = isActive;
  *(float *)(v19 + 44) = subMarginX;
  if ( !eventDetailEntity )
    goto LABEL_57;
  eventId = eventDetailEntity->fields.eventId;
  if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  }
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
        v29);
    }
    else
    {
      v35 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B2C42C(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v35,
        (Il2CppObject *)v19,
        Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__,
        0LL);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v35, eventDetailEntity->fields.eventId, v36);
    }
    return;
  }
  if ( EventDetailEntity__IsEventActivityPoint(eventDetailEntity, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184725 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v30);
      byte_4184725 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    if ( v31->static_fields->_BeforeEventActivityPoint_k__BackingField >= 1 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v31);
      if ( !byte_4184726 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v30);
        byte_4184726 = 1;
      }
      v32 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v32 = TerminalPramsManager_TypeInfo;
      }
      if ( v32->static_fields->_BeforeEventActivityPointGauge_k__BackingField >= 1 )
      {
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v32);
        if ( TerminalPramsManager__CheckEventActivityPointSaveData(0LL) )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             Instance,
                                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
            if ( MasterData_WarQuestSelectionMaster )
            {
              if ( !UserEventPointMaster__GetEntity(
                      MasterData_WarQuestSelectionMaster,
                      (int64_t)Instance,
                      eventDetailEntity->fields.eventId,
                      0,
                      0LL) )
              {
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_4184705 )
                {
                  sub_B2C35C(&TerminalPramsManager_TypeInfo, v34);
                  byte_4184705 = 1;
                }
                v37 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v37 = TerminalPramsManager_TypeInfo;
                }
                v37->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
                if ( !byte_4184706 )
                {
                  sub_B2C35C(&TerminalPramsManager_TypeInfo, v34);
                  v37 = TerminalPramsManager_TypeInfo;
                  byte_4184706 = 1;
                }
                if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v37);
                  v37 = TerminalPramsManager_TypeInfo;
                }
                v37->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
                TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
              }
              return;
            }
          }
LABEL_57:
          sub_B2C434(Instance, v21);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EventPointGaugeComponent_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  const MethodInfo *v5; // x2
  EventInfoPointGaugeControl_assetLoadFinish_o *callBack; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, prefabData);
  _4__this->fields.eventInfoAssetData = prefabData;
  sub_B2C2F8(&_4__this->fields.eventInfoAssetData, prefabData);
  callBack = this->fields.callBack;
  if ( callBack )
    EventInfoPointGaugeControl_assetLoadFinish__Invoke(callBack, this->fields.eventId, v5);
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
  EventInfoPointGaugeControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
          _4__this,
          eventId,
          this->fields.isActive,
          this->fields.pos,
          this->fields.subMarginX,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(_4__this, *(_QWORD *)&eventId);
  }
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(_4__this, 0LL, eventId, 0LL);
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
  __int64 v5; // x1
  EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *_9__1; // x22
  EventInfoPointGaugeControl_o *v8; // x21
  __int64 v9; // x9

  if ( (byte_4184B08 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      *(_QWORD *)&eventId);
    sub_B2C35C(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v5);
    byte_4184B08 = 1;
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
    0LL);
  _9__1 = this->fields.__9__1;
  v8 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (struct EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B2C42C(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    v9 = *(_QWORD *)Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__;
    *(_QWORD *)&_9__1->fields.extra_arg = Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__;
    *(_QWORD *)&_9__1->fields.method_ptr = v9;
    *(_QWORD *)&_9__1->fields.method = this;
    sub_B2C2F8(&_9__1->fields.method, this);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !v8 )
LABEL_8:
    sub_B2C434(_4__this, *(_QWORD *)&eventId);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(v8, _9__1, eventId, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  EventInfoPointGaugeControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, eId);
  EventInfoPointGaugeControl__PlayEventPointGaugeEffect(_4__this, eId, this->fields.callback, 0LL);
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
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  const MethodInfo *v5; // x2
  EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, prefabData);
  _4__this->fields.eventPointGaugeEffectAssetData = prefabData;
  sub_B2C2F8(&_4__this->fields.eventPointGaugeEffectAssetData, prefabData);
  callbackEndFunc = this->fields.callbackEndFunc;
  if ( callbackEndFunc )
    EventInfoPointGaugeControl_assetLoadFinish__Invoke(callbackEndFunc, this->fields.eventId, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *EventPointGaugeComponent_k__BackingField; // x0
  struct EventInfoPointGaugeControl_o *v6; // x8
  __int64 v7; // x1
  int32_t v8; // w21
  TerminalPramsManager_c *v9; // x0
  int32_t v10; // w21
  int32_t afterPoint; // w26
  int32_t beforePoint; // w27
  EventInfoPointGaugeControl_o *_4__this; // x21
  int32_t afterGauge; // w22
  int32_t EventActivityPointEffectState_k__BackingField; // w20
  System_Action_o *_9__1; // x24
  int32_t v17; // w23

  if ( (byte_4184B09 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    sub_B2C35C(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__, v4);
    byte_4184B09 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184746 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184746 = 1;
  }
  EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
    if ( (BYTE3(EventPointGaugeComponent_k__BackingField->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointGaugeComponent_k__BackingField->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointGaugeComponent_k__BackingField);
    }
    if ( !byte_4184746 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
      byte_4184746 = 1;
    }
    EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      EventPointGaugeComponent_k__BackingField = TerminalPramsManager_TypeInfo;
    }
    EventActivityPointEffectState_k__BackingField = EventPointGaugeComponent_k__BackingField->static_fields->_EventActivityPointEffectState_k__BackingField;
    _9__1 = this->fields.__9__1;
    v17 = this->fields.beforePoint;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B2C2F8(&this->fields.__9__1, _9__1);
    }
    if ( _4__this )
    {
      EventInfoPointGaugeControl__PlayEventPointGaugeAddEffect(
        _4__this,
        afterGauge,
        EventActivityPointEffectState_k__BackingField,
        v17,
        afterPoint - beforePoint,
        _9__1,
        0,
        0LL);
      return;
    }
LABEL_40:
    sub_B2C434(EventPointGaugeComponent_k__BackingField, method);
  }
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_40;
  EventPointGaugeComponent_k__BackingField = (TerminalPramsManager_c *)v6->fields._EventPointGaugeComponent_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
    goto LABEL_40;
  EventInfoPointGaugeComponent__SetGaugeBarHeightByPoint(
    (EventInfoPointGaugeComponent_o *)EventPointGaugeComponent_k__BackingField,
    this->fields.afterPoint,
    0LL);
  v8 = this->fields.afterPoint;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184705 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    byte_4184705 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_BeforeEventActivityPoint_k__BackingField = v8;
  v10 = this->fields.afterGauge;
  if ( !byte_4184706 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4184706 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v10;
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

  if ( (byte_4184B0A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184B0A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v3->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  if ( !byte_4184734 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4184734 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = EVENT_POINT_EFFECT_STATE_NONE;
  afterPoint = this->fields.afterPoint;
  if ( !byte_4184705 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4184705 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = afterPoint;
  afterGauge = this->fields.afterGauge;
  if ( !byte_4184706 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4184706 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
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
  struct EventInfoPointGaugeControl_o *_4__this; // x8
  EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventPointGaugeComponent_k__BackingField = _4__this->fields._EventPointGaugeComponent_k__BackingField) == 0LL )
  {
    sub_B2C434(this, method);
  }
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, this->fields.afterGauge, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass26_0___PlayEventPointGaugeChangeEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback )
    sub_B2C434(0LL, method);
  System_Action__Invoke(callback, 0LL);
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
  struct EventInfoPointGaugeControl_o *_4__this; // x8
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8
  struct EventInfoPointGaugeControl_o *v4; // x8
  struct EventInfoPointGaugeComponent_o *v5; // x8
  struct EventInfoPointGaugeControl_o *v6; // x8
  EventInfoPointGaugeComponent_o *v7; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventPointGaugeComponent_k__BackingField = _4__this->fields._EventPointGaugeComponent_k__BackingField) == 0LL
    || (EventPointGaugeComponent_k__BackingField->fields.maxPoint = this->fields.basePoint,
        (v4 = this->fields.__4__this) == 0LL)
    || (v5 = v4->fields._EventPointGaugeComponent_k__BackingField) == 0LL
    || (v5->fields.animeState += this->fields.addPoint, (v6 = this->fields.__4__this) == 0LL)
    || (v7 = v6->fields._EventPointGaugeComponent_k__BackingField) == 0LL )
  {
    sub_B2C434(this, method);
  }
  EventInfoPointGaugeComponent__PlayGaugeAnime(v7, this->fields.callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl_assetLoadFinish___ctor(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventInfoPointGaugeControl_assetLoadFinish__BeginInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        int32_t eventId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_4184B0B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&eventId);
    byte_4184B0B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall EventInfoPointGaugeControl_assetLoadFinish__EndInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl_assetLoadFinish__Invoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  EventInfoPointGaugeControl_assetLoadFinish_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  EventInfoPointGaugeControl_assetLoadFinish_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  EventInfoPointGaugeControl_assetLoadFinish_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (EventInfoPointGaugeControl_assetLoadFinish_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&eventId, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)eventId, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)eventId, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)eventId, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)eventId,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)eventId, v22);
    goto LABEL_37;
  }
}