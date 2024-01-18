void __fastcall UserNameEntryComponent___ctor(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UserNameEntryComponent__OnCenterOnChildFinished(
        UserNameEntryComponent_o *this,
        const MethodInfo *method)
{
  UserNameEntryComponent_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct GenderSelectControl_o *genderSel; // x8

  v2 = this;
  if ( (byte_4187068 & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_B2C35C(
                                         &Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___,
                                         method);
    byte_4187068 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (UserNameEntryComponent_o *)centerChild->fields.mCenteredObject) == 0LL
    || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)this,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___),
        v2->fields.genderSel = (struct GenderSelectControl_o *)Component_srcLineSprite,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields.genderSel,
          Component_srcLineSprite,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (genderSel = v2->fields.genderSel) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  v2->fields.genderType = (int32_t)genderSel->fields.genderImg;
}


void __fastcall UserNameEntryComponent__Update(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float v4; // s0
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL )
  {
    sub_B2C434(scrollView, method);
  }
  LODWORD(v4) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL);
  if ( (UnityEngine_Mathf__RoundToInt(fabsf(v4) / (float)this->fields.cellWidth, 0LL) & 1) != 0 )
    v6 = 1;
  else
    v6 = 2;
  UserNameEntryComponent__setCmdSpellImg(this, v6, v5);
}


void __fastcall UserNameEntryComponent___callbackUserNameChange_b__33_0(
        UserNameEntryComponent_o *this,
        const MethodInfo *method)
{
  UserNameEntryComponent__close(this, method);
  UnityEngine_Input__set_imeCompositionMode(0, 0LL);
  ActionExtensions__Call(this->fields.mClosedAct, 0LL);
}


void __fastcall UserNameEntryComponent__callbackUserNameChange(
        UserNameEntryComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v14; // x20
  NetworkManager_o *Instance; // x0
  CommonUI_o *v16; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_4187067 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__, v8);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4187067 = 1;
  }
  v11 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL);
  if ( v11 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)v11);
    if ( SelfUserGame )
    {
      v14 = SelfUserGame;
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      NetworkManager__SetSignup(Instance, v14->fields.name, v14->fields.genderType, 0LL);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      NetworkManager__WriteSignup(Instance, 0LL);
    }
    v16 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v17 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
    v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)this,
      Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__,
      0LL);
    if ( v16 )
    {
      CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v19, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(Instance, v12);
  }
  Instance = (NetworkManager_o *)this->fields.mInput;
  if ( !Instance )
    goto LABEL_16;
  UIInput__set_value((UIInput_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = (NetworkManager_o *)this->fields.entryNameInput;
  if ( !Instance )
    goto LABEL_16;
  UILineInput__SetInputEnable((UILineInput_o *)Instance, 1, 0LL);
}


void __fastcall UserNameEntryComponent__close(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UserNameEntryComponent_o *v8; // x19
  BattleServantConfConponent_c *klass; // x8
  BattleServantConfConponent_o *p_masterFigureList; // x19
  struct UIMasterFullFigureTexture_array *masterFigureList; // t1
  __int64 v12; // x21
  int namespaze; // w9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v15; // x0

  v8 = this;
  if ( (byte_4187060 & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187060 = 1;
  }
  masterFigureList = v8->fields.masterFigureList;
  p_masterFigureList = (BattleServantConfConponent_o *)&v8->fields.masterFigureList;
  klass = (BattleServantConfConponent_c *)masterFigureList;
  if ( masterFigureList )
  {
    v12 = 0LL;
    while ( 1 )
    {
      namespaze = (int)klass->_1.namespaze;
      if ( (int)v12 >= namespaze )
        break;
      if ( (unsigned int)v12 >= namespaze )
      {
        v15 = sub_B2C460(this);
        sub_B2C400(v15, 0LL);
      }
      this = (UserNameEntryComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v12);
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
        klass = p_masterFigureList->klass;
        ++v12;
        if ( p_masterFigureList->klass )
          continue;
      }
      sub_B2C434(this, method);
    }
    p_masterFigureList->klass = 0LL;
    sub_B2C2F8(p_masterFigureList, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__endConfirm(UserNameEntryComponent_o *this, bool res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4187065 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, res);
    byte_4187065 = 1;
  }
  if ( res )
    UserNameEntryComponent__requestUserNameChange(this, (const MethodInfo *)res);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


int32_t __fastcall UserNameEntryComponent__getGendetType(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  return this->fields.genderType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__onChangeInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v7; // x0
  int32_t v8; // w21
  uint16_t Chars; // w0
  bool IsNullOrEmpty; // w20
  int v11; // s0
  System_String_o *v15; // x0

  if ( (byte_4187062 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4187062 = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_24;
  Text = UILineInput__GetText(entryNameInput, 0LL);
  entryNameInput = (UILineInput_o *)System_String__IsNullOrEmpty(Text, 0LL);
  if ( ((unsigned __int8)entryNameInput & 1) != 0 )
    goto LABEL_12;
  if ( !Text )
    goto LABEL_24;
  v7 = System_String__Trim_44292864(Text, 0LL);
  if ( System_String__op_Equality(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_12;
  if ( Text->fields.m_stringLength >= 1 )
  {
    v8 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v8, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        goto LABEL_12;
    }
    while ( ++v8 < Text->fields.m_stringLength );
  }
  if ( (System_String__IndexOf_44377880(Text, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    entryNameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0LL);
    if ( entryNameInput )
    {
      v15 = System_String__Trim_44292864((System_String_o *)entryNameInput, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v15, 0LL);
      goto LABEL_13;
    }
LABEL_24:
    sub_B2C434(entryNameInput, method);
  }
LABEL_12:
  IsNullOrEmpty = 1;
LABEL_13:
  entryNameInput = (UILineInput_o *)this->fields.confirmBtn;
  if ( !entryNameInput )
    goto LABEL_24;
  ((void (__fastcall *)(UILineInput_o *, bool, void *))entryNameInput->klass[1]._1.namespaze)(
    entryNameInput,
    !IsNullOrEmpty,
    entryNameInput->klass[1]._1.byval_arg.data);
  *(UnityEngine_Color_o *)&v11 = IsNullOrEmpty ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  entryNameInput = (UILineInput_o *)this->fields.confirmTxt;
  if ( !entryNameInput )
    goto LABEL_24;
  UIWidget__set_color((UIWidget_o *)entryNameInput, *(UnityEngine_Color_o *)&v11, 0LL);
}


void __fastcall UserNameEntryComponent__onClickInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4187063 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187063 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  UserNameEntryComponent__openConfirm(this, v3);
}


void __fastcall UserNameEntryComponent__open(
        UserNameEntryComponent_o *this,
        System_Action_o *closed_act,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  struct UIInput_o *mInput; // x20
  UIInput_OnValidate_o *v30; // x21
  __int64 entryNameInput; // x0
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UILabel_o *mInfoLabelMain; // x20
  UILabel_o *mInfoLabelSub; // x20
  UILabel_o *mInfoLabelInput; // x20
  UILabel_o *mInfoLabelFlick; // x20
  UnityEngine_Object_o *mScrollArrowRight; // x21
  struct UnityEngine_GameObject_o *mArrowRightPrefab; // x21
  UnityEngine_GameObject_o *v45; // x21
  struct ScrollArrowComponent_o *Component_srcLineSprite; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_Object_o *mScrollArrowLeft; // x21
  const MethodInfo *v54; // x1
  struct UnityEngine_GameObject_o *mArrowLeftPrefab; // x21
  UnityEngine_GameObject_o *v56; // x21
  struct ScrollArrowComponent_o *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct UnityEngine_GameObject_array *masterFigureBaseList; // x8
  struct UIMasterFullFigureTexture_array *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct UnityEngine_GameObject_array *v72; // x8
  unsigned __int64 v73; // x22
  __int64 v74; // x23
  unsigned __int64 max_length; // x9
  struct UIMasterFullFigureTexture_array *masterFigureList; // x25
  int32_t v77; // w2
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x21
  __int64 v85; // x20
  CommandSpellIconComponent_o *cmdSpellIconFemale; // x21
  __int64 v87; // x22
  __int64 v88; // x23
  CommandSpellIconComponent_o *cmdSpellIconMale; // x21
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v91; // x8
  float DEFAULT_FADE_TIME; // s8
  struct UserNameEntryComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__25_0; // x20
  Il2CppObject *v95; // x21
  struct UserNameEntryComponent___c_StaticFields *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  __int64 v103; // x0
  __int64 v104; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  UnityEngine_Vector2_o v106; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v107; // 0:s0.4,4:s1.4

  if ( (byte_418705F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, closed_act);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EquipMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_EmojiUtility_ValidateNameText__, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&UIInput_OnValidate_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B2C35C(&Method_UserNameEntryComponent___c__open_b__25_0__, v22);
    sub_B2C35C(&UserNameEntryComponent___c_TypeInfo, v23);
    sub_B2C35C(&UIMasterFullFigureTexture___TypeInfo, v24);
    sub_B2C35C(&StringLiteral_7301/*"INPUT_NAME_INFO"*/, v25);
    sub_B2C35C(&StringLiteral_7300/*"INPUT_NAME_ANNOUNCE"*/, v26);
    sub_B2C35C(&StringLiteral_11626/*"SELECT_FIGURE_INFO"*/, v27);
    sub_B2C35C(&StringLiteral_7302/*"INPUT_NAME_LIMIT_NUM"*/, v28);
    byte_418705F = 1;
  }
  this->fields.mClosedAct = closed_act;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mClosedAct,
    (System_Int32_array **)closed_act,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  mInput = this->fields.mInput;
  v30 = (UIInput_OnValidate_o *)sub_B2C42C(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v30, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !mInput )
    goto LABEL_44;
  mInput->fields.onValidate = v30;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&mInput->fields.onValidate,
    (System_Int32_array **)v30,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  mInfoLabelMain = this->fields.mInfoLabelMain;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7300/*"INPUT_NAME_ANNOUNCE"*/, 0LL);
  if ( !mInfoLabelMain )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelMain, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelSub = this->fields.mInfoLabelSub;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7301/*"INPUT_NAME_INFO"*/, 0LL);
  if ( !mInfoLabelSub )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelSub, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelInput = this->fields.mInfoLabelInput;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7302/*"INPUT_NAME_LIMIT_NUM"*/, 0LL);
  if ( !mInfoLabelInput )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelInput, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelFlick = this->fields.mInfoLabelFlick;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11626/*"SELECT_FIGURE_INFO"*/, 0LL);
  if ( !mInfoLabelFlick )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelFlick, (System_String_o *)entryNameInput, 0LL);
  mScrollArrowRight = (UnityEngine_Object_o *)this->fields.mScrollArrowRight;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mScrollArrowRight, 0LL, 0LL) )
  {
    mArrowRightPrefab = this->fields.mArrowRightPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v45 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mArrowRightPrefab,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_31331952(v45, this->fields.mArrowRightRoot, 0LL);
    if ( !v45 )
      goto LABEL_44;
    Component_srcLineSprite = (struct ScrollArrowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v45,
                                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowRight = Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mScrollArrowRight,
      (System_Int32_array **)Component_srcLineSprite,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  mScrollArrowLeft = (UnityEngine_Object_o *)this->fields.mScrollArrowLeft;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mScrollArrowLeft, 0LL, 0LL) )
  {
    mArrowLeftPrefab = this->fields.mArrowLeftPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v56 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mArrowLeftPrefab,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_31331952(v56, this->fields.mArrowLeftRoot, 0LL);
    if ( !v56 )
      goto LABEL_44;
    v57 = (struct ScrollArrowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v56,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowLeft = v57;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mScrollArrowLeft,
      (System_Int32_array **)v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  UserNameEntryComponent__setEntry(this, v54);
  entryNameInput = (__int64)this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_44;
  UILineInput__SetInputEnable((UILineInput_o *)entryNameInput, 1, 0LL);
  if ( !this->fields.masterFigureList )
  {
    masterFigureBaseList = this->fields.masterFigureBaseList;
    if ( !masterFigureBaseList )
      goto LABEL_44;
    v65 = (struct UIMasterFullFigureTexture_array *)sub_B2C374(
                                                      UIMasterFullFigureTexture___TypeInfo,
                                                      masterFigureBaseList->max_length);
    this->fields.masterFigureList = v65;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.masterFigureList,
      (System_Int32_array **)v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
    v72 = this->fields.masterFigureBaseList;
    if ( !v72 )
      goto LABEL_44;
    v73 = 0LL;
    v74 = 32LL;
    while ( 1 )
    {
      max_length = v72->max_length;
      if ( (__int64)v73 >= (int)max_length )
        break;
      if ( v73 >= max_length )
        goto LABEL_68;
      masterFigureList = this->fields.masterFigureList;
      if ( (v73 & 1) != 0 )
        v77 = 1;
      else
        v77 = 2;
      entryNameInput = (__int64)MasterFullFigureManager__CreatePrefab_21059532(
                                  v72->m_Items[v73],
                                  0,
                                  v77,
                                  0,
                                  1,
                                  0LL,
                                  0LL);
      if ( masterFigureList )
      {
        v84 = (System_Int32_array **)entryNameInput;
        if ( entryNameInput )
        {
          entryNameInput = sub_B2C41C(entryNameInput, masterFigureList->obj.klass->_1.element_class);
          if ( !entryNameInput )
          {
            v104 = sub_B2C454();
            sub_B2C400(v104, 0LL);
          }
        }
        if ( v73 >= masterFigureList->max_length )
        {
LABEL_68:
          v103 = sub_B2C460(entryNameInput);
          sub_B2C400(v103, 0LL);
        }
        *(Il2CppClass **)((char *)&masterFigureList->obj.klass + v74) = (Il2CppClass *)v84;
        sub_B2C2F8((BattleServantConfConponent_o *)((char *)masterFigureList + v74), v84, v78, v79, v80, v81, v82, v83);
        v72 = this->fields.masterFigureBaseList;
        ++v73;
        v74 += 8LL;
        if ( v72 )
          continue;
      }
      goto LABEL_44;
    }
  }
  UserNameEntryComponent__onChangeInput(this, v32);
  entryNameInput = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_44;
  entryNameInput = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)entryNameInput,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !entryNameInput )
    goto LABEL_44;
  entryNameInput = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)entryNameInput,
                              1,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !entryNameInput )
    goto LABEL_44;
  v85 = entryNameInput;
  cmdSpellIconFemale = this->fields.cmdSpellIconFemale;
  v88 = *(_QWORD *)(entryNameInput + 120);
  v87 = *(_QWORD *)(entryNameInput + 128);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v105.fields.currentCryptoKey = v88;
  *(_QWORD *)&v105.fields.fakeValue = v87;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v105, 0LL);
  if ( !cmdSpellIconFemale )
    goto LABEL_44;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconFemale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconFemale;
  if ( !entryNameInput )
    goto LABEL_44;
  v106.fields.x = 120.0;
  v106.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v106, 0LL);
  cmdSpellIconMale = this->fields.cmdSpellIconMale;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v85 + 104),
                     0LL);
  if ( !cmdSpellIconMale )
    goto LABEL_44;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconMale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconMale;
  if ( !entryNameInput )
    goto LABEL_44;
  v107.fields.x = 120.0;
  v107.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v107, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v91 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v91 = AvalonSceneManager_TypeInfo;
  }
  entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v91->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(UserNameEntryComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserNameEntryComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserNameEntryComponent___c_TypeInfo);
    entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  }
  static_fields = *(struct UserNameEntryComponent___c_StaticFields **)(entryNameInput + 184);
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (*(_BYTE *)(entryNameInput + 307) & 4) != 0 && !*(_DWORD *)(entryNameInput + 224) )
    {
      j_il2cpp_runtime_class_init_0(entryNameInput);
      static_fields = UserNameEntryComponent___c_TypeInfo->static_fields;
    }
    v95 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v95, Method_UserNameEntryComponent___c__open_b__25_0__, 0LL);
    v96 = UserNameEntryComponent___c_TypeInfo->static_fields;
    v96->__9__25_0 = _9__25_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v96->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
  }
  if ( !Instance )
LABEL_44:
    sub_B2C434(entryNameInput, v32);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__25_0, 0LL);
}


void __fastcall UserNameEntryComponent__openConfirm(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  Il2CppObject *v12; // x20
  __int64 *v13; // x8
  Il2CppObject *v14; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v18; // x22
  CommonConfirmDialog_ClickDelegate_o *v19; // x23

  if ( (byte_4187064 & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_UserNameEntryComponent_endConfirm__, v5);
    sub_B2C35C(&StringLiteral_5510/*"ENTRY_GENDER_MAN"*/, v6);
    sub_B2C35C(&StringLiteral_3334/*"CONFIRM_TITLE_MESSAGE"*/, v7);
    sub_B2C35C(&StringLiteral_3325/*"CONFIRM_INFO_MESSAGE"*/, v8);
    sub_B2C35C(&StringLiteral_5511/*"ENTRY_GENDER_WOMAN"*/, v9);
    byte_4187064 = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_21;
  Text = UILineInput__GetText(entryNameInput, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = (Il2CppObject *)LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  if ( this->fields.genderType == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_5510/*"ENTRY_GENDER_MAN"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_5511/*"ENTRY_GENDER_WOMAN"*/;
  }
  v14 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v13, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3325/*"CONFIRM_INFO_MESSAGE"*/, 0LL);
  v16 = System_String__Format_44301068(v15, v14, v12, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3334/*"CONFIRM_TITLE_MESSAGE"*/, 0LL);
  v19 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v19, (Il2CppObject *)this, Method_UserNameEntryComponent_endConfirm__, 0LL);
  if ( !Instance )
LABEL_21:
    sub_B2C434(entryNameInput, method);
  CommonUI__OpenConfirmDialog(Instance, v18, v16, v19, 0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__requestUserNameChange(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  __int64 v13; // x1
  System_String_o *v14; // x20
  ManagerConfig_c *v15; // x8
  const MethodInfo *v16; // x2
  NetworkManager_c *v17; // x0
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x4
  UIWidget_o *confirmTxt; // x20
  int v21; // s0

  if ( (byte_4187066 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&ManagerConfig_TypeInfo, v3);
    sub_B2C35C(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v7);
    sub_B2C35C(&Method_UserNameEntryComponent_callbackUserNameChange__, v8);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4187066 = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_32;
  Text = UILineInput__GetText(entryNameInput, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  v15 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( !v15->static_fields->UseMock )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( !byte_4184A9C )
    {
      sub_B2C35C(&NetworkManager_TypeInfo, v13);
      byte_4184A9C = 1;
    }
    v17 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v17 = NetworkManager_TypeInfo;
    }
    if ( v17->static_fields->isLogin )
    {
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_UserNameEntryComponent_callbackUserNameChange__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      entryNameInput = (UILineInput_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v18,
                                          (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
      if ( entryNameInput )
      {
        UserNameChangeRequest__beginRequest(
          (UserNameChangeRequest_o *)entryNameInput,
          v14,
          this->fields.genderType,
          (System_String_o *)StringLiteral_1/*""*/,
          v19);
        goto LABEL_28;
      }
LABEL_32:
      sub_B2C434(entryNameInput, method);
    }
  }
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_32;
  NetworkManager__SetSignup((NetworkManager_o *)entryNameInput, v14, this->fields.genderType, 0LL);
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_32;
  NetworkManager__WriteSignup((NetworkManager_o *)entryNameInput, 0LL);
  UserNameEntryComponent__callbackUserNameChange(this, (System_String_o *)StringLiteral_21218/*"ok"*/, v16);
LABEL_28:
  entryNameInput = (UILineInput_o *)this->fields.confirmBtn;
  if ( !entryNameInput )
    goto LABEL_32;
  ((void (__fastcall *)(UILineInput_o *, _QWORD, void *))entryNameInput->klass[1]._1.namespaze)(
    entryNameInput,
    0LL,
    entryNameInput->klass[1]._1.byval_arg.data);
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
  if ( !confirmTxt )
    goto LABEL_32;
  UIWidget__set_color(confirmTxt, *(UnityEngine_Color_o *)&v21, 0LL);
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_32;
  UILineInput__SetInputEnable(entryNameInput, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__setCmdSpellImg(
        UserNameEntryComponent_o *this,
        int32_t gtype,
        const MethodInfo *method)
{
  UnityEngine_Component_o *cmdSpellIconFemale; // x0
  bool v6; // w1

  if ( this->fields.genderType != gtype )
  {
    cmdSpellIconFemale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale;
    this->fields.genderType = gtype;
    if ( cmdSpellIconFemale )
    {
      cmdSpellIconFemale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconFemale, 0LL);
      if ( cmdSpellIconFemale )
      {
        if ( gtype == 2 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconFemale, 1, 0LL);
          cmdSpellIconFemale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
          if ( cmdSpellIconFemale )
          {
            cmdSpellIconFemale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              cmdSpellIconFemale,
                                                              0LL);
            if ( cmdSpellIconFemale )
            {
              v6 = 0;
LABEL_11:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconFemale, v6, 0LL);
              return;
            }
          }
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconFemale, 0, 0LL);
          cmdSpellIconFemale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
          if ( cmdSpellIconFemale )
          {
            cmdSpellIconFemale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              cmdSpellIconFemale,
                                                              0LL);
            if ( cmdSpellIconFemale )
            {
              v6 = 1;
              goto LABEL_11;
            }
          }
        }
      }
    }
    sub_B2C434(cmdSpellIconFemale, *(_QWORD *)&gtype);
  }
}


void __fastcall UserNameEntryComponent__setEntry(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UserNameEntryComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UIWrapContent_o *loopCtr; // x8
  __int64 *p_centerChild; // x20
  UnityEngine_Object_o *centerChild; // x21
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x20
  BattleServantConfConponent_o *v18; // x20
  System_Delegate_o *v19; // t1
  SpringPanel_OnFinished_o *v20; // x22
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t childCount; // w0
  int32_t v29; // w20
  int32_t v30; // w21
  struct GenderSelectControl_o **p_genderSel; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UserNameEntryComponent_o *v39; // x0
  const MethodInfo *v40; // x1

  v2 = this;
  if ( (byte_4187061 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&SpringPanel_OnFinished_TypeInfo, v5);
    this = (UserNameEntryComponent_o *)sub_B2C35C(&Method_UserNameEntryComponent_OnCenterOnChildFinished__, v6);
    byte_4187061 = 1;
  }
  loopCtr = v2->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_25;
  p_centerChild = (__int64 *)&v2->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)v2->fields.centerChild;
  v2->fields.cellWidth = *(_DWORD *)&loopCtr->fields.cullContent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (UserNameEntryComponent_o *)UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
    if ( !this )
      goto LABEL_25;
    this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_25;
    v10 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   (UnityEngine_GameObject_o *)this,
                                   (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (__int64)v10;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.centerChild, v10, v11, v12, v13, v14, v15, v16);
  }
  v17 = *p_centerChild;
  if ( !v17 )
    goto LABEL_25;
  v19 = *(System_Delegate_o **)(v17 + 32);
  v18 = (BattleServantConfConponent_o *)(v17 + 32);
  v20 = (SpringPanel_OnFinished_o *)sub_B2C42C(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v20, (Il2CppObject *)v2, Method_UserNameEntryComponent_OnCenterOnChildFinished__, 0LL);
  v21 = (System_Int32_array **)System_Delegate__Combine(v19, (System_Delegate_o *)v20, 0LL);
  if ( v21 && *v21 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
  {
    v39 = (UserNameEntryComponent_o *)sub_B2C728(v21);
    UserNameEntryComponent__onChangeInput(v39, v40);
  }
  else
  {
    v18->klass = (BattleServantConfConponent_c *)v21;
    sub_B2C2F8(v18, v21, v22, v23, v24, v25, v26, v27);
    this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
    if ( !this )
      goto LABEL_25;
    this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_25;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
    if ( childCount >= 1 )
    {
      v29 = childCount;
      v30 = 0;
      p_genderSel = &v2->fields.genderSel;
      while ( 1 )
      {
        this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
        if ( !this )
          break;
        this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        this = (UserNameEntryComponent_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v30, 0LL);
        if ( !this )
          break;
        this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)this,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
        *p_genderSel = (struct GenderSelectControl_o *)Component_srcLineSprite;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields.genderSel,
          Component_srcLineSprite,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        if ( !*p_genderSel )
          break;
        LODWORD((*p_genderSel)[1].klass) = v30++;
        if ( v30 >= v29 )
          return;
      }
LABEL_25:
      sub_B2C434(this, method);
    }
  }
}


void __fastcall UserNameEntryComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserNameEntryComponent___c_StaticFields *static_fields; // x0

  if ( (byte_41856B2 & 1) == 0 )
  {
    sub_B2C35C(&UserNameEntryComponent___c_TypeInfo, v1);
    byte_41856B2 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserNameEntryComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserNameEntryComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserNameEntryComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall UserNameEntryComponent___c___ctor(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserNameEntryComponent___c___open_b__25_0(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  ;
}