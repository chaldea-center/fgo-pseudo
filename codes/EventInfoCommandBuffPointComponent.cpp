void EventInfoCommandBuffPointComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CEE91A & 1) == 0 )
  {
    sub_1C7BAE8(&EventInfoCommandBuffPointComponent_TypeInfo);
    byte_4CEE91A = 1;
  }
  *EventInfoCommandBuffPointComponent_TypeInfo->static_fields = (struct EventInfoCommandBuffPointComponent_StaticFields)xmmword_CF6360;
}


void EventInfoCommandBuffPointComponent___ctor(EventInfoCommandBuffPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoCommandBuffPointComponent__GetEnableEventPointBuffEntity(
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
  EventInfoCommandBuffPointComponent___c_c *v14; // x8
  System_Collections_Generic_List_object__o *v15; // x22
  System_Comparison_T__o *_9__18_0; // x23
  Il2CppObject *v17; // x24
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEE919 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__);
    sub_1C7BAE8(&EventInfoCommandBuffPointComponent___c_TypeInfo);
    byte_4CEE919 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                (EventPointBuffMaster_o *)Instance,
                                eventId,
                                groupId,
                                0);
  v14 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  v15 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !EventInfoCommandBuffPointComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent___c_TypeInfo);
    v14 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  }
  _9__18_0 = (System_Comparison_T__o *)v14->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = EventInfoCommandBuffPointComponent___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__18_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__18_0,
      v17,
      Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__,
      0);
    static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__18_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__18_0,
      (int32_t)_9__18_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v15 )
LABEL_20:
    sub_1C7BD40(Instance, v13);
  System_Collections_Generic_List_object___Sort_58984640(
    v15,
    _9__18_0,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)nowEventPointBuff, 0, v25, v26, v27, v28, v29, v30);
  *nextEventPointBuff = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)nextEventPointBuff, 0, v31, v32, v33, v34, v35, v36);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    v15,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v46.fields._current;
    if ( !v46.fields._current )
      sub_1C7BD40(v37, v38);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v46.fields._current, userPoint, 0) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)nowEventPointBuff, (int32_t)current, v40, v41, v42, v43, v44, v45);
      break;
    }
    *nextEventPointBuff = (EventPointBuffEntity_o *)current;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)nextEventPointBuff, (int32_t)current, v40, v41, v42, v43, v44, v45);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


int64_t EventInfoCommandBuffPointComponent__GetUserEventPoint(
        EventInfoCommandBuffPointComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21

  if ( (byte_4CEE918 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE918 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C7BD40(Instance, v7);
  return UserEventPointMaster__GetPoint(
           (UserEventPointMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           eventId,
           groupId,
           0);
}


void EventInfoCommandBuffPointComponent__Setup(
        EventInfoCommandBuffPointComponent_o *this,
        EventUiEntity_o *eventUiEntity,
        EventUiValueEntity_o *eventUiValueEntity,
        EventInfoCommandBuffPointComponent_ViewData_o *viewData,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
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

  if ( (byte_4CEE916 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEE916 = 1;
  }
  this->fields.eventUiEntity = eventUiEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)eventUiEntity,
    (int32_t)eventUiValueEntity,
    (int32_t)viewData,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.eventUiValueEntity = eventUiValueEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventUiValueEntity,
    (int32_t)eventUiValueEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( viewData )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
    {
      v20 = this->fields.bgSprite;
      BgSpriteName = viewData->fields.BgSpriteName;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v20, BgSpriteName, 0);
      v22 = (UIWidget_o *)this->fields.bgSprite;
      if ( !v22 )
        goto LABEL_36;
      ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v22->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v22,
        v22->klass->vtable._33_MakePixelPerfect.method);
    }
    pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = (UIWidget_o *)UnityEngine_Object__op_Inequality(pointLabel, 0, 0);
    if ( ((unsigned __int8)v22 & 1) != 0 )
    {
      PointLabelSetting = viewData->fields.PointLabelSetting;
      if ( !PointLabelSetting )
        goto LABEL_36;
      v22 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v22 )
        goto LABEL_36;
      UIWidget__set_color(v22, PointLabelSetting->fields.BaseColor, 0);
      v25 = viewData->fields.PointLabelSetting;
      if ( !v25 )
        goto LABEL_36;
      v22 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v22 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v22, v25->fields.EffectColor, 0);
    }
    buffValueLabel = (UnityEngine_Object_o *)this->fields.buffValueLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = (UIWidget_o *)UnityEngine_Object__op_Inequality(buffValueLabel, 0, 0);
    if ( ((unsigned __int8)v22 & 1) != 0 )
    {
      BuffValueSetting = viewData->fields.BuffValueSetting;
      if ( !BuffValueSetting )
        goto LABEL_36;
      v22 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v22 )
        goto LABEL_36;
      UIWidget__set_color(v22, BuffValueSetting->fields.BaseColor, 0);
      v28 = viewData->fields.BuffValueSetting;
      if ( !v28 )
        goto LABEL_36;
      v22 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v22 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v22, v28->fields.EffectColor, 0);
    }
    needPointLabel = (UnityEngine_Object_o *)this->fields.needPointLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = (UIWidget_o *)UnityEngine_Object__op_Inequality(needPointLabel, 0, 0);
    if ( ((unsigned __int8)v22 & 1) != 0 )
    {
      NeedPointSetting = viewData->fields.NeedPointSetting;
      if ( NeedPointSetting )
      {
        v22 = (UIWidget_o *)this->fields.needPointLabel;
        if ( v22 )
        {
          UIWidget__set_color(v22, NeedPointSetting->fields.BaseColor, 0);
          v31 = viewData->fields.NeedPointSetting;
          if ( v31 )
          {
            v22 = (UIWidget_o *)this->fields.needPointLabel;
            if ( v22 )
            {
              UILabel__set_effectColor((UILabel_o *)v22, v31->fields.EffectColor, 0);
              goto LABEL_35;
            }
          }
        }
      }
LABEL_36:
      sub_1C7BD40(v22, v18);
    }
  }
LABEL_35:
  EventInfoCommandBuffPointComponent__UpdatePoint(this, v18);
}


void EventInfoCommandBuffPointComponent__UpdatePoint(
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
  int64_t v33; // [xsp+0h] [xbp-50h] BYREF
  EventPointBuffEntity_o *nextEventPointBuff; // [xsp+8h] [xbp-48h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4CEE917 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&EventInfoCommandBuffPointComponent_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5647/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_1C7BAE8(&StringLiteral_5567/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/);
    this = (EventInfoCommandBuffPointComponent_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEE917 = 1;
  }
  nowEventPointBuff = 0;
  nextEventPointBuff = 0;
  eventUiEntity = v3->fields.eventUiEntity;
  if ( eventUiEntity )
    eventId = eventUiEntity->fields.eventId;
  else
    eventId = 0;
  eventUiValueEntity = v3->fields.eventUiValueEntity;
  if ( eventUiValueEntity )
  {
    this = (EventInfoCommandBuffPointComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0, 0) )
  {
    v11 = v3->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    point = v3->fields.point;
    v14 = v12;
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v15->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v33 = System_Math__Min_65699080(point, UserPointEventMax, 0);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33);
    EventPointInfo = System_String__Format(v14, v17, 0);
    if ( !v11 )
      goto LABEL_44;
    UILabel__set_text(v11, EventPointInfo, 0);
  }
  buffValueLabel = (UnityEngine_Object_o *)v3->fields.buffValueLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__op_Inequality(buffValueLabel, 0, 0);
  if ( nowEventPointBuff && v21 )
  {
    v22 = v3->fields.buffValueLabel;
    value = nowEventPointBuff->fields.value;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    EventPointInfo = LocalizationManager__GetEventPointInfo(0, value, (System_String_o *)StringLiteral_1/*""*/, 0, 0);
    if ( !v22 )
      goto LABEL_44;
    UILabel__set_text(v22, EventPointInfo, 0);
  }
  needPointLabel = (UnityEngine_Object_o *)v3->fields.needPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(needPointLabel, 0, 0) )
  {
    if ( nextEventPointBuff )
    {
      v25 = EventInfoCommandBuffPointComponent_TypeInfo;
      v26 = nextEventPointBuff->fields.eventPoint - v3->fields.point;
      if ( !EventInfoCommandBuffPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent_TypeInfo);
        v25 = EventInfoCommandBuffPointComponent_TypeInfo;
      }
      USER_EVENT_POINT_REST_MIN = v25->static_fields->USER_EVENT_POINT_REST_MIN;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v28 = System_Math__Max_65698752(v26, USER_EVENT_POINT_REST_MIN, 0);
      v29 = v3->fields.needPointLabel;
      v30 = v28;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
      v33 = System_Math__Min_65699080(
              v30,
              EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MAX,
              0);
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33);
      EventPointInfo = System_String__Format(v31, v32, 0);
      if ( v29 )
      {
LABEL_39:
        UILabel__set_text(v29, EventPointInfo, 0);
        return;
      }
    }
    else
    {
      v29 = v3->fields.needPointLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      EventPointInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, 0);
      if ( v29 )
        goto LABEL_39;
    }
LABEL_44:
    sub_1C7BD40(EventPointInfo, v19);
  }
}


float EventInfoCommandBuffPointComponent__get_Height(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_1C7BD40(this, method);
  return (float)bgSprite->fields.mHeight;
}


int64_t EventInfoCommandBuffPointComponent__get_Point(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.point;
}


void EventInfoCommandBuffPointComponent_LabelSetting___ctor(
        EventInfoCommandBuffPointComponent_LabelSetting_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCommandBuffPointComponent_ViewData___ctor(
        EventInfoCommandBuffPointComponent_ViewData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCommandBuffPointComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEE91B & 1) == 0 )
  {
    sub_1C7BAE8(&EventInfoCommandBuffPointComponent___c_TypeInfo);
    byte_4CEE91B = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(EventInfoCommandBuffPointComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointComponent___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoCommandBuffPointComponent___c___ctor(
        EventInfoCommandBuffPointComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventInfoCommandBuffPointComponent___c___GetEnableEventPointBuffEntity_b__18_0(
        EventInfoCommandBuffPointComponent___c_o *this,
        EventPointBuffEntity_o *a,
        EventPointBuffEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}