void __fastcall MissionListDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MissionListDlgComponent_c *v2; // x8

  if ( (byte_421459A & 1) == 0 )
  {
    sub_B0D8A4(&MissionListDlgComponent_TypeInfo, v1);
    byte_421459A = 1;
  }
  MissionListDlgComponent_TypeInfo->static_fields->SCROLL_ENABLED_VIEW_COUNT = 1;
  MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_TITLE_POS_Y = 180.0;
  v2 = MissionListDlgComponent_TypeInfo;
  MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y = 140.0;
  v2->static_fields->SINGLE_DESIGN_BTN_POS_Y = -165.0;
  v2->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT = 180;
}


void __fastcall MissionListDlgComponent___ctor(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4214599 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4214599 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionListDlgComponent__OnClickClose(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  CommonUI_o *v12; // x19
  MissionListDlgComponent___c_c *v13; // x8
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v16; // x21
  struct MissionListDlgComponent___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4214598 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, v6);
    sub_B0D8A4(&MissionListDlgComponent___c_TypeInfo, v7);
    byte_4214598 = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
      byte_421083D = 1;
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
    genericContainerHandle = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (CommonUI_o *)genericContainerHandle;
    v13 = MissionListDlgComponent___c_TypeInfo;
    if ( (BYTE3(MissionListDlgComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
      v13 = MissionListDlgComponent___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__17_0 = static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__17_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(_9__17_0, v16, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0LL);
      v17 = MissionListDlgComponent___c_TypeInfo->static_fields;
      v17->__9__17_0 = _9__17_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v17->__9__17_0,
        (System_Int32_array **)_9__17_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    if ( !v12 )
LABEL_28:
      sub_B0D97C(genericContainerHandle);
    CommonUI__CloseEventMissionListDialog(v12, _9__17_0, 0LL);
  }
}


void __fastcall MissionListDlgComponent__OnClickMissionList(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4214597 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v6);
    byte_4214597 = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
      byte_421083D = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0LL);
    if ( !Instance )
LABEL_20:
      sub_B0D97C(genericContainerHandle);
    CommonUI__CloseEventMissionListDialog(Instance, v12, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_o *v56; // x20

  if ( (byte_4214596 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, title);
    sub_B0D8A4(&AtlasManager_TypeInfo, v13);
    sub_B0D8A4(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__, v14);
    sub_B0D8A4(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo, v15);
    byte_4214596 = 1;
  }
  v16 = sub_B0D974(MissionListDlgComponent___c__DisplayClass15_0_TypeInfo, title, subTitle);
  MissionListDlgComponent___c__DisplayClass15_0___ctor((MissionListDlgComponent___c__DisplayClass15_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_QWORD *)(v16 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v16 + 24) = title;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)title, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v16 + 32) = subTitle;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)subTitle, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v16 + 40) = eventDetailEnt;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v16 + 40),
    (System_Int32_array **)eventDetailEnt,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  *(_QWORD *)(v16 + 48) = eventMissionEntList;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v16 + 48),
    (System_Int32_array **)eventMissionEntList,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  *(_QWORD *)(v16 + 56) = missionBtnCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v16 + 56),
    (System_Int32_array **)missionBtnCallback,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_11:
    sub_B0D97C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v56 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v54, v55);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v16,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v56, 0LL);
}


void __fastcall MissionListDlgComponent___OnClickMissionList_b__16_0(
        MissionListDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_421459B & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v3);
    byte_421459B = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v4);
    byte_421083D = 1;
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
    sub_B0D97C(genericContainerHandle);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


void __fastcall MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4212728 & 1) == 0 )
  {
    sub_B0D8A4(&MissionListDlgComponent___c_TypeInfo, v1);
    byte_4212728 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MissionListDlgComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MissionListDlgComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall MissionListDlgComponent___c___ctor(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListDlgComponent___c___OnClickClose_b__17_0(
        MissionListDlgComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_4212729 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v2);
    byte_4212729 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
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
    sub_B0D97C(genericContainerHandle);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct MissionListDlgComponent_o *_4__this; // x8
  struct MissionListDlgComponent_o *v8; // x8
  struct MissionListDlgComponent_o *v9; // x8
  struct EventDetailEntity_o *eventDetailEnt; // x1
  struct MissionListDlgComponent_o *eventMissionEntList; // x1
  struct System_String_o *missionBtnCallback; // x1
  struct MissionListDlgComponent_o *v13; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  __int64 v15; // x1
  __int64 v16; // x2
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
  void *static_fields; // x8
  System_Action_o *v34; // x20
  Il2CppObject *v35; // x21
  struct MissionListDlgComponent___c_StaticFields *v36; // x0

  v2 = this;
  if ( (byte_421272A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&MissionListDlgComponent_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, v5);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_B0D8A4(&MissionListDlgComponent___c_TypeInfo, v6);
    byte_421272A = 1;
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
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_53;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v8->fields.titleLabel;
  if ( !this )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)this, v2->fields.title, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_53;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v9->fields.subTitleLabel;
  if ( !this )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)this, v2->fields.subTitle, 0LL);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_53;
  eventDetailEnt = v2->fields.eventDetailEnt;
  this[2].monitor = eventDetailEnt;
  sub_B0D840(&this[2].monitor, eventDetailEnt);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_53;
  eventMissionEntList = (struct MissionListDlgComponent_o *)v2->fields.eventMissionEntList;
  this[2].fields.__4__this = eventMissionEntList;
  sub_B0D840(&this[2].fields, eventMissionEntList);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_53;
  missionBtnCallback = (struct System_String_o *)v2->fields.missionBtnCallback;
  this[2].fields.title = missionBtnCallback;
  sub_B0D840(&this[2].fields.title, missionBtnCallback);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_53;
  eventMissionListViewManager = (UnityEngine_Object_o *)v13->fields.eventMissionListViewManager;
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
    v17 = v2->fields.eventMissionEntList;
    if ( !v17 )
      goto LABEL_53;
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    if ( (BYTE3(MissionListDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    }
    if ( (__int64)this[2].fields.missionBtnCallback->klass >= v17->max_length )
    {
      v18 = v2->fields.__4__this;
      if ( !v18 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v18->fields.titleLabel;
      if ( !this )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v20 = MissionListDlgComponent_TypeInfo;
      v21 = gameObject;
      if ( (BYTE3(MissionListDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
        v20 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v21, v20->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0LL);
      v22 = v2->fields.__4__this;
      if ( !v22 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v22->fields.subTitleLabel;
      if ( !this )
        goto LABEL_53;
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v23,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0LL);
      v24 = v2->fields.__4__this;
      if ( !v24 )
        goto LABEL_53;
      GameObjectExtensions__SetLocalPositionY(
        v24->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v25 = v2->fields.__4__this;
      if ( !v25 )
        goto LABEL_53;
      GameObjectExtensions__SetLocalPositionY(
        v25->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v26 = v2->fields.__4__this;
      if ( !v26 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v26->fields.listBg;
      if ( !this )
        goto LABEL_53;
      UIWidget__set_height(
        (UIWidget_o *)this,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT,
        0LL);
      v27 = v2->fields.__4__this;
      if ( !v27 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v27->fields.eventMissionListViewManager;
      if ( !this )
        goto LABEL_53;
      EventMissionItemListViewManager__SetScrollEnable((EventMissionItemListViewManager_o *)this, 0, 0LL);
    }
    if ( !byte_421277D )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, v15);
      byte_421277D = 1;
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
                                                                    0LL);
        if ( v29 )
        {
          EventMissionItemListViewManager__CreateList_25178612(v29, v30, v31, (unsigned __int8)this & 1, 0, 0LL);
          goto LABEL_43;
        }
      }
    }
LABEL_53:
    sub_B0D97C(this);
  }
LABEL_43:
  v32 = (BaseDialog_o *)v2->fields.__4__this;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  if ( (BYTE3(MissionListDlgComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  }
  static_fields = this[2].fields.missionBtnCallback;
  v34 = (System_Action_o *)*((_QWORD *)static_fields + 1);
  if ( !v34 )
  {
    if ( (BYTE3(this[4].fields.eventMissionEntList) & 4) != 0 && !LODWORD(this[3].fields.subTitle) )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    }
    v35 = *(Il2CppObject **)static_fields;
    v34 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(v34, v35, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0LL);
    v36 = MissionListDlgComponent___c_TypeInfo->static_fields;
    v36->__9__15_1 = v34;
    sub_B0D840(&v36->__9__15_1, v34);
  }
  if ( !v32 )
    goto LABEL_53;
  BaseDialog__Open(v32, v34, 1, 0LL);
}