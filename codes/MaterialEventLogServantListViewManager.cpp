void MaterialEventLogServantListViewManager___ctor(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void MaterialEventLogServantListViewManager__Awake(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596B786 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_596B786 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mBoxCollider,
          (int32_t)Component_object,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0) )
  {
    sub_2213CDC(gameObject, v4);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
}


void MaterialEventLogServantListViewManager__RequestListObject(
        MaterialEventLogServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v6; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x20
  float v26; // s8
  System_Action_o *v27; // x21
  UnityEngine_GameObject_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *Component_object; // x21
  float IntpTime_AutoResume; // s8
  System_Action_o *v33; // x20

  if ( (byte_596B787 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__);
    sub_2213A60(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__);
    sub_2213A60(&MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo);
    byte_596B787 = 1;
  }
  v6 = sub_2213CCC(MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_17;
  *(_QWORD *)(v6 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 24) = end_act;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)end_act, v15, v16, v17, v18, v19, v20);
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.isDoingSlide = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_17;
    v28 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v28,
                         (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29, v30);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0);
    ListViewManager__CheckEmptyMessageBase((ListViewManager_o *)this, 0, 0);
    v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v6,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      0);
    if ( !Component_object )
      goto LABEL_17;
    SlideFadeObject__SlideOut_42907896((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v33, 0);
  }
  else
  {
    if ( initMode == 3 )
    {
      this->fields.isDoingSlide = 1;
      this->fields.isScrollRefresh = 1;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( gameObject )
      {
        v22 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        v25 = GameObjectExtensions__SafeGetComponent_object_(
                v22,
                (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23, v24);
        v26 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0);
        v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v27,
          (Il2CppObject *)v6,
          Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
          0);
        if ( v25 )
        {
          SlideFadeObject__SlideIn_42906952((SlideFadeObject_o *)v25, 580.0, v26, 0.0, v27, 0);
          return;
        }
      }
LABEL_17:
      sub_2213CDC(gameObject, v8);
    }
    ActionExtensions__Call(*(System_Action_o **)(v6 + 24), 0);
  }
}


void MaterialEventLogServantListViewManager__SetFilterButtonImage(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  bool v4; // zf
  System_String_o **v5; // x9
  UISprite_o *filterSprite; // x0
  System_String_o **v7; // x19
  UnityEngine_Color_o v8; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_596B788 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18202/*"btn_bg_05"*/);
    sub_2213A60(&StringLiteral_18203/*"btn_bg_06"*/);
    sub_2213A60(&StringLiteral_449/*"#FE4545"*/);
    sub_2213A60(&StringLiteral_429/*"#000000"*/);
    byte_596B788 = 1;
  }
  sort = this->fields.sort;
  *(_QWORD *)&v8.fields.r = 0;
  *(_QWORD *)&v8.fields.b = 0;
  if ( !sort || (sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0), !this->fields.filterSprite) )
    sub_2213CDC(sort, method);
  v4 = ((unsigned __int8)sort & 1) == 0;
  v5 = (System_String_o **)&StringLiteral_18202/*"btn_bg_05"*/;
  filterSprite = this->fields.filterSprite;
  if ( v4 )
    v5 = (System_String_o **)&StringLiteral_18203/*"btn_bg_06"*/;
  if ( v4 )
    v7 = (System_String_o **)&StringLiteral_449/*"#FE4545"*/;
  else
    v7 = (System_String_o **)&StringLiteral_429/*"#000000"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
  *(_QWORD *)&v8.fields.r = 0;
  *(_QWORD *)&v8.fields.b = 0;
  UnityEngine_ColorUtility__TryParseHtmlString(*v7, &v8, 0);
}


void MaterialEventLogServantListViewManager__SetInitMode(
        MaterialEventLogServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  this->fields.initMode = mode;
}


bool MaterialEventLogServantListViewManager__SetMode(
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
        ActionExtensions__Call(end_act, 0);
        return 0;
      }
      isDoingSlide = this->fields.initMode;
    }
    if ( isDoingSlide )
      goto LABEL_15;
  }
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_2213CDC(0, v8);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0);
  if ( (unsigned int)(mode - 3) < 2 || mode == 2 || mode == 1 )
    MaterialEventLogServantListViewManager__RequestListObject(this, v10, end_act, v11);
  return 1;
}


bool MaterialEventLogServantListViewManager__get_IsDoing_Slide(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isDoingSlide;
}


void MaterialEventLogServantListViewManager___c__DisplayClass18_0___ctor(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__0(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct MaterialEventLogServantListViewManager_o *_4__this; // x0
  System_Action_o *end_act; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  end_act = this->fields.end_act;
  _4__this->fields.isDoingSlide = 0;
  MaterialEventLogServantListViewManager__SetMode(_4__this, 2, end_act, v2);
}


void MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__1(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *v3; // x19
  MaterialEventLogServantListViewManager_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_596B789 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)sub_2213A60(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__);
    byte_596B789 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  _4__this->fields.isDoingSlide = 0;
  _9__2 = v3->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  MaterialEventLogServantListViewManager__SetMode(_4__this, 0, _9__2, v2);
}


void MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__2(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}