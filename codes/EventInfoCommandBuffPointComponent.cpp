void __fastcall EventInfoCommandBuffPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16A1B & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCommandBuffPointComponent_TypeInfo, v1, v2);
    byte_4B16A1B = 1;
  }
  *EventInfoCommandBuffPointComponent_TypeInfo->static_fields = (struct EventInfoCommandBuffPointComponent_StaticFields)xmmword_BD31B0;
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  EventInfoCommandBuffPointComponent___c_c *v34; // x8
  System_Collections_Generic_List_object__o *v35; // x22
  System_Comparison_T__o *_9__18_0; // x23
  Il2CppObject *v37; // x24
  struct EventInfoCommandBuffPointComponent___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  _BOOL8 v57; // x0
  __int64 v58; // x1
  Il2CppObject *current; // x22
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16A1A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventPointBuffEntity__TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__, v26, v27);
    sub_1BCA7E0(&EventInfoCommandBuffPointComponent___c_TypeInfo, v28, v29);
    byte_4B16A1A = 1;
  }
  memset(&v66, 0, sizeof(v66));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                (EventPointBuffMaster_o *)Instance,
                                eventId,
                                groupId,
                                0LL);
  v34 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  v35 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !EventInfoCommandBuffPointComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent___c_TypeInfo, v31);
    v34 = EventInfoCommandBuffPointComponent___c_TypeInfo;
  }
  _9__18_0 = (System_Comparison_T__o *)v34->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34, v31);
      v34 = EventInfoCommandBuffPointComponent___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__18_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventPointBuffEntity__TypeInfo, v31, v32, v33);
    System_Comparison_object____ctor(
      _9__18_0,
      v37,
      Method_EventInfoCommandBuffPointComponent___c__GetEnableEventPointBuffEntity_b__18_0__,
      0LL);
    static_fields = EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__18_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
      (int64_t)_9__18_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  if ( !v35 )
LABEL_20:
    sub_1BCAA3C(Instance, v31);
  System_Collections_Generic_List_object___Sort_56244000(
    v35,
    _9__18_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)nowEventPointBuff, 0LL, v45, v46, v47, v48, v49, v50);
  *nextEventPointBuff = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)nextEventPointBuff, 0LL, v51, v52, v53, v54, v55, v56);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    v35,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v57 )
      break;
    current = v66.fields._current;
    if ( !v66.fields._current )
      sub_1BCAA3C(v57, v58);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v66.fields._current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_1BCA784((PartyOrganizationUtility_o *)nowEventPointBuff, (int64_t)current, v60, v61, v62, v63, v64, v65);
      break;
    }
    *nextEventPointBuff = (EventPointBuffEntity_o *)current;
    sub_1BCA784((PartyOrganizationUtility_o *)nextEventPointBuff, (int64_t)current, v60, v61, v62, v63, v64, v65);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoCommandBuffPointComponent__GetUserEventPoint(
        EventInfoCommandBuffPointComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x21

  if ( (byte_4B16A19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16A19 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1BCAA3C(Instance, v11);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x1
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v22; // x1
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

  if ( (byte_4B16A17 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, eventUiEntity, eventUiValueEntity);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B16A17 = 1;
  }
  this->fields.eventUiEntity = eventUiEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)eventUiEntity,
    (int64_t)eventUiValueEntity,
    (int32_t)viewData,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.eventUiValueEntity = eventUiValueEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUiValueEntity,
    (int64_t)eventUiValueEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( viewData )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
    {
      v23 = this->fields.bgSprite;
      BgSpriteName = viewData->fields.BgSpriteName;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
      AtlasManager__SetEventUI(v23, BgSpriteName, 0LL);
      v25 = (UIWidget_o *)this->fields.bgSprite;
      if ( !v25 )
        goto LABEL_36;
      ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v25->klass->vtable._33_MakePixelPerfect.method)(
        v25,
        v25->klass->vtable._34_get_minWidth.methodPtr);
    }
    pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    v25 = (UIWidget_o *)UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v25 & 1) != 0 )
    {
      PointLabelSetting = viewData->fields.PointLabelSetting;
      if ( !PointLabelSetting )
        goto LABEL_36;
      v25 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v25 )
        goto LABEL_36;
      UIWidget__set_color(v25, PointLabelSetting->fields.BaseColor, 0LL);
      v28 = viewData->fields.PointLabelSetting;
      if ( !v28 )
        goto LABEL_36;
      v25 = (UIWidget_o *)this->fields.pointLabel;
      if ( !v25 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v25, v28->fields.EffectColor, 0LL);
    }
    buffValueLabel = (UnityEngine_Object_o *)this->fields.buffValueLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    v25 = (UIWidget_o *)UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v25 & 1) != 0 )
    {
      BuffValueSetting = viewData->fields.BuffValueSetting;
      if ( !BuffValueSetting )
        goto LABEL_36;
      v25 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v25 )
        goto LABEL_36;
      UIWidget__set_color(v25, BuffValueSetting->fields.BaseColor, 0LL);
      v31 = viewData->fields.BuffValueSetting;
      if ( !v31 )
        goto LABEL_36;
      v25 = (UIWidget_o *)this->fields.buffValueLabel;
      if ( !v25 )
        goto LABEL_36;
      UILabel__set_effectColor((UILabel_o *)v25, v31->fields.EffectColor, 0LL);
    }
    needPointLabel = (UnityEngine_Object_o *)this->fields.needPointLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
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
              goto LABEL_35;
            }
          }
        }
      }
LABEL_36:
      sub_1BCAA3C(v25, v20);
    }
  }
LABEL_35:
  EventInfoCommandBuffPointComponent__UpdatePoint(this, v20);
}


void __fastcall EventInfoCommandBuffPointComponent__UpdatePoint(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventInfoCommandBuffPointComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  struct EventUiValueEntity_o *eventUiValueEntity; // x8
  int32_t v24; // w21
  EventInfoCommandBuffPointComponent_o *UserEventPoint; // x0
  const MethodInfo *v26; // x6
  __int64 v27; // x1
  UnityEngine_Object_o *pointLabel; // x20
  __int64 v29; // x1
  UILabel_o *v30; // x20
  System_String_o *v31; // x0
  __int64 v32; // x1
  int64_t point; // x22
  System_String_o *v34; // x21
  BalanceConfig_c *v35; // x8
  int64_t UserPointEventMax; // x23
  Il2CppObject *v37; // x0
  System_String_o *EventPointInfo; // x0
  __int64 v39; // x1
  UnityEngine_Object_o *buffValueLabel; // x20
  bool v41; // w0
  __int64 v42; // x1
  UILabel_o *v43; // x20
  int32_t value; // w21
  UnityEngine_Object_o *needPointLabel; // x20
  __int64 v46; // x1
  EventInfoCommandBuffPointComponent_c *v47; // x0
  int64_t v48; // x20
  int64_t USER_EVENT_POINT_REST_MIN; // x21
  int64_t v50; // x0
  __int64 v51; // x1
  UILabel_o *v52; // x19
  int64_t v53; // x20
  System_String_o *v54; // x21
  Il2CppObject *v55; // x0
  int64_t v56; // [xsp+0h] [xbp-50h] BYREF
  EventPointBuffEntity_o *nextEventPointBuff; // [xsp+8h] [xbp-48h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+18h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B16A18 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&EventInfoCommandBuffPointComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Math_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_5661/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, v17, v18);
    this = (EventInfoCommandBuffPointComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B16A18 = 1;
  }
  nowEventPointBuff = 0LL;
  nextEventPointBuff = 0LL;
  eventUiEntity = v4->fields.eventUiEntity;
  if ( eventUiEntity )
    eventId = eventUiEntity->fields.eventId;
  else
    eventId = 0;
  eventUiValueEntity = v4->fields.eventUiValueEntity;
  if ( eventUiValueEntity )
  {
    this = (EventInfoCommandBuffPointComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0LL);
    v24 = (int)this;
  }
  else
  {
    v24 = 0;
  }
  UserEventPoint = (EventInfoCommandBuffPointComponent_o *)EventInfoCommandBuffPointComponent__GetUserEventPoint(
                                                             this,
                                                             eventId,
                                                             v24,
                                                             v3);
  v4->fields.point = (int64_t)UserEventPoint;
  EventInfoCommandBuffPointComponent__GetEnableEventPointBuffEntity(
    UserEventPoint,
    eventId,
    v24,
    (int64_t)UserEventPoint,
    &nowEventPointBuff,
    &nextEventPointBuff,
    v26);
  pointLabel = (UnityEngine_Object_o *)v4->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    v30 = v4->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    point = v4->fields.point;
    v34 = v31;
    v35 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v32);
      v35 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v35->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v32);
    v56 = System_Math__Min_63220536(point, UserPointEventMax, 0LL);
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v56);
    EventPointInfo = System_String__Format(v34, v37, 0LL);
    if ( !v30 )
      goto LABEL_44;
    UILabel__set_text(v30, EventPointInfo, 0LL);
  }
  buffValueLabel = (UnityEngine_Object_o *)v4->fields.buffValueLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  v41 = UnityEngine_Object__op_Inequality(buffValueLabel, 0LL, 0LL);
  if ( nowEventPointBuff && v41 )
  {
    v43 = v4->fields.buffValueLabel;
    value = nowEventPointBuff->fields.value;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
    EventPointInfo = LocalizationManager__GetEventPointInfo(0, value, (System_String_o *)StringLiteral_1/*""*/, 0, 0LL);
    if ( !v43 )
      goto LABEL_44;
    UILabel__set_text(v43, EventPointInfo, 0LL);
  }
  needPointLabel = (UnityEngine_Object_o *)v4->fields.needPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
  if ( UnityEngine_Object__op_Inequality(needPointLabel, 0LL, 0LL) )
  {
    if ( nextEventPointBuff )
    {
      v47 = EventInfoCommandBuffPointComponent_TypeInfo;
      v48 = nextEventPointBuff->fields.eventPoint - v4->fields.point;
      if ( !EventInfoCommandBuffPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointComponent_TypeInfo, v46);
        v47 = EventInfoCommandBuffPointComponent_TypeInfo;
      }
      USER_EVENT_POINT_REST_MIN = v47->static_fields->USER_EVENT_POINT_REST_MIN;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v46);
      v50 = System_Math__Max_63220208(v48, USER_EVENT_POINT_REST_MIN, 0LL);
      v52 = v4->fields.needPointLabel;
      v53 = v50;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
      v56 = System_Math__Min_63220536(
              v53,
              EventInfoCommandBuffPointComponent_TypeInfo->static_fields->USER_EVENT_POINT_REST_MAX,
              0LL);
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v56);
      EventPointInfo = System_String__Format(v54, v55, 0LL);
      if ( v52 )
      {
LABEL_39:
        UILabel__set_text(v52, EventPointInfo, 0LL);
        return;
      }
    }
    else
    {
      v52 = v4->fields.needPointLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
      EventPointInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5661/*"EVENT_COMMAND_BUFF_POINT_COUNT_STOP"*/, 0LL);
      if ( v52 )
        goto LABEL_39;
    }
LABEL_44:
    sub_1BCAA3C(EventPointInfo, v39);
  }
}


float __fastcall EventInfoCommandBuffPointComponent__get_Height(
        EventInfoCommandBuffPointComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_1BCAA3C(this, method);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16A1C & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCommandBuffPointComponent___c_TypeInfo, v1, v2);
    byte_4B16A1C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoCommandBuffPointComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoCommandBuffPointComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}