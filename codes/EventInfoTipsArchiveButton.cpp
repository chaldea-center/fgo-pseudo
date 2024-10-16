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
  __int64 v5; // x1

  if ( (byte_4AB7355 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4AB7355 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)CommonUI__CreateNoticeNumber(Instance, this->fields.noticeNumberRoot, 0LL)) == 0LL )
  {
    sub_1BAB678(Instance, v5);
  }
  return (NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
}


void __fastcall EventInfoTipsArchiveButton__Initialization(
        EventInfoTipsArchiveButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct NoticeNumberComponent_o *Badge; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  System_Action_o *v16; // x22

  if ( (byte_4AB7353 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, entity);
    sub_1BAB41C(&Method_EventInfoTipsArchiveButton__Initialization_b__6_0__, v5);
    byte_4AB7353 = 1;
  }
  Badge = EventInfoTipsArchiveButton__CreateBadge(this, (const MethodInfo *)entity);
  this->fields.badge = Badge;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.badge, (int32_t)Badge, v7, v8);
  this->fields.eventUiEntity = entity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v9, v10);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BAB678(v11, v12);
  eventId = eventUiEntity->fields.eventId;
  warId = eventUiEntity->fields.warId;
  v16 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__Initialization_b__6_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData_42427104((EventInfoUIBase_o *)this, eventId, warId, v16, 0LL);
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

  if ( (byte_4AB7354 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_EventInfoTipsArchiveButton_OnClickButton__, v3);
    sub_1BAB41C(&Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__, v4);
    byte_4AB7354 = 1;
  }
  v5 = Method_EventInfoTipsArchiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoTipsArchiveButton_OnClickButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BAB434(Method_EventInfoTipsArchiveButton_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  dialog = this->fields.dialog;
  v8 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__, 0LL);
  if ( !dialog )
    sub_1BAB678(v9, v10);
  EventInfoTipsArchiveDialog__Open(dialog, v8, v11);
}


void __fastcall EventInfoTipsArchiveButton__OnDestroy(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  EventInfoTipsArchiveButton_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoTipsArchiveButton_o **p_badge; // x20
  UnityEngine_Object_o *badge; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  EventInfoTipsArchiveButton_o **p_dialog; // x19
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *dialog; // t1
  UnityEngine_Object_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  v2 = this;
  if ( (byte_4AB7352 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveButton_o *)sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB7352 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_19;
  EventInfoUIBase__ReleaseEventUIAssetData_42427808(
    (EventInfoUIBase_o *)v2,
    eventUiEntity->fields.eventId,
    eventUiEntity->fields.warId,
    0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)v2, 0LL);
  p_badge = (EventInfoTipsArchiveButton_o **)&v2->fields.badge;
  badge = (UnityEngine_Object_o *)v2->fields.badge;
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
    UnityEngine_Object__Destroy_69800620(gameObject, 0LL);
    *p_badge = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v2->fields.badge, 0, v7, v8);
  }
  dialog = (UnityEngine_Object_o *)v2->fields.dialog;
  p_dialog = (EventInfoTipsArchiveButton_o **)&v2->fields.dialog;
  v10 = dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    this = *p_dialog;
    if ( *p_dialog )
    {
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69800620(v12, 0LL);
      *p_dialog = 0LL;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_dialog, 0, v13, v14);
      return;
    }
LABEL_19:
    sub_1BAB678(this, method);
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
    sub_1BAB678(0LL, num);
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
  UnityEngine_Object_o *v7; // x20
  EventInfoTipsArchiveDialog_o *mInstance; // x0
  const MethodInfo *v9; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  Il2CppObject *Component_object; // x0
  struct EventInfoTipsArchiveDialog_o **p_dialog; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x3
  struct EventUiEntity_o *v16; // x8
  TerminalSceneComponent_c *v17; // x0
  NoticeNumberComponent_o *badge; // x8
  System_Nullable_Vector3__o v19; // 0:x2.16

  if ( (byte_4AB7356 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v4);
    sub_1BAB41C(&StringLiteral_14492/*"TipsArchiveDialog"*/, v5);
    sub_1BAB41C(&StringLiteral_16918/*"archive_button"*/, v6);
    byte_4AB7356 = 1;
  }
  v7 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 (System_String_o *)StringLiteral_14492/*"TipsArchiveDialog"*/,
                                 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mInstance = (EventInfoTipsArchiveDialog_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_20;
    EventInfoUIBase__LoadLocalAtlasWithWarId((EventInfoUIBase_o *)this, eventUiEntity->fields.warId, 0LL);
    if ( !v7 )
      goto LABEL_20;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v7,
                         (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___);
    this->fields.dialog = (struct EventInfoTipsArchiveDialog_o *)Component_object;
    p_dialog = &this->fields.dialog;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.dialog, (int32_t)Component_object, v13, v14);
    v16 = this->fields.eventUiEntity;
    if ( !v16 )
      goto LABEL_20;
    mInstance = *p_dialog;
    if ( !*p_dialog )
      goto LABEL_20;
    EventInfoTipsArchiveDialog__Setup(mInstance, v16->fields.id, this->fields.atlasList, v15);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4AB0C49 )
    {
      sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v9);
      byte_4AB0C49 = 1;
    }
    v17 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v17 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (EventInfoTipsArchiveDialog_o *)v17->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v19.fields.hasValue = 0LL,
          *(_QWORD *)&v19.fields.value.fields.y = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialog,
            v19,
            0LL),
          EventInfoUIBase__SetSpriteByLocalAtlas(
            (EventInfoUIBase_o *)this,
            this->fields.buttonSprite,
            (System_String_o *)StringLiteral_16918/*"archive_button"*/,
            0LL),
          (mInstance = this->fields.dialog) == 0LL)
      || (mInstance = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveDialog__GetAllNewDispCount(mInstance, v9),
          (badge = this->fields.badge) == 0LL) )
    {
LABEL_20:
      sub_1BAB678(mInstance, v9);
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
    sub_1BAB678(dialog, method);
  }
  NoticeNumberComponent__SetNumber(this->fields.badge, (int32_t)dialog, 0LL);
}