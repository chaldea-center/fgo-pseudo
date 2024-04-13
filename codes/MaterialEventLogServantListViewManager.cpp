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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EC359 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, (_DWORD)method, v2, v3);
    byte_42EC359 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        gameObject,
                                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = Component_srcLineSprite,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL) )
  {
    sub_B5D69C(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager__RequestListObject(
        MaterialEventLogServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v37; // x0
  UIWidget_o *v38; // x20
  float v39; // s8
  System_Action_o *v40; // x21
  UnityEngine_GameObject_o *v41; // x0
  UIWidget_o *Component_UIWidget; // x21
  float IntpTime_AutoResume; // s8
  System_Action_o *v44; // x20

  if ( (byte_42EC35A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)end_act, method);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v6, v7, v8);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo, v18, v19, v20);
    byte_42EC35A = 1;
  }
  v21 = sub_B5D694(MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo);
  MaterialEventLogServantListViewManager___c__DisplayClass18_0___ctor(
    (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_19;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)end_act, v30, v31, v32, v33, v34, v35);
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.isDoingSlide = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v41 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           v41,
                           (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    ListViewManager__CheckEmptyMessageBase((ListViewManager_o *)this, 0, 0LL);
    v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v21,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      0LL);
    if ( !Component_UIWidget )
      goto LABEL_19;
    SlideFadeObject__SlideOut_23387732(
      (SlideFadeObject_o *)Component_UIWidget,
      580.0,
      IntpTime_AutoResume,
      0.0,
      v44,
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
        v37 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        v38 = GameObjectExtensions__SafeGetComponent_UIWidget_(
                v37,
                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        v39 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
        v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v40,
          (Il2CppObject *)v21,
          Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
          0LL);
        if ( v38 )
        {
          SlideFadeObject__SlideIn_23386792((SlideFadeObject_o *)v38, 580.0, v39, 0.0, v40, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B5D69C(gameObject, v23);
    }
    ActionExtensions__Call(*(System_Action_o **)(v21 + 24), 0LL);
  }
}


void __fastcall MaterialEventLogServantListViewManager__SetFilterButtonImage(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
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
  ListViewSort_o *sort; // x0
  System_String_o **v15; // x9
  bool v16; // zf
  UISprite_o *filterSprite; // x0
  System_String_o **v18; // x19
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42EC35B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17167/*"btn_bg_05"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17168/*"btn_bg_06"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_367/*"#FE4545"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_353/*"#000000"*/, v11, v12, v13);
    byte_42EC35B = 1;
  }
  *(_QWORD *)&v19.fields.r = 0LL;
  *(_QWORD *)&v19.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort
    || (sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !this->fields.filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v15 = (System_String_o **)&StringLiteral_17167/*"btn_bg_05"*/;
  v16 = ((unsigned __int8)sort & 1) == 0;
  filterSprite = this->fields.filterSprite;
  if ( v16 )
    v15 = (System_String_o **)&StringLiteral_17168/*"btn_bg_06"*/;
  if ( v16 )
    v18 = (System_String_o **)&StringLiteral_367/*"#FE4545"*/;
  else
    v18 = (System_String_o **)&StringLiteral_353/*"#000000"*/;
  UISprite__set_spriteName(filterSprite, *v15, 0LL);
  *(_QWORD *)&v19.fields.r = 0LL;
  *(_QWORD *)&v19.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v18, &v19, 0LL);
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
    sub_B5D69C(0LL, v8);
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
    sub_B5D69C(this, method);
  MaterialEventLogServantListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__1(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppClass *klass; // x8
  System_Action_o *v9; // x21
  MaterialEventLogServantListViewManager_o *v10; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5F47 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)sub_B5D5C4(
                                                                               &Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
                                                                               v5,
                                                                               v6,
                                                                               v7);
    byte_42E5F47 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_8;
  BYTE4(klass->vtable[2].methodPtr) = 0;
  v9 = (System_Action_o *)v4[2].klass;
  v10 = (MaterialEventLogServantListViewManager_o *)v4[1].klass;
  if ( !v9 )
  {
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      v4,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
      0LL);
    v4[2].klass = (Il2CppClass *)v9;
    sub_B5D560(&v4[2]);
  }
  if ( !v10 )
LABEL_8:
    sub_B5D69C(this, method);
  MaterialEventLogServantListViewManager__SetMode(v10, 0, v9, 0LL);
}


void __fastcall MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__2(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}