void __fastcall MissionListDlgComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MissionListDlgComponent_c *v4; // x8

  if ( (byte_42E874E & 1) == 0 )
  {
    sub_B5D5C4(&MissionListDlgComponent_TypeInfo, v1, v2, v3);
    byte_42E874E = 1;
  }
  MissionListDlgComponent_TypeInfo->static_fields->SCROLL_ENABLED_VIEW_COUNT = 1;
  MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_TITLE_POS_Y = 180.0;
  v4 = MissionListDlgComponent_TypeInfo;
  MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y = 140.0;
  v4->static_fields->SINGLE_DESIGN_BTN_POS_Y = -165.0;
  v4->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT = 180;
}


void __fastcall MissionListDlgComponent___ctor(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E874D & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E874D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionListDlgComponent__OnClickClose(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  CommonUI_o *v22; // x19
  MissionListDlgComponent___c_c *v23; // x8
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v26; // x21
  struct MissionListDlgComponent___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42E874C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, v14, v15, v16);
    sub_B5D5C4(&MissionListDlgComponent___c_TypeInfo, v17, v18, v19);
    byte_42E874C = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
      byte_42E4B1E = 1;
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
    genericContainerHandle = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = (CommonUI_o *)genericContainerHandle;
    v23 = MissionListDlgComponent___c_TypeInfo;
    if ( (BYTE3(MissionListDlgComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
      v23 = MissionListDlgComponent___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__17_0 = static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__17_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__17_0, v26, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0LL);
      v27 = MissionListDlgComponent___c_TypeInfo->static_fields;
      v27->__9__17_0 = _9__17_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v27->__9__17_0,
        (System_Int32_array **)_9__17_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    if ( !v22 )
LABEL_28:
      sub_B5D69C(genericContainerHandle, method);
    CommonUI__CloseEventMissionListDialog(v22, _9__17_0, 0LL);
  }
}


void __fastcall MissionListDlgComponent__OnClickMissionList(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v20; // x21

  if ( (byte_42E874B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v14, v15, v16);
    byte_42E874B = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
      byte_42E4B1E = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0LL);
    if ( !Instance )
LABEL_20:
      sub_B5D69C(genericContainerHandle, method);
    CommonUI__CloseEventMissionListDialog(Instance, v20, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
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
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Action_o *v61; // x20

  if ( (byte_42E874A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)subTitle, eventDetailEnt);
    sub_B5D5C4(&AtlasManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__, v16, v17, v18);
    sub_B5D5C4(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo, v19, v20, v21);
    byte_42E874A = 1;
  }
  v22 = sub_B5D694(MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
  MissionListDlgComponent___c__DisplayClass15_0___ctor((MissionListDlgComponent___c__DisplayClass15_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_11;
  *(_QWORD *)(v22 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = title;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)title, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v22 + 32) = subTitle;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 32), (System_Int32_array **)subTitle, v37, v38, v39, v40, v41, v42);
  *(_QWORD *)(v22 + 40) = eventDetailEnt;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v22 + 40),
    (System_Int32_array **)eventDetailEnt,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  *(_QWORD *)(v22 + 48) = eventMissionEntList;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v22 + 48),
    (System_Int32_array **)eventMissionEntList,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  *(_QWORD *)(v22 + 56) = missionBtnCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v22 + 56),
    (System_Int32_array **)missionBtnCallback,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_11:
    sub_B5D69C(gameObject, v24);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v61 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v22,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v61, 0LL);
}


void __fastcall MissionListDlgComponent___OnClickMissionList_b__16_0(
        MissionListDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  int v9; // w2
  __int64 v10; // x3
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_42E874F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v5, v6, v7);
    byte_42E874F = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v8, v9, v10);
    byte_42E4B1E = 1;
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
    sub_B5D69C(genericContainerHandle, v8);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


void __fastcall MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F51 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListDlgComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5F51 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MissionListDlgComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MissionListDlgComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall MissionListDlgComponent___c___ctor(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListDlgComponent___c___OnClickClose_b__17_0(
        MissionListDlgComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_42E5F52 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v4, v5, v6);
    byte_42E5F52 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
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
    sub_B5D69C(genericContainerHandle, method);
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
  int v2; // w2
  __int64 v3; // x3
  MissionListDlgComponent___c__DisplayClass15_0_o *v4; // x19
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
  struct MissionListDlgComponent_o *_4__this; // x8
  struct MissionListDlgComponent_o *v18; // x8
  struct MissionListDlgComponent_o *v19; // x8
  struct MissionListDlgComponent_o *v20; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  int v22; // w2
  __int64 v23; // x3
  struct EventMissionEntity_array *eventMissionEntList; // x20
  struct MissionListDlgComponent_o *v25; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  MissionListDlgComponent_c *v27; // x8
  UnityEngine_GameObject_o *v28; // x20
  struct MissionListDlgComponent_o *v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  struct MissionListDlgComponent_o *v31; // x8
  struct MissionListDlgComponent_o *v32; // x8
  struct MissionListDlgComponent_o *v33; // x8
  struct MissionListDlgComponent_o *v34; // x8
  struct MissionListDlgComponent_o *v35; // x8
  EventMissionItemListViewManager_o *v36; // x20
  EventMissionEntity_array *v37; // x21
  int32_t v38; // w22
  BaseDialog_o *v39; // x19
  void *missionBtnCallback; // x8
  System_Action_o *v41; // x20
  Il2CppObject *v42; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0

  v4 = this;
  if ( (byte_42E5F53 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MissionListDlgComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, v11, v12, v13);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_B5D5C4(
                                                                &MissionListDlgComponent___c_TypeInfo,
                                                                v14,
                                                                v15,
                                                                v16);
    byte_42E5F53 = 1;
  }
  _4__this = v4->fields.__4__this;
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
  v18 = v4->fields.__4__this;
  if ( !v18 )
    goto LABEL_53;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v18->fields.titleLabel;
  if ( !this )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)this, v4->fields.title, 0LL);
  v19 = v4->fields.__4__this;
  if ( !v19 )
    goto LABEL_53;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v19->fields.subTitleLabel;
  if ( !this )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)this, v4->fields.subTitle, 0LL);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_53;
  this[2].monitor = v4->fields.eventDetailEnt;
  sub_B5D560(&this[2].monitor);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_53;
  this[2].fields.__4__this = (struct MissionListDlgComponent_o *)v4->fields.eventMissionEntList;
  sub_B5D560(&this[2].fields);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_53;
  this[2].fields.title = (struct System_String_o *)v4->fields.missionBtnCallback;
  sub_B5D560(&this[2].fields.title);
  v20 = v4->fields.__4__this;
  if ( !v20 )
    goto LABEL_53;
  eventMissionListViewManager = (UnityEngine_Object_o *)v20->fields.eventMissionListViewManager;
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
    eventMissionEntList = v4->fields.eventMissionEntList;
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
      v25 = v4->fields.__4__this;
      if ( !v25 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v25->fields.titleLabel;
      if ( !this )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v27 = MissionListDlgComponent_TypeInfo;
      v28 = gameObject;
      if ( (BYTE3(MissionListDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
        v27 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v28, v27->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0LL);
      v29 = v4->fields.__4__this;
      if ( !v29 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v29->fields.subTitleLabel;
      if ( !this )
        goto LABEL_53;
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v30,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0LL);
      v31 = v4->fields.__4__this;
      if ( !v31 )
        goto LABEL_53;
      GameObjectExtensions__SetLocalPositionY(
        v31->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v32 = v4->fields.__4__this;
      if ( !v32 )
        goto LABEL_53;
      GameObjectExtensions__SetLocalPositionY(
        v32->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v33 = v4->fields.__4__this;
      if ( !v33 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v33->fields.listBg;
      if ( !this )
        goto LABEL_53;
      UIWidget__set_height(
        (UIWidget_o *)this,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT,
        0LL);
      v34 = v4->fields.__4__this;
      if ( !v34 )
        goto LABEL_53;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v34->fields.eventMissionListViewManager;
      if ( !this )
        goto LABEL_53;
      EventMissionItemListViewManager__SetScrollEnable((EventMissionItemListViewManager_o *)this, 0, 0LL);
    }
    if ( !byte_42E5F9D )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_B5D5C4(
                                                                  &EventRewardSaveData_TypeInfo,
                                                                  (_DWORD)method,
                                                                  v22,
                                                                  v23);
      byte_42E5F9D = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v35 = v4->fields.__4__this;
    if ( v35 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v4->fields.eventDetailEnt;
      if ( this )
      {
        v36 = v35->fields.eventMissionListViewManager;
        v37 = v4->fields.eventMissionEntList;
        v38 = (int32_t)this->fields.__4__this;
        this = (MissionListDlgComponent___c__DisplayClass15_0_o *)EventDetailEntity__isDailyMission(
                                                                    (EventDetailEntity_o *)this,
                                                                    0LL);
        if ( v36 )
        {
          EventMissionItemListViewManager__CreateList_25971028(v36, v37, v38, (unsigned __int8)this & 1, 0, 0LL);
          goto LABEL_43;
        }
      }
    }
LABEL_53:
    sub_B5D69C(this, method);
  }
LABEL_43:
  v39 = (BaseDialog_o *)v4->fields.__4__this;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  if ( (BYTE3(MissionListDlgComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  }
  missionBtnCallback = this[2].fields.missionBtnCallback;
  v41 = (System_Action_o *)*((_QWORD *)missionBtnCallback + 1);
  if ( !v41 )
  {
    if ( (BYTE3(this[4].fields.eventMissionEntList) & 4) != 0 && !LODWORD(this[3].fields.subTitle) )
    {
      j_il2cpp_runtime_class_init_0(this);
      missionBtnCallback = MissionListDlgComponent___c_TypeInfo->static_fields;
    }
    v42 = *(Il2CppObject **)missionBtnCallback;
    v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v41, v42, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0LL);
    static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = v41;
    sub_B5D560(&static_fields->__9__15_1);
  }
  if ( !v39 )
    goto LABEL_53;
  BaseDialog__Open(v39, v41, 1, 0LL);
}