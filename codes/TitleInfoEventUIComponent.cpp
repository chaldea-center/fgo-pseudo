void __fastcall TitleInfoEventUIComponent___ctor(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_42E6C57 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_AssetData__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EventInfoUIBase__TypeInfo, v17, v18, v19);
    byte_42E6C57 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.eventUiPrefabList = (struct System_Collections_Generic_List_EventInfoUIBase__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventUiPrefabList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoUIBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
  this->fields._eventUIEntity_k__BackingField = (struct EventUiEntity_o *)v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._eventUIEntity_k__BackingField,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
  this[1].klass = (TitleInfoEventUIComponent_c *)v34;
  sub_B5D560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
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

  if ( (byte_42E6C48 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo, (_DWORD)eventUIEntity, isMap, isEventReward);
    byte_42E6C48 = 1;
  }
  v12 = sub_B5D694(TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo);
  TitleInfoEventUIComponent__AsyncSetup_d__14___ctor((TitleInfoEventUIComponent__AsyncSetup_d__14_o *)v12, 0, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 48) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 48), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 32) = eventUIEntity;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 56), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  return (System_Collections_IEnumerator_o *)v12;
}


System_String_o *__fastcall TitleInfoEventUIComponent__GetAssetName(
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventUiEntity_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *v11; // x0
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x0
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF
  int v16; // [xsp+18h] [xbp-18h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-14h] BYREF

  v4 = eventUIEntity;
  if ( (byte_42E6C56 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v5, v6, v7);
    eventUIEntity = (EventUiEntity_o *)sub_B5D5C4(&StringLiteral_6287/*"EventUI/Prefabs/{0}/{1}"*/, v8, v9, v10);
    byte_42E6C56 = 1;
  }
  if ( !v4 )
    sub_B5D69C(eventUIEntity, method);
  if ( v4->fields.eventId )
  {
    eventId = v4->fields.eventId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    return System_String__Format((System_String_o *)StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v11, 0LL);
  }
  else
  {
    v16 = 0;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    warId = v4->fields.warId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
    return System_String__Format_44573324((System_String_o *)StringLiteral_6287/*"EventUI/Prefabs/{0}/{1}"*/, v13, v14, 0LL);
  }
}


UnityEngine_Vector3_o __fastcall TitleInfoEventUIComponent__GetPosition(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t x; // w20
  EventUiEntity_c *v6; // x0
  float *p_EVNET_UI_POSITION_MAGNIFICATION; // x8
  float v8; // s0
  float v9; // s1
  float v10; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6C53 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_B5D5C4(&EventUiEntity_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E6C53 = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  x = entity->fields.x;
  v6 = EventUiEntity_TypeInfo;
  if ( (BYTE3(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUiEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
    v6 = EventUiEntity_TypeInfo;
  }
  p_EVNET_UI_POSITION_MAGNIFICATION = &v6->static_fields->EVNET_UI_POSITION_MAGNIFICATION;
  v8 = *p_EVNET_UI_POSITION_MAGNIFICATION * (float)x;
  v9 = -(float)(*p_EVNET_UI_POSITION_MAGNIFICATION * (float)entity->fields.y);
  v10 = 0.0;
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *eventUIEntity_k__BackingField; // x0
  __int64 v18; // x1
  char v19; // w19
  int v20; // w20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E6C51 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__,
      playType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v14, v15, v16);
    byte_42E6C51 = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
        &v22,
        eventUIEntity_k__BackingField,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v22,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
      {
        if ( !v22.fields.current )
          sub_B5D69C(0LL, v18);
        if ( (((__int64 (*)(void))v22.fields.current->klass->vtable[7].method)() & 1) != 0 )
        {
          v19 = 1;
          v20 = 2;
          goto LABEL_11;
        }
      }
      v20 = 0;
      v19 = 0;
LABEL_11:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v22,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUIEntity_k__BackingField) = (v20 == 2) & v19;
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

  if ( (byte_42E6C49 & 1) == 0 )
  {
    sub_B5D5C4(
      &TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo,
      (_DWORD)eventUIEntity,
      (_DWORD)callback,
      method);
    byte_42E6C49 = 1;
  }
  v7 = sub_B5D694(TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo);
  TitleInfoEventUIComponent__LoadAssetBundle_d__15___ctor(
    (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = eventUIEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)eventUIEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TitleInfoEventUIComponent__OnDestroy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0

  if ( (byte_42E6C55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase__Clear__, (_DWORD)method, v2, v3);
    byte_42E6C55 = 1;
  }
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventInfoUIBase__Clear__);
  TitleInfoEventUIComponent__ReleaseAsset(this, method);
}


void __fastcall TitleInfoEventUIComponent__PlayAnim(
        TitleInfoEventUIComponent_o *this,
        int32_t playType,
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
  __int64 v31; // x23
  struct EventUiEntity_o *v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x8
  int eventId; // w8
  System_Action_o *v42; // x22
  Il2CppObject *current; // x21
  _BOOL8 v44; // x0
  __int64 v45; // x1
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E6C52 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, playType, (_DWORD)callback, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__, v25, v26, v27);
    sub_B5D5C4(&TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo, v28, v29, v30);
    byte_42E6C52 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v31 = sub_B5D694(TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo);
  TitleInfoEventUIComponent___c__DisplayClass26_0___ctor((TitleInfoEventUIComponent___c__DisplayClass26_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_18;
  *(_QWORD *)(v31 + 16) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)callback, v34, v35, v36, v37, v38, v39);
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( !eventUIEntity_k__BackingField || (eventId = eventUIEntity_k__BackingField->fields.eventId, eventId < 1) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v31 + 16), 0LL);
    return;
  }
  *(_DWORD *)(v31 + 24) = eventId;
  v42 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v31,
    Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__,
    0LL);
  v32 = this->fields._eventUIEntity_k__BackingField;
  if ( !v32 )
LABEL_18:
    sub_B5D69C(v32, v33);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v46,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v32,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
  {
    current = v46.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v44 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v44 )
    {
      ActionExtensions__Call(v42, 0LL);
    }
    else
    {
      if ( !current )
        sub_B5D69C(v44, v45);
      ((void (__fastcall *)(Il2CppObject *, _QWORD, System_Action_o *, Il2CppMethodPointer))current->klass->vtable[8].method)(
        current,
        (unsigned int)playType,
        v42,
        current->klass->vtable[9].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
}


void __fastcall TitleInfoEventUIComponent__Redisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0
  Il2CppObject *current; // x19
  _BOOL8 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E6C47 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E6C47 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v21.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v19 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v19 )
      {
        if ( !current )
          sub_B5D69C(v19, v20);
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[10].method)(
          current,
          current->klass->vtable[11].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__ReleaseAsset(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  Il2CppObject *current; // x20
  __int64 v22; // x1
  struct System_Collections_Generic_List_EventInfoUIBase__o *v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E6C54 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v17, v18, v19);
    byte_42E6C54 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUiPrefabList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v24.fields.current;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_30657564((AssetData_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v23 = this->fields.eventUiPrefabList;
    if ( !v23 )
      sub_B5D69C(0LL, v22);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v23,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_AssetData__Clear__);
  }
}


void __fastcall TitleInfoEventUIComponent__SetActiveChildren(
        TitleInfoEventUIComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  bool i; // w20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_IEnumerator_c *v23; // x8
  unsigned __int64 v24; // x10
  System_Collections_IEnumerator_c **v25; // x11
  __int64 v26; // x0
  UnityEngine_Component_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  __int64 v32; // x0
  __int64 v33; // x3
  __int64 v34; // x8
  __int64 v35; // x19
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0

  if ( (byte_42E6C4B & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, isActive, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v9, v10, v11);
    byte_42E6C4B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v13);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v14);
  for ( i = isActive; ; UnityEngine_GameObject__SetActive(gameObject, i, 0LL) )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = (System_Collections_IEnumerator_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 1].method;
    }
    else
    {
LABEL_17:
      v26 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v22);
    }
    v27 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v26)(
                                       Enumerator,
                                       *(_QWORD *)(v26 + 8));
    if ( !v27 )
      sub_B5D69C(0LL, v28);
    v29 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (UnityEngine_Transform_c *)v27->klass->_2.typeHierarchy[v29 - 1] != UnityEngine_Transform_TypeInfo )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_B5D990(v27);
LABEL_34:
      sub_B5D69C(gameObject, v31);
    }
    gameObject = UnityEngine_Component__get_gameObject(v27, 0LL);
    if ( !gameObject )
      goto LABEL_34;
  }
  v32 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v32 )
  {
    v34 = *(_QWORD *)v32;
    v35 = v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_29;
      }
      v38 = v34 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_29:
      v38 = sub_AF54C0(v32, System_IDisposable_TypeInfo, 0LL, v33);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
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
      sub_B5D69C(0LL, v6);
    if ( EventUiEntity__IsDispArea(v11, 1, 0LL) )
      TitleInfoEventUIComponent__SwitchSpotState(this, spotId > 0, v12);
  }
}


void __fastcall TitleInfoEventUIComponent__SetGameObject(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
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
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v32; // x20

  if ( (byte_42E6C4E & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__, v9, v10, v11);
    sub_B5D5C4(&TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo, v12, v13, v14);
    byte_42E6C4E = 1;
  }
  v15 = sub_B5D694(TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo);
  TitleInfoEventUIComponent___c__DisplayClass22_0___ctor((TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v15, 0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 16) = entity;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)entity, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  AssetName = TitleInfoEventUIComponent__GetAssetName(*(EventUiEntity_o **)(v15 + 16), v30);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v15,
    Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, v32, 1, 0LL);
}


void __fastcall TitleInfoEventUIComponent__SetImage(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TitleInfoEventUIComponent_o *v5; // x20
  System_String_o *v6; // x0
  UISprite_o *eventInfoAssetDataList; // x22
  System_String_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x20
  const MethodInfo *v11; // x2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E6C4F & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E6C4F = 1;
  }
  if ( !entity )
    goto LABEL_11;
  v6 = System_Int32__ToString((int)entity + 52, 0LL);
  eventInfoAssetDataList = (UISprite_o *)v5->fields.eventInfoAssetDataList;
  v8 = v6;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(eventInfoAssetDataList, v8, 0LL);
  this = (TitleInfoEventUIComponent_o *)v5->fields.eventInfoAssetDataList;
  if ( !this
    || (((void (__fastcall *)(TitleInfoEventUIComponent_o *, const char *))this->klass[2]._1.gc_desc)(
          this,
          this->klass[2]._1.name),
        (this = (TitleInfoEventUIComponent_o *)v5->fields.eventInfoAssetDataList) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__ResetLocalScale(gameObject, 0LL),
        (this = (TitleInfoEventUIComponent_o *)v5->fields.eventInfoAssetDataList) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(this, entity);
  }
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)v10, entity, v11);
  GameObjectExtensions__SetLocalPosition(v10, Position, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__SetValue(
        TitleInfoEventUIComponent_o *this,
        int32_t valueType,
        Il2CppObject *val,
        int32_t setType,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0
  Il2CppObject *current; // x22
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E6C50 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__,
      valueType,
      (_DWORD)val,
      *(_QWORD *)&setType);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E6C50 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v25,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v25.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v23 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v23 )
      {
        if ( !current )
          sub_B5D69C(v23, v24);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppObject *, _QWORD, Il2CppMethodPointer))current->klass->vtable[6].method)(
          current,
          (unsigned int)valueType,
          val,
          (unsigned int)setType,
          current->klass->vtable[7].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v25,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__SwitchSpotState(
        TitleInfoEventUIComponent_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0
  _BOOL4 v19; // w19
  Il2CppObject *current; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E6C4C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__,
      isOpen,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E6C4C = 1;
  }
  memset(&v23, 0, sizeof(v23));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v19 = isOpen;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v23.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v21 )
      {
        if ( !current )
          sub_B5D69C(v21, v22);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))current->klass->vtable[11].method)(
          current,
          v19,
          current->klass->vtable[12].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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
  __int64 v3; // x3
  UnityEngine_Object_o *eventInfoAssetDataList; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t objectType; // w8

  if ( (byte_42E6C4A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E6C4A = 1;
  }
  eventInfoAssetDataList = (UnityEngine_Object_o *)this->fields.eventInfoAssetDataList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(eventInfoAssetDataList, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !entity )
      sub_B5D69C(v7, v8);
    objectType = entity->fields.objectType;
    if ( objectType == 3 )
    {
      TitleInfoEventUIComponent__SetGameObject(this, entity, v9);
    }
    else if ( objectType == 2 )
    {
      TitleInfoEventUIComponent__SetImage(this, entity, v9);
    }
  }
}


void __fastcall TitleInfoEventUIComponent__UpdatePartsDisp(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E6C4D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__get_Count__, v14, v15, v16);
    byte_42E6C4D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
  if ( klass && klass->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      klass,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__) )
    {
      if ( !v19.fields.current )
        sub_B5D69C(0LL, v18);
      TitleInfoEventUIPartsComponent__UpdateDisp((TitleInfoEventUIPartsComponent_o *)v19.fields.current, v18);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  struct TitleInfoEventUIComponent_o *_4__this; // x20
  __int64 v13; // x21
  __int64 v14; // x0
  struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o *v15; // x1
  EventUiEntity_o *v16; // x22
  System_Action_o *v17; // x23
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42E624A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__, v5, v6, v7);
    sub_B5D5C4(&TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo, v8, v9, v10);
    byte_42E624A = 1;
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
      v13 = sub_B5D694(TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v13, 0LL);
      if ( !v13 )
        goto LABEL_11;
      *(_QWORD *)(v13 + 16) = this->fields.eventUIEntity;
      sub_B5D560(v13 + 16);
      *(_BYTE *)(v13 + 24) = this->fields.isMap;
      *(_BYTE *)(v13 + 25) = this->fields.isEventReward;
      *(_QWORD *)(v13 + 32) = this->fields.__4__this;
      sub_B5D560(v13 + 32);
      *(_QWORD *)(v13 + 40) = this->fields.callback;
      sub_B5D560(v13 + 40);
      v15 = *(struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o **)(v13 + 16);
      if ( v15 )
      {
        if ( _4__this )
        {
          _4__this->fields.eventUIPartsList = v15;
          sub_B5D560(&_4__this->fields.eventUIPartsList);
          v16 = *(EventUiEntity_o **)(v13 + 16);
          v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v13,
            Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__,
            0LL);
          this->fields.__2__current = (Il2CppObject *)TitleInfoEventUIComponent__LoadAssetBundle(
                                                        _4__this,
                                                        v16,
                                                        v17,
                                                        0LL);
          p__2__current = &this->fields.__2__current;
          sub_B5D560(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_11:
        sub_B5D69C(v14, v15);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TitleInfoEventUIComponent__AsyncSetup_d__14_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *v4; // x19
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
  int32_t _1__state; // w8
  Il2CppObject *v18; // x21
  struct TitleInfoEventUIComponent___c__DisplayClass15_0_o **p__8__1; // x20
  System_String_o *AssetName; // x0
  Il2CppObject *_8__1; // x23
  System_String_o *v22; // x21
  AssetLoader_LoadEndDataHandler_o *v23; // x22
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int v26; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42E624B & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__, v11, v12, v13);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)sub_B5D5C4(
                                                                   &TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo,
                                                                   v14,
                                                                   v15,
                                                                   v16);
    byte_42E624B = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = &v4->fields.__8__1;
    v4->fields.__1__state = -1;
    goto LABEL_13;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v18 = (Il2CppObject *)sub_B5D694(TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo);
    System_Object___ctor(v18, 0LL);
    p__8__1 = &v4->fields.__8__1;
    v4->fields.__8__1 = (struct TitleInfoEventUIComponent___c__DisplayClass15_0_o *)v18;
    sub_B5D560(&v4->fields.__8__1);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)v4->fields.__8__1;
    if ( !this )
      goto LABEL_19;
    *(_QWORD *)&this->fields.__1__state = v4->fields.__4__this;
    sub_B5D560(&this->fields);
    if ( !v4->fields.eventUIEntity )
    {
LABEL_17:
      ActionExtensions__Call(v4->fields.callback, 0LL);
      return 0;
    }
    if ( !*p__8__1 )
LABEL_19:
      sub_B5D69C(this, method);
    (*p__8__1)->fields.isAssetLoaded = 0;
    AssetName = TitleInfoEventUIComponent__GetAssetName(v4->fields.eventUIEntity, 0LL);
    _8__1 = (Il2CppObject *)v4->fields.__8__1;
    v22 = AssetName;
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v23,
      _8__1,
      Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)AssetManager__loadAssetStorage(v22, v23, 1, 0LL);
    v4->fields._isAssetFound_5__2 = (unsigned __int8)this & 1;
LABEL_13:
    if ( *p__8__1 )
    {
      if ( !(*p__8__1)->fields.isAssetLoaded && v4->fields._isAssetFound_5__2 )
      {
        v26 = 0;
        v4->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TitleInfoEventUIComponent__LoadAssetBundle_d__15_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EventUiEntity_o *eventUIEntity; // x0
  struct TitleInfoEventUIComponent_o **p__4__this; // x20

  if ( (byte_42E6247 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__, v5, v6, v7);
    byte_42E6247 = 1;
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
                                             (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___),
        !*p__4__this)
    || (method = (const MethodInfo *)eventUIEntity, (eventUIEntity = (EventUiEntity_o *)(*p__4__this)[1].klass) == 0LL)
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)eventUIEntity,
          (System_Collections_Generic_IEnumerable_T__o *)method,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__),
        (eventUIEntity = (EventUiEntity_o *)*p__4__this) == 0LL)
    || (TitleInfoEventUIComponent__UpdatePartsDisp((TitleInfoEventUIComponent_o *)eventUIEntity, 0LL),
        (eventUIEntity = this->fields.eventUIEntity) == 0LL) )
  {
LABEL_27:
    sub_B5D69C(eventUIEntity, method);
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
  __int64 v3; // x3
  TitleInfoEventUIComponent___c__DisplayClass15_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  struct TitleInfoEventUIComponent_o *v10; // x8

  v5 = this;
  if ( (byte_42E6248 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__Add__, (_DWORD)asset, (_DWORD)method, v3);
    this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)sub_B5D5C4(
                                                                  &Method_System_Collections_Generic_List_AssetData__Contains__,
                                                                  v6,
                                                                  v7,
                                                                  v8);
    byte_42E6248 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)_4__this->fields.eventUiPrefabList;
  if ( !this )
    goto LABEL_10;
  this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                                (WarBoardManager_TaskList_o *)asset,
                                                                (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_AssetData__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v10 = v5->fields.__4__this;
    if ( v10 )
    {
      this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)v10->fields.eventUiPrefabList;
      if ( this )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)asset,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AssetData__Add__);
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_B5D69C(this, asset);
  }
LABEL_9:
  v5->fields.isAssetLoaded = 1;
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
  __int64 v3; // x3
  TitleInfoEventUIComponent___c__DisplayClass22_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct EventUiEntity_o *entity; // x8
  UnityEngine_Object_o *Object_30642600; // x20
  UnityEngine_Object_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventUiEntity_o *v26; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  struct EventUiEntity_o *v29; // x8
  EventUiValueEntity_array *List; // x1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E6249 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventUiValueMaster___, (_DWORD)prefabData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoUIBase__Add__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)sub_B5D5C4(
                                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                                  v18,
                                                                  v19,
                                                                  v20);
    byte_42E6249 = 1;
  }
  entity = v5->fields.entity;
  if ( !entity )
    goto LABEL_34;
  this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)System_Int32__ToString((int)entity + 52, 0LL);
  if ( !prefabData )
    goto LABEL_34;
  Object_30642600 = AssetData__GetObject_30642600(prefabData, (System_String_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Object_30642600, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = UnityEngine_Object__Instantiate_35619384(Object_30642600, 0LL);
    if ( v23 )
      v24 = (UnityEngine_GameObject_c *)v23->klass == UnityEngine_GameObject_TypeInfo
          ? (UnityEngine_GameObject_o *)v23
          : 0LL;
    else
      v24 = 0LL;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
    {
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v5->fields.__4__this;
      if ( !this )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SafeSetParent_32436524(v24, gameObject, 0LL);
      GameObjectExtensions__ResetLocalScale(v24, 0LL);
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v5->fields.__4__this;
      if ( !this )
        goto LABEL_34;
      Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)this, v5->fields.entity, 0LL);
      GameObjectExtensions__SetLocalPosition(v24, Position, 0LL);
      v26 = v5->fields.entity;
      if ( !v26 )
        goto LABEL_34;
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)System_Int32__ToString((int)v26 + 16, 0LL);
      if ( !v24 )
        goto LABEL_34;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v24, (System_String_o *)this, 0LL);
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v24,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
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
                                                                      v5->fields.entity,
                                                                      Component_srcLineSprite->klass[1]._1.name);
        _4__this = v5->fields.__4__this;
        if ( !_4__this )
          goto LABEL_34;
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)_4__this->fields._eventUIEntity_k__BackingField;
        if ( !this )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoUIBase__Add__);
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_34;
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)this,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventUiValueMaster___);
        if ( this )
        {
          v29 = v5->fields.entity;
          if ( v29 )
          {
            List = EventUiValueMaster__getList((EventUiValueMaster_o *)this, v29->fields.objectId, 0LL);
            ((void (__fastcall *)(UnityEngine_Object_o *, EventUiValueEntity_array *, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
              Component_srcLineSprite,
              List,
              Component_srcLineSprite->klass[1]._1.byval_arg.data);
            return;
          }
LABEL_34:
          sub_B5D69C(this, prefabData);
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