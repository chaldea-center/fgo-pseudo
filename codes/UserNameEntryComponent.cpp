void UserNameEntryComponent___ctor(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void UserNameEntryComponent__OnCenterOnChildFinished(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UserNameEntryComponent_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct GenderSelectControl_o *genderSel; // x8

  v2 = this;
  if ( (byte_4CED337 & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
    byte_4CED337 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (UserNameEntryComponent_o *)centerChild->fields.mCenteredObject) == 0
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___),
        v2->fields.genderSel = (struct GenderSelectControl_o *)Component_object,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&v2->fields.genderSel,
          (int32_t)Component_object,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (genderSel = v2->fields.genderSel) == 0) )
  {
    sub_1C7BD40(this, method);
  }
  v2->fields.genderType = genderSel->fields.genderType;
}


void UserNameEntryComponent__Update(UserNameEntryComponent_o *this, const MethodInfo *method)
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
  if ( !scrollView || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0)) == 0 )
    sub_1C7BD40(scrollView, method);
  v4 = fabsf(COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0)));
  cellWidth = (float)this->fields.cellWidth;
  if ( !byte_4CE8569 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE8569 = 1;
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


void UserNameEntryComponent___callbackUserNameChange_b__33_0(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UserNameEntryComponent__close(this, method);
  UnityEngine_Input__set_imeCompositionMode(0, 0);
  ActionExtensions__Call(this->fields.mClosedAct, 0);
}


void UserNameEntryComponent__callbackUserNameChange(
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

  if ( (byte_4CED336 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C7BAE8(&Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED336 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22590/*"ok"*/, 0) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( SelfUserGame )
    {
      v7 = SelfUserGame;
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      NetworkManager__SetSignup(Instance, v7->fields.name, v7->fields.genderType, 0);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      NetworkManager__WriteSignup(Instance, 0);
    }
    v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__, 0);
    if ( v9 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v9, 1, DEFAULT_FADE_TIME, v12, 0);
      return;
    }
LABEL_15:
    sub_1C7BD40(Instance, v5);
  }
  Instance = (NetworkManager_o *)this->fields.mInput;
  if ( !Instance )
    goto LABEL_15;
  UIInput__set_value((UIInput_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
  Instance = (NetworkManager_o *)this->fields.entryNameInput;
  if ( !Instance )
    goto LABEL_15;
  UILineInput__SetInputEnable((UILineInput_o *)Instance, 1, 0);
}


void UserNameEntryComponent__close(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UserNameEntryComponent_o *v8; // x19
  GrandQuestFolderBoardItem_c *klass; // x8
  GrandQuestFolderBoardItem_o *p_masterFigureList; // x19
  struct UIMasterFullFigureTexture_array *masterFigureList; // t1
  __int64 v12; // x21
  int namespaze; // w9
  UnityEngine_Object_o *gameObject; // x20

  v8 = this;
  if ( (byte_4CED32F & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED32F = 1;
  }
  masterFigureList = v8->fields.masterFigureList;
  p_masterFigureList = (GrandQuestFolderBoardItem_o *)&v8->fields.masterFigureList;
  klass = (GrandQuestFolderBoardItem_c *)masterFigureList;
  if ( masterFigureList )
  {
    v12 = 0;
    while ( 1 )
    {
      namespaze = (int)klass->_1.namespaze;
      if ( (int)v12 >= namespaze )
        break;
      if ( (unsigned int)v12 >= namespaze )
        sub_1C7BD48(this);
      this = (UserNameEntryComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v12);
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71870148(gameObject, 0);
        klass = p_masterFigureList->klass;
        ++v12;
        if ( p_masterFigureList->klass )
          continue;
      }
      sub_1C7BD40(this, method);
    }
    p_masterFigureList->klass = 0;
    sub_1C7BA8C(p_masterFigureList, 0, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserNameEntryComponent__endConfirm(UserNameEntryComponent_o *this, bool res, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CED334 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CED334 = 1;
  }
  if ( res )
    UserNameEntryComponent__requestUserNameChange(this, (const MethodInfo *)res);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


int32_t UserNameEntryComponent__getGendetType(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  return this->fields.genderType;
}


// local variable allocation has failed, the output may be wrong!
void UserNameEntryComponent__onChangeInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v5; // x0
  int32_t v6; // w21
  uint16_t Chars; // w0
  bool IsNullOrEmpty; // w20
  float v9; // s0 OVERLAPPED
  float v10; // s3
  float v11; // s1
  float v12; // s2
  System_String_o *v13; // x0

  if ( (byte_4CED331 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED331 = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_22;
  Text = UILineInput__GetText(entryNameInput, 0);
  entryNameInput = (UILineInput_o *)System_String__IsNullOrEmpty(Text, 0);
  if ( ((unsigned __int8)entryNameInput & 1) != 0 )
    goto LABEL_12;
  if ( !Text )
    goto LABEL_22;
  v5 = System_String__Trim(Text, 0);
  if ( System_String__op_Equality(v5, (System_String_o *)StringLiteral_1/*""*/, 0) )
    goto LABEL_12;
  if ( Text->fields._stringLength >= 1 )
  {
    v6 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v6, 0);
      if ( EmojiUtility__IsEmojiChar(Chars, 0) )
        goto LABEL_12;
    }
    while ( ++v6 < Text->fields._stringLength );
  }
  if ( System_String__IndexOf_64235304(Text, (System_String_o *)StringLiteral_43/*"\n"*/, 0) < 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    entryNameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0);
    if ( entryNameInput )
    {
      v13 = System_String__Trim((System_String_o *)entryNameInput, 0);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v13, 0);
      goto LABEL_13;
    }
LABEL_22:
    sub_1C7BD40(entryNameInput, method);
  }
LABEL_12:
  IsNullOrEmpty = 1;
LABEL_13:
  entryNameInput = (UILineInput_o *)this->fields.confirmBtn;
  if ( !entryNameInput )
    goto LABEL_22;
  ((void (__fastcall *)(UILineInput_o *, bool, const char *))entryNameInput->klass[1]._1.name)(
    entryNameInput,
    !IsNullOrEmpty,
    entryNameInput->klass[1]._1.namespaze);
  entryNameInput = (UILineInput_o *)this->fields.confirmTxt;
  v9 = 1.0;
  if ( IsNullOrEmpty )
    v9 = 0.5;
  if ( !entryNameInput )
    goto LABEL_22;
  v10 = 1.0;
  v11 = v9;
  v12 = v9;
  UIWidget__set_color((UIWidget_o *)entryNameInput, *(UnityEngine_Color_o *)&v9, 0);
}


void UserNameEntryComponent__onClickInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CED332 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UserNameEntryComponent_onClickInput__);
    byte_4CED332 = 1;
  }
  v3 = Method_UserNameEntryComponent_onClickInput__;
  if ( (*((_BYTE *)Method_UserNameEntryComponent_onClickInput__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_UserNameEntryComponent_onClickInput__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  UserNameEntryComponent__openConfirm(this, v5);
}


void UserNameEntryComponent__open(
        UserNameEntryComponent_o *this,
        System_Action_o *closed_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UIInput_o *mInput; // x20
  UIInput_OnValidate_o *v11; // x21
  __int64 entryNameInput; // x0
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UILabel_o *mInfoLabelMain; // x20
  UILabel_o *mInfoLabelSub; // x20
  UILabel_o *mInfoLabelInput; // x20
  UILabel_o *mInfoLabelFlick; // x20
  UnityEngine_Object_o *mScrollArrowRight; // x21
  Il2CppObject *mArrowRightPrefab; // x21
  Il2CppObject *v26; // x21
  Il2CppObject *Component_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UnityEngine_Object_o *mScrollArrowLeft; // x21
  const MethodInfo *v35; // x1
  Il2CppObject *mArrowLeftPrefab; // x21
  Il2CppObject *v37; // x21
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v45; // x20
  CommandSpellIconComponent_o *cmdSpellIconFemale; // x21
  __int64 v47; // x22
  __int64 v48; // x23
  CommandSpellIconComponent_o *cmdSpellIconMale; // x21
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v51; // x8
  CommonUI_o *v52; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v54; // x20
  Il2CppObject *v55; // x21
  struct UserNameEntryComponent___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct UnityEngine_GameObject_array *masterFigureBaseList; // x8
  struct UIMasterFullFigureTexture_array *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct UnityEngine_GameObject_array *v71; // x8
  unsigned __int64 v72; // x22
  __int64 v73; // x23
  unsigned __int64 max_length_low; // x9
  unsigned int *masterFigureList; // x25
  int32_t v76; // w2
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  __int64 v83; // x21
  __int64 v84; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  UnityEngine_Vector2_o v86; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v87; // 0:s0.4,4:s1.4

  if ( (byte_4CED32E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_EmojiUtility_ValidateNameText__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&UIInput_OnValidate_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_UserNameEntryComponent___c__open_b__25_0__);
    sub_1C7BAE8(&UserNameEntryComponent___c_TypeInfo);
    sub_1C7BAE8(&UIMasterFullFigureTexture___TypeInfo);
    sub_1C7BAE8(&StringLiteral_7487/*"INPUT_NAME_INFO"*/);
    sub_1C7BAE8(&StringLiteral_7486/*"INPUT_NAME_ANNOUNCE"*/);
    sub_1C7BAE8(&StringLiteral_11579/*"SELECT_FIGURE_INFO"*/);
    sub_1C7BAE8(&StringLiteral_7488/*"INPUT_NAME_LIMIT_NUM"*/);
    byte_4CED32E = 1;
  }
  this->fields.mClosedAct = closed_act;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mClosedAct,
    (int32_t)closed_act,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  UnityEngine_Input__set_imeCompositionMode(1, 0);
  mInput = this->fields.mInput;
  v11 = (UIInput_OnValidate_o *)sub_1C7BD34(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v11, 0, Method_EmojiUtility_ValidateNameText__, 0);
  if ( !mInput )
    goto LABEL_58;
  mInput->fields.onValidate = v11;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&mInput->fields.onValidate, (int32_t)v11, v14, v15, v16, v17, v18, v19);
  mInfoLabelMain = this->fields.mInfoLabelMain;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7486/*"INPUT_NAME_ANNOUNCE"*/, 0);
  if ( !mInfoLabelMain )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelMain, (System_String_o *)entryNameInput, 0);
  mInfoLabelSub = this->fields.mInfoLabelSub;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7487/*"INPUT_NAME_INFO"*/, 0);
  if ( !mInfoLabelSub )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelSub, (System_String_o *)entryNameInput, 0);
  mInfoLabelInput = this->fields.mInfoLabelInput;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7488/*"INPUT_NAME_LIMIT_NUM"*/, 0);
  if ( !mInfoLabelInput )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelInput, (System_String_o *)entryNameInput, 0);
  mInfoLabelFlick = this->fields.mInfoLabelFlick;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11579/*"SELECT_FIGURE_INFO"*/, 0);
  if ( !mInfoLabelFlick )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelFlick, (System_String_o *)entryNameInput, 0);
  mScrollArrowRight = (UnityEngine_Object_o *)this->fields.mScrollArrowRight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScrollArrowRight, 0, 0) )
  {
    mArrowRightPrefab = (Il2CppObject *)this->fields.mArrowRightPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26 = UnityEngine_Object__Instantiate_object_(
            mArrowRightPrefab,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_36529116((UnityEngine_GameObject_o *)v26, this->fields.mArrowRightRoot, 0);
    if ( !v26 )
      goto LABEL_58;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v26,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowRight = (struct ScrollArrowComponent_o *)Component_object;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.mScrollArrowRight,
      (int32_t)Component_object,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  mScrollArrowLeft = (UnityEngine_Object_o *)this->fields.mScrollArrowLeft;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScrollArrowLeft, 0, 0) )
  {
    mArrowLeftPrefab = (Il2CppObject *)this->fields.mArrowLeftPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v37 = UnityEngine_Object__Instantiate_object_(
            mArrowLeftPrefab,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_36529116((UnityEngine_GameObject_o *)v37, this->fields.mArrowLeftRoot, 0);
    if ( !v37 )
      goto LABEL_58;
    v38 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v37,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowLeft = (struct ScrollArrowComponent_o *)v38;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.mScrollArrowLeft,
      (int32_t)v38,
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
    goto LABEL_58;
  UILineInput__SetInputEnable((UILineInput_o *)entryNameInput, 1, 0);
  if ( !this->fields.masterFigureList )
  {
    masterFigureBaseList = this->fields.masterFigureBaseList;
    if ( !masterFigureBaseList )
      goto LABEL_58;
    v64 = (struct UIMasterFullFigureTexture_array *)sub_1C7BB90(
                                                      UIMasterFullFigureTexture___TypeInfo,
                                                      LODWORD(masterFigureBaseList->max_length));
    this->fields.masterFigureList = v64;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.masterFigureList,
      (int32_t)v64,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    v71 = this->fields.masterFigureBaseList;
    if ( !v71 )
      goto LABEL_58;
    v72 = 0;
    v73 = 8;
    while ( 1 )
    {
      max_length_low = LODWORD(v71->max_length);
      if ( (__int64)v72 >= (int)max_length_low )
        break;
      if ( v72 >= max_length_low )
        goto LABEL_59;
      masterFigureList = (unsigned int *)this->fields.masterFigureList;
      if ( (v72 & 1) != 0 )
        v76 = 1;
      else
        v76 = 2;
      entryNameInput = (__int64)MasterFullFigureManager__CreatePrefab_41239000(v71->m_Items[v72], 0, v76, 0, 1, 0, 0);
      if ( masterFigureList )
      {
        v83 = entryNameInput;
        if ( entryNameInput )
        {
          entryNameInput = sub_1C7BC24(entryNameInput, *(_QWORD *)(*(_QWORD *)masterFigureList + 64LL));
          if ( !entryNameInput )
          {
            v84 = sub_1C7BD64(0);
            sub_1C7BC10(v84, 0);
          }
        }
        if ( v72 >= masterFigureList[6] )
LABEL_59:
          sub_1C7BD48(entryNameInput);
        *(_QWORD *)&masterFigureList[v73] = v83;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&masterFigureList[v73], v83, v77, v78, v79, v80, v81, v82);
        v71 = this->fields.masterFigureBaseList;
        ++v72;
        v73 += 2;
        if ( v71 )
          continue;
      }
      goto LABEL_58;
    }
  }
  UserNameEntryComponent__onChangeInput(this, v13);
  entryNameInput = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_58;
  entryNameInput = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)entryNameInput,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !entryNameInput )
    goto LABEL_58;
  entryNameInput = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)entryNameInput,
                              1,
                              (const MethodInfo_342E2FC *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !entryNameInput )
    goto LABEL_58;
  v45 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)entryNameInput;
  cmdSpellIconFemale = this->fields.cmdSpellIconFemale;
  v48 = *(_QWORD *)(entryNameInput + 128);
  v47 = *(_QWORD *)(entryNameInput + 136);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = v48;
  *(_QWORD *)&v85.fields.fakeValue = v47;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v85, 0);
  if ( !cmdSpellIconFemale )
    goto LABEL_58;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconFemale, entryNameInput, 0);
  entryNameInput = (__int64)this->fields.cmdSpellIconFemale;
  if ( !entryNameInput )
    goto LABEL_58;
  v86.fields.x = 120.0;
  v86.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v86, 0);
  cmdSpellIconMale = this->fields.cmdSpellIconMale;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v45[7], 0);
  if ( !cmdSpellIconMale )
    goto LABEL_58;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconMale, entryNameInput, 0);
  entryNameInput = (__int64)this->fields.cmdSpellIconMale;
  if ( !entryNameInput )
    goto LABEL_58;
  v87.fields.x = 120.0;
  v87.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v87, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v51 = AvalonSceneManager_TypeInfo;
  v52 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v51 = AvalonSceneManager_TypeInfo;
  }
  entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v51->static_fields->DEFAULT_FADE_TIME;
  if ( !UserNameEntryComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserNameEntryComponent___c_TypeInfo);
    entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  }
  v54 = *(System_Action_o **)(*(_QWORD *)(entryNameInput + 184) + 8LL);
  if ( !v54 )
  {
    if ( !*(_DWORD *)(entryNameInput + 224) )
    {
      j_il2cpp_runtime_class_init_0(entryNameInput);
      entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
    }
    v55 = **(Il2CppObject ***)(entryNameInput + 184);
    v54 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v54, v55, Method_UserNameEntryComponent___c__open_b__25_0__, 0);
    static_fields = UserNameEntryComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = v54;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__25_0, (int32_t)v54, v57, v58, v59, v60, v61, v62);
  }
  if ( !v52 )
LABEL_58:
    sub_1C7BD40(entryNameInput, v13);
  CommonUI__maskFadein(v52, DEFAULT_FADE_TIME, v54, 0);
}


void UserNameEntryComponent__openConfirm(UserNameEntryComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4CED333 & 1) == 0 )
  {
    sub_1C7BAE8(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserNameEntryComponent_endConfirm__);
    sub_1C7BAE8(&StringLiteral_5478/*"ENTRY_GENDER_MAN"*/);
    sub_1C7BAE8(&StringLiteral_3777/*"CONFIRM_TITLE_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_3764/*"CONFIRM_INFO_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_5479/*"ENTRY_GENDER_WOMAN"*/);
    byte_4CED333 = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_15;
  Text = UILineInput__GetText(entryNameInput, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__ReplaceNameTag(Text, 1, 0);
  genderType = this->fields.genderType;
  v7 = (Il2CppObject *)v5;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = (System_String_o **)(genderType == 1 ? &StringLiteral_5478/*"ENTRY_GENDER_MAN"*/ : &StringLiteral_5479/*"ENTRY_GENDER_WOMAN"*/);
  v9 = (Il2CppObject *)LocalizationManager__Get(*v8, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3764/*"CONFIRM_INFO_MESSAGE"*/, 0);
  v11 = System_String__Format_64218220(v10, v9, v7, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3777/*"CONFIRM_TITLE_MESSAGE"*/, 0);
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_UserNameEntryComponent_endConfirm__, 0);
  if ( !Instance )
LABEL_15:
    sub_1C7BD40(entryNameInput, method);
  CommonUI__OpenConfirmDialog((CommonUI_o *)Instance, v13, v11, v14, 0, 0, 0, 0);
}


void UserNameEntryComponent__requestUserNameChange(UserNameEntryComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4CED335 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C7BAE8(&Method_UserNameEntryComponent_callbackUserNameChange__);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED335 = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_27;
  Text = UILineInput__GetText(entryNameInput, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__ReplaceNameTag(Text, 1, 0);
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
    if ( !byte_4CEBBA6 )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CEBBA6 = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    if ( v9->static_fields->isLogin )
    {
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_UserNameEntryComponent_callbackUserNameChange__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      entryNameInput = (UILineInput_o *)NetworkManager__getRequest_object_(
                                          v10,
                                          (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
      if ( entryNameInput )
      {
        UserNameChangeRequest__beginRequest(
          (UserNameChangeRequest_o *)entryNameInput,
          v7,
          this->fields.genderType,
          (System_String_o *)StringLiteral_1/*""*/,
          0);
        goto LABEL_23;
      }
LABEL_27:
      sub_1C7BD40(entryNameInput, method);
    }
  }
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_27;
  NetworkManager__SetSignup((NetworkManager_o *)entryNameInput, v7, this->fields.genderType, 0);
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_27;
  NetworkManager__WriteSignup((NetworkManager_o *)entryNameInput, 0);
  UserNameEntryComponent__callbackUserNameChange(this, (System_String_o *)StringLiteral_22590/*"ok"*/, v8);
LABEL_23:
  entryNameInput = (UILineInput_o *)this->fields.confirmBtn;
  if ( !entryNameInput )
    goto LABEL_27;
  ((void (__fastcall *)(UILineInput_o *, _QWORD, const char *))entryNameInput->klass[1]._1.name)(
    entryNameInput,
    0,
    entryNameInput->klass[1]._1.namespaze);
  entryNameInput = (UILineInput_o *)this->fields.confirmTxt;
  if ( !entryNameInput )
    goto LABEL_27;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)entryNameInput, v11, 0);
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_27;
  UILineInput__SetInputEnable(entryNameInput, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserNameEntryComponent__setCmdSpellImg(UserNameEntryComponent_o *this, int32_t gtype, const MethodInfo *method)
{
  UnityEngine_Component_o *cmdSpellIconFemale; // x0
  bool v6; // w1

  if ( this->fields.genderType != gtype )
  {
    cmdSpellIconFemale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale;
    this->fields.genderType = gtype;
    if ( cmdSpellIconFemale )
    {
      cmdSpellIconFemale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconFemale, 0);
      if ( cmdSpellIconFemale )
      {
        if ( gtype == 2 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconFemale, 1, 0);
          cmdSpellIconFemale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
          if ( cmdSpellIconFemale )
          {
            cmdSpellIconFemale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconFemale, 0);
            if ( cmdSpellIconFemale )
            {
              v6 = 0;
LABEL_11:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconFemale, v6, 0);
              return;
            }
          }
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconFemale, 0, 0);
          cmdSpellIconFemale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
          if ( cmdSpellIconFemale )
          {
            cmdSpellIconFemale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconFemale, 0);
            if ( cmdSpellIconFemale )
            {
              v6 = 1;
              goto LABEL_11;
            }
          }
        }
      }
    }
    sub_1C7BD40(cmdSpellIconFemale, *(_QWORD *)&gtype);
  }
}


void UserNameEntryComponent__setEntry(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UserNameEntryComponent_o *v2; // x19
  struct UIWrapContent_o *loopCtr; // x8
  __int64 *p_centerChild; // x20
  UnityEngine_Object_o *centerChild; // x21
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x20
  GrandQuestFolderBoardItem_o *v14; // x20
  System_Delegate_o *v15; // t1
  SpringPanel_OnFinished_o *v16; // x22
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Delegate_o *v24; // x8
  SpringPanel_OnFinished_c *v25; // x1
  int32_t childCount; // w0
  int32_t v27; // w20
  int32_t v28; // w21
  struct GenderSelectControl_o **p_genderSel; // x22
  Il2CppObject *Component_object; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  v2 = this;
  if ( (byte_4CED330 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SpringPanel_OnFinished_TypeInfo);
    this = (UserNameEntryComponent_o *)sub_1C7BAE8(&Method_UserNameEntryComponent_OnCenterOnChildFinished__);
    byte_4CED330 = 1;
  }
  loopCtr = v2->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_27;
  p_centerChild = (__int64 *)&v2->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)v2->fields.centerChild;
  v2->fields.cellWidth = loopCtr->fields.itemSize;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UserNameEntryComponent_o *)UnityEngine_Object__op_Equality(centerChild, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
    if ( !this )
      goto LABEL_27;
    this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_27;
    v6 = UnityEngine_GameObject__AddComponent_object_(
           (UnityEngine_GameObject_o *)this,
           (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (__int64)v6;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.centerChild, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  }
  v13 = *p_centerChild;
  if ( !v13 )
    goto LABEL_27;
  v15 = *(System_Delegate_o **)(v13 + 40);
  v14 = (GrandQuestFolderBoardItem_o *)(v13 + 40);
  v16 = (SpringPanel_OnFinished_o *)sub_1C7BD34(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v16, (Il2CppObject *)v2, Method_UserNameEntryComponent_OnCenterOnChildFinished__, 0);
  v17 = System_Delegate__Combine(v15, (System_Delegate_o *)v16, 0);
  v24 = v17;
  if ( !v17 )
    goto LABEL_15;
  v25 = SpringPanel_OnFinished_TypeInfo;
  if ( (SpringPanel_OnFinished_c *)v17->klass != SpringPanel_OnFinished_TypeInfo
    || (v14->klass = (GrandQuestFolderBoardItem_c *)v17, (SpringPanel_OnFinished_c *)v17->klass != v25) )
  {
    sub_1C7C0DC(v17);
LABEL_15:
    v14->klass = (GrandQuestFolderBoardItem_c *)v24;
  }
  sub_1C7BA8C(v14, (int32_t)v24, v18, v19, v20, v21, v22, v23);
  this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
  if ( !this )
    goto LABEL_27;
  this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_27;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0);
  if ( childCount >= 1 )
  {
    v27 = childCount;
    v28 = 0;
    p_genderSel = &v2->fields.genderSel;
    while ( 1 )
    {
      this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v28, 0);
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
      *p_genderSel = (struct GenderSelectControl_o *)Component_object;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v2->fields.genderSel,
        (int32_t)Component_object,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      if ( !*p_genderSel )
        break;
      (*p_genderSel)->fields.idx = v28++;
      if ( v27 == v28 )
        return;
    }
LABEL_27:
    sub_1C7BD40(this, method);
  }
}


void UserNameEntryComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CED338 & 1) == 0 )
  {
    sub_1C7BAE8(&UserNameEntryComponent___c_TypeInfo);
    byte_4CED338 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(UserNameEntryComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserNameEntryComponent___c_TypeInfo->static_fields->__9 = (struct UserNameEntryComponent___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)UserNameEntryComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserNameEntryComponent___c___ctor(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserNameEntryComponent___c___open_b__25_0(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  ;
}