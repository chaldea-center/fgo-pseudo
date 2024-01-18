void __fastcall MissionListDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MissionListDlgComponent_c *v2; // x8

  if ( (byte_4187301 & 1) == 0 )
  {
    sub_B2C35C(&MissionListDlgComponent_TypeInfo, v1);
    byte_4187301 = 1;
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
  if ( (byte_4187300 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187300 = 1;
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
  CommonUI_o *v10; // x19
  MissionListDlgComponent___c_c *v11; // x8
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v14; // x21
  struct MissionListDlgComponent___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_41872FF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v5);
    sub_B2C35C(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, v6);
    sub_B2C35C(&MissionListDlgComponent___c_TypeInfo, v7);
    byte_41872FF = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
      byte_4183C65 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.replaceEventRewardBtnLogo->klass;
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
    genericContainerHandle = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (CommonUI_o *)genericContainerHandle;
    v11 = MissionListDlgComponent___c_TypeInfo;
    if ( (BYTE3(MissionListDlgComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
      v11 = MissionListDlgComponent___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__17_0 = static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__17_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__17_0, v14, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0LL);
      v15 = MissionListDlgComponent___c_TypeInfo->static_fields;
      v15->__9__17_0 = _9__17_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v15->__9__17_0,
        (System_Int32_array **)_9__17_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( !v10 )
LABEL_28:
      sub_B2C434(genericContainerHandle, method);
    CommonUI__CloseEventMissionListDialog(v10, _9__17_0, 0LL);
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
  System_Action_o *v10; // x21

  if ( (byte_41872FE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v6);
    byte_41872FE = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
      byte_4183C65 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.replaceEventRewardBtnLogo->klass;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0LL);
    if ( !Instance )
LABEL_20:
      sub_B2C434(genericContainerHandle, method);
    CommonUI__CloseEventMissionListDialog(Instance, v10, 0LL);
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
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Action_o *v55; // x20

  if ( (byte_41872FD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, title);
    sub_B2C35C(&AtlasManager_TypeInfo, v13);
    sub_B2C35C(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__, v14);
    sub_B2C35C(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo, v15);
    byte_41872FD = 1;
  }
  v16 = sub_B2C42C(MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
  MissionListDlgComponent___c__DisplayClass15_0___ctor((MissionListDlgComponent___c__DisplayClass15_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_QWORD *)(v16 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = title;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)title, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v16 + 32) = subTitle;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)subTitle, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v16 + 40) = eventDetailEnt;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v16 + 40),
    (System_Int32_array **)eventDetailEnt,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  *(_QWORD *)(v16 + 48) = eventMissionEntList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v16 + 48),
    (System_Int32_array **)eventMissionEntList,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  *(_QWORD *)(v16 + 56) = missionBtnCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v16 + 56),
    (System_Int32_array **)missionBtnCallback,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_11:
    sub_B2C434(gameObject, v18);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v55 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v16,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v55, 0LL);
}


void __fastcall MissionListDlgComponent___OnClickMissionList_b__16_0(
        MissionListDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_4187302 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v3);
    byte_4187302 = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v4);
    byte_4183C65 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.replaceEventRewardBtnLogo->klass;
  if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0LL )
    sub_B2C434(genericContainerHandle, v4);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


void __fastcall MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185D27 & 1) == 0 )
  {
    sub_B2C35C(&MissionListDlgComponent___c_TypeInfo, v1);
    byte_4185D27 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MissionListDlgComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MissionListDlgComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4185D28 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v2);
    byte_4185D28 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.replaceEventRewardBtnLogo->klass;
  if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0LL )
    sub_B2C434(genericContainerHandle, method);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct EventDetailEntity_o *eventDetailEnt; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct MissionListDlgComponent_o *eventMissionEntList; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_String_o *missionBtnCallback; // x1
  struct MissionListDlgComponent_o *v31; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  struct EventMissionEntity_array *v33; // x20
  struct MissionListDlgComponent_o *v34; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  MissionListDlgComponent_c *v36; // x8
  UnityEngine_GameObject_o *v37; // x20
  struct MissionListDlgComponent_o *v38; // x8
  UnityEngine_GameObject_o *v39; // x0
  struct MissionListDlgComponent_o *v40; // x8
  struct MissionListDlgComponent_o *v41; // x8
  struct MissionListDlgComponent_o *v42; // x8
  struct MissionListDlgComponent_o *v43; // x8
  struct MissionListDlgComponent_o *v44; // x8
  EventMissionItemListViewManager_o *v45; // x20
  EventMissionEntity_array *v46; // x21
  int32_t v47; // w22
  BaseDialog_o *v48; // x19
  void *static_fields; // x8
  System_Action_o *v50; // x20
  Il2CppObject *v51; // x21
  struct MissionListDlgComponent___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  v2 = this;
  if ( (byte_4185D29 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&MissionListDlgComponent_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, v5);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_B2C35C(&MissionListDlgComponent___c_TypeInfo, v6);
    byte_4185D29 = 1;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this[2].monitor,
    (System_Int32_array **)eventDetailEnt,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_53;
  eventMissionEntList = (struct MissionListDlgComponent_o *)v2->fields.eventMissionEntList;
  this[2].fields.__4__this = eventMissionEntList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this[2].fields,
    (System_Int32_array **)eventMissionEntList,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_53;
  missionBtnCallback = (struct System_String_o *)v2->fields.missionBtnCallback;
  this[2].fields.title = missionBtnCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this[2].fields.title,
    (System_Int32_array **)missionBtnCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v31 = v2->fields.__4__this;
  if ( !v31 )
    goto LABEL_53;
  eventMissionListViewManager = (UnityEngine_Object_o *)v31->fields.eventMissionListViewManager;
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
    v33 = v2->fields.eventMissionEntList;
    if ( !v33 )
      goto LABEL_53;
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    if ( (BYTE3(MissionListDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    }
    if ( (__int64)this[2].fields.missionBtnCallback->klass >= v33->max_length )
    {
      v34 = v2->fields.__4__this;
      if ( !v34 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v34->fields.titleLabel;
      if ( !this )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v36 = MissionListDlgComponent_TypeInfo;
      v37 = gameObject;
      if ( (BYTE3(MissionListDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
        v36 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v37, v36->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0LL);
      v38 = v2->fields.__4__this;
      if ( !v38 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v38->fields.subTitleLabel;
      if ( !this )
        goto LABEL_53;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v39,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0LL);
      v40 = v2->fields.__4__this;
      if ( !v40 )
        goto LABEL_53;
      GameObjectExtensions__SetLocalPositionY(
        v40->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v41 = v2->fields.__4__this;
      if ( !v41 )
        goto LABEL_53;
      GameObjectExtensions__SetLocalPositionY(
        v41->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v42 = v2->fields.__4__this;
      if ( !v42 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v42->fields.listBg;
      if ( !this )
        goto LABEL_53;
      UIWidget__set_height(
        (UIWidget_o *)this,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT,
        0LL);
      v43 = v2->fields.__4__this;
      if ( !v43 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v43->fields.eventMissionListViewManager;
      if ( !this )
        goto LABEL_53;
      EventMissionItemListViewManager__SetScrollEnable((EventMissionItemListViewManager_o *)this, 0, 0LL);
    }
    if ( !byte_4185D94 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
      byte_4185D94 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v44 = v2->fields.__4__this;
    if ( v44 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.eventDetailEnt;
      if ( this )
      {
        v45 = v44->fields.eventMissionListViewManager;
        v46 = v2->fields.eventMissionEntList;
        v47 = (int32_t)this->fields.__4__this;
        this = (MissionListDlgComponent___c__DisplayClass15_0_o *)EventDetailEntity__isDailyMission(
                                                                    (EventDetailEntity_o *)this,
                                                                    0LL);
        if ( v45 )
        {
          EventMissionItemListViewManager__CreateList_24967208(v45, v46, v47, (unsigned __int8)this & 1, 0, 0LL);
          goto LABEL_43;
        }
      }
    }
LABEL_53:
    sub_B2C434(this, method);
  }
LABEL_43:
  v48 = (BaseDialog_o *)v2->fields.__4__this;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  if ( (BYTE3(MissionListDlgComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  }
  static_fields = this[2].fields.missionBtnCallback;
  v50 = (System_Action_o *)*((_QWORD *)static_fields + 1);
  if ( !v50 )
  {
    if ( (BYTE3(this[4].fields.eventMissionEntList) & 4) != 0 && !LODWORD(this[3].fields.subTitle) )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    }
    v51 = *(Il2CppObject **)static_fields;
    v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v50, v51, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0LL);
    v52 = MissionListDlgComponent___c_TypeInfo->static_fields;
    v52->__9__15_1 = v50;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v52->__9__15_1,
      (System_Int32_array **)v50,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  if ( !v48 )
    goto LABEL_53;
  BaseDialog__Open(v48, v50, 1, 0LL);
}