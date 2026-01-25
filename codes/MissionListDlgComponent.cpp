void MissionListDlgComponent___cctor(const MethodInfo *method)
{
  struct MissionListDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4CE8423 & 1) == 0 )
  {
    sub_1C7BAE8(&MissionListDlgComponent_TypeInfo);
    byte_4CE8423 = 1;
  }
  static_fields = MissionListDlgComponent_TypeInfo->static_fields;
  static_fields->SCROLL_ENABLED_VIEW_COUNT = 1;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_TITLE_POS_Y = 0x430C000043340000LL;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_BTN_POS_Y = 0xB4C3250000LL;
}


void MissionListDlgComponent___ctor(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CE8422 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE8422 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MissionListDlgComponent__OnClickClose(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *Instance; // x0
  __int64 v4; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  MissionListDlgComponent___c_c *v7; // x8
  CommonUI_o *v8; // x19
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v10; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4CE8421 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_MissionListDlgComponent_OnClickClose__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__);
    sub_1C7BAE8(&MissionListDlgComponent___c_TypeInfo);
    byte_4CE8421 = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CE840E )
    {
      sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
      byte_4CE840E = 1;
    }
    Instance = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v4 = **(_QWORD **)&Instance->fields._IsShowHeaderEffect_k__BackingField;
    if ( !v4 )
      goto LABEL_23;
    Instance = *(TitleInfoControl_o **)(v4 + 240);
    if ( !Instance )
      goto LABEL_23;
    TitleInfoControl__SetTouchEnable(Instance, 0, 0);
    v5 = Method_MissionListDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C7BB00(Method_MissionListDlgComponent_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = MissionListDlgComponent___c_TypeInfo;
    v8 = (CommonUI_o *)Instance;
    if ( !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      Instance = (TitleInfoControl_o *)j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
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
      _9__17_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(_9__17_0, v10, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0);
      static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__17_0 = _9__17_0;
      Instance = (TitleInfoControl_o *)sub_1C7BA8C(&static_fields->__9__17_0, _9__17_0);
    }
    if ( !v8 )
LABEL_23:
      sub_1C7BD40(Instance, method);
    CommonUI__CloseEventMissionListDialog(v8, _9__17_0, 0);
  }
}


void MissionListDlgComponent__OnClickMissionList(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *mTitleInfo; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4CE8420 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_MissionListDlgComponent_OnClickMissionList__);
    sub_1C7BAE8(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE8420 = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CE840E )
    {
      sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
      byte_4CE840E = 1;
    }
    mTitleInfo = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      mTitleInfo = TerminalSceneComponent_TypeInfo;
    }
    mInstance = mTitleInfo->static_fields->mInstance;
    if ( !mInstance )
      goto LABEL_17;
    mTitleInfo = (TerminalSceneComponent_c *)mInstance->fields.mTitleInfo;
    if ( !mTitleInfo )
      goto LABEL_17;
    TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)mTitleInfo, 0, 0);
    v5 = Method_MissionListDlgComponent_OnClickMissionList__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickMissionList__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C7BB00(Method_MissionListDlgComponent_OnClickMissionList__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0);
    if ( !Instance )
LABEL_17:
      sub_1C7BD40(mTitleInfo, method);
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
  Il2CppObject *v13; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  System_Action_o *v16; // x20

  if ( (byte_4CE841F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__);
    sub_1C7BAE8(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
    byte_4CE841F = 1;
  }
  v13 = (Il2CppObject *)sub_1C7BD34(MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_10;
  v13[1].klass = (Il2CppClass *)this;
  sub_1C7BA8C(&v13[1], this);
  v13[1].monitor = title;
  sub_1C7BA8C(&v13[1].monitor, title);
  v13[2].klass = (Il2CppClass *)subTitle;
  sub_1C7BA8C(&v13[2], subTitle);
  v13[2].monitor = eventDetailEnt;
  sub_1C7BA8C(&v13[2].monitor, eventDetailEnt);
  v13[3].klass = (Il2CppClass *)eventMissionEntList;
  sub_1C7BA8C(&v13[3], eventMissionEntList);
  v13[3].monitor = missionBtnCallback;
  sub_1C7BA8C(&v13[3].monitor, missionBtnCallback);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_10:
    sub_1C7BD40(gameObject, v15);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v16 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    v13,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v16, 0);
}


void MissionListDlgComponent___OnClickMissionList_b__16_0(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *mTitleInfo; // x0
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4CE8424 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE8424 = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  mTitleInfo = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTitleInfo = TerminalSceneComponent_TypeInfo;
  }
  mInstance = mTitleInfo->static_fields->mInstance;
  if ( !mInstance || (mTitleInfo = (TerminalSceneComponent_c *)mInstance->fields.mTitleInfo) == 0 )
    sub_1C7BD40(mTitleInfo, v3);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)mTitleInfo, 1, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0);
}


void MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CE8425 & 1) == 0 )
  {
    sub_1C7BAE8(&MissionListDlgComponent___c_TypeInfo);
    byte_4CE8425 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(MissionListDlgComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionListDlgComponent___c_TypeInfo->static_fields->__9 = (struct MissionListDlgComponent___c_o *)v1;
  sub_1C7BA8C(MissionListDlgComponent___c_TypeInfo->static_fields, v1);
}


void MissionListDlgComponent___c___ctor(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListDlgComponent___c___OnClickClose_b__17_0(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *mTitleInfo; // x0
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4CE8426 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE8426 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  mTitleInfo = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTitleInfo = TerminalSceneComponent_TypeInfo;
  }
  mInstance = mTitleInfo->static_fields->mInstance;
  if ( !mInstance || (mTitleInfo = (TerminalSceneComponent_c *)mInstance->fields.mTitleInfo) == 0 )
    sub_1C7BD40(mTitleInfo, method);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)mTitleInfo, 1, 0);
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
  struct System_String_o *eventDetailEnt; // x1
  struct System_String_o *eventMissionEntList; // x1
  struct EventDetailEntity_o *missionBtnCallback; // x1
  struct MissionListDlgComponent_o *v9; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  struct EventMissionEntity_array *v11; // x20
  struct MissionListDlgComponent_o *v12; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  MissionListDlgComponent_c *v14; // x8
  UnityEngine_GameObject_o *v15; // x20
  struct MissionListDlgComponent_o *v16; // x8
  UnityEngine_GameObject_o *v17; // x0
  struct MissionListDlgComponent_o *v18; // x8
  struct MissionListDlgComponent_o *v19; // x8
  struct MissionListDlgComponent_o *v20; // x8
  struct MissionListDlgComponent_o *v21; // x8
  struct MissionListDlgComponent_o *v22; // x8
  EventMissionItemListViewManager_o *v23; // x20
  EventMissionEntity_array *v24; // x21
  int32_t v25; // w22
  BaseDialog_o *v26; // x19
  System_Action_o *monitor; // x20
  Il2CppObject *klass; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0

  v2 = this;
  if ( (byte_4CE8427 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&MissionListDlgComponent_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1C7BAE8(&MissionListDlgComponent___c_TypeInfo);
    byte_4CE8427 = 1;
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
  sub_1C7BA8C(&this[2].fields.title, eventDetailEnt);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventMissionEntList = (struct System_String_o *)v2->fields.eventMissionEntList;
  this[2].fields.subTitle = eventMissionEntList;
  sub_1C7BA8C(&this[2].fields.subTitle, eventMissionEntList);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  missionBtnCallback = (struct EventDetailEntity_o *)v2->fields.missionBtnCallback;
  this[2].fields.eventDetailEnt = missionBtnCallback;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1C7BA8C(
                                                              &this[2].fields.eventDetailEnt,
                                                              missionBtnCallback);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_48;
  eventMissionListViewManager = (UnityEngine_Object_o *)v9->fields.eventMissionListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_Object__op_Inequality(
                                                              eventMissionListViewManager,
                                                              0,
                                                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = v2->fields.eventMissionEntList;
    if ( !v11 )
      goto LABEL_48;
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    }
    if ( (__int64)this[2].fields.missionBtnCallback->klass >= SLODWORD(v11->max_length) )
    {
      v12 = v2->fields.__4__this;
      if ( !v12 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v12->fields.titleLabel;
      if ( !this )
        goto LABEL_48;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v14 = MissionListDlgComponent_TypeInfo;
      v15 = gameObject;
      if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
        v14 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v15, v14->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0);
      v16 = v2->fields.__4__this;
      if ( !v16 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v16->fields.subTitleLabel;
      if ( !this )
        goto LABEL_48;
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionY(
        v17,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0);
      v18 = v2->fields.__4__this;
      if ( !v18 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v18->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0);
      v19 = v2->fields.__4__this;
      if ( !v19 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v19->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0);
      v20 = v2->fields.__4__this;
      if ( !v20 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v20->fields.listBg;
      if ( !this )
        goto LABEL_48;
      UIWidget__set_height(
        (UIWidget_o *)this,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT,
        0);
      v21 = v2->fields.__4__this;
      if ( !v21 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v21->fields.eventMissionListViewManager;
      if ( !this )
        goto LABEL_48;
      EventMissionItemListViewManager__SetScrollEnable((EventMissionItemListViewManager_o *)this, 0, 0);
    }
    if ( !byte_4CE84E6 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
      byte_4CE84E6 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v22 = v2->fields.__4__this;
    if ( v22 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.eventDetailEnt;
      if ( this )
      {
        v23 = v22->fields.eventMissionListViewManager;
        v24 = v2->fields.eventMissionEntList;
        v25 = (int32_t)this->fields.__4__this;
        this = (MissionListDlgComponent___c__DisplayClass15_0_o *)EventDetailEntity__isDailyMission(
                                                                    (EventDetailEntity_o *)this,
                                                                    0);
        if ( v23 )
        {
          EventMissionItemListViewManager__CreateList_32276560(v23, v24, v25, (unsigned __int8)this & 1, 0, 0);
          goto LABEL_40;
        }
      }
    }
LABEL_48:
    sub_1C7BD40(this, method);
  }
LABEL_40:
  v26 = (BaseDialog_o *)v2->fields.__4__this;
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
    monitor = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(monitor, klass, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0);
    static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = monitor;
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1C7BA8C(&static_fields->__9__15_1, monitor);
  }
  if ( !v26 )
    goto LABEL_48;
  BaseDialog__Open(v26, monitor, 1, 0, 0);
}