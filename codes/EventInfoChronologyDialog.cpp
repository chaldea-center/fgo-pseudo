void __fastcall EventInfoChronologyDialog___ctor(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FB704 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB704 = 1;
  }
  this->fields.gridSpace = 3.0;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoChronologyDialog__Init(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UILabel_o *titleLabel; // x20
  System_String_o *v16; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v18; // x0
  UISprite_o *failySprite; // x20
  struct UISprite_o *v20; // x8
  UISprite_o *queenSprite; // x0
  UISprite_o *v22; // x0
  UnityEngine_GameObject_o *grid; // x0
  int32_t v24; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x21
  _BOOL8 v31; // x0
  const MethodInfo *v32; // x3
  UISprite_o *v33; // x22
  EventInfoChronologyComponent_o *v34; // x0
  const MethodInfo *v35; // x3

  if ( (byte_40FB6FE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2977, v6);
    sub_B16FFC(&StringLiteral_17358, v7);
    sub_B16FFC(&StringLiteral_2976, v8);
    byte_40FB6FE = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closeAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v9, v10, v11, v12, v13, v14);
  if ( !this->fields.initialized )
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2977, 0LL);
    if ( !titleLabel )
      goto LABEL_30;
    UILabel__set_text(titleLabel, v16, 0LL);
    closeLabel = this->fields.closeLabel;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2976, 0LL);
    if ( !closeLabel )
      goto LABEL_30;
    UILabel__set_text(closeLabel, v18, 0LL);
    failySprite = this->fields.failySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(failySprite, (System_String_o *)StringLiteral_17358, 0LL);
    v20 = this->fields.failySprite;
    if ( !v20
      || (queenSprite = this->fields.queenSprite) == 0LL
      || (UISprite__set_atlas(queenSprite, v20->fields.mAtlas, 0LL), (v22 = this->fields.queenSprite) == 0LL)
      || (UISprite__set_spriteName(v22, (System_String_o *)StringLiteral_17358, 0LL), (grid = this->fields.grid) == 0LL) )
    {
LABEL_30:
      sub_B170D4();
    }
    v24 = 0;
    while ( 1 )
    {
      transform = UnityEngine_GameObject__get_transform(grid, 0LL);
      if ( !transform )
        goto LABEL_30;
      if ( v24 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
        break;
      v26 = this->fields.grid;
      if ( v26 )
      {
        v27 = UnityEngine_GameObject__get_transform(v26, 0LL);
        if ( v27 )
        {
          Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v27, v24, 0LL);
          if ( Child )
          {
            gameObject = UnityEngine_Component__get_gameObject(Child, 0LL);
            if ( gameObject )
            {
              Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          gameObject,
                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v31 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
              if ( v31 )
              {
                if ( !Component_srcLineSprite )
                  goto LABEL_30;
                v33 = this->fields.queenSprite;
                EventInfoChronologyComponent__SetSprite(
                  (EventInfoChronologyComponent_o *)v31,
                  v33,
                  Component_srcLineSprite->fields.mcLineSprite,
                  v32);
                EventInfoChronologyComponent__SetSprite(
                  v34,
                  v33,
                  (UISprite_o *)Component_srcLineSprite->fields.mcTweenAlphaP,
                  v35);
              }
              grid = this->fields.grid;
              ++v24;
              if ( grid )
                continue;
            }
          }
        }
      }
      goto LABEL_30;
    }
    this->fields.initialized = 1;
  }
}


void __fastcall EventInfoChronologyDialog__Laytout(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *grid; // x0
  int32_t v6; // w20
  float v7; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  EventInfoChronologyComponent_o *Component_srcLineSprite; // x22
  const MethodInfo *v16; // x1
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_BoxCollider_o *v18; // x22
  UnityEngine_GameObject_o *v19; // x0
  float gridSpace; // s10
  UnityEngine_GameObject_o *v21; // x21
  float v22; // s10
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB703 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FB703 = 1;
  }
  grid = this->fields.grid;
  if ( !grid )
LABEL_23:
    sub_B170D4();
  v6 = 0;
  v7 = 0.5;
  while ( 1 )
  {
    transform = UnityEngine_GameObject__get_transform(grid, 0LL);
    if ( !transform )
      goto LABEL_23;
    if ( v6 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
      break;
    v9 = this->fields.grid;
    if ( !v9 )
      goto LABEL_23;
    v10 = UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !v10 )
      goto LABEL_23;
    Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v10, v6, 0LL);
    if ( !Child )
      goto LABEL_23;
    v12 = Child;
    gameObject = UnityEngine_Component__get_gameObject(Child, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    {
      v14 = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( !v14 )
        goto LABEL_23;
      Component_srcLineSprite = (EventInfoChronologyComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v14,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_23;
        EventInfoChronologyComponent__Refresh(Component_srcLineSprite, v16);
      }
      v17 = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( !v17 )
        goto LABEL_23;
      v18 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v17,
                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      v19 = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( !v18 )
        goto LABEL_23;
      gridSpace = this->fields.gridSpace;
      v21 = v19;
      size = UnityEngine_BoxCollider__get_size(v18, 0LL);
      GameObjectExtensions__SetLocalPositionY(v21, (float)(v7 - gridSpace) + (float)(size.fields.y * -0.5), 0LL);
      v22 = this->fields.gridSpace;
      v24 = UnityEngine_BoxCollider__get_size(v18, 0LL);
      v7 = v7 - (float)(v22 + v24.fields.y);
    }
    grid = this->fields.grid;
    ++v6;
    if ( !grid )
      goto LABEL_23;
  }
}


void __fastcall EventInfoChronologyDialog__OnClickCloseButton(
        EventInfoChronologyDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40FB700 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoChronologyDialog_OnClickCloseButton__, v3);
    sub_B16FFC(&Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__, v4);
    byte_40FB700 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_EventInfoChronologyDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoChronologyDialog_OnClickCloseButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_EventInfoChronologyDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


void __fastcall EventInfoChronologyDialog__Open(
        EventInfoChronologyDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  EventInfoChronologyDialog_o *v12; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UIScrollView_o *scrollView; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x20

  if ( (byte_40FB6FF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, closeAction);
    sub_B16FFC(&Method_EventInfoChronologyDialog__Open_b__16_0__, v5);
    byte_40FB6FF = 1;
  }
  EventInfoChronologyDialog__Init(this, (const MethodInfo *)closeAction);
  this->fields.state = 1;
  this->fields.closeAction = closeAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeAction,
    (System_Int32_array **)closeAction,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  EventInfoChronologyDialog__SetTitleInfoTouchEnable(v12, 0, v13);
  EventInfoChronologyDialog__Laytout(this, v14);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_B170D4();
  }
  UIScrollView__ResetPosition(scrollView, 0LL);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_EventInfoChronologyDialog__Open_b__16_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoChronologyDialog__SetTitleInfoTouchEnable(
        EventInfoChronologyDialog_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalSceneComponent_c *v5; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v7; // x1
  TerminalSceneComponent_c *v8; // x0
  struct TerminalSceneComponent_o *v9; // x8
  TitleInfoControl_o *mTitleInfo; // x0

  if ( (byte_40FB701 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v4);
    byte_40FB701 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, enable);
    byte_40F6042 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v5->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v7);
      byte_40F6042 = 1;
    }
    v8 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    v9 = v8->static_fields->mInstance;
    if ( !v9 || (mTitleInfo = v9->fields.mTitleInfo) == 0LL )
      sub_B170D4();
    TitleInfoControl__SetTouchEnable(mTitleInfo, enable, 0LL);
  }
}


void __fastcall EventInfoChronologyDialog___OnClickCloseButton_b__17_0(
        EventInfoChronologyDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Action_o *v4; // x0
  BattleServantConfConponent_o *p_closeAction; // x19
  struct System_Action_o *closeAction; // t1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  EventInfoChronologyDialog__SetTitleInfoTouchEnable(this, 1, v2);
  closeAction = this->fields.closeAction;
  p_closeAction = (BattleServantConfConponent_o *)&this->fields.closeAction;
  v4 = closeAction;
  if ( closeAction )
  {
    ActionExtensions__Call(v4, 0LL);
    p_closeAction->klass = 0LL;
    sub_B16F98(p_closeAction, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall EventInfoChronologyDialog___Open_b__16_0(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


bool __fastcall EventInfoChronologyDialog__get_IsOpened(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.state - 1) < 2;
}


UnityEngine_GameObject_o *__fastcall EventInfoChronologyDialog__get_closeBtnObject(
        EventInfoChronologyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FB702 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB702 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}