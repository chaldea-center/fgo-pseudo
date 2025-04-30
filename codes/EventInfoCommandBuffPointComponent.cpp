void __fastcall EventInfoCommandBuffPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4EAEF & 1) == 0 )
  {
    sub_1B863B8(&EventInfoCommandBuffPointComponent_TypeInfo, v1);
    byte_4A4EAEF = 1;
  }
  *EventInfoCommandBuffPointComponent_TypeInfo->static_fields = (struct EventInfoCommandBuffPointComponent_StaticFields)xmmword_BC3500;
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
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  EventInfoCommandBuffPointComponent___c_c *v23; // x8
  System_Collections_Generic_List_object__o *v24; // x22
  System_Comparison_T__o *_9__18_0; // x23
  Il2CppObject *v26; // x24
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A4EAEE & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_EventPointBuffEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B863B8(&Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__, v19);
    sub_1B863B8(&EventInfoCommandBuffPointComponent___c_TypeInfo, v20);
    byte_4A4EAEE = 1;
  }
  memset(&v39, 0, sizeof(v39));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                (EventPointBuffMaster_o *)Instance,
                                eventId,
                                groupId,
                                0LL);
  v23 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  v24 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !EventInfoCommandBuffPointComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent___c_TypeInfo);
    v23 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  }
  _9__18_0 = (System_Comparison_T__o *)v23->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = EventInfoCommandBuffPointComponent___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__18_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__18_0,
      v26,
      Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__,
      0LL);
    static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__18_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v28, v29);
  }
  if ( !v24 )
LABEL_20:
    sub_1B86614(Instance, v22);
  System_Collections_Generic_List_object___Sort_56615964(
    v24,
    _9__18_0,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)nowEventPointBuff, 0, v30, v31);
  *nextEventPointBuff = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)nextEventPointBuff, 0, v32, v33);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    v24,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v34 )
      break;
    current = v39.fields._current;
    if ( !v39.fields._current )
      sub_1B86614(v34, v35);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v39.fields._current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_1B8635C((CGThumbnailListItem_o *)nowEventPointBuff, (int32_t)current, v37, v38);
      break;
    }
    *nextEventPointBuff = (EventPointBuffEntity_o *)current;
    sub_1B8635C((CGThumbnailListItem_o *)nextEventPointBuff, (int32_t)current, v37, v38);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
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
  Il2CppObject *MasterData_object; // x21

  if ( (byte_4A4EAED & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventPointMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A4EAED = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    byte_4A48C25 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1B86614(Instance, v9);
  return UserEventPointMaster__GetPoint(
           (UserEventPointMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           eventId,
           groupId,
           0LL);
}


void __fastcall EventInfoCommandBuffPointComponent__Setup(
        EventInfoCommandBuffPointComponent_o *this,
        EventUiEntity_o *eventUiEntity,
        EventUiValueEntity_o *eventUiValueEntity,
        EventInfoCommandBuffPointComponent_ViewData_o *viewData,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *bgSprite; // x21
  UISprite_o *v14; // x21
  System_String_o *BgSpriteName; // x22
  UIWidget_o *v16; // x0
  UnityEngine_Object_o *pointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *PointLabelSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v19; // x8
  UnityEngine_Object_o *buffValueLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *BuffValueSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v22; // x8
  UnityEngine_Object_o *needPointLabel; // x21
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *NeedPointSetting; // x8
  struct EventInfoCommandBuffPointComponent_LabelSetting_o *v25; // x8

  if ( (byte_4A4EAEB & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, eventUiEntity);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A4EAEB = 1;
  }
  this->fields.eventUiEntity = eventUiEntity;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.eventUiEntity,
    (int32_t)eventUiEntity,
    (int32_t)eventUiValueEntity,
    (const MethodInfo *)viewData);
  this->fields.eventUiValueEntity = eventUiValueEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventUiValueEntity, (int32_t)eventUiValueEntity, v10, v11);
  if ( viewData )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
    {
      v14 = this->fields.bgSprite;
      BgSpriteName = viewData->fields.BgSpriteName;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v14, BgSpriteName, 0LL);
      v16 = (UIWidget_o *)this->fields.bgSprite;
      if ( !v16 )
        goto LABEL_36;
      ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
        v16,
        v16->klass->vtable._34_get_minWidth.methodPtr);
    }
    pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = (UIWidget_o *)UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v16 & 1) != 0 )
    {
      PointLabelSetting = viewData->fields.PointLabelSetting;
      if ( !PointLabelSetting )
        goto LABEL_36;
      v16 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v16 )
        goto LABEL_36;
      UIWidget__set_color(v16, PointLabelSetting->fields.BaseColor, 0LL);
      v19 = viewData->fields.PointLabelSetting;
      if ( !v19 )
        goto LABEL_36;
      v16 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v16 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v16, v19->fields.EffectColor, 0LL);
    }
    buffValueLabel = (UnityEngine_Object_o *)this->fields.buffValueLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = (UIWidget_o *)UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v16 & 1) != 0 )
    {
      BuffValueSetting = viewData->fields.BuffValueSetting;
      if ( !BuffValueSetting )
        goto LABEL_36;
      v16 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v16 )
        goto LABEL_36;
      UIWidget__set_color(v16, BuffValueSetting->fields.BaseColor, 0LL);
      v22 = viewData->fields.BuffValueSetting;
      if ( !v22 )
        goto LABEL_36;
      v16 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v16 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v16, v22->fields.EffectColor, 0LL);
    }
    needPointLabel = (UnityEngine_Object_o *)this->fields.needPointLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = (UIWidget_o *)UnityEngine_Object__op_Inequality(needPointLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v16 & 1) != 0 )
    {
      NeedPointSetting = viewData->fields.NeedPointSetting;
      if ( NeedPointSetting )
      {
        v16 = (UIWidget_o *)this->fields.needPointLabel;
        if ( v16 )
        {
          UIWidget__set_color(v16, NeedPointSetting->fields.BaseColor, 0LL);
          v25 = viewData->fields.NeedPointSetting;
          if ( v25 )
          {
            v16 = (UIWidget_o *)this->fields.needPointLabel;
            if ( v16 )
            {
              UILabel__set_effectColor((UILabel_o *)v16, v25->fields.EffectColor, 0LL);
              goto LABEL_35;
            }
          }
        }
      }
LABEL_36:
      sub_1B86614(v16, v12);
    }
  }
LABEL_35:
  EventInfoCommandBuffPointComponent__UpdatePoint(this, v12);
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
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  System_String_o *EventPointInfo; // x0
  __int64 v30; // x1
  UnityEngine_Object_o *buffValueLabel; // x20
  bool v32; // w0
  UILabel_o *v33; // x20
  int32_t value; // w21
  UnityEngine_Object_o *needPointLabel; // x20
  EventInfoCommandBuffPointComponent_c *v36; // x0
  int64_t v37; // x20
  int64_t USER_EVENT_POINT_REST_MIN; // x21
  int64_t v39; // x0
  UILabel_o *v40; // x19
  int64_t v41; // x20
  System_String_o *v42; // x21
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  int64_t v47; // [xsp+0h] [xbp-50h] BYREF
  EventPointBuffEntity_o *nextEventPointBuff; // [xsp+8h] [xbp-48h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4A4EAEC & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&EventInfoCommandBuffPointComponent_TypeInfo, v4);
    sub_1B863B8(&long_TypeInfo, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&System_Math_TypeInfo, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_5586/*"EVENT_POINT_COMMON_FORMAT"*/, v9);
    sub_1B863B8(&StringLiteral_5515/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, v10);
    this = (EventInfoCommandBuffPointComponent_o *)sub_1B863B8(&StringLiteral_1/*""*/, v11);
    byte_4A4EAEC = 1;
  }
  nowEventPointBuff = 0LL;
  nextEventPointBuff = 0LL;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    v19 = v3->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5586/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    point = v3->fields.point;
    v22 = v20;
    v23 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v23->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v47 = System_Math__Min_63173092(point, UserPointEventMax, 0LL);
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47, v25, v26, v27);
    EventPointInfo = System_String__Format(v22, v28, 0LL);
    if ( !v19 )
      goto LABEL_44;
    UILabel__set_text(v19, EventPointInfo, 0LL);
  }
  buffValueLabel = (UnityEngine_Object_o *)v3->fields.buffValueLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v32 = UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
  if ( nowEventPointBuff && v32 )
  {
    v33 = v3->fields.buffValueLabel;
    value = nowEventPointBuff->fields.value;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    EventPointInfo = LocalizationManager__GetEventPointInfo(0, value, (System_String_o *)StringLiteral_1/*""*/, 0, 0LL);
    if ( !v33 )
      goto LABEL_44;
    UILabel__set_text(v33, EventPointInfo, 0LL);
  }
  needPointLabel = (UnityEngine_Object_o *)v3->fields.needPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(needPointLabel, 0LL, 0LL) )
  {
    if ( nextEventPointBuff )
    {
      v36 = EventInfoCommandBuffPointComponent_TypeInfo;
      v37 = nextEventPointBuff->fields.eventPoint - v3->fields.point;
      if ( !EventInfoCommandBuffPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent_TypeInfo);
        v36 = EventInfoCommandBuffPointComponent_TypeInfo;
      }
      USER_EVENT_POINT_REST_MIN = v36->static_fields->USER_EVENT_POINT_REST_MIN;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v39 = System_Math__Max_63172764(v37, USER_EVENT_POINT_REST_MIN, 0LL);
      v40 = v3->fields.needPointLabel;
      v41 = v39;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_5586/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
      v47 = System_Math__Min_63173092(
              v41,
              EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MAX,
              0LL);
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47, v43, v44, v45);
      EventPointInfo = System_String__Format(v42, v46, 0LL);
      if ( v40 )
      {
LABEL_39:
        UILabel__set_text(v40, EventPointInfo, 0LL);
        return;
      }
    }
    else
    {
      v40 = v3->fields.needPointLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      EventPointInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5515/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, 0LL);
      if ( v40 )
        goto LABEL_39;
    }
LABEL_44:
    sub_1B86614(EventPointInfo, v30);
  }
}


float __fastcall EventInfoCommandBuffPointComponent__get_Height(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_1B86614(this, method);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4EAF0 & 1) == 0 )
  {
    sub_1B863B8(&EventInfoCommandBuffPointComponent___c_TypeInfo, v1);
    byte_4A4EAF0 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(EventInfoCommandBuffPointComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointComponent___c_o *)v2;
  sub_1B8635C(
    (CGThumbnailListItem_o *)EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B86614(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}