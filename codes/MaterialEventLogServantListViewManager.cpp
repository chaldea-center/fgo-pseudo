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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DE36E & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    byte_48DE36E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mBoxCollider, (int32_t)Component_object, v6, v7),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL) )
  {
    sub_1B00F28(gameObject, v4);
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
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v19; // x0
  Il2CppObject *v20; // x20
  float v21; // s8
  System_Action_o *v22; // x21
  UnityEngine_GameObject_o *v23; // x0
  Il2CppObject *Component_object; // x21
  float IntpTime_AutoResume; // s8
  System_Action_o *v26; // x20

  if ( (byte_48DE36F & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B00CCC(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v6);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v7);
    sub_1B00CCC(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__, v8);
    sub_1B00CCC(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__, v9);
    sub_1B00CCC(&MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo, v10);
    byte_48DE36F = 1;
  }
  v11 = sub_1B00F18(MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_17;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = end_act;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)end_act, v16, v17);
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.isDoingSlide = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    v23 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v23,
                         (const MethodInfo_2DAF8F0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    ListViewManager__CheckEmptyMessageBase((ListViewManager_o *)this, 0, 0LL);
    v26 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v11,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      0LL);
    if ( !Component_object )
      goto LABEL_17;
    SlideFadeObject__SlideOut_32551568((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v26, 0LL);
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
        v19 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        v20 = GameObjectExtensions__SafeGetComponent_object_(
                v19,
                (const MethodInfo_2DAF8F0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v21 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
        v22 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(
          v22,
          (Il2CppObject *)v11,
          Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
          0LL);
        if ( v20 )
        {
          SlideFadeObject__SlideIn_32550624((SlideFadeObject_o *)v20, 580.0, v21, 0.0, v22, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1B00F28(gameObject, v13);
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

  if ( (byte_48DE370 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_17234/*"btn_bg_05"*/, method);
    sub_1B00CCC(&StringLiteral_17235/*"btn_bg_06"*/, v3);
    sub_1B00CCC(&StringLiteral_450/*"#FE4545"*/, v4);
    sub_1B00CCC(&StringLiteral_433/*"#000000"*/, v5);
    byte_48DE370 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !this->fields.filterSprite) )
  {
    sub_1B00F28(sort, method);
  }
  v7 = (System_String_o **)&StringLiteral_17234/*"btn_bg_05"*/;
  v8 = ((unsigned __int8)sort & 1) == 0;
  filterSprite = this->fields.filterSprite;
  if ( v8 )
    v7 = (System_String_o **)&StringLiteral_17235/*"btn_bg_06"*/;
  if ( v8 )
    v10 = (System_String_o **)&StringLiteral_450/*"#FE4545"*/;
  else
    v10 = (System_String_o **)&StringLiteral_433/*"#000000"*/;
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
    sub_1B00F28(0LL, v8);
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
    sub_1B00F28(0LL, method);
  _4__this->fields.isDoingSlide = 0;
  MaterialEventLogServantListViewManager__SetMode(_4__this, 2, this->fields.end_act, v2);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__1(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *v3; // x19
  __int64 v4; // x1
  MaterialEventLogServantListViewManager_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_48DE371 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    this = (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)sub_1B00CCC(
                                                                               &Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
                                                                               v4);
    byte_48DE371 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1B00F28(this, method);
  _4__this->fields.isDoingSlide = 0;
  _9__2 = v3->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  MaterialEventLogServantListViewManager__SetMode(_4__this, 0, _9__2, v2);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__2(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}