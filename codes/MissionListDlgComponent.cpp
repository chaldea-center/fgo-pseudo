void MissionListDlgComponent___cctor(const MethodInfo *method)
{
  struct MissionListDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4C2AE61 & 1) == 0 )
  {
    sub_1C2D490(&MissionListDlgComponent_TypeInfo);
    byte_4C2AE61 = 1;
  }
  static_fields = MissionListDlgComponent_TypeInfo->static_fields;
  static_fields->SCROLL_ENABLED_VIEW_COUNT = 1;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_TITLE_POS_Y = 0x430C000043340000LL;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_BTN_POS_Y = 0xB4C3250000LL;
}


void MissionListDlgComponent___ctor(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C2AE60 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2AE60 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MissionListDlgComponent__OnClickClose(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  MissionListDlgComponent___c_c *v7; // x8
  CommonUI_o *v8; // x19
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v10; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C2AE5F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_MissionListDlgComponent_OnClickClose__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__);
    sub_1C2D490(&MissionListDlgComponent___c_TypeInfo);
    byte_4C2AE5F = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.mEventBgSp->klass;
    if ( !klass )
      goto LABEL_23;
    genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_23;
    TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0);
    v5 = Method_MissionListDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_MissionListDlgComponent_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    genericContainerHandle = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = MissionListDlgComponent___c_TypeInfo;
    v8 = (CommonUI_o *)genericContainerHandle;
    if ( !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
      v7 = MissionListDlgComponent___c_TypeInfo;
    }
    _9__17_0 = v7->static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = MissionListDlgComponent___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__17_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(_9__17_0, v10, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0);
      static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__17_0 = _9__17_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v12, v13);
    }
    if ( !v8 )
LABEL_23:
      sub_1C2D6EC(genericContainerHandle, method);
    CommonUI__CloseEventMissionListDialog(v8, _9__17_0, 0);
  }
}


void MissionListDlgComponent__OnClickMissionList(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4C2AE5E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_MissionListDlgComponent_OnClickMissionList__);
    sub_1C2D490(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C2AE5E = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.mEventBgSp->klass;
    if ( !klass )
      goto LABEL_17;
    genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_17;
    TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0);
    v5 = Method_MissionListDlgComponent_OnClickMissionList__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickMissionList__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_MissionListDlgComponent_OnClickMissionList__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0);
    if ( !Instance )
LABEL_17:
      sub_1C2D6EC(genericContainerHandle, method);
    CommonUI__CloseEventMissionListDialog((CommonUI_o *)Instance, v8, 0);
  }
}


void MissionListDlgComponent__OpenEventMissionListDialog(
        MissionListDlgComponent_o *this,
        System_String_o *title,
        System_String_o *subTitle,
        EventDetailEntity_o *eventDetailEnt,
        EventMissionEntity_array *eventMissionEntList,
        System_Action_o *missionBtnCallback,
        const MethodInfo *method)
{
  __int64 v13; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Action_o *v28; // x20

  if ( (byte_4C2AE5D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__);
    sub_1C2D490(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
    byte_4C2AE5D = 1;
  }
  v13 = sub_1C2D6DC(MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = title;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 24), (int32_t)title, v18, v19);
  *(_QWORD *)(v13 + 32) = subTitle;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 32), (int32_t)subTitle, v20, v21);
  *(_QWORD *)(v13 + 40) = eventDetailEnt;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 40), (int32_t)eventDetailEnt, v22, v23);
  *(_QWORD *)(v13 + 48) = eventMissionEntList;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 48), (int32_t)eventMissionEntList, v24, v25);
  *(_QWORD *)(v13 + 56) = missionBtnCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 56), (int32_t)missionBtnCallback, v26, v27);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_10:
    sub_1C2D6EC(gameObject, v15);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v28 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v13,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v28, 0);
}


void MissionListDlgComponent___OnClickMissionList_b__16_0(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_4C2AE62 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C2AE62 = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.mEventBgSp->klass;
  if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
    sub_1C2D6EC(genericContainerHandle, v3);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0);
}


void MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2AE63 & 1) == 0 )
  {
    sub_1C2D490(&MissionListDlgComponent___c_TypeInfo);
    byte_4C2AE63 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(MissionListDlgComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionListDlgComponent___c_TypeInfo->static_fields->__9 = (struct MissionListDlgComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)MissionListDlgComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MissionListDlgComponent___c___ctor(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListDlgComponent___c___OnClickClose_b__17_0(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_4C2AE64 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C2AE64 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.mEventBgSp->klass;
  if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
    sub_1C2D6EC(genericContainerHandle, method);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0);
}


void MissionListDlgComponent___c___OpenEventMissionListDialog_b__15_1(
        MissionListDlgComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void MissionListDlgComponent___c__DisplayClass15_0___ctor(
        MissionListDlgComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListDlgComponent___c__DisplayClass15_0___OpenEventMissionListDialog_b__0(
        MissionListDlgComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  MissionListDlgComponent___c__DisplayClass15_0_o *v2; // x19
  struct MissionListDlgComponent_o *_4__this; // x8
  struct MissionListDlgComponent_o *v4; // x8
  struct MissionListDlgComponent_o *v5; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_String_o *eventDetailEnt; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_String_o *eventMissionEntList; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct EventDetailEntity_o *missionBtnCallback; // x1
  struct MissionListDlgComponent_o *v15; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  struct EventMissionEntity_array *v17; // x20
  struct MissionListDlgComponent_o *v18; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  MissionListDlgComponent_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x20
  struct MissionListDlgComponent_o *v22; // x8
  UnityEngine_GameObject_o *v23; // x0
  struct MissionListDlgComponent_o *v24; // x8
  struct MissionListDlgComponent_o *v25; // x8
  struct MissionListDlgComponent_o *v26; // x8
  struct MissionListDlgComponent_o *v27; // x8
  struct MissionListDlgComponent_o *v28; // x8
  EventMissionItemListViewManager_o *v29; // x20
  EventMissionEntity_array *v30; // x21
  int32_t v31; // w22
  BaseDialog_o *v32; // x19
  System_Action_o *monitor; // x20
  Il2CppObject *klass; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3

  v2 = this;
  if ( (byte_4C2AE65 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&MissionListDlgComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1C2D490(&MissionListDlgComponent___c_TypeInfo);
    byte_4C2AE65 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)_4__this->fields.baseWindow;
  if ( !this )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_GameObject__get_gameObject(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
  if ( !this )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v4->fields.titleLabel;
  if ( !this )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)this, v2->fields.title, 0);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v5->fields.subTitleLabel;
  if ( !this )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)this, v2->fields.subTitle, 0);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventDetailEnt = (struct System_String_o *)v2->fields.eventDetailEnt;
  this[2].fields.title = eventDetailEnt;
  sub_1C2D434((CGThumbnailListItem_o *)&this[2].fields.title, (int32_t)eventDetailEnt, v6, v7);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventMissionEntList = (struct System_String_o *)v2->fields.eventMissionEntList;
  this[2].fields.subTitle = eventMissionEntList;
  sub_1C2D434((CGThumbnailListItem_o *)&this[2].fields.subTitle, (int32_t)eventMissionEntList, v9, v10);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  missionBtnCallback = (struct EventDetailEntity_o *)v2->fields.missionBtnCallback;
  this[2].fields.eventDetailEnt = missionBtnCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this[2].fields.eventDetailEnt, (int32_t)missionBtnCallback, v12, v13);
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_48;
  eventMissionListViewManager = (UnityEngine_Object_o *)v15->fields.eventMissionListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_Object__op_Inequality(
                                                              eventMissionListViewManager,
                                                              0,
                                                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = v2->fields.eventMissionEntList;
    if ( !v17 )
      goto LABEL_48;
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    }
    if ( (__int64)this[2].fields.missionBtnCallback->klass >= SLODWORD(v17->max_length) )
    {
      v18 = v2->fields.__4__this;
      if ( !v18 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v18->fields.titleLabel;
      if ( !this )
        goto LABEL_48;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v20 = MissionListDlgComponent_TypeInfo;
      v21 = gameObject;
      if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
        v20 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v21, v20->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0);
      v22 = v2->fields.__4__this;
      if ( !v22 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v22->fields.subTitleLabel;
      if ( !this )
        goto LABEL_48;
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionY(
        v23,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0);
      v24 = v2->fields.__4__this;
      if ( !v24 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v24->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0);
      v25 = v2->fields.__4__this;
      if ( !v25 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v25->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0);
      v26 = v2->fields.__4__this;
      if ( !v26 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v26->fields.listBg;
      if ( !this )
        goto LABEL_48;
      UIWidget__set_height(
        (UIWidget_o *)this,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT,
        0);
      v27 = v2->fields.__4__this;
      if ( !v27 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v27->fields.eventMissionListViewManager;
      if ( !this )
        goto LABEL_48;
      EventMissionItemListViewManager__SetScrollEnable((EventMissionItemListViewManager_o *)this, 0, 0);
    }
    if ( !byte_4C217E4 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217E4 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v28 = v2->fields.__4__this;
    if ( v28 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.eventDetailEnt;
      if ( this )
      {
        v29 = v28->fields.eventMissionListViewManager;
        v30 = v2->fields.eventMissionEntList;
        v31 = (int32_t)this->fields.__4__this;
        this = (MissionListDlgComponent___c__DisplayClass15_0_o *)EventDetailEntity__isDailyMission(
                                                                    (EventDetailEntity_o *)this,
                                                                    0);
        if ( v29 )
        {
          EventMissionItemListViewManager__CreateList_31672696(v29, v30, v31, (unsigned __int8)this & 1, 0, 0);
          goto LABEL_40;
        }
      }
    }
LABEL_48:
    sub_1C2D6EC(this, method);
  }
LABEL_40:
  v32 = (BaseDialog_o *)v2->fields.__4__this;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  if ( !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  }
  monitor = (System_Action_o *)this[2].fields.missionBtnCallback->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this[3].fields.subTitle) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[2].fields.missionBtnCallback->klass;
    monitor = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(monitor, klass, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0);
    static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = monitor;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__15_1, (int32_t)monitor, v36, v37);
  }
  if ( !v32 )
    goto LABEL_48;
  BaseDialog__Open(v32, monitor, 1, 0);
}