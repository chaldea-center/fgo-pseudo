void __fastcall EventInfoCommandBuffPointComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5BAEE & 1) == 0 )
  {
    sub_1B885B0(&EventInfoCommandBuffPointComponent_TypeInfo);
    byte_4A5BAEE = 1;
  }
  *EventInfoCommandBuffPointComponent_TypeInfo->static_fields = (struct EventInfoCommandBuffPointComponent_StaticFields)xmmword_BB4FF0;
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
  EventInfoCommandBuffPointComponent___c_c *v14; // x8
  System_Collections_Generic_List_object__o *v15; // x22
  System_Comparison_T__o *_9__18_0; // x23
  Il2CppObject *v17; // x24
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5BAED & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__);
    sub_1B885B0(&EventInfoCommandBuffPointComponent___c_TypeInfo);
    byte_4A5BAED = 1;
  }
  memset(&v30, 0, sizeof(v30));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                (EventPointBuffMaster_o *)Instance,
                                eventId,
                                groupId,
                                0LL);
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
    _9__18_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__18_0,
      v17,
      Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__,
      0LL);
    static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__18_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v19, v20);
  }
  if ( !v15 )
LABEL_20:
    sub_1B8880C(Instance, v13);
  System_Collections_Generic_List_object___Sort_55571192(
    v15,
    _9__18_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)nowEventPointBuff, 0, v21, v22);
  *nextEventPointBuff = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)nextEventPointBuff, 0, v23, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    v15,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v25 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1B8880C(v25, v26);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v30.fields._current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)nowEventPointBuff, (int32_t)current, v28, v29);
      break;
    }
    *nextEventPointBuff = (EventPointBuffEntity_o *)current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)nextEventPointBuff, (int32_t)current, v28, v29);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


int64_t __fastcall EventInfoCommandBuffPointComponent__GetUserEventPoint(
        EventInfoCommandBuffPointComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21

  if ( (byte_4A5BAEC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BAEC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B8880C(Instance, v7);
  return UserEventPointMaster__GetPoint(
           (UserEventPointMaster_o *)MasterData_object,
           (int64_t)Instance,
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
  int32_t v9; // w2
  int32_t v10; // w3
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

  if ( (byte_4A5BAEA & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5BAEA = 1;
  }
  this->fields.eventUiEntity = eventUiEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity,
    (int32_t)eventUiEntity,
    (int32_t)eventUiValueEntity,
    (int32_t)viewData);
  this->fields.eventUiValueEntity = eventUiValueEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventUiValueEntity,
    (int32_t)eventUiValueEntity,
    v9,
    v10);
  if ( viewData )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
    {
      v13 = this->fields.bgSprite;
      BgSpriteName = viewData->fields.BgSpriteName;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v13, BgSpriteName, 0LL);
      v15 = (UIWidget_o *)this->fields.bgSprite;
      if ( !v15 )
        goto LABEL_36;
      ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v15->klass->vtable._33_MakePixelPerfect.method)(
        v15,
        v15->klass->vtable._34_get_minWidth.methodPtr);
    }
    pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = (UIWidget_o *)UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      PointLabelSetting = viewData->fields.PointLabelSetting;
      if ( !PointLabelSetting )
        goto LABEL_36;
      v15 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v15 )
        goto LABEL_36;
      UIWidget__set_color(v15, PointLabelSetting->fields.BaseColor, 0LL);
      v18 = viewData->fields.PointLabelSetting;
      if ( !v18 )
        goto LABEL_36;
      v15 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v15 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v15, v18->fields.EffectColor, 0LL);
    }
    buffValueLabel = (UnityEngine_Object_o *)this->fields.buffValueLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = (UIWidget_o *)UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      BuffValueSetting = viewData->fields.BuffValueSetting;
      if ( !BuffValueSetting )
        goto LABEL_36;
      v15 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v15 )
        goto LABEL_36;
      UIWidget__set_color(v15, BuffValueSetting->fields.BaseColor, 0LL);
      v21 = viewData->fields.BuffValueSetting;
      if ( !v21 )
        goto LABEL_36;
      v15 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v15 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v15, v21->fields.EffectColor, 0LL);
    }
    needPointLabel = (UnityEngine_Object_o *)this->fields.needPointLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = (UIWidget_o *)UnityEngine_Object__op_Inequality(needPointLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      NeedPointSetting = viewData->fields.NeedPointSetting;
      if ( NeedPointSetting )
      {
        v15 = (UIWidget_o *)this->fields.needPointLabel;
        if ( v15 )
        {
          UIWidget__set_color(v15, NeedPointSetting->fields.BaseColor, 0LL);
          v24 = viewData->fields.NeedPointSetting;
          if ( v24 )
          {
            v15 = (UIWidget_o *)this->fields.needPointLabel;
            if ( v15 )
            {
              UILabel__set_effectColor((UILabel_o *)v15, v24->fields.EffectColor, 0LL);
              goto LABEL_35;
            }
          }
        }
      }
LABEL_36:
      sub_1B8880C(v15, v11);
    }
  }
LABEL_35:
  EventInfoCommandBuffPointComponent__UpdatePoint(this, v11);
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *EventPointInfo; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *buffValueLabel; // x20
  bool v24; // w0
  UILabel_o *v25; // x20
  int32_t value; // w21
  UnityEngine_Object_o *needPointLabel; // x20
  EventInfoCommandBuffPointComponent_c *v28; // x0
  int64_t v29; // x20
  int64_t USER_EVENT_POINT_REST_MIN; // x21
  int64_t v31; // x0
  UILabel_o *v32; // x19
  int64_t v33; // x20
  System_String_o *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  int64_t v39; // [xsp+0h] [xbp-50h] BYREF
  EventPointBuffEntity_o *nextEventPointBuff; // [xsp+8h] [xbp-48h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4A5BAEB & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&EventInfoCommandBuffPointComponent_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5644/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_1B885B0(&StringLiteral_5584/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/);
    this = (EventInfoCommandBuffPointComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BAEB = 1;
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
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    v11 = v3->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
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
    v39 = System_Math__Min_62526020(point, UserPointEventMax, 0LL);
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v39, v17, v18, v19);
    EventPointInfo = System_String__Format(v14, v20, 0LL);
    if ( !v11 )
      goto LABEL_44;
    UILabel__set_text(v11, EventPointInfo, 0LL);
  }
  buffValueLabel = (UnityEngine_Object_o *)v3->fields.buffValueLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v24 = UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
  if ( nowEventPointBuff && v24 )
  {
    v25 = v3->fields.buffValueLabel;
    value = nowEventPointBuff->fields.value;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    EventPointInfo = LocalizationManager__GetEventPointInfo(0, value, (System_String_o *)StringLiteral_1/*""*/, 0, 0LL);
    if ( !v25 )
      goto LABEL_44;
    UILabel__set_text(v25, EventPointInfo, 0LL);
  }
  needPointLabel = (UnityEngine_Object_o *)v3->fields.needPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(needPointLabel, 0LL, 0LL) )
  {
    if ( nextEventPointBuff )
    {
      v28 = EventInfoCommandBuffPointComponent_TypeInfo;
      v29 = nextEventPointBuff->fields.eventPoint - v3->fields.point;
      if ( !EventInfoCommandBuffPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent_TypeInfo);
        v28 = EventInfoCommandBuffPointComponent_TypeInfo;
      }
      USER_EVENT_POINT_REST_MIN = v28->static_fields->USER_EVENT_POINT_REST_MIN;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v31 = System_Math__Max_62525692(v29, USER_EVENT_POINT_REST_MIN, 0LL);
      v32 = v3->fields.needPointLabel;
      v33 = v31;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
      v39 = System_Math__Min_62526020(
              v33,
              EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MAX,
              0LL);
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v39, v35, v36, v37);
      EventPointInfo = System_String__Format(v34, v38, 0LL);
      if ( v32 )
      {
LABEL_39:
        UILabel__set_text(v32, EventPointInfo, 0LL);
        return;
      }
    }
    else
    {
      v32 = v3->fields.needPointLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      EventPointInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5584/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, 0LL);
      if ( v32 )
        goto LABEL_39;
    }
LABEL_44:
    sub_1B8880C(EventPointInfo, v22);
  }
}


float __fastcall EventInfoCommandBuffPointComponent__get_Height(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_1B8880C(this, method);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BAEF & 1) == 0 )
  {
    sub_1B885B0(&EventInfoCommandBuffPointComponent___c_TypeInfo);
    byte_4A5BAEF = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventInfoCommandBuffPointComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}