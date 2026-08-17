void EventInfoChronologyDialog___ctor(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0

  if ( (byte_5970A89 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5970A89 = 1;
  }
  v3 = BaseDialog_TypeInfo;
  this->fields.gridSpace = 3.0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoChronologyDialog__Init(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x1
  UnityEngine_Object_o *titleLabel; // x20
  System_String_o *grid; // x0
  __int64 v12; // x1
  struct UILabel_o *v13; // x8
  UILabel_o *v14; // x20
  UnityEngine_Object_o *closeLabel; // x20
  struct UILabel_o *v16; // x8
  UILabel_o *v17; // x20
  UnityEngine_Object_o *failySprite; // x20
  __int64 v19; // x1
  UISprite_o *v20; // x20
  UnityEngine_Object_o *queenSprite; // x20
  UISprite_o *v22; // x20
  int32_t v23; // w20
  __int64 v24; // x1
  Il2CppObject *Component_object; // x21
  const MethodInfo *v26; // x3
  UISprite_o *v27; // x22
  EventInfoChronologyComponent_o *v28; // x0
  const MethodInfo *v29; // x3

  if ( (byte_5970A83 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3499/*"CHRONOLOGY_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_18758/*"chronology_line"*/);
    sub_2213A60(&StringLiteral_3498/*"CHRONOLOGY_DIALOG_CLOSE"*/);
    byte_5970A83 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closeAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v3, v4, v5, v6, v7, v8);
  if ( this->fields.initialized )
    return;
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  grid = (System_String_o *)UnityEngine_Object__op_Inequality(titleLabel, 0, 0);
  if ( ((unsigned __int8)grid & 1) != 0 )
  {
    v13 = this->fields.titleLabel;
    if ( !v13 )
      goto LABEL_48;
    if ( System_String__IsNullOrEmpty(v13->fields.mText, 0) )
    {
      v14 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
      grid = LocalizationManager__Get((System_String_o *)StringLiteral_3499/*"CHRONOLOGY_DIALOG_TITLE"*/, 0);
      if ( !v14 )
        goto LABEL_48;
      UILabel__set_text(v14, grid, 0);
    }
  }
  closeLabel = (UnityEngine_Object_o *)this->fields.closeLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  grid = (System_String_o *)UnityEngine_Object__op_Inequality(closeLabel, 0, 0);
  if ( ((unsigned __int8)grid & 1) != 0 )
  {
    v16 = this->fields.closeLabel;
    if ( !v16 )
      goto LABEL_48;
    if ( System_String__IsNullOrEmpty(v16->fields.mText, 0) )
    {
      v17 = this->fields.closeLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
      grid = LocalizationManager__Get((System_String_o *)StringLiteral_3498/*"CHRONOLOGY_DIALOG_CLOSE"*/, 0);
      if ( v17 )
      {
        UILabel__set_text(v17, grid, 0);
        goto LABEL_22;
      }
LABEL_48:
      sub_2213CDC(grid, v12);
    }
  }
LABEL_22:
  failySprite = (UnityEngine_Object_o *)this->fields.failySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(failySprite, 0, 0) )
  {
    v20 = this->fields.failySprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
    AtlasManager__SetEventUI(v20, (System_String_o *)StringLiteral_18758/*"chronology_line"*/, 0);
  }
  queenSprite = (UnityEngine_Object_o *)this->fields.queenSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(queenSprite, 0, 0) )
  {
    v22 = this->fields.queenSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetEventUI(v22, (System_String_o *)StringLiteral_18758/*"chronology_line"*/, 0);
  }
  grid = (System_String_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_48;
  v23 = 0;
  while ( 1 )
  {
    grid = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)grid, 0);
    if ( !grid )
      goto LABEL_48;
    if ( v23 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)grid, 0) )
      break;
    grid = (System_String_o *)this->fields.grid;
    if ( grid )
    {
      grid = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)grid, 0);
      if ( grid )
      {
        grid = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)grid, v23, 0);
        if ( grid )
        {
          grid = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grid, 0);
          if ( grid )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)grid,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
            grid = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
            if ( ((unsigned __int8)grid & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_48;
              v27 = this->fields.queenSprite;
              EventInfoChronologyComponent__SetSprite(
                (EventInfoChronologyComponent_o *)grid,
                v27,
                (UISprite_o *)Component_object[3].monitor,
                v26);
              EventInfoChronologyComponent__SetSprite(v28, v27, (UISprite_o *)Component_object[4].klass, v29);
            }
            grid = (System_String_o *)this->fields.grid;
            ++v23;
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
  float v4; // s8
  int32_t v5; // w20
  UnityEngine_Component_o *v6; // x21
  __int64 v7; // x1
  Il2CppObject *Component_object; // x22
  Il2CppObject *v9; // x22
  UnityEngine_GameObject_o *v10; // x21
  float gridSpace; // s10
  float v12; // s10
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5970A88 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970A88 = 1;
  }
  grid = this->fields.grid;
  if ( !grid )
LABEL_22:
    sub_2213CDC(grid, method);
  v4 = 0.5;
  v5 = 0;
  while ( 1 )
  {
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0);
    if ( !grid )
      goto LABEL_22;
    if ( v5 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)grid, 0) )
      break;
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_22;
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0);
    if ( !grid )
      goto LABEL_22;
    grid = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)grid, v5, 0);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
      v9 = UnityEngine_GameObject__GetComponent_object_(
             grid,
             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      grid = UnityEngine_Component__get_gameObject(v6, 0);
      if ( !v9 )
        goto LABEL_22;
      v10 = grid;
      gridSpace = this->fields.gridSpace;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v9, 0);
      GameObjectExtensions__SetLocalPositionY(v10, (float)(v4 - gridSpace) + (float)(size.fields.y * -0.5), 0);
      v12 = this->fields.gridSpace;
      v14 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v9, 0);
      v4 = v4 - (float)(v12 + v14.fields.y);
    }
    grid = this->fields.grid;
    ++v5;
    if ( !grid )
      goto LABEL_22;
  }
}


void EventInfoChronologyDialog__OnClickCloseButton(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5970A85 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoChronologyDialog_OnClickCloseButton__);
    sub_2213A60(&Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__);
    byte_5970A85 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventInfoChronologyDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoChronologyDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventInfoChronologyDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoChronologyDialog__Open(
        EventInfoChronologyDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  EventInfoChronologyDialog_o *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  System_Action_o *v16; // x20

  if ( (byte_5970A84 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoChronologyDialog__Open_b__16_0__);
    byte_5970A84 = 1;
  }
  EventInfoChronologyDialog__Init(this, (const MethodInfo *)closeAction);
  this->fields.state = 1;
  this->fields.closeAction = closeAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)closeAction,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  EventInfoChronologyDialog__SetTitleInfoTouchEnable(v11, 0, v12);
  EventInfoChronologyDialog__Layout(this, v13);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView) == 0) )
  {
    sub_2213CDC(gameObject, v15);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EventInfoChronologyDialog__Open_b__16_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5970A86 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5970A86 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
      sub_2213CDC(genericContainerHandle, v6);
    TitleInfoControl__SetTouchEnable(genericContainerHandle, enable, 0);
  }
}


void EventInfoChronologyDialog___OnClickCloseButton_b__17_0(
        EventInfoChronologyDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Action_o *v4; // x0
  MissionNaviTransitionBoardItem_o *p_closeAction; // x19
  struct System_Action_o *closeAction; // t1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  EventInfoChronologyDialog__SetTitleInfoTouchEnable(this, 1, v2);
  closeAction = this->fields.closeAction;
  p_closeAction = (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction;
  v4 = closeAction;
  if ( closeAction )
  {
    ActionExtensions__Call(v4, 0);
    p_closeAction->klass = 0;
    sub_2213A04(p_closeAction, 0, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_5970A87 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970A87 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_2213CDC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}