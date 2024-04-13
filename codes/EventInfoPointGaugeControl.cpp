void __fastcall EventInfoPointGaugeControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  EventInfoPointGaugeControl_c *v16; // x8
  struct EventInfoPointGaugeControl_StaticFields *v17; // x9
  struct EventInfoPointGaugeControl_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E9507 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoPointGaugeControl_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16328/*"_battle"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16973/*"bit_gauge_change"*/, v11, v12, v13);
    byte_42E9507 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoPointGaugeControl_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_16973/*"bit_gauge_change"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16973/*"bit_gauge_change"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = EventInfoPointGaugeControl_TypeInfo;
  v17 = EventInfoPointGaugeControl_TypeInfo->static_fields;
  *(_QWORD *)&v17->EVENT_POINT_GAUGE_POSITION.fields.x = 0xC3B98000C1F80000LL;
  v17->EVENT_POINT_GAUGE_POSITION.fields.z = 0.0;
  v18 = v16->static_fields;
  v19 = (System_Int32_array **)StringLiteral_16328/*"_battle"*/;
  v18->BATTLE_MODE_SUFFIX = (struct System_String_o *)StringLiteral_16328/*"_battle"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v18->BATTLE_MODE_SUFFIX, v19, v20, v21, v22, v23, v24, v25);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  AssetData_o *eventInfoAssetData; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  bool v31; // w8
  UnityEngine_GameObject_o *result; // x0
  UnityEngine_Object_o *v33; // x22
  bool v34; // w8
  float x; // s0
  float y; // s1
  float z; // s2
  EventInfoPointGaugeControl_c *v38; // x0
  struct EventInfoPointGaugeControl_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *Component_srcLineSprite; // x0
  struct EventInfoPointGaugeComponent_o **p_EventPointGaugeComponent_k__BackingField; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct UnityEngine_GameObject_o *EffectParent; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  v5 = *(_QWORD *)&pos.fields.value.fields.z;
  v6 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_42E94FD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_AssetData_GetObject_GameObject____68807504,
      LODWORD(pos.fields.value.fields.x),
      LODWORD(pos.fields.value.fields.z),
      method);
    sub_B5D5C4(&EventInfoPointGaugeControl_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Nullable_Vector3__GetValueOrDefault__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_HasValue__, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_6246/*"EventInfoPointGaugePrefab"*/, v26, v27, v28);
    byte_42E94FD = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( !eventInfoAssetData )
    goto LABEL_23;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventInfoAssetData,
                                                             (System_String_o *)StringLiteral_6246/*"EventInfoPointGaugePrefab"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v31 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v31 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                    (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v34 = UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
    result = 0LL;
    if ( !v34 )
    {
      GameObjectExtensions__SafeSetParent_32436524((UnityEngine_GameObject_o *)v33, this->fields.eventRoot, 0LL);
      if ( (v5 & 0xFF00000000LL) != 0 )
      {
        y = *((float *)&v6 + 1);
        x = *(float *)&v6;
        z = *(float *)&v5;
      }
      else
      {
        v38 = EventInfoPointGaugeControl_TypeInfo;
        if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v38 = EventInfoPointGaugeControl_TypeInfo;
        }
        static_fields = v38->static_fields;
        x = static_fields->EVENT_POINT_GAUGE_POSITION.fields.x;
        y = static_fields->EVENT_POINT_GAUGE_POSITION.fields.y;
        z = static_fields->EVENT_POINT_GAUGE_POSITION.fields.z;
      }
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v33, *(UnityEngine_Vector3_o *)&x, 0LL);
      if ( v33 )
      {
        Component_srcLineSprite = (struct EventInfoPointGaugeComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)v33,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventInfoPointGaugeComponent___);
        this->fields._EventPointGaugeComponent_k__BackingField = Component_srcLineSprite;
        p_EventPointGaugeComponent_k__BackingField = &this->fields._EventPointGaugeComponent_k__BackingField;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields._EventPointGaugeComponent_k__BackingField,
          (System_Int32_array **)Component_srcLineSprite,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
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
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.eventPointGaugeEffectParent,
              (System_Int32_array **)EffectParent,
              v49,
              v50,
              v51,
              v52,
              v53,
              v54);
            return (UnityEngine_GameObject_o *)v33;
          }
        }
      }
LABEL_23:
      sub_B5D69C(eventInfoAssetData, *(_QWORD *)&pos.fields.value.fields.x);
    }
  }
  return result;
}


void __fastcall EventInfoPointGaugeControl__DestroyEventInfo(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_eventPointGaugeObj; // x19
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeObj; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9505 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9505 = 1;
  }
  eventPointGaugeObj = this->fields.eventPointGaugeObj;
  p_eventPointGaugeObj = (BattleServantConfConponent_o *)&this->fields.eventPointGaugeObj;
  v6 = (UnityEngine_Object_o *)eventPointGaugeObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_eventPointGaugeObj->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(klass, 0LL);
    p_eventPointGaugeObj->klass = 0LL;
    sub_B5D560(p_eventPointGaugeObj, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_eventPointGaugeChangeEffectPrefab; // x19
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_o *eventPointGaugeChangeEffectPrefab; // t1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9503 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9503 = 1;
  }
  eventPointGaugeChangeEffectPrefab = this->fields.eventPointGaugeChangeEffectPrefab;
  p_eventPointGaugeChangeEffectPrefab = (BattleServantConfConponent_o *)&this->fields.eventPointGaugeChangeEffectPrefab;
  v6 = (UnityEngine_Object_o *)eventPointGaugeChangeEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(v6, 0LL);
  p_eventPointGaugeChangeEffectPrefab->klass = 0LL;
  sub_B5D560(p_eventPointGaugeChangeEffectPrefab, 0LL, v8, v9, v10, v11, v12, v13);
}


void __fastcall EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoPointGaugeControl_o *v4; // x19
  struct UnityEngine_GameObject_array *eventPointGaugeEffectPrefabList; // x8
  __int64 v6; // x9
  unsigned __int64 v7; // x21
  signed __int64 v8; // x22
  __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UnityEngine_GameObject_array *v18; // x8
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E9504 & 1) == 0 )
  {
    this = (EventInfoPointGaugeControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9504 = 1;
  }
  eventPointGaugeEffectPrefabList = v4->fields.eventPointGaugeEffectPrefabList;
  if ( eventPointGaugeEffectPrefabList )
  {
    v6 = *(_QWORD *)&eventPointGaugeEffectPrefabList->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      v8 = (int)v6;
      v9 = 32LL;
      while ( 1 )
      {
        if ( v7 >= eventPointGaugeEffectPrefabList->max_length )
        {
LABEL_16:
          v19 = sub_B5D6C8(this);
          sub_B5D668(v19, 0LL);
        }
        v10 = (UnityEngine_Object_o *)eventPointGaugeEffectPrefabList->m_Items[v7];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v10, 0LL);
        v18 = v4->fields.eventPointGaugeEffectPrefabList;
        if ( !v18 )
LABEL_14:
          sub_B5D69C(this, v11);
        if ( v7 >= v18->max_length )
          goto LABEL_16;
        *(Il2CppClass **)((char *)&v18->obj.klass + v9) = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)((char *)v18 + v9), 0LL, v12, v13, v14, v15, v16, v17);
        if ( (__int64)++v7 >= v8 )
          break;
        eventPointGaugeEffectPrefabList = v4->fields.eventPointGaugeEffectPrefabList;
        v9 += 8LL;
        if ( !eventPointGaugeEffectPrefabList )
          goto LABEL_14;
      }
    }
  }
}


int32_t __fastcall EventInfoPointGaugeControl__GetEventPointGaugeState(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  QuestGroupMaster_o *v25; // x20
  int32_t v26; // w19
  Il2CppObject *current; // x22
  int32_t GroupId; // w21
  int32_t klass; // w22
  _BOOL8 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E94FC & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E94FC = 1;
  }
  memset(&v33, 0, sizeof(v33));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (v25 = (QuestGroupMaster_o *)Instance,
        (Instance = (DataManager_o *)QuestGroupMaster__GetEntityListByGroupId(
                                       (QuestGroupMaster_o *)Instance,
                                       eventId,
                                       1,
                                       0LL)) == 0LL) )
  {
    sub_B5D69C(Instance, v24);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
  v26 = 0;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    if ( !v30 )
      break;
    current = v33.fields.current;
    if ( !v33.fields.current )
      sub_B5D69C(v30, v31);
    GroupId = QuestGroupMaster__GetGroupId(v25, (int32_t)v33.fields.current[1].klass, 12, 0LL);
    klass = (int32_t)current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !((GroupId < 1) | !CondType__IsQuestClear_25877652(klass, -1, 0, 0LL)) )
      v26 = GroupId;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
  return v26;
}


bool __fastcall EventInfoPointGaugeControl__IsEventPointGaugeOpen(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E94FB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E94FB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, eventId, 0LL, 0, 0LL);
}


void __fastcall EventInfoPointGaugeControl__LoadEventInfoAssetData(
        EventInfoPointGaugeControl_o *this,
        EventInfoPointGaugeControl_assetLoadFinish_o *callBack,
        int32_t eventId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  EventInfoPointGaugeControl_assetLoadFinish_o **v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  AssetData_o *eventInfoAssetData; // x0
  AssetLoader_LoadEndDataHandler_o *v36; // x19

  if ( (byte_42E94F7 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callBack, eventId, method);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__, v10, v11, v12);
    sub_B5D5C4(&EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_6228/*"Event/Info"*/, v16, v17, v18);
    byte_42E94F7 = 1;
  }
  v19 = sub_B5D694(EventInfoPointGaugeControl___c__DisplayClass16_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass16_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass16_0_o *)v19,
    0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  *(_QWORD *)(v19 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = callBack;
  v28 = (EventInfoPointGaugeControl_assetLoadFinish_o **)(v19 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)callBack, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v19 + 32) = eventId;
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData && !AssetData__get_IsEmpty(eventInfoAssetData, 0LL) )
  {
    if ( *v28 )
      EventInfoPointGaugeControl_assetLoadFinish__Invoke(*v28, *(_DWORD *)(v19 + 32), 0LL);
  }
  else
  {
    v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v36,
      (Il2CppObject *)v19,
      Method_EventInfoPointGaugeControl___c__DisplayClass16_0__LoadEventInfoAssetData_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6228/*"Event/Info"*/, v36, 1, 0LL);
  }
}


void __fastcall EventInfoPointGaugeControl__LoadEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        EventInfoPointGaugeControl_assetLoadFinish_o *callbackEndFunc,
        int32_t eventId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  EventInfoPointGaugeControl_assetLoadFinish_o **v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  Il2CppObject *v36; // x0
  System_String_o *v37; // x20
  AssetLoader_LoadEndDataHandler_o *v38; // x21

  if ( (byte_42E94FE & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callbackEndFunc, eventId, method);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8, v9);
    sub_B5D5C4(
      &Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_5917/*"Effect/Event/{0}"*/, v16, v17, v18);
    byte_42E94FE = 1;
  }
  v19 = sub_B5D694(EventInfoPointGaugeControl___c__DisplayClass23_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass23_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass23_0_o *)v19,
    0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  *(_QWORD *)(v19 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = callbackEndFunc;
  v28 = (EventInfoPointGaugeControl_assetLoadFinish_o **)(v19 + 24);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v19 + 24),
    (System_Int32_array **)callbackEndFunc,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *(_DWORD *)(v19 + 32) = eventId;
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData && !AssetData__get_IsEmpty(eventPointGaugeEffectAssetData, 0LL) )
  {
    if ( *v28 )
      EventInfoPointGaugeControl_assetLoadFinish__Invoke(*v28, *(_DWORD *)(v19 + 32), 0LL);
  }
  else
  {
    v36 = (Il2CppObject *)System_Int32__ToString((int)v19 + 32, 0LL);
    v37 = System_String__Format((System_String_o *)StringLiteral_5917/*"Effect/Event/{0}"*/, v36, 0LL);
    v38 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v38,
      (Il2CppObject *)v19,
      Method_EventInfoPointGaugeControl___c__DisplayClass23_0__LoadEventPointGaugeEffect_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v37, v38, 1, 0LL);
  }
}


void __fastcall EventInfoPointGaugeControl__LoadEventPointGaugeEffect_26531752(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callbackEndFunc,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  EventInfoPointGaugeControl_assetLoadFinish_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_42E94FF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
      eventId,
      (_DWORD)callbackEndFunc,
      method);
    sub_B5D5C4(&EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v10, v11, v12);
    byte_42E94FF = 1;
  }
  v13 = sub_B5D694(EventInfoPointGaugeControl___c__DisplayClass24_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass24_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass24_0_o *)v13,
    0LL);
  if ( !v13 )
    sub_B5D69C(v14, v15);
  *(_QWORD *)(v13 + 16) = callbackEndFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)callbackEndFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B5D694(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
  EventInfoPointGaugeControl_assetLoadFinish___ctor(
    v22,
    (Il2CppObject *)v13,
    Method_EventInfoPointGaugeControl___c__DisplayClass24_0__LoadEventPointGaugeEffect_b__0__,
    0LL);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(this, v22, eventId, v23);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  __int64 v46; // x22
  __int64 Component_UIWidget; // x0
  const MethodInfo *v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 *v55; // x23
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x8
  __int64 *p_subEffectNameList; // x8
  struct EventInfoPointGaugeComponent_o *v65; // x8
  __int64 v66; // x28
  struct UnityEngine_GameObject_array **p_eventPointGaugeEffectPrefabList; // x24
  System_Int32_array **v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x8
  unsigned __int64 v76; // x20
  __int64 v77; // x19
  System_Text_StringBuilder_o *v78; // x26
  System_String_o *BATTLE_MODE_SUFFIX; // x1
  EventInfoPointGaugeControl_c *v80; // x0
  AssetData_o *eventPointGaugeEffectAssetData; // x27
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x26
  UnityEngine_Object_o *v83; // x26
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  unsigned int *v90; // x27
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x26
  System_Action_o *klass; // x27
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  BattleServantConfConponent_o *v105; // x0
  System_Int32_array **v106; // x1
  __int64 v107; // x0
  __int64 v108; // x0
  BattleServantConfConponent_o *v109; // [xsp+0h] [xbp-70h]
  signed __int64 v112; // [xsp+10h] [xbp-60h]
  int32_t v113; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42E9502 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, gaugeState, effectState, *(_QWORD *)&basePoint);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v13, v14, v15);
    sub_B5D5C4(&EventInfoPointGaugeControl_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v25, v26, v27);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(
      &Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__,
      v37,
      v38,
      v39);
    sub_B5D5C4(&EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v43, v44, v45);
    byte_42E9502 = 1;
  }
  v113 = 0;
  v46 = sub_B5D694(EventInfoPointGaugeControl___c__DisplayClass27_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass27_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass27_0_o *)v46,
    0LL);
  if ( !v46 )
LABEL_69:
    sub_B5D69C(Component_UIWidget, v48);
  *(_QWORD *)(v46 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v46 + 16), (System_Int32_array **)this, v49, v50, v51, v52, v53, v54);
  *(_QWORD *)(v46 + 32) = callback;
  v55 = (__int64 *)(v46 + 32);
  *(_DWORD *)(v46 + 24) = basePoint;
  *(_DWORD *)(v46 + 28) = addPoint;
  sub_B5D560((BattleServantConfConponent_o *)(v46 + 32), (System_Int32_array **)callback, v56, v57, v58, v59, v60, v61);
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
    Component_UIWidget = *v55;
    if ( !*v55 )
      goto LABEL_69;
    System_Action__Invoke((System_Action_o *)Component_UIWidget, 0LL);
    return;
  }
  v65 = this->fields._EventPointGaugeComponent_k__BackingField;
  if ( !v65 )
    goto LABEL_69;
  p_subEffectNameList = (__int64 *)&v65->fields.rootFSOffset;
LABEL_17:
  v66 = *p_subEffectNameList;
  EventInfoPointGaugeControl__DestroyEventPointGaugeEffect(this, v48);
  p_eventPointGaugeEffectPrefabList = &this->fields.eventPointGaugeEffectPrefabList;
  if ( this->fields.eventPointGaugeEffectPrefabList )
  {
    if ( !v66 )
      goto LABEL_69;
  }
  else
  {
    if ( !v66 )
      goto LABEL_69;
    v68 = (System_Int32_array **)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, *(unsigned int *)(v66 + 24));
    *p_eventPointGaugeEffectPrefabList = (struct UnityEngine_GameObject_array *)v68;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventPointGaugeEffectPrefabList,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  v75 = *(_QWORD *)(v66 + 24);
  if ( (int)v75 >= 1 )
  {
    v109 = (BattleServantConfConponent_o *)(v46 + 40);
    v112 = (int)v75;
    v76 = 0LL;
    v77 = 8LL;
    do
    {
      v78 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(v78, 0LL);
      if ( v76 >= *(unsigned int *)(v66 + 24) )
      {
LABEL_70:
        v107 = sub_B5D6C8(Component_UIWidget);
        sub_B5D668(v107, 0LL);
      }
      if ( !v78 )
        goto LABEL_69;
      System_Text_StringBuilder__Append_42953744(v78, *(System_String_o **)(v66 + v77 * 4), 0LL);
      if ( v77 == 8 )
      {
        if ( !isBattleMode )
          goto LABEL_35;
        v80 = EventInfoPointGaugeControl_TypeInfo;
        if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
          v80 = EventInfoPointGaugeControl_TypeInfo;
        }
        BATTLE_MODE_SUFFIX = v80->static_fields->BATTLE_MODE_SUFFIX;
      }
      else
      {
        if ( v77 != 10 )
          goto LABEL_35;
        System_Text_StringBuilder__Append_42953744(v78, (System_String_o *)StringLiteral_16096/*"_"*/, 0LL);
        v113 = gaugeState;
        BATTLE_MODE_SUFFIX = System_Int32__ToString((int32_t)&v113, 0LL);
      }
      System_Text_StringBuilder__Append_42953744(v78, BATTLE_MODE_SUFFIX, 0LL);
LABEL_35:
      eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
      Component_UIWidget = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v78->klass->vtable._3_ToString.method)(
                             v78,
                             v78->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !eventPointGaugeEffectAssetData )
        goto LABEL_69;
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 eventPointGaugeEffectAssetData,
                                                                 (System_String_o *)Component_UIWidget,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_UIWidget = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      if ( (Component_UIWidget & 1) != 0 )
      {
        if ( v76 >= *(unsigned int *)(v66 + 24) )
          goto LABEL_70;
        Component_UIWidget = (__int64)this->fields.eventPointGaugeEffectAssetData;
        if ( !Component_UIWidget )
          goto LABEL_69;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   (AssetData_o *)Component_UIWidget,
                                                                   *(System_String_o **)(v66 + v77 * 4),
                                                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
      v83 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      Component_UIWidget = UnityEngine_Object__op_Equality(v83, 0LL, 0LL);
      if ( (Component_UIWidget & 1) != 0 )
        goto LABEL_66;
      v90 = (unsigned int *)*p_eventPointGaugeEffectPrefabList;
      if ( !*p_eventPointGaugeEffectPrefabList )
        goto LABEL_69;
      if ( v83 )
      {
        Component_UIWidget = sub_B5D684(v83, *(_QWORD *)(*(_QWORD *)v90 + 64LL));
        if ( !Component_UIWidget )
        {
          v108 = sub_B5D6BC(0LL);
          sub_B5D668(v108, 0LL);
        }
      }
      if ( v76 >= v90[6] )
        goto LABEL_70;
      *(_QWORD *)&v90[v77] = v83;
      sub_B5D560((BattleServantConfConponent_o *)&v90[v77], (System_Int32_array **)v83, v84, v85, v86, v87, v88, v89);
      GameObjectExtensions__SafeSetParent_32436524(
        (UnityEngine_GameObject_o *)v83,
        this->fields.eventPointGaugeEffectParent,
        0LL);
      Component_UIWidget = (__int64)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                      (UnityEngine_GameObject_o *)v83,
                                      (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeEffectAction___);
      v97 = Component_UIWidget;
      if ( v77 == 8 )
      {
        if ( !Component_UIWidget )
          goto LABEL_69;
        *(_QWORD *)(Component_UIWidget + 24) = 0LL;
        v105 = (BattleServantConfConponent_o *)(Component_UIWidget + 24);
        v106 = 0LL;
LABEL_63:
        sub_B5D560(v105, v106, v91, v92, v93, v94, v95, v96);
        goto LABEL_64;
      }
      if ( v77 == 10 )
      {
        klass = (System_Action_o *)v109->klass;
        if ( !v109->klass )
        {
          klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            klass,
            (Il2CppObject *)v46,
            Method_EventInfoPointGaugeControl___c__DisplayClass27_0__PlayEventPointGaugeAddEffect_b__0__,
            0LL);
          *(_QWORD *)(v46 + 40) = klass;
          sub_B5D560(v109, (System_Int32_array **)klass, v99, v100, v101, v102, v103, v104);
        }
        if ( !v97 )
          goto LABEL_69;
        *(_QWORD *)(v97 + 24) = klass;
        v105 = (BattleServantConfConponent_o *)(v97 + 24);
        v106 = (System_Int32_array **)klass;
        goto LABEL_63;
      }
LABEL_64:
      ++v76;
      v77 += 2LL;
    }
    while ( (__int64)v76 < v112 );
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  __int64 v34; // x21
  AssetData_o *eventPointGaugeEffectAssetData; // x0
  const MethodInfo *v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  AssetData_o **v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x23
  struct UnityEngine_GameObject_o *v51; // x0
  struct UnityEngine_GameObject_o **p_eventPointGaugeChangeEffectPrefab; // x19
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UIWidget_o *Component_UIWidget; // x19
  System_Action_o *v60; // x20
  System_Action_o *v61; // x22

  if ( (byte_42E9501 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)parent, (_DWORD)name, *(_QWORD *)&beforeGauge);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v13, v14, v15);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___, v16, v17, v18);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(
      &Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
      v25,
      v26,
      v27);
    sub_B5D5C4(
      &Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
      v28,
      v29,
      v30);
    sub_B5D5C4(&EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo, v31, v32, v33);
    byte_42E9501 = 1;
  }
  v34 = sub_B5D694(EventInfoPointGaugeControl___c__DisplayClass26_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass26_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass26_0_o *)v34,
    0LL);
  if ( !v34 )
    goto LABEL_20;
  *(_QWORD *)(v34 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 16), (System_Int32_array **)this, v37, v38, v39, v40, v41, v42);
  *(_QWORD *)(v34 + 32) = callback;
  v43 = (AssetData_o **)(v34 + 32);
  *(_DWORD *)(v34 + 24) = afterGauge;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)callback, v44, v45, v46, v47, v48, v49);
  if ( !this->fields.eventPointGaugeEffectAssetData || !beforeGauge || *(_DWORD *)(v34 + 24) <= beforeGauge )
    goto LABEL_16;
  EventInfoPointGaugeControl__DestroyEventPointGaugeChangeEffect(this, v36);
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  if ( !eventPointGaugeEffectAssetData )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventPointGaugeEffectAssetData,
                                                             name,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
  v51 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.eventPointGaugeChangeEffectPrefab = v51;
  p_eventPointGaugeChangeEffectPrefab = &this->fields.eventPointGaugeChangeEffectPrefab;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_eventPointGaugeChangeEffectPrefab,
    (System_Int32_array **)v51,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)*p_eventPointGaugeChangeEffectPrefab, 0LL, 0LL) )
  {
LABEL_16:
    eventPointGaugeEffectAssetData = *v43;
    if ( *v43 )
    {
      System_Action__Invoke((System_Action_o *)eventPointGaugeEffectAssetData, 0LL);
      return;
    }
LABEL_20:
    sub_B5D69C(eventPointGaugeEffectAssetData, v36);
  }
  GameObjectExtensions__SafeSetParent_32436524(*p_eventPointGaugeChangeEffectPrefab, parent, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         *p_eventPointGaugeChangeEffectPrefab,
                         (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EventPointGaugeChangeEffectAction___);
  v60 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v34,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__0__,
    0LL);
  v61 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v34,
    Method_EventInfoPointGaugeControl___c__DisplayClass26_0__PlayEventPointGaugeChangeEffect_b__1__,
    0LL);
  if ( !Component_UIWidget )
    goto LABEL_20;
  EventPointGaugeChangeEffectAction__Setup((EventPointGaugeChangeEffectAction_o *)Component_UIWidget, v60, v61, 0LL);
}


void __fastcall EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        EventInfoPointGaugeControl_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  TerminalPramsManager_c *v37; // x0
  int v38; // w1
  const MethodInfo *v39; // x2
  __int64 v40; // x3
  EventInfoPointGaugeControl_o *v41; // x0
  int32_t v42; // w22
  int32_t EventPointGaugeState; // w0
  int32_t v44; // w21
  UnityEngine_GameObject_o *eventPointGaugeEffectParent; // x23
  EventInfoPointGaugeControl_c *v46; // x0
  bool v47; // zf
  System_String_o *EVENT_POINT_GAUGE_EFFECT_CHANGE; // x24
  System_Action_o *v49; // x25
  const MethodInfo *v50; // x6

  if ( (byte_42E9500 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)callback, method);
    sub_B5D5C4(&EventInfoPointGaugeControl_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(
      &Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo, v16, v17, v18);
    byte_42E9500 = 1;
  }
  v19 = sub_B5D694(EventInfoPointGaugeControl___c__DisplayClass25_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass25_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass25_0_o *)v19,
    0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  *(_QWORD *)(v19 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 40), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD2 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v34, v35, v36);
    byte_42E5CD2 = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v19 + 20) = v37->static_fields->_BeforeEventActivityPoint_k__BackingField;
  *(_DWORD *)(v19 + 16) = UserEventPointMaster__GetEventActivityPoint(eventId, 0LL);
  if ( !byte_42E5CD3 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v38, (_DWORD)v39, v40);
    byte_42E5CD3 = 1;
  }
  v41 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v41 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
  }
  v42 = *((_DWORD *)v41[2].monitor + 104);
  EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v41, eventId, v39);
  *(_DWORD *)(v19 + 32) = EventPointGaugeState;
  v44 = EventPointGaugeState;
  eventPointGaugeEffectParent = this->fields.eventPointGaugeEffectParent;
  v47 = EventPointGaugeState == 1;
  v46 = EventInfoPointGaugeControl_TypeInfo;
  v47 = v47 && v42 == 0;
  if ( v47 )
    v42 = 1;
  if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
    v46 = EventInfoPointGaugeControl_TypeInfo;
    v44 = *(_DWORD *)(v19 + 32);
  }
  EVENT_POINT_GAUGE_EFFECT_CHANGE = v46->static_fields->EVENT_POINT_GAUGE_EFFECT_CHANGE;
  v49 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v19,
    Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__0__,
    0LL);
  EventInfoPointGaugeControl__PlayEventPointGaugeChangeEffect(
    this,
    eventPointGaugeEffectParent,
    EVENT_POINT_GAUGE_EFFECT_CHANGE,
    v42,
    v44,
    v49,
    v50);
}


void __fastcall EventInfoPointGaugeControl__ReleaseAsset(EventInfoPointGaugeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssetData_o *eventInfoAssetData; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  BattleServantConfConponent_o *p_eventPointGaugeEffectAssetData; // x19
  AssetData_o *v13; // x20
  struct AssetData_o *eventPointGaugeEffectAssetData; // t1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E9506 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9506 = 1;
  }
  eventInfoAssetData = this->fields.eventInfoAssetData;
  if ( eventInfoAssetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(eventInfoAssetData, 0LL);
    this->fields.eventInfoAssetData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventInfoAssetData, 0LL, v6, v7, v8, v9, v10, v11);
  }
  eventPointGaugeEffectAssetData = this->fields.eventPointGaugeEffectAssetData;
  p_eventPointGaugeEffectAssetData = (BattleServantConfConponent_o *)&this->fields.eventPointGaugeEffectAssetData;
  v13 = eventPointGaugeEffectAssetData;
  if ( eventPointGaugeEffectAssetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(v13, 0LL);
    p_eventPointGaugeEffectAssetData->klass = 0LL;
    sub_B5D560(p_eventPointGaugeEffectAssetData, 0LL, v15, v16, v17, v18, v19, v20);
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
  sub_B5D560(
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
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  __int64 v23; // x21
  __int64 v24; // x0
  const MethodInfo *v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t eventId; // w22
  const MethodInfo *v39; // x5
  const MethodInfo *v40; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v41; // x22
  const MethodInfo *v42; // x3

  v8 = *(_QWORD *)&pos.fields.value.fields.z;
  v9 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_42E94F9 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoPointGaugeControl_TypeInfo, (_DWORD)eventDetailEntity, isActive, callback);
    sub_B5D5C4(
      &Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v20, v21, v22);
    byte_42E94F9 = 1;
  }
  v23 = sub_B5D694(EventInfoPointGaugeControl___c__DisplayClass18_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass18_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass18_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_14;
  *(_QWORD *)(v23 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 48) = callback;
  *(_BYTE *)(v23 + 24) = isActive;
  *(_QWORD *)(v23 + 28) = v9;
  *(_QWORD *)(v23 + 36) = v8;
  *(float *)(v23 + 44) = subMarginX;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 48), (System_Int32_array **)callback, v32, v33, v34, v35, v36, v37);
  if ( !eventDetailEntity )
LABEL_14:
    sub_B5D69C(v24, v25);
  eventId = eventDetailEntity->fields.eventId;
  if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  }
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v25) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v23 + 24),
        *(System_Nullable_Vector3__o *)(v23 + 28),
        *(float *)(v23 + 44),
        v39);
      EventInfoPointGaugeControl__PlayEventPointGaugeEffect(
        this,
        eventDetailEntity->fields.eventId,
        *(System_Action_o **)(v23 + 48),
        v40);
    }
    else
    {
      v41 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B5D694(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v41,
        (Il2CppObject *)v23,
        Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__0__,
        0LL);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v41, eventDetailEntity->fields.eventId, v42);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v23 + 48), 0LL);
  }
}


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
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  struct UnityEngine_GameObject_o **p_eventPointGaugeObj; // x22
  UnityEngine_Object_o *eventPointGaugeObj; // x25
  const MethodInfo *v17; // x3
  struct UnityEngine_GameObject_o *EventPointGaugePrefab; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  bool v27; // w21
  int v28; // w1
  const MethodInfo *v29; // x2
  __int64 v30; // x3
  int v31; // w1
  const MethodInfo *v32; // x2
  __int64 v33; // x3
  int EventActivityPoint; // w22
  EventInfoPointGaugeControl_o *v35; // x0
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int32_t EventPointGaugeState; // w22
  TerminalPramsManager_c *v40; // x0
  TerminalPramsManager_c *v41; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w22
  unsigned int BeforeEventActivityPointGauge_k__BackingField; // w21
  const MethodInfo *v44; // x2
  struct EventInfoPointGaugeComponent_o *EventPointGaugeComponent_k__BackingField; // x19
  bool v46; // zf
  const MethodInfo *v47; // x1
  System_Nullable_Vector3__o v48; // 0:x1.16

  v7 = *(_QWORD *)&pos.fields.value.fields.z;
  v8 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_42E94FA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, eventId, isActive, *(_QWORD *)&pos.fields.value.fields.x);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v12, v13, v14);
    byte_42E94FA = 1;
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
    *(_QWORD *)&v48.fields.value.fields.x = v8;
    *(_QWORD *)&v48.fields.value.fields.z = v7;
    EventPointGaugePrefab = EventInfoPointGaugeControl__CreateEventPointGaugePrefab(this, v48, subMarginX, v17);
    this->fields.eventPointGaugeObj = EventPointGaugePrefab;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventPointGaugeObj,
      (System_Int32_array **)EventPointGaugePrefab,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_49;
  v27 = isActive;
  UnityEngine_GameObject__SetActive(gameObject, v27, 0LL);
  gameObject = *p_eventPointGaugeObj;
  if ( !*p_eventPointGaugeObj )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(gameObject, v27, 0LL);
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
    if ( !byte_42E5CB7 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, (_BYTE)v32, v33);
      byte_42E5CB7 = 1;
    }
    v35 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v35 = (EventInfoPointGaugeControl_o *)TerminalPramsManager_TypeInfo;
    }
    *((_DWORD *)v35[2].monitor + 103) = EventActivityPoint;
    EventPointGaugeState = EventInfoPointGaugeControl__GetEventPointGaugeState(v35, eventId, v32);
    if ( !byte_42E5CB8 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v36, v37, v38);
      byte_42E5CB8 = 1;
    }
    v40 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
    }
    v40->static_fields->_BeforeEventActivityPointGauge_k__BackingField = EventPointGaugeState;
    TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD2 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v28, (_BYTE)v29, v30);
    byte_42E5CD2 = 1;
  }
  v41 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v41 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPoint_k__BackingField = v41->static_fields->_BeforeEventActivityPoint_k__BackingField;
  if ( !byte_42E5CD3 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v28, (_BYTE)v29, v30);
    v41 = TerminalPramsManager_TypeInfo;
    byte_42E5CD3 = 1;
  }
  if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v41);
    v41 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventActivityPointGauge_k__BackingField = v41->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
  gameObject = (UnityEngine_GameObject_o *)EventInfoPointGaugeControl__GetEventPointGaugeState(
                                             (EventInfoPointGaugeControl_o *)v41,
                                             eventId,
                                             v29);
  EventPointGaugeComponent_k__BackingField = this->fields._EventPointGaugeComponent_k__BackingField;
  v46 = (_DWORD)gameObject == 1 && BeforeEventActivityPointGauge_k__BackingField == 0;
  v26 = v46 ? 1LL : BeforeEventActivityPointGauge_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
LABEL_49:
    sub_B5D69C(gameObject, v26);
  HIDWORD(EventPointGaugeComponent_k__BackingField->fields.gaugeTweenHeight) = v26;
  EventPointGaugeComponent_k__BackingField->fields.maxPoint = BeforeEventActivityPoint_k__BackingField;
  EventInfoPointGaugeComponent__ChangeDispGauge(EventPointGaugeComponent_k__BackingField, v26, v44);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(EventPointGaugeComponent_k__BackingField, v47);
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
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  __int64 v33; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t eventId; // w21
  const MethodInfo *v43; // x5
  int v44; // w1
  char v45; // w2
  __int64 v46; // x3
  TerminalPramsManager_c *v47; // x0
  TerminalPramsManager_c *v48; // x0
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int v50; // w1
  char v51; // w2
  __int64 v52; // x3
  EventInfoPointGaugeControl_assetLoadFinish_o *v53; // x21
  const MethodInfo *v54; // x3
  TerminalPramsManager_c *v55; // x0

  v7 = *(_QWORD *)&pos.fields.value.fields.z;
  v8 = *(_QWORD *)&pos.fields.value.fields.x;
  if ( (byte_42E94F8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserEventPointMaster___,
      (_DWORD)eventDetailEntity,
      isActive,
      *(_QWORD *)&pos.fields.value.fields.x);
    sub_B5D5C4(&EventInfoPointGaugeControl_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__, v24, v25, v26);
    sub_B5D5C4(&EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v30, v31, v32);
    byte_42E94F8 = 1;
  }
  v33 = sub_B5D694(EventInfoPointGaugeControl___c__DisplayClass17_0_TypeInfo);
  EventInfoPointGaugeControl___c__DisplayClass17_0___ctor(
    (EventInfoPointGaugeControl___c__DisplayClass17_0_o *)v33,
    0LL);
  if ( !v33 )
    goto LABEL_57;
  *(_QWORD *)(v33 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v33 + 28) = v8;
  *(_QWORD *)(v33 + 36) = v7;
  *(_BYTE *)(v33 + 24) = isActive;
  *(float *)(v33 + 44) = subMarginX;
  if ( !eventDetailEntity )
    goto LABEL_57;
  eventId = eventDetailEntity->fields.eventId;
  if ( (BYTE3(EventInfoPointGaugeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointGaugeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointGaugeControl_TypeInfo);
  }
  if ( EventInfoPointGaugeControl__IsEventPointGaugeOpen(eventId, v35) )
  {
    if ( this->fields.eventInfoAssetData && this->fields.eventPointGaugeEffectAssetData )
    {
      EventInfoPointGaugeControl__SetupEventPointGaugeComponent(
        this,
        eventDetailEntity->fields.eventId,
        *(_BYTE *)(v33 + 24),
        *(System_Nullable_Vector3__o *)(v33 + 28),
        *(float *)(v33 + 44),
        v43);
    }
    else
    {
      v53 = (EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B5D694(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
      EventInfoPointGaugeControl_assetLoadFinish___ctor(
        v53,
        (Il2CppObject *)v33,
        Method_EventInfoPointGaugeControl___c__DisplayClass17_0__SetupEventPointGaugeDisp_b__0__,
        0LL);
      EventInfoPointGaugeControl__LoadEventInfoAssetData(this, v53, eventDetailEntity->fields.eventId, v54);
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
    if ( !byte_42E5CD2 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, v45, v46);
      byte_42E5CD2 = 1;
    }
    v47 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v47 = TerminalPramsManager_TypeInfo;
    }
    if ( v47->static_fields->_BeforeEventActivityPoint_k__BackingField >= 1 )
    {
      if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v47);
      if ( !byte_42E5CD3 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, v45, v46);
        byte_42E5CD3 = 1;
      }
      v48 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v48 = TerminalPramsManager_TypeInfo;
      }
      if ( v48->static_fields->_BeforeEventActivityPointGauge_k__BackingField >= 1 )
      {
        if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v48);
        if ( TerminalPramsManager__CheckEventActivityPointSaveData(0LL) )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             Instance,
                                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
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
                if ( !byte_42E5CB7 )
                {
                  sub_B5D5C4(&TerminalPramsManager_TypeInfo, v50, v51, v52);
                  byte_42E5CB7 = 1;
                }
                v55 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v55 = TerminalPramsManager_TypeInfo;
                }
                v55->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
                if ( !byte_42E5CB8 )
                {
                  sub_B5D5C4(&TerminalPramsManager_TypeInfo, v50, v51, v52);
                  v55 = TerminalPramsManager_TypeInfo;
                  byte_42E5CB8 = 1;
                }
                if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v55);
                  v55 = TerminalPramsManager_TypeInfo;
                }
                v55->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
                TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
              }
              return;
            }
          }
LABEL_57:
          sub_B5D69C(Instance, v35);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, prefabData);
  _4__this->fields.eventInfoAssetData = prefabData;
  sub_B5D560(&_4__this->fields.eventInfoAssetData);
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
    sub_B5D69C(_4__this, *(_QWORD *)&eventId);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  EventInfoPointGaugeControl_o *_4__this; // x0
  struct EventInfoPointGaugeControl_assetLoadFinish_o *_9__1; // x22
  EventInfoPointGaugeControl_o *v11; // x21
  __int64 v12; // x9

  if ( (byte_42E653B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&EventInfoPointGaugeControl_assetLoadFinish_TypeInfo, v6, v7, v8);
    byte_42E653B = 1;
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
  v11 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (struct EventInfoPointGaugeControl_assetLoadFinish_o *)sub_B5D694(EventInfoPointGaugeControl_assetLoadFinish_TypeInfo);
    v12 = *(_QWORD *)Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__;
    *(_QWORD *)&_9__1->fields.extra_arg = Method_EventInfoPointGaugeControl___c__DisplayClass18_0__SetupEventPointGaugeAndPlayEffect_b__1__;
    *(_QWORD *)&_9__1->fields.method_ptr = v12;
    *(_QWORD *)&_9__1->fields.method = this;
    sub_B5D560(&_9__1->fields.method);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !v11 )
LABEL_8:
    sub_B5D69C(_4__this, *(_QWORD *)&eventId);
  EventInfoPointGaugeControl__LoadEventPointGaugeEffect(v11, _9__1, eventId, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass18_0___SetupEventPointGaugeAndPlayEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass18_0_o *this,
        int32_t eId,
        const MethodInfo *method)
{
  EventInfoPointGaugeControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, eId);
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
    sub_B5D69C(0LL, prefabData);
  _4__this->fields.eventPointGaugeEffectAssetData = prefabData;
  sub_B5D560(&_4__this->fields.eventPointGaugeEffectAssetData);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  TerminalPramsManager_c *EventPointGaugeComponent_k__BackingField; // x0
  struct EventInfoPointGaugeControl_o *v12; // x8
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int32_t v16; // w21
  TerminalPramsManager_c *v17; // x0
  int32_t v18; // w21
  int32_t afterPoint; // w26
  int32_t beforePoint; // w27
  EventInfoPointGaugeControl_o *_4__this; // x21
  int32_t afterGauge; // w22
  int32_t EventActivityPointEffectState_k__BackingField; // w20
  System_Action_o *_9__1; // x24
  int32_t v25; // w23

  if ( (byte_42E653C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__, v8, v9, v10);
    byte_42E653C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CE9 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5CE9 = 1;
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
    if ( !byte_42E5CE9 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
      byte_42E5CE9 = 1;
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
    v25 = this->fields.beforePoint;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_EventInfoPointGaugeControl___c__DisplayClass25_0__PlayEventPointGaugeEffect_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B5D560(&this->fields.__9__1);
    }
    if ( _4__this )
    {
      EventInfoPointGaugeControl__PlayEventPointGaugeAddEffect(
        _4__this,
        afterGauge,
        EventActivityPointEffectState_k__BackingField,
        v25,
        afterPoint - beforePoint,
        _9__1,
        0,
        0LL);
      return;
    }
LABEL_40:
    sub_B5D69C(EventPointGaugeComponent_k__BackingField, method);
  }
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_40;
  EventPointGaugeComponent_k__BackingField = (TerminalPramsManager_c *)v12->fields._EventPointGaugeComponent_k__BackingField;
  if ( !EventPointGaugeComponent_k__BackingField )
    goto LABEL_40;
  EventInfoPointGaugeComponent__SetGaugeBarHeightByPoint(
    (EventInfoPointGaugeComponent_o *)EventPointGaugeComponent_k__BackingField,
    this->fields.afterPoint,
    0LL);
  v16 = this->fields.afterPoint;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CB7 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v13, v14, v15);
    byte_42E5CB7 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_BeforeEventActivityPoint_k__BackingField = v16;
  v18 = this->fields.afterGauge;
  if ( !byte_42E5CB8 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v13, v14, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_42E5CB8 = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v18;
  TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointGaugeControl___c__DisplayClass25_0___PlayEventPointGaugeEffect_b__1(
        EventInfoPointGaugeControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  int32_t EVENT_POINT_EFFECT_STATE_NONE; // w21
  int32_t afterPoint; // w21
  int32_t afterGauge; // w21

  if ( (byte_42E653D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E653D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v5->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  if ( !byte_42E5640 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v5 = TerminalPramsManager_TypeInfo;
    byte_42E5640 = 1;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_EventActivityPointEffectState_k__BackingField = EVENT_POINT_EFFECT_STATE_NONE;
  afterPoint = this->fields.afterPoint;
  if ( !byte_42E5CB7 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v5 = TerminalPramsManager_TypeInfo;
    byte_42E5CB7 = 1;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_BeforeEventActivityPoint_k__BackingField = afterPoint;
  afterGauge = this->fields.afterGauge;
  if ( !byte_42E5CB8 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v5 = TerminalPramsManager_TypeInfo;
    byte_42E5CB8 = 1;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_BeforeEventActivityPointGauge_k__BackingField = afterGauge;
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E653E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, eventId, (_DWORD)callback, object);
    byte_42E653E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall EventInfoPointGaugeControl_assetLoadFinish__EndInvoke(
        EventInfoPointGaugeControl_assetLoadFinish_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  EventInfoPointGaugeControl_assetLoadFinish_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&eventId, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)eventId, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)eventId, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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