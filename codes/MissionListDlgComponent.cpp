void __fastcall MissionListDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MissionListDlgComponent_c *v2; // x8

  if ( (byte_40F7BDF & 1) == 0 )
  {
    sub_B16FFC(&MissionListDlgComponent_TypeInfo, v1);
    byte_40F7BDF = 1;
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
  if ( (byte_40F7BDE & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F7BDE = 1;
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
  TerminalSceneComponent_c *v8; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  CommonUI_o *Instance; // x19
  MissionListDlgComponent___c_c *v16; // x8
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v19; // x21
  struct MissionListDlgComponent___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F7BDD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v5);
    sub_B16FFC(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, v6);
    sub_B16FFC(&MissionListDlgComponent___c_TypeInfo, v7);
    byte_40F7BDD = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
      byte_40F6042 = 1;
    }
    v8 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v8->static_fields->mInstance;
    if ( !mInstance )
      goto LABEL_28;
    mTitleInfo = mInstance->fields.mTitleInfo;
    if ( !mTitleInfo )
      goto LABEL_28;
    TitleInfoControl__SetTouchEnable(mTitleInfo, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = MissionListDlgComponent___c_TypeInfo;
    if ( (BYTE3(MissionListDlgComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
      v16 = MissionListDlgComponent___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__17_0 = static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__17_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
      System_Action___ctor(_9__17_0, v19, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0LL);
      v20 = MissionListDlgComponent___c_TypeInfo->static_fields;
      v20->__9__17_0 = _9__17_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v20->__9__17_0,
        (System_Int32_array **)_9__17_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    if ( !Instance )
LABEL_28:
      sub_B170D4();
    CommonUI__CloseEventMissionListDialog(Instance, _9__17_0, 0LL);
  }
}


void __fastcall MissionListDlgComponent__OnClickMissionList(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalSceneComponent_c *v7; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0
  CommonUI_o *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F7BDC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v6);
    byte_40F7BDC = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
      byte_40F6042 = 1;
    }
    v7 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v7->static_fields->mInstance;
    if ( !mInstance )
      goto LABEL_20;
    mTitleInfo = mInstance->fields.mTitleInfo;
    if ( !mTitleInfo )
      goto LABEL_20;
    TitleInfoControl__SetTouchEnable(mTitleInfo, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0LL);
    if ( !Instance )
LABEL_20:
      sub_B170D4();
    CommonUI__CloseEventMissionListDialog(Instance, v15, 0LL);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Action_o *v60; // x20

  if ( (byte_40F7BDB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&AtlasManager_TypeInfo, v13);
    sub_B16FFC(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__, v14);
    sub_B16FFC(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo, v15);
    byte_40F7BDB = 1;
  }
  v16 = sub_B170CC(
          MissionListDlgComponent___c__DisplayClass15_0_TypeInfo,
          title,
          subTitle,
          eventDetailEnt,
          eventMissionEntList);
  MissionListDlgComponent___c__DisplayClass15_0___ctor((MissionListDlgComponent___c__DisplayClass15_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 24) = title;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)title, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v16 + 32) = subTitle;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)subTitle, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v16 + 40) = eventDetailEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v16 + 40),
    (System_Int32_array **)eventDetailEnt,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  *(_QWORD *)(v16 + 48) = eventMissionEntList;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v16 + 48),
    (System_Int32_array **)eventMissionEntList,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  *(_QWORD *)(v16 + 56) = missionBtnCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v16 + 56),
    (System_Int32_array **)missionBtnCallback,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite) == 0LL)
    || (v55 = UnityEngine_Component__get_gameObject(maskSprite, 0LL)) == 0LL )
  {
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v55, 1, 0LL);
  v60 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v16,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v60, 0LL);
}


void __fastcall MissionListDlgComponent___OnClickMissionList_b__16_0(
        MissionListDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalSceneComponent_c *v5; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0

  if ( (byte_40F7BE0 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v3);
    byte_40F7BE0 = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v4);
    byte_40F6042 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance || (mTitleInfo = mInstance->fields.mTitleInfo) == 0LL )
    sub_B170D4();
  TitleInfoControl__SetTouchEnable(mTitleInfo, 1, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


void __fastcall MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F861D & 1) == 0 )
  {
    sub_B16FFC(&MissionListDlgComponent___c_TypeInfo, v1);
    byte_40F861D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MissionListDlgComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MissionListDlgComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0

  if ( (byte_40F861E & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v2);
    byte_40F861E = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance || (mTitleInfo = mInstance->fields.mTitleInfo) == 0LL )
    sub_B170D4();
  TitleInfoControl__SetTouchEnable(mTitleInfo, 1, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct MissionListDlgComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *baseWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct MissionListDlgComponent_o *v10; // x8
  UILabel_o *titleLabel; // x0
  struct MissionListDlgComponent_o *v12; // x8
  UILabel_o *subTitleLabel; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct MissionListDlgComponent_o *v20; // x0
  System_Int32_array **eventDetailEnt; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct MissionListDlgComponent_o *v28; // x0
  System_Int32_array **eventMissionEntList; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct MissionListDlgComponent_o *v36; // x0
  System_Int32_array **missionBtnCallback; // x1
  struct MissionListDlgComponent_o *v38; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  struct EventMissionEntity_array *v44; // x20
  MissionListDlgComponent_c *v45; // x0
  struct MissionListDlgComponent_o *v46; // x8
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  MissionListDlgComponent_c *v49; // x8
  UnityEngine_GameObject_o *v50; // x20
  struct MissionListDlgComponent_o *v51; // x8
  UnityEngine_Component_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  struct MissionListDlgComponent_o *v54; // x8
  struct MissionListDlgComponent_o *v55; // x8
  struct MissionListDlgComponent_o *v56; // x8
  UIWidget_o *listBg; // x0
  struct MissionListDlgComponent_o *v58; // x8
  EventMissionItemListViewManager_o *v59; // x0
  struct MissionListDlgComponent_o *v60; // x8
  struct EventDetailEntity_o *v61; // x0
  EventMissionItemListViewManager_o *v62; // x20
  EventMissionEntity_array *v63; // x21
  int32_t eventId; // w22
  bool isDailyMission; // w0
  BaseDialog_o *v66; // x19
  MissionListDlgComponent___c_c *v67; // x0
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__15_1; // x20
  Il2CppObject *v70; // x21
  struct MissionListDlgComponent___c_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7

  if ( (byte_40F861F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&MissionListDlgComponent_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, v5);
    sub_B16FFC(&MissionListDlgComponent___c_TypeInfo, v6);
    byte_40F861F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_53;
  baseWindow = _4__this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_53;
  gameObject = UnityEngine_GameObject__get_gameObject(baseWindow, 0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_53;
  titleLabel = v10->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_53;
  UILabel__set_text(titleLabel, this->fields.title, 0LL);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_53;
  subTitleLabel = v12->fields.subTitleLabel;
  if ( !subTitleLabel )
    goto LABEL_53;
  UILabel__set_text(subTitleLabel, this->fields.subTitle, 0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_53;
  eventDetailEnt = (System_Int32_array **)this->fields.eventDetailEnt;
  v20->fields.eventDetailEntity = (struct EventDetailEntity_o *)eventDetailEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v20->fields.eventDetailEntity,
    eventDetailEnt,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_53;
  eventMissionEntList = (System_Int32_array **)this->fields.eventMissionEntList;
  v28->fields.eventMissionEntityList = (struct EventMissionEntity_array *)eventMissionEntList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v28->fields.eventMissionEntityList,
    eventMissionEntList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_53;
  missionBtnCallback = (System_Int32_array **)this->fields.missionBtnCallback;
  v36->fields.missionBtnCallbackFunc = (struct System_Action_o *)missionBtnCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v36->fields.missionBtnCallbackFunc,
    missionBtnCallback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v38 = this->fields.__4__this;
  if ( !v38 )
    goto LABEL_53;
  eventMissionListViewManager = (UnityEngine_Object_o *)v38->fields.eventMissionListViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventMissionListViewManager, 0LL, 0LL) )
  {
    v44 = this->fields.eventMissionEntList;
    if ( !v44 )
      goto LABEL_53;
    v45 = MissionListDlgComponent_TypeInfo;
    if ( (BYTE3(MissionListDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
      v45 = MissionListDlgComponent_TypeInfo;
    }
    if ( v45->static_fields->SCROLL_ENABLED_VIEW_COUNT >= (signed int)v44->max_length )
    {
      v46 = this->fields.__4__this;
      if ( !v46 )
        goto LABEL_53;
      v47 = (UnityEngine_Component_o *)v46->fields.titleLabel;
      if ( !v47 )
        goto LABEL_53;
      v48 = UnityEngine_Component__get_gameObject(v47, 0LL);
      v49 = MissionListDlgComponent_TypeInfo;
      v50 = v48;
      if ( (BYTE3(MissionListDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
        v49 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v50, v49->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0LL);
      v51 = this->fields.__4__this;
      if ( !v51 )
        goto LABEL_53;
      v52 = (UnityEngine_Component_o *)v51->fields.subTitleLabel;
      if ( !v52 )
        goto LABEL_53;
      v53 = UnityEngine_Component__get_gameObject(v52, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v53,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0LL);
      v54 = this->fields.__4__this;
      if ( !v54 )
        goto LABEL_53;
      GameObjectExtensions__SetLocalPositionY(
        v54->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v55 = this->fields.__4__this;
      if ( !v55 )
        goto LABEL_53;
      GameObjectExtensions__SetLocalPositionY(
        v55->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v56 = this->fields.__4__this;
      if ( !v56 )
        goto LABEL_53;
      listBg = (UIWidget_o *)v56->fields.listBg;
      if ( !listBg )
        goto LABEL_53;
      UIWidget__set_height(listBg, MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT, 0LL);
      v58 = this->fields.__4__this;
      if ( !v58 )
        goto LABEL_53;
      v59 = v58->fields.eventMissionListViewManager;
      if ( !v59 )
        goto LABEL_53;
      EventMissionItemListViewManager__SetScrollEnable(v59, 0, 0LL);
    }
    if ( !byte_40F6975 )
    {
      sub_B16FFC(&EventRewardSaveData_TypeInfo, v40);
      byte_40F6975 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v60 = this->fields.__4__this;
    if ( v60 )
    {
      v61 = this->fields.eventDetailEnt;
      if ( v61 )
      {
        v62 = v60->fields.eventMissionListViewManager;
        v63 = this->fields.eventMissionEntList;
        eventId = v61->fields.eventId;
        isDailyMission = EventDetailEntity__isDailyMission(v61, 0LL);
        if ( v62 )
        {
          EventMissionItemListViewManager__CreateList_22545880(v62, v63, eventId, isDailyMission, 0, 0LL);
          goto LABEL_43;
        }
      }
    }
LABEL_53:
    sub_B170D4();
  }
LABEL_43:
  v66 = (BaseDialog_o *)this->fields.__4__this;
  v67 = MissionListDlgComponent___c_TypeInfo;
  if ( (BYTE3(MissionListDlgComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
    v67 = MissionListDlgComponent___c_TypeInfo;
  }
  static_fields = v67->static_fields;
  _9__15_1 = static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    }
    v70 = (Il2CppObject *)static_fields->__9;
    _9__15_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
    System_Action___ctor(_9__15_1, v70, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0LL);
    v71 = MissionListDlgComponent___c_TypeInfo->static_fields;
    v71->__9__15_1 = _9__15_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v71->__9__15_1,
      (System_Int32_array **)_9__15_1,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  if ( !v66 )
    goto LABEL_53;
  BaseDialog__Open(v66, _9__15_1, 1, 0LL);
}