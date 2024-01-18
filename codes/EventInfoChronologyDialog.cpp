void __fastcall EventInfoChronologyDialog___ctor(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4189140 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4189140 = 1;
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
  System_String_o *queenSprite; // x0
  __int64 v17; // x1
  UILabel_o *closeLabel; // x20
  UISprite_o *failySprite; // x20
  struct UISprite_o *v20; // x8
  int32_t v21; // w20
  srcLineSprite_o *Component_srcLineSprite; // x21
  const MethodInfo *v23; // x3
  UISprite_o *v24; // x22
  EventInfoChronologyComponent_o *v25; // x0
  const MethodInfo *v26; // x3

  if ( (byte_418913A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_2986/*"CHRONOLOGY_DIALOG_TITLE"*/, v6);
    sub_B2C35C(&StringLiteral_17424/*"chronology_line"*/, v7);
    sub_B2C35C(&StringLiteral_2985/*"CHRONOLOGY_DIALOG_CLOSE"*/, v8);
    byte_418913A = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closeAction = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v9, v10, v11, v12, v13, v14);
  if ( !this->fields.initialized )
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    queenSprite = LocalizationManager__Get((System_String_o *)StringLiteral_2986/*"CHRONOLOGY_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_30;
    UILabel__set_text(titleLabel, queenSprite, 0LL);
    closeLabel = this->fields.closeLabel;
    queenSprite = LocalizationManager__Get((System_String_o *)StringLiteral_2985/*"CHRONOLOGY_DIALOG_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_30;
    UILabel__set_text(closeLabel, queenSprite, 0LL);
    failySprite = this->fields.failySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    queenSprite = (System_String_o *)AtlasManager__SetEventUI(failySprite, (System_String_o *)StringLiteral_17424/*"chronology_line"*/, 0LL);
    v20 = this->fields.failySprite;
    if ( !v20
      || (queenSprite = (System_String_o *)this->fields.queenSprite) == 0LL
      || (UISprite__set_atlas((UISprite_o *)queenSprite, v20->fields.mAtlas, 0LL),
          (queenSprite = (System_String_o *)this->fields.queenSprite) == 0LL)
      || (UISprite__set_spriteName((UISprite_o *)queenSprite, (System_String_o *)StringLiteral_17424/*"chronology_line"*/, 0LL),
          (queenSprite = (System_String_o *)this->fields.grid) == 0LL) )
    {
LABEL_30:
      sub_B2C434(queenSprite, v17);
    }
    v21 = 0;
    while ( 1 )
    {
      queenSprite = (System_String_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)queenSprite,
                                         0LL);
      if ( !queenSprite )
        goto LABEL_30;
      if ( v21 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)queenSprite, 0LL) )
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
                                             v21,
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
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
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
                v24 = this->fields.queenSprite;
                EventInfoChronologyComponent__SetSprite(
                  (EventInfoChronologyComponent_o *)queenSprite,
                  v24,
                  Component_srcLineSprite->fields.mcLineSprite,
                  v23);
                EventInfoChronologyComponent__SetSprite(
                  v25,
                  v24,
                  (UISprite_o *)Component_srcLineSprite->fields.mcTweenAlphaP,
                  v26);
              }
              queenSprite = (System_String_o *)this->fields.grid;
              ++v21;
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *grid; // x0
  int32_t v6; // w20
  float v7; // s8
  UnityEngine_Component_o *v8; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UnityEngine_BoxCollider_o *v10; // x22
  float gridSpace; // s10
  UnityEngine_GameObject_o *v12; // x21
  float v13; // s10
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418913F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418913F = 1;
  }
  grid = this->fields.grid;
  if ( !grid )
LABEL_23:
    sub_B2C434(grid, method);
  v6 = 0;
  v7 = 0.5;
  while ( 1 )
  {
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0LL);
    if ( !grid )
      goto LABEL_23;
    if ( v6 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)grid, 0LL) )
      break;
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_23;
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0LL);
    if ( !grid )
      goto LABEL_23;
    grid = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)grid, v6, 0LL);
    if ( !grid )
      goto LABEL_23;
    v8 = (UnityEngine_Component_o *)grid;
    grid = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grid, 0LL);
    if ( !grid )
      goto LABEL_23;
    if ( UnityEngine_GameObject__get_activeSelf(grid, 0LL) )
    {
      grid = UnityEngine_Component__get_gameObject(v8, 0LL);
      if ( !grid )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          grid,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
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
      grid = UnityEngine_Component__get_gameObject(v8, 0LL);
      if ( !grid )
        goto LABEL_23;
      v10 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           grid,
                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      grid = UnityEngine_Component__get_gameObject(v8, 0LL);
      if ( !v10 )
        goto LABEL_23;
      gridSpace = this->fields.gridSpace;
      v12 = grid;
      size = UnityEngine_BoxCollider__get_size(v10, 0LL);
      GameObjectExtensions__SetLocalPositionY(v12, (float)(v7 - gridSpace) + (float)(size.fields.y * -0.5), 0LL);
      v13 = this->fields.gridSpace;
      v15 = UnityEngine_BoxCollider__get_size(v10, 0LL);
      v7 = v7 - (float)(v13 + v15.fields.y);
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
  System_Action_o *v7; // x20

  if ( (byte_418913C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventInfoChronologyDialog_OnClickCloseButton__, v3);
    sub_B2C35C(&Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__, v4);
    byte_418913C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_EventInfoChronologyDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoChronologyDialog_OnClickCloseButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B2C364(Method_EventInfoChronologyDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v16; // x1
  System_Action_o *v17; // x20

  if ( (byte_418913B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, closeAction);
    sub_B2C35C(&Method_EventInfoChronologyDialog__Open_b__16_0__, v5);
    byte_418913B = 1;
  }
  EventInfoChronologyDialog__Init(this, (const MethodInfo *)closeAction);
  this->fields.state = 1;
  this->fields.closeAction = closeAction;
  sub_B2C2F8(
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
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView) == 0LL) )
  {
    sub_B2C434(gameObject, v16);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EventInfoChronologyDialog__Open_b__16_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0LL);
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
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_418913D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, enable);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v4);
    byte_418913D = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, enable);
    byte_4183C65 = 1;
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
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v7);
      byte_4183C65 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.replaceEventRewardBtnLogo->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0LL )
      sub_B2C434(genericContainerHandle, v7);
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
    sub_B2C2F8(p_closeAction, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_418913E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418913E = 1;
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
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}