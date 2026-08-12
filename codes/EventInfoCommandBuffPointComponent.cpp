void EventInfoCommandBuffPointComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5971C72 & 1) == 0 )
  {
    sub_2213A60(&EventInfoCommandBuffPointComponent_TypeInfo);
    byte_5971C72 = 1;
  }
  *EventInfoCommandBuffPointComponent_TypeInfo->static_fields = (struct EventInfoCommandBuffPointComponent_StaticFields)xmmword_E9C970;
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
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__18_0; // x23
  Il2CppObject *v18; // x24
  struct EventInfoCommandBuffPointComponent___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x22
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5971C71 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__);
    sub_2213A60(&EventInfoCommandBuffPointComponent___c_TypeInfo);
    byte_5971C71 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                (EventPointBuffMaster_o *)Instance,
                                eventId,
                                groupId,
                                0);
  v14 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  v15 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !*(&EventInfoCommandBuffPointComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent___c_TypeInfo, v13);
    v14 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__18_0 = (System_Comparison_T__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v13);
      static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__18_0,
      v18,
      Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__,
      0);
    v19 = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    v19->__9__18_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__18_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->__9__18_0, (int32_t)_9__18_0, v20, v21, v22, v23, v24, v25);
  }
  if ( !v15 )
LABEL_20:
    sub_2213CDC(Instance, v13);
  System_Collections_Generic_List_object___Sort_71849708(
    v15,
    _9__18_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)nowEventPointBuff, 0, v26, v27, v28, v29, v30, v31);
  *nextEventPointBuff = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)nextEventPointBuff, 0, v32, v33, v34, v35, v36, v37);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v15,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v38 )
      break;
    current = v47.fields._current;
    if ( !v47.fields._current )
      sub_2213CDC(v38, v39);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v47.fields._current, userPoint, 0) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)nowEventPointBuff, (int32_t)current, v41, v42, v43, v44, v45, v46);
      break;
    }
    *nextEventPointBuff = (EventPointBuffEntity_o *)current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)nextEventPointBuff, (int32_t)current, v41, v42, v43, v44, v45, v46);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
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

  if ( (byte_5971C70 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971C70 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_2213CDC(Instance, v7);
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v20; // x1
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

  if ( (byte_5971C6E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971C6E = 1;
  }
  this->fields.eventUiEntity = eventUiEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)eventUiEntity,
    (System_String_o *)eventUiValueEntity,
    (System_String_o *)viewData,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.eventUiValueEntity = eventUiValueEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiValueEntity,
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
    {
      v21 = this->fields.bgSprite;
      BgSpriteName = viewData->fields.BgSpriteName;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
      AtlasManager__SetEventUI(v21, BgSpriteName, 0);
      v23 = (UIWidget_o *)this->fields.bgSprite;
      if ( !v23 )
        goto LABEL_36;
      ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v23->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v23,
        v23->klass->vtable._33_MakePixelPerfect.method);
    }
    pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    v23 = (UIWidget_o *)UnityEngine_Object__op_Inequality(pointLabel, 0, 0);
    if ( ((unsigned __int8)v23 & 1) != 0 )
    {
      PointLabelSetting = viewData->fields.PointLabelSetting;
      if ( !PointLabelSetting )
        goto LABEL_36;
      v23 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v23 )
        goto LABEL_36;
      UIWidget__set_color(v23, PointLabelSetting->fields.BaseColor, 0);
      v26 = viewData->fields.PointLabelSetting;
      if ( !v26 )
        goto LABEL_36;
      v23 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v23 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v23, v26->fields.EffectColor, 0);
    }
    buffValueLabel = (UnityEngine_Object_o *)this->fields.buffValueLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v23 = (UIWidget_o *)UnityEngine_Object__op_Inequality(buffValueLabel, 0, 0);
    if ( ((unsigned __int8)v23 & 1) != 0 )
    {
      BuffValueSetting = viewData->fields.BuffValueSetting;
      if ( !BuffValueSetting )
        goto LABEL_36;
      v23 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v23 )
        goto LABEL_36;
      UIWidget__set_color(v23, BuffValueSetting->fields.BaseColor, 0);
      v29 = viewData->fields.BuffValueSetting;
      if ( !v29 )
        goto LABEL_36;
      v23 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v23 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v23, v29->fields.EffectColor, 0);
    }
    needPointLabel = (UnityEngine_Object_o *)this->fields.needPointLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v23 = (UIWidget_o *)UnityEngine_Object__op_Inequality(needPointLabel, 0, 0);
    if ( ((unsigned __int8)v23 & 1) != 0 )
    {
      NeedPointSetting = viewData->fields.NeedPointSetting;
      if ( NeedPointSetting )
      {
        v23 = (UIWidget_o *)this->fields.needPointLabel;
        if ( v23 )
        {
          UIWidget__set_color(v23, NeedPointSetting->fields.BaseColor, 0);
          v32 = viewData->fields.NeedPointSetting;
          if ( v32 )
          {
            v23 = (UIWidget_o *)this->fields.needPointLabel;
            if ( v23 )
            {
              UILabel__set_effectColor((UILabel_o *)v23, v32->fields.EffectColor, 0);
              goto LABEL_35;
            }
          }
        }
      }
LABEL_36:
      sub_2213CDC(v23, v18);
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
  __int64 v10; // x1
  UnityEngine_Object_o *pointLabel; // x20
  __int64 v12; // x1
  UILabel_o *v13; // x20
  System_String_o *v14; // x0
  __int64 v15; // x1
  BalanceConfig_c *v16; // x8
  int64_t point; // x22
  System_String_o *v18; // x21
  int64_t UserPointEventMax; // x23
  Il2CppObject *v20; // x0
  System_String_o *EventPointInfo; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *buffValueLabel; // x20
  __int64 v24; // x1
  UILabel_o *v25; // x20
  int32_t value; // w21
  UnityEngine_Object_o *needPointLabel; // x20
  __int64 v28; // x1
  EventInfoCommandBuffPointComponent_c *v29; // x0
  int64_t v30; // x20
  int64_t USER_EVENT_POINT_REST_MIN; // x21
  int64_t v32; // x0
  __int64 v33; // x1
  UILabel_o *v34; // x19
  int64_t v35; // x20
  System_String_o *v36; // x21
  Il2CppObject *v37; // x0
  int64_t v38; // [xsp+8h] [xbp-68h] BYREF
  EventPointBuffEntity_o *nextEventPointBuff; // [xsp+10h] [xbp-60h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+18h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_5971C6F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&EventInfoCommandBuffPointComponent_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_2213A60(&StringLiteral_5760/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/);
    this = (EventInfoCommandBuffPointComponent_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971C6F = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  nextEventPointBuff = 0;
  nowEventPointBuff = 0;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0, 0) )
  {
    v13 = v3->fields.pointLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v16 = BalanceConfig_TypeInfo;
    point = v3->fields.point;
    v18 = v14;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
      v16 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v16->static_fields->UserPointEventMax;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15);
    v38 = System_Math__Min_77153608(point, UserPointEventMax, 0);
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v38);
    EventPointInfo = System_String__Format(v18, v20, 0);
    if ( !v13 )
      goto LABEL_44;
    UILabel__set_text(v13, EventPointInfo, 0);
  }
  buffValueLabel = (UnityEngine_Object_o *)v3->fields.buffValueLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(buffValueLabel, 0, 0) && nowEventPointBuff )
  {
    v25 = v3->fields.buffValueLabel;
    value = nowEventPointBuff->fields.value;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
    EventPointInfo = LocalizationManager__GetEventPointInfo(0, value, (System_String_o *)StringLiteral_1/*""*/, 0, 0);
    if ( !v25 )
      goto LABEL_44;
    UILabel__set_text(v25, EventPointInfo, 0);
  }
  needPointLabel = (UnityEngine_Object_o *)v3->fields.needPointLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(needPointLabel, 0, 0) )
  {
    if ( nextEventPointBuff )
    {
      v29 = EventInfoCommandBuffPointComponent_TypeInfo;
      v30 = nextEventPointBuff->fields.eventPoint - v3->fields.point;
      if ( !*(&EventInfoCommandBuffPointComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent_TypeInfo, v28);
        v29 = EventInfoCommandBuffPointComponent_TypeInfo;
      }
      USER_EVENT_POINT_REST_MIN = v29->static_fields->USER_EVENT_POINT_REST_MIN;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v28);
      v32 = System_Math__Max_77153272(v30, USER_EVENT_POINT_REST_MIN, 0);
      v34 = v3->fields.needPointLabel;
      v35 = v32;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
      v38 = System_Math__Min_77153608(
              v35,
              EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MAX,
              0);
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v38);
      EventPointInfo = System_String__Format(v36, v37, 0);
      if ( v34 )
      {
LABEL_39:
        UILabel__set_text(v34, EventPointInfo, 0);
        return;
      }
    }
    else
    {
      v34 = v3->fields.needPointLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
      EventPointInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5760/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, 0);
      if ( v34 )
        goto LABEL_39;
    }
LABEL_44:
    sub_2213CDC(EventPointInfo, v22);
  }
}


float EventInfoCommandBuffPointComponent__get_Height(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_2213CDC(this, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971C73 & 1) == 0 )
  {
    sub_2213A60(&EventInfoCommandBuffPointComponent___c_TypeInfo);
    byte_5971C73 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoCommandBuffPointComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}