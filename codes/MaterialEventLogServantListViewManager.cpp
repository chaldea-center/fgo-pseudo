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

  if ( (byte_4214DD8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    byte_4214DD8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        gameObject,
                                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = Component_srcLineSprite,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL) )
  {
    sub_B0D97C(gameObject);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantListViewManager__RequestListObject(
        MaterialEventLogServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  UnityEngine_GameObject_o *gameObject; // x0
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
  UIWidget_o *v27; // x20
  float v28; // s8
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x21
  UnityEngine_GameObject_o *v32; // x0
  UIWidget_o *Component_UIWidget; // x21
  float IntpTime_AutoResume; // s8
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x20

  if ( (byte_4214DD9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v6);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v7);
    sub_B0D8A4(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__, v8);
    sub_B0D8A4(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__, v9);
    sub_B0D8A4(&MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo, v10);
    byte_4214DD9 = 1;
  }
  v11 = sub_B0D974(MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo, *(_QWORD *)&mode, end_act);
  MaterialEventLogServantListViewManager___c__DisplayClass18_0___ctor(
    (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_19;
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 24) = end_act;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)end_act, v19, v20, v21, v22, v23, v24);
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.isDoingSlide = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v32 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           v32,
                           (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    ListViewManager__CheckEmptyMessageBase((ListViewManager_o *)this, 0, 0LL);
    v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v35, v36);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v11,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      0LL);
    if ( !Component_UIWidget )
      goto LABEL_19;
    SlideFadeObject__SlideOut_24973932(
      (SlideFadeObject_o *)Component_UIWidget,
      580.0,
      IntpTime_AutoResume,
      0.0,
      v37,
      0LL);
  }
  else
  {
    if ( initMode == 3 )
    {
      this->fields.isDoingSlide = 1;
      this->fields.isScrollRefresh = 1;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        v26 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        v27 = GameObjectExtensions__SafeGetComponent_UIWidget_(
                v26,
                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        v28 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
        v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v29, v30);
        System_Action___ctor(
          v31,
          (Il2CppObject *)v11,
          Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
          0LL);
        if ( v27 )
        {
          SlideFadeObject__SlideIn_24972992((SlideFadeObject_o *)v27, 580.0, v28, 0.0, v31, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B0D97C(gameObject);
    }
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
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
  System_String_o **v7; // x9
  bool v8; // zf
  UISprite_o *filterSprite; // x0
  System_String_o **v10; // x19
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4214DDA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17009/*"btn_bg_05"*/, method);
    sub_B0D8A4(&StringLiteral_17010/*"btn_bg_06"*/, v3);
    sub_B0D8A4(&StringLiteral_366/*"#FE4545"*/, v4);
    sub_B0D8A4(&StringLiteral_352/*"#000000"*/, v5);
    byte_4214DDA = 1;
  }
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort
    || (sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !this->fields.filterSprite) )
  {
    sub_B0D97C(sort);
  }
  v7 = (System_String_o **)&StringLiteral_17009/*"btn_bg_05"*/;
  v8 = ((unsigned __int8)sort & 1) == 0;
  filterSprite = this->fields.filterSprite;
  if ( v8 )
    v7 = (System_String_o **)&StringLiteral_17010/*"btn_bg_06"*/;
  if ( v8 )
    v10 = (System_String_o **)&StringLiteral_366/*"#FE4545"*/;
  else
    v10 = (System_String_o **)&StringLiteral_352/*"#000000"*/;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v10, &v11, 0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
  MaterialEventLogServantListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__1(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  System_Action_o *v6; // x21
  MaterialEventLogServantListViewManager_o *v7; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_421271E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)sub_B0D8A4(
                                                                               &Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
                                                                               v4);
    byte_421271E = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_8;
  BYTE4(klass->vtable[2].methodPtr) = 0;
  v6 = (System_Action_o *)v3[2].klass;
  v7 = (MaterialEventLogServantListViewManager_o *)v3[1].klass;
  if ( !v6 )
  {
    v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      v6,
      v3,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
      0LL);
    v3[2].klass = (Il2CppClass *)v6;
    sub_B0D840(&v3[2], v6);
  }
  if ( !v7 )
LABEL_8:
    sub_B0D97C(this);
  MaterialEventLogServantListViewManager__SetMode(v7, 0, v6, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__2(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}