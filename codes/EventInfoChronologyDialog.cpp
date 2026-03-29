void EventInfoChronologyDialog___ctor(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D30C43 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D30C43 = 1;
  }
  this->fields.gridSpace = 3.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoChronologyDialog__Init(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  UnityEngine_Object_o *titleLabel; // x20
  System_String_o *grid; // x0
  __int64 v11; // x1
  struct UILabel_o *v12; // x8
  UILabel_o *v13; // x20
  UnityEngine_Object_o *closeLabel; // x20
  struct UILabel_o *v15; // x8
  UILabel_o *v16; // x20
  UnityEngine_Object_o *failySprite; // x20
  UISprite_o *v18; // x20
  UnityEngine_Object_o *queenSprite; // x20
  UISprite_o *v20; // x20
  int32_t v21; // w20
  Il2CppObject *Component_object; // x21
  const MethodInfo *v23; // x3
  UISprite_o *v24; // x22
  EventInfoChronologyComponent_o *v25; // x0
  const MethodInfo *v26; // x3

  if ( (byte_4D30C3D & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3380/*"CHRONOLOGY_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_18105/*"chronology_line"*/);
    sub_1C93AD4(&StringLiteral_3379/*"CHRONOLOGY_DIALOG_CLOSE"*/);
    byte_4D30C3D = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closeAction = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeAction, 0, v3, v4, v5, v6, v7, v8);
  if ( this->fields.initialized )
    return;
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  grid = (System_String_o *)UnityEngine_Object__op_Inequality(titleLabel, 0, 0);
  if ( ((unsigned __int8)grid & 1) != 0 )
  {
    v12 = this->fields.titleLabel;
    if ( !v12 )
      goto LABEL_48;
    if ( System_String__IsNullOrEmpty(v12->fields.mText, 0) )
    {
      v13 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      grid = LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"CHRONOLOGY_DIALOG_TITLE"*/, 0);
      if ( !v13 )
        goto LABEL_48;
      UILabel__set_text(v13, grid, 0);
    }
  }
  closeLabel = (UnityEngine_Object_o *)this->fields.closeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  grid = (System_String_o *)UnityEngine_Object__op_Inequality(closeLabel, 0, 0);
  if ( ((unsigned __int8)grid & 1) != 0 )
  {
    v15 = this->fields.closeLabel;
    if ( !v15 )
      goto LABEL_48;
    if ( System_String__IsNullOrEmpty(v15->fields.mText, 0) )
    {
      v16 = this->fields.closeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      grid = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CHRONOLOGY_DIALOG_CLOSE"*/, 0);
      if ( v16 )
      {
        UILabel__set_text(v16, grid, 0);
        goto LABEL_22;
      }
LABEL_48:
      sub_1C93D2C(grid, v11);
    }
  }
LABEL_22:
  failySprite = (UnityEngine_Object_o *)this->fields.failySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(failySprite, 0, 0) )
  {
    v18 = this->fields.failySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v18, (System_String_o *)StringLiteral_18105/*"chronology_line"*/, 0);
  }
  queenSprite = (UnityEngine_Object_o *)this->fields.queenSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(queenSprite, 0, 0) )
  {
    v20 = this->fields.queenSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v20, (System_String_o *)StringLiteral_18105/*"chronology_line"*/, 0);
  }
  grid = (System_String_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_48;
  v21 = 0;
  while ( 1 )
  {
    grid = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)grid, 0);
    if ( !grid )
      goto LABEL_48;
    if ( v21 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)grid, 0) )
      break;
    grid = (System_String_o *)this->fields.grid;
    if ( grid )
    {
      grid = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)grid, 0);
      if ( grid )
      {
        grid = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)grid, v21, 0);
        if ( grid )
        {
          grid = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grid, 0);
          if ( grid )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)grid,
                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            grid = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
            if ( ((unsigned __int8)grid & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_48;
              v24 = this->fields.queenSprite;
              EventInfoChronologyComponent__SetSprite(
                (EventInfoChronologyComponent_o *)grid,
                v24,
                (UISprite_o *)Component_object[3].monitor,
                v23);
              EventInfoChronologyComponent__SetSprite(v25, v24, (UISprite_o *)Component_object[4].klass, v26);
            }
            grid = (System_String_o *)this->fields.grid;
            ++v21;
            if ( grid )
              continue;
          }
        }
      }
    }
    goto LABEL_48;
  }
  this->fields.initialized = 1;
}


void EventInfoChronologyDialog__Layout(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *grid; // x0
  int32_t v4; // w20
  float v5; // s8
  UnityEngine_Component_o *v6; // x21
  Il2CppObject *Component_object; // x22
  Il2CppObject *v8; // x22
  float gridSpace; // s10
  UnityEngine_GameObject_o *v10; // x21
  float v11; // s10
  float v12; // s1

  if ( (byte_4D30C42 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30C42 = 1;
  }
  grid = this->fields.grid;
  if ( !grid )
LABEL_22:
    sub_1C93D2C(grid, method);
  v4 = 0;
  v5 = 0.5;
  while ( 1 )
  {
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0);
    if ( !grid )
      goto LABEL_22;
    if ( v4 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)grid, 0) )
      break;
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_22;
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0);
    if ( !grid )
      goto LABEL_22;
    grid = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)grid, v4, 0);
    if ( !grid )
      goto LABEL_22;
    v6 = (UnityEngine_Component_o *)grid;
    grid = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grid, 0);
    if ( !grid )
      goto LABEL_22;
    if ( UnityEngine_GameObject__get_activeSelf(grid, 0) )
    {
      grid = UnityEngine_Component__get_gameObject(v6, 0);
      if ( !grid )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           grid,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      grid = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
      if ( ((unsigned __int8)grid & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_22;
        EventInfoChronologyComponent__Refresh((EventInfoChronologyComponent_o *)Component_object, method);
      }
      grid = UnityEngine_Component__get_gameObject(v6, 0);
      if ( !grid )
        goto LABEL_22;
      v8 = UnityEngine_GameObject__GetComponent_object_(
             grid,
             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      grid = UnityEngine_Component__get_gameObject(v6, 0);
      if ( !v8 )
        goto LABEL_22;
      gridSpace = this->fields.gridSpace;
      v10 = grid;
      v12 = COERCE_FLOAT(LODWORD(UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v8, 0).fields.y));
      GameObjectExtensions__SetLocalPositionY(v10, (float)(v5 - gridSpace) + (float)(v12 * -0.5), 0);
      v11 = this->fields.gridSpace;
      v5 = v5
         - (float)(v11
                 + COERCE_FLOAT(LODWORD(UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v8, 0).fields.y)));
    }
    grid = this->fields.grid;
    ++v4;
    if ( !grid )
      goto LABEL_22;
  }
}


void EventInfoChronologyDialog__OnClickCloseButton(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D30C3F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoChronologyDialog_OnClickCloseButton__);
    sub_1C93AD4(&Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__);
    byte_4D30C3F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventInfoChronologyDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoChronologyDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoChronologyDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoChronologyDialog__Open(
        EventInfoChronologyDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  EventInfoChronologyDialog_o *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  System_Action_o *v16; // x20

  if ( (byte_4D30C3E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoChronologyDialog__Open_b__16_0__);
    byte_4D30C3E = 1;
  }
  EventInfoChronologyDialog__Init(this, (const MethodInfo *)closeAction);
  this->fields.state = 1;
  this->fields.closeAction = closeAction;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeAction, (int32_t)closeAction, v5, v6, v7, v8, v9, v10);
  EventInfoChronologyDialog__SetTitleInfoTouchEnable(v11, 0, v12);
  EventInfoChronologyDialog__Layout(this, v13);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView) == 0) )
  {
    sub_1C93D2C(gameObject, v15);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  v16 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EventInfoChronologyDialog__Open_b__16_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0, 0);
}


void EventInfoChronologyDialog__SetTitleInfoTouchEnable(
        EventInfoChronologyDialog_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8

  if ( (byte_4D30C40 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D30C40 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
      sub_1C93D2C(genericContainerHandle, v6);
    TitleInfoControl__SetTouchEnable(genericContainerHandle, enable, 0);
  }
}


void EventInfoChronologyDialog___OnClickCloseButton_b__17_0(
        EventInfoChronologyDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Action_o *v4; // x0
  GrandQuestFolderBoardItem_o *p_closeAction; // x19
  struct System_Action_o *closeAction; // t1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  EventInfoChronologyDialog__SetTitleInfoTouchEnable(this, 1, v2);
  closeAction = this->fields.closeAction;
  p_closeAction = (GrandQuestFolderBoardItem_o *)&this->fields.closeAction;
  v4 = closeAction;
  if ( closeAction )
  {
    ActionExtensions__Call(v4, 0);
    p_closeAction->klass = 0;
    sub_1C93A78(p_closeAction, 0, v7, v8, v9, v10, v11, v12);
  }
}


void EventInfoChronologyDialog___Open_b__16_0(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


bool EventInfoChronologyDialog__get_IsOpened(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.state - 1) < 2;
}


UnityEngine_GameObject_o *EventInfoChronologyDialog__get_closeBtnObject(
        EventInfoChronologyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D30C41 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30C41 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}