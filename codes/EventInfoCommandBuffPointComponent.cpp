void EventInfoCommandBuffPointComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C433B2 & 1) == 0 )
  {
    sub_1C37058(&EventInfoCommandBuffPointComponent_TypeInfo);
    byte_4C433B2 = 1;
  }
  *EventInfoCommandBuffPointComponent_TypeInfo->static_fields = (struct EventInfoCommandBuffPointComponent_StaticFields)xmmword_C0F400;
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
  EventInfoCommandBuffPointComponent___c_c *v13; // x8
  System_Collections_Generic_List_object__o *v14; // x22
  System_Comparison_T__o *_9__18_0; // x23
  Il2CppObject *v16; // x24
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  Il2CppObject *current; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C433B1 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__);
    sub_1C37058(&EventInfoCommandBuffPointComponent___c_TypeInfo);
    byte_4C433B1 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                (EventPointBuffMaster_o *)Instance,
                                eventId,
                                groupId,
                                0);
  v13 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  v14 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !EventInfoCommandBuffPointComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent___c_TypeInfo);
    v13 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  }
  _9__18_0 = (System_Comparison_T__o *)v13->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = EventInfoCommandBuffPointComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__18_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__18_0,
      v16,
      Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__,
      0);
    static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__18_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v18, v19);
  }
  if ( !v14 )
LABEL_20:
    sub_1C372B4(Instance);
  System_Collections_Generic_List_object___Sort_58346216(
    v14,
    _9__18_0,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)nowEventPointBuff, 0, v20, v21);
  *nextEventPointBuff = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)nextEventPointBuff, 0, v22, v23);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    v14,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v24 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      sub_1C372B4(v24);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v28.fields._current, userPoint, 0) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_1C36FFC((CGThumbnailListItem_o *)nowEventPointBuff, (int32_t)current, v26, v27);
      break;
    }
    *nextEventPointBuff = (EventPointBuffEntity_o *)current;
    sub_1C36FFC((CGThumbnailListItem_o *)nextEventPointBuff, (int32_t)current, v26, v27);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


int64_t EventInfoCommandBuffPointComponent__GetUserEventPoint(
        EventInfoCommandBuffPointComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21

  if ( (byte_4C433B0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C433B0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C372B4(Instance);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *bgSprite; // x21
  UISprite_o *v13; // x21
  System_String_o *BgSpriteName; // x22
  UIWidget_o *v15; // x0
  UnityEngine_Object_o *pointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *PointLabelSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v18; // x8
  UnityEngine_Object_o *buffValueLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *BuffValueSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v21; // x8
  UnityEngine_Object_o *needPointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *NeedPointSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v24; // x8

  if ( (byte_4C433AE & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C433AE = 1;
  }
  this->fields.eventUiEntity = eventUiEntity;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.eventUiEntity,
    (int32_t)eventUiEntity,
    (int32_t)eventUiValueEntity,
    (const MethodInfo *)viewData);
  this->fields.eventUiValueEntity = eventUiValueEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventUiValueEntity, (int32_t)eventUiValueEntity, v9, v10);
  if ( viewData )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
    {
      v13 = this->fields.bgSprite;
      BgSpriteName = viewData->fields.BgSpriteName;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v13, BgSpriteName, 0);
      v15 = (UIWidget_o *)this->fields.bgSprite;
      if ( !v15 )
        goto LABEL_36;
      ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v15->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v15,
        v15->klass->vtable._33_MakePixelPerfect.method);
    }
    pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = (UIWidget_o *)UnityEngine_Object__op_Inequality(pointLabel, 0, 0);
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      PointLabelSetting = viewData->fields.PointLabelSetting;
      if ( !PointLabelSetting )
        goto LABEL_36;
      v15 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v15 )
        goto LABEL_36;
      UIWidget__set_color(v15, PointLabelSetting->fields.BaseColor, 0);
      v18 = viewData->fields.PointLabelSetting;
      if ( !v18 )
        goto LABEL_36;
      v15 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v15 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v15, v18->fields.EffectColor, 0);
    }
    buffValueLabel = (UnityEngine_Object_o *)this->fields.buffValueLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = (UIWidget_o *)UnityEngine_Object__op_Inequality(buffValueLabel, 0, 0);
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      BuffValueSetting = viewData->fields.BuffValueSetting;
      if ( !BuffValueSetting )
        goto LABEL_36;
      v15 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v15 )
        goto LABEL_36;
      UIWidget__set_color(v15, BuffValueSetting->fields.BaseColor, 0);
      v21 = viewData->fields.BuffValueSetting;
      if ( !v21 )
        goto LABEL_36;
      v15 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v15 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v15, v21->fields.EffectColor, 0);
    }
    needPointLabel = (UnityEngine_Object_o *)this->fields.needPointLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = (UIWidget_o *)UnityEngine_Object__op_Inequality(needPointLabel, 0, 0);
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      NeedPointSetting = viewData->fields.NeedPointSetting;
      if ( NeedPointSetting )
      {
        v15 = (UIWidget_o *)this->fields.needPointLabel;
        if ( v15 )
        {
          UIWidget__set_color(v15, NeedPointSetting->fields.BaseColor, 0);
          v24 = viewData->fields.NeedPointSetting;
          if ( v24 )
          {
            v15 = (UIWidget_o *)this->fields.needPointLabel;
            if ( v15 )
            {
              UILabel__set_effectColor((UILabel_o *)v15, v24->fields.EffectColor, 0);
              goto LABEL_35;
            }
          }
        }
      }
LABEL_36:
      sub_1C372B4(v15);
    }
  }
LABEL_35:
  EventInfoCommandBuffPointComponent__UpdatePoint(this, v11);
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  System_String_o *EventPointInfo; // x0
  UnityEngine_Object_o *buffValueLabel; // x20
  bool v26; // w0
  UILabel_o *v27; // x20
  int32_t value; // w21
  UnityEngine_Object_o *needPointLabel; // x20
  EventInfoCommandBuffPointComponent_c *v30; // x0
  int64_t v31; // x20
  int64_t USER_EVENT_POINT_REST_MIN; // x21
  int64_t v33; // x0
  UILabel_o *v34; // x19
  int64_t v35; // x20
  System_String_o *v36; // x21
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  Il2CppObject *v43; // x0
  int64_t v44; // [xsp+0h] [xbp-50h] BYREF
  EventPointBuffEntity_o *nextEventPointBuff; // [xsp+8h] [xbp-48h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4C433AF & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&EventInfoCommandBuffPointComponent_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5639/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_1C37058(&StringLiteral_5560/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/);
    this = (EventInfoCommandBuffPointComponent_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C433AF = 1;
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
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5639/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
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
    v44 = System_Math__Min_65085428(point, UserPointEventMax, 0);
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v44, v17, v18, v19, v20, v21, v22);
    EventPointInfo = System_String__Format(v14, v23, 0);
    if ( !v11 )
      goto LABEL_44;
    UILabel__set_text(v11, EventPointInfo, 0);
  }
  buffValueLabel = (UnityEngine_Object_o *)v3->fields.buffValueLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v26 = UnityEngine_Object__op_Inequality(buffValueLabel, 0, 0);
  if ( nowEventPointBuff && v26 )
  {
    v27 = v3->fields.buffValueLabel;
    value = nowEventPointBuff->fields.value;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    EventPointInfo = LocalizationManager__GetEventPointInfo(0, value, (System_String_o *)StringLiteral_1/*""*/, 0, 0);
    if ( !v27 )
      goto LABEL_44;
    UILabel__set_text(v27, EventPointInfo, 0);
  }
  needPointLabel = (UnityEngine_Object_o *)v3->fields.needPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(needPointLabel, 0, 0) )
  {
    if ( nextEventPointBuff )
    {
      v30 = EventInfoCommandBuffPointComponent_TypeInfo;
      v31 = nextEventPointBuff->fields.eventPoint - v3->fields.point;
      if ( !EventInfoCommandBuffPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent_TypeInfo);
        v30 = EventInfoCommandBuffPointComponent_TypeInfo;
      }
      USER_EVENT_POINT_REST_MIN = v30->static_fields->USER_EVENT_POINT_REST_MIN;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v33 = System_Math__Max_65085100(v31, USER_EVENT_POINT_REST_MIN, 0);
      v34 = v3->fields.needPointLabel;
      v35 = v33;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5639/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
      v44 = System_Math__Min_65085428(
              v35,
              EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MAX,
              0);
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v44, v37, v38, v39, v40, v41, v42);
      EventPointInfo = System_String__Format(v36, v43, 0);
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      EventPointInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, 0);
      if ( v34 )
        goto LABEL_39;
    }
LABEL_44:
    sub_1C372B4(EventPointInfo);
  }
}


float EventInfoCommandBuffPointComponent__get_Height(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_1C372B4(this);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C433B3 & 1) == 0 )
  {
    sub_1C37058(&EventInfoCommandBuffPointComponent___c_TypeInfo);
    byte_4C433B3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventInfoCommandBuffPointComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointComponent___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C372B4(this);
  return b->fields.eventPoint - a->fields.eventPoint;
}