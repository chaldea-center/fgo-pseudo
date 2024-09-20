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
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct GenderSelectControl_o *genderSel; // x8

  v2 = this;
  if ( (byte_4A59E6B & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
    byte_4A59E6B = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (UserNameEntryComponent_o *)centerChild->fields.mCenteredObject) == 0LL
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___),
        v2->fields.genderSel = (struct GenderSelectControl_o *)Component_object,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.genderSel, (int32_t)Component_object, v5, v6),
        (genderSel = v2->fields.genderSel) == 0LL) )
  {
    sub_1B8880C(this, method);
  }
  v2->fields.genderType = genderSel->fields.genderType;
}


void __fastcall UserNameEntryComponent__Update(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float v4; // s8
  float cellWidth; // s9
  float v6; // s9
  double v7; // d8
  const MethodInfo *v8; // x2
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  int32_t v14; // w1
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL )
  {
    sub_1B8880C(scrollView, method);
  }
  v4 = fabsf(COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL)));
  cellWidth = (float)this->fields.cellWidth;
  if ( !byte_4A567B3 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A567B3 = 1;
  }
  v6 = v4 / cellWidth;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = v6;
  v9 = modf(v6, &iptr);
  if ( v6 >= 0.0 )
  {
    if ( v9 != 0.5 )
    {
      v10 = floor(v7 + 0.5);
      goto LABEL_17;
    }
    v10 = iptr;
    v11 = 1.0;
  }
  else
  {
    if ( v9 != -0.5 )
    {
      v10 = ceil(v7 + -0.5);
      goto LABEL_17;
    }
    v10 = iptr;
    v11 = -1.0;
  }
  v12 = v10 + v11;
  if ( ((__int64)v10 & 1) != 0 )
    v10 = v12;
LABEL_17:
  if ( ((int)v10 & 1) == 0 || v10 == INFINITY )
    v14 = 2;
  else
    v14 = 1;
  UserNameEntryComponent__setCmdSpellImg(this, v14, v8);
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
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v7; // x20
  NetworkManager_o *Instance; // x0
  Il2CppObject *v9; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21

  if ( (byte_4A59E6A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59E6A = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v7 = SelfUserGame;
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      NetworkManager__SetSignup(Instance, v7->fields.name, v7->fields.genderType, 0LL);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      NetworkManager__WriteSignup(Instance, 0LL);
    }
    v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__,
      0LL);
    if ( v9 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v9, 1, DEFAULT_FADE_TIME, v12, 0LL);
      return;
    }
LABEL_15:
    sub_1B8880C(Instance, v5);
  }
  Instance = (NetworkManager_o *)this->fields.mInput;
  if ( !Instance )
    goto LABEL_15;
  UIInput__set_value((UIInput_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = (NetworkManager_o *)this->fields.entryNameInput;
  if ( !Instance )
    goto LABEL_15;
  UILineInput__SetInputEnable((UILineInput_o *)Instance, 1, 0LL);
}


void __fastcall UserNameEntryComponent__close(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  UserNameEntryComponent_o *v4; // x19
  ServantStatusBattleListViewItem_c *klass; // x8
  ServantStatusBattleListViewItem_o *p_masterFigureList; // x19
  struct UIMasterFullFigureTexture_array *masterFigureList; // t1
  __int64 v8; // x21
  int namespaze; // w9
  UnityEngine_Object_o *gameObject; // x20

  v4 = this;
  if ( (byte_4A59E63 & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59E63 = 1;
  }
  masterFigureList = v4->fields.masterFigureList;
  p_masterFigureList = (ServantStatusBattleListViewItem_o *)&v4->fields.masterFigureList;
  klass = (ServantStatusBattleListViewItem_c *)masterFigureList;
  if ( masterFigureList )
  {
    v8 = 0LL;
    while ( 1 )
    {
      namespaze = (int)klass->_1.namespaze;
      if ( (int)v8 >= namespaze )
        break;
      if ( (unsigned int)v8 >= namespaze )
        sub_1B88814(this, method);
      this = (UserNameEntryComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v8);
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
        klass = p_masterFigureList->klass;
        ++v8;
        if ( p_masterFigureList->klass )
          continue;
      }
      sub_1B8880C(this, method);
    }
    p_masterFigureList->klass = 0LL;
    sub_1B88554(p_masterFigureList, 0, v2, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__endConfirm(UserNameEntryComponent_o *this, bool res, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A59E68 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59E68 = 1;
  }
  if ( res )
    UserNameEntryComponent__requestUserNameChange(this, (const MethodInfo *)res);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
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
  float v9; // s0
  float v10; // s3
  float v11; // s1
  float v12; // s2
  System_String_o *v13; // x0

  if ( (byte_4A59E65 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59E65 = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_22;
  Text = UILineInput__GetText(entryNameInput, 0LL);
  entryNameInput = (UILineInput_o *)System_String__IsNullOrEmpty(Text, 0LL);
  if ( ((unsigned __int8)entryNameInput & 1) != 0 )
    goto LABEL_12;
  if ( !Text )
    goto LABEL_22;
  v5 = System_String__Trim(Text, 0LL);
  if ( System_String__op_Equality(v5, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_12;
  if ( Text->fields._stringLength >= 1 )
  {
    v6 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v6, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        goto LABEL_12;
    }
    while ( ++v6 < Text->fields._stringLength );
  }
  if ( (System_String__IndexOf_61738608(Text, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) & 0x80000000) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    entryNameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0LL);
    if ( entryNameInput )
    {
      v13 = System_String__Trim((System_String_o *)entryNameInput, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v13, 0LL);
      goto LABEL_13;
    }
LABEL_22:
    sub_1B8880C(entryNameInput, method);
  }
LABEL_12:
  IsNullOrEmpty = 1;
LABEL_13:
  entryNameInput = (UILineInput_o *)this->fields.confirmBtn;
  if ( !entryNameInput )
    goto LABEL_22;
  ((void (__fastcall *)(UILineInput_o *, bool, void *))entryNameInput->klass[1]._1.namespaze)(
    entryNameInput,
    !IsNullOrEmpty,
    entryNameInput->klass[1]._1.byval_arg.data);
  entryNameInput = (UILineInput_o *)this->fields.confirmTxt;
  v9 = 1.0;
  if ( IsNullOrEmpty )
    v9 = 0.5;
  if ( !entryNameInput )
    goto LABEL_22;
  v10 = 1.0;
  v11 = v9;
  v12 = v9;
  UIWidget__set_color((UIWidget_o *)entryNameInput, *(UnityEngine_Color_o *)&v9, 0LL);
}


void __fastcall UserNameEntryComponent__onClickInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A59E66 & 1) == 0 )
  {
    sub_1B885B0(&Method_UserNameEntryComponent_onClickInput__);
    byte_4A59E66 = 1;
  }
  v3 = Method_UserNameEntryComponent_onClickInput__;
  if ( (*((_BYTE *)Method_UserNameEntryComponent_onClickInput__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_UserNameEntryComponent_onClickInput__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  UserNameEntryComponent__openConfirm(this, v5);
}


void __fastcall UserNameEntryComponent__open(
        UserNameEntryComponent_o *this,
        System_Action_o *closed_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct UIInput_o *mInput; // x20
  UIInput_OnValidate_o *v7; // x21
  __int64 entryNameInput; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  UILabel_o *mInfoLabelMain; // x20
  UILabel_o *mInfoLabelSub; // x20
  UILabel_o *mInfoLabelInput; // x20
  UILabel_o *mInfoLabelFlick; // x20
  UnityEngine_Object_o *mScrollArrowRight; // x21
  Il2CppObject *mArrowRightPrefab; // x21
  Il2CppObject *v18; // x21
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Object_o *mScrollArrowLeft; // x21
  const MethodInfo *v23; // x1
  Il2CppObject *mArrowLeftPrefab; // x21
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v29; // x20
  CommandSpellIconComponent_o *cmdSpellIconFemale; // x21
  __int64 v31; // x22
  __int64 v32; // x23
  CommandSpellIconComponent_o *cmdSpellIconMale; // x21
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v35; // x8
  CommonUI_o *v36; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x20
  Il2CppObject *v39; // x21
  struct UserNameEntryComponent___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct UnityEngine_GameObject_array *masterFigureBaseList; // x8
  struct UIMasterFullFigureTexture_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct UnityEngine_GameObject_array *v47; // x8
  unsigned __int64 v48; // x22
  __int64 v49; // x23
  unsigned __int64 max_length; // x9
  struct UIMasterFullFigureTexture_array *masterFigureList; // x25
  int32_t v52; // w2
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppClass *v55; // x21
  __int64 v56; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  UnityEngine_Vector2_o v58; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v59; // 0:s0.4,4:s1.4

  if ( (byte_4A59E62 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1B885B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1B885B0(&Method_EmojiUtility_ValidateNameText__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UIInput_OnValidate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserNameEntryComponent___c__open_b__25_0__);
    sub_1B885B0(&UserNameEntryComponent___c_TypeInfo);
    sub_1B885B0(&UIMasterFullFigureTexture___TypeInfo);
    sub_1B885B0(&StringLiteral_7381/*"INPUT_NAME_INFO"*/);
    sub_1B885B0(&StringLiteral_7380/*"INPUT_NAME_ANNOUNCE"*/);
    sub_1B885B0(&StringLiteral_11503/*"SELECT_FIGURE_INFO"*/);
    sub_1B885B0(&StringLiteral_7382/*"INPUT_NAME_LIMIT_NUM"*/);
    byte_4A59E62 = 1;
  }
  this->fields.mClosedAct = closed_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mClosedAct, (int32_t)closed_act, (int32_t)method, v3);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  mInput = this->fields.mInput;
  v7 = (UIInput_OnValidate_o *)sub_1B887FC(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v7, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !mInput )
    goto LABEL_58;
  mInput->fields.onValidate = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&mInput->fields.onValidate, (int32_t)v7, v10, v11);
  mInfoLabelMain = this->fields.mInfoLabelMain;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7380/*"INPUT_NAME_ANNOUNCE"*/, 0LL);
  if ( !mInfoLabelMain )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelMain, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelSub = this->fields.mInfoLabelSub;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7381/*"INPUT_NAME_INFO"*/, 0LL);
  if ( !mInfoLabelSub )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelSub, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelInput = this->fields.mInfoLabelInput;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7382/*"INPUT_NAME_LIMIT_NUM"*/, 0LL);
  if ( !mInfoLabelInput )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelInput, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelFlick = this->fields.mInfoLabelFlick;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11503/*"SELECT_FIGURE_INFO"*/, 0LL);
  if ( !mInfoLabelFlick )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelFlick, (System_String_o *)entryNameInput, 0LL);
  mScrollArrowRight = (UnityEngine_Object_o *)this->fields.mScrollArrowRight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScrollArrowRight, 0LL, 0LL) )
  {
    mArrowRightPrefab = (Il2CppObject *)this->fields.mArrowRightPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object_(
            mArrowRightPrefab,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)v18, this->fields.mArrowRightRoot, 0LL);
    if ( !v18 )
      goto LABEL_58;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v18,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowRight = (struct ScrollArrowComponent_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.mScrollArrowRight,
      (int32_t)Component_object,
      v20,
      v21);
  }
  mScrollArrowLeft = (UnityEngine_Object_o *)this->fields.mScrollArrowLeft;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScrollArrowLeft, 0LL, 0LL) )
  {
    mArrowLeftPrefab = (Il2CppObject *)this->fields.mArrowLeftPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v25 = UnityEngine_Object__Instantiate_object_(
            mArrowLeftPrefab,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)v25, this->fields.mArrowLeftRoot, 0LL);
    if ( !v25 )
      goto LABEL_58;
    v26 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v25,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowLeft = (struct ScrollArrowComponent_o *)v26;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mScrollArrowLeft, (int32_t)v26, v27, v28);
  }
  UserNameEntryComponent__setEntry(this, v23);
  entryNameInput = (__int64)this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_58;
  UILineInput__SetInputEnable((UILineInput_o *)entryNameInput, 1, 0LL);
  if ( !this->fields.masterFigureList )
  {
    masterFigureBaseList = this->fields.masterFigureBaseList;
    if ( !masterFigureBaseList )
      goto LABEL_58;
    v44 = (struct UIMasterFullFigureTexture_array *)sub_1B88658(
                                                      UIMasterFullFigureTexture___TypeInfo,
                                                      masterFigureBaseList->max_length);
    this->fields.masterFigureList = v44;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.masterFigureList, (int32_t)v44, v45, v46);
    v47 = this->fields.masterFigureBaseList;
    if ( !v47 )
      goto LABEL_58;
    v48 = 0LL;
    v49 = 32LL;
    while ( 1 )
    {
      max_length = v47->max_length;
      if ( (__int64)v48 >= (int)max_length )
        break;
      if ( v48 >= max_length )
        goto LABEL_59;
      masterFigureList = this->fields.masterFigureList;
      if ( (v48 & 1) != 0 )
        v52 = 1;
      else
        v52 = 2;
      entryNameInput = (__int64)MasterFullFigureManager__CreatePrefab_37921080(
                                  v47->m_Items[v48],
                                  0,
                                  v52,
                                  0,
                                  1,
                                  0LL,
                                  0LL);
      if ( masterFigureList )
      {
        v55 = (Il2CppClass *)entryNameInput;
        if ( entryNameInput )
        {
          entryNameInput = sub_1B886EC(entryNameInput, masterFigureList->obj.klass->_1.element_class);
          if ( !entryNameInput )
          {
            v56 = sub_1B88830(0LL);
            sub_1B886D8(v56, 0LL);
          }
        }
        if ( v48 >= masterFigureList->max_length )
LABEL_59:
          sub_1B88814(entryNameInput, v9);
        *(Il2CppClass **)((char *)&masterFigureList->obj.klass + v49) = v55;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)masterFigureList + v49), (int32_t)v55, v53, v54);
        v47 = this->fields.masterFigureBaseList;
        ++v48;
        v49 += 8LL;
        if ( v47 )
          continue;
      }
      goto LABEL_58;
    }
  }
  UserNameEntryComponent__onChangeInput(this, v9);
  entryNameInput = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_58;
  entryNameInput = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)entryNameInput,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !entryNameInput )
    goto LABEL_58;
  entryNameInput = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)entryNameInput,
                              1,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !entryNameInput )
    goto LABEL_58;
  v29 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)entryNameInput;
  cmdSpellIconFemale = this->fields.cmdSpellIconFemale;
  v32 = *(_QWORD *)(entryNameInput + 128);
  v31 = *(_QWORD *)(entryNameInput + 136);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v32;
  *(_QWORD *)&v57.fields.fakeValue = v31;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v57, 0LL);
  if ( !cmdSpellIconFemale )
    goto LABEL_58;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconFemale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconFemale;
  if ( !entryNameInput )
    goto LABEL_58;
  v58.fields.x = 120.0;
  v58.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v58, 0LL);
  cmdSpellIconMale = this->fields.cmdSpellIconMale;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v29[7], 0LL);
  if ( !cmdSpellIconMale )
    goto LABEL_58;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconMale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconMale;
  if ( !entryNameInput )
    goto LABEL_58;
  v59.fields.x = 120.0;
  v59.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v59, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = AvalonSceneManager_TypeInfo;
  v36 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v35 = AvalonSceneManager_TypeInfo;
  }
  entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v35->static_fields->DEFAULT_FADE_TIME;
  if ( !UserNameEntryComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserNameEntryComponent___c_TypeInfo);
    entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  }
  v38 = *(System_Action_o **)(*(_QWORD *)(entryNameInput + 184) + 8LL);
  if ( !v38 )
  {
    if ( !*(_DWORD *)(entryNameInput + 224) )
    {
      j_il2cpp_runtime_class_init_0(entryNameInput);
      entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
    }
    v39 = **(Il2CppObject ***)(entryNameInput + 184);
    v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v38, v39, Method_UserNameEntryComponent___c__open_b__25_0__, 0LL);
    static_fields = UserNameEntryComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = v38;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__25_0, (int32_t)v38, v41, v42);
  }
  if ( !v36 )
LABEL_58:
    sub_1B8880C(entryNameInput, v9);
  CommonUI__maskFadein(v36, DEFAULT_FADE_TIME, v38, 0LL);
}


void __fastcall UserNameEntryComponent__openConfirm(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v5; // x0
  int32_t genderType; // w25
  Il2CppObject *v7; // x20
  System_String_o **v8; // x8
  Il2CppObject *v9; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v13; // x22
  CommonConfirmDialog_ClickDelegate_o *v14; // x23

  if ( (byte_4A59E67 & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserNameEntryComponent_endConfirm__);
    sub_1B885B0(&StringLiteral_5503/*"ENTRY_GENDER_MAN"*/);
    sub_1B885B0(&StringLiteral_3831/*"CONFIRM_TITLE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_3822/*"CONFIRM_INFO_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_5504/*"ENTRY_GENDER_WOMAN"*/);
    byte_4A59E67 = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_15;
  Text = UILineInput__GetText(entryNameInput, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  genderType = this->fields.genderType;
  v7 = (Il2CppObject *)v5;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = (System_String_o **)(genderType == 1 ? &StringLiteral_5503/*"ENTRY_GENDER_MAN"*/ : &StringLiteral_5504/*"ENTRY_GENDER_WOMAN"*/);
  v9 = (Il2CppObject *)LocalizationManager__Get(*v8, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"CONFIRM_INFO_MESSAGE"*/, 0LL);
  v11 = System_String__Format_61721404(v10, v9, v7, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"CONFIRM_TITLE_MESSAGE"*/, 0LL);
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_UserNameEntryComponent_endConfirm__, 0LL);
  if ( !Instance )
LABEL_15:
    sub_1B8880C(entryNameInput, method);
  CommonUI__OpenConfirmDialog((CommonUI_o *)Instance, v13, v11, v14, 0, 0, 0, 0LL);
}


void __fastcall UserNameEntryComponent__requestUserNameChange(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v5; // x0
  ManagerConfig_c *v6; // x8
  System_String_o *v7; // x20
  const MethodInfo *v8; // x2
  NetworkManager_c *v9; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A59E69 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&Method_UserNameEntryComponent_callbackUserNameChange__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59E69 = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_27;
  Text = UILineInput__GetText(entryNameInput, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  v6 = ManagerConfig_TypeInfo;
  v7 = v5;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( !v6->static_fields->UseMock )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A58A02 )
    {
      sub_1B885B0(&NetworkManager_TypeInfo);
      byte_4A58A02 = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    if ( v9->static_fields->isLogin )
    {
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_UserNameEntryComponent_callbackUserNameChange__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      entryNameInput = (UILineInput_o *)NetworkManager__getRequest_object_(
                                          v10,
                                          (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
      if ( entryNameInput )
      {
        UserNameChangeRequest__beginRequest(
          (UserNameChangeRequest_o *)entryNameInput,
          v7,
          this->fields.genderType,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
        goto LABEL_23;
      }
LABEL_27:
      sub_1B8880C(entryNameInput, method);
    }
  }
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_27;
  NetworkManager__SetSignup((NetworkManager_o *)entryNameInput, v7, this->fields.genderType, 0LL);
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_27;
  NetworkManager__WriteSignup((NetworkManager_o *)entryNameInput, 0LL);
  UserNameEntryComponent__callbackUserNameChange(this, (System_String_o *)StringLiteral_22225/*"ok"*/, v8);
LABEL_23:
  entryNameInput = (UILineInput_o *)this->fields.confirmBtn;
  if ( !entryNameInput )
    goto LABEL_27;
  ((void (__fastcall *)(UILineInput_o *, _QWORD, void *))entryNameInput->klass[1]._1.namespaze)(
    entryNameInput,
    0LL,
    entryNameInput->klass[1]._1.byval_arg.data);
  entryNameInput = (UILineInput_o *)this->fields.confirmTxt;
  if ( !entryNameInput )
    goto LABEL_27;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)entryNameInput, v11, 0LL);
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_27;
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
    sub_1B8880C(cmdSpellIconFemale, *(_QWORD *)&gtype);
  }
}


void __fastcall UserNameEntryComponent__setEntry(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UserNameEntryComponent_o *v2; // x19
  struct UIWrapContent_o *loopCtr; // x8
  __int64 *p_centerChild; // x20
  UnityEngine_Object_o *centerChild; // x21
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x20
  ServantStatusBattleListViewItem_o *v10; // x20
  System_Delegate_o *v11; // t1
  SpringPanel_OnFinished_o *v12; // x22
  System_Delegate_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Delegate_o *v16; // x8
  SpringPanel_OnFinished_c *v17; // x1
  int32_t childCount; // w0
  int32_t v19; // w20
  int32_t v20; // w21
  struct GenderSelectControl_o **p_genderSel; // x22
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  v2 = this;
  if ( (byte_4A59E64 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SpringPanel_OnFinished_TypeInfo);
    this = (UserNameEntryComponent_o *)sub_1B885B0(&Method_UserNameEntryComponent_OnCenterOnChildFinished__);
    byte_4A59E64 = 1;
  }
  loopCtr = v2->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_27;
  p_centerChild = (__int64 *)&v2->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)v2->fields.centerChild;
  v2->fields.cellWidth = loopCtr->fields.itemSize;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UserNameEntryComponent_o *)UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
    if ( !this )
      goto LABEL_27;
    this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_27;
    v6 = UnityEngine_GameObject__AddComponent_object_(
           (UnityEngine_GameObject_o *)this,
           (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (__int64)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.centerChild, (int32_t)v6, v7, v8);
  }
  v9 = *p_centerChild;
  if ( !v9 )
    goto LABEL_27;
  v11 = *(System_Delegate_o **)(v9 + 40);
  v10 = (ServantStatusBattleListViewItem_o *)(v9 + 40);
  v12 = (SpringPanel_OnFinished_o *)sub_1B887FC(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v12, (Il2CppObject *)v2, Method_UserNameEntryComponent_OnCenterOnChildFinished__, 0LL);
  v13 = System_Delegate__Combine(v11, (System_Delegate_o *)v12, 0LL);
  v16 = v13;
  if ( !v13 )
    goto LABEL_15;
  v17 = SpringPanel_OnFinished_TypeInfo;
  if ( (SpringPanel_OnFinished_c *)v13->klass != SpringPanel_OnFinished_TypeInfo
    || (v10->klass = (ServantStatusBattleListViewItem_c *)v13, (SpringPanel_OnFinished_c *)v13->klass != v17) )
  {
    sub_1B88ACC(v13);
LABEL_15:
    v10->klass = (ServantStatusBattleListViewItem_c *)v16;
  }
  sub_1B88554(v10, (int32_t)v16, v14, v15);
  this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
  if ( !this )
    goto LABEL_27;
  this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v19 = childCount;
    v20 = 0;
    p_genderSel = &v2->fields.genderSel;
    while ( 1 )
    {
      this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v20, 0LL);
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
      *p_genderSel = (struct GenderSelectControl_o *)Component_object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.genderSel, (int32_t)Component_object, v23, v24);
      if ( !*p_genderSel )
        break;
      (*p_genderSel)->fields.idx = v20++;
      if ( v19 == v20 )
        return;
    }
LABEL_27:
    sub_1B8880C(this, method);
  }
}


void __fastcall UserNameEntryComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A59E6D & 1) == 0 )
  {
    sub_1B885B0(&UserNameEntryComponent___c_TypeInfo);
    byte_4A59E6D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserNameEntryComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserNameEntryComponent___c_TypeInfo->static_fields->__9 = (struct UserNameEntryComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserNameEntryComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall UserNameEntryComponent___c___ctor(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserNameEntryComponent___c___open_b__25_0(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  ;
}