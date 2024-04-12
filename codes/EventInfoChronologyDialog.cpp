void __fastcall EventInfoChronologyDialog___ctor(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B1E4D & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B1E4D = 1;
  }
  this->fields.gridSpace = 3.0;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoChronologyDialog__Init(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  UILabel_o *titleLabel; // x20
  System_String_o *queenSprite; // x0
  __int64 v11; // x1
  UILabel_o *closeLabel; // x20
  UISprite_o *failySprite; // x20
  struct UISprite_o *v14; // x8
  int32_t v15; // w20
  srcLineSprite_o *Component_srcLineSprite; // x21
  const MethodInfo *v17; // x3
  UISprite_o *v18; // x22
  EventInfoChronologyComponent_o *v19; // x0
  const MethodInfo *v20; // x3

  if ( (byte_42B1E47 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_3018/*"CHRONOLOGY_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_17549/*"chronology_line"*/);
    sub_B52984(&StringLiteral_3017/*"CHRONOLOGY_DIALOG_CLOSE"*/);
    byte_42B1E47 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closeAction = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v3, v4, v5, v6, v7, v8);
  if ( !this->fields.initialized )
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    queenSprite = LocalizationManager__Get((System_String_o *)StringLiteral_3018/*"CHRONOLOGY_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_30;
    UILabel__set_text(titleLabel, queenSprite, 0LL);
    closeLabel = this->fields.closeLabel;
    queenSprite = LocalizationManager__Get((System_String_o *)StringLiteral_3017/*"CHRONOLOGY_DIALOG_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_30;
    UILabel__set_text(closeLabel, queenSprite, 0LL);
    failySprite = this->fields.failySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    queenSprite = (System_String_o *)AtlasManager__SetEventUI(failySprite, (System_String_o *)StringLiteral_17549/*"chronology_line"*/, 0LL);
    v14 = this->fields.failySprite;
    if ( !v14
      || (queenSprite = (System_String_o *)this->fields.queenSprite) == 0LL
      || (UISprite__set_atlas((UISprite_o *)queenSprite, v14->fields.mAtlas, 0LL),
          (queenSprite = (System_String_o *)this->fields.queenSprite) == 0LL)
      || (UISprite__set_spriteName((UISprite_o *)queenSprite, (System_String_o *)StringLiteral_17549/*"chronology_line"*/, 0LL),
          (queenSprite = (System_String_o *)this->fields.grid) == 0LL) )
    {
LABEL_30:
      sub_B52A5C(queenSprite, v11);
    }
    v15 = 0;
    while ( 1 )
    {
      queenSprite = (System_String_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)queenSprite,
                                         0LL);
      if ( !queenSprite )
        goto LABEL_30;
      if ( v15 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)queenSprite, 0LL) )
        break;
      queenSprite = (System_String_o *)this->fields.grid;
      if ( queenSprite )
      {
        queenSprite = (System_String_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)queenSprite,
                                           0LL);
        if ( queenSprite )
        {
          queenSprite = (System_String_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)queenSprite,
                                             v15,
                                             0LL);
          if ( queenSprite )
          {
            queenSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)queenSprite,
                                               0LL);
            if ( queenSprite )
            {
              Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)queenSprite,
                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              queenSprite = (System_String_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_srcLineSprite,
                                                 0LL,
                                                 0LL);
              if ( ((unsigned __int8)queenSprite & 1) != 0 )
              {
                if ( !Component_srcLineSprite )
                  goto LABEL_30;
                v18 = this->fields.queenSprite;
                EventInfoChronologyComponent__SetSprite(
                  (EventInfoChronologyComponent_o *)queenSprite,
                  v18,
                  Component_srcLineSprite->fields.mcLineSprite,
                  v17);
                EventInfoChronologyComponent__SetSprite(
                  v19,
                  v18,
                  (UISprite_o *)Component_srcLineSprite->fields.mcTweenAlphaP,
                  v20);
              }
              queenSprite = (System_String_o *)this->fields.grid;
              ++v15;
              if ( queenSprite )
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
  UnityEngine_GameObject_o *grid; // x0
  int32_t v4; // w20
  float v5; // s8
  UnityEngine_Component_o *v6; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UnityEngine_BoxCollider_o *v8; // x22
  float gridSpace; // s10
  UnityEngine_GameObject_o *v10; // x21
  float v11; // s10
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B1E4C & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1E4C = 1;
  }
  grid = this->fields.grid;
  if ( !grid )
LABEL_23:
    sub_B52A5C(grid, method);
  v4 = 0;
  v5 = 0.5;
  while ( 1 )
  {
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0LL);
    if ( !grid )
      goto LABEL_23;
    if ( v4 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)grid, 0LL) )
      break;
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_23;
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0LL);
    if ( !grid )
      goto LABEL_23;
    grid = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)grid, v4, 0LL);
    if ( !grid )
      goto LABEL_23;
    v6 = (UnityEngine_Component_o *)grid;
    grid = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grid, 0LL);
    if ( !grid )
      goto LABEL_23;
    if ( UnityEngine_GameObject__get_activeSelf(grid, 0LL) )
    {
      grid = UnityEngine_Component__get_gameObject(v6, 0LL);
      if ( !grid )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          grid,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      grid = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)grid & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_23;
        EventInfoChronologyComponent__Refresh((EventInfoChronologyComponent_o *)Component_srcLineSprite, method);
      }
      grid = UnityEngine_Component__get_gameObject(v6, 0LL);
      if ( !grid )
        goto LABEL_23;
      v8 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          grid,
                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      grid = UnityEngine_Component__get_gameObject(v6, 0LL);
      if ( !v8 )
        goto LABEL_23;
      gridSpace = this->fields.gridSpace;
      v10 = grid;
      size = UnityEngine_BoxCollider__get_size(v8, 0LL);
      GameObjectExtensions__SetLocalPositionY(v10, (float)(v5 - gridSpace) + (float)(size.fields.y * -0.5), 0LL);
      v11 = this->fields.gridSpace;
      v13 = UnityEngine_BoxCollider__get_size(v8, 0LL);
      v5 = v5 - (float)(v11 + v13.fields.y);
    }
    grid = this->fields.grid;
    ++v4;
    if ( !grid )
      goto LABEL_23;
  }
}


void __fastcall EventInfoChronologyDialog__OnClickCloseButton(
        EventInfoChronologyDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_42B1E49 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventInfoChronologyDialog_OnClickCloseButton__);
    sub_B52984(&Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__);
    byte_42B1E49 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventInfoChronologyDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoChronologyDialog_OnClickCloseButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_EventInfoChronologyDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall EventInfoChronologyDialog__Open(
        EventInfoChronologyDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  EventInfoChronologyDialog_o *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  System_Action_o *v16; // x20

  if ( (byte_42B1E48 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventInfoChronologyDialog__Open_b__16_0__);
    byte_42B1E48 = 1;
  }
  EventInfoChronologyDialog__Init(this, (const MethodInfo *)closeAction);
  this->fields.state = 1;
  this->fields.closeAction = closeAction;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeAction,
    (System_Int32_array **)closeAction,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  EventInfoChronologyDialog__SetTitleInfoTouchEnable(v11, 0, v12);
  EventInfoChronologyDialog__Laytout(this, v13);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView) == 0LL) )
  {
    sub_B52A5C(gameObject, v15);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
  v16 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EventInfoChronologyDialog__Open_b__16_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}


void __fastcall EventInfoChronologyDialog__SetTitleInfoTouchEnable(
        EventInfoChronologyDialog_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_42B1E4A & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42B1E4A = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
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
    if ( !byte_42AC2A0 )
    {
      sub_B52984(&TerminalSceneComponent_TypeInfo);
      byte_42AC2A0 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.mEventItemEventBtn->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0LL )
      sub_B52A5C(genericContainerHandle, v6);
    TitleInfoControl__SetTouchEnable(genericContainerHandle, enable, 0LL);
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
    sub_B52920(p_closeAction, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_42B1E4B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1E4B = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}