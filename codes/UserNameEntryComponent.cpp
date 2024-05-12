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
  if ( (byte_4389DBA & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
    byte_4389DBA = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (UserNameEntryComponent_o *)centerChild->fields.mCenteredObject) == 0LL
    || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)this,
                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___),
        v2->fields.genderSel = (struct GenderSelectControl_o *)Component_srcLineSprite,
        sub_B77560(
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
    sub_B7769C(this, method);
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
    sub_B7769C(scrollView, method);
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
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v8; // x20
  NetworkManager_o *Instance; // x0
  CommonUI_o *v10; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4389DB9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389DB9 = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL);
  if ( v5 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)v5);
    if ( SelfUserGame )
    {
      v8 = SelfUserGame;
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      NetworkManager__SetSignup(Instance, v8->fields.name, v8->fields.genderType, 0LL);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      NetworkManager__WriteSignup(Instance, 0LL);
    }
    v10 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v13 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__,
      0LL);
    if ( v10 )
    {
      CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, v13, 0LL);
      return;
    }
LABEL_16:
    sub_B7769C(Instance, v6);
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
  if ( (byte_4389DB2 & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389DB2 = 1;
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
        v15 = sub_B776C8(this);
        sub_B77668(v15, 0LL);
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
        UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
        klass = p_masterFigureList->klass;
        ++v12;
        if ( p_masterFigureList->klass )
          continue;
      }
      sub_B7769C(this, method);
    }
    p_masterFigureList->klass = 0LL;
    sub_B77560(p_masterFigureList, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__endConfirm(UserNameEntryComponent_o *this, bool res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4389DB7 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389DB7 = 1;
  }
  if ( res )
    UserNameEntryComponent__requestUserNameChange(this, (const MethodInfo *)res);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


int32_t __fastcall UserNameEntryComponent__getGendetType(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  return this->fields.genderType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__onChangeInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v5; // x0
  int32_t v6; // w21
  uint16_t Chars; // w0
  bool IsNullOrEmpty; // w20
  int v9; // s0
  System_String_o *v13; // x0

  if ( (byte_4389DB4 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389DB4 = 1;
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
  v5 = System_String__Trim_44889268(Text, 0LL);
  if ( System_String__op_Equality(v5, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_12;
  if ( Text->fields.m_stringLength >= 1 )
  {
    v6 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v6, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        goto LABEL_12;
    }
    while ( ++v6 < Text->fields.m_stringLength );
  }
  if ( (System_String__IndexOf_44974284(Text, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    entryNameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0LL);
    if ( entryNameInput )
    {
      v13 = System_String__Trim_44889268((System_String_o *)entryNameInput, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v13, 0LL);
      goto LABEL_13;
    }
LABEL_24:
    sub_B7769C(entryNameInput, method);
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
  *(UnityEngine_Color_o *)&v9 = IsNullOrEmpty ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  entryNameInput = (UILineInput_o *)this->fields.confirmTxt;
  if ( !entryNameInput )
    goto LABEL_24;
  UIWidget__set_color((UIWidget_o *)entryNameInput, *(UnityEngine_Color_o *)&v9, 0LL);
}


void __fastcall UserNameEntryComponent__onClickInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4389DB5 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389DB5 = 1;
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
  struct UIInput_o *mInput; // x20
  UIInput_OnValidate_o *v11; // x21
  __int64 entryNameInput; // x0
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UILabel_o *mInfoLabelMain; // x20
  UILabel_o *mInfoLabelSub; // x20
  UILabel_o *mInfoLabelInput; // x20
  UILabel_o *mInfoLabelFlick; // x20
  UnityEngine_Object_o *mScrollArrowRight; // x21
  struct UnityEngine_GameObject_o *mArrowRightPrefab; // x21
  UnityEngine_GameObject_o *v26; // x21
  struct ScrollArrowComponent_o *Component_srcLineSprite; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *mScrollArrowLeft; // x21
  const MethodInfo *v35; // x1
  struct UnityEngine_GameObject_o *mArrowLeftPrefab; // x21
  UnityEngine_GameObject_o *v37; // x21
  struct ScrollArrowComponent_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UnityEngine_GameObject_array *masterFigureBaseList; // x8
  struct UIMasterFullFigureTexture_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct UnityEngine_GameObject_array *v53; // x8
  unsigned __int64 v54; // x22
  __int64 v55; // x23
  unsigned __int64 max_length; // x9
  struct UIMasterFullFigureTexture_array *masterFigureList; // x25
  int32_t v58; // w2
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x20
  CommandSpellIconComponent_o *cmdSpellIconFemale; // x21
  __int64 v68; // x22
  __int64 v69; // x23
  CommandSpellIconComponent_o *cmdSpellIconMale; // x21
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v72; // x8
  float DEFAULT_FADE_TIME; // s8
  struct UserNameEntryComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__25_0; // x20
  Il2CppObject *v76; // x21
  struct UserNameEntryComponent___c_StaticFields *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x0
  __int64 v85; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  UnityEngine_Vector2_o v87; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v88; // 0:s0.4,4:s1.4

  if ( (byte_4389DB1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B775C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_B775C4(&Method_EmojiUtility_ValidateNameText__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&UIInput_OnValidate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_UserNameEntryComponent___c__open_b__25_0__);
    sub_B775C4(&UserNameEntryComponent___c_TypeInfo);
    sub_B775C4(&UIMasterFullFigureTexture___TypeInfo);
    sub_B775C4(&StringLiteral_7454/*"INPUT_NAME_INFO"*/);
    sub_B775C4(&StringLiteral_7453/*"INPUT_NAME_ANNOUNCE"*/);
    sub_B775C4(&StringLiteral_11844/*"SELECT_FIGURE_INFO"*/);
    sub_B775C4(&StringLiteral_7455/*"INPUT_NAME_LIMIT_NUM"*/);
    byte_4389DB1 = 1;
  }
  this->fields.mClosedAct = closed_act;
  sub_B77560(
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
  v11 = (UIInput_OnValidate_o *)sub_B77694(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v11, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !mInput )
    goto LABEL_44;
  mInput->fields.onValidate = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&mInput->fields.onValidate,
    (System_Int32_array **)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  mInfoLabelMain = this->fields.mInfoLabelMain;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7453/*"INPUT_NAME_ANNOUNCE"*/, 0LL);
  if ( !mInfoLabelMain )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelMain, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelSub = this->fields.mInfoLabelSub;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7454/*"INPUT_NAME_INFO"*/, 0LL);
  if ( !mInfoLabelSub )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelSub, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelInput = this->fields.mInfoLabelInput;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7455/*"INPUT_NAME_LIMIT_NUM"*/, 0LL);
  if ( !mInfoLabelInput )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelInput, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelFlick = this->fields.mInfoLabelFlick;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SELECT_FIGURE_INFO"*/, 0LL);
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
    v26 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mArrowRightPrefab,
                                        (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_32813688(v26, this->fields.mArrowRightRoot, 0LL);
    if ( !v26 )
      goto LABEL_44;
    Component_srcLineSprite = (struct ScrollArrowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v26,
                                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowRight = Component_srcLineSprite;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.mScrollArrowRight,
      (System_Int32_array **)Component_srcLineSprite,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
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
    v37 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mArrowLeftPrefab,
                                        (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_32813688(v37, this->fields.mArrowLeftRoot, 0LL);
    if ( !v37 )
      goto LABEL_44;
    v38 = (struct ScrollArrowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v37,
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowLeft = v38;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.mScrollArrowLeft,
      (System_Int32_array **)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  UserNameEntryComponent__setEntry(this, v35);
  entryNameInput = (__int64)this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_44;
  UILineInput__SetInputEnable((UILineInput_o *)entryNameInput, 1, 0LL);
  if ( !this->fields.masterFigureList )
  {
    masterFigureBaseList = this->fields.masterFigureBaseList;
    if ( !masterFigureBaseList )
      goto LABEL_44;
    v46 = (struct UIMasterFullFigureTexture_array *)sub_B775DC(
                                                      UIMasterFullFigureTexture___TypeInfo,
                                                      masterFigureBaseList->max_length);
    this->fields.masterFigureList = v46;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.masterFigureList,
      (System_Int32_array **)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    v53 = this->fields.masterFigureBaseList;
    if ( !v53 )
      goto LABEL_44;
    v54 = 0LL;
    v55 = 32LL;
    while ( 1 )
    {
      max_length = v53->max_length;
      if ( (__int64)v54 >= (int)max_length )
        break;
      if ( v54 >= max_length )
        goto LABEL_68;
      masterFigureList = this->fields.masterFigureList;
      if ( (v54 & 1) != 0 )
        v58 = 1;
      else
        v58 = 2;
      entryNameInput = (__int64)MasterFullFigureManager__CreatePrefab_26291964(
                                  v53->m_Items[v54],
                                  0,
                                  v58,
                                  0,
                                  1,
                                  0LL,
                                  0LL);
      if ( masterFigureList )
      {
        v65 = (System_Int32_array **)entryNameInput;
        if ( entryNameInput )
        {
          entryNameInput = sub_B77684(entryNameInput, masterFigureList->obj.klass->_1.element_class);
          if ( !entryNameInput )
          {
            v85 = sub_B776BC();
            sub_B77668(v85, 0LL);
          }
        }
        if ( v54 >= masterFigureList->max_length )
        {
LABEL_68:
          v84 = sub_B776C8(entryNameInput);
          sub_B77668(v84, 0LL);
        }
        *(Il2CppClass **)((char *)&masterFigureList->obj.klass + v55) = (Il2CppClass *)v65;
        sub_B77560((BattleServantConfConponent_o *)((char *)masterFigureList + v55), v65, v59, v60, v61, v62, v63, v64);
        v53 = this->fields.masterFigureBaseList;
        ++v54;
        v55 += 8LL;
        if ( v53 )
          continue;
      }
      goto LABEL_44;
    }
  }
  UserNameEntryComponent__onChangeInput(this, v13);
  entryNameInput = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_44;
  entryNameInput = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)entryNameInput,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !entryNameInput )
    goto LABEL_44;
  entryNameInput = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)entryNameInput,
                              1,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !entryNameInput )
    goto LABEL_44;
  v66 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)entryNameInput;
  cmdSpellIconFemale = this->fields.cmdSpellIconFemale;
  v69 = *(_QWORD *)(entryNameInput + 128);
  v68 = *(_QWORD *)(entryNameInput + 136);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v86.fields.currentCryptoKey = v69;
  *(_QWORD *)&v86.fields.fakeValue = v68;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v86, 0LL);
  if ( !cmdSpellIconFemale )
    goto LABEL_44;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconFemale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconFemale;
  if ( !entryNameInput )
    goto LABEL_44;
  v87.fields.x = 120.0;
  v87.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v87, 0LL);
  cmdSpellIconMale = this->fields.cmdSpellIconMale;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v66[7], 0LL);
  if ( !cmdSpellIconMale )
    goto LABEL_44;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconMale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconMale;
  if ( !entryNameInput )
    goto LABEL_44;
  v88.fields.x = 120.0;
  v88.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v88, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v72 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v72 = AvalonSceneManager_TypeInfo;
  }
  entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v72->static_fields->DEFAULT_FADE_TIME;
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
    v76 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v76, Method_UserNameEntryComponent___c__open_b__25_0__, 0LL);
    v77 = UserNameEntryComponent___c_TypeInfo->static_fields;
    v77->__9__25_0 = _9__25_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v77->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
  }
  if ( !Instance )
LABEL_44:
    sub_B7769C(entryNameInput, v13);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__25_0, 0LL);
}


void __fastcall UserNameEntryComponent__openConfirm(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  Il2CppObject *v5; // x20
  __int64 *v6; // x8
  Il2CppObject *v7; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v11; // x22
  CommonConfirmDialog_ClickDelegate_o *v12; // x23

  if ( (byte_4389DB6 & 1) == 0 )
  {
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_UserNameEntryComponent_endConfirm__);
    sub_B775C4(&StringLiteral_5653/*"ENTRY_GENDER_MAN"*/);
    sub_B775C4(&StringLiteral_3460/*"CONFIRM_TITLE_MESSAGE"*/);
    sub_B775C4(&StringLiteral_3451/*"CONFIRM_INFO_MESSAGE"*/);
    sub_B775C4(&StringLiteral_5654/*"ENTRY_GENDER_WOMAN"*/);
    byte_4389DB6 = 1;
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
  v5 = (Il2CppObject *)LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  if ( this->fields.genderType == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_5653/*"ENTRY_GENDER_MAN"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_5654/*"ENTRY_GENDER_WOMAN"*/;
  }
  v7 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v6, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3451/*"CONFIRM_INFO_MESSAGE"*/, 0LL);
  v9 = System_String__Format_44897472(v8, v7, v5, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3460/*"CONFIRM_TITLE_MESSAGE"*/, 0LL);
  v12 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v12, (Il2CppObject *)this, Method_UserNameEntryComponent_endConfirm__, 0LL);
  if ( !Instance )
LABEL_21:
    sub_B7769C(entryNameInput, method);
  CommonUI__OpenConfirmDialog(Instance, v11, v9, v12, 0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__requestUserNameChange(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v5; // x20
  ManagerConfig_c *v6; // x8
  const MethodInfo *v7; // x2
  NetworkManager_c *v8; // x0
  NetworkManager_ResultCallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x4
  UIWidget_o *confirmTxt; // x20
  int v12; // s0

  if ( (byte_4389DB8 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B775C4(&Method_UserNameEntryComponent_callbackUserNameChange__);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389DB8 = 1;
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
  v5 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  v6 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( !v6->static_fields->UseMock )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( !byte_438728F )
    {
      sub_B775C4(&NetworkManager_TypeInfo);
      byte_438728F = 1;
    }
    v8 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager_TypeInfo;
    }
    if ( v8->static_fields->isLogin )
    {
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_UserNameEntryComponent_callbackUserNameChange__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      entryNameInput = (UILineInput_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v9,
                                          (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
      if ( entryNameInput )
      {
        UserNameChangeRequest__beginRequest(
          (UserNameChangeRequest_o *)entryNameInput,
          v5,
          this->fields.genderType,
          (System_String_o *)StringLiteral_1/*""*/,
          v10);
        goto LABEL_28;
      }
LABEL_32:
      sub_B7769C(entryNameInput, method);
    }
  }
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_32;
  NetworkManager__SetSignup((NetworkManager_o *)entryNameInput, v5, this->fields.genderType, 0LL);
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_32;
  NetworkManager__WriteSignup((NetworkManager_o *)entryNameInput, 0LL);
  UserNameEntryComponent__callbackUserNameChange(this, (System_String_o *)StringLiteral_21657/*"ok"*/, v7);
LABEL_28:
  entryNameInput = (UILineInput_o *)this->fields.confirmBtn;
  if ( !entryNameInput )
    goto LABEL_32;
  ((void (__fastcall *)(UILineInput_o *, _QWORD, void *))entryNameInput->klass[1]._1.namespaze)(
    entryNameInput,
    0LL,
    entryNameInput->klass[1]._1.byval_arg.data);
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
  if ( !confirmTxt )
    goto LABEL_32;
  UIWidget__set_color(confirmTxt, *(UnityEngine_Color_o *)&v12, 0LL);
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
    sub_B7769C(cmdSpellIconFemale, *(_QWORD *)&gtype);
  }
}


void __fastcall UserNameEntryComponent__setEntry(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UserNameEntryComponent_o *v2; // x19
  struct UIWrapContent_o *loopCtr; // x8
  __int64 *p_centerChild; // x20
  UnityEngine_Object_o *centerChild; // x21
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x20
  BattleServantConfConponent_o *v14; // x20
  System_Delegate_o *v15; // t1
  SpringPanel_OnFinished_o *v16; // x22
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t childCount; // w0
  int32_t v25; // w20
  int32_t v26; // w21
  struct GenderSelectControl_o **p_genderSel; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UserNameEntryComponent_o *v35; // x0
  const MethodInfo *v36; // x1

  v2 = this;
  if ( (byte_4389DB3 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SpringPanel_OnFinished_TypeInfo);
    this = (UserNameEntryComponent_o *)sub_B775C4(&Method_UserNameEntryComponent_OnCenterOnChildFinished__);
    byte_4389DB3 = 1;
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
    v6 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (__int64)v6;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields.centerChild, v6, v7, v8, v9, v10, v11, v12);
  }
  v13 = *p_centerChild;
  if ( !v13 )
    goto LABEL_25;
  v15 = *(System_Delegate_o **)(v13 + 32);
  v14 = (BattleServantConfConponent_o *)(v13 + 32);
  v16 = (SpringPanel_OnFinished_o *)sub_B77694(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v16, (Il2CppObject *)v2, Method_UserNameEntryComponent_OnCenterOnChildFinished__, 0LL);
  v17 = (System_Int32_array **)System_Delegate__Combine(v15, (System_Delegate_o *)v16, 0LL);
  if ( v17 && *v17 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
  {
    v35 = (UserNameEntryComponent_o *)sub_B77990(v17);
    UserNameEntryComponent__onChangeInput(v35, v36);
  }
  else
  {
    v14->klass = (BattleServantConfConponent_c *)v17;
    sub_B77560(v14, v17, v18, v19, v20, v21, v22, v23);
    this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
    if ( !this )
      goto LABEL_25;
    this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_25;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
    if ( childCount >= 1 )
    {
      v25 = childCount;
      v26 = 0;
      p_genderSel = &v2->fields.genderSel;
      while ( 1 )
      {
        this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
        if ( !this )
          break;
        this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        this = (UserNameEntryComponent_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v26, 0LL);
        if ( !this )
          break;
        this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)this,
                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
        *p_genderSel = (struct GenderSelectControl_o *)Component_srcLineSprite;
        sub_B77560(
          (BattleServantConfConponent_o *)&v2->fields.genderSel,
          Component_srcLineSprite,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        if ( !*p_genderSel )
          break;
        LODWORD((*p_genderSel)[1].klass) = v26++;
        if ( v26 >= v25 )
          return;
      }
LABEL_25:
      sub_B7769C(this, method);
    }
  }
}


void __fastcall UserNameEntryComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct UserNameEntryComponent___c_StaticFields *static_fields; // x0

  if ( (byte_43888F4 & 1) == 0 )
  {
    sub_B775C4(&UserNameEntryComponent___c_TypeInfo);
    byte_43888F4 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(UserNameEntryComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = UserNameEntryComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserNameEntryComponent___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall UserNameEntryComponent___c___ctor(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserNameEntryComponent___c___open_b__25_0(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  ;
}