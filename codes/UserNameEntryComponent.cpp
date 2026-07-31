void UserNameEntryComponent___ctor(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void UserNameEntryComponent__OnCenterOnChildFinished(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UserNameEntryComponent_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct GenderSelectControl_o *genderSel; // x8

  v2 = this;
  if ( (byte_59372F1 & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
    byte_59372F1 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (UserNameEntryComponent_o *)centerChild->fields.mCenteredObject) == 0
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___),
        v2->fields.genderSel = (struct GenderSelectControl_o *)Component_object,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v2->fields.genderSel,
          (int32_t)Component_object,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (genderSel = v2->fields.genderSel) == 0) )
  {
    sub_21FFECC(this, method);
  }
  v2->fields.genderType = genderSel->fields.genderType;
}


void UserNameEntryComponent__Update(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  float v6; // s8
  float cellWidth; // s9
  float v8; // s9
  double v9; // d8
  const MethodInfo *v10; // x2
  double v11; // d0
  double v12; // d0
  double v13; // d1
  double v14; // d1
  int32_t v16; // w1
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0)) == 0 )
    sub_21FFECC(scrollView, method);
  v6 = fabsf(COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0)));
  cellWidth = (float)this->fields.cellWidth;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v8 = v6 / cellWidth;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4, v5);
  v9 = v8;
  v11 = modf(v8, &iptr);
  if ( v8 >= 0.0 )
  {
    if ( v11 != 0.5 )
    {
      v12 = floor(v9 + 0.5);
      goto LABEL_17;
    }
    v13 = 1.0;
    v12 = iptr;
  }
  else
  {
    if ( v11 != -0.5 )
    {
      v12 = ceil(v9 + -0.5);
      goto LABEL_17;
    }
    v12 = iptr;
    v13 = -1.0;
  }
  v14 = v12 + v13;
  if ( ((__int64)v12 & 1) != 0 )
    v12 = v14;
LABEL_17:
  if ( ((int)v12 & 1) == 0 || v12 == INFINITY )
    v16 = 2;
  else
    v16 = 1;
  UserNameEntryComponent__setCmdSpellImg(this, v16, v10);
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
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_59372F0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_21FFC50(&Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59372F0 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( SelfUserGame )
    {
      v7 = SelfUserGame;
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      NetworkManager__SetSignup(Instance, v7->fields.name, v7->fields.genderType, 0);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      NetworkManager__WriteSignup(Instance, 0);
    }
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v9, v10);
      v12 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__, 0);
    if ( v11 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v11, 1, DEFAULT_FADE_TIME, v14, 0);
      return;
    }
LABEL_15:
    sub_21FFECC(Instance, v5);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UserNameEntryComponent_o *v8; // x19
  MissionNaviTransitionBoardItem_c *klass; // x8
  MissionNaviTransitionBoardItem_o *p_masterFigureList; // x19
  struct UIMasterFullFigureTexture_array *masterFigureList; // t1
  unsigned int v12; // w22
  unsigned int namespaze; // w9
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *gameObject; // x20

  v8 = this;
  if ( (byte_59372E9 & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59372E9 = 1;
  }
  masterFigureList = v8->fields.masterFigureList;
  p_masterFigureList = (MissionNaviTransitionBoardItem_o *)&v8->fields.masterFigureList;
  klass = (MissionNaviTransitionBoardItem_c *)masterFigureList;
  if ( masterFigureList )
  {
    v12 = 0;
    while ( 1 )
    {
      namespaze = (unsigned int)klass->_1.namespaze;
      if ( (int)v12 >= (int)namespaze )
        break;
      if ( v12 >= namespaze )
        sub_21FFED4(this);
      this = (UserNameEntryComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v12);
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
        UnityEngine_Object__Destroy_83246496(gameObject, 0);
        klass = p_masterFigureList->klass;
        ++v12;
        if ( p_masterFigureList->klass )
          continue;
      }
      sub_21FFECC(this, method);
    }
    p_masterFigureList->klass = 0;
    sub_21FFBF4(p_masterFigureList, 0, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserNameEntryComponent__endConfirm(UserNameEntryComponent_o *this, bool res, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_59372EE & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59372EE = 1;
  }
  if ( res )
    UserNameEntryComponent__requestUserNameChange(this, (const MethodInfo *)res);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
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
  __int64 v8; // x2
  bool IsNullOrEmpty; // w20
  float v10; // s0 OVERLAPPED
  float v11; // s3
  float v12; // s1
  float v13; // s2
  System_String_o *v14; // x0

  if ( (byte_59372EB & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59372EB = 1;
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
  if ( System_String__IndexOf_75501892(Text, (System_String_o *)StringLiteral_43/*"\n"*/, 0) < 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v8);
    entryNameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0);
    if ( entryNameInput )
    {
      v14 = System_String__Trim((System_String_o *)entryNameInput, 0);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v14, 0);
      goto LABEL_13;
    }
LABEL_22:
    sub_21FFECC(entryNameInput, method);
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
  if ( !entryNameInput )
    goto LABEL_22;
  v10 = 1.0;
  v11 = 1.0;
  if ( IsNullOrEmpty )
    v10 = 0.5;
  v12 = v10;
  v13 = v10;
  UIWidget__set_color((UIWidget_o *)entryNameInput, *(UnityEngine_Color_o *)&v10, 0);
}


void UserNameEntryComponent__onClickInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_59372EC & 1) == 0 )
  {
    sub_21FFC50(&Method_UserNameEntryComponent_onClickInput__);
    byte_59372EC = 1;
  }
  v3 = Method_UserNameEntryComponent_onClickInput__;
  if ( (*((_BYTE *)Method_UserNameEntryComponent_onClickInput__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_UserNameEntryComponent_onClickInput__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  UserNameEntryComponent__openConfirm(this, v5);
}


void UserNameEntryComponent__open(
        UserNameEntryComponent_o *this,
        System_Action_o *closed_act,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UIInput_o *mInput; // x20
  UIInput_OnValidate_o *v11; // x21
  __int64 entryNameInput; // x0
  const MethodInfo *v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *mInfoLabelMain; // x20
  UILabel_o *mInfoLabelSub; // x20
  UILabel_o *mInfoLabelInput; // x20
  UILabel_o *mInfoLabelFlick; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *mScrollArrowRight; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *mArrowRightPrefab; // x21
  Il2CppObject *v32; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  UnityEngine_Object_o *mScrollArrowLeft; // x21
  const MethodInfo *v41; // x1
  __int64 v42; // x2
  Il2CppObject *mArrowLeftPrefab; // x21
  Il2CppObject *v44; // x21
  Il2CppObject *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  __int64 v52; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x20
  __int64 v54; // x22
  __int64 v55; // x23
  CommandSpellIconComponent_o *cmdSpellIconFemale; // x21
  CommandSpellIconComponent_o *cmdSpellIconMale; // x21
  Il2CppObject *Instance; // x0
  __int64 v59; // x2
  AvalonSceneManager_c *v60; // x8
  CommonUI_o *v61; // x19
  float DEFAULT_FADE_TIME; // s8
  struct UserNameEntryComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__25_0; // x20
  Il2CppObject *v65; // x21
  struct UserNameEntryComponent___c_StaticFields *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct UnityEngine_GameObject_array *masterFigureBaseList; // x8
  struct UIMasterFullFigureTexture_array *v74; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct UnityEngine_GameObject_array *v81; // x8
  __int64 v82; // x22
  __int64 v83; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v85; // x25
  unsigned int *masterFigureList; // x26
  int32_t v87; // w2
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  __int64 v94; // x21
  __int64 v95; // x1
  __int64 v96; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  UnityEngine_Vector2_o v98; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v99; // 0:s0.4,4:s1.4

  if ( (byte_59372E8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_21FFC50(&Method_EmojiUtility_ValidateNameText__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&UIInput_OnValidate_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserNameEntryComponent___c__open_b__25_0__);
    sub_21FFC50(&UserNameEntryComponent___c_TypeInfo);
    sub_21FFC50(&UIMasterFullFigureTexture___TypeInfo);
    sub_21FFC50(&StringLiteral_7779/*"INPUT_NAME_INFO"*/);
    sub_21FFC50(&StringLiteral_7778/*"INPUT_NAME_ANNOUNCE"*/);
    sub_21FFC50(&StringLiteral_12014/*"SELECT_FIGURE_INFO"*/);
    sub_21FFC50(&StringLiteral_7780/*"INPUT_NAME_LIMIT_NUM"*/);
    byte_59372E8 = 1;
  }
  this->fields.mClosedAct = closed_act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mClosedAct,
    (int32_t)closed_act,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  UnityEngine_Input__set_imeCompositionMode(1, 0);
  mInput = this->fields.mInput;
  v11 = (UIInput_OnValidate_o *)sub_21FFEBC(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v11, 0, Method_EmojiUtility_ValidateNameText__, 0);
  if ( !mInput )
    goto LABEL_58;
  mInput->fields.onValidate = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&mInput->fields.onValidate,
    (int32_t)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  mInfoLabelMain = this->fields.mInfoLabelMain;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7778/*"INPUT_NAME_ANNOUNCE"*/, 0);
  if ( !mInfoLabelMain )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelMain, (System_String_o *)entryNameInput, 0);
  mInfoLabelSub = this->fields.mInfoLabelSub;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7779/*"INPUT_NAME_INFO"*/, 0);
  if ( !mInfoLabelSub )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelSub, (System_String_o *)entryNameInput, 0);
  mInfoLabelInput = this->fields.mInfoLabelInput;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7780/*"INPUT_NAME_LIMIT_NUM"*/, 0);
  if ( !mInfoLabelInput )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelInput, (System_String_o *)entryNameInput, 0);
  mInfoLabelFlick = this->fields.mInfoLabelFlick;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12014/*"SELECT_FIGURE_INFO"*/, 0);
  if ( !mInfoLabelFlick )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelFlick, (System_String_o *)entryNameInput, 0);
  mScrollArrowRight = (UnityEngine_Object_o *)this->fields.mScrollArrowRight;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
  if ( UnityEngine_Object__op_Equality(mScrollArrowRight, 0, 0) )
  {
    mArrowRightPrefab = (Il2CppObject *)this->fields.mArrowRightPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
    v32 = UnityEngine_Object__Instantiate_object_(
            mArrowRightPrefab,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v32, this->fields.mArrowRightRoot, 0);
    if ( !v32 )
      goto LABEL_58;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v32,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowRight = (struct ScrollArrowComponent_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mScrollArrowRight,
      (int32_t)Component_object,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  mScrollArrowLeft = (UnityEngine_Object_o *)this->fields.mScrollArrowLeft;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
  if ( UnityEngine_Object__op_Equality(mScrollArrowLeft, 0, 0) )
  {
    mArrowLeftPrefab = (Il2CppObject *)this->fields.mArrowLeftPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41, v42);
    v44 = UnityEngine_Object__Instantiate_object_(
            mArrowLeftPrefab,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v44, this->fields.mArrowLeftRoot, 0);
    if ( !v44 )
      goto LABEL_58;
    v45 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v44,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowLeft = (struct ScrollArrowComponent_o *)v45;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mScrollArrowLeft,
      (int32_t)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  UserNameEntryComponent__setEntry(this, v41);
  entryNameInput = (__int64)this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_58;
  UILineInput__SetInputEnable((UILineInput_o *)entryNameInput, 1, 0);
  if ( !this->fields.masterFigureList )
  {
    masterFigureBaseList = this->fields.masterFigureBaseList;
    if ( !masterFigureBaseList )
      goto LABEL_58;
    v74 = (struct UIMasterFullFigureTexture_array *)sub_21FFD10(
                                                      UIMasterFullFigureTexture___TypeInfo,
                                                      LODWORD(masterFigureBaseList->max_length));
    this->fields.masterFigureList = v74;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.masterFigureList,
      (int32_t)v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    v81 = this->fields.masterFigureBaseList;
    if ( !v81 )
      goto LABEL_58;
    v82 = 4;
    v83 = 8;
    while ( 1 )
    {
      max_length_low = LODWORD(v81->max_length);
      v85 = v82 - 4;
      if ( v82 - 4 >= (int)max_length_low )
        break;
      if ( v85 >= max_length_low )
        goto LABEL_59;
      masterFigureList = (unsigned int *)this->fields.masterFigureList;
      if ( (v85 & 1) != 0 )
        v87 = 1;
      else
        v87 = 2;
      entryNameInput = (__int64)MasterFullFigureManager__CreatePrefab_47605496(
                                  *((UnityEngine_GameObject_o **)&v81->obj.klass + v82),
                                  0,
                                  v87,
                                  0,
                                  1,
                                  0,
                                  0);
      if ( masterFigureList )
      {
        v94 = entryNameInput;
        if ( entryNameInput )
        {
          entryNameInput = sub_21FFDA4(entryNameInput, *(_QWORD *)(*(_QWORD *)masterFigureList + 64LL));
          if ( !entryNameInput )
          {
            v96 = sub_21FFEF0(0, v95);
            sub_21FFD90(v96, 0);
          }
        }
        if ( v85 >= masterFigureList[6] )
LABEL_59:
          sub_21FFED4(entryNameInput);
        *(_QWORD *)&masterFigureList[2 * v82] = v94;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&masterFigureList[v83], v94, v88, v89, v90, v91, v92, v93);
        v81 = this->fields.masterFigureBaseList;
        ++v82;
        v83 += 2;
        if ( v81 )
          continue;
      }
      goto LABEL_58;
    }
  }
  UserNameEntryComponent__onChangeInput(this, v13);
  entryNameInput = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_58;
  entryNameInput = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)entryNameInput,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !entryNameInput )
    goto LABEL_58;
  entryNameInput = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)entryNameInput,
                              1,
                              (const MethodInfo_3EDD388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !entryNameInput )
    goto LABEL_58;
  v53 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)entryNameInput;
  v54 = *(_QWORD *)(entryNameInput + 128);
  v55 = *(_QWORD *)(entryNameInput + 136);
  cmdSpellIconFemale = this->fields.cmdSpellIconFemale;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v52);
  *(_QWORD *)&v97.fields.currentCryptoKey = v54;
  *(_QWORD *)&v97.fields.fakeValue = v55;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v97, 0);
  if ( !cmdSpellIconFemale )
    goto LABEL_58;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconFemale, entryNameInput, 0);
  entryNameInput = (__int64)this->fields.cmdSpellIconFemale;
  if ( !entryNameInput )
    goto LABEL_58;
  v98.fields.x = 120.0;
  v98.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v98, 0);
  cmdSpellIconMale = this->fields.cmdSpellIconMale;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v53[7], 0);
  if ( !cmdSpellIconMale )
    goto LABEL_58;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconMale, entryNameInput, 0);
  entryNameInput = (__int64)this->fields.cmdSpellIconMale;
  if ( !entryNameInput )
    goto LABEL_58;
  v99.fields.x = 120.0;
  v99.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v99, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v60 = AvalonSceneManager_TypeInfo;
  v61 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13, v59);
    v60 = AvalonSceneManager_TypeInfo;
  }
  entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v60->static_fields->DEFAULT_FADE_TIME;
  if ( !*(&UserNameEntryComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserNameEntryComponent___c_TypeInfo, v13, v59);
    entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  }
  static_fields = *(struct UserNameEntryComponent___c_StaticFields **)(entryNameInput + 184);
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !*(_DWORD *)(entryNameInput + 228) )
    {
      j_il2cpp_runtime_class_init_0(entryNameInput, v13, v59);
      static_fields = UserNameEntryComponent___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v65, Method_UserNameEntryComponent___c__open_b__25_0__, 0);
    v66 = UserNameEntryComponent___c_TypeInfo->static_fields;
    v66->__9__25_0 = _9__25_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v66->__9__25_0, (int32_t)_9__25_0, v67, v68, v69, v70, v71, v72);
  }
  if ( !v61 )
LABEL_58:
    sub_21FFECC(entryNameInput, v13);
  CommonUI__maskFadein(v61, DEFAULT_FADE_TIME, _9__25_0, 0);
}


void UserNameEntryComponent__openConfirm(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UILineInput_o *entryNameInput; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *Text; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t genderType; // w22
  Il2CppObject *v11; // x20
  System_String_o **v12; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v19; // x22
  CommonConfirmDialog_ClickDelegate_o *v20; // x23

  if ( (byte_59372ED & 1) == 0 )
  {
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserNameEntryComponent_endConfirm__);
    sub_21FFC50(&StringLiteral_5660/*"ENTRY_GENDER_MAN"*/);
    sub_21FFC50(&StringLiteral_3910/*"CONFIRM_TITLE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_3897/*"CONFIRM_INFO_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_5661/*"ENTRY_GENDER_WOMAN"*/);
    byte_59372ED = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_15;
  Text = UILineInput__GetText(entryNameInput, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  v7 = LocalizationManager__ReplaceNameTag(Text, 1, 0);
  genderType = this->fields.genderType;
  v11 = (Il2CppObject *)v7;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  v12 = (System_String_o **)(genderType == 1 ? &StringLiteral_5660/*"ENTRY_GENDER_MAN"*/ : &StringLiteral_5661/*"ENTRY_GENDER_WOMAN"*/);
  v15 = (Il2CppObject *)LocalizationManager__Get(*v12, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3897/*"CONFIRM_INFO_MESSAGE"*/, 0);
  v17 = System_String__Format_75484576(v16, v15, v11, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3910/*"CONFIRM_TITLE_MESSAGE"*/, 0);
  v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v20, (Il2CppObject *)this, Method_UserNameEntryComponent_endConfirm__, 0);
  if ( !Instance )
LABEL_15:
    sub_21FFECC(entryNameInput, method);
  CommonUI__OpenConfirmDialog((CommonUI_o *)Instance, v19, v17, v20, 0, 0, 0, 0);
}


void UserNameEntryComponent__requestUserNameChange(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UILineInput_o *entryNameInput; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *Text; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  ManagerConfig_c *v10; // x8
  System_String_o *v11; // x20
  const MethodInfo *v12; // x2
  NetworkManager_c *v13; // x0
  NetworkManager_ResultCallbackFunc_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59372EF & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_21FFC50(&Method_UserNameEntryComponent_callbackUserNameChange__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59372EF = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_27;
  Text = UILineInput__GetText(entryNameInput, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  v7 = LocalizationManager__ReplaceNameTag(Text, 1, 0);
  v10 = ManagerConfig_TypeInfo;
  v11 = v7;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v8, v9);
    v10 = ManagerConfig_TypeInfo;
  }
  if ( !v10->static_fields->UseMock )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
    if ( !byte_5935B46 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5935B46 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
      v13 = NetworkManager_TypeInfo;
    }
    if ( v13->static_fields->isLogin )
    {
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_UserNameEntryComponent_callbackUserNameChange__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
      entryNameInput = (UILineInput_o *)NetworkManager__getRequest_object_(
                                          v14,
                                          (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
      if ( entryNameInput )
      {
        UserNameChangeRequest__beginRequest(
          (UserNameChangeRequest_o *)entryNameInput,
          v11,
          this->fields.genderType,
          (System_String_o *)StringLiteral_1/*""*/,
          0);
        goto LABEL_23;
      }
LABEL_27:
      sub_21FFECC(entryNameInput, method);
    }
  }
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_27;
  NetworkManager__SetSignup((NetworkManager_o *)entryNameInput, v11, this->fields.genderType, 0);
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_27;
  NetworkManager__WriteSignup((NetworkManager_o *)entryNameInput, 0);
  UserNameEntryComponent__callbackUserNameChange(this, (System_String_o *)StringLiteral_23468/*"ok"*/, v12);
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
  v17.fields.r = 0.5;
  v17.fields.g = 0.5;
  v17.fields.b = 0.5;
  v17.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)entryNameInput, v17, 0);
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_27;
  UILineInput__SetInputEnable(entryNameInput, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserNameEntryComponent__setCmdSpellImg(UserNameEntryComponent_o *this, int32_t gtype, const MethodInfo *method)
{
  UnityEngine_Component_o *cmdSpellIconFemale; // x0
  bool v5; // w1

  if ( this->fields.genderType != gtype )
  {
    cmdSpellIconFemale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale;
    this->fields.genderType = gtype;
    if ( gtype == 2 )
    {
      if ( cmdSpellIconFemale )
      {
        cmdSpellIconFemale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconFemale, 0);
        if ( cmdSpellIconFemale )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconFemale, 1, 0);
          cmdSpellIconFemale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
          if ( cmdSpellIconFemale )
          {
            cmdSpellIconFemale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconFemale, 0);
            if ( cmdSpellIconFemale )
            {
              v5 = 0;
LABEL_13:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconFemale, v5, 0);
              return;
            }
          }
        }
      }
    }
    else if ( cmdSpellIconFemale )
    {
      cmdSpellIconFemale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconFemale, 0);
      if ( cmdSpellIconFemale )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellIconFemale, 0, 0);
        cmdSpellIconFemale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
        if ( cmdSpellIconFemale )
        {
          cmdSpellIconFemale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(cmdSpellIconFemale, 0);
          if ( cmdSpellIconFemale )
          {
            v5 = 1;
            goto LABEL_13;
          }
        }
      }
    }
    sub_21FFECC(cmdSpellIconFemale, *(_QWORD *)&gtype);
  }
}


void UserNameEntryComponent__setEntry(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserNameEntryComponent_o *v3; // x19
  struct UIWrapContent_o *loopCtr; // x8
  __int64 *p_centerChild; // x20
  UnityEngine_Object_o *centerChild; // x21
  UnityEngine_Object_c *v7; // x0
  Il2CppObject *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x20
  MissionNaviTransitionBoardItem_o *v16; // x20
  System_Delegate_o *v17; // t1
  SpringPanel_OnFinished_o *v18; // x22
  System_Delegate_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w8
  SpringPanel_OnFinished_c *v27; // x1
  int32_t childCount; // w0
  int32_t v29; // w20
  int32_t v30; // w21
  Il2CppObject *Component_object; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct GenderSelectControl_o *genderSel; // x8

  v3 = this;
  if ( (byte_59372EA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SpringPanel_OnFinished_TypeInfo);
    this = (UserNameEntryComponent_o *)sub_21FFC50(&Method_UserNameEntryComponent_OnCenterOnChildFinished__);
    byte_59372EA = 1;
  }
  loopCtr = v3->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_27;
  p_centerChild = (__int64 *)&v3->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)v3->fields.centerChild;
  v7 = UnityEngine_Object_TypeInfo;
  v3->fields.cellWidth = loopCtr->fields.itemSize;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, method, v2);
  this = (UserNameEntryComponent_o *)UnityEngine_Object__op_Equality(centerChild, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UserNameEntryComponent_o *)v3->fields.loopCtr;
    if ( !this )
      goto LABEL_27;
    this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_27;
    v8 = UnityEngine_GameObject__AddComponent_object_(
           (UnityEngine_GameObject_o *)this,
           (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (__int64)v8;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.centerChild, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  v15 = *p_centerChild;
  if ( !v15 )
    goto LABEL_27;
  v17 = *(System_Delegate_o **)(v15 + 40);
  v16 = (MissionNaviTransitionBoardItem_o *)(v15 + 40);
  v18 = (SpringPanel_OnFinished_o *)sub_21FFEBC(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v18, (Il2CppObject *)v3, Method_UserNameEntryComponent_OnCenterOnChildFinished__, 0);
  v19 = System_Delegate__Combine(v17, (System_Delegate_o *)v18, 0);
  v26 = (int)v19;
  if ( !v19 )
    goto LABEL_15;
  v27 = SpringPanel_OnFinished_TypeInfo;
  if ( (SpringPanel_OnFinished_c *)v19->klass != SpringPanel_OnFinished_TypeInfo
    || (v16->klass = (MissionNaviTransitionBoardItem_c *)v19, (SpringPanel_OnFinished_c *)v19->klass != v27) )
  {
    sub_220024C(v19, v27, v20, v21);
LABEL_15:
    v16->klass = 0;
  }
  sub_21FFBF4(v16, v26, v20, v21, v22, v23, v24, v25);
  this = (UserNameEntryComponent_o *)v3->fields.loopCtr;
  if ( !this )
    goto LABEL_27;
  this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_27;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0);
  if ( childCount >= 1 )
  {
    v29 = childCount;
    v30 = 0;
    while ( 1 )
    {
      this = (UserNameEntryComponent_o *)v3->fields.loopCtr;
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v30, 0);
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
      v3->fields.genderSel = (struct GenderSelectControl_o *)Component_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v3->fields.genderSel,
        (int32_t)Component_object,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      genderSel = v3->fields.genderSel;
      if ( !genderSel )
        break;
      genderSel->fields.idx = v30++;
      if ( v29 == v30 )
        return;
    }
LABEL_27:
    sub_21FFECC(this, method);
  }
}


void UserNameEntryComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59372F2 & 1) == 0 )
  {
    sub_21FFC50(&UserNameEntryComponent___c_TypeInfo);
    byte_59372F2 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(UserNameEntryComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserNameEntryComponent___c_TypeInfo->static_fields->__9 = (struct UserNameEntryComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserNameEntryComponent___c_TypeInfo->static_fields,
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