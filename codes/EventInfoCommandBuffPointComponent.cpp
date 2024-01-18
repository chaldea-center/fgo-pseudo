void __fastcall EventInfoCommandBuffPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418861F & 1) == 0 )
  {
    sub_B2C35C(&EventInfoCommandBuffPointComponent_TypeInfo, v1);
    byte_418861F = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCommandBuffPointComponent__GetEnableEventPointBuffEntity(
        EventInfoCommandBuffPointComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t userPoint,
        EventPointBuffEntity_o **nowEventPointBuff,
        EventPointBuffEntity_o **nextEventPointBuff,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v24; // x22
  EventInfoCommandBuffPointComponent___c_c *v25; // x8
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x23
  Il2CppObject *v28; // x24
  struct EventInfoCommandBuffPointComponent___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  _BOOL8 v48; // x0
  __int64 v49; // x1
  Il2CppObject *current; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418861E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventPointBuffEntity___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_EventPointBuffEntity__TypeInfo, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__, v20);
    sub_B2C35C(&EventInfoCommandBuffPointComponent___c_TypeInfo, v21);
    byte_418861E = 1;
  }
  memset(&v57, 0, sizeof(v57));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                (EventPointBuffMaster_o *)Instance,
                                eventId,
                                groupId,
                                0LL);
  v24 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v25 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  if ( (BYTE3(EventInfoCommandBuffPointComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCommandBuffPointComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent___c_TypeInfo);
    v25 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v28,
      Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v29 = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    v29->__9__18_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__18_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v29->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v24 )
LABEL_22:
    sub_B2C434(Instance, v23);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v24,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)nowEventPointBuff, 0LL, v36, v37, v38, v39, v40, v41);
  *nextEventPointBuff = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)nextEventPointBuff, 0LL, v42, v43, v44, v45, v46, v47);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v24,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v48 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v48 )
      break;
    current = v57.fields.current;
    if ( !v57.fields.current )
      sub_B2C434(v48, v49);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v57.fields.current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)nowEventPointBuff,
        (System_Int32_array **)current,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      break;
    }
    *nextEventPointBuff = (EventPointBuffEntity_o *)current;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)nextEventPointBuff,
      (System_Int32_array **)current,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoCommandBuffPointComponent__GetUserEventPoint(
        EventInfoCommandBuffPointComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21

  if ( (byte_418861D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418861D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B2C434(Instance, v9);
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
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *bgSprite; // x21
  UISprite_o *v21; // x21
  System_String_o *BgSpriteName; // x22
  UIWidget_o *v23; // x0
  UnityEngine_Object_o *pointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *PointLabelSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v26; // x8
  UnityEngine_Object_o *buffValueLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *BuffValueSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v29; // x8
  UnityEngine_Object_o *needPointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *NeedPointSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v32; // x8

  if ( (byte_418861B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, eventUiEntity);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_418861B = 1;
  }
  this->fields.eventUiEntity = eventUiEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)eventUiEntity,
    (System_String_array **)eventUiValueEntity,
    (System_String_array **)viewData,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.eventUiValueEntity = eventUiValueEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventUiValueEntity,
    (System_Int32_array **)eventUiValueEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
      v21 = this->fields.bgSprite;
      BgSpriteName = viewData->fields.BgSpriteName;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v21, BgSpriteName, 0LL);
      v23 = (UIWidget_o *)this->fields.bgSprite;
      if ( !v23 )
        goto LABEL_41;
      ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v23->klass->vtable._33_MakePixelPerfect.method)(
        v23,
        v23->klass->vtable._34_get_minWidth.methodPtr);
    }
    pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = (UIWidget_o *)UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v23 & 1) != 0 )
    {
      PointLabelSetting = viewData->fields.PointLabelSetting;
      if ( !PointLabelSetting )
        goto LABEL_41;
      v23 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v23 )
        goto LABEL_41;
      UIWidget__set_color(v23, PointLabelSetting->fields.BaseColor, 0LL);
      v26 = viewData->fields.PointLabelSetting;
      if ( !v26 )
        goto LABEL_41;
      v23 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v23 )
        goto LABEL_41;
      UILabel__set_effectColor((UILabel_o *)v23, v26->fields.EffectColor, 0LL);
    }
    buffValueLabel = (UnityEngine_Object_o *)this->fields.buffValueLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = (UIWidget_o *)UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v23 & 1) != 0 )
    {
      BuffValueSetting = viewData->fields.BuffValueSetting;
      if ( !BuffValueSetting )
        goto LABEL_41;
      v23 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v23 )
        goto LABEL_41;
      UIWidget__set_color(v23, BuffValueSetting->fields.BaseColor, 0LL);
      v29 = viewData->fields.BuffValueSetting;
      if ( !v29 )
        goto LABEL_41;
      v23 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v23 )
        goto LABEL_41;
      UILabel__set_effectColor((UILabel_o *)v23, v29->fields.EffectColor, 0LL);
    }
    needPointLabel = (UnityEngine_Object_o *)this->fields.needPointLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = (UIWidget_o *)UnityEngine_Object__op_Inequality(needPointLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v23 & 1) != 0 )
    {
      NeedPointSetting = viewData->fields.NeedPointSetting;
      if ( NeedPointSetting )
      {
        v23 = (UIWidget_o *)this->fields.needPointLabel;
        if ( v23 )
        {
          UIWidget__set_color(v23, NeedPointSetting->fields.BaseColor, 0LL);
          v32 = viewData->fields.NeedPointSetting;
          if ( v32 )
          {
            v23 = (UIWidget_o *)this->fields.needPointLabel;
            if ( v23 )
            {
              UILabel__set_effectColor((UILabel_o *)v23, v32->fields.EffectColor, 0LL);
              goto LABEL_40;
            }
          }
        }
      }
LABEL_41:
      sub_B2C434(v23, v19);
    }
  }
LABEL_40:
  EventInfoCommandBuffPointComponent__UpdatePoint(this, v19);
}


void __fastcall EventInfoCommandBuffPointComponent__UpdatePoint(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventInfoCommandBuffPointComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  struct EventUiValueEntity_o *eventUiValueEntity; // x8
  int32_t v15; // w21
  EventInfoCommandBuffPointComponent_o *UserEventPoint; // x0
  const MethodInfo *v17; // x6
  UnityEngine_Object_o *pointLabel; // x20
  UILabel_o *v19; // x20
  System_String_o *v20; // x0
  int64_t point; // x22
  System_String_o *v22; // x21
  BalanceConfig_c *v23; // x8
  int64_t UserPointEventMax; // x23
  Il2CppObject *v25; // x0
  System_String_o *EventPointInfo; // x0
  __int64 v27; // x1
  UnityEngine_Object_o *buffValueLabel; // x20
  bool v29; // w0
  UILabel_o *v30; // x20
  int32_t value; // w21
  UnityEngine_Object_o *needPointLabel; // x20
  EventInfoCommandBuffPointComponent_c *v33; // x0
  int64_t v34; // x20
  int64_t USER_EVENT_POINT_REST_MIN; // x21
  int64_t v36; // x0
  UILabel_o *v37; // x19
  int64_t v38; // x20
  System_String_o *v39; // x21
  Il2CppObject *v40; // x0
  int64_t v41; // [xsp+8h] [xbp-48h] BYREF
  EventPointBuffEntity_o *nextEventPointBuff; // [xsp+10h] [xbp-40h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_418861C & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&EventInfoCommandBuffPointComponent_TypeInfo, v4);
    sub_B2C35C(&long_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&System_Math_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, v9);
    sub_B2C35C(&StringLiteral_5592/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, v10);
    this = (EventInfoCommandBuffPointComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_418861C = 1;
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
    v15 = (int)this;
  }
  else
  {
    v15 = 0;
  }
  UserEventPoint = (EventInfoCommandBuffPointComponent_o *)EventInfoCommandBuffPointComponent__GetUserEventPoint(
                                                             this,
                                                             eventId,
                                                             v15,
                                                             v2);
  v3->fields.point = (int64_t)UserEventPoint;
  EventInfoCommandBuffPointComponent__GetEnableEventPointBuffEntity(
    UserEventPoint,
    eventId,
    v15,
    (int64_t)UserEventPoint,
    &nowEventPointBuff,
    &nextEventPointBuff,
    v17);
  pointLabel = (UnityEngine_Object_o *)v3->fields.pointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    v19 = v3->fields.pointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    point = v3->fields.point;
    v22 = v20;
    v23 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v23->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v41 = System_Math__Min_45012816(point, UserPointEventMax, 0LL);
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v41);
    EventPointInfo = System_String__Format(v22, v25, 0LL);
    if ( !v19 )
      goto LABEL_55;
    UILabel__set_text(v19, EventPointInfo, 0LL);
  }
  buffValueLabel = (UnityEngine_Object_o *)v3->fields.buffValueLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v29 = UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
  if ( nowEventPointBuff && v29 )
  {
    v30 = v3->fields.buffValueLabel;
    value = nowEventPointBuff->fields.value;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    EventPointInfo = LocalizationManager__GetEventPointInfo(0, value, (System_String_o *)StringLiteral_1/*""*/, 0, 0LL);
    if ( !v30 )
      goto LABEL_55;
    UILabel__set_text(v30, EventPointInfo, 0LL);
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
      v33 = EventInfoCommandBuffPointComponent_TypeInfo;
      v34 = nextEventPointBuff->fields.eventPoint - v3->fields.point;
      if ( (BYTE3(EventInfoCommandBuffPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoCommandBuffPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent_TypeInfo);
        v33 = EventInfoCommandBuffPointComponent_TypeInfo;
      }
      USER_EVENT_POINT_REST_MIN = v33->static_fields->USER_EVENT_POINT_REST_MIN;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v36 = System_Math__Max_45012368(v34, USER_EVENT_POINT_REST_MIN, 0LL);
      v37 = v3->fields.needPointLabel;
      v38 = v36;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
      v41 = System_Math__Min_45012816(
              v38,
              EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MAX,
              0LL);
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v41);
      EventPointInfo = System_String__Format(v39, v40, 0LL);
      if ( v37 )
      {
LABEL_49:
        UILabel__set_text(v37, EventPointInfo, 0LL);
        return;
      }
    }
    else
    {
      v37 = v3->fields.needPointLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      EventPointInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5592/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, 0LL);
      if ( v37 )
        goto LABEL_49;
    }
LABEL_55:
    sub_B2C434(EventPointInfo, v27);
  }
}


float __fastcall EventInfoCommandBuffPointComponent__get_Height(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_B2C434(this, method);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184AF8 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoCommandBuffPointComponent___c_TypeInfo, v1);
    byte_4184AF8 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventInfoCommandBuffPointComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoCommandBuffPointComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}