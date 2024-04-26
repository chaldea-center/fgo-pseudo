void __fastcall MissionListDlgComponent___cctor(const MethodInfo *method)
{
  MissionListDlgComponent_c *v1; // x8

  if ( (byte_43504E8 & 1) == 0 )
  {
    sub_B70694(&MissionListDlgComponent_TypeInfo);
    byte_43504E8 = 1;
  }
  MissionListDlgComponent_TypeInfo->static_fields->SCROLL_ENABLED_VIEW_COUNT = 1;
  MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_TITLE_POS_Y = 180.0;
  v1 = MissionListDlgComponent_TypeInfo;
  MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y = 140.0;
  v1->static_fields->SINGLE_DESIGN_BTN_POS_Y = -165.0;
  v1->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT = 180;
}


void __fastcall MissionListDlgComponent___ctor(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_43504E7 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_43504E7 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionListDlgComponent__OnClickClose(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  CommonUI_o *v5; // x19
  MissionListDlgComponent___c_c *v6; // x8
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v9; // x21
  struct MissionListDlgComponent___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43504E6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__);
    sub_B70694(&MissionListDlgComponent___c_TypeInfo);
    byte_43504E6 = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.mEventItemEventBtn->klass;
    if ( !klass )
      goto LABEL_28;
    genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_28;
    TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    genericContainerHandle = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)genericContainerHandle;
    v6 = MissionListDlgComponent___c_TypeInfo;
    if ( (BYTE3(MissionListDlgComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
      v6 = MissionListDlgComponent___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__17_0 = static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__17_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(_9__17_0, v9, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0LL);
      v10 = MissionListDlgComponent___c_TypeInfo->static_fields;
      v10->__9__17_0 = _9__17_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v10->__9__17_0,
        (System_Int32_array **)_9__17_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    if ( !v5 )
LABEL_28:
      sub_B7076C(genericContainerHandle, method);
    CommonUI__CloseEventMissionListDialog(v5, _9__17_0, 0LL);
  }
}


void __fastcall MissionListDlgComponent__OnClickMissionList(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_43504E5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_43504E5 = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.mEventItemEventBtn->klass;
    if ( !klass )
      goto LABEL_20;
    genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_20;
    TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0LL);
    if ( !Instance )
LABEL_20:
      sub_B7076C(genericContainerHandle, method);
    CommonUI__CloseEventMissionListDialog(Instance, v6, 0LL);
  }
}


void __fastcall MissionListDlgComponent__OpenEventMissionListDialog(
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Action_o *v52; // x20

  if ( (byte_43504E4 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__);
    sub_B70694(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
    byte_43504E4 = 1;
  }
  v13 = sub_B70764(MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
  MissionListDlgComponent___c__DisplayClass15_0___ctor((MissionListDlgComponent___c__DisplayClass15_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = title;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)title, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v13 + 32) = subTitle;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)subTitle, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v13 + 40) = eventDetailEnt;
  sub_B70630(
    (BattleServantConfConponent_o *)(v13 + 40),
    (System_Int32_array **)eventDetailEnt,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  *(_QWORD *)(v13 + 48) = eventMissionEntList;
  sub_B70630(
    (BattleServantConfConponent_o *)(v13 + 48),
    (System_Int32_array **)eventMissionEntList,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  *(_QWORD *)(v13 + 56) = missionBtnCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v13 + 56),
    (System_Int32_array **)missionBtnCallback,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_11:
    sub_B7076C(gameObject, v15);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v52 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v13,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v52, 0LL);
}


void __fastcall MissionListDlgComponent___OnClickMissionList_b__16_0(
        MissionListDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_43504E9 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_43504E9 = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.mEventItemEventBtn->klass;
  if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0LL )
    sub_B7076C(genericContainerHandle, v3);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


void __fastcall MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0

  if ( (byte_434F3EF & 1) == 0 )
  {
    sub_B70694(&MissionListDlgComponent___c_TypeInfo);
    byte_434F3EF = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(MissionListDlgComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MissionListDlgComponent___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall MissionListDlgComponent___c___ctor(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListDlgComponent___c___OnClickClose_b__17_0(
        MissionListDlgComponent___c_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_434F3F0 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434F3F0 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.mEventItemEventBtn->klass;
  if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0LL )
    sub_B7076C(genericContainerHandle, method);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


void __fastcall MissionListDlgComponent___c___OpenEventMissionListDialog_b__15_1(
        MissionListDlgComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionListDlgComponent___c__DisplayClass15_0___ctor(
        MissionListDlgComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListDlgComponent___c__DisplayClass15_0___OpenEventMissionListDialog_b__0(
        MissionListDlgComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  MissionListDlgComponent___c__DisplayClass15_0_o *v2; // x19
  struct MissionListDlgComponent_o *_4__this; // x8
  struct MissionListDlgComponent_o *v4; // x8
  struct MissionListDlgComponent_o *v5; // x8
  struct MissionListDlgComponent_o *v6; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  struct EventMissionEntity_array *eventMissionEntList; // x20
  struct MissionListDlgComponent_o *v9; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  MissionListDlgComponent_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x20
  struct MissionListDlgComponent_o *v13; // x8
  UnityEngine_GameObject_o *v14; // x0
  struct MissionListDlgComponent_o *v15; // x8
  struct MissionListDlgComponent_o *v16; // x8
  struct MissionListDlgComponent_o *v17; // x8
  struct MissionListDlgComponent_o *v18; // x8
  struct MissionListDlgComponent_o *v19; // x8
  EventMissionItemListViewManager_o *v20; // x20
  EventMissionEntity_array *v21; // x21
  int32_t v22; // w22
  BaseDialog_o *v23; // x19
  void *missionBtnCallback; // x8
  System_Action_o *v25; // x20
  Il2CppObject *v26; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0

  v2 = this;
  if ( (byte_434F3F1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&MissionListDlgComponent_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_B70694(&MissionListDlgComponent___c_TypeInfo);
    byte_434F3F1 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_53;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)_4__this->fields.baseWindow;
  if ( !this )
    goto LABEL_53;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_GameObject__get_gameObject(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_53;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v4->fields.titleLabel;
  if ( !this )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)this, v2->fields.title, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_53;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v5->fields.subTitleLabel;
  if ( !this )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)this, v2->fields.subTitle, 0LL);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_53;
  this[2].monitor = v2->fields.eventDetailEnt;
  sub_B70630(&this[2].monitor);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_53;
  this[2].fields.__4__this = (struct MissionListDlgComponent_o *)v2->fields.eventMissionEntList;
  sub_B70630(&this[2].fields);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_53;
  this[2].fields.title = (struct System_String_o *)v2->fields.missionBtnCallback;
  sub_B70630(&this[2].fields.title);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_53;
  eventMissionListViewManager = (UnityEngine_Object_o *)v6->fields.eventMissionListViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_Object__op_Inequality(
                                                              eventMissionListViewManager,
                                                              0LL,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    eventMissionEntList = v2->fields.eventMissionEntList;
    if ( !eventMissionEntList )
      goto LABEL_53;
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    if ( (BYTE3(MissionListDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    }
    if ( (__int64)this[2].fields.missionBtnCallback->klass >= eventMissionEntList->max_length )
    {
      v9 = v2->fields.__4__this;
      if ( !v9 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v9->fields.titleLabel;
      if ( !this )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v11 = MissionListDlgComponent_TypeInfo;
      v12 = gameObject;
      if ( (BYTE3(MissionListDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
        v11 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v12, v11->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0LL);
      v13 = v2->fields.__4__this;
      if ( !v13 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v13->fields.subTitleLabel;
      if ( !this )
        goto LABEL_53;
      v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v14,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0LL);
      v15 = v2->fields.__4__this;
      if ( !v15 )
        goto LABEL_53;
      GameObjectExtensions__SetLocalPositionY(
        v15->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v16 = v2->fields.__4__this;
      if ( !v16 )
        goto LABEL_53;
      GameObjectExtensions__SetLocalPositionY(
        v16->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v17 = v2->fields.__4__this;
      if ( !v17 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v17->fields.listBg;
      if ( !this )
        goto LABEL_53;
      UIWidget__set_height(
        (UIWidget_o *)this,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT,
        0LL);
      v18 = v2->fields.__4__this;
      if ( !v18 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v18->fields.eventMissionListViewManager;
      if ( !this )
        goto LABEL_53;
      EventMissionItemListViewManager__SetScrollEnable((EventMissionItemListViewManager_o *)this, 0, 0LL);
    }
    if ( !byte_434F41B )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_B70694(&EventRewardSaveData_TypeInfo);
      byte_434F41B = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v19 = v2->fields.__4__this;
    if ( v19 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.eventDetailEnt;
      if ( this )
      {
        v20 = v19->fields.eventMissionListViewManager;
        v21 = v2->fields.eventMissionEntList;
        v22 = (int32_t)this->fields.__4__this;
        this = (MissionListDlgComponent___c__DisplayClass15_0_o *)EventDetailEntity__isDailyMission(
                                                                    (EventDetailEntity_o *)this,
                                                                    0LL);
        if ( v20 )
        {
          EventMissionItemListViewManager__CreateList_25369852(v20, v21, v22, (unsigned __int8)this & 1, 0, 0LL);
          goto LABEL_43;
        }
      }
    }
LABEL_53:
    sub_B7076C(this, method);
  }
LABEL_43:
  v23 = (BaseDialog_o *)v2->fields.__4__this;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  if ( (BYTE3(MissionListDlgComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  }
  missionBtnCallback = this[2].fields.missionBtnCallback;
  v25 = (System_Action_o *)*((_QWORD *)missionBtnCallback + 1);
  if ( !v25 )
  {
    if ( (BYTE3(this[4].fields.eventMissionEntList) & 4) != 0 && !LODWORD(this[3].fields.subTitle) )
    {
      j_il2cpp_runtime_class_init_0(this);
      missionBtnCallback = MissionListDlgComponent___c_TypeInfo->static_fields;
    }
    v26 = *(Il2CppObject **)missionBtnCallback;
    v25 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v25, v26, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0LL);
    static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = v25;
    sub_B70630(&static_fields->__9__15_1);
  }
  if ( !v23 )
    goto LABEL_53;
  BaseDialog__Open(v23, v25, 1, 0LL);
}