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

  if ( (byte_41886C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_41886C0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)CommonUI__CreateNoticeNumber(Instance, this->fields.noticeNumberRoot, 0LL)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return (NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
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
  __int64 v19; // x0
  __int64 v20; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  System_Action_o *v24; // x22

  if ( (byte_41886BE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, entity);
    sub_B2C35C(&Method_EventInfoTipsArchiveButton__Initialization_b__6_0__, v5);
    byte_41886BE = 1;
  }
  Badge = EventInfoTipsArchiveButton__CreateBadge(this, (const MethodInfo *)entity);
  this->fields.badge = Badge;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.badge,
    (System_Int32_array **)Badge,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.eventUiEntity = entity;
  sub_B2C2F8(
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
    sub_B2C434(v19, v20);
  eventId = eventUiEntity->fields.eventId;
  warId = eventUiEntity->fields.warId;
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__Initialization_b__6_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData_27133224((EventInfoUIBase_o *)this, eventId, warId, v24, 0LL);
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

  if ( (byte_41886BF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventInfoTipsArchiveButton_OnClickButton__, v3);
    sub_B2C35C(&Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__, v4);
    byte_41886BF = 1;
  }
  v5 = Method_EventInfoTipsArchiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoTipsArchiveButton_OnClickButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B2C364(Method_EventInfoTipsArchiveButton_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  dialog = this->fields.dialog;
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__, 0LL);
  if ( !dialog )
    sub_B2C434(v9, v10);
  EventInfoTipsArchiveDialog__Open(dialog, v8, v11);
}


void __fastcall EventInfoTipsArchiveButton__OnDestroy(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  EventInfoTipsArchiveButton_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoTipsArchiveButton_o **p_badge; // x20
  UnityEngine_Object_o *badge; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  EventInfoTipsArchiveButton_o **p_dialog; // x19
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Object_o *dialog; // t1
  UnityEngine_Object_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v2 = this;
  if ( (byte_41886BD & 1) == 0 )
  {
    this = (EventInfoTipsArchiveButton_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41886BD = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_23;
  EventInfoUIBase__ReleaseEventUIAssetData_27133720(
    (EventInfoUIBase_o *)v2,
    eventUiEntity->fields.eventId,
    eventUiEntity->fields.warId,
    0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)v2, 0LL);
  p_badge = (EventInfoTipsArchiveButton_o **)&v2->fields.badge;
  badge = (UnityEngine_Object_o *)v2->fields.badge;
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
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_badge = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.badge, 0LL, v7, v8, v9, v10, v11, v12);
  }
  dialog = (UnityEngine_Object_o *)v2->fields.dialog;
  p_dialog = (EventInfoTipsArchiveButton_o **)&v2->fields.dialog;
  v14 = dialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    this = *p_dialog;
    if ( *p_dialog )
    {
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v16, 0LL);
      *p_dialog = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)p_dialog, 0LL, v17, v18, v19, v20, v21, v22);
      return;
    }
LABEL_23:
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, num);
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
  struct EventInfoTipsArchiveDialog_o *Component_srcLineSprite; // x0
  struct EventInfoTipsArchiveDialog_o **p_dialog; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x3
  struct EventUiEntity_o *v20; // x8
  TerminalSceneComponent_c *v21; // x0
  NoticeNumberComponent_o *badge; // x8
  System_Nullable_Vector3__o v23; // 0:x2.16

  if ( (byte_41886C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_14444/*"TipsArchiveDialog"*/, v5);
    sub_B2C35C(&StringLiteral_16448/*"archive_button"*/, v6);
    byte_41886C1 = 1;
  }
  v7 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 (System_String_o *)StringLiteral_14444/*"TipsArchiveDialog"*/,
                                 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mInstance = (EventInfoTipsArchiveDialog_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_23;
    EventInfoUIBase__LoadLocalAtlasWithWarId((EventInfoUIBase_o *)this, eventUiEntity->fields.warId, 0LL);
    if ( !v7 )
      goto LABEL_23;
    Component_srcLineSprite = (struct EventInfoTipsArchiveDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)v7,
                                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___);
    this->fields.dialog = Component_srcLineSprite;
    p_dialog = &this->fields.dialog;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.dialog,
      (System_Int32_array **)Component_srcLineSprite,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v20 = this->fields.eventUiEntity;
    if ( !v20 )
      goto LABEL_23;
    mInstance = *p_dialog;
    if ( !*p_dialog )
      goto LABEL_23;
    EventInfoTipsArchiveDialog__Setup(mInstance, v20->fields.id, this->fields.atlasList, v19);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v9);
      byte_4183C65 = 1;
    }
    v21 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v21 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (EventInfoTipsArchiveDialog_o *)v21->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v23.fields.value.fields.x = 0LL,
          *(_QWORD *)&v23.fields.value.fields.z = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialog,
            v23,
            0LL),
          EventInfoUIBase__SetSpriteByLocalAtlas(
            (EventInfoUIBase_o *)this,
            this->fields.buttonSprite,
            (System_String_o *)StringLiteral_16448/*"archive_button"*/,
            0LL),
          (mInstance = this->fields.dialog) == 0LL)
      || (mInstance = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveDialog__GetAllNewDispCount(mInstance, v9),
          (badge = this->fields.badge) == 0LL) )
    {
LABEL_23:
      sub_B2C434(mInstance, v9);
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
    sub_B2C434(dialog, method);
  }
  NoticeNumberComponent__SetNumber(this->fields.badge, (int32_t)dialog, 0LL);
}