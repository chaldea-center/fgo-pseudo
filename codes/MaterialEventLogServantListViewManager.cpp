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
  __int64 v4; // x1
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B37A2 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_42B37A2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        gameObject,
                                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = Component_srcLineSprite,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL) )
  {
    sub_B52A5C(gameObject, v4);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager__RequestListObject(
        MaterialEventLogServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v6; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v22; // x0
  UIWidget_o *v23; // x20
  float v24; // s8
  System_Action_o *v25; // x21
  UnityEngine_GameObject_o *v26; // x0
  UIWidget_o *Component_UIWidget; // x21
  float IntpTime_AutoResume; // s8
  System_Action_o *v29; // x20

  if ( (byte_42B37A3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__);
    sub_B52984(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__);
    sub_B52984(&MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo);
    byte_42B37A3 = 1;
  }
  v6 = sub_B52A54(MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo);
  MaterialEventLogServantListViewManager___c__DisplayClass18_0___ctor(
    (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)v6,
    0LL);
  if ( !v6 )
    goto LABEL_19;
  *(_QWORD *)(v6 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 24) = end_act;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 24), (System_Int32_array **)end_act, v15, v16, v17, v18, v19, v20);
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.isDoingSlide = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v26 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           v26,
                           (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    ListViewManager__CheckEmptyMessageBase((ListViewManager_o *)this, 0, 0LL);
    v29 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v6,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      0LL);
    if ( !Component_UIWidget )
      goto LABEL_19;
    SlideFadeObject__SlideOut_23784540(
      (SlideFadeObject_o *)Component_UIWidget,
      580.0,
      IntpTime_AutoResume,
      0.0,
      v29,
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
        v22 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        v23 = GameObjectExtensions__SafeGetComponent_UIWidget_(
                v22,
                (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        v24 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
        v25 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          v25,
          (Il2CppObject *)v6,
          Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
          0LL);
        if ( v23 )
        {
          SlideFadeObject__SlideIn_23783600((SlideFadeObject_o *)v23, 580.0, v24, 0.0, v25, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B52A5C(gameObject, v8);
    }
    ActionExtensions__Call(*(System_Action_o **)(v6 + 24), 0LL);
  }
}


void __fastcall MaterialEventLogServantListViewManager__SetFilterButtonImage(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  bool v5; // zf
  UISprite_o *filterSprite; // x0
  System_String_o **v7; // x19
  UnityEngine_Color_o v8; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42B37A4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17076/*"btn_bg_05"*/);
    sub_B52984(&StringLiteral_17077/*"btn_bg_06"*/);
    sub_B52984(&StringLiteral_368/*"#FE4545"*/);
    sub_B52984(&StringLiteral_354/*"#000000"*/);
    byte_42B37A4 = 1;
  }
  *(_QWORD *)&v8.fields.r = 0LL;
  *(_QWORD *)&v8.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort
    || (sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !this->fields.filterSprite) )
  {
    sub_B52A5C(sort, method);
  }
  v4 = (System_String_o **)&StringLiteral_17076/*"btn_bg_05"*/;
  v5 = ((unsigned __int8)sort & 1) == 0;
  filterSprite = this->fields.filterSprite;
  if ( v5 )
    v4 = (System_String_o **)&StringLiteral_17077/*"btn_bg_06"*/;
  if ( v5 )
    v7 = (System_String_o **)&StringLiteral_368/*"#FE4545"*/;
  else
    v7 = (System_String_o **)&StringLiteral_354/*"#000000"*/;
  UISprite__set_spriteName(filterSprite, *v4, 0LL);
  *(_QWORD *)&v8.fields.r = 0LL;
  *(_QWORD *)&v8.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v7, &v8, 0LL);
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
  __int64 v8; // x1
  UnityEngine_Collider_o *mBoxCollider; // x0
  int32_t v10; // w1
  const MethodInfo *v11; // x3

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
    sub_B52A5C(0LL, v8);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  if ( (unsigned int)(mode - 3) < 2 || mode == 2 || mode == 1 )
    MaterialEventLogServantListViewManager__RequestListObject(this, v10, end_act, v11);
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
    sub_B52A5C(this, method);
  MaterialEventLogServantListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__1(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  System_Action_o *v4; // x21
  MaterialEventLogServantListViewManager_o *v5; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_42ADCC0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)sub_B52984(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__);
    byte_42ADCC0 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  BYTE4(klass->vtable[2].methodPtr) = 0;
  v4 = (System_Action_o *)v2[2].klass;
  v5 = (MaterialEventLogServantListViewManager_o *)v2[1].klass;
  if ( !v4 )
  {
    v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      v2,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
      0LL);
    v2[2].klass = (Il2CppClass *)v4;
    sub_B52920(&v2[2]);
  }
  if ( !v5 )
LABEL_8:
    sub_B52A5C(this, method);
  MaterialEventLogServantListViewManager__SetMode(v5, 0, v4, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__2(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}