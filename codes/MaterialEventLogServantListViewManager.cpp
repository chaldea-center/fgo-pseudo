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
  Il2CppObject *Component_object; // x0

  if ( (byte_4A56900 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4A56900 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1B88554(&this->fields.mBoxCollider, Component_object),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL) )
  {
    sub_1B8880C(gameObject, v4);
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
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v10; // x0
  Il2CppObject *v11; // x20
  float v12; // s8
  System_Action_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x0
  Il2CppObject *Component_object; // x21
  float IntpTime_AutoResume; // s8
  System_Action_o *v17; // x20

  if ( (byte_4A56901 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__);
    sub_1B885B0(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__);
    sub_1B885B0(&MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo);
    byte_4A56901 = 1;
  }
  v6 = sub_1B887FC(MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_17;
  *(_QWORD *)(v6 + 16) = this;
  sub_1B88554(v6 + 16, this);
  *(_QWORD *)(v6 + 24) = end_act;
  sub_1B88554(v6 + 24, end_act);
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.isDoingSlide = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    v14 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v14,
                         (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    ListViewManager__CheckEmptyMessageBase((ListViewManager_o *)this, 0, 0LL);
    v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v6,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      0LL);
    if ( !Component_object )
      goto LABEL_17;
    SlideFadeObject__SlideOut_33740384((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v17, 0LL);
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
        v10 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        v11 = GameObjectExtensions__SafeGetComponent_object_(
                v10,
                (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
        v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v13,
          (Il2CppObject *)v6,
          Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
          0LL);
        if ( v11 )
        {
          SlideFadeObject__SlideIn_33739440((SlideFadeObject_o *)v11, 580.0, v12, 0.0, v13, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1B8880C(gameObject, v8);
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
  UnityEngine_Color_o v8; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4A56902 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17472/*"btn_bg_05"*/);
    sub_1B885B0(&StringLiteral_17473/*"btn_bg_06"*/);
    sub_1B885B0(&StringLiteral_453/*"#FE4545"*/);
    sub_1B885B0(&StringLiteral_436/*"#000000"*/);
    byte_4A56902 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !this->fields.filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v4 = (System_String_o **)&StringLiteral_17472/*"btn_bg_05"*/;
  v5 = ((unsigned __int8)sort & 1) == 0;
  filterSprite = this->fields.filterSprite;
  if ( v5 )
    v4 = (System_String_o **)&StringLiteral_17473/*"btn_bg_06"*/;
  if ( v5 )
    v7 = (System_String_o **)&StringLiteral_453/*"#FE4545"*/;
  else
    v7 = (System_String_o **)&StringLiteral_436/*"#000000"*/;
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
    sub_1B8880C(0LL, v8);
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
    sub_1B8880C(0LL, method);
  _4__this->fields.isDoingSlide = 0;
  MaterialEventLogServantListViewManager__SetMode(_4__this, 2, this->fields.end_act, v2);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__1(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  MaterialEventLogServantListViewManager_o *klass; // x20
  System_Action_o *v5; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4A56903 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)sub_1B885B0(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__);
    byte_4A56903 = 1;
  }
  klass = (MaterialEventLogServantListViewManager_o *)v3[1].klass;
  if ( !klass )
    sub_1B8880C(this, method);
  klass->fields.isDoingSlide = 0;
  v5 = (System_Action_o *)v3[2].klass;
  if ( !v5 )
  {
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      v3,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
      0LL);
    v3[2].klass = (Il2CppClass *)v5;
    sub_1B88554(&v3[2], v5);
  }
  MaterialEventLogServantListViewManager__SetMode(klass, 0, v5, v2);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__2(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}