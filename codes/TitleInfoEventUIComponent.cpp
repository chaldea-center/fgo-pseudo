void __fastcall TitleInfoEventUIComponent___ctor(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4350301 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
    sub_B70694(&System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_EventInfoUIBase__TypeInfo);
    byte_4350301 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.eventUiPrefabList = (struct System_Collections_Generic_List_EventInfoUIBase__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.eventUiPrefabList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventInfoUIBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
  this->fields._eventUIEntity_k__BackingField = (struct EventUiEntity_o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._eventUIEntity_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
  this[1].klass = (TitleInfoEventUIComponent_c *)v17;
  sub_B70630((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_43502F2 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo);
    byte_43502F2 = 1;
  }
  v12 = sub_B70764(TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo);
  TitleInfoEventUIComponent__AsyncSetup_d__14___ctor((TitleInfoEventUIComponent__AsyncSetup_d__14_o *)v12, 0, 0LL);
  if ( !v12 )
    sub_B7076C(v13, v14);
  *(_QWORD *)(v12 + 48) = this;
  sub_B70630((BattleServantConfConponent_o *)(v12 + 48), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 32) = eventUIEntity;
  sub_B70630(
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
  sub_B70630((BattleServantConfConponent_o *)(v12 + 56), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  return (System_Collections_IEnumerator_o *)v12;
}


System_String_o *__fastcall TitleInfoEventUIComponent__GetAssetName(
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventUiEntity_o *v3; // x19
  Il2CppObject *v4; // x0
  Il2CppObject *v6; // x20
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF
  int v10; // [xsp+18h] [xbp-18h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-14h] BYREF

  v3 = eventUIEntity;
  if ( (byte_4350300 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_6299/*"EventUI/Prefabs/{0}"*/);
    eventUIEntity = (EventUiEntity_o *)sub_B70694(&StringLiteral_6300/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_4350300 = 1;
  }
  if ( !v3 )
    sub_B7076C(eventUIEntity, method);
  if ( v3->fields.eventId )
  {
    eventId = v3->fields.eventId;
    v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2);
    return System_String__Format((System_String_o *)StringLiteral_6299/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
  }
  else
  {
    v10 = 0;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v2);
    warId = v3->fields.warId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v7);
    return System_String__Format_44753704((System_String_o *)StringLiteral_6300/*"EventUI/Prefabs/{0}/{1}"*/, v6, v8, 0LL);
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

  if ( (byte_43502FD & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_B70694(&EventUiEntity_TypeInfo);
    byte_43502FD = 1;
  }
  if ( !entity )
    sub_B7076C(this, entity);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *eventUIEntity_k__BackingField; // x0
  __int64 v5; // x1
  char v6; // w19
  int v7; // w20
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43502FB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    byte_43502FB = 1;
  }
  memset(&v9, 0, sizeof(v9));
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
        &v9,
        eventUIEntity_k__BackingField,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v9,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
      {
        if ( !v9.fields.current )
          sub_B7076C(0LL, v5);
        if ( (((__int64 (*)(void))v9.fields.current->klass->vtable[7].method)() & 1) != 0 )
        {
          v6 = 1;
          v7 = 2;
          goto LABEL_11;
        }
      }
      v7 = 0;
      v6 = 0;
LABEL_11:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v9,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUIEntity_k__BackingField) = (v7 == 2) & v6;
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

  if ( (byte_43502F3 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo);
    byte_43502F3 = 1;
  }
  v7 = sub_B70764(TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo);
  TitleInfoEventUIComponent__LoadAssetBundle_d__15___ctor(
    (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = eventUIEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)eventUIEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TitleInfoEventUIComponent__OnDestroy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0

  if ( (byte_43502FF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoUIBase__Clear__);
    byte_43502FF = 1;
  }
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventInfoUIBase__Clear__);
  TitleInfoEventUIComponent__ReleaseAsset(this, method);
}


void __fastcall TitleInfoEventUIComponent__PlayAnim(
        TitleInfoEventUIComponent_o *this,
        int32_t playType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x23
  struct EventUiEntity_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x8
  int eventId; // w8
  System_Action_o *v18; // x22
  Il2CppObject *current; // x21
  _BOOL8 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_43502FC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_B70694(&TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo);
    byte_43502FC = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v7 = sub_B70764(TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo);
  TitleInfoEventUIComponent___c__DisplayClass26_0___ctor((TitleInfoEventUIComponent___c__DisplayClass26_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)callback, v10, v11, v12, v13, v14, v15);
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( !eventUIEntity_k__BackingField || (eventId = eventUIEntity_k__BackingField->fields.eventId, eventId < 1) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 16), 0LL);
    return;
  }
  *(_DWORD *)(v7 + 24) = eventId;
  v18 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__,
    0LL);
  v8 = this->fields._eventUIEntity_k__BackingField;
  if ( !v8 )
LABEL_18:
    sub_B7076C(v8, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v8,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v20 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v20 )
    {
      ActionExtensions__Call(v18, 0LL);
    }
    else
    {
      if ( !current )
        sub_B7076C(v20, v21);
      ((void (__fastcall *)(Il2CppObject *, _QWORD, System_Action_o *, Il2CppMethodPointer))current->klass->vtable[8].method)(
        current,
        (unsigned int)playType,
        v18,
        current->klass->vtable[9].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
}


void __fastcall TitleInfoEventUIComponent__Redisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43502F1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43502F1 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v7.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v5 )
      {
        if ( !current )
          sub_B7076C(v5, v6);
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[10].method)(
          current,
          current->klass->vtable[11].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__ReleaseAsset(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventInfoUIBase__o *v6; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43502FE & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    byte_43502FE = 1;
  }
  memset(&v7, 0, sizeof(v7));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUiPrefabList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v7.fields.current;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_31197044((AssetData_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v6 = this->fields.eventUiPrefabList;
    if ( !v6 )
      sub_B7076C(0LL, v5);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_AssetData__Clear__);
  }
}


void __fastcall TitleInfoEventUIComponent__SetActiveChildren(
        TitleInfoEventUIComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  __int64 v7; // x1
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
  __int64 v19; // x1
  __int64 v20; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x19
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0

  if ( (byte_43502F5 & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&UnityEngine_Transform_TypeInfo);
    byte_43502F5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B7076C(0LL, v6);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B7076C(0LL, v7);
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
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v17 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_B7076C(0LL, v19);
    v20 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[v20 - 1] != UnityEngine_Transform_TypeInfo )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_B70A60(v18);
LABEL_34:
      sub_B7076C(gameObject, v22);
    }
    gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !gameObject )
      goto LABEL_34;
  }
  v23 = sub_B70754(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v24 = *(_QWORD *)v23;
    v25 = v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_29;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_29:
      v28 = sub_B08590(v23, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
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
      sub_B7076C(0LL, v6);
    if ( EventUiEntity__IsDispArea(v11, 1, 0LL) )
      TitleInfoEventUIComponent__SwitchSpotState(this, spotId > 0, v12);
  }
}


void __fastcall TitleInfoEventUIComponent__SetGameObject(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v22; // x20

  if ( (byte_43502F8 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__);
    sub_B70694(&TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo);
    byte_43502F8 = 1;
  }
  v5 = sub_B70764(TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo);
  TitleInfoEventUIComponent___c__DisplayClass22_0___ctor((TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = entity;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)entity, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  AssetName = TitleInfoEventUIComponent__GetAssetName(*(EventUiEntity_o **)(v5 + 16), v20);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, v22, 1, 0LL);
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
  if ( (byte_43502F9 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_B70694(&AtlasManager_TypeInfo);
    byte_43502F9 = 1;
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
    sub_B7076C(this, entity);
  }
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)v9, entity, v10);
  GameObjectExtensions__SetLocalPosition(v9, Position, 0LL);
}


void __fastcall TitleInfoEventUIComponent__SetValue(
        TitleInfoEventUIComponent_o *this,
        int32_t valueType,
        Il2CppObject *val,
        int32_t setType,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0
  Il2CppObject *current; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_43502FA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43502FA = 1;
  }
  memset(&v13, 0, sizeof(v13));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v13.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v11 )
      {
        if ( !current )
          sub_B7076C(v11, v12);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppObject *, _QWORD, Il2CppMethodPointer))current->klass->vtable[6].method)(
          current,
          (unsigned int)valueType,
          val,
          (unsigned int)setType,
          current->klass->vtable[7].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__SwitchSpotState(
        TitleInfoEventUIComponent_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUIEntity_k__BackingField; // x0
  _BOOL4 v6; // w19
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43502F6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43502F6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUIEntity_k__BackingField,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v6 = isOpen;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v10.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v8 )
      {
        if ( !current )
          sub_B7076C(v8, v9);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))current->klass->vtable[11].method)(
          current,
          v6,
          current->klass->vtable[12].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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

  if ( (byte_43502F4 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43502F4 = 1;
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
      sub_B7076C(v6, v7);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43502F7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__get_Count__);
    byte_43502F7 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
  if ( klass && klass->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v5,
      klass,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v5,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__) )
    {
      if ( !v5.fields.current )
        sub_B7076C(0LL, v4);
      TitleInfoEventUIPartsComponent__UpdateDisp((TitleInfoEventUIPartsComponent_o *)v5.fields.current, v4);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v5,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
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
  sub_B70630(
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
  int32_t _1__state; // w8
  struct TitleInfoEventUIComponent_o *_4__this; // x20
  __int64 v5; // x21
  __int64 v6; // x0
  struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o *v7; // x1
  EventUiEntity_o *v8; // x22
  System_Action_o *v9; // x23
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_434F292 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__);
    sub_B70694(&TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo);
    byte_434F292 = 1;
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
      v5 = sub_B70764(TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0LL);
      if ( !v5 )
        goto LABEL_11;
      *(_QWORD *)(v5 + 16) = this->fields.eventUIEntity;
      sub_B70630(v5 + 16);
      *(_BYTE *)(v5 + 24) = this->fields.isMap;
      *(_BYTE *)(v5 + 25) = this->fields.isEventReward;
      *(_QWORD *)(v5 + 32) = this->fields.__4__this;
      sub_B70630(v5 + 32);
      *(_QWORD *)(v5 + 40) = this->fields.callback;
      sub_B70630(v5 + 40);
      v7 = *(struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o **)(v5 + 16);
      if ( v7 )
      {
        if ( _4__this )
        {
          _4__this->fields.eventUIPartsList = v7;
          sub_B70630(&_4__this->fields.eventUIPartsList);
          v8 = *(EventUiEntity_o **)(v5 + 16);
          v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v9,
            (Il2CppObject *)v5,
            Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__,
            0LL);
          this->fields.__2__current = (Il2CppObject *)TitleInfoEventUIComponent__LoadAssetBundle(_4__this, v8, v9, 0LL);
          p__2__current = &this->fields.__2__current;
          sub_B70630(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_11:
        sub_B7076C(v6, v7);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_TitleInfoEventUIComponent__AsyncSetup_d__14_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  int32_t _1__state; // w8
  Il2CppObject *v5; // x21
  struct TitleInfoEventUIComponent___c__DisplayClass15_0_o **p__8__1; // x20
  System_String_o *AssetName; // x0
  Il2CppObject *_8__1; // x23
  System_String_o *v9; // x21
  AssetLoader_LoadEndDataHandler_o *v10; // x22
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_434F293 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)sub_B70694(&TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo);
    byte_434F293 = 1;
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
    v5 = (Il2CppObject *)sub_B70764(TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    p__8__1 = &v3->fields.__8__1;
    v3->fields.__8__1 = (struct TitleInfoEventUIComponent___c__DisplayClass15_0_o *)v5;
    sub_B70630(&v3->fields.__8__1);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)v3->fields.__8__1;
    if ( !this )
      goto LABEL_19;
    *(_QWORD *)&this->fields.__1__state = v3->fields.__4__this;
    sub_B70630(&this->fields);
    if ( !v3->fields.eventUIEntity )
    {
LABEL_17:
      ActionExtensions__Call(v3->fields.callback, 0LL);
      return 0;
    }
    if ( !*p__8__1 )
LABEL_19:
      sub_B7076C(this, method);
    (*p__8__1)->fields.isAssetLoaded = 0;
    AssetName = TitleInfoEventUIComponent__GetAssetName(v3->fields.eventUIEntity, 0LL);
    _8__1 = (Il2CppObject *)v3->fields.__8__1;
    v9 = AssetName;
    v10 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v10,
      _8__1,
      Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)AssetManager__loadAssetStorage(v9, v10, 1, 0LL);
    v3->fields._isAssetFound_5__2 = (unsigned __int8)this & 1;
LABEL_13:
    if ( *p__8__1 )
    {
      if ( !(*p__8__1)->fields.isAssetLoaded && v3->fields._isAssetFound_5__2 )
      {
        v13 = 0;
        v3->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v2);
        p__2__current = &v3->fields.__2__current;
        sub_B70630(p__2__current);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_TitleInfoEventUIComponent__LoadAssetBundle_d__15_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  EventUiEntity_o *eventUIEntity; // x0
  struct TitleInfoEventUIComponent_o **p__4__this; // x20

  if ( (byte_434F28F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__);
    byte_434F28F = 1;
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
                                             (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___),
        !*p__4__this)
    || (method = (const MethodInfo *)eventUIEntity, (eventUIEntity = (EventUiEntity_o *)(*p__4__this)[1].klass) == 0LL)
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)eventUIEntity,
          (System_Collections_Generic_IEnumerable_T__o *)method,
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__),
        (eventUIEntity = (EventUiEntity_o *)*p__4__this) == 0LL)
    || (TitleInfoEventUIComponent__UpdatePartsDisp((TitleInfoEventUIComponent_o *)eventUIEntity, 0LL),
        (eventUIEntity = this->fields.eventUIEntity) == 0LL) )
  {
LABEL_27:
    sub_B7076C(eventUIEntity, method);
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
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  struct TitleInfoEventUIComponent_o *v6; // x8

  v4 = this;
  if ( (byte_434F290 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_AssetData__Add__);
    this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)sub_B70694(&Method_System_Collections_Generic_List_AssetData__Contains__);
    byte_434F290 = 1;
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
                                                                (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_AssetData__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v6 = v4->fields.__4__this;
    if ( v6 )
    {
      this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)v6->fields.eventUiPrefabList;
      if ( this )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)asset,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_AssetData__Add__);
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_B7076C(this, asset);
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
  struct EventUiEntity_o *entity; // x8
  UnityEngine_Object_o *Object_31182080; // x20
  UnityEngine_Object_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventUiEntity_o *v10; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  struct EventUiEntity_o *v13; // x8
  EventUiValueEntity_array *List; // x1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_434F291 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventUiValueMaster___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoUIBase__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F291 = 1;
  }
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_34;
  this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)System_Int32__ToString((int)entity + 52, 0LL);
  if ( !prefabData )
    goto LABEL_34;
  Object_31182080 = AssetData__GetObject_31182080(prefabData, (System_String_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Object_31182080, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__Instantiate_36066356(Object_31182080, 0LL);
    if ( v7 )
      v8 = (UnityEngine_GameObject_c *)v7->klass == UnityEngine_GameObject_TypeInfo
         ? (UnityEngine_GameObject_o *)v7
         : 0LL;
    else
      v8 = 0LL;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
    {
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SafeSetParent_32503456(v8, gameObject, 0LL);
      GameObjectExtensions__ResetLocalScale(v8, 0LL);
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_34;
      Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)this, v4->fields.entity, 0LL);
      GameObjectExtensions__SetLocalPosition(v8, Position, 0LL);
      v10 = v4->fields.entity;
      if ( !v10 )
        goto LABEL_34;
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)System_Int32__ToString((int)v10 + 16, 0LL);
      if ( !v8 )
        goto LABEL_34;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)this, 0LL);
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v8,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
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
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventInfoUIBase__Add__);
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_34;
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)this,
                                                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventUiValueMaster___);
        if ( this )
        {
          v13 = v4->fields.entity;
          if ( v13 )
          {
            List = EventUiValueMaster__getList((EventUiValueMaster_o *)this, v13->fields.objectId, 0LL);
            ((void (__fastcall *)(UnityEngine_Object_o *, EventUiValueEntity_array *, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
              Component_srcLineSprite,
              List,
              Component_srcLineSprite->klass[1]._1.byval_arg.data);
            return;
          }
LABEL_34:
          sub_B7076C(this, prefabData);
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