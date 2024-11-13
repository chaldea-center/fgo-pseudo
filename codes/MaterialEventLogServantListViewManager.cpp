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
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0

  if ( (byte_4B11820 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method, v2);
    byte_4B11820 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1BCA784(&this->fields.mBoxCollider, Component_object),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v5);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x20
  float v23; // s8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x21
  UnityEngine_GameObject_o *v28; // x0
  __int64 v29; // x1
  Il2CppObject *Component_object; // x21
  float IntpTime_AutoResume; // s8
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_o *v35; // x20

  if ( (byte_4B11821 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, end_act);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v6, v7);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      v12,
      v13);
    sub_1BCA7E0(&MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo, v14, v15);
    byte_4B11821 = 1;
  }
  v16 = sub_1BCAA2C(
          MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo,
          *(_QWORD *)&mode,
          end_act,
          method);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_17;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784(v16 + 16, this);
  *(_QWORD *)(v16 + 24) = end_act;
  sub_1BCA784(v16 + 24, end_act);
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.isDoingSlide = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    v28 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v28,
                         (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    ListViewManager__CheckEmptyMessageBase((ListViewManager_o *)this, 0, 0LL);
    v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v16,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      0LL);
    if ( !Component_object )
      goto LABEL_17;
    SlideFadeObject__SlideOut_34347584((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v35, 0LL);
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
        v20 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        v22 = GameObjectExtensions__SafeGetComponent_object_(
                v20,
                (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
        v23 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
        v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
        System_Action___ctor(
          v27,
          (Il2CppObject *)v16,
          Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
          0LL);
        if ( v22 )
        {
          SlideFadeObject__SlideIn_34346640((SlideFadeObject_o *)v22, 580.0, v23, 0.0, v27, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1BCAA3C(gameObject, v18);
    }
    ActionExtensions__Call(*(System_Action_o **)(v16 + 24), 0LL);
  }
}


void __fastcall MaterialEventLogServantListViewManager__SetFilterButtonImage(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ListViewSort_o *sort; // x0
  System_String_o **v11; // x9
  bool v12; // zf
  UISprite_o *filterSprite; // x0
  System_String_o **v14; // x19
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4B11822 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17645/*"btn_bg_05"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17646/*"btn_bg_06"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_448/*"#FE4545"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_431/*"#000000"*/, v8, v9);
    byte_4B11822 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !this->fields.filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v11 = (System_String_o **)&StringLiteral_17645/*"btn_bg_05"*/;
  v12 = ((unsigned __int8)sort & 1) == 0;
  filterSprite = this->fields.filterSprite;
  if ( v12 )
    v11 = (System_String_o **)&StringLiteral_17646/*"btn_bg_06"*/;
  if ( v12 )
    v14 = (System_String_o **)&StringLiteral_448/*"#FE4545"*/;
  else
    v14 = (System_String_o **)&StringLiteral_431/*"#000000"*/;
  UISprite__set_spriteName(filterSprite, *v11, 0LL);
  *(_QWORD *)&v15.fields.r = 0LL;
  *(_QWORD *)&v15.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v14, &v15, 0LL);
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
    if ( !this->fields.isDoingSlide && this->fields.initMode == 2 )
      goto LABEL_9;
    goto LABEL_15;
  }
  if ( mode != 3 )
    goto LABEL_5;
  if ( this->fields.isDoingSlide )
  {
LABEL_15:
    ActionExtensions__Call(end_act, 0LL);
    return 0;
  }
  isDoingSlide = this->fields.initMode;
LABEL_5:
  if ( isDoingSlide )
    goto LABEL_15;
LABEL_9:
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_1BCAA3C(0LL, v8);
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
  const MethodInfo *v2; // x3
  struct MaterialEventLogServantListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  _4__this->fields.isDoingSlide = 0;
  MaterialEventLogServantListViewManager__SetMode(_4__this, 2, this->fields.end_act, v2);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__1(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  MaterialEventLogServantListViewManager_o *klass; // x20
  System_Action_o *v8; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_4B11823 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)sub_1BCA7E0(
                                                                               &Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
                                                                               v5,
                                                                               v6);
    byte_4B11823 = 1;
  }
  klass = (MaterialEventLogServantListViewManager_o *)v4[1].klass;
  if ( !klass )
    sub_1BCAA3C(this, method);
  klass->fields.isDoingSlide = 0;
  v8 = (System_Action_o *)v4[2].klass;
  if ( !v8 )
  {
    v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      v8,
      v4,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
      0LL);
    v4[2].klass = (Il2CppClass *)v8;
    sub_1BCA784(&v4[2], v8);
  }
  MaterialEventLogServantListViewManager__SetMode(klass, 0, v8, v3);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__2(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}