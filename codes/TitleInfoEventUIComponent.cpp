void __fastcall TitleInfoEventUIComponent___ctor(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_41863CF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_List_AssetData__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_List_EventInfoUIBase__TypeInfo, v7);
    byte_41863CF = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.eventUiPrefabList = (struct System_Collections_Generic_List_EventInfoUIBase__o *)v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventUiPrefabList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventInfoUIBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
  this->fields._eventUIEntity_k__BackingField = (struct EventUiEntity_o *)v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._eventUIEntity_k__BackingField,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
  this[1].klass = (TitleInfoEventUIComponent_c *)v22;
  sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


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
  __int64 v14; // x1
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
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_41863C0 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo, eventUIEntity);
    byte_41863C0 = 1;
  }
  v12 = sub_B2C42C(TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo);
  TitleInfoEventUIComponent__AsyncSetup_d__14___ctor((TitleInfoEventUIComponent__AsyncSetup_d__14_o *)v12, 0, 0LL);
  if ( !v12 )
    sub_B2C434(v13, v14);
  *(_QWORD *)(v12 + 48) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 48), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 32) = eventUIEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v12 + 32),
    (System_Int32_array **)eventUIEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *(_BYTE *)(v12 + 40) = isMap;
  *(_BYTE *)(v12 + 41) = isEventReward;
  *(_QWORD *)(v12 + 56) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 56), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
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
  if ( (byte_41863CE & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v3);
    eventUIEntity = (EventUiEntity_o *)sub_B2C35C(&StringLiteral_6208/*"EventUI/Prefabs/{0}/{1}"*/, v4);
    byte_41863CE = 1;
  }
  if ( !v2 )
    sub_B2C434(eventUIEntity, method);
  if ( v2->fields.eventId )
  {
    eventId = v2->fields.eventId;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    return System_String__Format((System_String_o *)StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v5, 0LL);
  }
  else
  {
    v10 = 0;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    warId = v2->fields.warId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
    return System_String__Format_44301068((System_String_o *)StringLiteral_6208/*"EventUI/Prefabs/{0}/{1}"*/, v7, v8, 0LL);
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

  if ( (byte_41863CB & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_B2C35C(&EventUiEntity_TypeInfo, entity);
    byte_41863CB = 1;
  }
  if ( !entity )
    sub_B2C434(this, entity);
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
  __int64 v9; // x1
  char v10; // w19
  int v11; // w20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41863C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, *(_QWORD *)&playType);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v7);
    byte_41863C9 = 1;
  }
  memset(&v13, 0, sizeof(v13));
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
        &v13,
        eventUIEntity_k__BackingField,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v13,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
      {
        if ( !v13.fields.current )
          sub_B2C434(0LL, v9);
        if ( (((__int64 (*)(void))v13.fields.current->klass->vtable[7].method)() & 1) != 0 )
        {
          v10 = 1;
          v11 = 2;
          goto LABEL_11;
        }
      }
      v11 = 0;
      v10 = 0;
LABEL_11:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v13,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUIEntity_k__BackingField) = (v11 == 2) & v10;
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
  __int64 v9; // x1
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_41863C1 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo, eventUIEntity);
    byte_41863C1 = 1;
  }
  v7 = sub_B2C42C(TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo);
  TitleInfoEventUIComponent__LoadAssetBundle_d__15___ctor(
    (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = eventUIEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)eventUIEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TitleInfoEventUIComponent__OnDestroy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0

  if ( (byte_41863CD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase__Clear__, method);
    byte_41863CD = 1;
  }
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventInfoUIBase__Clear__);
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
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x8
  int eventId; // w8
  System_Action_o *v26; // x22
  Il2CppObject *current; // x21
  _BOOL8 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_41863CA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&playType);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__, v13);
    sub_B2C35C(&TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo, v14);
    byte_41863CA = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v15 = sub_B2C42C(TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo);
  TitleInfoEventUIComponent___c__DisplayClass26_0___ctor((TitleInfoEventUIComponent___c__DisplayClass26_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_18;
  *(_QWORD *)(v15 + 16) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( !eventUIEntity_k__BackingField || (eventId = eventUIEntity_k__BackingField->fields.eventId, eventId < 1) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v15 + 16), 0LL);
    return;
  }
  *(_DWORD *)(v15 + 24) = eventId;
  v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v15,
    Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__,
    0LL);
  v16 = this->fields._eventUIEntity_k__BackingField;
  if ( !v16 )
LABEL_18:
    sub_B2C434(v16, v17);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
  {
    current = v30.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v28 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v28 )
    {
      ActionExtensions__Call(v26, 0LL);
    }
    else
    {
      if ( !current )
        sub_B2C434(v28, v29);
      ((void (__fastcall *)(Il2CppObject *, _QWORD, System_Action_o *, Il2CppMethodPointer))current->klass->vtable[8].method)(
        current,
        (unsigned int)playType,
        v26,
        current->klass->vtable[9].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41863BF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_41863BF = 1;
  }
  memset(&v11, 0, sizeof(v11));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v11.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v9 )
      {
        if ( !current )
          sub_B2C434(v9, v10);
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[10].method)(
          current,
          current->klass->vtable[11].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventInfoUIBase__o *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41863CC & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v7);
    byte_41863CC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUiPrefabList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v12.fields.current;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_30152684((AssetData_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v11 = this->fields.eventUiPrefabList;
    if ( !v11 )
      sub_B2C434(0LL, v10);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_AssetData__Clear__);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  bool i; // w20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_IEnumerator_c *v18; // x8
  unsigned __int64 v19; // x10
  System_Collections_IEnumerator_c **v20; // x11
  __int64 v21; // x0
  UnityEngine_Component_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  __int64 v27; // x0
  __int64 v28; // x3
  __int64 v29; // x8
  __int64 v30; // x19
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0

  if ( (byte_41863C3 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, isActive);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v6);
    byte_41863C3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v8);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v9);
  for ( i = isActive; ; UnityEngine_GameObject__SetActive(gameObject, i, 0LL) )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
      while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        v20 += 2;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1].method;
    }
    else
    {
LABEL_17:
      v21 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v17);
    }
    v22 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                       Enumerator,
                                       *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_B2C434(0LL, v23);
    v24 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (UnityEngine_Transform_c *)v22->klass->_2.typeHierarchy[v24 - 1] != UnityEngine_Transform_TypeInfo )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_B2C728(v22);
LABEL_34:
      sub_B2C434(gameObject, v26);
    }
    gameObject = UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !gameObject )
      goto LABEL_34;
  }
  v27 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v27 )
  {
    v29 = *(_QWORD *)v27;
    v30 = v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_29;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_29:
      v33 = sub_AC5258(v27, System_IDisposable_TypeInfo, 0LL, v28);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
}


void __fastcall TitleInfoEventUIComponent__SetDispEventUIForSpot(
        TitleInfoEventUIComponent_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  EventUiEntity_o *eventUIPartsList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  EventUiEntity_o *v8; // x0
  bool v9; // w1
  TitleInfoEventUIComponent_o *v10; // x0
  EventUiEntity_o *v11; // x0
  const MethodInfo *v12; // x2

  eventUIPartsList = (EventUiEntity_o *)this->fields.eventUIPartsList;
  if ( eventUIPartsList )
  {
    if ( EventUiEntity__IsDispArea(eventUIPartsList, 8, 0LL) )
    {
      v8 = (EventUiEntity_o *)this->fields.eventUIPartsList;
      if ( v8 && EventUiEntity__IsDispEventUIForSpot(v8, spotId, 0LL) )
      {
        v9 = 1;
        v10 = this;
      }
      else
      {
        v10 = this;
        v9 = 0;
      }
      TitleInfoEventUIComponent__SetActiveChildren(v10, v9, v7);
    }
    v11 = (EventUiEntity_o *)this->fields.eventUIPartsList;
    if ( !v11 )
      sub_B2C434(0LL, v6);
    if ( EventUiEntity__IsDispArea(v11, 1, 0LL) )
      TitleInfoEventUIComponent__SwitchSpotState(this, spotId > 0, v12);
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
  __int64 v10; // x1
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
  AssetLoader_LoadEndDataHandler_o *v25; // x20

  if ( (byte_41863C6 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, entity);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__, v6);
    sub_B2C35C(&TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo, v7);
    byte_41863C6 = 1;
  }
  v8 = sub_B2C42C(TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo);
  TitleInfoEventUIComponent___c__DisplayClass22_0___ctor((TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v8, 0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 16) = entity;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)entity, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  AssetName = TitleInfoEventUIComponent__GetAssetName(*(EventUiEntity_o **)(v8 + 16), v23);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v8,
    Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, v25, 1, 0LL);
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
  if ( (byte_41863C7 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_B2C35C(&AtlasManager_TypeInfo, entity);
    byte_41863C7 = 1;
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
    sub_B2C434(this, entity);
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
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_41863C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, *(_QWORD *)&valueType);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_41863C8 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v17.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v15 )
      {
        if ( !current )
          sub_B2C434(v15, v16);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppObject *, _QWORD, Il2CppMethodPointer))current->klass->vtable[6].method)(
          current,
          (unsigned int)valueType,
          val,
          (unsigned int)setType,
          current->klass->vtable[7].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41863C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, isOpen);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41863C4 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v10 = isOpen;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v14.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v12 )
      {
        if ( !current )
          sub_B2C434(v12, v13);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))current->klass->vtable[11].method)(
          current,
          v10,
          current->klass->vtable[12].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t objectType; // w8

  if ( (byte_41863C2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, entity);
    byte_41863C2 = 1;
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
      sub_B2C434(v6, v7);
    objectType = entity->fields.objectType;
    if ( objectType == 3 )
    {
      TitleInfoEventUIComponent__SetGameObject(this, entity, v8);
    }
    else if ( objectType == 2 )
    {
      TitleInfoEventUIComponent__SetImage(this, entity, v8);
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

  if ( (byte_41863C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__get_Count__, v6);
    byte_41863C5 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
  if ( klass && klass->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      klass,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B2C434(0LL, v8);
      TitleInfoEventUIPartsComponent__UpdateDisp((TitleInfoEventUIPartsComponent_o *)v9.fields.current, v8);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
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
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct TitleInfoEventUIComponent_o *_4__this; // x20
  __int64 v7; // x21
  __int64 v8; // x0
  struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o *v9; // x1
  struct EventUiEntity_o *eventUIEntity; // x1
  struct TitleInfoEventUIComponent_o *v11; // x1
  struct System_Action_o *callback; // x1
  EventUiEntity_o *v13; // x22
  System_Action_o *v14; // x23
  Il2CppObject *AssetBundle; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4185343 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__, v3);
    sub_B2C35C(&TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo, v4);
    byte_4185343 = 1;
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
      v7 = sub_B2C42C(TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0LL);
      if ( !v7 )
        goto LABEL_11;
      eventUIEntity = this->fields.eventUIEntity;
      *(_QWORD *)(v7 + 16) = eventUIEntity;
      sub_B2C2F8(v7 + 16, eventUIEntity);
      *(_BYTE *)(v7 + 24) = this->fields.isMap;
      *(_BYTE *)(v7 + 25) = this->fields.isEventReward;
      v11 = this->fields.__4__this;
      *(_QWORD *)(v7 + 32) = v11;
      sub_B2C2F8(v7 + 32, v11);
      callback = this->fields.callback;
      *(_QWORD *)(v7 + 40) = callback;
      sub_B2C2F8(v7 + 40, callback);
      v9 = *(struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o **)(v7 + 16);
      if ( v9 )
      {
        if ( _4__this )
        {
          _4__this->fields.eventUIPartsList = v9;
          sub_B2C2F8(&_4__this->fields.eventUIPartsList, v9);
          v13 = *(EventUiEntity_o **)(v7 + 16);
          v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v14,
            (Il2CppObject *)v7,
            Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__,
            0LL);
          AssetBundle = (Il2CppObject *)TitleInfoEventUIComponent__LoadAssetBundle(_4__this, v13, v14, 0LL);
          this->fields.__2__current = AssetBundle;
          p__2__current = &this->fields.__2__current;
          sub_B2C2F8(p__2__current, AssetBundle);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_11:
        sub_B2C434(v8, v9);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TitleInfoEventUIComponent__AsyncSetup_d__14_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  Il2CppObject *v8; // x21
  struct TitleInfoEventUIComponent___c__DisplayClass15_0_o **p__8__1; // x20
  struct TitleInfoEventUIComponent_o *_4__this; // x1
  System_String_o *AssetName; // x0
  Il2CppObject *_8__1; // x23
  System_String_o *v13; // x21
  AssetLoader_LoadEndDataHandler_o *v14; // x22
  __int64 v15; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4185344 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B2C35C(&Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__, v5);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)sub_B2C35C(
                                                                   &TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo,
                                                                   v6);
    byte_4185344 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = &v2->fields.__8__1;
    v2->fields.__1__state = -1;
    goto LABEL_13;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v8 = (Il2CppObject *)sub_B2C42C(TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo);
    System_Object___ctor(v8, 0LL);
    p__8__1 = &v2->fields.__8__1;
    v2->fields.__8__1 = (struct TitleInfoEventUIComponent___c__DisplayClass15_0_o *)v8;
    sub_B2C2F8(&v2->fields.__8__1, v8);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_19;
    _4__this = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = _4__this;
    sub_B2C2F8(&this->fields, _4__this);
    if ( !v2->fields.eventUIEntity )
    {
LABEL_17:
      ActionExtensions__Call(v2->fields.callback, 0LL);
      return 0;
    }
    if ( !*p__8__1 )
LABEL_19:
      sub_B2C434(this, method);
    (*p__8__1)->fields.isAssetLoaded = 0;
    AssetName = TitleInfoEventUIComponent__GetAssetName(v2->fields.eventUIEntity, 0LL);
    _8__1 = (Il2CppObject *)v2->fields.__8__1;
    v13 = AssetName;
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v14,
      _8__1,
      Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)AssetManager__loadAssetStorage(v13, v14, 1, 0LL);
    v2->fields._isAssetFound_5__2 = (unsigned __int8)this & 1;
LABEL_13:
    if ( *p__8__1 )
    {
      if ( !(*p__8__1)->fields.isAssetLoaded && v2->fields._isAssetFound_5__2 )
      {
        v18 = 0;
        v15 = j_il2cpp_value_box_0(int_TypeInfo, &v18);
        v2->fields.__2__current = (Il2CppObject *)v15;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, v15);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TitleInfoEventUIComponent__LoadAssetBundle_d__15_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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

  if ( (byte_4185340 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__, v3);
    byte_4185340 = 1;
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
                                             (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___),
        !*p__4__this)
    || (method = (const MethodInfo *)eventUIEntity, (eventUIEntity = (EventUiEntity_o *)(*p__4__this)[1].klass) == 0LL)
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)eventUIEntity,
          (System_Collections_Generic_IEnumerable_T__o *)method,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__),
        (eventUIEntity = (EventUiEntity_o *)*p__4__this) == 0LL)
    || (TitleInfoEventUIComponent__UpdatePartsDisp((TitleInfoEventUIComponent_o *)eventUIEntity, 0LL),
        (eventUIEntity = this->fields.eventUIEntity) == 0LL) )
  {
LABEL_27:
    sub_B2C434(eventUIEntity, method);
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
  if ( (byte_4185341 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData__Add__, asset);
    this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)sub_B2C35C(
                                                                  &Method_System_Collections_Generic_List_AssetData__Contains__,
                                                                  v5);
    byte_4185341 = 1;
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
                                                                (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_AssetData__Contains__);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AssetData__Add__);
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_B2C434(this, asset);
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
  UnityEngine_Object_o *Object_30137720; // x20
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
  if ( (byte_4185342 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventUiValueMaster___, prefabData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___, v5);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoUIBase__Add__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)sub_B2C35C(
                                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                                  v9);
    byte_4185342 = 1;
  }
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_34;
  this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)System_Int32__ToString((int)entity + 52, 0LL);
  if ( !prefabData )
    goto LABEL_34;
  Object_30137720 = AssetData__GetObject_30137720(prefabData, (System_String_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Object_30137720, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = UnityEngine_Object__Instantiate_35314044(Object_30137720, 0LL);
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
      GameObjectExtensions__SafeSetParent_31331952(v13, gameObject, 0LL);
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
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventInfoUIBase__Add__);
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_34;
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)this,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventUiValueMaster___);
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
          sub_B2C434(this, prefabData);
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