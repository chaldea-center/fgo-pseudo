void __fastcall EventInfoChronologyDialog___ctor(EventInfoChronologyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FF041 & 1) == 0 )
  {
    sub_1B64870(&BaseDialog_TypeInfo, method);
    byte_49FF041 = 1;
  }
  this->fields.gridSpace = 3.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  int32_t v9; // w2
  int32_t v10; // w3
  UILabel_o *titleLabel; // x20
  System_String_o *queenSprite; // x0
  __int64 v13; // x1
  UILabel_o *closeLabel; // x20
  UISprite_o *failySprite; // x20
  struct UISprite_o *v16; // x8
  int32_t v17; // w20
  Il2CppObject *Component_object; // x21
  const MethodInfo *v19; // x3
  UISprite_o *v20; // x22
  EventInfoChronologyComponent_o *v21; // x0
  const MethodInfo *v22; // x3

  if ( (byte_49FF03B & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, method);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___, v3);
    sub_1B64870(&LocalizationManager_TypeInfo, v4);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64870(&StringLiteral_3447/*"CHRONOLOGY_DIALOG_TITLE"*/, v6);
    sub_1B64870(&StringLiteral_17900/*"chronology_line"*/, v7);
    sub_1B64870(&StringLiteral_3446/*"CHRONOLOGY_DIALOG_CLOSE"*/, v8);
    byte_49FF03B = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closeAction = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v9, v10);
  if ( !this->fields.initialized )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    queenSprite = LocalizationManager__Get((System_String_o *)StringLiteral_3447/*"CHRONOLOGY_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, queenSprite, 0LL);
    closeLabel = this->fields.closeLabel;
    queenSprite = LocalizationManager__Get((System_String_o *)StringLiteral_3446/*"CHRONOLOGY_DIALOG_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_27;
    UILabel__set_text(closeLabel, queenSprite, 0LL);
    failySprite = this->fields.failySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    queenSprite = (System_String_o *)AtlasManager__SetEventUI(failySprite, (System_String_o *)StringLiteral_17900/*"chronology_line"*/, 0LL);
    v16 = this->fields.failySprite;
    if ( !v16
      || (queenSprite = (System_String_o *)this->fields.queenSprite) == 0LL
      || (UISprite__set_atlas((UISprite_o *)queenSprite, v16->fields.mAtlas, 0LL),
          (queenSprite = (System_String_o *)this->fields.queenSprite) == 0LL)
      || (UISprite__set_spriteName((UISprite_o *)queenSprite, (System_String_o *)StringLiteral_17900/*"chronology_line"*/, 0LL),
          (queenSprite = (System_String_o *)this->fields.grid) == 0LL) )
    {
LABEL_27:
      sub_1B64ACC(queenSprite, v13);
    }
    v17 = 0;
    while ( 1 )
    {
      queenSprite = (System_String_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)queenSprite,
                                         0LL);
      if ( !queenSprite )
        goto LABEL_27;
      if ( v17 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)queenSprite, 0LL) )
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
                                             v17,
                                             0LL);
          if ( queenSprite )
          {
            queenSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)queenSprite,
                                               0LL);
            if ( queenSprite )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)queenSprite,
                                   (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              queenSprite = (System_String_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
              if ( ((unsigned __int8)queenSprite & 1) != 0 )
              {
                if ( !Component_object )
                  goto LABEL_27;
                v20 = this->fields.queenSprite;
                EventInfoChronologyComponent__SetSprite(
                  (EventInfoChronologyComponent_o *)queenSprite,
                  v20,
                  (UISprite_o *)Component_object[3].monitor,
                  v19);
                EventInfoChronologyComponent__SetSprite(v21, v20, (UISprite_o *)Component_object[4].klass, v22);
              }
              queenSprite = (System_String_o *)this->fields.grid;
              ++v17;
              if ( queenSprite )
                continue;
            }
          }
        }
      }
      goto LABEL_27;
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
  Il2CppObject *Component_object; // x22
  Il2CppObject *v10; // x22
  float gridSpace; // s10
  UnityEngine_GameObject_o *v12; // x21
  float v13; // s10
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF040 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___, v3);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v4);
    byte_49FF040 = 1;
  }
  grid = this->fields.grid;
  if ( !grid )
LABEL_22:
    sub_1B64ACC(grid, method);
  v6 = 0;
  v7 = 0.5;
  while ( 1 )
  {
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0LL);
    if ( !grid )
      goto LABEL_22;
    if ( v6 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)grid, 0LL) )
      break;
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_22;
    grid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(grid, 0LL);
    if ( !grid )
      goto LABEL_22;
    grid = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)grid, v6, 0LL);
    if ( !grid )
      goto LABEL_22;
    v8 = (UnityEngine_Component_o *)grid;
    grid = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grid, 0LL);
    if ( !grid )
      goto LABEL_22;
    if ( UnityEngine_GameObject__get_activeSelf(grid, 0LL) )
    {
      grid = UnityEngine_Component__get_gameObject(v8, 0LL);
      if ( !grid )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           grid,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_EventInfoChronologyComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      grid = UnityEngine_Component__get_gameObject(v8, 0LL);
      if ( !grid )
        goto LABEL_22;
      v10 = UnityEngine_GameObject__GetComponent_object_(
              grid,
              (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      grid = UnityEngine_Component__get_gameObject(v8, 0LL);
      if ( !v10 )
        goto LABEL_22;
      gridSpace = this->fields.gridSpace;
      v12 = grid;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v10, 0LL);
      GameObjectExtensions__SetLocalPositionY(v12, (float)(v7 - gridSpace) + (float)(size.fields.y * -0.5), 0LL);
      v13 = this->fields.gridSpace;
      v15 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v10, 0LL);
      v7 = v7 - (float)(v13 + v15.fields.y);
    }
    grid = this->fields.grid;
    ++v6;
    if ( !grid )
      goto LABEL_22;
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

  if ( (byte_49FF03D & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_EventInfoChronologyDialog_OnClickCloseButton__, v3);
    sub_1B64870(&Method_EventInfoChronologyDialog__OnClickCloseButton_b__17_0__, v4);
    byte_49FF03D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_EventInfoChronologyDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoChronologyDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_EventInfoChronologyDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
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
  int32_t v6; // w2
  int32_t v7; // w3
  EventInfoChronologyDialog_o *v8; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_49FF03C & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, closeAction);
    sub_1B64870(&Method_EventInfoChronologyDialog__Open_b__16_0__, v5);
    byte_49FF03C = 1;
  }
  EventInfoChronologyDialog__Init(this, (const MethodInfo *)closeAction);
  this->fields.state = 1;
  this->fields.closeAction = closeAction;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, (int32_t)closeAction, v6, v7);
  EventInfoChronologyDialog__SetTitleInfoTouchEnable(v8, 0, v9);
  EventInfoChronologyDialog__Laytout(this, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView) == 0LL) )
  {
    sub_1B64ACC(gameObject, v12);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
  v13 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventInfoChronologyDialog__Open_b__16_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0LL);
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
  TitleInfoControl_o *v8; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_49FF03E & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, enable);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v4);
    byte_49FF03E = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, enable);
    byte_49F97AD = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v5->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F97AD )
    {
      sub_1B64870(&TerminalSceneComponent_TypeInfo, v7);
      byte_49F97AD = 1;
    }
    v8 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v8->fields.mEventRoot->klass;
    if ( !klass || (v8 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1B64ACC(v8, v7);
    TitleInfoControl__SetTouchEnable(v8, enable, 0LL);
  }
}


void __fastcall EventInfoChronologyDialog___OnClickCloseButton_b__17_0(
        EventInfoChronologyDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Action_o *v4; // x0
  ServantStatusBattleListViewItem_o *p_closeAction; // x19
  struct System_Action_o *closeAction; // t1
  int32_t v7; // w2
  int32_t v8; // w3

  EventInfoChronologyDialog__SetTitleInfoTouchEnable(this, 1, v2);
  closeAction = this->fields.closeAction;
  p_closeAction = (ServantStatusBattleListViewItem_o *)&this->fields.closeAction;
  v4 = closeAction;
  if ( closeAction )
  {
    ActionExtensions__Call(v4, 0LL);
    p_closeAction->klass = 0LL;
    sub_1B64814(p_closeAction, 0, v7, v8);
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

  if ( (byte_49FF03F & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FF03F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B64ACC(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}