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

  if ( (byte_40FA152 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoPointGaugeControl_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16072/*"_battle"*/, v8);
    sub_B16FFC(&StringLiteral_16703/*"bit_gauge_change"*/, v9);
    byte_40FA152 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoPointGaugeControl_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16703/*"bit_gauge_change"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16703/*"bit_gauge_change"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventInfoPointGaugeControl_TypeInfo;
  v13 = EventInfoPointGaugeControl_TypeInfo->static_fields;
  *(_QWORD *)&v13->EVENT_POINT_GAUGE_POSITION.fields.x = 0xC3B98000C1F80000LL;
  v13->EVENT_POINT_GAUGE_POSITION.fields.z = 0.0;
  v14 = v12->static_fields;
  v15 = (System_Int32_array **)StringLiteral_16072/*"_battle"*/;
  v14->BATTLE_MODE_SUFFIX = (struct System_String_o *)StringLiteral_16072/*"_battle"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v14->BATTLE_MODE_SUFFIX, v15, v16, v17, v18, v19, v20, v21);
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
  EventInfoPointGaugeComponent_o **p_EventPointGaugeComponent_k__BackingField; // x20
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
  if ( (byte_40FA148 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, *(_QWORD *)&pos.fields.value.fields.x);
    sub_B16FFC(&EventInfoPointGaugeControl_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___, v9);
    sub_B16FFC(&Method_System_Nullable_Vector3__GetValueOrDefault__, v10);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_HasValue__, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_6149/*"EventInfoPointGaugePrefab"*/, v14);
    byte_40FA148 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( !eventInfoAssetData )
    goto LABEL_23;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventInfoAssetData,
                                                             (System_String_o *)StringLiteral_6149/*"EventInfoPointGaugePrefab"*/,
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
                                    (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v20 = UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
    result = 0LL;
    if ( !v20 )
    {
      GameObjectExtensions__SafeSetParent_27425996((UnityEngine_GameObject_o *)v19, this->fields.eventRoot, 0LL);
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
                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
        this->fields._EventPointGaugeComponent_k__BackingField = Component_srcLineSprite;
        p_EventPointGaugeComponent_k__BackingField = &this->fields._EventPointGaugeComponent_k__BackingField;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
          (System_Int32_array **)Component_srcLineSprite,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        if ( this->fields._EventPointGaugeComponent_k__BackingField )
        {
          EventInfoPointGaugeComponent__SetupSubMarginX(
            this->fields._EventPointGaugeComponent_k__BackingField,
            subMarginX,
            v34);
          if ( *p_EventPointGaugeComponent_k__BackingField )
          {
            EffectParent = EventInfoPointGaugeComponent__GetGenerateEffectParent(
                             *p_EventPointGaugeComponent_k__BackingField,
                             v35);
            this->fields.eventPointGaugeEffectParent = EffectParent;
            sub_B16F98(
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
      sub_B170D4();
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

  if ( (byte_40FA150 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA150 = 1;
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
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_eventPointGaugeObj->klass = 0LL;
    sub_B16F98(p_eventPointGaugeObj, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40FA14E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA14E = 1;
  }
  eventPointGaugeChangeEffectPrefab = this->fields.eventPointGaugeChangeEffectPrefab;
  p_eventPointGaugeChangeEffectPrefab = (BattleServantConfConponent_o *)&this->fields.eventPointGaugeChangeEffectPrefab;
  v4 = (UnityEngine_Object_o *)eventPointGaugeChangeEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(v4, 0LL);
  p_eventPointGaugeChangeEffectPrefab->klass = 0LL;
  sub_B16F98(p_eventPointGaugeChangeEffectPrefab, 0LL, v6, v7, v8, v9, v10, v11);
}


void __fastcall EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  EventInfoPointGaugeControl_o *v3; // x19
  struct UnityEngine_GameObject_array *eventPointGaugeEffectPrefabList; // x8
  __int64 v5; // x9
  unsigned __int64 v6; // x21
  signed __int64 v7; // x22
  __int64 v8; // x23
  UnityEngine_Object_o *v9; // x20
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UnityEngine_GameObject_array *v15; // x8

  v3 = this;
  if ( (byte_40FA14F & 1) == 0 )
  {
    this = (EventInfoPointGaugeControl_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA14F = 1;
  }
  eventPointGaugeEffectPrefabList = v3->fields.eventPointGaugeEffectPrefabList;
  if ( eventPointGaugeEffectPrefabList )
  {
    v5 = *(_QWORD *)&eventPointGaugeEffectPrefabList->max_length;
    if ( (int)v5 >= 1 )
    {
      v6 = 0LL;
      v7 = (int)v5;
      v8 = 32LL;
      while ( 1 )
      {
        if ( v6 >= eventPointGaugeEffectPrefabList->max_length )
        {
LABEL_16:
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v9 = (UnityEngine_Object_o *)eventPointGaugeEffectPrefabList->m_Items[v6];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v9, 0LL);
        v15 = v3->fields.eventPointGaugeEffectPrefabList;
        if ( !v15 )
LABEL_14:
          sub_B170D4();
        if ( v6 >= v15->max_length )
          goto LABEL_16;
        *(Il2CppClass **)((char *)&v15->obj.klass + v8) = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)((char *)v15 + v8), 0LL, v2, v10, v11, v12, v13, v14);
        if ( (__int64)++v6 >= v7 )
          break;
        eventPointGaugeEffectPrefabList = v3->fields.eventPointGaugeEffectPrefabList;
        v8 += 8LL;
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
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestGroupMaster_o *v12; // x20
  System_Collections_Generic_List_QuestGroupEntity__o *EntityListByGroupId; // x0
  int32_t v14; // w19
  Il2CppObject *current; // x22
  int32_t GroupId; // w21
  int32_t klass; // w22
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FA147 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA147 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (v12 = MasterData_WarQuestSelectionMaster,
        (EntityListByGroupId = QuestGroupMaster__GetEntityListByGroupId(
                                 MasterData_WarQuestSelectionMaster,
                                 eventId,
                                 1,
                                 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListByGroupId,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
  v14 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__) )
  {
    current = v19.fields.current;
    if ( !v19.fields.current )
      sub_B170D4();
    GroupId = QuestGroupMaster__GetGroupId(v12, (int32_t)v19.fields.current[1].klass, 12, 0LL);
    klass = (int32_t)current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !((GroupId < 1) | !CondType__IsQuestClear_25438860(klass, -1, 0, 0LL)) )
      v14 = GroupId;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
  return v14;
}


bool __fastcall EventInfoPointGaugeControl__IsEventPointGaugeOpen(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA146 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA146 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, eventId, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__LoadEventInfoAssetData(
        EventInfoPointGaugeControl_o *this,
        EventInfoPointGaugeControl_assetLoadFinish_o *callBack,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
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
  __int64 v28; // x3
  __int64 v29; // x4
  AssetData_o *eventInfoAssetData; // x0
  AssetLoader_LoadEndDataHandler_o *v31; // x19

  if ( (byte_40FA142 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, callBack);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__, v9);
    sub_B16FFC(&EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_6131/*"Event/Info"*/, v11);
    byte_40FA142 = 1;
  }
  v12 = sub_B170CC(EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo, callBack, *(_QWORD *)&eventId, method, v4);
  EventInfoPointGaugeControl___c__DisplayClass16_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass16_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = callBack;
  v19 = (EventInfoPointGaugeControl_assetLoadFinish_o **)(v12 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)callBack, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v12 + 32) = eventId;
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData && !AssetData__get_IsEmpty(eventInfoAssetData, 0LL) )
  {
    if ( *v19 )
      EventInfoPointGaugeControl_assetLoadFinish__Invoke(*v19, *(_DWORD *)(v12 + 32), 0LL);
  }
  else
  {
    v31 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27, v28, v29);
    AssetLoader_LoadEndDataHandler___ctor(
      v31,
      (Il2CppObject *)v12,
      Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6131/*"Event/Info"*/, v31, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__LoadEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
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
  __int64 v31; // x3
  __int64 v32; // x4
  AssetLoader_LoadEndDataHandler_o *v33; // x21

  if ( (byte_40FA149 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, callbackEndFunc);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__, v9);
    sub_B16FFC(&EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_5822/*"Effect/Event/{0}"*/, v11);
    byte_40FA149 = 1;
  }
  v12 = sub_B170CC(
          EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo,
          callbackEndFunc,
          *(_QWORD *)&eventId,
          method,
          v4);
  EventInfoPointGaugeControl___c__DisplayClass23_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass23_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = callbackEndFunc;
  v19 = (EventInfoPointGaugeControl_assetLoadFinish_o **)(v12 + 24);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)callbackEndFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  *(_DWORD *)(v12 + 32) = eventId;
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData && !AssetData__get_IsEmpty(eventPointGaugeEffectAssetData, 0LL) )
  {
    if ( *v19 )
      EventInfoPointGaugeControl_assetLoadFinish__Invoke(*v19, *(_DWORD *)(v12 + 32), 0LL);
  }
  else
  {
    v27 = (Il2CppObject *)System_Int32__ToString((int)v12 + 32, 0LL);
    v28 = System_String__Format((System_String_o *)StringLiteral_5822/*"Effect/Event/{0}"*/, v27, 0LL);
    v33 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30, v31, v32);
    AssetLoader_LoadEndDataHandler___ctor(
      v33,
      (Il2CppObject *)v12,
      Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v28, v33, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__LoadEventPointGaugeEffect_25349752(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callbackEndFunc,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  EventInfoPointGaugeControl_assetLoadFinish_o *v21; // x21
  const MethodInfo *v22; // x3

  if ( (byte_40FA14A & 1) == 0 )
  {
    sub_B16FFC(
      &Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
      *(_QWORD *)&eventId);
    sub_B16FFC(&EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo, v8);
    sub_B16FFC(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v9);
    byte_40FA14A = 1;
  }
  v10 = sub_B170CC(
          EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo,
          *(_QWORD *)&eventId,
          callbackEndFunc,
          method,
          v4);
  EventInfoPointGaugeControl___c__DisplayClass24_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass24_0_o *)v10,
    0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 16) = callbackEndFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v10 + 16),
    (System_Int32_array **)callbackEndFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B170CC(
                                                          EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                          v17,
                                                          v18,
                                                          v19,
                                                          v20);
  EventInfoPointGaugeControl_assetLoadFinish___ctor(
    v21,
    (Il2CppObject *)v10,
    Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
    0LL);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(this, v21, eventId, v22);
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Action_o **v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1
  TerminalPramsManager_c *v39; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8
  __int64 *p_subEffectNameList; // x8
  struct EventInfoPointGaugeComponent_o *v43; // x8
  __int64 v44; // x28
  __int64 v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  struct UnityEngine_GameObject_array **p_eventPointGaugeEffectPrefabList; // x24
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x8
  unsigned __int64 v58; // x20
  __int64 v59; // x19
  System_Text_StringBuilder_o *v60; // x26
  __int64 v61; // x0
  __int64 v62; // x1
  System_String_array **v63; // x2
  System_String_o *BATTLE_MODE_SUFFIX; // x1
  EventInfoPointGaugeControl_c *v65; // x0
  AssetData_o *eventPointGaugeEffectAssetData; // x27
  System_String_o *v67; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x26
  AssetData_o *v69; // x0
  UnityEngine_Object_o *v70; // x26
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  unsigned int *v76; // x27
  UIWidget_o *Component_UIWidget; // x0
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UIWidget_o *v81; // x26
  System_Action_o *klass; // x27
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  BattleServantConfConponent_o *p_leftAnchor; // x0
  System_Int32_array **v90; // x1
  BattleServantConfConponent_o *v91; // [xsp+0h] [xbp-70h]
  signed __int64 v94; // [xsp+10h] [xbp-60h]
  int32_t v95; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40FA14D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&gaugeState);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v13);
    sub_B16FFC(&EventInfoPointGaugeControl_TypeInfo, v14);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___, v15);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v16);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v20);
    sub_B16FFC(&Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__, v21);
    sub_B16FFC(&EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v23);
    byte_40FA14D = 1;
  }
  v95 = 0;
  v24 = sub_B170CC(
          EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo,
          *(_QWORD *)&gaugeState,
          *(_QWORD *)&effectState,
          *(_QWORD *)&basePoint,
          *(_QWORD *)&addPoint);
  EventInfoPointGaugeControl___c__DisplayClass27_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass27_0_o *)v24,
    0LL);
  if ( !v24 )
LABEL_69:
    sub_B170D4();
  *(_QWORD *)(v24 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v24 + 32) = callback;
  v31 = (System_Action_o **)(v24 + 32);
  *(_DWORD *)(v24 + 24) = basePoint;
  *(_DWORD *)(v24 + 28) = addPoint;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 32), (System_Int32_array **)callback, v32, v33, v34, v35, v36, v37);
  if ( !this->fields.eventPointGaugeEffectAssetData )
    goto LABEL_66;
  v39 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v39 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v39->static_fields;
  if ( static_fields->EVENT_POINT_EFFECT_STATE_ADD == effectState )
  {
    EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
    if ( !EventPointGaugeComponent_k__BackingField )
      goto LABEL_69;
    p_subEffectNameList = (__int64 *)&EventPointGaugeComponent_k__BackingField->fields.subEffectNameList;
    goto LABEL_17;
  }
  if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v39);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
  }
  if ( static_fields->EVENT_POINT_EFFECT_STATE_SUB != effectState )
  {
LABEL_66:
    if ( !*v31 )
      goto LABEL_69;
    System_Action__Invoke(*v31, 0LL);
    return;
  }
  v43 = this->fields._EventPointGaugeComponent_k__BackingField;
  if ( !v43 )
    goto LABEL_69;
  p_subEffectNameList = (__int64 *)&v43->fields.rootFSOffset;
LABEL_17:
  v44 = *p_subEffectNameList;
  EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(this, v38);
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
    v50 = (System_Int32_array **)sub_B17014(UnityEngine_GameObject___TypeInfo, *(unsigned int *)(v44 + 24), v46);
    *p_eventPointGaugeEffectPrefabList = (struct UnityEngine_GameObject_array *)v50;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventPointGaugeEffectPrefabList,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  v57 = *(_QWORD *)(v44 + 24);
  if ( (int)v57 >= 1 )
  {
    v91 = (BattleServantConfConponent_o *)(v24 + 40);
    v94 = (int)v57;
    v58 = 0LL;
    v59 = 8LL;
    do
    {
      v60 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v45, v46, v47, v48);
      System_Text_StringBuilder___ctor(v60, 0LL);
      if ( v58 >= *(unsigned int *)(v44 + 24) )
      {
LABEL_70:
        sub_B17100(v61, v62, v63);
        sub_B170A0();
      }
      if ( !v60 )
        goto LABEL_69;
      System_Text_StringBuilder__Append_41914240(v60, *(System_String_o **)(v44 + v59 * 4), 0LL);
      if ( v59 == 8 )
      {
        if ( !isBattleMode )
          goto LABEL_35;
        v65 = EventInfoPointGaugeControl_TypeInfo;
        if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v65 = EventInfoPointGaugeControl_TypeInfo;
        }
        BATTLE_MODE_SUFFIX = v65->static_fields->BATTLE_MODE_SUFFIX;
      }
      else
      {
        if ( v59 != 10 )
          goto LABEL_35;
        System_Text_StringBuilder__Append_41914240(v60, (System_String_o *)StringLiteral_15842/*"_"*/, 0LL);
        v95 = gaugeState;
        BATTLE_MODE_SUFFIX = System_Int32__ToString((int32_t)&v95, 0LL);
      }
      System_Text_StringBuilder__Append_41914240(v60, BATTLE_MODE_SUFFIX, 0LL);
LABEL_35:
      eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
      v67 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v60->klass->vtable._3_ToString.method)(
                                 v60,
                                 v60->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !eventPointGaugeEffectAssetData )
        goto LABEL_69;
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 eventPointGaugeEffectAssetData,
                                                                 v67,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v61 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      if ( (v61 & 1) != 0 )
      {
        if ( v58 >= *(unsigned int *)(v44 + 24) )
          goto LABEL_70;
        v69 = this->fields.eventPointGaugeEffectAssetData;
        if ( !v69 )
          goto LABEL_69;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   v69,
                                                                   *(System_String_o **)(v44 + v59 * 4),
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
      v70 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v61 = UnityEngine_Object__op_Equality(v70, 0LL, 0LL);
      if ( (v61 & 1) != 0 )
        goto LABEL_66;
      v76 = (unsigned int *)*p_eventPointGaugeEffectPrefabList;
      if ( !*p_eventPointGaugeEffectPrefabList )
        goto LABEL_69;
      if ( v70 )
      {
        v61 = sub_B170BC(v70, *(_QWORD *)(*(_QWORD *)v76 + 64LL));
        if ( !v61 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v58 >= v76[6] )
        goto LABEL_70;
      *(_QWORD *)&v76[v59] = v70;
      sub_B16F98((BattleServantConfConponent_o *)&v76[v59], (System_Int32_array **)v70, v63, v71, v72, v73, v74, v75);
      GameObjectExtensions__SafeSetParent_27425996(
        (UnityEngine_GameObject_o *)v70,
        this->fields.eventPointGaugeEffectParent,
        0LL);
      Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                             (UnityEngine_GameObject_o *)v70,
                             (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
      v81 = Component_UIWidget;
      if ( v59 == 8 )
      {
        if ( !Component_UIWidget )
          goto LABEL_69;
        Component_UIWidget->fields.leftAnchor = 0LL;
        p_leftAnchor = (BattleServantConfConponent_o *)&Component_UIWidget->fields.leftAnchor;
        v90 = 0LL;
LABEL_63:
        sub_B16F98(p_leftAnchor, v90, v46, v47, v48, v78, v79, v80);
        goto LABEL_64;
      }
      if ( v59 == 10 )
      {
        klass = (System_Action_o *)v91->klass;
        if ( !v91->klass )
        {
          klass = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v45, v46, v47, v48);
          System_Action___ctor(
            klass,
            (Il2CppObject *)v24,
            Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__,
            0LL);
          *(_QWORD *)(v24 + 40) = klass;
          sub_B16F98(v91, (System_Int32_array **)klass, v83, v84, v85, v86, v87, v88);
        }
        if ( !v81 )
          goto LABEL_69;
        v81->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)klass;
        p_leftAnchor = (BattleServantConfConponent_o *)&v81->fields.leftAnchor;
        v90 = (System_Int32_array **)klass;
        goto LABEL_63;
      }
LABEL_64:
      ++v58;
      v59 += 2LL;
    }
    while ( (__int64)v58 < v94 );
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o **v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x1
  AssetData_o *eventPointGaugeEffectAssetData; // x0
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
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Action_o *v55; // x22

  if ( (byte_40FA14C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, parent);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v13);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___, v14);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__, v17);
    sub_B16FFC(&Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__, v18);
    sub_B16FFC(&EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo, v19);
    byte_40FA14C = 1;
  }
  v20 = sub_B170CC(
          EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo,
          parent,
          name,
          *(_QWORD *)&beforeGauge,
          *(_QWORD *)&afterGauge);
  EventInfoPointGaugeControl___c__DisplayClass26_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass26_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_20;
  *(_QWORD *)(v20 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v20 + 32) = callback;
  v27 = (System_Action_o **)(v20 + 32);
  *(_DWORD *)(v20 + 24) = afterGauge;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  if ( !this->fields.eventPointGaugeEffectAssetData || !beforeGauge || *(_DWORD *)(v20 + 24) <= beforeGauge )
    goto LABEL_23;
  EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(this, v34);
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( !eventPointGaugeEffectAssetData )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventPointGaugeEffectAssetData,
                                                             name,
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    goto LABEL_23;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v37 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                             (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.eventPointGaugeChangeEffectPrefab = v37;
  p_eventPointGaugeChangeEffectPrefab = &this->fields.eventPointGaugeChangeEffectPrefab;
  sub_B16F98(
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
LABEL_23:
    if ( *v27 )
    {
      System_Action__Invoke(*v27, 0LL);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
  GameObjectExtensions__SafeSetParent_27425996(*p_eventPointGaugeChangeEffectPrefab, parent, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         *p_eventPointGaugeChangeEffectPrefab,
                         (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
  v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v20,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
    0LL);
  v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v51, v52, v53, v54);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v20,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
    0LL);
  if ( !Component_UIWidget )
    goto LABEL_20;
  EventPointGaugeChangeEffectAction__Setup((EventPointGaugeChangeEffectAction_o *)Component_UIWidget, v50, v55, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
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
  __int64 v34; // x3
  __int64 v35; // x4
  int32_t v36; // w21
  UnityEngine_GameObject_o *eventPointGaugeEffectParent; // x23
  EventInfoPointGaugeControl_c *v38; // x0
  bool v39; // zf
  System_String_o *EVENT_POINT_GAUGE_EFFECT_CHANGE; // x24
  System_Action_o *v41; // x25
  const MethodInfo *v42; // x6

  if ( (byte_40FA14B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&EventInfoPointGaugeControl_TypeInfo, v8);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    sub_B16FFC(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__, v10);
    sub_B16FFC(&EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo, v11);
    byte_40FA14B = 1;
  }
  v12 = sub_B170CC(EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo, *(_QWORD *)&eventId, callback, method, v4);
  EventInfoPointGaugeControl___c__DisplayClass25_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass25_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 40), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E35 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v25);
    byte_40F6E35 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v12 + 20) = v26->static_fields->_BeforeEventActivityPoint_k__BackingField;
  *(_DWORD *)(v12 + 16) = UserEventPointMaster__GetEventActivityPoint(eventId, 0LL);
  if ( !byte_40F6E36 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v27);
    byte_40F6E36 = 1;
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
  *(_DWORD *)(v12 + 32) = EventPointGaugeState;
  v36 = EventPointGaugeState;
  eventPointGaugeEffectParent = this->fields.eventPointGaugeEffectParent;
  v39 = EventPointGaugeState == 1;
  v38 = EventInfoPointGaugeControl_TypeInfo;
  v39 = v39 && v30 == 0;
  if ( v39 )
    v30 = 1;
  if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
    v38 = EventInfoPointGaugeControl_TypeInfo;
    v36 = *(_DWORD *)(v12 + 32);
  }
  EVENT_POINT_GAUGE_EFFECT_CHANGE = v38->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE;
  v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v12,
    Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__,
    0LL);
  EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
    this,
    eventPointGaugeEffectParent,
    EVENT_POINT_GAUGE_EFFECT_CHANGE,
    v30,
    v36,
    v41,
    v42);
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

  if ( (byte_40FA151 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40FA151 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29947376(eventInfoAssetData, 0LL);
    this->fields.eventInfoAssetData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventInfoAssetData, 0LL, v4, v5, v6, v7, v8, v9);
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
    AssetManager__releaseAsset_29947376(v11, 0LL);
    p_eventPointGaugeEffectAssetData->klass = 0LL;
    sub_B16F98(p_eventPointGaugeEffectAssetData, 0LL, v13, v14, v15, v16, v17, v18);
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
  sub_B16F98(
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  int32_t eventId; // w22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  const MethodInfo *v36; // x5
  const MethodInfo *v37; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v38; // x22
  const MethodInfo *v39; // x3

  v8 = *(_QWORD *)&pos.fields.value.fields.z;
  v9 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_40FA144 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoPointGaugeControl_TypeInfo, eventDetailEntity);
    sub_B16FFC(&Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__, v14);
    sub_B16FFC(&EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo, v15);
    sub_B16FFC(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v16);
    byte_40FA144 = 1;
  }
  v17 = sub_B170CC(
          EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo,
          eventDetailEntity,
          isActive,
          callback,
          *(_QWORD *)&pos.fields.value.fields.x);
  EventInfoPointGaugeControl___c__DisplayClass18_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass18_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_14;
  *(_QWORD *)(v17 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v17 + 48) = callback;
  *(_BYTE *)(v17 + 24) = isActive;
  *(_QWORD *)(v17 + 28) = v9;
  *(_QWORD *)(v17 + 36) = v8;
  *(float *)(v17 + 44) = subMarginX;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 48), (System_Int32_array **)callback, v24, v25, v26, v27, v28, v29);
  if ( !eventDetailEntity )
LABEL_14:
    sub_B170D4();
  eventId = eventDetailEntity->fields.eventId;
  if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  }
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v30) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v17 + 24),
        *(System_Nullable_Vector3__o *)(v17 + 28),
        *(float *)(v17 + 44),
        v36);
      EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        this,
        eventDetailEntity->fields.eventId,
        *(System_Action_o **)(v17 + 48),
        v37);
    }
    else
    {
      v38 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B170CC(
                                                              EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                              v32,
                                                              v33,
                                                              v34,
                                                              v35);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v38,
        (Il2CppObject *)v17,
        Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__,
        0LL);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v38, eventDetailEntity->fields.eventId, v39);
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
  UnityEngine_GameObject_o **p_eventPointGaugeObj; // x22
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
  int32_t v37; // w0
  const MethodInfo *v38; // x2
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x19
  bool v40; // zf
  int32_t v41; // w1
  const MethodInfo *v42; // x1
  System_Nullable_Vector3__o v43; // 0:x1.16

  v7 = *(_QWORD *)&pos.fields.value.fields.z;
  v8 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_40FA145 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    byte_40FA145 = 1;
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
    *(_QWORD *)&v43.fields.value.fields.x = v8;
    *(_QWORD *)&v43.fields.value.fields.z = v7;
    EventPointGaugePrefab = EventInfoPointGaugeControl__CreateEventPointGaugePrefab(this, v43, subMarginX, v15);
    this->fields.eventPointGaugeObj = EventPointGaugePrefab;
    sub_B16F98(
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
  if ( !*p_eventPointGaugeObj )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(*p_eventPointGaugeObj, v24, 0LL);
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
    if ( !byte_40F6E16 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v27);
      byte_40F6E16 = 1;
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
    if ( !byte_40F6E17 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v31);
      byte_40F6E17 = 1;
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
  if ( !byte_40F6E35 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v25);
    byte_40F6E35 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPoint_k__BackingField = v34->static_fields->_BeforeEventActivityPoint_k__BackingField;
  if ( !byte_40F6E36 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v25);
    v34 = TerminalPramsManager_TypeInfo;
    byte_40F6E36 = 1;
  }
  if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPointGauge_k__BackingField = v34->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
  v37 = EventInfoPointGaugeControl__GetEventPointGaugeState((EventInfoPointGaugeControl_o *)v34, eventId, v26);
  EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
  v40 = v37 == 1 && BeforeEventActivityPointGauge_k__BackingField == 0;
  v41 = v40 ? 1 : BeforeEventActivityPointGauge_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
LABEL_49:
    sub_B170D4();
  HIDWORD(EventPointGaugeComponent_k__BackingField->fields.gaugeTweenHeight) = v41;
  EventPointGaugeComponent_k__BackingField->fields.maxPoint = BeforeEventActivityPoint_k__BackingField;
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, v41, v38);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(EventPointGaugeComponent_k__BackingField, v42);
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  int32_t eventId; // w21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x5
  __int64 v33; // x1
  TerminalPramsManager_c *v34; // x0
  TerminalPramsManager_c *v35; // x0
  WebViewManager_o *Instance; // x0
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v39; // x1
  EventInfoPointGaugeControl_assetLoadFinish_o *v40; // x21
  const MethodInfo *v41; // x3
  TerminalPramsManager_c *v42; // x0

  v7 = *(_QWORD *)&pos.fields.value.fields.z;
  v8 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_40FA143 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, eventDetailEntity);
    sub_B16FFC(&EventInfoPointGaugeControl_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
    sub_B16FFC(&Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__, v16);
    sub_B16FFC(&EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo, v17);
    sub_B16FFC(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v18);
    byte_40FA143 = 1;
  }
  v19 = sub_B170CC(
          EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo,
          eventDetailEntity,
          isActive,
          *(_QWORD *)&pos.fields.value.fields.x,
          *(_QWORD *)&pos.fields.value.fields.z);
  EventInfoPointGaugeControl___c__DisplayClass17_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass17_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_57;
  *(_QWORD *)(v19 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
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
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v26) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v19 + 24),
        *(System_Nullable_Vector3__o *)(v19 + 28),
        *(float *)(v19 + 44),
        v32);
    }
    else
    {
      v40 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B170CC(
                                                              EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                              v28,
                                                              v29,
                                                              v30,
                                                              v31);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v40,
        (Il2CppObject *)v19,
        Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__,
        0LL);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v40, eventDetailEntity->fields.eventId, v41);
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
    if ( !byte_40F6E35 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v33);
      byte_40F6E35 = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    if ( v34->static_fields->_BeforeEventActivityPoint_k__BackingField >= 1 )
    {
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v34);
      if ( !byte_40F6E36 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v33);
        byte_40F6E36 = 1;
      }
      v35 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v35 = TerminalPramsManager_TypeInfo;
      }
      if ( v35->static_fields->_BeforeEventActivityPointGauge_k__BackingField >= 1 )
      {
        if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v35);
        if ( TerminalPramsManager__CheckEventActivityPointSaveData(0LL) )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( MasterData_WarQuestSelectionMaster )
            {
              if ( !UserEventPointMaster__GetEntity(
                      MasterData_WarQuestSelectionMaster,
                      UserId,
                      eventDetailEntity->fields.eventId,
                      0,
                      0LL) )
              {
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_40F6E16 )
                {
                  sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
                  byte_40F6E16 = 1;
                }
                v42 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v42 = TerminalPramsManager_TypeInfo;
                }
                v42->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
                if ( !byte_40F6E17 )
                {
                  sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
                  v42 = TerminalPramsManager_TypeInfo;
                  byte_40F6E17 = 1;
                }
                if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v42);
                  v42 = TerminalPramsManager_TypeInfo;
                }
                v42->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
                TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
              }
              return;
            }
          }
LABEL_57:
          sub_B170D4();
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
  sub_B16F98(
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  const MethodInfo *v10; // x2
  EventInfoPointGaugeControl_assetLoadFinish_o *callBack; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  _4__this->fields.eventInfoAssetData = prefabData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.eventInfoAssetData,
    (System_Int32_array **)prefabData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  callBack = this->fields.callBack;
  if ( callBack )
    EventInfoPointGaugeControl_assetLoadFinish__Invoke(callBack, this->fields.eventId, v10);
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
  EventInfoPointGaugeControl_o *v6; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
          _4__this,
          eventId,
          this->fields.isActive,
          this->fields.pos,
          this->fields.subMarginX,
          0LL),
        (v6 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(v6, 0LL, eventId, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  struct EventInfoPointGaugeControl_assetLoadFinish_o *_9__1; // x22
  EventInfoPointGaugeControl_o *v12; // x21
  __int64 v13; // x9
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

  if ( (byte_40F6FD5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      *(_QWORD *)&eventId);
    sub_B16FFC(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v5);
    byte_40F6FD5 = 1;
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
  v12 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (struct EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B170CC(
                                                                     EventInfoPointGaugeControl_assetLoadFinish_TypeInfo,
                                                                     v7,
                                                                     v8,
                                                                     v9,
                                                                     v10);
    v13 = *(_QWORD *)Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__;
    *(_QWORD *)&_9__1->fields.extra_arg = Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__;
    *(_QWORD *)&_9__1->fields.method_ptr = v13;
    *(_QWORD *)&_9__1->fields.method = this;
    sub_B16F98(
      (BattleServantConfConponent_o *)&_9__1->fields.method,
      (System_Int32_array **)this,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v12 )
LABEL_8:
    sub_B170D4();
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(v12, _9__1, eventId, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  EventInfoPointGaugeControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventInfoPointGaugeControl_o *_4__this; // x0
  const MethodInfo *v10; // x2
  EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  _4__this->fields.eventPointGaugeEffectAssetData = prefabData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.eventPointGaugeEffectAssetData,
    (System_Int32_array **)prefabData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  callbackEndFunc = this->fields.callbackEndFunc;
  if ( callbackEndFunc )
    EventInfoPointGaugeControl_assetLoadFinish__Invoke(callbackEndFunc, this->fields.eventId, v10);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  struct EventInfoPointGaugeControl_o *v9; // x8
  EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x0
  __int64 v11; // x1
  int32_t v12; // w21
  TerminalPramsManager_c *v13; // x0
  int32_t v14; // w21
  int32_t afterPoint; // w26
  int32_t beforePoint; // w27
  EventInfoPointGaugeControl_o *_4__this; // x21
  int32_t afterGauge; // w22
  TerminalPramsManager_c *v19; // x0
  int32_t EventActivityPointEffectState_k__BackingField; // w20
  System_Action_o *_9__1; // x24
  int32_t v22; // w23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40F6FD6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    sub_B16FFC(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__, v7);
    byte_40F6FD6 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E54 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6E54 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_EventActivityPointEffectState_k__BackingField != v8->static_fields->EVENT_POINT_EFFECT_STATE_NONE )
  {
    afterPoint = this->fields.afterPoint;
    beforePoint = this->fields.beforePoint;
    _4__this = this->fields.__4__this;
    afterGauge = this->fields.afterGauge;
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_40F6E54 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
      byte_40F6E54 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    EventActivityPointEffectState_k__BackingField = v19->static_fields->_EventActivityPointEffectState_k__BackingField;
    _9__1 = this->fields.__9__1;
    v22 = this->fields.beforePoint;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    if ( _4__this )
    {
      EventInfoPointGaugeControl__PlayEventPointGaugeAddEffect(
        _4__this,
        afterGauge,
        EventActivityPointEffectState_k__BackingField,
        v22,
        afterPoint - beforePoint,
        _9__1,
        0,
        0LL);
      return;
    }
LABEL_40:
    sub_B170D4();
  }
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_40;
  EventPointGaugeComponent_k__BackingField = v9->fields._EventPointGaugeComponent_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
    goto LABEL_40;
  EventInfoPointGaugeComponent__SetGaugeBarHeightByPoint(
    EventPointGaugeComponent_k__BackingField,
    this->fields.afterPoint,
    0LL);
  v12 = this->fields.afterPoint;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E16 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    byte_40F6E16 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_BeforeEventActivityPoint_k__BackingField = v12;
  v14 = this->fields.afterGauge;
  if ( !byte_40F6E17 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6E17 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v14;
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

  if ( (byte_40F6FD7 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6FD7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v3->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  if ( !byte_40F6258 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_40F6258 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = EVENT_POINT_EFFECT_STATE_NONE;
  afterPoint = this->fields.afterPoint;
  if ( !byte_40F6E16 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_40F6E16 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = afterPoint;
  afterGauge = this->fields.afterGauge;
  if ( !byte_40F6E17 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
    byte_40F6E17 = 1;
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F6FD8 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&eventId);
    byte_40F6FD8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall EventInfoPointGaugeControl_assetLoadFinish__EndInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeControl_assetLoadFinish__Invoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  EventInfoPointGaugeControl_assetLoadFinish_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  EventInfoPointGaugeControl_assetLoadFinish_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  EventInfoPointGaugeControl_assetLoadFinish_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (EventInfoPointGaugeControl_assetLoadFinish_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&eventId, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)eventId, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)eventId, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)eventId, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)eventId,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)eventId, v20);
    goto LABEL_37;
  }
}