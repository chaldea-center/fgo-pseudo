void __fastcall UserNameEntryComponent___ctor(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UserNameEntryComponent__OnCenterOnChildFinished(
        UserNameEntryComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UserNameEntryComponent_o *v3; // x19
  struct UICenterOnChild_o *centerChild; // x8
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct GenderSelectControl_o *genderSel; // x8

  v3 = this;
  if ( (byte_4B14FA1 & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_1BCA7E0(
                                         &Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___,
                                         method,
                                         v2);
    byte_4B14FA1 = 1;
  }
  centerChild = v3->fields.centerChild;
  if ( !centerChild
    || (this = (UserNameEntryComponent_o *)centerChild->fields.mCenteredObject) == 0LL
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___),
        v3->fields.genderSel = (struct GenderSelectControl_o *)Component_object,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v3->fields.genderSel,
          (int64_t)Component_object,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (genderSel = v3->fields.genderSel) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  v3->fields.genderType = genderSel->fields.genderType;
}


void __fastcall UserNameEntryComponent__Update(UserNameEntryComponent_o *this, const MethodInfo *method)
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
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL )
  {
    sub_1BCAA3C(scrollView, method);
  }
  v6 = fabsf(COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL)));
  cellWidth = (float)this->fields.cellWidth;
  if ( !byte_4B11755 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v4, v5);
    byte_4B11755 = 1;
  }
  v8 = v6 / cellWidth;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
  v9 = v8;
  v11 = modf(v8, &iptr);
  if ( v8 >= 0.0 )
  {
    if ( v11 != 0.5 )
    {
      v12 = floor(v9 + 0.5);
      goto LABEL_17;
    }
    v12 = iptr;
    v13 = 1.0;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v19; // x20
  NetworkManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *v24; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_4B14FA0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__, v11, v12);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B14FA0 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v19 = SelfUserGame;
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      NetworkManager__SetSignup(Instance, v19->fields.name, v19->fields.genderType, 0LL);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      NetworkManager__WriteSignup(Instance, 0LL);
    }
    v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
    System_Action___ctor(
      v27,
      (Il2CppObject *)this,
      Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__,
      0LL);
    if ( v24 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v24, 1, DEFAULT_FADE_TIME, v27, 0LL);
      return;
    }
LABEL_15:
    sub_1BCAA3C(Instance, v17);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UserNameEntryComponent_o *v8; // x19
  PartyOrganizationUtility_c *klass; // x8
  PartyOrganizationUtility_o *p_masterFigureList; // x19
  struct UIMasterFullFigureTexture_array *masterFigureList; // t1
  __int64 v12; // x21
  int namespaze; // w9
  __int64 v14; // x1
  UnityEngine_Object_o *gameObject; // x20

  v8 = this;
  if ( (byte_4B14F99 & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14F99 = 1;
  }
  masterFigureList = v8->fields.masterFigureList;
  p_masterFigureList = (PartyOrganizationUtility_o *)&v8->fields.masterFigureList;
  klass = (PartyOrganizationUtility_c *)masterFigureList;
  if ( masterFigureList )
  {
    v12 = 0LL;
    while ( 1 )
    {
      namespaze = (int)klass->_1.namespaze;
      if ( (int)v12 >= namespaze )
        break;
      if ( (unsigned int)v12 >= namespaze )
        sub_1BCAA44(this, method);
      this = (UserNameEntryComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v12);
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
        klass = p_masterFigureList->klass;
        ++v12;
        if ( p_masterFigureList->klass )
          continue;
      }
      sub_1BCAA3C(this, method);
    }
    p_masterFigureList->klass = 0LL;
    sub_1BCA784(p_masterFigureList, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__endConfirm(UserNameEntryComponent_o *this, bool res, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B14F9E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, res, method);
    byte_4B14F9E = 1;
  }
  if ( res )
    UserNameEntryComponent__requestUserNameChange(this, (const MethodInfo *)res);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


int32_t __fastcall UserNameEntryComponent__getGendetType(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  return this->fields.genderType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__onChangeInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v10; // x0
  int32_t v11; // w21
  uint16_t Chars; // w0
  bool IsNullOrEmpty; // w20
  float v14; // s0
  float v15; // s3
  float v16; // s1
  float v17; // s2
  System_String_o *v18; // x0

  if ( (byte_4B14F9B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B14F9B = 1;
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
  v10 = System_String__Trim(Text, 0LL);
  if ( System_String__op_Equality(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_12;
  if ( Text->fields._stringLength >= 1 )
  {
    v11 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v11, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        goto LABEL_12;
    }
    while ( ++v11 < Text->fields._stringLength );
  }
  if ( (System_String__IndexOf_62432796(Text, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) & 0x80000000) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    entryNameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0LL);
    if ( entryNameInput )
    {
      v18 = System_String__Trim((System_String_o *)entryNameInput, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v18, 0LL);
      goto LABEL_13;
    }
LABEL_22:
    sub_1BCAA3C(entryNameInput, method);
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
  v14 = 1.0;
  if ( IsNullOrEmpty )
    v14 = 0.5;
  if ( !entryNameInput )
    goto LABEL_22;
  v15 = 1.0;
  v16 = v14;
  v17 = v14;
  UIWidget__set_color((UIWidget_o *)entryNameInput, *(UnityEngine_Color_o *)&v14, 0LL);
}


void __fastcall UserNameEntryComponent__onClickInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B14F9C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserNameEntryComponent_onClickInput__, method, v2);
    byte_4B14F9C = 1;
  }
  v4 = Method_UserNameEntryComponent_onClickInput__;
  if ( (*((_BYTE *)Method_UserNameEntryComponent_onClickInput__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_UserNameEntryComponent_onClickInput__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  UserNameEntryComponent__openConfirm(this, v6);
}


void __fastcall UserNameEntryComponent__open(
        UserNameEntryComponent_o *this,
        System_Action_o *closed_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  PartyOrganizationUtility_o *mInput; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  UIInput_OnValidate_o *v52; // x21
  __int64 entryNameInput; // x0
  const MethodInfo *v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x1
  UILabel_o *mInfoLabelMain; // x20
  UILabel_o *mInfoLabelSub; // x20
  UILabel_o *mInfoLabelInput; // x20
  UILabel_o *mInfoLabelFlick; // x20
  __int64 v66; // x1
  UnityEngine_Object_o *mScrollArrowRight; // x21
  __int64 v68; // x1
  Il2CppObject *mArrowRightPrefab; // x21
  Il2CppObject *v70; // x21
  Il2CppObject *Component_object; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  UnityEngine_Object_o *mScrollArrowLeft; // x21
  const MethodInfo *v79; // x1
  Il2CppObject *mArrowLeftPrefab; // x21
  Il2CppObject *v81; // x21
  Il2CppObject *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v89; // x20
  CommandSpellIconComponent_o *cmdSpellIconFemale; // x21
  __int64 v91; // x22
  __int64 v92; // x23
  CommandSpellIconComponent_o *cmdSpellIconMale; // x21
  Il2CppObject *Instance; // x0
  __int64 v95; // x2
  __int64 v96; // x3
  AvalonSceneManager_c *v97; // x8
  CommonUI_o *v98; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v100; // x20
  Il2CppObject *v101; // x21
  struct UserNameEntryComponent___c_StaticFields *static_fields; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct UnityEngine_GameObject_array *masterFigureBaseList; // x8
  struct UIMasterFullFigureTexture_array *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct UnityEngine_GameObject_array *v117; // x8
  unsigned __int64 v118; // x22
  __int64 v119; // x23
  unsigned __int64 max_length; // x9
  struct UIMasterFullFigureTexture_array *masterFigureList; // x25
  int32_t v122; // w2
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x21
  __int64 v130; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  UnityEngine_Vector2_o v132; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v133; // 0:s0.4,4:s1.4

  if ( (byte_4B14F98 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, closed_act, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_EmojiUtility_ValidateNameText__, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27);
    sub_1BCA7E0(&UIInput_OnValidate_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&Method_UserNameEntryComponent___c__open_b__25_0__, v34, v35);
    sub_1BCA7E0(&UserNameEntryComponent___c_TypeInfo, v36, v37);
    sub_1BCA7E0(&UIMasterFullFigureTexture___TypeInfo, v38, v39);
    sub_1BCA7E0(&StringLiteral_7506/*"INPUT_NAME_INFO"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_7505/*"INPUT_NAME_ANNOUNCE"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_11641/*"SELECT_FIGURE_INFO"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_7507/*"INPUT_NAME_LIMIT_NUM"*/, v46, v47);
    byte_4B14F98 = 1;
  }
  this->fields.mClosedAct = closed_act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mClosedAct,
    (int64_t)closed_act,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  mInput = (PartyOrganizationUtility_o *)this->fields.mInput;
  v52 = (UIInput_OnValidate_o *)sub_1BCAA2C(UIInput_OnValidate_TypeInfo, v49, v50, v51);
  UIInput_OnValidate___ctor(v52, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !mInput )
    goto LABEL_58;
  mInput[1].klass = (PartyOrganizationUtility_c *)v52;
  sub_1BCA784(mInput + 1, (int64_t)v52, v55, v56, v57, v58, v59, v60);
  mInfoLabelMain = this->fields.mInfoLabelMain;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61);
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7505/*"INPUT_NAME_ANNOUNCE"*/, 0LL);
  if ( !mInfoLabelMain )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelMain, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelSub = this->fields.mInfoLabelSub;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7506/*"INPUT_NAME_INFO"*/, 0LL);
  if ( !mInfoLabelSub )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelSub, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelInput = this->fields.mInfoLabelInput;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7507/*"INPUT_NAME_LIMIT_NUM"*/, 0LL);
  if ( !mInfoLabelInput )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelInput, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelFlick = this->fields.mInfoLabelFlick;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11641/*"SELECT_FIGURE_INFO"*/, 0LL);
  if ( !mInfoLabelFlick )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelFlick, (System_String_o *)entryNameInput, 0LL);
  mScrollArrowRight = (UnityEngine_Object_o *)this->fields.mScrollArrowRight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
  if ( UnityEngine_Object__op_Equality(mScrollArrowRight, 0LL, 0LL) )
  {
    mArrowRightPrefab = (Il2CppObject *)this->fields.mArrowRightPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
    v70 = UnityEngine_Object__Instantiate_object_(
            mArrowRightPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v70, this->fields.mArrowRightRoot, 0LL);
    if ( !v70 )
      goto LABEL_58;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v70,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowRight = (struct ScrollArrowComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mScrollArrowRight,
      (int64_t)Component_object,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  mScrollArrowLeft = (UnityEngine_Object_o *)this->fields.mScrollArrowLeft;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
  if ( UnityEngine_Object__op_Equality(mScrollArrowLeft, 0LL, 0LL) )
  {
    mArrowLeftPrefab = (Il2CppObject *)this->fields.mArrowLeftPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
    v81 = UnityEngine_Object__Instantiate_object_(
            mArrowLeftPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v81, this->fields.mArrowLeftRoot, 0LL);
    if ( !v81 )
      goto LABEL_58;
    v82 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v81,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowLeft = (struct ScrollArrowComponent_o *)v82;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mScrollArrowLeft,
      (int64_t)v82,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
  }
  UserNameEntryComponent__setEntry(this, v79);
  entryNameInput = (__int64)this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_58;
  UILineInput__SetInputEnable((UILineInput_o *)entryNameInput, 1, 0LL);
  if ( !this->fields.masterFigureList )
  {
    masterFigureBaseList = this->fields.masterFigureBaseList;
    if ( !masterFigureBaseList )
      goto LABEL_58;
    v110 = (struct UIMasterFullFigureTexture_array *)sub_1BCA888(
                                                       UIMasterFullFigureTexture___TypeInfo,
                                                       masterFigureBaseList->max_length);
    this->fields.masterFigureList = v110;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.masterFigureList,
      (int64_t)v110,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
    v117 = this->fields.masterFigureBaseList;
    if ( !v117 )
      goto LABEL_58;
    v118 = 0LL;
    v119 = 32LL;
    while ( 1 )
    {
      max_length = v117->max_length;
      if ( (__int64)v118 >= (int)max_length )
        break;
      if ( v118 >= max_length )
        goto LABEL_59;
      masterFigureList = this->fields.masterFigureList;
      if ( (v118 & 1) != 0 )
        v122 = 1;
      else
        v122 = 2;
      entryNameInput = (__int64)MasterFullFigureManager__CreatePrefab_38636280(
                                  v117->m_Items[v118],
                                  0,
                                  v122,
                                  0,
                                  1,
                                  0LL,
                                  0LL);
      if ( masterFigureList )
      {
        v129 = entryNameInput;
        if ( entryNameInput )
        {
          entryNameInput = sub_1BCA91C(entryNameInput, masterFigureList->obj.klass->_1.element_class);
          if ( !entryNameInput )
          {
            v130 = sub_1BCAA60(0LL);
            sub_1BCA908(v130, 0LL);
          }
        }
        if ( v118 >= masterFigureList->max_length )
LABEL_59:
          sub_1BCAA44(entryNameInput, v54);
        *(Il2CppClass **)((char *)&masterFigureList->obj.klass + v119) = (Il2CppClass *)v129;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)((char *)masterFigureList + v119),
          v129,
          v123,
          v124,
          v125,
          v126,
          v127,
          v128);
        v117 = this->fields.masterFigureBaseList;
        ++v118;
        v119 += 8LL;
        if ( v117 )
          continue;
      }
      goto LABEL_58;
    }
  }
  UserNameEntryComponent__onChangeInput(this, v54);
  entryNameInput = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_58;
  entryNameInput = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)entryNameInput,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !entryNameInput )
    goto LABEL_58;
  entryNameInput = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)entryNameInput,
                              1,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !entryNameInput )
    goto LABEL_58;
  v89 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)entryNameInput;
  cmdSpellIconFemale = this->fields.cmdSpellIconFemale;
  v92 = *(_QWORD *)(entryNameInput + 128);
  v91 = *(_QWORD *)(entryNameInput + 136);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v54);
  *(_QWORD *)&v131.fields.currentCryptoKey = v92;
  *(_QWORD *)&v131.fields.fakeValue = v91;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v131, 0LL);
  if ( !cmdSpellIconFemale )
    goto LABEL_58;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconFemale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconFemale;
  if ( !entryNameInput )
    goto LABEL_58;
  v132.fields.x = 120.0;
  v132.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v132, 0LL);
  cmdSpellIconMale = this->fields.cmdSpellIconMale;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v89[7], 0LL);
  if ( !cmdSpellIconMale )
    goto LABEL_58;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconMale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconMale;
  if ( !entryNameInput )
    goto LABEL_58;
  v133.fields.x = 120.0;
  v133.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v133, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v97 = AvalonSceneManager_TypeInfo;
  v98 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v54);
    v97 = AvalonSceneManager_TypeInfo;
  }
  entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v97->static_fields->DEFAULT_FADE_TIME;
  if ( !UserNameEntryComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserNameEntryComponent___c_TypeInfo, v54);
    entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  }
  v100 = *(System_Action_o **)(*(_QWORD *)(entryNameInput + 184) + 8LL);
  if ( !v100 )
  {
    if ( !*(_DWORD *)(entryNameInput + 224) )
    {
      j_il2cpp_runtime_class_init_0(entryNameInput, v54);
      entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
    }
    v101 = **(Il2CppObject ***)(entryNameInput + 184);
    v100 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v54, v95, v96);
    System_Action___ctor(v100, v101, Method_UserNameEntryComponent___c__open_b__25_0__, 0LL);
    static_fields = UserNameEntryComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = v100;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
      (int64_t)v100,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
  }
  if ( !v98 )
LABEL_58:
    sub_1BCAA3C(entryNameInput, v54);
  CommonUI__maskFadein(v98, DEFAULT_FADE_TIME, v100, 0LL);
}


void __fastcall UserNameEntryComponent__openConfirm(UserNameEntryComponent_o *this, const MethodInfo *method)
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
  __int64 v16; // x1
  __int64 v17; // x2
  UILineInput_o *entryNameInput; // x0
  __int64 v19; // x1
  System_String_o *Text; // x20
  System_String_o *v21; // x0
  __int64 v22; // x1
  int32_t genderType; // w25
  Il2CppObject *v24; // x20
  System_String_o **v25; // x8
  __int64 v26; // x1
  Il2CppObject *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  CommonConfirmDialog_ClickDelegate_o *v35; // x23

  if ( (byte_4B14F9D & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_UserNameEntryComponent_endConfirm__, v8, v9);
    sub_1BCA7E0(&StringLiteral_5580/*"ENTRY_GENDER_MAN"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3864/*"CONFIRM_TITLE_MESSAGE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_3855/*"CONFIRM_INFO_MESSAGE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5581/*"ENTRY_GENDER_WOMAN"*/, v16, v17);
    byte_4B14F9D = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_15;
  Text = UILineInput__GetText(entryNameInput, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  v21 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  genderType = this->fields.genderType;
  v24 = (Il2CppObject *)v21;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  v25 = (System_String_o **)(genderType == 1 ? &StringLiteral_5580/*"ENTRY_GENDER_MAN"*/ : &StringLiteral_5581/*"ENTRY_GENDER_WOMAN"*/);
  v27 = (Il2CppObject *)LocalizationManager__Get(*v25, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3855/*"CONFIRM_INFO_MESSAGE"*/, 0LL);
  v29 = System_String__Format_62415592(v28, v27, v24, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3864/*"CONFIRM_TITLE_MESSAGE"*/, 0LL);
  v35 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v32, v33, v34);
  CommonConfirmDialog_ClickDelegate___ctor(v35, (Il2CppObject *)this, Method_UserNameEntryComponent_endConfirm__, 0LL);
  if ( !Instance )
LABEL_15:
    sub_1BCAA3C(entryNameInput, method);
  CommonUI__OpenConfirmDialog((CommonUI_o *)Instance, v31, v29, v35, 0, 0, 0, 0LL);
}


void __fastcall UserNameEntryComponent__requestUserNameChange(UserNameEntryComponent_o *this, const MethodInfo *method)
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UILineInput_o *entryNameInput; // x0
  __int64 v21; // x1
  System_String_o *Text; // x20
  System_String_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  ManagerConfig_c *v27; // x8
  System_String_o *v28; // x20
  const MethodInfo *v29; // x2
  NetworkManager_c *v30; // x0
  NetworkManager_ResultCallbackFunc_o *v31; // x21
  __int64 v32; // x1
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B14F9F & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_UserNameEntryComponent_callbackUserNameChange__, v14, v15);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    byte_4B14F9F = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_27;
  Text = UILineInput__GetText(entryNameInput, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  v23 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  v27 = ManagerConfig_TypeInfo;
  v28 = v23;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v24);
    v27 = ManagerConfig_TypeInfo;
  }
  if ( !v27->static_fields->UseMock )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
    if ( !byte_4B13950 )
    {
      sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
      byte_4B13950 = 1;
    }
    v30 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
      v30 = NetworkManager_TypeInfo;
    }
    if ( v30->static_fields->isLogin )
    {
      v31 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
      NetworkManager_ResultCallbackFunc___ctor(
        v31,
        (Il2CppObject *)this,
        Method_UserNameEntryComponent_callbackUserNameChange__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
      entryNameInput = (UILineInput_o *)NetworkManager__getRequest_object_(
                                          v31,
                                          (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
      if ( entryNameInput )
      {
        UserNameChangeRequest__beginRequest(
          (UserNameChangeRequest_o *)entryNameInput,
          v28,
          this->fields.genderType,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
        goto LABEL_23;
      }
LABEL_27:
      sub_1BCAA3C(entryNameInput, method);
    }
  }
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_27;
  NetworkManager__SetSignup((NetworkManager_o *)entryNameInput, v28, this->fields.genderType, 0LL);
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_27;
  NetworkManager__WriteSignup((NetworkManager_o *)entryNameInput, 0LL);
  UserNameEntryComponent__callbackUserNameChange(this, (System_String_o *)StringLiteral_22465/*"ok"*/, v29);
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
  v33.fields.r = 0.5;
  v33.fields.g = 0.5;
  v33.fields.b = 0.5;
  v33.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)entryNameInput, v33, 0LL);
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
    sub_1BCAA3C(cmdSpellIconFemale, *(_QWORD *)&gtype);
  }
}


void __fastcall UserNameEntryComponent__setEntry(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserNameEntryComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct UIWrapContent_o *loopCtr; // x8
  __int64 *p_centerChild; // x20
  UnityEngine_Object_o *centerChild; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  Il2CppObject *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x20
  PartyOrganizationUtility_o *v25; // x20
  System_Delegate_o *v26; // t1
  SpringPanel_OnFinished_o *v27; // x22
  System_Delegate_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x8
  SpringPanel_OnFinished_c *v36; // x1
  int32_t childCount; // w0
  int32_t v38; // w20
  int32_t v39; // w21
  struct GenderSelectControl_o **p_genderSel; // x22
  Il2CppObject *Component_object; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  v3 = this;
  if ( (byte_4B14F9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&SpringPanel_OnFinished_TypeInfo, v8, v9);
    this = (UserNameEntryComponent_o *)sub_1BCA7E0(&Method_UserNameEntryComponent_OnCenterOnChildFinished__, v10, v11);
    byte_4B14F9A = 1;
  }
  loopCtr = v3->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_27;
  p_centerChild = (__int64 *)&v3->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)v3->fields.centerChild;
  v3->fields.cellWidth = loopCtr->fields.itemSize;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UserNameEntryComponent_o *)UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UserNameEntryComponent_o *)v3->fields.loopCtr;
    if ( !this )
      goto LABEL_27;
    this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_27;
    v17 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (__int64)v17;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.centerChild, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  }
  v24 = *p_centerChild;
  if ( !v24 )
    goto LABEL_27;
  v26 = *(System_Delegate_o **)(v24 + 40);
  v25 = (PartyOrganizationUtility_o *)(v24 + 40);
  v27 = (SpringPanel_OnFinished_o *)sub_1BCAA2C(SpringPanel_OnFinished_TypeInfo, method, v15, v16);
  SpringPanel_OnFinished___ctor(v27, (Il2CppObject *)v3, Method_UserNameEntryComponent_OnCenterOnChildFinished__, 0LL);
  v28 = System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0LL);
  v35 = (int64_t)v28;
  if ( !v28 )
    goto LABEL_15;
  v36 = SpringPanel_OnFinished_TypeInfo;
  if ( (SpringPanel_OnFinished_c *)v28->klass != SpringPanel_OnFinished_TypeInfo
    || (v25->klass = (PartyOrganizationUtility_c *)v28, (SpringPanel_OnFinished_c *)v28->klass != v36) )
  {
    sub_1BCACFC(v28);
LABEL_15:
    v25->klass = (PartyOrganizationUtility_c *)v35;
  }
  sub_1BCA784(v25, v35, v29, v30, v31, v32, v33, v34);
  this = (UserNameEntryComponent_o *)v3->fields.loopCtr;
  if ( !this )
    goto LABEL_27;
  this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v38 = childCount;
    v39 = 0;
    p_genderSel = &v3->fields.genderSel;
    while ( 1 )
    {
      this = (UserNameEntryComponent_o *)v3->fields.loopCtr;
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v39, 0LL);
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
      *p_genderSel = (struct GenderSelectControl_o *)Component_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v3->fields.genderSel,
        (int64_t)Component_object,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      if ( !*p_genderSel )
        break;
      (*p_genderSel)->fields.idx = v39++;
      if ( v38 == v39 )
        return;
    }
LABEL_27:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall UserNameEntryComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B14FA2 & 1) == 0 )
  {
    sub_1BCA7E0(&UserNameEntryComponent___c_TypeInfo, v1, v2);
    byte_4B14FA2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserNameEntryComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserNameEntryComponent___c_TypeInfo->static_fields->__9 = (struct UserNameEntryComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserNameEntryComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall UserNameEntryComponent___c___ctor(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserNameEntryComponent___c___open_b__25_0(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  ;
}