void __fastcall TitleInfoEventUIComponent___ctor(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20

  if ( (byte_40F8420 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_List_AssetData__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoUIBase__TypeInfo, v10);
    byte_40F8420 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_AssetData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.eventUiPrefabList = (struct System_Collections_Generic_List_EventInfoUIBase__o *)v11;
  sub_B16F98(&this->fields.eventUiPrefabList, v11);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventInfoUIBase__TypeInfo,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
  this->fields._eventUIEntity_k__BackingField = (struct EventUiEntity_o *)v16;
  sub_B16F98(&this->fields._eventUIEntity_k__BackingField, v16);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
  this[1].klass = (TitleInfoEventUIComponent_c *)v21;
  sub_B16F98(&this[1], v21);
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40F8411 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo, eventUIEntity);
    byte_40F8411 = 1;
  }
  v12 = sub_B170CC(TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo, eventUIEntity, isMap, isEventReward, isCaldea);
  TitleInfoEventUIComponent__AsyncSetup_d__14___ctor((TitleInfoEventUIComponent__AsyncSetup_d__14_o *)v12, 0, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 48) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 48), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 32) = eventUIEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 32),
    (System_Int32_array **)eventUIEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *(_BYTE *)(v12 + 40) = isMap;
  *(_BYTE *)(v12 + 41) = isEventReward;
  *(_QWORD *)(v12 + 56) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 56), (System_Int32_array **)callback, v25, v26, v27, v28, v29, v30);
  return (System_Collections_IEnumerator_o *)v12;
}


System_String_o *__fastcall TitleInfoEventUIComponent__GetAssetName(
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x0
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF
  int v10; // [xsp+18h] [xbp-18h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40F841F & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6189, v3);
    sub_B16FFC(&StringLiteral_6190, v4);
    byte_40F841F = 1;
  }
  if ( !eventUIEntity )
    sub_B170D4();
  if ( eventUIEntity->fields.eventId )
  {
    eventId = eventUIEntity->fields.eventId;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    return System_String__Format((System_String_o *)StringLiteral_6189, v5, 0LL);
  }
  else
  {
    v10 = 0;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    warId = eventUIEntity->fields.warId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
    return System_String__Format_43739268((System_String_o *)StringLiteral_6190, v7, v8, 0LL);
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

  if ( (byte_40F841C & 1) == 0 )
  {
    sub_B16FFC(&EventUiEntity_TypeInfo, entity);
    byte_40F841C = 1;
  }
  if ( !entity )
    sub_B170D4();
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


bool __fastcall TitleInfoEventUIComponent__IsPlayAnim(
        TitleInfoEventUIComponent_o *this,
        int32_t playType,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *eventUIEntity_k__BackingField; // x0
  char v13; // w19
  int v14; // w20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F841A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, playType, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v4, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v6, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v8, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v10, v11);
    byte_40F841A = 1;
  }
  memset(&v16, 0, sizeof(v16));
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
        &v16,
        eventUIEntity_k__BackingField,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v16,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
      {
        if ( !v16.fields.current )
          sub_B170D4();
        if ( (((__int64 (*)(void))v16.fields.current->klass->vtable[7].method)() & 1) != 0 )
        {
          v13 = 1;
          v14 = 2;
          goto LABEL_11;
        }
      }
      v14 = 0;
      v13 = 0;
LABEL_11:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v16,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUIEntity_k__BackingField) = (v14 == 2) & v13;
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
  __int64 v4; // x4
  __int64 v8; // x22
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

  if ( (byte_40F8412 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo, eventUIEntity);
    byte_40F8412 = 1;
  }
  v8 = sub_B170CC(TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo, eventUIEntity, callback, method, v4);
  TitleInfoEventUIComponent__LoadAssetBundle_d__15___ctor(
    (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = eventUIEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 40),
    (System_Int32_array **)eventUIEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)(v8 + 48) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall TitleInfoEventUIComponent__OnDestroy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0

  if ( (byte_40F841E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase__Clear__, method);
    byte_40F841E = 1;
  }
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventInfoUIBase__Clear__);
  TitleInfoEventUIComponent__ReleaseAsset(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__PlayAnim(
        TitleInfoEventUIComponent_o *this,
        int32_t playType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v22; // x1
  __int64 v23; // x2
  TitleInfoEventUIComponent___c__DisplayClass26_0_o *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x8
  int eventId; // w8
  System_Action_o *v31; // x22
  struct EventUiEntity_o *v32; // x0
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F841B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, playType, callback);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, v8, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v10, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v12, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v14, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v16, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_B16FFC(&Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__, v20, v21);
    sub_B16FFC(&TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo, v22, v23);
    byte_40F841B = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v24 = (TitleInfoEventUIComponent___c__DisplayClass26_0_o *)sub_B170CC(
                                                               TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo,
                                                               *(_QWORD *)&playType,
                                                               callback,
                                                               method,
                                                               v4);
  TitleInfoEventUIComponent___c__DisplayClass26_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_18;
  v24->fields.callback = callback;
  sub_B16F98(&v24->fields, callback);
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( !eventUIEntity_k__BackingField || (eventId = eventUIEntity_k__BackingField->fields.eventId, eventId < 1) )
  {
    ActionExtensions__Call(v24->fields.callback, 0LL);
    return;
  }
  v24->fields.callbackCount = eventId;
  v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v24,
    Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__,
    0LL);
  v32 = this->fields._eventUIEntity_k__BackingField;
  if ( !v32 )
LABEL_18:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v32,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
  {
    current = v34.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      ActionExtensions__Call(v31, 0LL);
    }
    else
    {
      if ( !current )
        sub_B170D4();
      ((void (__fastcall *)(Il2CppObject *, _QWORD, System_Action_o *, Il2CppMethodPointer))current->klass->vtable[8].method)(
        current,
        (unsigned int)playType,
        v31,
        current->klass->vtable[9].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
}


void __fastcall TitleInfoEventUIComponent__Redisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8410 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F8410 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v9.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !current )
          sub_B170D4();
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[10].method)(
          current,
          current->klass->vtable[11].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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

  if ( (byte_40F841D & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v7);
    byte_40F841D = 1;
  }
  memset(&v11, 0, sizeof(v11));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUiPrefabList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v11.fields.current;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0();
      }
      AssetManager__releaseAsset_29947376((AssetData_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v10 = this->fields.eventUiPrefabList;
    if ( !v10 )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_AssetData__Clear__);
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

  if ( (byte_40F8414 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, isActive);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v6);
    byte_40F8414 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B170D4();
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v17 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_B170D4();
    v19 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[v19 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v18);
LABEL_34:
      sub_B170D4();
    }
    gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !gameObject )
      goto LABEL_34;
  }
  v21 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
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
      v26 = sub_AAFEF8(v21, System_IDisposable_TypeInfo, 0LL);
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
      sub_B170D4();
    if ( EventUiEntity__IsDispArea(v10, 1, 0LL) )
      TitleInfoEventUIComponent__SwitchSpotState(this, spotId > 0, v11);
  }
}


void __fastcall TitleInfoEventUIComponent__SetGameObject(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_String_o *AssetName; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  AssetLoader_LoadEndDataHandler_o *v29; // x20

  if ( (byte_40F8417 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, entity);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__, v8);
    sub_B16FFC(&TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo, v9);
    byte_40F8417 = 1;
  }
  v10 = sub_B170CC(TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo, entity, method, v3, v4);
  TitleInfoEventUIComponent___c__DisplayClass22_0___ctor((TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 16) = entity;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)entity, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  AssetName = TitleInfoEventUIComponent__GetAssetName(*(EventUiEntity_o **)(v10 + 16), v23);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v25, v26, v27, v28);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v10,
    Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, v29, 1, 0LL);
}


void __fastcall TitleInfoEventUIComponent__SetImage(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  UISprite_o *eventInfoAssetDataList; // x22
  System_String_o *v7; // x21
  struct System_Collections_Generic_List_AssetData__o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x20
  const MethodInfo *v13; // x2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8418 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, entity);
    byte_40F8418 = 1;
  }
  if ( !entity )
    goto LABEL_11;
  v5 = System_Int32__ToString((int)entity + 52, 0LL);
  eventInfoAssetDataList = (UISprite_o *)this->fields.eventInfoAssetDataList;
  v7 = v5;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(eventInfoAssetDataList, v7, 0LL);
  v8 = this->fields.eventInfoAssetDataList;
  if ( !v8
    || (((void (__fastcall *)(struct System_Collections_Generic_List_AssetData__o *, Il2CppMethodPointer))v8->klass->vtable._33_get_Item.method)(
          v8,
          v8->klass->vtable._34_get_Count.methodPtr),
        (v9 = (UnityEngine_Component_o *)this->fields.eventInfoAssetDataList) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v9, 0LL),
        GameObjectExtensions__ResetLocalScale(gameObject, 0LL),
        (v11 = (UnityEngine_Component_o *)this->fields.eventInfoAssetDataList) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
  Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)v12, entity, v13);
  GameObjectExtensions__SetLocalPosition(v12, Position, 0LL);
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
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8419 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, *(_QWORD *)&valueType);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40F8419 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v15.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !current )
          sub_B170D4();
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppObject *, _QWORD, Il2CppMethodPointer))current->klass->vtable[6].method)(
          current,
          (unsigned int)valueType,
          val,
          (unsigned int)setType,
          current->klass->vtable[7].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8415 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, isOpen);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F8415 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v10 = isOpen;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v12.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !current )
          sub_B170D4();
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))current->klass->vtable[11].method)(
          current,
          v10,
          current->klass->vtable[12].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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
  const MethodInfo *v6; // x2
  int32_t objectType; // w8

  if ( (byte_40F8413 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, entity);
    byte_40F8413 = 1;
  }
  eventInfoAssetDataList = (UnityEngine_Object_o *)this->fields.eventInfoAssetDataList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(eventInfoAssetDataList, 0LL, 0LL) )
  {
    if ( !entity )
      sub_B170D4();
    objectType = entity->fields.objectType;
    if ( objectType == 3 )
    {
      TitleInfoEventUIComponent__SetGameObject(this, entity, v6);
    }
    else if ( objectType == 2 )
    {
      TitleInfoEventUIComponent__SetImage(this, entity, v6);
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

  if ( (byte_40F8416 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__get_Count__, v6);
    byte_40F8416 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
  if ( klass && klass->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      klass,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B170D4();
      TitleInfoEventUIPartsComponent__UpdateDisp((TitleInfoEventUIPartsComponent_o *)v9.fields.current, v8);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct TitleInfoEventUIComponent_o *_4__this; // x20
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **eventUIEntity; // x1
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **callback; // x1
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
  System_Int32_array **v38; // x1
  EventUiEntity_o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Action_o *v44; // x23
  Il2CppObject *AssetBundle; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  bool result; // w0

  if ( (byte_40F7834 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__, v6);
    sub_B16FFC(&TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo, v7);
    byte_40F7834 = 1;
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
      v10 = sub_B170CC(TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor((Il2CppObject *)v10, 0LL);
      if ( !v10 )
        goto LABEL_11;
      eventUIEntity = (System_Int32_array **)this->fields.eventUIEntity;
      *(_QWORD *)(v10 + 16) = eventUIEntity;
      sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), eventUIEntity, v11, v12, v13, v14, v15, v16);
      *(_BYTE *)(v10 + 24) = this->fields.isMap;
      *(_BYTE *)(v10 + 25) = this->fields.isEventReward;
      v18 = (System_Int32_array **)this->fields.__4__this;
      *(_QWORD *)(v10 + 32) = v18;
      sub_B16F98((BattleServantConfConponent_o *)(v10 + 32), v18, v19, v20, v21, v22, v23, v24);
      callback = (System_Int32_array **)this->fields.callback;
      *(_QWORD *)(v10 + 40) = callback;
      sub_B16F98((BattleServantConfConponent_o *)(v10 + 40), callback, v26, v27, v28, v29, v30, v31);
      v38 = *(System_Int32_array ***)(v10 + 16);
      if ( v38 )
      {
        if ( _4__this )
        {
          _4__this->fields.eventUIPartsList = (struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o *)v38;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields.eventUIPartsList,
            v38,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
          v39 = *(EventUiEntity_o **)(v10 + 16);
          v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
          System_Action___ctor(
            v44,
            (Il2CppObject *)v10,
            Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__,
            0LL);
          AssetBundle = (Il2CppObject *)TitleInfoEventUIComponent__LoadAssetBundle(_4__this, v39, v44, 0LL);
          this->fields.__2__current = AssetBundle;
          p__2__current = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)p__2__current,
            (System_Int32_array **)AssetBundle,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_11:
        sub_B170D4();
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_TitleInfoEventUIComponent__AsyncSetup_d__14_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  Il2CppObject *v11; // x21
  struct TitleInfoEventUIComponent___c__DisplayClass15_0_o **p__8__1; // x20
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
  struct TitleInfoEventUIComponent___c__DisplayClass15_0_o *_8__1; // x0
  System_Int32_array **_4__this; // x1
  System_String_o *AssetName; // x0
  Il2CppObject *v28; // x23
  System_String_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  AssetLoader_LoadEndDataHandler_o *v34; // x22
  Il2CppObject *v35; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  bool result; // w0
  int v44; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F7835 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__, v8);
    sub_B16FFC(&TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo, v9);
    byte_40F7835 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = &this->fields.__8__1;
    this->fields.__1__state = -1;
    goto LABEL_13;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v11 = (Il2CppObject *)sub_B170CC(TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor(v11, 0LL);
    p__8__1 = &this->fields.__8__1;
    this->fields.__8__1 = (struct TitleInfoEventUIComponent___c__DisplayClass15_0_o *)v11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v11,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_19;
    _4__this = (System_Int32_array **)this->fields.__4__this;
    _8__1->fields.__4__this = (struct TitleInfoEventUIComponent_o *)_4__this;
    sub_B16F98((BattleServantConfConponent_o *)&_8__1->fields, _4__this, v19, v20, v21, v22, v23, v24);
    if ( !this->fields.eventUIEntity )
    {
LABEL_17:
      ActionExtensions__Call(this->fields.callback, 0LL);
      return 0;
    }
    if ( !*p__8__1 )
LABEL_19:
      sub_B170D4();
    (*p__8__1)->fields.isAssetLoaded = 0;
    AssetName = TitleInfoEventUIComponent__GetAssetName(this->fields.eventUIEntity, 0LL);
    v28 = (Il2CppObject *)this->fields.__8__1;
    v29 = AssetName;
    v34 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v30, v31, v32, v33);
    AssetLoader_LoadEndDataHandler___ctor(
      v34,
      v28,
      Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    this->fields._isAssetFound_5__2 = AssetManager__loadAssetStorage(v29, v34, 1, 0LL);
LABEL_13:
    if ( *p__8__1 )
    {
      if ( !(*p__8__1)->fields.isAssetLoaded && this->fields._isAssetFound_5__2 )
      {
        v44 = 0;
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        this->fields.__2__current = v35;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v35,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_TitleInfoEventUIComponent__LoadAssetBundle_d__15_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  EventUiEntity_o *v5; // x0
  EventUiEntity_o *v6; // x0
  EventUiEntity_o *v7; // x0
  TitleInfoEventUIComponent_o *_4__this; // x0
  UnityEngine_Component_o **p__4__this; // x20
  UnityEngine_Component_o *transform; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_Collections_Generic_IEnumerable_T__o *v12; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v13; // x0
  EventUiEntity_o *v14; // x0

  if ( (byte_40F7831 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__, v3);
    byte_40F7831 = 1;
  }
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_27;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 1, 0LL) && this->fields.isMap )
    goto LABEL_14;
  v5 = this->fields.eventUIEntity;
  if ( !v5 )
    goto LABEL_27;
  if ( EventUiEntity__IsDispArea(v5, 2, 0LL) && this->fields.isEventReward )
    goto LABEL_14;
  v6 = this->fields.eventUIEntity;
  if ( !v6 )
    goto LABEL_27;
  if ( EventUiEntity__IsDispArea(v6, 4, 0LL) )
    goto LABEL_14;
  v7 = this->fields.eventUIEntity;
  if ( !v7 )
    goto LABEL_27;
  if ( EventUiEntity__IsDispArea(v7, 8, 0LL) && this->fields.isMap )
  {
LABEL_14:
    p__4__this = (UnityEngine_Component_o **)&this->fields.__4__this;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_27;
    TitleInfoEventUIComponent__UpdateEventUI(_4__this, this->fields.eventUIEntity, 0LL);
  }
  else
  {
    p__4__this = (UnityEngine_Component_o **)&this->fields.__4__this;
  }
  if ( !*p__4__this
    || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*p__4__this, 0LL)) == 0LL
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    transform,
                                                                    1,
                                                                    (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___),
        !*p__4__this)
    || (v12 = (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
        (v13 = *(System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)&(*p__4__this)[2].fields.m_CachedPtr) == 0LL)
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          v13,
          v12,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__),
        !*p__4__this)
    || (TitleInfoEventUIComponent__UpdatePartsDisp((TitleInfoEventUIComponent_o *)*p__4__this, 0LL),
        (v14 = this->fields.eventUIEntity) == 0LL) )
  {
LABEL_27:
    sub_B170D4();
  }
  if ( EventUiEntity__IsDispArea(v14, 8, 0LL) )
  {
    if ( *p__4__this )
    {
      TitleInfoEventUIComponent__SetActiveChildren((TitleInfoEventUIComponent_o *)*p__4__this, 0, 0LL);
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
  __int64 v5; // x1
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *eventUiPrefabList; // x0
  struct TitleInfoEventUIComponent_o *v8; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x0

  if ( (byte_40F7832 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData__Add__, asset);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData__Contains__, v5);
    byte_40F7832 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventUiPrefabList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)_4__this->fields.eventUiPrefabList;
  if ( !eventUiPrefabList )
    goto LABEL_10;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          eventUiPrefabList,
          (WarBoardManager_TaskList_o *)asset,
          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_AssetData__Contains__) )
  {
    v8 = this->fields.__4__this;
    if ( v8 )
    {
      v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v8->fields.eventUiPrefabList;
      if ( v9 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)asset,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AssetData__Add__);
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_B170D4();
  }
LABEL_9:
  this->fields.isAssetLoaded = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventUiEntity_o *entity; // x8
  System_String_o *v11; // x0
  UnityEngine_Object_o *Object_29932412; // x20
  UnityEngine_Object_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventUIComponent_o *v17; // x0
  struct EventUiEntity_o *v18; // x8
  System_String_o *v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x20
  struct TitleInfoEventUIComponent_o *v21; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *eventUIEntity_k__BackingField; // x0
  WebViewManager_o *Instance; // x0
  EventUiValueMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventUiEntity_o *v25; // x8
  EventUiValueEntity_array *List; // x1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7833 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventUiValueMaster___, prefabData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___, v5);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoUIBase__Add__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F7833 = 1;
  }
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_34;
  v11 = System_Int32__ToString((int)entity + 52, 0LL);
  if ( !prefabData )
    goto LABEL_34;
  Object_29932412 = AssetData__GetObject_29932412(prefabData, v11, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Object_29932412, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__Instantiate_34808612(Object_29932412, 0LL);
    if ( v13 )
      v14 = (UnityEngine_GameObject_c *)v13->klass == UnityEngine_GameObject_TypeInfo
          ? (UnityEngine_GameObject_o *)v13
          : 0LL;
    else
      v14 = 0LL;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
      GameObjectExtensions__SafeSetParent_27425996(v14, gameObject, 0LL);
      GameObjectExtensions__ResetLocalScale(v14, 0LL);
      v17 = this->fields.__4__this;
      if ( !v17 )
        goto LABEL_34;
      Position = TitleInfoEventUIComponent__GetPosition(v17, this->fields.entity, 0LL);
      GameObjectExtensions__SetLocalPosition(v14, Position, 0LL);
      v18 = this->fields.entity;
      if ( !v18 )
        goto LABEL_34;
      v19 = System_Int32__ToString((int)v18 + 16, 0LL);
      if ( !v14 )
        goto LABEL_34;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v14, v19, 0LL);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         v14,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_34;
        ((void (__fastcall *)(EventMissionProgressRequest_Argument_ProgressData_o *, struct EventUiEntity_o *, const char *))Component_srcLineSprite->klass[1]._1.gc_desc)(
          Component_srcLineSprite,
          this->fields.entity,
          Component_srcLineSprite->klass[1]._1.name);
        v21 = this->fields.__4__this;
        if ( !v21 )
          goto LABEL_34;
        eventUIEntity_k__BackingField = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v21->fields._eventUIEntity_k__BackingField;
        if ( !eventUIEntity_k__BackingField )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          eventUIEntity_k__BackingField,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoUIBase__Add__);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        MasterData_WarQuestSelectionMaster = (EventUiValueMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventUiValueMaster___);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v25 = this->fields.entity;
          if ( v25 )
          {
            List = EventUiValueMaster__getList(MasterData_WarQuestSelectionMaster, v25->fields.objectId, 0LL);
            ((void (__fastcall *)(EventMissionProgressRequest_Argument_ProgressData_o *, EventUiValueEntity_array *, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
              Component_srcLineSprite,
              List,
              Component_srcLineSprite->klass[1]._1.byval_arg.data);
            return;
          }
LABEL_34:
          sub_B170D4();
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