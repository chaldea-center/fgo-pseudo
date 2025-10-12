void EventInfoTipsArchiveButton___ctor(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  this->fields.recollectionPosY = -183.0;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


NoticeNumberComponent_o *EventInfoTipsArchiveButton__CreateBadge(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C39803 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C39803 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)CommonUI__CreateNoticeNumber(Instance, this->fields.noticeNumberRoot, 0)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return (NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
}


void EventInfoTipsArchiveButton__InitButtonPosition(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  TerminalSceneComponent_c *v5; // x0
  struct TerminalSceneComponent_o *v6; // x8
  UnityEngine_Object_o *mTitleInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C39801 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C39801 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    v5 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v5 = TerminalSceneComponent_TypeInfo;
    }
    v6 = v5->static_fields->mInstance;
    if ( !v6 )
      goto LABEL_26;
    mTitleInfo = (UnityEngine_Object_o *)v6->fields.mTitleInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(mTitleInfo, 0, 0);
    if ( ((unsigned __int8)v5 & 1) == 0 )
    {
      if ( mTitleInfo )
      {
        if ( TitleInfoControl__IsRecollectionButtonActive((TitleInfoControl_o *)mTitleInfo, 0) )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.recollectionPosY, 0);
        }
        return;
      }
LABEL_26:
      sub_1C32E7C(v5);
    }
  }
}


void EventInfoTipsArchiveButton__Initialization(
        EventInfoTipsArchiveButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  struct NoticeNumberComponent_o *Badge; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x1

  if ( (byte_4C39800 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoTipsArchiveButton__Initialization_b__7_0__);
    byte_4C39800 = 1;
  }
  Badge = EventInfoTipsArchiveButton__CreateBadge(this, (const MethodInfo *)entity);
  this->fields.badge = Badge;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.badge, (int32_t)Badge, v6, v7);
  this->fields.eventUiEntity = entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v8, v9);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C32E7C(v10);
  eventId = eventUiEntity->fields.eventId;
  warId = eventUiEntity->fields.warId;
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__Initialization_b__7_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData_44593940((EventInfoUIBase_o *)this, eventId, warId, v14, v15);
  EventInfoTipsArchiveButton__InitButtonPosition(this, v16);
}


void EventInfoTipsArchiveButton__OnClickButton(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  EventInfoTipsArchiveDialog_o *dialog; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C39802 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoTipsArchiveButton_OnClickButton__);
    sub_1C32C20(&Method_EventInfoTipsArchiveButton__OnClickButton_b__9_0__);
    byte_4C39802 = 1;
  }
  v3 = Method_EventInfoTipsArchiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoTipsArchiveButton_OnClickButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_EventInfoTipsArchiveButton_OnClickButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  dialog = this->fields.dialog;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__OnClickButton_b__9_0__, 0);
  if ( !dialog )
    sub_1C32E7C(v7);
  EventInfoTipsArchiveDialog__Open(dialog, v6, v8);
}


void EventInfoTipsArchiveButton__OnDestroy(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventInfoTipsArchiveButton_o *v3; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v5; // x1
  EventInfoTipsArchiveButton_o **p_badge; // x20
  UnityEngine_Object_o *badge; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  EventInfoTipsArchiveButton_o **p_dialog; // x19
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *dialog; // t1
  UnityEngine_Object_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  v3 = this;
  if ( (byte_4C397FF & 1) == 0 )
  {
    this = (EventInfoTipsArchiveButton_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C397FF = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_19;
  EventInfoUIBase__ReleaseEventUIAssetData_44593464(
    (EventInfoUIBase_o *)v3,
    eventUiEntity->fields.eventId,
    eventUiEntity->fields.warId,
    v2);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)v3, v5);
  p_badge = (EventInfoTipsArchiveButton_o **)&v3->fields.badge;
  badge = (UnityEngine_Object_o *)v3->fields.badge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(badge, 0, 0) )
  {
    this = *p_badge;
    if ( !*p_badge )
      goto LABEL_19;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_badge = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.badge, 0, v9, v10);
  }
  dialog = (UnityEngine_Object_o *)v3->fields.dialog;
  p_dialog = (EventInfoTipsArchiveButton_o **)&v3->fields.dialog;
  v12 = dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    this = *p_dialog;
    if ( *p_dialog )
    {
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v14, 0);
      *p_dialog = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)p_dialog, 0, v15, v16);
      return;
    }
LABEL_19:
    sub_1C32E7C(this);
  }
}


void EventInfoTipsArchiveButton__SetBadge(EventInfoTipsArchiveButton_o *this, int32_t num, const MethodInfo *method)
{
  NoticeNumberComponent_o *badge; // x0

  badge = this->fields.badge;
  if ( !badge )
    sub_1C32E7C(0);
  NoticeNumberComponent__SetNumber(badge, num, 0);
}


void EventInfoTipsArchiveButton___Initialization_b__7_0(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *v4; // x20
  EventInfoTipsArchiveDialog_o *mInstance; // x0
  const MethodInfo *v6; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  Il2CppObject *Component_object; // x0
  struct EventInfoTipsArchiveDialog_o **p_dialog; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  struct EventUiEntity_o *v13; // x8
  TerminalSceneComponent_c *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  NoticeNumberComponent_o *badge; // x8
  System_Nullable_Vector3__o v18; // 0:x2.16

  if ( (byte_4C39804 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_14482/*"TipsArchiveDialog"*/);
    sub_1C32C20(&StringLiteral_16865/*"archive_button"*/);
    byte_4C39804 = 1;
  }
  v4 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 (System_String_o *)StringLiteral_14482/*"TipsArchiveDialog"*/,
                                 v2);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mInstance = (EventInfoTipsArchiveDialog_o *)UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_20;
    EventInfoUIBase__LoadLocalAtlasWithWarId((EventInfoUIBase_o *)this, eventUiEntity->fields.warId, v6);
    if ( !v4 )
      goto LABEL_20;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v4,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___);
    this->fields.dialog = (struct EventInfoTipsArchiveDialog_o *)Component_object;
    p_dialog = &this->fields.dialog;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dialog, (int32_t)Component_object, v10, v11);
    v13 = this->fields.eventUiEntity;
    if ( !v13 )
      goto LABEL_20;
    mInstance = *p_dialog;
    if ( !*p_dialog )
      goto LABEL_20;
    EventInfoTipsArchiveDialog__Setup(mInstance, v13->fields.id, this->fields.atlasList, v12);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    v14 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v14 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (EventInfoTipsArchiveDialog_o *)v14->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v18.fields.hasValue = 0,
          *(_QWORD *)&v18.fields.value.fields.y = 0,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialog,
            v18,
            0),
          EventInfoUIBase__SetSpriteByLocalAtlas(
            (EventInfoUIBase_o *)this,
            this->fields.buttonSprite,
            (System_String_o *)StringLiteral_16865/*"archive_button"*/,
            v15),
          (mInstance = this->fields.dialog) == 0)
      || (mInstance = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveDialog__GetAllNewDispCount(mInstance, v16),
          (badge = this->fields.badge) == 0) )
    {
LABEL_20:
      sub_1C32E7C(mInstance);
    }
    NoticeNumberComponent__SetNumber(badge, (int32_t)mInstance, 0);
  }
}


void EventInfoTipsArchiveButton___OnClickButton_b__9_0(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog
    || (dialog = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveDialog__GetAllNewDispCount(dialog, method),
        !this->fields.badge) )
  {
    sub_1C32E7C(dialog);
  }
  NoticeNumberComponent__SetNumber(this->fields.badge, (int32_t)dialog, 0);
}