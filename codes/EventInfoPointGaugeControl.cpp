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

  if ( (byte_42155EB & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoPointGaugeControl_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_16183/*"_battle"*/, v8);
    sub_B0D8A4(&StringLiteral_16816/*"bit_gauge_change"*/, v9);
    byte_42155EB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoPointGaugeControl_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16816/*"bit_gauge_change"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16816/*"bit_gauge_change"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventInfoPointGaugeControl_TypeInfo;
  v13 = EventInfoPointGaugeControl_TypeInfo->static_fields;
  *(_QWORD *)&v13->EVENT_POINT_GAUGE_POSITION.fields.x = 0xC3B98000C1F80000LL;
  v13->EVENT_POINT_GAUGE_POSITION.fields.z = 0.0;
  v14 = v12->static_fields;
  v15 = (System_Int32_array **)StringLiteral_16183/*"_battle"*/;
  v14->BATTLE_MODE_SUFFIX = (struct System_String_o *)StringLiteral_16183/*"_battle"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v14->BATTLE_MODE_SUFFIX, v15, v16, v17, v18, v19, v20, v21);
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
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  struct UnityEngine_GameObject_o *EffectParent; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  v5 = *(_QWORD *)&pos.fields.value.fields.z;
  v6 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_42155E1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, *(_QWORD *)&pos.fields.value.fields.x);
    sub_B0D8A4(&EventInfoPointGaugeControl_TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___, v9);
    sub_B0D8A4(&Method_System_Nullable_Vector3__GetValueOrDefault__, v10);
    sub_B0D8A4(&Method_System_Nullable_Vector3__get_HasValue__, v11);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_6184/*"EventInfoPointGaugePrefab"*/, v14);
    byte_42155E1 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( !eventInfoAssetData )
    goto LABEL_23;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventInfoAssetData,
                                                             (System_String_o *)StringLiteral_6184/*"EventInfoPointGaugePrefab"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
                                    (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v20 = UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
    result = 0LL;
    if ( !v20 )
    {
      GameObjectExtensions__SafeSetParent_31184716((UnityEngine_GameObject_o *)v19, this->fields.eventRoot, 0LL);
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
                                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
        this->fields._EventPointGaugeComponent_k__BackingField = Component_srcLineSprite;
        p_EventPointGaugeComponent_k__BackingField = &this->fields._EventPointGaugeComponent_k__BackingField;
        sub_B0D840(
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
            v34);
          eventInfoAssetData = (AssetData_o *)*p_EventPointGaugeComponent_k__BackingField;
          if ( *p_EventPointGaugeComponent_k__BackingField )
          {
            EffectParent = EventInfoPointGaugeComponent__GetGenerateEffectParent(
                             (EventInfoPointGaugeComponent_o *)eventInfoAssetData,
                             v35);
            this->fields.eventPointGaugeEffectParent = EffectParent;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.eventPointGaugeEffectParent,
              (System_Int32_array **)EffectParent,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
            return (UnityEngine_GameObject_o *)v19;
          }
        }
      }
LABEL_23:
      sub_B0D97C(eventInfoAssetData);
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

  if ( (byte_42155E9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42155E9 = 1;
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
    UnityEngine_Object__Destroy_34935276(klass, 0LL);
    p_eventPointGaugeObj->klass = 0LL;
    sub_B0D840(p_eventPointGaugeObj, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_42155E7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42155E7 = 1;
  }
  eventPointGaugeChangeEffectPrefab = this->fields.eventPointGaugeChangeEffectPrefab;
  p_eventPointGaugeChangeEffectPrefab = (BattleServantConfConponent_o *)&this->fields.eventPointGaugeChangeEffectPrefab;
  v4 = (UnityEngine_Object_o *)eventPointGaugeChangeEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(v4, 0LL);
  p_eventPointGaugeChangeEffectPrefab->klass = 0LL;
  sub_B0D840(p_eventPointGaugeChangeEffectPrefab, 0LL, v6, v7, v8, v9, v10, v11);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UnityEngine_GameObject_array *v15; // x8
  __int64 v16; // x0

  v2 = this;
  if ( (byte_42155E8 & 1) == 0 )
  {
    this = (EventInfoPointGaugeControl_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42155E8 = 1;
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
          v16 = sub_B0D9A8(this);
          sub_B0D948(v16, 0LL);
        }
        v8 = (UnityEngine_Object_o *)eventPointGaugeEffectPrefabList->m_Items[v5];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(v8, 0LL);
        v15 = v2->fields.eventPointGaugeEffectPrefabList;
        if ( !v15 )
LABEL_14:
          sub_B0D97C(this);
        if ( v5 >= v15->max_length )
          goto LABEL_16;
        *(Il2CppClass **)((char *)&v15->obj.klass + v7) = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)((char *)v15 + v7), 0LL, v9, v10, v11, v12, v13, v14);
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
  QuestGroupMaster_o *v11; // x20
  int32_t v12; // w19
  Il2CppObject *current; // x22
  int32_t GroupId; // w21
  int32_t klass; // w22
  _BOOL8 v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42155E0 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42155E0 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (v11 = (QuestGroupMaster_o *)Instance,
        (Instance = (DataManager_o *)QuestGroupMaster__GetEntityListByGroupId(
                                       (QuestGroupMaster_o *)Instance,
                                       eventId,
                                       1,
                                       0LL)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
  v12 = 0;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    if ( !v16 )
      break;
    current = v18.fields.current;
    if ( !v18.fields.current )
      sub_B0D97C(v16);
    GroupId = QuestGroupMaster__GetGroupId(v11, (int32_t)v18.fields.current[1].klass, 12, 0LL);
    klass = (int32_t)current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !((GroupId < 1) | !CondType__IsQuestClear_25410236(klass, -1, 0, 0LL)) )
      v12 = GroupId;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
  return v12;
}


bool __fastcall EventInfoPointGaugeControl__IsEventPointGaugeOpen(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0

  if ( (byte_42155DF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_42155DF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  __int64 v11; // x22
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  EventInfoPointGaugeControl_assetLoadFinish_o **v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  AssetData_o *eventInfoAssetData; // x0
  AssetLoader_LoadEndDataHandler_o *v29; // x19

  if ( (byte_42155DB & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, callBack);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B0D8A4(&Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__, v8);
    sub_B0D8A4(&EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_6166/*"Event/Info"*/, v10);
    byte_42155DB = 1;
  }
  v11 = sub_B0D974(EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo, callBack, *(_QWORD *)&eventId);
  EventInfoPointGaugeControl___c__DisplayClass16_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass16_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 24) = callBack;
  v19 = (EventInfoPointGaugeControl_assetLoadFinish_o **)(v11 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callBack, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v11 + 32) = eventId;
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData && !AssetData__get_IsEmpty(eventInfoAssetData, 0LL) )
  {
    if ( *v19 )
      EventInfoPointGaugeControl_assetLoadFinish__Invoke(*v19, *(_DWORD *)(v11 + 32), 0LL);
  }
  else
  {
    v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27);
    AssetLoader_LoadEndDataHandler___ctor(
      v29,
      (Il2CppObject *)v11,
      Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6166/*"Event/Info"*/, v29, 1, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  EventInfoPointGaugeControl_assetLoadFinish_o **v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  Il2CppObject *v27; // x0
  System_String_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  AssetLoader_LoadEndDataHandler_o *v31; // x21

  if ( (byte_42155E2 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, callbackEndFunc);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B0D8A4(&Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__, v8);
    sub_B0D8A4(&EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_5855/*"Effect/Event/{0}"*/, v10);
    byte_42155E2 = 1;
  }
  v11 = sub_B0D974(EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo, callbackEndFunc, *(_QWORD *)&eventId);
  EventInfoPointGaugeControl___c__DisplayClass23_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass23_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 24) = callbackEndFunc;
  v19 = (EventInfoPointGaugeControl_assetLoadFinish_o **)(v11 + 24);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)callbackEndFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  *(_DWORD *)(v11 + 32) = eventId;
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData && !AssetData__get_IsEmpty(eventPointGaugeEffectAssetData, 0LL) )
  {
    if ( *v19 )
      EventInfoPointGaugeControl_assetLoadFinish__Invoke(*v19, *(_DWORD *)(v11 + 32), 0LL);
  }
  else
  {
    v27 = (Il2CppObject *)System_Int32__ToString((int)v11 + 32, 0LL);
    v28 = System_String__Format((System_String_o *)StringLiteral_5855/*"Effect/Event/{0}"*/, v27, 0LL);
    v31 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30);
    AssetLoader_LoadEndDataHandler___ctor(
      v31,
      (Il2CppObject *)v11,
      Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v28, v31, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__LoadEventPointGaugeEffect_26211676(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callbackEndFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  EventInfoPointGaugeControl_assetLoadFinish_o *v19; // x21
  const MethodInfo *v20; // x3

  if ( (byte_42155E3 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
      *(_QWORD *)&eventId);
    sub_B0D8A4(&EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo, v7);
    sub_B0D8A4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v8);
    byte_42155E3 = 1;
  }
  v9 = sub_B0D974(EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo, *(_QWORD *)&eventId, callbackEndFunc);
  EventInfoPointGaugeControl___c__DisplayClass24_0___ctor((EventInfoPointGaugeControl___c__DisplayClass24_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = callbackEndFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)callbackEndFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v19 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B0D974(
                                                          EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                          v17,
                                                          v18);
  EventInfoPointGaugeControl_assetLoadFinish___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
    0LL);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(this, v19, eventId, v20);
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
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 *v32; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x1
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8
  __int64 *p_subEffectNameList; // x8
  struct EventInfoPointGaugeComponent_o *v43; // x8
  __int64 v44; // x28
  __int64 v45; // x1
  System_String_array **v46; // x2
  struct UnityEngine_GameObject_array **p_eventPointGaugeEffectPrefabList; // x24
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x8
  unsigned __int64 v56; // x20
  __int64 v57; // x19
  System_Text_StringBuilder_o *v58; // x26
  System_String_o *BATTLE_MODE_SUFFIX; // x1
  EventInfoPointGaugeControl_c *v60; // x0
  AssetData_o *eventPointGaugeEffectAssetData; // x27
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x26
  UnityEngine_Object_o *v63; // x26
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  unsigned int *v70; // x27
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x26
  System_Action_o *klass; // x27
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  BattleServantConfConponent_o *v84; // x0
  System_Int32_array **v85; // x1
  __int64 v86; // x0
  __int64 v87; // x0
  BattleServantConfConponent_o *v88; // [xsp+0h] [xbp-70h]
  signed __int64 v91; // [xsp+10h] [xbp-60h]
  int32_t v92; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42155E6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&gaugeState);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v13);
    sub_B0D8A4(&EventInfoPointGaugeControl_TypeInfo, v14);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___, v15);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v16);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v20);
    sub_B0D8A4(&Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__, v21);
    sub_B0D8A4(&EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v23);
    byte_42155E6 = 1;
  }
  v92 = 0;
  v24 = sub_B0D974(
          EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo,
          *(_QWORD *)&gaugeState,
          *(_QWORD *)&effectState);
  EventInfoPointGaugeControl___c__DisplayClass27_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass27_0_o *)v24,
    0LL);
  if ( !v24 )
LABEL_69:
    sub_B0D97C(Component_UIWidget);
  *(_QWORD *)(v24 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v24 + 32) = callback;
  v32 = (__int64 *)(v24 + 32);
  *(_DWORD *)(v24 + 24) = basePoint;
  *(_DWORD *)(v24 + 28) = addPoint;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 32), (System_Int32_array **)callback, v33, v34, v35, v36, v37, v38);
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
    Component_UIWidget = *v32;
    if ( !*v32 )
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
  EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(this, v39);
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
    v48 = (System_Int32_array **)sub_B0D8BC(UnityEngine_GameObject___TypeInfo, *(unsigned int *)(v44 + 24));
    *p_eventPointGaugeEffectPrefabList = (struct UnityEngine_GameObject_array *)v48;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.eventPointGaugeEffectPrefabList,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  v55 = *(_QWORD *)(v44 + 24);
  if ( (int)v55 >= 1 )
  {
    v88 = (BattleServantConfConponent_o *)(v24 + 40);
    v91 = (int)v55;
    v56 = 0LL;
    v57 = 8LL;
    do
    {
      v58 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v45, v46);
      System_Text_StringBuilder___ctor(v58, 0LL);
      if ( v56 >= *(unsigned int *)(v44 + 24) )
      {
LABEL_70:
        v86 = sub_B0D9A8(Component_UIWidget);
        sub_B0D948(v86, 0LL);
      }
      if ( !v58 )
        goto LABEL_69;
      System_Text_StringBuilder__Append_42155400(v58, *(System_String_o **)(v44 + v57 * 4), 0LL);
      if ( v57 == 8 )
      {
        if ( !isBattleMode )
          goto LABEL_35;
        v60 = EventInfoPointGaugeControl_TypeInfo;
        if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v60 = EventInfoPointGaugeControl_TypeInfo;
        }
        BATTLE_MODE_SUFFIX = v60->static_fields->BATTLE_MODE_SUFFIX;
      }
      else
      {
        if ( v57 != 10 )
          goto LABEL_35;
        System_Text_StringBuilder__Append_42155400(v58, (System_String_o *)StringLiteral_15952/*"_"*/, 0LL);
        v92 = gaugeState;
        BATTLE_MODE_SUFFIX = System_Int32__ToString((int32_t)&v92, 0LL);
      }
      System_Text_StringBuilder__Append_42155400(v58, BATTLE_MODE_SUFFIX, 0LL);
LABEL_35:
      eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
      Component_UIWidget = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v58->klass->vtable._3_ToString.method)(
                             v58,
                             v58->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !eventPointGaugeEffectAssetData )
        goto LABEL_69;
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 eventPointGaugeEffectAssetData,
                                                                 (System_String_o *)Component_UIWidget,
                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_UIWidget = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      if ( (Component_UIWidget & 1) != 0 )
      {
        if ( v56 >= *(unsigned int *)(v44 + 24) )
          goto LABEL_70;
        Component_UIWidget = (__int64)this->fields.eventPointGaugeEffectAssetData;
        if ( !Component_UIWidget )
          goto LABEL_69;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   (AssetData_o *)Component_UIWidget,
                                                                   *(System_String_o **)(v44 + v57 * 4),
                                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
      v63 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      Component_UIWidget = UnityEngine_Object__op_Equality(v63, 0LL, 0LL);
      if ( (Component_UIWidget & 1) != 0 )
        goto LABEL_66;
      v70 = (unsigned int *)*p_eventPointGaugeEffectPrefabList;
      if ( !*p_eventPointGaugeEffectPrefabList )
        goto LABEL_69;
      if ( v63 )
      {
        Component_UIWidget = sub_B0D964(v63, *(_QWORD *)(*(_QWORD *)v70 + 64LL));
        if ( !Component_UIWidget )
        {
          v87 = sub_B0D99C(0LL);
          sub_B0D948(v87, 0LL);
        }
      }
      if ( v56 >= v70[6] )
        goto LABEL_70;
      *(_QWORD *)&v70[v57] = v63;
      sub_B0D840((BattleServantConfConponent_o *)&v70[v57], (System_Int32_array **)v63, v64, v65, v66, v67, v68, v69);
      GameObjectExtensions__SafeSetParent_31184716(
        (UnityEngine_GameObject_o *)v63,
        this->fields.eventPointGaugeEffectParent,
        0LL);
      Component_UIWidget = (__int64)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                      (UnityEngine_GameObject_o *)v63,
                                      (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
      v76 = Component_UIWidget;
      if ( v57 == 8 )
      {
        if ( !Component_UIWidget )
          goto LABEL_69;
        *(_QWORD *)(Component_UIWidget + 24) = 0LL;
        v84 = (BattleServantConfConponent_o *)(Component_UIWidget + 24);
        v85 = 0LL;
LABEL_63:
        sub_B0D840(v84, v85, v46, v71, v72, v73, v74, v75);
        goto LABEL_64;
      }
      if ( v57 == 10 )
      {
        klass = (System_Action_o *)v88->klass;
        if ( !v88->klass )
        {
          klass = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
          System_Action___ctor(
            klass,
            (Il2CppObject *)v24,
            Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__,
            0LL);
          *(_QWORD *)(v24 + 40) = klass;
          sub_B0D840(v88, (System_Int32_array **)klass, v78, v79, v80, v81, v82, v83);
        }
        if ( !v76 )
          goto LABEL_69;
        *(_QWORD *)(v76 + 24) = klass;
        v84 = (BattleServantConfConponent_o *)(v76 + 24);
        v85 = (System_Int32_array **)klass;
        goto LABEL_63;
      }
LABEL_64:
      ++v56;
      v57 += 2LL;
    }
    while ( (__int64)v56 < v91 );
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  AssetData_o **v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1
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
  __int64 v46; // x1
  __int64 v47; // x2
  System_Action_o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  System_Action_o *v51; // x22

  if ( (byte_42155E5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, parent);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v13);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___, v14);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__, v17);
    sub_B0D8A4(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__, v18);
    sub_B0D8A4(&EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo, v19);
    byte_42155E5 = 1;
  }
  v20 = sub_B0D974(EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo, parent, name);
  EventInfoPointGaugeControl___c__DisplayClass26_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass26_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_20;
  *(_QWORD *)(v20 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v20 + 32) = callback;
  v28 = (AssetData_o **)(v20 + 32);
  *(_DWORD *)(v20 + 24) = afterGauge;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)callback, v29, v30, v31, v32, v33, v34);
  if ( !this->fields.eventPointGaugeEffectAssetData || !beforeGauge || *(_DWORD *)(v20 + 24) <= beforeGauge )
    goto LABEL_16;
  EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(this, v35);
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( !eventPointGaugeEffectAssetData )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventPointGaugeEffectAssetData,
                                                             name,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.eventPointGaugeChangeEffectPrefab = v37;
  p_eventPointGaugeChangeEffectPrefab = &this->fields.eventPointGaugeChangeEffectPrefab;
  sub_B0D840(
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
    eventPointGaugeEffectAssetData = *v28;
    if ( *v28 )
    {
      System_Action__Invoke((System_Action_o *)eventPointGaugeEffectAssetData, 0LL);
      return;
    }
LABEL_20:
    sub_B0D97C(eventPointGaugeEffectAssetData);
  }
  GameObjectExtensions__SafeSetParent_31184716(*p_eventPointGaugeChangeEffectPrefab, parent, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         *p_eventPointGaugeChangeEffectPrefab,
                         (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
  v48 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v46, v47);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v20,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
    0LL);
  v51 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v49, v50);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v20,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
    0LL);
  if ( !Component_UIWidget )
    goto LABEL_20;
  EventPointGaugeChangeEffectAction__Setup((EventPointGaugeChangeEffectAction_o *)Component_UIWidget, v48, v51, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  TerminalPramsManager_c *v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  EventInfoPointGaugeControl_o *v29; // x0
  int32_t v30; // w22
  int32_t EventPointGaugeState; // w0
  __int64 v32; // x1
  __int64 v33; // x2
  int32_t v34; // w21
  UnityEngine_GameObject_o *eventPointGaugeEffectParent; // x23
  EventInfoPointGaugeControl_c *v36; // x0
  bool v37; // zf
  System_String_o *EVENT_POINT_GAUGE_EFFECT_CHANGE; // x24
  System_Action_o *v39; // x25
  const MethodInfo *v40; // x6

  if ( (byte_42155E4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&EventInfoPointGaugeControl_TypeInfo, v7);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    sub_B0D8A4(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__, v9);
    sub_B0D8A4(&EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo, v10);
    byte_42155E4 = 1;
  }
  v11 = sub_B0D974(EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo, *(_QWORD *)&eventId, callback);
  EventInfoPointGaugeControl___c__DisplayClass25_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass25_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  *(_QWORD *)(v11 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 40) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD1 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v25);
    byte_4211AD1 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v11 + 20) = v26->static_fields->_BeforeEventActivityPoint_k__BackingField;
  *(_DWORD *)(v11 + 16) = UserEventPointMaster__GetEventActivityPoint(eventId, 0LL);
  if ( !byte_4211AD2 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v27);
    byte_4211AD2 = 1;
  }
  v29 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  }
  v30 = *((_DWORD *)v29[2].monitor + 100);
  EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v29, eventId, v28);
  *(_DWORD *)(v11 + 32) = EventPointGaugeState;
  v34 = EventPointGaugeState;
  eventPointGaugeEffectParent = this->fields.eventPointGaugeEffectParent;
  v37 = EventPointGaugeState == 1;
  v36 = EventInfoPointGaugeControl_TypeInfo;
  v37 = v37 && v30 == 0;
  if ( v37 )
    v30 = 1;
  if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
    v36 = EventInfoPointGaugeControl_TypeInfo;
    v34 = *(_DWORD *)(v11 + 32);
  }
  EVENT_POINT_GAUGE_EFFECT_CHANGE = v36->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE;
  v39 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v11,
    Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__,
    0LL);
  EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
    this,
    eventPointGaugeEffectParent,
    EVENT_POINT_GAUGE_EFFECT_CHANGE,
    v30,
    v34,
    v39,
    v40);
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

  if ( (byte_42155EA & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    byte_42155EA = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29516400(eventInfoAssetData, 0LL);
    this->fields.eventInfoAssetData = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventInfoAssetData, 0LL, v4, v5, v6, v7, v8, v9);
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
    AssetManager__releaseAsset_29516400(v11, 0LL);
    p_eventPointGaugeEffectAssetData->klass = 0LL;
    sub_B0D840(p_eventPointGaugeEffectAssetData, 0LL, v13, v14, v15, v16, v17, v18);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventRoot,
    (System_Int32_array **)root,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  int32_t eventId; // w22
  __int64 v33; // x1
  __int64 v34; // x2
  const MethodInfo *v35; // x5
  const MethodInfo *v36; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v37; // x22
  const MethodInfo *v38; // x3

  v8 = *(_QWORD *)&pos.fields.value.fields.z;
  v9 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_42155DD & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoPointGaugeControl_TypeInfo, eventDetailEntity);
    sub_B0D8A4(&Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__, v14);
    sub_B0D8A4(&EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo, v15);
    sub_B0D8A4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v16);
    byte_42155DD = 1;
  }
  v17 = sub_B0D974(EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo, eventDetailEntity, isActive);
  EventInfoPointGaugeControl___c__DisplayClass18_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass18_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_14;
  *(_QWORD *)(v17 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v17 + 48) = callback;
  *(_BYTE *)(v17 + 24) = isActive;
  *(_QWORD *)(v17 + 28) = v9;
  *(_QWORD *)(v17 + 36) = v8;
  *(float *)(v17 + 44) = subMarginX;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 48), (System_Int32_array **)callback, v25, v26, v27, v28, v29, v30);
  if ( !eventDetailEntity )
LABEL_14:
    sub_B0D97C(v18);
  eventId = eventDetailEntity->fields.eventId;
  if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  }
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v31) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v17 + 24),
        *(System_Nullable_Vector3__o *)(v17 + 28),
        *(float *)(v17 + 44),
        v35);
      EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        this,
        eventDetailEntity->fields.eventId,
        *(System_Action_o **)(v17 + 48),
        v36);
    }
    else
    {
      v37 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B0D974(
                                                              EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                              v33,
                                                              v34);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v37,
        (Il2CppObject *)v17,
        Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__,
        0LL);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v37, eventDetailEntity->fields.eventId, v38);
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
  bool v24; // w21
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
  int BeforeEventActivityPointGauge_k__BackingField; // w21
  const MethodInfo *v37; // x2
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x19
  bool v39; // zf
  int32_t v40; // w1
  const MethodInfo *v41; // x1
  System_Nullable_Vector3__o v42; // 0:x1.16

  v7 = *(_QWORD *)&pos.fields.value.fields.z;
  v8 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_42155DE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v12);
    byte_42155DE = 1;
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
    sub_B0D840(
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
  v24 = isActive;
  UnityEngine_GameObject__SetActive(gameObject, v24, 0LL);
  gameObject = *p_eventPointGaugeObj;
  if ( !*p_eventPointGaugeObj )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(gameObject, v24, 0LL);
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
    if ( !byte_4211AB5 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v27);
      byte_4211AB5 = 1;
    }
    v30 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    }
    *((_DWORD *)v30[2].monitor + 99) = EventActivityPoint;
    EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v30, eventId, v28);
    if ( !byte_4211AB6 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v31);
      byte_4211AB6 = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v33 = TerminalPramsManager_TypeInfo;
    }
    v33->static_fields->_BeforeEventActivityPointGauge_k__BackingField = EventPointGaugeState;
    TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD1 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v25);
    byte_4211AD1 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPoint_k__BackingField = v34->static_fields->_BeforeEventActivityPoint_k__BackingField;
  if ( !byte_4211AD2 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v25);
    v34 = TerminalPramsManager_TypeInfo;
    byte_4211AD2 = 1;
  }
  if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPointGauge_k__BackingField = v34->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
  gameObject = (UnityEngine_GameObject_o *)EventInfoPointGaugeControl__GetEventPointGaugeState(
                                             (EventInfoPointGaugeControl_o *)v34,
                                             eventId,
                                             v26);
  EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
  v39 = (_DWORD)gameObject == 1 && BeforeEventActivityPointGauge_k__BackingField == 0;
  v40 = v39 ? 1 : BeforeEventActivityPointGauge_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
LABEL_49:
    sub_B0D97C(gameObject);
  HIDWORD(EventPointGaugeComponent_k__BackingField->fields.gaugeTweenHeight) = v40;
  EventPointGaugeComponent_k__BackingField->fields.maxPoint = BeforeEventActivityPoint_k__BackingField;
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, v40, v37);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(EventPointGaugeComponent_k__BackingField, v41);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  int32_t eventId; // w21
  __int64 v29; // x1
  __int64 v30; // x2
  const MethodInfo *v31; // x5
  __int64 v32; // x1
  TerminalPramsManager_c *v33; // x0
  TerminalPramsManager_c *v34; // x0
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v36; // x1
  EventInfoPointGaugeControl_assetLoadFinish_o *v37; // x21
  const MethodInfo *v38; // x3
  TerminalPramsManager_c *v39; // x0

  v7 = *(_QWORD *)&pos.fields.value.fields.z;
  v8 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_42155DC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventPointMaster___, eventDetailEntity);
    sub_B0D8A4(&EventInfoPointGaugeControl_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v15);
    sub_B0D8A4(&Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__, v16);
    sub_B0D8A4(&EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo, v17);
    sub_B0D8A4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v18);
    byte_42155DC = 1;
  }
  v19 = sub_B0D974(EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo, eventDetailEntity, isActive);
  EventInfoPointGaugeControl___c__DisplayClass17_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass17_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_57;
  *(_QWORD *)(v19 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
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
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v27) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v19 + 24),
        *(System_Nullable_Vector3__o *)(v19 + 28),
        *(float *)(v19 + 44),
        v31);
    }
    else
    {
      v37 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B0D974(
                                                              EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                              v29,
                                                              v30);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v37,
        (Il2CppObject *)v19,
        Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__,
        0LL);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v37, eventDetailEntity->fields.eventId, v38);
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
    if ( !byte_4211AD1 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v32);
      byte_4211AD1 = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v33 = TerminalPramsManager_TypeInfo;
    }
    if ( v33->static_fields->_BeforeEventActivityPoint_k__BackingField >= 1 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v33);
      if ( !byte_4211AD2 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v32);
        byte_4211AD2 = 1;
      }
      v34 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v34 = TerminalPramsManager_TypeInfo;
      }
      if ( v34->static_fields->_BeforeEventActivityPointGauge_k__BackingField >= 1 )
      {
        if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v34);
        if ( TerminalPramsManager__CheckEventActivityPointSaveData(0LL) )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             Instance,
                                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
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
                if ( !byte_4211AB5 )
                {
                  sub_B0D8A4(&TerminalPramsManager_TypeInfo, v36);
                  byte_4211AB5 = 1;
                }
                v39 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v39 = TerminalPramsManager_TypeInfo;
                }
                v39->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
                if ( !byte_4211AB6 )
                {
                  sub_B0D8A4(&TerminalPramsManager_TypeInfo, v36);
                  v39 = TerminalPramsManager_TypeInfo;
                  byte_4211AB6 = 1;
                }
                if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v39);
                  v39 = TerminalPramsManager_TypeInfo;
                }
                v39->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
                TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
              }
              return;
            }
          }
LABEL_57:
          sub_B0D97C(Instance);
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
  sub_B0D840(
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
    sub_B0D97C(0LL);
  _4__this->fields.eventInfoAssetData = prefabData;
  sub_B0D840(&_4__this->fields.eventInfoAssetData, prefabData);
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
    sub_B0D97C(_4__this);
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
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventInfoPointGaugeControl_assetLoadFinish_o *_9__1; // x22
  EventInfoPointGaugeControl_o *v10; // x21
  __int64 v11; // x9

  if ( (byte_4211B67 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      *(_QWORD *)&eventId);
    sub_B0D8A4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v5);
    byte_4211B67 = 1;
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
  v10 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (struct EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B0D974(
                                                                     EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                                     v7,
                                                                     v8);
    v11 = *(_QWORD *)Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__;
    *(_QWORD *)&_9__1->fields.extra_arg = Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__;
    *(_QWORD *)&_9__1->fields.method_ptr = v11;
    *(_QWORD *)&_9__1->fields.method = this;
    sub_B0D840(&_9__1->fields.method, this);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !v10 )
LABEL_8:
    sub_B0D97C(_4__this);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(v10, _9__1, eventId, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  EventInfoPointGaugeControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  _4__this->fields.eventPointGaugeEffectAssetData = prefabData;
  sub_B0D840(&_4__this->fields.eventPointGaugeEffectAssetData, prefabData);
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
  __int64 v2; // x2
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

  if ( (byte_4211B68 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    sub_B0D8A4(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__, v5);
    byte_4211B68 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AE8 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211AE8 = 1;
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
    if ( !byte_4211AE8 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
      byte_4211AE8 = 1;
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
    v18 = this->fields.beforePoint;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B0D840(&this->fields.__9__1, _9__1);
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
        0LL);
      return;
    }
LABEL_40:
    sub_B0D97C(EventPointGaugeComponent_k__BackingField);
  }
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_40;
  EventPointGaugeComponent_k__BackingField = (TerminalPramsManager_c *)v7->fields._EventPointGaugeComponent_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
    goto LABEL_40;
  EventInfoPointGaugeComponent__SetGaugeBarHeightByPoint(
    (EventInfoPointGaugeComponent_o *)EventPointGaugeComponent_k__BackingField,
    this->fields.afterPoint,
    0LL);
  v9 = this->fields.afterPoint;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AB5 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    byte_4211AB5 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_BeforeEventActivityPoint_k__BackingField = v9;
  v11 = this->fields.afterGauge;
  if ( !byte_4211AB6 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4211AB6 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
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

  if ( (byte_4211B69 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211B69 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v3->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  if ( !byte_4211438 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4211438 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = EVENT_POINT_EFFECT_STATE_NONE;
  afterPoint = this->fields.afterPoint;
  if ( !byte_4211AB5 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4211AB5 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = afterPoint;
  afterGauge = this->fields.afterGauge;
  if ( !byte_4211AB6 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4211AB6 = 1;
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4211B6A & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&eventId);
    byte_4211B6A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall EventInfoPointGaugeControl_assetLoadFinish__EndInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  EventInfoPointGaugeControl_assetLoadFinish_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  EventInfoPointGaugeControl_assetLoadFinish_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
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
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&eventId, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)eventId, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, (unsigned int)eventId, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)eventId, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)eventId,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)eventId, v21);
    goto LABEL_37;
  }
}