void __fastcall EventInfoTipsArchiveButton___ctor(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  this->fields.recollectionPosY = -183.0;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


NoticeNumberComponent_o *__fastcall EventInfoTipsArchiveButton__CreateBadge(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49BCEC9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49BCEC9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)CommonUI__CreateNoticeNumber(Instance, this->fields.noticeNumberRoot, 0LL)) == 0LL )
  {
    sub_1B4D1EC(Instance, v5);
  }
  return (NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
}


void __fastcall EventInfoTipsArchiveButton__InitButtonPosition(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TerminalSceneComponent_c *v7; // x0
  struct TerminalSceneComponent_o *v8; // x8
  UnityEngine_Object_o *mTitleInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49BCEC7 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v3);
    byte_49BCEC7 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49B5933 )
    {
      sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v6);
      byte_49B5933 = 1;
    }
    v7 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = TerminalSceneComponent_TypeInfo;
    }
    v8 = v7->static_fields->mInstance;
    if ( !v8 )
      goto LABEL_26;
    mTitleInfo = (UnityEngine_Object_o *)v8->fields.mTitleInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(mTitleInfo, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      if ( mTitleInfo )
      {
        if ( TitleInfoControl__IsRecollectionButtonActive((TitleInfoControl_o *)mTitleInfo, 0LL) )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.recollectionPosY, 0LL);
        }
        return;
      }
LABEL_26:
      sub_1B4D1EC(v7, v6);
    }
  }
}


void __fastcall EventInfoTipsArchiveButton__Initialization(
        EventInfoTipsArchiveButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct NoticeNumberComponent_o *Badge; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x1

  if ( (byte_49BCEC6 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, entity);
    sub_1B4CF90(&Method_EventInfoTipsArchiveButton__Initialization_b__7_0__, v5);
    byte_49BCEC6 = 1;
  }
  Badge = EventInfoTipsArchiveButton__CreateBadge(this, (const MethodInfo *)entity);
  this->fields.badge = Badge;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.badge, (int32_t)Badge, v7, v8);
  this->fields.eventUiEntity = entity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v9, v10);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B4D1EC(v11, v12);
  eventId = eventUiEntity->fields.eventId;
  warId = eventUiEntity->fields.warId;
  v16 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__Initialization_b__7_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData_42668480((EventInfoUIBase_o *)this, eventId, warId, v16, v17);
  EventInfoTipsArchiveButton__InitButtonPosition(this, v18);
}


void __fastcall EventInfoTipsArchiveButton__OnClickButton(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  EventInfoTipsArchiveDialog_o *dialog; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_49BCEC8 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_EventInfoTipsArchiveButton_OnClickButton__, v3);
    sub_1B4CF90(&Method_EventInfoTipsArchiveButton__OnClickButton_b__9_0__, v4);
    byte_49BCEC8 = 1;
  }
  v5 = Method_EventInfoTipsArchiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoTipsArchiveButton_OnClickButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B4CFA8(Method_EventInfoTipsArchiveButton_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  dialog = this->fields.dialog;
  v8 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__OnClickButton_b__9_0__, 0LL);
  if ( !dialog )
    sub_1B4D1EC(v9, v10);
  EventInfoTipsArchiveDialog__Open(dialog, v8, v11);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  EventInfoTipsArchiveButton_o **p_dialog; // x19
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *dialog; // t1
  UnityEngine_Object_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  v3 = this;
  if ( (byte_49BCEC5 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveButton_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BCEC5 = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_19;
  EventInfoUIBase__ReleaseEventUIAssetData_42667892(
    (EventInfoUIBase_o *)v3,
    eventUiEntity->fields.eventId,
    eventUiEntity->fields.warId,
    v2);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)v3, v5);
  p_badge = (EventInfoTipsArchiveButton_o **)&v3->fields.badge;
  badge = (UnityEngine_Object_o *)v3->fields.badge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(badge, 0LL, 0LL) )
  {
    this = *p_badge;
    if ( !*p_badge )
      goto LABEL_19;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
    *p_badge = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&v3->fields.badge, 0, v9, v10);
  }
  dialog = (UnityEngine_Object_o *)v3->fields.dialog;
  p_dialog = (EventInfoTipsArchiveButton_o **)&v3->fields.dialog;
  v12 = dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    this = *p_dialog;
    if ( *p_dialog )
    {
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_68804456(v14, 0LL);
      *p_dialog = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)p_dialog, 0, v15, v16);
      return;
    }
LABEL_19:
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(0LL, num);
  NoticeNumberComponent__SetNumber(badge, num, 0LL);
}


void __fastcall EventInfoTipsArchiveButton___Initialization_b__7_0(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  EventInfoTipsArchiveDialog_o *mInstance; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  Il2CppObject *Component_object; // x0
  struct EventInfoTipsArchiveDialog_o **p_dialog; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  struct EventUiEntity_o *v18; // x8
  TerminalSceneComponent_c *v19; // x0
  const MethodInfo *v20; // x3
  NoticeNumberComponent_o *badge; // x8
  System_Nullable_Vector3__o v22; // 0:x2.16

  if ( (byte_49BCECA & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_14179/*"TipsArchiveDialog"*/, v6);
    sub_1B4CF90(&StringLiteral_16578/*"archive_button"*/, v7);
    byte_49BCECA = 1;
  }
  v8 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 (System_String_o *)StringLiteral_14179/*"TipsArchiveDialog"*/,
                                 v2);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mInstance = (EventInfoTipsArchiveDialog_o *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_20;
    EventInfoUIBase__LoadLocalAtlasWithWarId((EventInfoUIBase_o *)this, eventUiEntity->fields.warId, v11);
    if ( !v8 )
      goto LABEL_20;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v8,
                         (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___);
    this->fields.dialog = (struct EventInfoTipsArchiveDialog_o *)Component_object;
    p_dialog = &this->fields.dialog;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dialog, (int32_t)Component_object, v15, v16);
    v18 = this->fields.eventUiEntity;
    if ( !v18 )
      goto LABEL_20;
    mInstance = *p_dialog;
    if ( !*p_dialog )
      goto LABEL_20;
    EventInfoTipsArchiveDialog__Setup(mInstance, v18->fields.id, this->fields.atlasList, v17);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49B5933 )
    {
      sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v10);
      byte_49B5933 = 1;
    }
    v19 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v19 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (EventInfoTipsArchiveDialog_o *)v19->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v22.fields.hasValue = 0LL,
          *(_QWORD *)&v22.fields.value.fields.y = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialog,
            v22,
            0LL),
          EventInfoUIBase__SetSpriteByLocalAtlas(
            (EventInfoUIBase_o *)this,
            this->fields.buttonSprite,
            (System_String_o *)StringLiteral_16578/*"archive_button"*/,
            v20),
          (mInstance = this->fields.dialog) == 0LL)
      || (mInstance = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveDialog__GetAllNewDispCount(mInstance, v10),
          (badge = this->fields.badge) == 0LL) )
    {
LABEL_20:
      sub_1B4D1EC(mInstance, v10);
    }
    NoticeNumberComponent__SetNumber(badge, (int32_t)mInstance, 0LL);
  }
}


void __fastcall EventInfoTipsArchiveButton___OnClickButton_b__9_0(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog
    || (dialog = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveDialog__GetAllNewDispCount(dialog, method),
        !this->fields.badge) )
  {
    sub_1B4D1EC(dialog, method);
  }
  NoticeNumberComponent__SetNumber(this->fields.badge, (int32_t)dialog, 0LL);
}