void __fastcall MaterialEventLogServantListViewManager___ctor(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager__Awake(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Collider_o *mBoxCollider; // x0

  if ( (byte_40F7B4E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    byte_40F7B4E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        gameObject,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = Component_srcLineSprite,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(mBoxCollider, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantListViewManager__RequestListObject(
        MaterialEventLogServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UIWidget_o *v28; // x20
  float v29; // s8
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Action_o *v34; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v36; // x0
  UIWidget_o *Component_UIWidget; // x21
  float IntpTime_AutoResume; // s8
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Action_o *v43; // x20

  if ( (byte_40F7B4F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    sub_B16FFC(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__, v9);
    sub_B16FFC(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__, v10);
    sub_B16FFC(&MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo, v11);
    byte_40F7B4F = 1;
  }
  v12 = sub_B170CC(
          MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo,
          *(_QWORD *)&mode,
          end_act,
          method,
          v4);
  MaterialEventLogServantListViewManager___c__DisplayClass18_0___ctor(
    (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_19;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)end_act, v19, v20, v21, v22, v23, v24);
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.isDoingSlide = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v36 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           v36,
                           (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    ListViewManager__CheckEmptyMessageBase((ListViewManager_o *)this, 0, 0LL);
    v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
    System_Action___ctor(
      v43,
      (Il2CppObject *)v12,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      0LL);
    if ( !Component_UIWidget )
      goto LABEL_19;
    SlideFadeObject__SlideOut_24820408(
      (SlideFadeObject_o *)Component_UIWidget,
      580.0,
      IntpTime_AutoResume,
      0.0,
      v43,
      0LL);
  }
  else
  {
    if ( initMode == 3 )
    {
      this->fields.isDoingSlide = 1;
      this->fields.isScrollRefresh = 1;
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v26 )
      {
        v27 = UnityEngine_GameObject__get_gameObject(v26, 0LL);
        v28 = GameObjectExtensions__SafeGetComponent_UIWidget_(
                v27,
                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        v29 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
        v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
        System_Action___ctor(
          v34,
          (Il2CppObject *)v12,
          Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
          0LL);
        if ( v28 )
        {
          SlideFadeObject__SlideIn_24819468((SlideFadeObject_o *)v28, 580.0, v29, 0.0, v34, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B170D4();
    }
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
  }
}


void __fastcall MaterialEventLogServantListViewManager__SetFilterButtonImage(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *sort; // x0
  bool v7; // w0
  System_String_o **v8; // x9
  bool v9; // zf
  UISprite_o *filterSprite; // x0
  System_String_o **v11; // x19
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_40F7B50 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16892/*"btn_bg_05"*/, method);
    sub_B16FFC(&StringLiteral_16893/*"btn_bg_06"*/, v3);
    sub_B16FFC(&StringLiteral_360/*"#FE4545"*/, v4);
    sub_B16FFC(&StringLiteral_347/*"#000000"*/, v5);
    byte_40F7B50 = 1;
  }
  *(_QWORD *)&v12.fields.r = 0LL;
  *(_QWORD *)&v12.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort || (v7 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !this->fields.filterSprite) )
    sub_B170D4();
  v8 = (System_String_o **)&StringLiteral_16892/*"btn_bg_05"*/;
  v9 = !v7;
  filterSprite = this->fields.filterSprite;
  if ( v9 )
    v8 = (System_String_o **)&StringLiteral_16893/*"btn_bg_06"*/;
  if ( v9 )
    v11 = (System_String_o **)&StringLiteral_360/*"#FE4545"*/;
  else
    v11 = (System_String_o **)&StringLiteral_347/*"#000000"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
  *(_QWORD *)&v12.fields.r = 0LL;
  *(_QWORD *)&v12.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v11, &v12, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager__SetInitMode(
        MaterialEventLogServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  this->fields.initMode = mode;
}


bool __fastcall MaterialEventLogServantListViewManager__SetMode(
        MaterialEventLogServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t isDoingSlide; // w8
  UnityEngine_Collider_o *mBoxCollider; // x0
  int32_t v9; // w1
  const MethodInfo *v10; // x3

  isDoingSlide = this->fields.isDoingSlide;
  if ( mode == 4 )
  {
    if ( this->fields.isDoingSlide || this->fields.initMode != 2 )
      goto LABEL_15;
  }
  else
  {
    if ( mode == 3 )
    {
      if ( this->fields.isDoingSlide )
      {
LABEL_15:
        ActionExtensions__Call(end_act, 0LL);
        return 0;
      }
      isDoingSlide = this->fields.initMode;
    }
    if ( isDoingSlide )
      goto LABEL_15;
  }
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  if ( (unsigned int)(mode - 3) < 2 || mode == 2 || mode == 1 )
    MaterialEventLogServantListViewManager__RequestListObject(this, v9, end_act, v10);
  return 1;
}


bool __fastcall MaterialEventLogServantListViewManager__get_IsDoing_Slide(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isDoingSlide;
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___ctor(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__0(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  struct MaterialEventLogServantListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this->fields.isDoingSlide = 0, !this->fields.__4__this) )
    sub_B170D4();
  MaterialEventLogServantListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__1(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct MaterialEventLogServantListViewManager_o *_4__this; // x8
  System_Action_o *_9__2; // x21
  MaterialEventLogServantListViewManager_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F696A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__, v6);
    byte_40F696A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  _4__this->fields.isDoingSlide = 0;
  _9__2 = this->fields.__9__2;
  v9 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v9 )
LABEL_8:
    sub_B170D4();
  MaterialEventLogServantListViewManager__SetMode(v9, 0, _9__2, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__2(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}