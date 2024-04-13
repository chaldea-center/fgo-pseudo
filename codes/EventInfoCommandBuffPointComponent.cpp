void __fastcall EventInfoCommandBuffPointComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E94A1 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoCommandBuffPointComponent_TypeInfo, v1, v2, v3);
    byte_42E94A1 = 1;
  }
  EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MIN = 0LL;
  EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MAX = 9999999LL;
}


void __fastcall EventInfoCommandBuffPointComponent___ctor(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCommandBuffPointComponent__GetEnableEventPointBuffEntity(
        EventInfoCommandBuffPointComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t userPoint,
        EventPointBuffEntity_o **nowEventPointBuff,
        EventPointBuffEntity_o **nextEventPointBuff,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  DataManager_o *Instance; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v44; // x22
  EventInfoCommandBuffPointComponent___c_c *v45; // x8
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x23
  Il2CppObject *v48; // x24
  struct EventInfoCommandBuffPointComponent___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  _BOOL8 v68; // x0
  __int64 v69; // x1
  Il2CppObject *current; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E94A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventPointBuffEntity___ctor__, eventId, groupId, userPoint);
    sub_B5D5C4(&System_Comparison_EventPointBuffEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__, v36, v37, v38);
    sub_B5D5C4(&EventInfoCommandBuffPointComponent___c_TypeInfo, v39, v40, v41);
    byte_42E94A0 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                (EventPointBuffMaster_o *)Instance,
                                eventId,
                                groupId,
                                0LL);
  v44 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v45 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  if ( (BYTE3(EventInfoCommandBuffPointComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCommandBuffPointComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent___c_TypeInfo);
    v45 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  }
  static_fields = v45->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v48,
      Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v49 = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    v49->__9__18_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__18_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v44 )
LABEL_22:
    sub_B5D69C(Instance, v43);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v44,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)nowEventPointBuff, 0LL, v56, v57, v58, v59, v60, v61);
  *nextEventPointBuff = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)nextEventPointBuff, 0LL, v62, v63, v64, v65, v66, v67);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v77,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v44,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v68 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v77,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v68 )
      break;
    current = v77.fields.current;
    if ( !v77.fields.current )
      sub_B5D69C(v68, v69);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v77.fields.current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_B5D560(
        (BattleServantConfConponent_o *)nowEventPointBuff,
        (System_Int32_array **)current,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      break;
    }
    *nextEventPointBuff = (EventPointBuffEntity_o *)current;
    sub_B5D560(
      (BattleServantConfConponent_o *)nextEventPointBuff,
      (System_Int32_array **)current,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v77,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


int64_t __fastcall EventInfoCommandBuffPointComponent__GetUserEventPoint(
        EventInfoCommandBuffPointComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21

  if ( (byte_42E949F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, eventId, groupId, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E949F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B5D69C(Instance, v13);
  return UserEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, groupId, 0LL);
}


void __fastcall EventInfoCommandBuffPointComponent__Setup(
        EventInfoCommandBuffPointComponent_o *this,
        EventUiEntity_o *eventUiEntity,
        EventUiValueEntity_o *eventUiValueEntity,
        EventInfoCommandBuffPointComponent_ViewData_o *viewData,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *bgSprite; // x21
  UISprite_o *v23; // x21
  System_String_o *BgSpriteName; // x22
  UIWidget_o *v25; // x0
  UnityEngine_Object_o *pointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *PointLabelSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v28; // x8
  UnityEngine_Object_o *buffValueLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *BuffValueSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v31; // x8
  UnityEngine_Object_o *needPointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *NeedPointSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v34; // x8

  if ( (byte_42E949D & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)eventUiEntity, (_DWORD)eventUiValueEntity, viewData);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E949D = 1;
  }
  this->fields.eventUiEntity = eventUiEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)eventUiEntity,
    (System_String_array **)eventUiValueEntity,
    (System_String_array **)viewData,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.eventUiValueEntity = eventUiValueEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventUiValueEntity,
    (System_Int32_array **)eventUiValueEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( viewData )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
    {
      v23 = this->fields.bgSprite;
      BgSpriteName = viewData->fields.BgSpriteName;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v23, BgSpriteName, 0LL);
      v25 = (UIWidget_o *)this->fields.bgSprite;
      if ( !v25 )
        goto LABEL_41;
      ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v25->klass->vtable._33_MakePixelPerfect.method)(
        v25,
        v25->klass->vtable._34_get_minWidth.methodPtr);
    }
    pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = (UIWidget_o *)UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v25 & 1) != 0 )
    {
      PointLabelSetting = viewData->fields.PointLabelSetting;
      if ( !PointLabelSetting )
        goto LABEL_41;
      v25 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v25 )
        goto LABEL_41;
      UIWidget__set_color(v25, PointLabelSetting->fields.BaseColor, 0LL);
      v28 = viewData->fields.PointLabelSetting;
      if ( !v28 )
        goto LABEL_41;
      v25 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v25 )
        goto LABEL_41;
      UILabel__set_effectColor((UILabel_o *)v25, v28->fields.EffectColor, 0LL);
    }
    buffValueLabel = (UnityEngine_Object_o *)this->fields.buffValueLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = (UIWidget_o *)UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v25 & 1) != 0 )
    {
      BuffValueSetting = viewData->fields.BuffValueSetting;
      if ( !BuffValueSetting )
        goto LABEL_41;
      v25 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v25 )
        goto LABEL_41;
      UIWidget__set_color(v25, BuffValueSetting->fields.BaseColor, 0LL);
      v31 = viewData->fields.BuffValueSetting;
      if ( !v31 )
        goto LABEL_41;
      v25 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v25 )
        goto LABEL_41;
      UILabel__set_effectColor((UILabel_o *)v25, v31->fields.EffectColor, 0LL);
    }
    needPointLabel = (UnityEngine_Object_o *)this->fields.needPointLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = (UIWidget_o *)UnityEngine_Object__op_Inequality(needPointLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v25 & 1) != 0 )
    {
      NeedPointSetting = viewData->fields.NeedPointSetting;
      if ( NeedPointSetting )
      {
        v25 = (UIWidget_o *)this->fields.needPointLabel;
        if ( v25 )
        {
          UIWidget__set_color(v25, NeedPointSetting->fields.BaseColor, 0LL);
          v34 = viewData->fields.NeedPointSetting;
          if ( v34 )
          {
            v25 = (UIWidget_o *)this->fields.needPointLabel;
            if ( v25 )
            {
              UILabel__set_effectColor((UILabel_o *)v25, v34->fields.EffectColor, 0LL);
              goto LABEL_40;
            }
          }
        }
      }
LABEL_41:
      sub_B5D69C(v25, v21);
    }
  }
LABEL_40:
  EventInfoCommandBuffPointComponent__UpdatePoint(this, v21);
}


void __fastcall EventInfoCommandBuffPointComponent__UpdatePoint(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  EventInfoCommandBuffPointComponent_o *v4; // x19
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  struct EventUiValueEntity_o *eventUiValueEntity; // x8
  int32_t v32; // w21
  EventInfoCommandBuffPointComponent_o *UserEventPoint; // x0
  const MethodInfo *v34; // x6
  UnityEngine_Object_o *pointLabel; // x20
  UILabel_o *v36; // x20
  System_String_o *v37; // x0
  int64_t point; // x22
  System_String_o *v39; // x21
  BalanceConfig_c *v40; // x8
  int64_t UserPointEventMax; // x23
  Il2CppObject *v42; // x0
  System_String_o *EventPointInfo; // x0
  __int64 v44; // x1
  UnityEngine_Object_o *buffValueLabel; // x20
  bool v46; // w0
  UILabel_o *v47; // x20
  int32_t value; // w21
  UnityEngine_Object_o *needPointLabel; // x20
  EventInfoCommandBuffPointComponent_c *v50; // x0
  int64_t v51; // x20
  int64_t USER_EVENT_POINT_REST_MIN; // x21
  int64_t v53; // x0
  UILabel_o *v54; // x19
  int64_t v55; // x20
  System_String_o *v56; // x21
  Il2CppObject *v57; // x0
  int64_t v58; // [xsp+8h] [xbp-48h] BYREF
  EventPointBuffEntity_o *nextEventPointBuff; // [xsp+10h] [xbp-40h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+18h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42E949E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventInfoCommandBuffPointComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&long_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Math_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5669/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, v23, v24, v25);
    this = (EventInfoCommandBuffPointComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42E949E = 1;
  }
  nextEventPointBuff = 0LL;
  nowEventPointBuff = 0LL;
  eventUiEntity = v4->fields.eventUiEntity;
  if ( eventUiEntity )
    eventId = eventUiEntity->fields.eventId;
  else
    eventId = 0;
  eventUiValueEntity = v4->fields.eventUiValueEntity;
  if ( eventUiValueEntity )
  {
    this = (EventInfoCommandBuffPointComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0LL);
    v32 = (int)this;
  }
  else
  {
    v32 = 0;
  }
  UserEventPoint = (EventInfoCommandBuffPointComponent_o *)EventInfoCommandBuffPointComponent__GetUserEventPoint(
                                                             this,
                                                             eventId,
                                                             v32,
                                                             v3);
  v4->fields.point = (int64_t)UserEventPoint;
  EventInfoCommandBuffPointComponent__GetEnableEventPointBuffEntity(
    UserEventPoint,
    eventId,
    v32,
    (int64_t)UserEventPoint,
    &nowEventPointBuff,
    &nextEventPointBuff,
    v34);
  pointLabel = (UnityEngine_Object_o *)v4->fields.pointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    v36 = v4->fields.pointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    point = v4->fields.point;
    v39 = v37;
    v40 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v40 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v40->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v58 = System_Math__Min_45149944(point, UserPointEventMax, 0LL);
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v58);
    EventPointInfo = System_String__Format(v39, v42, 0LL);
    if ( !v36 )
      goto LABEL_55;
    UILabel__set_text(v36, EventPointInfo, 0LL);
  }
  buffValueLabel = (UnityEngine_Object_o *)v4->fields.buffValueLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v46 = UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
  if ( nowEventPointBuff && v46 )
  {
    v47 = v4->fields.buffValueLabel;
    value = nowEventPointBuff->fields.value;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    EventPointInfo = LocalizationManager__GetEventPointInfo(0, value, (System_String_o *)StringLiteral_1/*""*/, 0, 0LL);
    if ( !v47 )
      goto LABEL_55;
    UILabel__set_text(v47, EventPointInfo, 0LL);
  }
  needPointLabel = (UnityEngine_Object_o *)v4->fields.needPointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(needPointLabel, 0LL, 0LL) )
  {
    if ( nextEventPointBuff )
    {
      v50 = EventInfoCommandBuffPointComponent_TypeInfo;
      v51 = nextEventPointBuff->fields.eventPoint - v4->fields.point;
      if ( (BYTE3(EventInfoCommandBuffPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoCommandBuffPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent_TypeInfo);
        v50 = EventInfoCommandBuffPointComponent_TypeInfo;
      }
      USER_EVENT_POINT_REST_MIN = v50->static_fields->USER_EVENT_POINT_REST_MIN;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v53 = System_Math__Max_45149496(v51, USER_EVENT_POINT_REST_MIN, 0LL);
      v54 = v4->fields.needPointLabel;
      v55 = v53;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
      v58 = System_Math__Min_45149944(
              v55,
              EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MAX,
              0LL);
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v58);
      EventPointInfo = System_String__Format(v56, v57, 0LL);
      if ( v54 )
      {
LABEL_49:
        UILabel__set_text(v54, EventPointInfo, 0LL);
        return;
      }
    }
    else
    {
      v54 = v4->fields.needPointLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      EventPointInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5669/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, 0LL);
      if ( v54 )
        goto LABEL_49;
    }
LABEL_55:
    sub_B5D69C(EventPointInfo, v44);
  }
}


float __fastcall EventInfoCommandBuffPointComponent__get_Height(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_B5D69C(this, method);
  return (float)bgSprite->fields.mHeight;
}


int64_t __fastcall EventInfoCommandBuffPointComponent__get_Point(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.point;
}


void __fastcall EventInfoCommandBuffPointComponent_LabelSetting___ctor(
        EventInfoCommandBuffPointComponent_LabelSetting_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCommandBuffPointComponent_ViewData___ctor(
        EventInfoCommandBuffPointComponent_ViewData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCommandBuffPointComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E652B & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoCommandBuffPointComponent___c_TypeInfo, v1, v2, v3);
    byte_42E652B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoCommandBuffPointComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoCommandBuffPointComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventInfoCommandBuffPointComponent___c___ctor(
        EventInfoCommandBuffPointComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoCommandBuffPointComponent___c___GetEnableEventPointBuffEntity_b__18_0(
        EventInfoCommandBuffPointComponent___c_o *this,
        EventPointBuffEntity_o *a,
        EventPointBuffEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}