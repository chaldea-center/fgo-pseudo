void __fastcall EventInfoCommandBuffPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FA0F0 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCommandBuffPointComponent_TypeInfo, v1);
    byte_40FA0F0 = 1;
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
  WebViewManager_o *Instance; // x0
  EventPointBuffMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventPointBuffEntity__o *EntityListWithGroupId; // x22
  EventInfoCommandBuffPointComponent___c_c *v29; // x8
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x23
  Il2CppObject *v32; // x24
  struct EventInfoCommandBuffPointComponent___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  Il2CppObject *current; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FA0EF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventPointBuffEntity___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_EventPointBuffEntity__TypeInfo, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__, v20);
    sub_B16FFC(&EventInfoCommandBuffPointComponent___c_TypeInfo, v21);
    byte_40FA0EF = 1;
  }
  memset(&v59, 0, sizeof(v59));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (EventPointBuffMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  EntityListWithGroupId = EventPointBuffMaster__GetEntityListWithGroupId(
                            MasterData_WarQuestSelectionMaster,
                            eventId,
                            groupId,
                            0LL);
  v29 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  if ( (BYTE3(EventInfoCommandBuffPointComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCommandBuffPointComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent___c_TypeInfo);
    v29 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventPointBuffEntity__TypeInfo,
                                                                           v24,
                                                                           v25,
                                                                           v26,
                                                                           v27);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v32,
      Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v33 = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    v33->__9__18_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__18_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v33->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !EntityListWithGroupId )
LABEL_22:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityListWithGroupId,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)nowEventPointBuff, 0LL, v40, v41, v42, v43, v44, v45);
  *nextEventPointBuff = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)nextEventPointBuff, 0LL, v46, v47, v48, v49, v50, v51);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListWithGroupId,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__) )
  {
    current = v59.fields.current;
    if ( !v59.fields.current )
      sub_B170D4();
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v59.fields.current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_B16F98(
        (BattleServantConfConponent_o *)nowEventPointBuff,
        (System_Int32_array **)current,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      break;
    }
    *nextEventPointBuff = (EventPointBuffEntity_o *)current;
    sub_B16F98(
      (BattleServantConfConponent_o *)nextEventPointBuff,
      (System_Int32_array **)current,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
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
  WebViewManager_o *Instance; // x0
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0

  if ( (byte_40FA0EE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA0EE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B170D4();
  return UserEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, UserId, eventId, groupId, 0LL);
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
  struct UISprite_o *v23; // x0
  UnityEngine_Object_o *pointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *PointLabelSetting; // x8
  UIWidget_o *v26; // x0
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v27; // x8
  UILabel_o *v28; // x0
  UnityEngine_Object_o *buffValueLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *BuffValueSetting; // x8
  UIWidget_o *v31; // x0
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v32; // x8
  UILabel_o *v33; // x0
  UnityEngine_Object_o *needPointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *NeedPointSetting; // x8
  UIWidget_o *v36; // x0
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v37; // x8
  UILabel_o *v38; // x0

  if ( (byte_40FA0EC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, eventUiEntity);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FA0EC = 1;
  }
  this->fields.eventUiEntity = eventUiEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)eventUiEntity,
    (System_String_array **)eventUiValueEntity,
    (System_String_array **)viewData,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.eventUiValueEntity = eventUiValueEntity;
  sub_B16F98(
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
      v23 = this->fields.bgSprite;
      if ( !v23 )
        goto LABEL_41;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v23->klass->vtable._33_MakePixelPerfect.method)(
        v23,
        v23->klass->vtable._34_get_minWidth.methodPtr);
    }
    pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
    {
      PointLabelSetting = viewData->fields.PointLabelSetting;
      if ( !PointLabelSetting )
        goto LABEL_41;
      v26 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v26 )
        goto LABEL_41;
      UIWidget__set_color(v26, PointLabelSetting->fields.BaseColor, 0LL);
      v27 = viewData->fields.PointLabelSetting;
      if ( !v27 )
        goto LABEL_41;
      v28 = this->fields.pointLabel;
      if ( !v28 )
        goto LABEL_41;
      UILabel__set_effectColor(v28, v27->fields.EffectColor, 0LL);
    }
    buffValueLabel = (UnityEngine_Object_o *)this->fields.buffValueLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL) )
    {
      BuffValueSetting = viewData->fields.BuffValueSetting;
      if ( !BuffValueSetting )
        goto LABEL_41;
      v31 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v31 )
        goto LABEL_41;
      UIWidget__set_color(v31, BuffValueSetting->fields.BaseColor, 0LL);
      v32 = viewData->fields.BuffValueSetting;
      if ( !v32 )
        goto LABEL_41;
      v33 = this->fields.buffValueLabel;
      if ( !v33 )
        goto LABEL_41;
      UILabel__set_effectColor(v33, v32->fields.EffectColor, 0LL);
    }
    needPointLabel = (UnityEngine_Object_o *)this->fields.needPointLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(needPointLabel, 0LL, 0LL) )
    {
      NeedPointSetting = viewData->fields.NeedPointSetting;
      if ( NeedPointSetting )
      {
        v36 = (UIWidget_o *)this->fields.needPointLabel;
        if ( v36 )
        {
          UIWidget__set_color(v36, NeedPointSetting->fields.BaseColor, 0LL);
          v37 = viewData->fields.NeedPointSetting;
          if ( v37 )
          {
            v38 = this->fields.needPointLabel;
            if ( v38 )
            {
              UILabel__set_effectColor(v38, v37->fields.EffectColor, 0LL);
              goto LABEL_40;
            }
          }
        }
      }
LABEL_41:
      sub_B170D4();
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
  System_String_o *v26; // x0
  UnityEngine_Object_o *buffValueLabel; // x20
  bool v28; // w0
  UILabel_o *v29; // x20
  int32_t value; // w21
  System_String_o *EventPointInfo; // x0
  UnityEngine_Object_o *needPointLabel; // x20
  EventInfoCommandBuffPointComponent_c *v33; // x0
  int64_t v34; // x20
  int64_t USER_EVENT_POINT_REST_MIN; // x21
  int64_t v36; // x0
  UILabel_o *v37; // x19
  int64_t v38; // x20
  System_String_o *v39; // x21
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  int64_t v42; // [xsp+8h] [xbp-48h] BYREF
  EventPointBuffEntity_o *nextEventPointBuff; // [xsp+10h] [xbp-40h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_40FA0ED & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&EventInfoCommandBuffPointComponent_TypeInfo, v4);
    sub_B16FFC(&long_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&System_Math_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5635, v9);
    sub_B16FFC(&StringLiteral_5577, v10);
    this = (EventInfoCommandBuffPointComponent_o *)sub_B16FFC(&StringLiteral_1, v11);
    byte_40FA0ED = 1;
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
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5635, 0LL);
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
    v42 = System_Math__Min_44464240(point, UserPointEventMax, 0LL);
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v42);
    v26 = System_String__Format(v22, v25, 0LL);
    if ( !v19 )
      goto LABEL_55;
    UILabel__set_text(v19, v26, 0LL);
  }
  buffValueLabel = (UnityEngine_Object_o *)v3->fields.buffValueLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v28 = UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
  if ( nowEventPointBuff && v28 )
  {
    v29 = v3->fields.buffValueLabel;
    value = nowEventPointBuff->fields.value;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    EventPointInfo = LocalizationManager__GetEventPointInfo(0, value, (System_String_o *)StringLiteral_1, 0, 0LL);
    if ( !v29 )
      goto LABEL_55;
    UILabel__set_text(v29, EventPointInfo, 0LL);
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
      v36 = System_Math__Max_44463792(v34, USER_EVENT_POINT_REST_MIN, 0LL);
      v37 = v3->fields.needPointLabel;
      v38 = v36;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5635, 0LL);
      v42 = System_Math__Min_44464240(
              v38,
              EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MAX,
              0LL);
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v42);
      v41 = System_String__Format(v39, v40, 0LL);
      if ( v37 )
      {
LABEL_49:
        UILabel__set_text(v37, v41, 0LL);
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
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5577, 0LL);
      if ( v37 )
        goto LABEL_49;
    }
LABEL_55:
    sub_B170D4();
  }
}


float __fastcall EventInfoCommandBuffPointComponent__get_Height(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FC5 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCommandBuffPointComponent___c_TypeInfo, v1);
    byte_40F6FC5 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoCommandBuffPointComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.eventPoint - a->fields.eventPoint;
}