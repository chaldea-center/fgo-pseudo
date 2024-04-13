NoticeNumberComponent_o *__fastcall EventInfoTipsArchiveButton__CreateBadge(
        EventInfoTipsArchiveButton_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E9A6E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E9A6E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)CommonUI__CreateNoticeNumber(Instance, this->fields.noticeNumberRoot, 0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return (NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
}


void __fastcall EventInfoTipsArchiveButton__Initialization(
        EventInfoTipsArchiveButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct NoticeNumberComponent_o *Badge; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0
  __int64 v23; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x4

  if ( (byte_42E9A6C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventInfoTipsArchiveButton__Initialization_b__6_0__, v6, v7, v8);
    byte_42E9A6C = 1;
  }
  Badge = EventInfoTipsArchiveButton__CreateBadge(this, (const MethodInfo *)entity);
  this->fields.badge = Badge;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.badge,
    (System_Int32_array **)Badge,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.eventUiEntity = entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B5D69C(v22, v23);
  eventId = eventUiEntity->fields.eventId;
  warId = eventUiEntity->fields.warId;
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__Initialization_b__6_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData_27069044((EventInfoUIBase_o *)this, eventId, warId, v27, v28);
}


void __fastcall EventInfoTipsArchiveButton__OnClickButton(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  EventInfoTipsArchiveDialog_o *dialog; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_42E9A6D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventInfoTipsArchiveButton_OnClickButton__, v5, v6, v7);
    sub_B5D5C4(&Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__, v8, v9, v10);
    byte_42E9A6D = 1;
  }
  v11 = Method_EventInfoTipsArchiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoTipsArchiveButton_OnClickButton__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B5D5CC(Method_EventInfoTipsArchiveButton_OnClickButton__);
  v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  dialog = this->fields.dialog;
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EventInfoTipsArchiveButton__OnClickButton_b__8_0__, 0LL);
  if ( !dialog )
    sub_B5D69C(v15, v16);
  EventInfoTipsArchiveDialog__Open(dialog, v14, v17);
}


void __fastcall EventInfoTipsArchiveButton__OnDestroy(EventInfoTipsArchiveButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  EventInfoTipsArchiveButton_o *v4; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v6; // x1
  EventInfoTipsArchiveButton_o **p_badge; // x20
  UnityEngine_Object_o *badge; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  EventInfoTipsArchiveButton_o **p_dialog; // x19
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Object_o *dialog; // t1
  UnityEngine_Object_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  v4 = this;
  if ( (byte_42E9A6B & 1) == 0 )
  {
    this = (EventInfoTipsArchiveButton_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9A6B = 1;
  }
  eventUiEntity = v4->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_23;
  EventInfoUIBase__ReleaseEventUIAssetData_27068556(
    (EventInfoUIBase_o *)v4,
    eventUiEntity->fields.eventId,
    eventUiEntity->fields.warId,
    v3);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)v4, v6);
  p_badge = (EventInfoTipsArchiveButton_o **)&v4->fields.badge;
  badge = (UnityEngine_Object_o *)v4->fields.badge;
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_badge = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.badge, 0LL, v10, v11, v12, v13, v14, v15);
  }
  dialog = (UnityEngine_Object_o *)v4->fields.dialog;
  p_dialog = (EventInfoTipsArchiveButton_o **)&v4->fields.dialog;
  v17 = dialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
  {
    this = *p_dialog;
    if ( *p_dialog )
    {
      v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v19, 0LL);
      *p_dialog = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)p_dialog, 0LL, v20, v21, v22, v23, v24, v25);
      return;
    }
LABEL_23:
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, num);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *v17; // x20
  EventInfoTipsArchiveDialog_o *mInstance; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  struct EventInfoTipsArchiveDialog_o *Component_srcLineSprite; // x0
  struct EventInfoTipsArchiveDialog_o **p_dialog; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x3
  struct EventUiEntity_o *v31; // x8
  int v32; // w2
  __int64 v33; // x3
  TerminalSceneComponent_c *v34; // x0
  const MethodInfo *v35; // x3
  NoticeNumberComponent_o *badge; // x8
  System_Nullable_Vector3__o v37; // 0:x2.16

  if ( (byte_42E9A6F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_14601/*"TipsArchiveDialog"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16646/*"archive_button"*/, v14, v15, v16);
    byte_42E9A6F = 1;
  }
  v17 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                  (EventInfoUIBase_o *)this,
                                  (System_String_o *)StringLiteral_14601/*"TipsArchiveDialog"*/,
                                  v2);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mInstance = (EventInfoTipsArchiveDialog_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_23;
    EventInfoUIBase__LoadLocalAtlasWithWarId((EventInfoUIBase_o *)this, eventUiEntity->fields.warId, v20);
    if ( !v17 )
      goto LABEL_23;
    Component_srcLineSprite = (struct EventInfoTipsArchiveDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)v17,
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveDialog___);
    this->fields.dialog = Component_srcLineSprite;
    p_dialog = &this->fields.dialog;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.dialog,
      (System_Int32_array **)Component_srcLineSprite,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v31 = this->fields.eventUiEntity;
    if ( !v31 )
      goto LABEL_23;
    mInstance = *p_dialog;
    if ( !*p_dialog )
      goto LABEL_23;
    EventInfoTipsArchiveDialog__Setup(mInstance, v31->fields.id, this->fields.atlasList, v30);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v19, v32, v33);
      byte_42E4B1E = 1;
    }
    v34 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v34 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (EventInfoTipsArchiveDialog_o *)v34->static_fields->mInstance;
    if ( !mInstance
      || (*(_QWORD *)&v37.fields.value.fields.x = 0LL,
          *(_QWORD *)&v37.fields.value.fields.z = 0LL,
          TerminalSceneComponent__LocateDialogToUiRoot(
            (TerminalSceneComponent_o *)mInstance,
            (BaseDialog_o *)this->fields.dialog,
            v37,
            0LL),
          EventInfoUIBase__SetSpriteByLocalAtlas(
            (EventInfoUIBase_o *)this,
            this->fields.buttonSprite,
            (System_String_o *)StringLiteral_16646/*"archive_button"*/,
            v35),
          (mInstance = this->fields.dialog) == 0LL)
      || (mInstance = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveDialog__GetAllNewDispCount(mInstance, v19),
          (badge = this->fields.badge) == 0LL) )
    {
LABEL_23:
      sub_B5D69C(mInstance, v19);
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
    sub_B5D69C(dialog, method);
  }
  NoticeNumberComponent__SetNumber(this->fields.badge, (int32_t)dialog, 0LL);
}