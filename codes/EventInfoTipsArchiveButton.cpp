void __fastcall EventInfoTipsArchiveButton___ctor(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


NoticeNumberComponent_o *__fastcall EventInfoTipsArchiveButton__CreateBadge(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1782D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B1782D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)CommonUI__CreateNoticeNumber(Instance, this->fields.noticeNumberRoot, 0LL)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return (NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
}


void __fastcall EventInfoTipsArchiveButton__Initialization(
        EventInfoTipsArchiveButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct NoticeNumberComponent_o *Badge; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  System_Action_o *v27; // x22

  if ( (byte_4B1782B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveButton__Initialization_b__6_0__, v5, v6);
    byte_4B1782B = 1;
  }
  Badge = EventInfoTipsArchiveButton__CreateBadge(this, (const MethodInfo *)entity);
  this->fields.badge = Badge;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.badge, (int64_t)Badge, v8, v9, v10, v11, v12, v13);
  this->fields.eventUiEntity = entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUiEntity, (int64_t)entity, v14, v15, v16, v17, v18, v19);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BCAA3C(v20, v21);
  eventId = eventUiEntity->fields.eventId;
  warId = eventUiEntity->fields.warId;
  v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__Initialization_b__6_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData_42781072((EventInfoUIBase_o *)this, eventId, warId, v27, 0LL);
}


void __fastcall EventInfoTipsArchiveButton__OnClickButton(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  EventInfoTipsArchiveDialog_o *dialog; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4B1782C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveButton_OnClickButton__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__, v6, v7);
    byte_4B1782C = 1;
  }
  v8 = Method_EventInfoTipsArchiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoTipsArchiveButton_OnClickButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_EventInfoTipsArchiveButton_OnClickButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  dialog = this->fields.dialog;
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__, 0LL);
  if ( !dialog )
    sub_1BCAA3C(v15, v16);
  EventInfoTipsArchiveDialog__Open(dialog, v14, v17);
}


void __fastcall EventInfoTipsArchiveButton__OnDestroy(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoTipsArchiveButton_o *v3; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  __int64 v5; // x1
  EventInfoTipsArchiveButton_o **p_badge; // x20
  UnityEngine_Object_o *badge; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  EventInfoTipsArchiveButton_o **p_dialog; // x19
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Object_o *dialog; // t1
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  v3 = this;
  if ( (byte_4B1782A & 1) == 0 )
  {
    this = (EventInfoTipsArchiveButton_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1782A = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_19;
  EventInfoUIBase__ReleaseEventUIAssetData_42781776(
    (EventInfoUIBase_o *)v3,
    eventUiEntity->fields.eventId,
    eventUiEntity->fields.warId,
    0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)v3, 0LL);
  p_badge = (EventInfoTipsArchiveButton_o **)&v3->fields.badge;
  badge = (UnityEngine_Object_o *)v3->fields.badge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(badge, 0LL, 0LL) )
  {
    this = *p_badge;
    if ( !*p_badge )
      goto LABEL_19;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_badge = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.badge, 0LL, v10, v11, v12, v13, v14, v15);
  }
  dialog = (UnityEngine_Object_o *)v3->fields.dialog;
  p_dialog = (EventInfoTipsArchiveButton_o **)&v3->fields.dialog;
  v17 = dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
  {
    this = *p_dialog;
    if ( *p_dialog )
    {
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      UnityEngine_Object__Destroy_70154244(v20, 0LL);
      *p_dialog = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)p_dialog, 0LL, v21, v22, v23, v24, v25, v26);
      return;
    }
LABEL_19:
    sub_1BCAA3C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveButton__SetBadge(
        EventInfoTipsArchiveButton_o *this,
        int32_t num,
        const MethodInfo *method)
{
  NoticeNumberComponent_o *badge; // x0

  badge = this->fields.badge;
  if ( !badge )
    sub_1BCAA3C(0LL, *(_QWORD *)&num);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  EventInfoTipsArchiveDialog_o *mInstance; // x0
  const MethodInfo *v15; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  Il2CppObject *Component_object; // x0
  struct EventInfoTipsArchiveDialog_o **p_dialog; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x3
  struct EventUiEntity_o *v26; // x8
  __int64 v27; // x2
  TerminalSceneComponent_c *v28; // x0
  NoticeNumberComponent_o *badge; // x8
  System_Nullable_Vector3__o v30; // 0:x2.16

  if ( (byte_4B1782E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_14626/*"TipsArchiveDialog"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17056/*"archive_button"*/, v10, v11);
    byte_4B1782E = 1;
  }
  v13 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                  (EventInfoUIBase_o *)this,
                                  (System_String_o *)StringLiteral_14626/*"TipsArchiveDialog"*/,
                                  0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  mInstance = (EventInfoTipsArchiveDialog_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_20;
    EventInfoUIBase__LoadLocalAtlasWithWarId((EventInfoUIBase_o *)this, eventUiEntity->fields.warId, 0LL);
    if ( !v13 )
      goto LABEL_20;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v13,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___);
    this->fields.dialog = (struct EventInfoTipsArchiveDialog_o *)Component_object;
    p_dialog = &this->fields.dialog;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.dialog,
      (int64_t)Component_object,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v26 = this->fields.eventUiEntity;
    if ( !v26 )
      goto LABEL_20;
    mInstance = *p_dialog;
    if ( !*p_dialog )
      goto LABEL_20;
    EventInfoTipsArchiveDialog__Setup(mInstance, v26->fields.id, this->fields.atlasList, v25);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v15, v27);
      byte_4B10F83 = 1;
    }
    v28 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15);
      v28 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (EventInfoTipsArchiveDialog_o *)v28->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v30.fields.hasValue = 0LL,
          *(_QWORD *)&v30.fields.value.fields.y = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialog,
            v30,
            0LL),
          EventInfoUIBase__SetSpriteByLocalAtlas(
            (EventInfoUIBase_o *)this,
            this->fields.buttonSprite,
            (System_String_o *)StringLiteral_17056/*"archive_button"*/,
            0LL),
          (mInstance = this->fields.dialog) == 0LL)
      || (mInstance = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveDialog__GetAllNewDispCount(mInstance, v15),
          (badge = this->fields.badge) == 0LL) )
    {
LABEL_20:
      sub_1BCAA3C(mInstance, v15);
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
    sub_1BCAA3C(dialog, method);
  }
  NoticeNumberComponent__SetNumber(this->fields.badge, (int32_t)dialog, 0LL);
}