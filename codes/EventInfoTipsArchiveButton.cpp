void __fastcall EventInfoTipsArchiveButton___ctor(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


NoticeNumberComponent_o *__fastcall EventInfoTipsArchiveButton__CreateBadge(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  UnityEngine_GameObject_o *NoticeNumber; // x0

  if ( (byte_40FA18D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40FA18D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (NoticeNumber = CommonUI__CreateNoticeNumber(Instance, this->fields.noticeNumberRoot, 0LL)) == 0LL )
    sub_B170D4();
  return (NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      NoticeNumber,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
}


void __fastcall EventInfoTipsArchiveButton__Initialization(
        EventInfoTipsArchiveButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct NoticeNumberComponent_o *Badge; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  System_Action_o *v26; // x22

  if ( (byte_40FA18B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&Method_EventInfoTipsArchiveButton__Initialization_b__6_0__, v5);
    byte_40FA18B = 1;
  }
  Badge = EventInfoTipsArchiveButton__CreateBadge(this, (const MethodInfo *)entity);
  this->fields.badge = Badge;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.badge,
    (System_Int32_array **)Badge,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.eventUiEntity = entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B170D4();
  eventId = eventUiEntity->fields.eventId;
  warId = eventUiEntity->fields.warId;
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__Initialization_b__6_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData_22457636((EventInfoUIBase_o *)this, eventId, warId, v26, 0LL);
}


void __fastcall EventInfoTipsArchiveButton__OnClickButton(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  EventInfoTipsArchiveDialog_o *dialog; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_40FA18C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoTipsArchiveButton_OnClickButton__, v3);
    sub_B16FFC(&Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__, v4);
    byte_40FA18C = 1;
  }
  v5 = Method_EventInfoTipsArchiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoTipsArchiveButton_OnClickButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B17004(Method_EventInfoTipsArchiveButton_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  dialog = this->fields.dialog;
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__, 0LL);
  if ( !dialog )
    sub_B170D4();
  EventInfoTipsArchiveDialog__Open(dialog, v12, v13);
}


void __fastcall EventInfoTipsArchiveButton__OnDestroy(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8
  UnityEngine_Component_o **p_badge; // x20
  UnityEngine_Object_o *badge; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Component_o **p_dialog; // x19
  UnityEngine_Object_o *v14; // x20
  struct EventInfoTipsArchiveDialog_o *dialog; // t1
  UnityEngine_Object_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40FA18A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA18A = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_23;
  EventInfoUIBase__ReleaseEventUIAssetData_22458132(
    (EventInfoUIBase_o *)this,
    eventUiEntity->fields.eventId,
    eventUiEntity->fields.warId,
    0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
  p_badge = (UnityEngine_Component_o **)&this->fields.badge;
  badge = (UnityEngine_Object_o *)this->fields.badge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(badge, 0LL, 0LL) )
  {
    if ( !*p_badge )
      goto LABEL_23;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_badge, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_badge = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.badge, 0LL, v7, v8, v9, v10, v11, v12);
  }
  dialog = this->fields.dialog;
  p_dialog = (UnityEngine_Component_o **)&this->fields.dialog;
  v14 = (UnityEngine_Object_o *)dialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    if ( *p_dialog )
    {
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dialog, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v16, 0LL);
      *p_dialog = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_dialog, 0LL, v17, v18, v19, v20, v21, v22);
      return;
    }
LABEL_23:
    sub_B170D4();
  }
}


void __fastcall EventInfoTipsArchiveButton__SetBadge(
        EventInfoTipsArchiveButton_o *this,
        int32_t num,
        const MethodInfo *method)
{
  NoticeNumberComponent_o *badge; // x0

  badge = this->fields.badge;
  if ( !badge )
    sub_B170D4();
  NoticeNumberComponent__SetNumber(badge, num, 0LL);
}


void __fastcall EventInfoTipsArchiveButton__Setup(
        EventInfoTipsArchiveButton_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoTipsArchiveButton___Initialization_b__6_0(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  struct EventUiEntity_o *eventUiEntity; // x8
  struct EventInfoTipsArchiveDialog_o *Component_srcLineSprite; // x0
  EventInfoTipsArchiveDialog_o **p_dialog; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x3
  struct EventUiEntity_o *v18; // x8
  __int64 v19; // x1
  TerminalSceneComponent_c *v20; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v22; // x1
  EventInfoTipsArchiveDialog_o *dialog; // x0
  int32_t AllNewDispCount; // w0
  NoticeNumberComponent_o *badge; // x8
  System_Nullable_Vector3__o v26; // 0:x2.16

  if ( (byte_40FA18E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_14384, v5);
    sub_B16FFC(&StringLiteral_16384, v6);
    byte_40FA18E = 1;
  }
  v7 = EventInfoUIBase__InstantiateFromEventUIAssetData(
         (EventInfoUIBase_o *)this,
         (System_String_o *)StringLiteral_14384,
         0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_23;
    EventInfoUIBase__LoadLocalAtlasWithWarId((EventInfoUIBase_o *)this, eventUiEntity->fields.warId, 0LL);
    if ( !v7 )
      goto LABEL_23;
    Component_srcLineSprite = (struct EventInfoTipsArchiveDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       v7,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___);
    this->fields.dialog = Component_srcLineSprite;
    p_dialog = &this->fields.dialog;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.dialog,
      (System_Int32_array **)Component_srcLineSprite,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v18 = this->fields.eventUiEntity;
    if ( !v18 || !*p_dialog )
      goto LABEL_23;
    EventInfoTipsArchiveDialog__Setup(*p_dialog, v18->fields.id, this->fields.atlasList, v17);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v19);
      byte_40F6042 = 1;
    }
    v20 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v20 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v20->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v26.fields.value.fields.x = 0LL,
          *(_QWORD *)&v26.fields.value.fields.z = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(mInstance, (BaseDialog_o *)this->fields.dialog, v26, 0LL),
          EventInfoUIBase__SetSpriteByLocalAtlas(
            (EventInfoUIBase_o *)this,
            this->fields.buttonSprite,
            (System_String_o *)StringLiteral_16384,
            0LL),
          (dialog = this->fields.dialog) == 0LL)
      || (AllNewDispCount = EventInfoTipsArchiveDialog__GetAllNewDispCount(dialog, v22),
          (badge = this->fields.badge) == 0LL) )
    {
LABEL_23:
      sub_B170D4();
    }
    NoticeNumberComponent__SetNumber(badge, AllNewDispCount, 0LL);
  }
}


void __fastcall EventInfoTipsArchiveButton___OnClickButton_b__8_0(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *dialog; // x0
  int32_t AllNewDispCount; // w0

  dialog = this->fields.dialog;
  if ( !dialog
    || (AllNewDispCount = EventInfoTipsArchiveDialog__GetAllNewDispCount(dialog, method), !this->fields.badge) )
  {
    sub_B170D4();
  }
  NoticeNumberComponent__SetNumber(this->fields.badge, AllNewDispCount, 0LL);
}