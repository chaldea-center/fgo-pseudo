void __fastcall TitleInfoEventUIComponent___ctor(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42130B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoUIBase___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssetData___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_List_AssetData__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoUIBase__TypeInfo, v8);
    byte_42130B1 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_AssetData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.eventUiPrefabList = (struct System_Collections_Generic_List_EventInfoUIBase__o *)v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventUiPrefabList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventInfoUIBase__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
  this->fields._eventUIEntity_k__BackingField = (struct EventUiEntity_o *)v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._eventUIEntity_k__BackingField,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
  this[1].klass = (TitleInfoEventUIComponent_c *)v27;
  sub_B0D840((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TitleInfoEventUIComponent__AsyncSetup(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *eventUIEntity,
        bool isMap,
        bool isEventReward,
        bool isCaldea,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v12; // x23
  __int64 v13; // x0
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
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42130A2 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo, eventUIEntity);
    byte_42130A2 = 1;
  }
  v12 = sub_B0D974(TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo, eventUIEntity, isMap);
  TitleInfoEventUIComponent__AsyncSetup_d__14___ctor((TitleInfoEventUIComponent__AsyncSetup_d__14_o *)v12, 0, 0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  *(_QWORD *)(v12 + 48) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 48), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 32) = eventUIEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v12 + 32),
    (System_Int32_array **)eventUIEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  *(_BYTE *)(v12 + 40) = isMap;
  *(_BYTE *)(v12 + 41) = isEventReward;
  *(_QWORD *)(v12 + 56) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 56), (System_Int32_array **)callback, v26, v27, v28, v29, v30, v31);
  return (System_Collections_IEnumerator_o *)v12;
}


System_String_o *__fastcall TitleInfoEventUIComponent__GetAssetName(
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  EventUiEntity_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x0
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF
  int v10; // [xsp+18h] [xbp-18h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-14h] BYREF

  v2 = eventUIEntity;
  if ( (byte_42130B0 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6224/*"EventUI/Prefabs/{0}"*/, v3);
    eventUIEntity = (EventUiEntity_o *)sub_B0D8A4(&StringLiteral_6225/*"EventUI/Prefabs/{0}/{1}"*/, v4);
    byte_42130B0 = 1;
  }
  if ( !v2 )
    sub_B0D97C(eventUIEntity);
  if ( v2->fields.eventId )
  {
    eventId = v2->fields.eventId;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    return System_String__Format((System_String_o *)StringLiteral_6224/*"EventUI/Prefabs/{0}"*/, v5, 0LL);
  }
  else
  {
    v10 = 0;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    warId = v2->fields.warId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
    return System_String__Format_43845440((System_String_o *)StringLiteral_6225/*"EventUI/Prefabs/{0}/{1}"*/, v7, v8, 0LL);
  }
}


UnityEngine_Vector3_o __fastcall TitleInfoEventUIComponent__GetPosition(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t x; // w20
  EventUiEntity_c *v5; // x0
  float *p_EVNET_UI_POSITION_MAGNIFICATION; // x8
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42130AD & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_B0D8A4(&EventUiEntity_TypeInfo, entity);
    byte_42130AD = 1;
  }
  if ( !entity )
    sub_B0D97C(this);
  x = entity->fields.x;
  v5 = EventUiEntity_TypeInfo;
  if ( (BYTE3(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUiEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
    v5 = EventUiEntity_TypeInfo;
  }
  p_EVNET_UI_POSITION_MAGNIFICATION = &v5->static_fields->EVNET_UI_POSITION_MAGNIFICATION;
  v7 = *p_EVNET_UI_POSITION_MAGNIFICATION * (float)x;
  v8 = -(float)(*p_EVNET_UI_POSITION_MAGNIFICATION * (float)entity->fields.y);
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


bool __fastcall TitleInfoEventUIComponent__IsDispEventUIForSpot(
        TitleInfoEventUIComponent_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  EventUiEntity_o *eventUIPartsList; // x0

  eventUIPartsList = (EventUiEntity_o *)this->fields.eventUIPartsList;
  if ( eventUIPartsList )
    LOBYTE(eventUIPartsList) = EventUiEntity__IsDispEventUIForSpot(eventUIPartsList, spotId, 0LL);
  return (char)eventUIPartsList;
}


bool __fastcall TitleInfoEventUIComponent__IsDispPossible(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventUIComponent__IsEventRaidBoss(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventUIComponent__IsPlayAnim(
        TitleInfoEventUIComponent_o *this,
        int32_t playType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *eventUIEntity_k__BackingField; // x0
  char v9; // w19
  int v10; // w20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42130AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, *(_QWORD *)&playType);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v7);
    byte_42130AB = 1;
  }
  memset(&v12, 0, sizeof(v12));
  eventUIEntity_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    if ( eventUIEntity_k__BackingField->fields._size < 1 )
    {
      LOBYTE(eventUIEntity_k__BackingField) = 0;
    }
    else
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v12,
        eventUIEntity_k__BackingField,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v12,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
      {
        if ( !v12.fields.current )
          sub_B0D97C(0LL);
        if ( (((__int64 (*)(void))v12.fields.current->klass->vtable[7].method)() & 1) != 0 )
        {
          v9 = 1;
          v10 = 2;
          goto LABEL_11;
        }
      }
      v10 = 0;
      v9 = 0;
LABEL_11:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v12,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUIEntity_k__BackingField) = (v10 == 2) & v9;
    }
  }
  return (char)eventUIEntity_k__BackingField;
}


System_Collections_IEnumerator_o *__fastcall TitleInfoEventUIComponent__LoadAssetBundle(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *eventUIEntity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42130A3 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo, eventUIEntity);
    byte_42130A3 = 1;
  }
  v7 = sub_B0D974(TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo, eventUIEntity, callback);
  TitleInfoEventUIComponent__LoadAssetBundle_d__15___ctor(
    (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 40) = eventUIEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)eventUIEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)(v7 + 48) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TitleInfoEventUIComponent__OnDestroy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0

  if ( (byte_42130AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoUIBase__Clear__, method);
    byte_42130AF = 1;
  }
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventInfoUIBase__Clear__);
  TitleInfoEventUIComponent__ReleaseAsset(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__PlayAnim(
        TitleInfoEventUIComponent_o *this,
        int32_t playType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x23
  struct EventUiEntity_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x8
  int eventId; // w8
  System_Action_o *v27; // x22
  Il2CppObject *current; // x21
  _BOOL8 v29; // x0
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42130AC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&playType);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__, v13);
    sub_B0D8A4(&TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo, v14);
    byte_42130AC = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v15 = sub_B0D974(TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&playType, callback);
  TitleInfoEventUIComponent___c__DisplayClass26_0___ctor((TitleInfoEventUIComponent___c__DisplayClass26_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_18;
  *(_QWORD *)(v15 + 16) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( !eventUIEntity_k__BackingField || (eventId = eventUIEntity_k__BackingField->fields.eventId, eventId < 1) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v15 + 16), 0LL);
    return;
  }
  *(_DWORD *)(v15 + 24) = eventId;
  v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v15,
    Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__,
    0LL);
  v16 = this->fields._eventUIEntity_k__BackingField;
  if ( !v16 )
LABEL_18:
    sub_B0D97C(v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
  {
    current = v30.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v29 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v29 )
    {
      ActionExtensions__Call(v27, 0LL);
    }
    else
    {
      if ( !current )
        sub_B0D97C(v29);
      ((void (__fastcall *)(Il2CppObject *, _QWORD, System_Action_o *, Il2CppMethodPointer))current->klass->vtable[8].method)(
        current,
        (unsigned int)playType,
        v27,
        current->klass->vtable[9].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
}


void __fastcall TitleInfoEventUIComponent__Redisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0
  Il2CppObject *current; // x19
  _BOOL8 v9; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42130A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_42130A1 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v10.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v9 )
      {
        if ( !current )
          sub_B0D97C(v9);
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[10].method)(
          current,
          current->klass->vtable[11].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__ReleaseAsset(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_EventInfoUIBase__o *v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42130AE & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssetData__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v7);
    byte_42130AE = 1;
  }
  memset(&v11, 0, sizeof(v11));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUiPrefabList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v11.fields.current;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_29516400((AssetData_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v10 = this->fields.eventUiPrefabList;
    if ( !v10 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_AssetData__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__SetActiveChildren(
        TitleInfoEventUIComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  bool i; // w20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  unsigned __int64 v15; // x10
  System_Collections_IEnumerator_c **v16; // x11
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x19
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0

  if ( (byte_42130A5 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, isActive);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v6);
    byte_42130A5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  for ( i = isActive; ; UnityEngine_GameObject__SetActive(gameObject, i, 0LL) )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        v16 += 2;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_17:
      v17 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_B0D97C(0LL);
    v19 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[v19 - 1] != UnityEngine_Transform_TypeInfo )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_B0DC70(v18);
LABEL_34:
      sub_B0D97C(gameObject);
    }
    gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !gameObject )
      goto LABEL_34;
  }
  v21 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_29;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_29:
      v26 = sub_AA67A0(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}


void __fastcall TitleInfoEventUIComponent__SetDispEventUIForSpot(
        TitleInfoEventUIComponent_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  EventUiEntity_o *eventUIPartsList; // x0
  const MethodInfo *v6; // x2
  EventUiEntity_o *v7; // x0
  bool v8; // w1
  TitleInfoEventUIComponent_o *v9; // x0
  EventUiEntity_o *v10; // x0
  const MethodInfo *v11; // x2

  eventUIPartsList = (EventUiEntity_o *)this->fields.eventUIPartsList;
  if ( eventUIPartsList )
  {
    if ( EventUiEntity__IsDispArea(eventUIPartsList, 8, 0LL) )
    {
      v7 = (EventUiEntity_o *)this->fields.eventUIPartsList;
      if ( v7 && EventUiEntity__IsDispEventUIForSpot(v7, spotId, 0LL) )
      {
        v8 = 1;
        v9 = this;
      }
      else
      {
        v9 = this;
        v8 = 0;
      }
      TitleInfoEventUIComponent__SetActiveChildren(v9, v8, v6);
    }
    v10 = (EventUiEntity_o *)this->fields.eventUIPartsList;
    if ( !v10 )
      sub_B0D97C(0LL);
    if ( EventUiEntity__IsDispArea(v10, 1, 0LL) )
      TitleInfoEventUIComponent__SwitchSpotState(this, spotId > 0, v11);
  }
}


void __fastcall TitleInfoEventUIComponent__SetGameObject(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  System_String_o *AssetName; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  AssetLoader_LoadEndDataHandler_o *v26; // x20

  if ( (byte_42130A8 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, entity);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__, v6);
    sub_B0D8A4(&TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo, v7);
    byte_42130A8 = 1;
  }
  v8 = sub_B0D974(TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo, entity, method);
  TitleInfoEventUIComponent___c__DisplayClass22_0___ctor((TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v8, 0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 16) = entity;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)entity, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  AssetName = TitleInfoEventUIComponent__GetAssetName(*(EventUiEntity_o **)(v8 + 16), v22);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v8,
    Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, v26, 1, 0LL);
}


void __fastcall TitleInfoEventUIComponent__SetImage(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent_o *v4; // x20
  System_String_o *v5; // x0
  UISprite_o *eventInfoAssetDataList; // x22
  System_String_o *v7; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x20
  const MethodInfo *v10; // x2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42130A9 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_B0D8A4(&AtlasManager_TypeInfo, entity);
    byte_42130A9 = 1;
  }
  if ( !entity )
    goto LABEL_11;
  v5 = System_Int32__ToString((int)entity + 52, 0LL);
  eventInfoAssetDataList = (UISprite_o *)v4->fields.eventInfoAssetDataList;
  v7 = v5;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(eventInfoAssetDataList, v7, 0LL);
  this = (TitleInfoEventUIComponent_o *)v4->fields.eventInfoAssetDataList;
  if ( !this
    || (((void (__fastcall *)(TitleInfoEventUIComponent_o *, const char *))this->klass[2]._1.gc_desc)(
          this,
          this->klass[2]._1.name),
        (this = (TitleInfoEventUIComponent_o *)v4->fields.eventInfoAssetDataList) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__ResetLocalScale(gameObject, 0LL),
        (this = (TitleInfoEventUIComponent_o *)v4->fields.eventInfoAssetDataList) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(this);
  }
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)v9, entity, v10);
  GameObjectExtensions__SetLocalPosition(v9, Position, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__SetValue(
        TitleInfoEventUIComponent_o *this,
        int32_t valueType,
        Il2CppObject *val,
        int32_t setType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0
  Il2CppObject *current; // x22
  _BOOL8 v15; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42130AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, *(_QWORD *)&valueType);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_42130AA = 1;
  }
  memset(&v16, 0, sizeof(v16));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v16,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v16.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v15 )
      {
        if ( !current )
          sub_B0D97C(v15);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppObject *, _QWORD, Il2CppMethodPointer))current->klass->vtable[6].method)(
          current,
          (unsigned int)valueType,
          val,
          (unsigned int)setType,
          current->klass->vtable[7].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v16,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__SwitchSpotState(
        TitleInfoEventUIComponent_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0
  _BOOL4 v10; // w19
  Il2CppObject *current; // x20
  _BOOL8 v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42130A6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, isOpen);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_42130A6 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v10 = isOpen;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v13.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v12 )
      {
        if ( !current )
          sub_B0D97C(v12);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))current->klass->vtable[11].method)(
          current,
          v10,
          current->klass->vtable[12].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__UpdateDisp(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventUIComponent__UpdateEventUI(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventInfoAssetDataList; // x21
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2
  int32_t objectType; // w8

  if ( (byte_42130A4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, entity);
    byte_42130A4 = 1;
  }
  eventInfoAssetDataList = (UnityEngine_Object_o *)this->fields.eventInfoAssetDataList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(eventInfoAssetDataList, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !entity )
      sub_B0D97C(v6);
    objectType = entity->fields.objectType;
    if ( objectType == 3 )
    {
      TitleInfoEventUIComponent__SetGameObject(this, entity, v7);
    }
    else if ( objectType == 2 )
    {
      TitleInfoEventUIComponent__SetImage(this, entity, v7);
    }
  }
}


void __fastcall TitleInfoEventUIComponent__UpdatePartsDisp(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42130A7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__get_Count__, v6);
    byte_42130A7 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
  if ( klass && klass->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      klass,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B0D97C(0LL);
      TitleInfoEventUIPartsComponent__UpdateDisp((TitleInfoEventUIPartsComponent_o *)v9.fields.current, v8);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
  }
}


System_Collections_Generic_List_EventInfoUIBase__o *__fastcall TitleInfoEventUIComponent__get_EventUiPrefabList(
        TitleInfoEventUIComponent_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_List_EventInfoUIBase__o *)this->fields._eventUIEntity_k__BackingField;
}


EventUiEntity_o *__fastcall TitleInfoEventUIComponent__get_eventUIEntity(
        TitleInfoEventUIComponent_o *this,
        const MethodInfo *method)
{
  return (EventUiEntity_o *)this->fields.eventUIPartsList;
}


void __fastcall TitleInfoEventUIComponent__set_eventUIEntity(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventUIPartsList = (struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o *)value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventUIPartsList,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TitleInfoEventUIComponent__AsyncSetup_d__14___ctor(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventUIComponent__AsyncSetup_d__14__MoveNext(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct TitleInfoEventUIComponent_o *_4__this; // x20
  __int64 v8; // x21
  __int64 v9; // x0
  struct EventUiEntity_o *eventUIEntity; // x1
  struct TitleInfoEventUIComponent_o *v11; // x1
  struct System_Action_o *callback; // x1
  struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o *v13; // x1
  EventUiEntity_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x23
  Il2CppObject *AssetBundle; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42125AB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__, v4);
    sub_B0D8A4(&TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo, v5);
    byte_42125AB = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      _4__this = this->fields.__4__this;
      v8 = sub_B0D974(TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo, method, v2);
      System_Object___ctor((Il2CppObject *)v8, 0LL);
      if ( !v8 )
        goto LABEL_11;
      eventUIEntity = this->fields.eventUIEntity;
      *(_QWORD *)(v8 + 16) = eventUIEntity;
      sub_B0D840(v8 + 16, eventUIEntity);
      *(_BYTE *)(v8 + 24) = this->fields.isMap;
      *(_BYTE *)(v8 + 25) = this->fields.isEventReward;
      v11 = this->fields.__4__this;
      *(_QWORD *)(v8 + 32) = v11;
      sub_B0D840(v8 + 32, v11);
      callback = this->fields.callback;
      *(_QWORD *)(v8 + 40) = callback;
      sub_B0D840(v8 + 40, callback);
      v13 = *(struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o **)(v8 + 16);
      if ( v13 )
      {
        if ( _4__this )
        {
          _4__this->fields.eventUIPartsList = v13;
          sub_B0D840(&_4__this->fields.eventUIPartsList, v13);
          v14 = *(EventUiEntity_o **)(v8 + 16);
          v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v8,
            Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__,
            0LL);
          AssetBundle = (Il2CppObject *)TitleInfoEventUIComponent__LoadAssetBundle(_4__this, v14, v17, 0LL);
          this->fields.__2__current = AssetBundle;
          p__2__current = &this->fields.__2__current;
          sub_B0D840(p__2__current, AssetBundle);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_11:
        sub_B0D97C(v9);
      }
    }
    return 0;
  }
  return result;
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__AsyncSetup_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventUIComponent__AsyncSetup_d__14__System_Collections_IEnumerator_Reset(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_TitleInfoEventUIComponent__AsyncSetup_d__14_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__AsyncSetup_d__14__System_Collections_IEnumerator_get_Current(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventUIComponent__AsyncSetup_d__14__System_IDisposable_Dispose(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__15___ctor(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__15__MoveNext(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  Il2CppObject *v9; // x21
  struct TitleInfoEventUIComponent___c__DisplayClass15_0_o **p__8__1; // x20
  struct TitleInfoEventUIComponent_o *_4__this; // x1
  System_String_o *AssetName; // x0
  Il2CppObject *_8__1; // x23
  System_String_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  AssetLoader_LoadEndDataHandler_o *v17; // x22
  __int64 v18; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int v21; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_42125AC & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v4);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__, v6);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)sub_B0D8A4(
                                                                   &TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo,
                                                                   v7);
    byte_42125AC = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = &v3->fields.__8__1;
    v3->fields.__1__state = -1;
    goto LABEL_13;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v9 = (Il2CppObject *)sub_B0D974(TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo, method, v2);
    System_Object___ctor(v9, 0LL);
    p__8__1 = &v3->fields.__8__1;
    v3->fields.__8__1 = (struct TitleInfoEventUIComponent___c__DisplayClass15_0_o *)v9;
    sub_B0D840(&v3->fields.__8__1, v9);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)v3->fields.__8__1;
    if ( !this )
      goto LABEL_19;
    _4__this = v3->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = _4__this;
    sub_B0D840(&this->fields, _4__this);
    if ( !v3->fields.eventUIEntity )
    {
LABEL_17:
      ActionExtensions__Call(v3->fields.callback, 0LL);
      return 0;
    }
    if ( !*p__8__1 )
LABEL_19:
      sub_B0D97C(this);
    (*p__8__1)->fields.isAssetLoaded = 0;
    AssetName = TitleInfoEventUIComponent__GetAssetName(v3->fields.eventUIEntity, 0LL);
    _8__1 = (Il2CppObject *)v3->fields.__8__1;
    v14 = AssetName;
    v17 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
    AssetLoader_LoadEndDataHandler___ctor(
      v17,
      _8__1,
      Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)AssetManager__loadAssetStorage(v14, v17, 1, 0LL);
    v3->fields._isAssetFound_5__2 = (unsigned __int8)this & 1;
LABEL_13:
    if ( *p__8__1 )
    {
      if ( !(*p__8__1)->fields.isAssetLoaded && v3->fields._isAssetFound_5__2 )
      {
        v21 = 0;
        v18 = j_il2cpp_value_box_0(int_TypeInfo, &v21);
        v3->fields.__2__current = (Il2CppObject *)v18;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, v18);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      goto LABEL_17;
    }
    goto LABEL_19;
  }
  return 0;
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventUIComponent__LoadAssetBundle_d__15__System_Collections_IEnumerator_Reset(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_TitleInfoEventUIComponent__LoadAssetBundle_d__15_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__15__System_Collections_IEnumerator_get_Current(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__15__System_IDisposable_Dispose(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass14_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass14_0___AsyncSetup_b__0(
        TitleInfoEventUIComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventUiEntity_o *eventUIEntity; // x0
  struct TitleInfoEventUIComponent_o **p__4__this; // x20
  System_Collections_Generic_IEnumerable_T__o *v6; // x1

  if ( (byte_42125A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__, v3);
    byte_42125A8 = 1;
  }
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_27;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 1, 0LL) && this->fields.isMap )
    goto LABEL_14;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_27;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 2, 0LL) && this->fields.isEventReward )
    goto LABEL_14;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_27;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 4, 0LL) )
    goto LABEL_14;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_27;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 8, 0LL) && this->fields.isMap )
  {
LABEL_14:
    p__4__this = &this->fields.__4__this;
    eventUIEntity = (EventUiEntity_o *)this->fields.__4__this;
    if ( !eventUIEntity )
      goto LABEL_27;
    TitleInfoEventUIComponent__UpdateEventUI(
      (TitleInfoEventUIComponent_o *)eventUIEntity,
      this->fields.eventUIEntity,
      0LL);
  }
  else
  {
    p__4__this = &this->fields.__4__this;
  }
  eventUIEntity = (EventUiEntity_o *)*p__4__this;
  if ( !*p__4__this )
    goto LABEL_27;
  eventUIEntity = (EventUiEntity_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)eventUIEntity, 0LL);
  if ( !eventUIEntity
    || (eventUIEntity = (EventUiEntity_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                             (UnityEngine_Component_o *)eventUIEntity,
                                             1,
                                             (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___),
        !*p__4__this)
    || (v6 = (System_Collections_Generic_IEnumerable_T__o *)eventUIEntity,
        (eventUIEntity = (EventUiEntity_o *)(*p__4__this)[1].klass) == 0LL)
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)eventUIEntity,
          v6,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__),
        (eventUIEntity = (EventUiEntity_o *)*p__4__this) == 0LL)
    || (TitleInfoEventUIComponent__UpdatePartsDisp((TitleInfoEventUIComponent_o *)eventUIEntity, 0LL),
        (eventUIEntity = this->fields.eventUIEntity) == 0LL) )
  {
LABEL_27:
    sub_B0D97C(eventUIEntity);
  }
  if ( EventUiEntity__IsDispArea(eventUIEntity, 8, 0LL) )
  {
    eventUIEntity = (EventUiEntity_o *)*p__4__this;
    if ( *p__4__this )
    {
      TitleInfoEventUIComponent__SetActiveChildren((TitleInfoEventUIComponent_o *)eventUIEntity, 0, 0LL);
      goto LABEL_25;
    }
    goto LABEL_27;
  }
LABEL_25:
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass15_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass15_0___LoadAssetBundle_b__0(
        TitleInfoEventUIComponent___c__DisplayClass15_0_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent___c__DisplayClass15_0_o *v4; // x19
  __int64 v5; // x1
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  struct TitleInfoEventUIComponent_o *v7; // x8

  v4 = this;
  if ( (byte_42125A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssetData__Add__, asset);
    this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)sub_B0D8A4(
                                                                  &Method_System_Collections_Generic_List_AssetData__Contains__,
                                                                  v5);
    byte_42125A9 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)_4__this->fields.eventUiPrefabList;
  if ( !this )
    goto LABEL_10;
  this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                                (WarBoardManager_TaskList_o *)asset,
                                                                (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_AssetData__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = v4->fields.__4__this;
    if ( v7 )
    {
      this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)v7->fields.eventUiPrefabList;
      if ( this )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)asset,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AssetData__Add__);
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_B0D97C(this);
  }
LABEL_9:
  v4->fields.isAssetLoaded = 1;
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass22_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass22_0___SetGameObject_b__0(
        TitleInfoEventUIComponent___c__DisplayClass22_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent___c__DisplayClass22_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventUiEntity_o *entity; // x8
  UnityEngine_Object_o *Object_29501436; // x20
  UnityEngine_Object_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventUiEntity_o *v15; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  struct EventUiEntity_o *v18; // x8
  EventUiValueEntity_array *List; // x1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42125AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventUiValueMaster___, prefabData);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___, v5);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoUIBase__Add__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)sub_B0D8A4(
                                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                                  v9);
    byte_42125AA = 1;
  }
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_34;
  this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)System_Int32__ToString((int)entity + 52, 0LL);
  if ( !prefabData )
    goto LABEL_34;
  Object_29501436 = AssetData__GetObject_29501436(prefabData, (System_String_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Object_29501436, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = UnityEngine_Object__Instantiate_34934424(Object_29501436, 0LL);
    if ( v12 )
      v13 = (UnityEngine_GameObject_c *)v12->klass == UnityEngine_GameObject_TypeInfo
          ? (UnityEngine_GameObject_o *)v12
          : 0LL;
    else
      v13 = 0LL;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
    {
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SafeSetParent_31184716(v13, gameObject, 0LL);
      GameObjectExtensions__ResetLocalScale(v13, 0LL);
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_34;
      Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)this, v4->fields.entity, 0LL);
      GameObjectExtensions__SetLocalPosition(v13, Position, 0LL);
      v15 = v4->fields.entity;
      if ( !v15 )
        goto LABEL_34;
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)System_Int32__ToString((int)v15 + 16, 0LL);
      if ( !v13 )
        goto LABEL_34;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v13, (System_String_o *)this, 0LL);
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v13,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)UnityEngine_Object__op_Inequality(
                                                                    Component_srcLineSprite,
                                                                    0LL,
                                                                    0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_34;
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, struct EventUiEntity_o *, const char *))Component_srcLineSprite->klass[1]._1.gc_desc)(
                                                                      Component_srcLineSprite,
                                                                      v4->fields.entity,
                                                                      Component_srcLineSprite->klass[1]._1.name);
        _4__this = v4->fields.__4__this;
        if ( !_4__this )
          goto LABEL_34;
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)_4__this->fields._eventUIEntity_k__BackingField;
        if ( !this )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoUIBase__Add__);
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_34;
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)this,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventUiValueMaster___);
        if ( this )
        {
          v18 = v4->fields.entity;
          if ( v18 )
          {
            List = EventUiValueMaster__getList((EventUiValueMaster_o *)this, v18->fields.objectId, 0LL);
            ((void (__fastcall *)(UnityEngine_Object_o *, EventUiValueEntity_array *, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
              Component_srcLineSprite,
              List,
              Component_srcLineSprite->klass[1]._1.byval_arg.data);
            return;
          }
LABEL_34:
          sub_B0D97C(this);
        }
      }
    }
  }
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass26_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass26_0___PlayAnim_b__0(
        TitleInfoEventUIComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w8
  bool v3; // zf

  v2 = this->fields.callbackCount - 1;
  v3 = this->fields.callbackCount == 1;
  this->fields.callbackCount = v2;
  if ( v2 < 0 || v3 )
    ActionExtensions__Call(this->fields.callback, 0LL);
}