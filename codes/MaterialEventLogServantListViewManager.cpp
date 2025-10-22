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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C51F71 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4C51F71 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mBoxCollider, (int32_t)Component_object, v6, v7),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0) )
  {
    sub_1C3E7C0(gameObject, v4);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v14; // x0
  Il2CppObject *v15; // x20
  float v16; // s8
  System_Action_o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  Il2CppObject *Component_object; // x21
  float IntpTime_AutoResume; // s8
  System_Action_o *v21; // x20

  if ( (byte_4C51F72 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__);
    sub_1C3E564(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__);
    sub_1C3E564(&MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo);
    byte_4C51F72 = 1;
  }
  v6 = sub_1C3E7B0(MaterialEventLogServantListViewManager___c__DisplayClass18_0_TypeInfo);
  MaterialEventLogServantListViewManager___c__DisplayClass18_0___ctor(
    (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)v6,
    0);
  if ( !v6 )
    goto LABEL_17;
  *(_QWORD *)(v6 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v6 + 24) = end_act;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 24), (int32_t)end_act, v11, v12);
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.isDoingSlide = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_17;
    v18 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v18,
                         (const MethodInfo_3152BB4 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0);
    ListViewManager__CheckEmptyMessageBase((ListViewManager_o *)this, 0, 0);
    v21 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v6,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__1__,
      0);
    if ( !Component_object )
      goto LABEL_17;
    SlideFadeObject__SlideOut_36192672((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v21, 0);
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
        v14 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        v15 = GameObjectExtensions__SafeGetComponent_object_(
                v14,
                (const MethodInfo_3152BB4 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0);
        v17 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
        System_Action___ctor(
          v17,
          (Il2CppObject *)v6,
          Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__0__,
          0);
        if ( v15 )
        {
          SlideFadeObject__SlideIn_36191728((SlideFadeObject_o *)v15, 580.0, v16, 0.0, v17, 0);
          return;
        }
      }
LABEL_17:
      sub_1C3E7C0(gameObject, v8);
    }
    ActionExtensions__Call(*(System_Action_o **)(v6 + 24), 0);
  }
}


void MaterialEventLogServantListViewManager__SetFilterButtonImage(
        MaterialEventLogServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  bool v5; // zf
  UISprite_o *filterSprite; // x0
  System_String_o **v7; // x19
  UnityEngine_Color_o v8; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4C51F73 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17457/*"btn_bg_05"*/);
    sub_1C3E564(&StringLiteral_17458/*"btn_bg_06"*/);
    sub_1C3E564(&StringLiteral_423/*"#FE4545"*/);
    sub_1C3E564(&StringLiteral_404/*"#000000"*/);
    byte_4C51F73 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0), !this->fields.filterSprite) )
    sub_1C3E7C0(sort, method);
  v4 = (System_String_o **)&StringLiteral_17457/*"btn_bg_05"*/;
  v5 = ((unsigned __int8)sort & 1) == 0;
  filterSprite = this->fields.filterSprite;
  if ( v5 )
    v4 = (System_String_o **)&StringLiteral_17458/*"btn_bg_06"*/;
  if ( v5 )
    v7 = (System_String_o **)&StringLiteral_423/*"#FE4545"*/;
  else
    v7 = (System_String_o **)&StringLiteral_404/*"#000000"*/;
  UISprite__set_spriteName(filterSprite, *v4, 0);
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
    if ( !this->fields.isDoingSlide && this->fields.initMode == 2 )
      goto LABEL_9;
    goto LABEL_15;
  }
  if ( mode != 3 )
    goto LABEL_5;
  if ( this->fields.isDoingSlide )
  {
LABEL_15:
    ActionExtensions__Call(end_act, 0);
    return 0;
  }
  isDoingSlide = this->fields.initMode;
LABEL_5:
  if ( isDoingSlide )
    goto LABEL_15;
LABEL_9:
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_1C3E7C0(0, v8);
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
  struct MaterialEventLogServantListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  _4__this->fields.isDoingSlide = 0;
  MaterialEventLogServantListViewManager__SetMode(_4__this, 2, this->fields.end_act, 0);
}


void MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__1(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *v2; // x19
  MaterialEventLogServantListViewManager_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v2 = this;
  if ( (byte_4C52051 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    this = (MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *)sub_1C3E564(&Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__);
    byte_4C52051 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(this, method);
  _4__this->fields.isDoingSlide = 0;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_MaterialEventLogServantListViewManager___c__DisplayClass18_0__RequestListObject_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v5, v6);
  }
  MaterialEventLogServantListViewManager__SetMode(_4__this, 0, _9__2, 0);
}


void MaterialEventLogServantListViewManager___c__DisplayClass18_0___RequestListObject_b__2(
        MaterialEventLogServantListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}