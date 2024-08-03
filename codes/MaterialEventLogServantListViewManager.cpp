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

  if ( (byte_49F7C3F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    byte_49F7C3F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          gameObject,
                                                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        sub_1B6406C(&this->fields.mBoxCollider),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL) )
  {
    sub_1B64324(gameObject);
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
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v14; // x0
  Il2CppObject *v15; // x20
  float v16; // s8
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x0
  Il2CppObject *Component_object; // x21
  float IntpTime_AutoResume; // s8
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x20

  if ( (byte_49F7C40 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B640C8(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__, v8);
    sub_1B640C8(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__, v9);
    sub_1B640C8(&MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo, v10);
    byte_49F7C40 = 1;
  }
  v11 = sub_1B64314(MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo, *(_QWORD *)&mode, end_act);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_17;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C(v11 + 16);
  *(_QWORD *)(v11 + 24) = end_act;
  sub_1B6406C(v11 + 24);
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.isDoingSlide = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    v20 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v20,
                         (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    ListViewManager__CheckEmptyMessageBase((ListViewManager_o *)this, 0, 0LL);
    v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v11,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      0LL);
    if ( !Component_object )
      goto LABEL_17;
    SlideFadeObject__SlideOut_33391564((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v25, 0LL);
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
        v14 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        v15 = GameObjectExtensions__SafeGetComponent_object_(
                v14,
                (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
        v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
        System_Action___ctor(
          v19,
          (Il2CppObject *)v11,
          Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
          0LL);
        if ( v15 )
        {
          SlideFadeObject__SlideIn_33390620((SlideFadeObject_o *)v15, 580.0, v16, 0.0, v19, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1B64324(gameObject);
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
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_49F7C41 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17402/*"btn_bg_05"*/, method);
    sub_1B640C8(&StringLiteral_17403/*"btn_bg_06"*/, v3);
    sub_1B640C8(&StringLiteral_454/*"#FE4545"*/, v4);
    sub_1B640C8(&StringLiteral_437/*"#000000"*/, v5);
    byte_49F7C41 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !this->fields.filterSprite) )
  {
    sub_1B64324(sort);
  }
  v7 = (System_String_o **)&StringLiteral_17402/*"btn_bg_05"*/;
  v8 = ((unsigned __int8)sort & 1) == 0;
  filterSprite = this->fields.filterSprite;
  if ( v8 )
    v7 = (System_String_o **)&StringLiteral_17403/*"btn_bg_06"*/;
  if ( v8 )
    v10 = (System_String_o **)&StringLiteral_454/*"#FE4545"*/;
  else
    v10 = (System_String_o **)&StringLiteral_437/*"#000000"*/;
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
    sub_1B64324(0LL);
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
  const MethodInfo *v2; // x3
  struct MaterialEventLogServantListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
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
  MaterialEventLogServantListViewManager_o *klass; // x20
  System_Action_o *v7; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_49F7C42 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)sub_1B640C8(
                                                                               &Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
                                                                               v5);
    byte_49F7C42 = 1;
  }
  klass = (MaterialEventLogServantListViewManager_o *)v4[1].klass;
  if ( !klass )
    sub_1B64324(this);
  klass->fields.isDoingSlide = 0;
  v7 = (System_Action_o *)v4[2].klass;
  if ( !v7 )
  {
    v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      v7,
      v4,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
      0LL);
    v4[2].klass = (Il2CppClass *)v7;
    sub_1B6406C(&v4[2]);
  }
  MaterialEventLogServantListViewManager__SetMode(klass, 0, v7, v3);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__2(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}