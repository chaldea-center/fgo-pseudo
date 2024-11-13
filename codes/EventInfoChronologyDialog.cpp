void __fastcall EventInfoChronologyDialog___ctor(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B169E1 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B169E1 = 1;
  }
  this->fields.gridSpace = 3.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoChronologyDialog__Init(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  UnityEngine_Object_o *titleLabel; // x20
  System_String_o *grid; // x0
  __int64 v25; // x1
  struct UILabel_o *v26; // x8
  UILabel_o *v27; // x20
  UnityEngine_Object_o *closeLabel; // x20
  struct UILabel_o *v29; // x8
  UILabel_o *v30; // x20
  UnityEngine_Object_o *failySprite; // x20
  __int64 v32; // x1
  UISprite_o *v33; // x20
  UnityEngine_Object_o *queenSprite; // x20
  UISprite_o *v35; // x20
  int32_t v36; // w20
  __int64 v37; // x1
  Il2CppObject *Component_object; // x21
  const MethodInfo *v39; // x3
  UISprite_o *v40; // x22
  EventInfoChronologyComponent_o *v41; // x0
  const MethodInfo *v42; // x3

  if ( (byte_4B169DB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_3496/*"CHRONOLOGY_DIALOG_TITLE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_18149/*"chronology_line"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_3495/*"CHRONOLOGY_DIALOG_CLOSE"*/, v14, v15);
    byte_4B169DB = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closeAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v16, v17, v18, v19, v20, v21);
  if ( this->fields.initialized )
    return;
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  grid = (System_String_o *)UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL);
  if ( ((unsigned __int8)grid & 1) != 0 )
  {
    v26 = this->fields.titleLabel;
    if ( !v26 )
      goto LABEL_48;
    if ( System_String__IsNullOrEmpty(v26->fields.mText, 0LL) )
    {
      v27 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      grid = LocalizationManager__Get((System_String_o *)StringLiteral_3496/*"CHRONOLOGY_DIALOG_TITLE"*/, 0LL);
      if ( !v27 )
        goto LABEL_48;
      UILabel__set_text(v27, grid, 0LL);
    }
  }
  closeLabel = (UnityEngine_Object_o *)this->fields.closeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  grid = (System_String_o *)UnityEngine_Object__op_Inequality(closeLabel, 0LL, 0LL);
  if ( ((unsigned __int8)grid & 1) != 0 )
  {
    v29 = this->fields.closeLabel;
    if ( !v29 )
      goto LABEL_48;
    if ( System_String__IsNullOrEmpty(v29->fields.mText, 0LL) )
    {
      v30 = this->fields.closeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      grid = LocalizationManager__Get((System_String_o *)StringLiteral_3495/*"CHRONOLOGY_DIALOG_CLOSE"*/, 0LL);
      if ( v30 )
      {
        UILabel__set_text(v30, grid, 0LL);
        goto LABEL_22;
      }
LABEL_48:
      sub_1BCAA3C(grid, v25);
    }
  }
LABEL_22:
  failySprite = (UnityEngine_Object_o *)this->fields.failySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(failySprite, 0LL, 0LL) )
  {
    v33 = this->fields.failySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32);
    AtlasManager__SetEventUI(v33, (System_String_o *)StringLiteral_18149/*"chronology_line"*/, 0LL);
  }
  queenSprite = (UnityEngine_Object_o *)this->fields.queenSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  if ( UnityEngine_Object__op_Inequality(queenSprite, 0LL, 0LL) )
  {
    v35 = this->fields.queenSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
    AtlasManager__SetEventUI(v35, (System_String_o *)StringLiteral_18149/*"chronology_line"*/, 0LL);
  }
  grid = (System_String_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_48;
  v36 = 0;
  while ( 1 )
  {
    grid = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)grid, 0LL);
    if ( !grid )
      goto LABEL_48;
    if ( v36 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)grid, 0LL) )
      break;
    grid = (System_String_o *)this->fields.grid;
    if ( grid )
    {
      grid = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)grid, 0LL);
      if ( grid )
      {
        grid = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)grid, v36, 0LL);
        if ( grid )
        {
          grid = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grid, 0LL);
          if ( grid )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)grid,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
            grid = (System_String_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
            if ( ((unsigned __int8)grid & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_48;
              v40 = this->fields.queenSprite;
              EventInfoChronologyComponent__SetSprite(
                (EventInfoChronologyComponent_o *)grid,
                v40,
                (UISprite_o *)Component_object[3].monitor,
                v39);
              EventInfoChronologyComponent__SetSprite(v41, v40, (UISprite_o *)Component_object[4].klass, v42);
            }
            grid = (System_String_o *)this->fields.grid;
            ++v36;
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


void __fastcall EventInfoChronologyDialog__Layout(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *grid; // x0
  int32_t v9; // w20
  float v10; // s8
  UnityEngine_Component_o *v11; // x21
  __int64 v12; // x1
  Il2CppObject *Component_object; // x22
  Il2CppObject *v14; // x22
  float gridSpace; // s10
  UnityEngine_GameObject_o *v16; // x21
  float v17; // s10
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B169E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B169E0 = 1;
  }
  grid = this->fields.grid;
  if ( !grid )
LABEL_22:
    sub_1BCAA3C(grid, method);
  v9 = 0;
  v10 = 0.5;
  while ( 1 )
  {
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0LL);
    if ( !grid )
      goto LABEL_22;
    if ( v9 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)grid, 0LL) )
      break;
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_22;
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0LL);
    if ( !grid )
      goto LABEL_22;
    grid = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)grid, v9, 0LL);
    if ( !grid )
      goto LABEL_22;
    v11 = (UnityEngine_Component_o *)grid;
    grid = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grid, 0LL);
    if ( !grid )
      goto LABEL_22;
    if ( UnityEngine_GameObject__get_activeSelf(grid, 0LL) )
    {
      grid = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !grid )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           grid,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      grid = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
      if ( ((unsigned __int8)grid & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_22;
        EventInfoChronologyComponent__Refresh((EventInfoChronologyComponent_o *)Component_object, method);
      }
      grid = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !grid )
        goto LABEL_22;
      v14 = UnityEngine_GameObject__GetComponent_object_(
              grid,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      grid = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !v14 )
        goto LABEL_22;
      gridSpace = this->fields.gridSpace;
      v16 = grid;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v14, 0LL);
      GameObjectExtensions__SetLocalPositionY(v16, (float)(v10 - gridSpace) + (float)(size.fields.y * -0.5), 0LL);
      v17 = this->fields.gridSpace;
      v19 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v14, 0LL);
      v10 = v10 - (float)(v17 + v19.fields.y);
    }
    grid = this->fields.grid;
    ++v9;
    if ( !grid )
      goto LABEL_22;
  }
}


void __fastcall EventInfoChronologyDialog__OnClickCloseButton(
        EventInfoChronologyDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B169DD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoChronologyDialog_OnClickCloseButton__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__, v6, v7);
    byte_4B169DD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v8 = Method_EventInfoChronologyDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoChronologyDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventInfoChronologyDialog_OnClickCloseButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall EventInfoChronologyDialog__Open(
        EventInfoChronologyDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  EventInfoChronologyDialog_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x20

  if ( (byte_4B169DC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, closeAction, method);
    sub_1BCA7E0(&Method_EventInfoChronologyDialog__Open_b__16_0__, v5, v6);
    byte_4B169DC = 1;
  }
  EventInfoChronologyDialog__Init(this, (const MethodInfo *)closeAction);
  this->fields.state = 1;
  this->fields.closeAction = closeAction;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, (int64_t)closeAction, v7, v8, v9, v10, v11, v12);
  EventInfoChronologyDialog__SetTitleInfoTouchEnable(v13, 0, v14);
  EventInfoChronologyDialog__Layout(this, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v17);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
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
  __int64 v5; // x2
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  TitleInfoControl_o *v10; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4B169DE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B169DE = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, enable, method);
    byte_4B10F83 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
      byte_4B10F83 = 1;
    }
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v10->fields.mEventBgTexture->klass;
    if ( !klass || (v10 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1BCAA3C(v10, v8);
    TitleInfoControl__SetTouchEnable(v10, enable, 0LL);
  }
}


void __fastcall EventInfoChronologyDialog___OnClickCloseButton_b__17_0(
        EventInfoChronologyDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Action_o *v4; // x0
  PartyOrganizationUtility_o *p_closeAction; // x19
  struct System_Action_o *closeAction; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  EventInfoChronologyDialog__SetTitleInfoTouchEnable(this, 1, v2);
  closeAction = this->fields.closeAction;
  p_closeAction = (PartyOrganizationUtility_o *)&this->fields.closeAction;
  v4 = closeAction;
  if ( closeAction )
  {
    ActionExtensions__Call(v4, 0LL);
    p_closeAction->klass = 0LL;
    sub_1BCA784(p_closeAction, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B169DF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B169DF = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}