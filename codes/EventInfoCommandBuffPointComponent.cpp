void __fastcall EventInfoCommandBuffPointComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42B0DB0 & 1) == 0 )
  {
    sub_B52984(&EventInfoCommandBuffPointComponent_TypeInfo);
    byte_42B0DB0 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v14; // x22
  EventInfoCommandBuffPointComponent___c_c *v15; // x8
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x23
  Il2CppObject *v18; // x24
  struct EventInfoCommandBuffPointComponent___c_StaticFields *v19; // x0
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B0DAF & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_EventPointBuffEntity___ctor__);
    sub_B52984(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__);
    sub_B52984(&EventInfoCommandBuffPointComponent___c_TypeInfo);
    byte_42B0DAF = 1;
  }
  memset(&v47, 0, sizeof(v47));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                (EventPointBuffMaster_o *)Instance,
                                eventId,
                                groupId,
                                0LL);
  v14 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v15 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  if ( (BYTE3(EventInfoCommandBuffPointComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCommandBuffPointComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent___c_TypeInfo);
    v15 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v18,
      Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v19 = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    v19->__9__18_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__18_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v19->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v14 )
LABEL_22:
    sub_B52A5C(Instance, v13);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v14,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_B52920((BattleServantConfConponent_o *)nowEventPointBuff, 0LL, v26, v27, v28, v29, v30, v31);
  *nextEventPointBuff = 0LL;
  sub_B52920((BattleServantConfConponent_o *)nextEventPointBuff, 0LL, v32, v33, v34, v35, v36, v37);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v38 )
      break;
    current = v47.fields.current;
    if ( !v47.fields.current )
      sub_B52A5C(v38, v39);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v47.fields.current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_B52920(
        (BattleServantConfConponent_o *)nowEventPointBuff,
        (System_Int32_array **)current,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      break;
    }
    *nextEventPointBuff = (EventPointBuffEntity_o *)current;
    sub_B52920(
      (BattleServantConfConponent_o *)nextEventPointBuff,
      (System_Int32_array **)current,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


int64_t __fastcall EventInfoCommandBuffPointComponent__GetUserEventPoint(
        EventInfoCommandBuffPointComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21

  if ( (byte_42B0DAE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0DAE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B52A5C(Instance, v7);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  UnityEngine_Object_o *bgSprite; // x21
  UISprite_o *v20; // x21
  System_String_o *BgSpriteName; // x22
  UIWidget_o *v22; // x0
  UnityEngine_Object_o *pointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *PointLabelSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v25; // x8
  UnityEngine_Object_o *buffValueLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *BuffValueSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v28; // x8
  UnityEngine_Object_o *needPointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *NeedPointSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v31; // x8

  if ( (byte_42B0DAC & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0DAC = 1;
  }
  this->fields.eventUiEntity = eventUiEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)eventUiEntity,
    (System_String_array **)eventUiValueEntity,
    (System_String_array **)viewData,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.eventUiValueEntity = eventUiValueEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventUiValueEntity,
    (System_Int32_array **)eventUiValueEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
      v20 = this->fields.bgSprite;
      BgSpriteName = viewData->fields.BgSpriteName;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v20, BgSpriteName, 0LL);
      v22 = (UIWidget_o *)this->fields.bgSprite;
      if ( !v22 )
        goto LABEL_41;
      ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v22->klass->vtable._33_MakePixelPerfect.method)(
        v22,
        v22->klass->vtable._34_get_minWidth.methodPtr);
    }
    pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = (UIWidget_o *)UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v22 & 1) != 0 )
    {
      PointLabelSetting = viewData->fields.PointLabelSetting;
      if ( !PointLabelSetting )
        goto LABEL_41;
      v22 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v22 )
        goto LABEL_41;
      UIWidget__set_color(v22, PointLabelSetting->fields.BaseColor, 0LL);
      v25 = viewData->fields.PointLabelSetting;
      if ( !v25 )
        goto LABEL_41;
      v22 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v22 )
        goto LABEL_41;
      UILabel__set_effectColor((UILabel_o *)v22, v25->fields.EffectColor, 0LL);
    }
    buffValueLabel = (UnityEngine_Object_o *)this->fields.buffValueLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = (UIWidget_o *)UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v22 & 1) != 0 )
    {
      BuffValueSetting = viewData->fields.BuffValueSetting;
      if ( !BuffValueSetting )
        goto LABEL_41;
      v22 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v22 )
        goto LABEL_41;
      UIWidget__set_color(v22, BuffValueSetting->fields.BaseColor, 0LL);
      v28 = viewData->fields.BuffValueSetting;
      if ( !v28 )
        goto LABEL_41;
      v22 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v22 )
        goto LABEL_41;
      UILabel__set_effectColor((UILabel_o *)v22, v28->fields.EffectColor, 0LL);
    }
    needPointLabel = (UnityEngine_Object_o *)this->fields.needPointLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = (UIWidget_o *)UnityEngine_Object__op_Inequality(needPointLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v22 & 1) != 0 )
    {
      NeedPointSetting = viewData->fields.NeedPointSetting;
      if ( NeedPointSetting )
      {
        v22 = (UIWidget_o *)this->fields.needPointLabel;
        if ( v22 )
        {
          UIWidget__set_color(v22, NeedPointSetting->fields.BaseColor, 0LL);
          v31 = viewData->fields.NeedPointSetting;
          if ( v31 )
          {
            v22 = (UIWidget_o *)this->fields.needPointLabel;
            if ( v22 )
            {
              UILabel__set_effectColor((UILabel_o *)v22, v31->fields.EffectColor, 0LL);
              goto LABEL_40;
            }
          }
        }
      }
LABEL_41:
      sub_B52A5C(v22, v18);
    }
  }
LABEL_40:
  EventInfoCommandBuffPointComponent__UpdatePoint(this, v18);
}


void __fastcall EventInfoCommandBuffPointComponent__UpdatePoint(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventInfoCommandBuffPointComponent_o *v3; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  struct EventUiValueEntity_o *eventUiValueEntity; // x8
  int32_t v7; // w21
  EventInfoCommandBuffPointComponent_o *UserEventPoint; // x0
  const MethodInfo *v9; // x6
  UnityEngine_Object_o *pointLabel; // x20
  UILabel_o *v11; // x20
  System_String_o *v12; // x0
  int64_t point; // x22
  System_String_o *v14; // x21
  BalanceConfig_c *v15; // x8
  int64_t UserPointEventMax; // x23
  Il2CppObject *v17; // x0
  System_String_o *EventPointInfo; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *buffValueLabel; // x20
  bool v21; // w0
  UILabel_o *v22; // x20
  int32_t value; // w21
  UnityEngine_Object_o *needPointLabel; // x20
  EventInfoCommandBuffPointComponent_c *v25; // x0
  int64_t v26; // x20
  int64_t USER_EVENT_POINT_REST_MIN; // x21
  int64_t v28; // x0
  UILabel_o *v29; // x19
  int64_t v30; // x20
  System_String_o *v31; // x21
  Il2CppObject *v32; // x0
  int64_t v33; // [xsp+8h] [xbp-48h] BYREF
  EventPointBuffEntity_o *nextEventPointBuff; // [xsp+10h] [xbp-40h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_42B0DAD & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&EventInfoCommandBuffPointComponent_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_5693/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_B52984(&StringLiteral_5634/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/);
    this = (EventInfoCommandBuffPointComponent_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0DAD = 1;
  }
  nextEventPointBuff = 0LL;
  nowEventPointBuff = 0LL;
  eventUiEntity = v3->fields.eventUiEntity;
  if ( eventUiEntity )
    eventId = eventUiEntity->fields.eventId;
  else
    eventId = 0;
  eventUiValueEntity = v3->fields.eventUiValueEntity;
  if ( eventUiValueEntity )
  {
    this = (EventInfoCommandBuffPointComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0LL);
    v7 = (int)this;
  }
  else
  {
    v7 = 0;
  }
  UserEventPoint = (EventInfoCommandBuffPointComponent_o *)EventInfoCommandBuffPointComponent__GetUserEventPoint(
                                                             this,
                                                             eventId,
                                                             v7,
                                                             v2);
  v3->fields.point = (int64_t)UserEventPoint;
  EventInfoCommandBuffPointComponent__GetEnableEventPointBuffEntity(
    UserEventPoint,
    eventId,
    v7,
    (int64_t)UserEventPoint,
    &nowEventPointBuff,
    &nextEventPointBuff,
    v9);
  pointLabel = (UnityEngine_Object_o *)v3->fields.pointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    v11 = v3->fields.pointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5693/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    point = v3->fields.point;
    v14 = v12;
    v15 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v15->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v33 = System_Math__Min_45037076(point, UserPointEventMax, 0LL);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33);
    EventPointInfo = System_String__Format(v14, v17, 0LL);
    if ( !v11 )
      goto LABEL_55;
    UILabel__set_text(v11, EventPointInfo, 0LL);
  }
  buffValueLabel = (UnityEngine_Object_o *)v3->fields.buffValueLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
  if ( nowEventPointBuff && v21 )
  {
    v22 = v3->fields.buffValueLabel;
    value = nowEventPointBuff->fields.value;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    EventPointInfo = LocalizationManager__GetEventPointInfo(0, value, (System_String_o *)StringLiteral_1/*""*/, 0, 0LL);
    if ( !v22 )
      goto LABEL_55;
    UILabel__set_text(v22, EventPointInfo, 0LL);
  }
  needPointLabel = (UnityEngine_Object_o *)v3->fields.needPointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(needPointLabel, 0LL, 0LL) )
  {
    if ( nextEventPointBuff )
    {
      v25 = EventInfoCommandBuffPointComponent_TypeInfo;
      v26 = nextEventPointBuff->fields.eventPoint - v3->fields.point;
      if ( (BYTE3(EventInfoCommandBuffPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoCommandBuffPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent_TypeInfo);
        v25 = EventInfoCommandBuffPointComponent_TypeInfo;
      }
      USER_EVENT_POINT_REST_MIN = v25->static_fields->USER_EVENT_POINT_REST_MIN;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v28 = System_Math__Max_45036628(v26, USER_EVENT_POINT_REST_MIN, 0LL);
      v29 = v3->fields.needPointLabel;
      v30 = v28;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5693/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
      v33 = System_Math__Min_45037076(
              v30,
              EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MAX,
              0LL);
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33);
      EventPointInfo = System_String__Format(v31, v32, 0LL);
      if ( v29 )
      {
LABEL_49:
        UILabel__set_text(v29, EventPointInfo, 0LL);
        return;
      }
    }
    else
    {
      v29 = v3->fields.needPointLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      EventPointInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5634/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, 0LL);
      if ( v29 )
        goto LABEL_49;
    }
LABEL_55:
    sub_B52A5C(EventPointInfo, v19);
  }
}


float __fastcall EventInfoCommandBuffPointComponent__get_Height(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_B52A5C(this, method);
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
  Il2CppObject *v1; // x19
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD8ED & 1) == 0 )
  {
    sub_B52984(&EventInfoCommandBuffPointComponent___c_TypeInfo);
    byte_42AD8ED = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventInfoCommandBuffPointComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoCommandBuffPointComponent___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}