NoticeNumberComponent_o *__fastcall EventInfoTipsArchiveButton__CreateBadge(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438C5CA & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438C5CA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)CommonUI__CreateNoticeNumber(Instance, this->fields.noticeNumberRoot, 0LL)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  return (NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
}


void __fastcall EventInfoTipsArchiveButton__Initialization(
        EventInfoTipsArchiveButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  struct NoticeNumberComponent_o *Badge; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x4

  if ( (byte_438C5C8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventInfoTipsArchiveButton__Initialization_b__6_0__);
    byte_438C5C8 = 1;
  }
  Badge = EventInfoTipsArchiveButton__CreateBadge(this, (const MethodInfo *)entity);
  this->fields.badge = Badge;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.badge,
    (System_Int32_array **)Badge,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.eventUiEntity = entity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B7769C(v18, v19);
  eventId = eventUiEntity->fields.eventId;
  warId = eventUiEntity->fields.warId;
  v23 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__Initialization_b__6_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData_27666288((EventInfoUIBase_o *)this, eventId, warId, v23, v24);
}


void __fastcall EventInfoTipsArchiveButton__OnClickButton(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  EventInfoTipsArchiveDialog_o *dialog; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_438C5C9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventInfoTipsArchiveButton_OnClickButton__);
    sub_B775C4(&Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__);
    byte_438C5C9 = 1;
  }
  v3 = Method_EventInfoTipsArchiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoTipsArchiveButton_OnClickButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B775CC(Method_EventInfoTipsArchiveButton_OnClickButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  dialog = this->fields.dialog;
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__, 0LL);
  if ( !dialog )
    sub_B7769C(v7, v8);
  EventInfoTipsArchiveDialog__Open(dialog, v6, v9);
}


void __fastcall EventInfoTipsArchiveButton__OnDestroy(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventInfoTipsArchiveButton_o *v3; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v5; // x1
  EventInfoTipsArchiveButton_o **p_badge; // x20
  UnityEngine_Object_o *badge; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  EventInfoTipsArchiveButton_o **p_dialog; // x19
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *dialog; // t1
  UnityEngine_Object_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v3 = this;
  if ( (byte_438C5C7 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveButton_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C5C7 = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_23;
  EventInfoUIBase__ReleaseEventUIAssetData_27665800(
    (EventInfoUIBase_o *)v3,
    eventUiEntity->fields.eventId,
    eventUiEntity->fields.warId,
    v2);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)v3, v5);
  p_badge = (EventInfoTipsArchiveButton_o **)&v3->fields.badge;
  badge = (UnityEngine_Object_o *)v3->fields.badge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(badge, 0LL, 0LL) )
  {
    this = *p_badge;
    if ( !*p_badge )
      goto LABEL_23;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
    *p_badge = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&v3->fields.badge, 0LL, v9, v10, v11, v12, v13, v14);
  }
  dialog = (UnityEngine_Object_o *)v3->fields.dialog;
  p_dialog = (EventInfoTipsArchiveButton_o **)&v3->fields.dialog;
  v16 = dialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    this = *p_dialog;
    if ( *p_dialog )
    {
      v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v18, 0LL);
      *p_dialog = 0LL;
      sub_B77560((BattleServantConfConponent_o *)p_dialog, 0LL, v19, v20, v21, v22, v23, v24);
      return;
    }
LABEL_23:
    sub_B7769C(this, method);
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
    sub_B7769C(0LL, num);
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
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *v4; // x20
  EventInfoTipsArchiveDialog_o *mInstance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  struct EventInfoTipsArchiveDialog_o *Component_srcLineSprite; // x0
  struct EventInfoTipsArchiveDialog_o **p_dialog; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x3
  struct EventUiEntity_o *v18; // x8
  TerminalSceneComponent_c *v19; // x0
  const MethodInfo *v20; // x3
  NoticeNumberComponent_o *badge; // x8
  System_Nullable_Vector3__o v22; // 0:x2.16

  if ( (byte_438C5CB & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&StringLiteral_14695/*"TipsArchiveDialog"*/);
    sub_B775C4(&StringLiteral_16769/*"archive_button"*/);
    byte_438C5CB = 1;
  }
  v4 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 (System_String_o *)StringLiteral_14695/*"TipsArchiveDialog"*/,
                                 v2);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mInstance = (EventInfoTipsArchiveDialog_o *)UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_23;
    EventInfoUIBase__LoadLocalAtlasWithWarId((EventInfoUIBase_o *)this, eventUiEntity->fields.warId, v7);
    if ( !v4 )
      goto LABEL_23;
    Component_srcLineSprite = (struct EventInfoTipsArchiveDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)v4,
                                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___);
    this->fields.dialog = Component_srcLineSprite;
    p_dialog = &this->fields.dialog;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.dialog,
      (System_Int32_array **)Component_srcLineSprite,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v18 = this->fields.eventUiEntity;
    if ( !v18 )
      goto LABEL_23;
    mInstance = *p_dialog;
    if ( !*p_dialog )
      goto LABEL_23;
    EventInfoTipsArchiveDialog__Setup(mInstance, v18->fields.id, this->fields.atlasList, v17);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4387463 )
    {
      sub_B775C4(&TerminalSceneComponent_TypeInfo);
      byte_4387463 = 1;
    }
    v19 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v19 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (EventInfoTipsArchiveDialog_o *)v19->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v22.fields.value.fields.x = 0LL,
          *(_QWORD *)&v22.fields.value.fields.z = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialog,
            v22,
            0LL),
          EventInfoUIBase__SetSpriteByLocalAtlas(
            (EventInfoUIBase_o *)this,
            this->fields.buttonSprite,
            (System_String_o *)StringLiteral_16769/*"archive_button"*/,
            v20),
          (mInstance = this->fields.dialog) == 0LL)
      || (mInstance = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveDialog__GetAllNewDispCount(mInstance, v6),
          (badge = this->fields.badge) == 0LL) )
    {
LABEL_23:
      sub_B7769C(mInstance, v6);
    }
    NoticeNumberComponent__SetNumber(badge, (int32_t)mInstance, 0LL);
  }
}


void __fastcall EventInfoTipsArchiveButton___OnClickButton_b__8_0(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog
    || (dialog = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveDialog__GetAllNewDispCount(dialog, method),
        !this->fields.badge) )
  {
    sub_B7769C(dialog, method);
  }
  NoticeNumberComponent__SetNumber(this->fields.badge, (int32_t)dialog, 0LL);
}