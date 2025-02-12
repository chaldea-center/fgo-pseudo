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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct GenderSelectControl_o *genderSel; // x8

  v2 = this;
  if ( (byte_4BB346B & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_1C13D24(
                                         &Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___,
                                         method);
    byte_4BB346B = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (UserNameEntryComponent_o *)centerChild->fields.mCenteredObject) == 0LL
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___),
        v2->fields.genderSel = (struct GenderSelectControl_o *)Component_object,
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v2->fields.genderSel,
          (int64_t)Component_object,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (genderSel = v2->fields.genderSel) == 0LL) )
  {
    sub_1C13F80(this, method);
  }
  v2->fields.genderType = genderSel->fields.genderType;
}


void __fastcall UserNameEntryComponent__Update(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  __int64 v4; // x1
  float v5; // s8
  float cellWidth; // s9
  float v7; // s9
  double v8; // d8
  const MethodInfo *v9; // x2
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  int32_t v15; // w1
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL )
  {
    sub_1C13F80(scrollView, method);
  }
  v5 = fabsf(COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL)));
  cellWidth = (float)this->fields.cellWidth;
  if ( !byte_4BAFB6A )
  {
    sub_1C13D24(&System_Math_TypeInfo, v4);
    byte_4BAFB6A = 1;
  }
  v7 = v5 / cellWidth;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = v7;
  v10 = modf(v7, &iptr);
  if ( v7 >= 0.0 )
  {
    if ( v10 != 0.5 )
    {
      v11 = floor(v8 + 0.5);
      goto LABEL_17;
    }
    v11 = iptr;
    v12 = 1.0;
  }
  else
  {
    if ( v10 != -0.5 )
    {
      v11 = ceil(v8 + -0.5);
      goto LABEL_17;
    }
    v11 = iptr;
    v12 = -1.0;
  }
  v13 = v11 + v12;
  if ( ((__int64)v11 & 1) != 0 )
    v11 = v13;
LABEL_17:
  if ( ((int)v11 & 1) == 0 || v11 == INFINITY )
    v15 = 2;
  else
    v15 = 1;
  UserNameEntryComponent__setCmdSpellImg(this, v15, v9);
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
  __int64 v11; // x1
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v13; // x20
  NetworkManager_o *Instance; // x0
  Il2CppObject *v15; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4BB346A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, result);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v7);
    sub_1C13D24(&Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__, v8);
    sub_1C13D24(&StringLiteral_22595/*"offline"*/, v9);
    sub_1C13D24(&StringLiteral_1/*""*/, v10);
    byte_4BB346A = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22595/*"offline"*/, 0LL) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v13 = SelfUserGame;
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      NetworkManager__SetSignup(Instance, v13->fields.name, v13->fields.genderType, 0LL);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      NetworkManager__WriteSignup(Instance, 0LL);
    }
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)this,
      Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__,
      0LL);
    if ( v15 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v15, 1, DEFAULT_FADE_TIME, v18, 0LL);
      return;
    }
LABEL_15:
    sub_1C13F80(Instance, v11);
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
  UnityEngine_Object_o *gameObject; // x20

  v8 = this;
  if ( (byte_4BB3463 & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB3463 = 1;
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
        sub_1C13F88(this, method);
      this = (UserNameEntryComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v12);
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
        klass = p_masterFigureList->klass;
        ++v12;
        if ( p_masterFigureList->klass )
          continue;
      }
      sub_1C13F80(this, method);
    }
    p_masterFigureList->klass = 0LL;
    sub_1C13CC8(p_masterFigureList, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__endConfirm(UserNameEntryComponent_o *this, bool res, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BB3468 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, res);
    byte_4BB3468 = 1;
  }
  if ( res )
    UserNameEntryComponent__requestUserNameChange(this, (const MethodInfo *)res);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
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
  float v11; // s0
  float v12; // s3
  float v13; // s1
  float v14; // s2
  System_String_o *v15; // x0

  if ( (byte_4BB3465 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v3);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB3465 = 1;
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
  v7 = System_String__Trim(Text, 0LL);
  if ( System_String__op_Equality(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_12;
  if ( Text->fields._stringLength >= 1 )
  {
    v8 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v8, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        goto LABEL_12;
    }
    while ( ++v8 < Text->fields._stringLength );
  }
  if ( (System_String__IndexOf_62999520(Text, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) & 0x80000000) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    entryNameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0LL);
    if ( entryNameInput )
    {
      v15 = System_String__Trim((System_String_o *)entryNameInput, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v15, 0LL);
      goto LABEL_13;
    }
LABEL_22:
    sub_1C13F80(entryNameInput, method);
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
  v11 = 1.0;
  if ( IsNullOrEmpty )
    v11 = 0.5;
  if ( !entryNameInput )
    goto LABEL_22;
  v12 = 1.0;
  v13 = v11;
  v14 = v11;
  UIWidget__set_color((UIWidget_o *)entryNameInput, *(UnityEngine_Color_o *)&v11, 0LL);
}


void __fastcall UserNameEntryComponent__onClickInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BB3466 & 1) == 0 )
  {
    sub_1C13D24(&Method_UserNameEntryComponent_onClickInput__, method);
    byte_4BB3466 = 1;
  }
  v3 = Method_UserNameEntryComponent_onClickInput__;
  if ( (*((_BYTE *)Method_UserNameEntryComponent_onClickInput__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_UserNameEntryComponent_onClickInput__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  UserNameEntryComponent__openConfirm(this, v5);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UILabel_o *mInfoLabelMain; // x20
  UILabel_o *mInfoLabelSub; // x20
  UILabel_o *mInfoLabelInput; // x20
  UILabel_o *mInfoLabelFlick; // x20
  UnityEngine_Object_o *mScrollArrowRight; // x21
  Il2CppObject *mArrowRightPrefab; // x21
  Il2CppObject *v45; // x21
  Il2CppObject *Component_object; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  UnityEngine_Object_o *mScrollArrowLeft; // x21
  const MethodInfo *v54; // x1
  Il2CppObject *mArrowLeftPrefab; // x21
  Il2CppObject *v56; // x21
  Il2CppObject *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x20
  CommandSpellIconComponent_o *cmdSpellIconFemale; // x21
  __int64 v66; // x22
  __int64 v67; // x23
  CommandSpellIconComponent_o *cmdSpellIconMale; // x21
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v70; // x8
  CommonUI_o *v71; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v73; // x20
  Il2CppObject *v74; // x21
  struct UserNameEntryComponent___c_StaticFields *static_fields; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct UnityEngine_GameObject_array *masterFigureBaseList; // x8
  struct UIMasterFullFigureTexture_array *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct UnityEngine_GameObject_array *v90; // x8
  unsigned __int64 v91; // x22
  __int64 v92; // x23
  unsigned __int64 max_length; // x9
  struct UIMasterFullFigureTexture_array *masterFigureList; // x25
  int32_t v95; // w2
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x21
  __int64 v103; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  UnityEngine_Vector2_o v105; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v106; // 0:s0.4,4:s1.4

  if ( (byte_4BB3462 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, closed_act);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_EquipMaster___, v11);
    sub_1C13D24(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v12);
    sub_1C13D24(&Method_EmojiUtility_ValidateNameText__, v13);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___, v14);
    sub_1C13D24(&LocalizationManager_TypeInfo, v15);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v17);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1C13D24(&UIInput_OnValidate_TypeInfo, v19);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C13D24(&Method_UserNameEntryComponent___c__open_b__25_0__, v22);
    sub_1C13D24(&UserNameEntryComponent___c_TypeInfo, v23);
    sub_1C13D24(&UIMasterFullFigureTexture___TypeInfo, v24);
    sub_1C13D24(&StringLiteral_7545/*"INPUT_BIRTHDAY_NOTICE"*/, v25);
    sub_1C13D24(&StringLiteral_7544/*"INPUT_BIRTHDAY_INFO"*/, v26);
    sub_1C13D24(&StringLiteral_11700/*"SELECTCARD"*/, v27);
    sub_1C13D24(&StringLiteral_7546/*"INPUT_BIRTHDAY_TITLE"*/, v28);
    byte_4BB3462 = 1;
  }
  this->fields.mClosedAct = closed_act;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.mClosedAct,
    (int64_t)closed_act,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  mInput = this->fields.mInput;
  v30 = (UIInput_OnValidate_o *)sub_1C13F70(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v30, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !mInput )
    goto LABEL_58;
  mInput->fields.onValidate = v30;
  sub_1C13CC8((PartyOrganizationUtility_o *)&mInput->fields.onValidate, (int64_t)v30, v33, v34, v35, v36, v37, v38);
  mInfoLabelMain = this->fields.mInfoLabelMain;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7544/*"INPUT_BIRTHDAY_INFO"*/, 0LL);
  if ( !mInfoLabelMain )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelMain, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelSub = this->fields.mInfoLabelSub;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7545/*"INPUT_BIRTHDAY_NOTICE"*/, 0LL);
  if ( !mInfoLabelSub )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelSub, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelInput = this->fields.mInfoLabelInput;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7546/*"INPUT_BIRTHDAY_TITLE"*/, 0LL);
  if ( !mInfoLabelInput )
    goto LABEL_58;
  UILabel__set_text(mInfoLabelInput, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelFlick = this->fields.mInfoLabelFlick;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11700/*"SELECTCARD"*/, 0LL);
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
    v45 = UnityEngine_Object__Instantiate_object_(
            mArrowRightPrefab,
            (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_34717732((UnityEngine_GameObject_o *)v45, this->fields.mArrowRightRoot, 0LL);
    if ( !v45 )
      goto LABEL_58;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v45,
                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowRight = (struct ScrollArrowComponent_o *)Component_object;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.mScrollArrowRight,
      (int64_t)Component_object,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  mScrollArrowLeft = (UnityEngine_Object_o *)this->fields.mScrollArrowLeft;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScrollArrowLeft, 0LL, 0LL) )
  {
    mArrowLeftPrefab = (Il2CppObject *)this->fields.mArrowLeftPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v56 = UnityEngine_Object__Instantiate_object_(
            mArrowLeftPrefab,
            (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_34717732((UnityEngine_GameObject_o *)v56, this->fields.mArrowLeftRoot, 0LL);
    if ( !v56 )
      goto LABEL_58;
    v57 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v56,
            (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowLeft = (struct ScrollArrowComponent_o *)v57;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.mScrollArrowLeft,
      (int64_t)v57,
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
    goto LABEL_58;
  UILineInput__SetInputEnable((UILineInput_o *)entryNameInput, 1, 0LL);
  if ( !this->fields.masterFigureList )
  {
    masterFigureBaseList = this->fields.masterFigureBaseList;
    if ( !masterFigureBaseList )
      goto LABEL_58;
    v83 = (struct UIMasterFullFigureTexture_array *)sub_1C13DCC(
                                                      UIMasterFullFigureTexture___TypeInfo,
                                                      masterFigureBaseList->max_length);
    this->fields.masterFigureList = v83;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.masterFigureList,
      (int64_t)v83,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
    v90 = this->fields.masterFigureBaseList;
    if ( !v90 )
      goto LABEL_58;
    v91 = 0LL;
    v92 = 32LL;
    while ( 1 )
    {
      max_length = v90->max_length;
      if ( (__int64)v91 >= (int)max_length )
        break;
      if ( v91 >= max_length )
        goto LABEL_59;
      masterFigureList = this->fields.masterFigureList;
      if ( (v91 & 1) != 0 )
        v95 = 1;
      else
        v95 = 2;
      entryNameInput = (__int64)MasterFullFigureManager__CreatePrefab_39066928(
                                  v90->m_Items[v91],
                                  0,
                                  v95,
                                  0,
                                  1,
                                  0LL,
                                  0LL);
      if ( masterFigureList )
      {
        v102 = entryNameInput;
        if ( entryNameInput )
        {
          entryNameInput = sub_1C13E60(entryNameInput, masterFigureList->obj.klass->_1.element_class);
          if ( !entryNameInput )
          {
            v103 = sub_1C13FA4(0LL);
            sub_1C13E4C(v103, 0LL);
          }
        }
        if ( v91 >= masterFigureList->max_length )
LABEL_59:
          sub_1C13F88(entryNameInput, v32);
        *(Il2CppClass **)((char *)&masterFigureList->obj.klass + v92) = (Il2CppClass *)v102;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)((char *)masterFigureList + v92),
          v102,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
        v90 = this->fields.masterFigureBaseList;
        ++v91;
        v92 += 8LL;
        if ( v90 )
          continue;
      }
      goto LABEL_58;
    }
  }
  UserNameEntryComponent__onChangeInput(this, v32);
  entryNameInput = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_58;
  entryNameInput = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)entryNameInput,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !entryNameInput )
    goto LABEL_58;
  entryNameInput = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)entryNameInput,
                              1,
                              (const MethodInfo_3238624 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !entryNameInput )
    goto LABEL_58;
  v64 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)entryNameInput;
  cmdSpellIconFemale = this->fields.cmdSpellIconFemale;
  v67 = *(_QWORD *)(entryNameInput + 128);
  v66 = *(_QWORD *)(entryNameInput + 136);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v104.fields.currentCryptoKey = v67;
  *(_QWORD *)&v104.fields.fakeValue = v66;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v104, 0LL);
  if ( !cmdSpellIconFemale )
    goto LABEL_58;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconFemale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconFemale;
  if ( !entryNameInput )
    goto LABEL_58;
  v105.fields.x = 120.0;
  v105.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v105, 0LL);
  cmdSpellIconMale = this->fields.cmdSpellIconMale;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v64[7], 0LL);
  if ( !cmdSpellIconMale )
    goto LABEL_58;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconMale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconMale;
  if ( !entryNameInput )
    goto LABEL_58;
  v106.fields.x = 120.0;
  v106.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v106, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v70 = AvalonSceneManager_TypeInfo;
  v71 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v70 = AvalonSceneManager_TypeInfo;
  }
  entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v70->static_fields->DEFAULT_FADE_TIME;
  if ( !UserNameEntryComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserNameEntryComponent___c_TypeInfo);
    entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  }
  v73 = *(System_Action_o **)(*(_QWORD *)(entryNameInput + 184) + 8LL);
  if ( !v73 )
  {
    if ( !*(_DWORD *)(entryNameInput + 224) )
    {
      j_il2cpp_runtime_class_init_0(entryNameInput);
      entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
    }
    v74 = **(Il2CppObject ***)(entryNameInput + 184);
    v73 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v73, v74, Method_UserNameEntryComponent___c__open_b__25_0__, 0LL);
    static_fields = UserNameEntryComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = v73;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__25_0, (int64_t)v73, v76, v77, v78, v79, v80, v81);
  }
  if ( !v71 )
LABEL_58:
    sub_1C13F80(entryNameInput, v32);
  CommonUI__maskFadein(v71, DEFAULT_FADE_TIME, v73, 0LL);
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
  System_String_o *v12; // x0
  int32_t genderType; // w25
  Il2CppObject *v14; // x20
  System_String_o **v15; // x8
  Il2CppObject *v16; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v20; // x22
  CommonConfirmDialog_ClickDelegate_o *v21; // x23

  if ( (byte_4BB3467 & 1) == 0 )
  {
    sub_1C13D24(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1C13D24(&LocalizationManager_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C13D24(&Method_UserNameEntryComponent_endConfirm__, v5);
    sub_1C13D24(&StringLiteral_5605/*"ENOMORE"*/, v6);
    sub_1C13D24(&StringLiteral_3877/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v7);
    sub_1C13D24(&StringLiteral_3868/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v8);
    sub_1C13D24(&StringLiteral_5606/*"ENTER: "*/, v9);
    byte_4BB3467 = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_15;
  Text = UILineInput__GetText(entryNameInput, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  genderType = this->fields.genderType;
  v14 = (Il2CppObject *)v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = (System_String_o **)(genderType == 1 ? &StringLiteral_5605/*"ENOMORE"*/ : &StringLiteral_5606/*"ENTER: "*/);
  v16 = (Il2CppObject *)LocalizationManager__Get(*v15, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3868/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
  v18 = System_String__Format_62982316(v17, v16, v14, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3877/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  v21 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C13F70(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v21, (Il2CppObject *)this, Method_UserNameEntryComponent_endConfirm__, 0LL);
  if ( !Instance )
LABEL_15:
    sub_1C13F80(entryNameInput, method);
  CommonUI__OpenConfirmDialog((CommonUI_o *)Instance, v20, v18, v21, 0, 0, 0, 0LL);
}


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
  System_String_o *v13; // x0
  __int64 v14; // x1
  ManagerConfig_c *v15; // x8
  System_String_o *v16; // x20
  const MethodInfo *v17; // x2
  NetworkManager_c *v18; // x0
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB3469 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&ManagerConfig_TypeInfo, v3);
    sub_1C13D24(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v4);
    sub_1C13D24(&NetworkManager_TypeInfo, v5);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v7);
    sub_1C13D24(&Method_UserNameEntryComponent_callbackUserNameChange__, v8);
    sub_1C13D24(&StringLiteral_22595/*"offline"*/, v9);
    sub_1C13D24(&StringLiteral_1/*""*/, v10);
    byte_4BB3469 = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_27;
  Text = UILineInput__GetText(entryNameInput, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  v15 = ManagerConfig_TypeInfo;
  v16 = v13;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( !v15->static_fields->UseMock )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BB1DEE )
    {
      sub_1C13D24(&NetworkManager_TypeInfo, v14);
      byte_4BB1DEE = 1;
    }
    v18 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v18 = NetworkManager_TypeInfo;
    }
    if ( v18->static_fields->isLogin )
    {
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_UserNameEntryComponent_callbackUserNameChange__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      entryNameInput = (UILineInput_o *)NetworkManager__getRequest_object_(
                                          v19,
                                          (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
      if ( entryNameInput )
      {
        UserNameChangeRequest__beginRequest(
          (UserNameChangeRequest_o *)entryNameInput,
          v16,
          this->fields.genderType,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
        goto LABEL_23;
      }
LABEL_27:
      sub_1C13F80(entryNameInput, method);
    }
  }
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_27;
  NetworkManager__SetSignup((NetworkManager_o *)entryNameInput, v16, this->fields.genderType, 0LL);
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_27;
  NetworkManager__WriteSignup((NetworkManager_o *)entryNameInput, 0LL);
  UserNameEntryComponent__callbackUserNameChange(this, (System_String_o *)StringLiteral_22595/*"offline"*/, v17);
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
  v20.fields.r = 0.5;
  v20.fields.g = 0.5;
  v20.fields.b = 0.5;
  v20.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)entryNameInput, v20, 0LL);
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
    sub_1C13F80(cmdSpellIconFemale, *(_QWORD *)&gtype);
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
  Il2CppObject *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x20
  PartyOrganizationUtility_o *v18; // x20
  System_Delegate_o *v19; // t1
  SpringPanel_OnFinished_o *v20; // x22
  System_Delegate_o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x8
  SpringPanel_OnFinished_c *v29; // x1
  int32_t childCount; // w0
  int32_t v31; // w20
  int32_t v32; // w21
  struct GenderSelectControl_o **p_genderSel; // x22
  Il2CppObject *Component_object; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  v2 = this;
  if ( (byte_4BB3464 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, method);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&SpringPanel_OnFinished_TypeInfo, v5);
    this = (UserNameEntryComponent_o *)sub_1C13D24(&Method_UserNameEntryComponent_OnCenterOnChildFinished__, v6);
    byte_4BB3464 = 1;
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
    v10 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_2FDF914 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (__int64)v10;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.centerChild, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  }
  v17 = *p_centerChild;
  if ( !v17 )
    goto LABEL_27;
  v19 = *(System_Delegate_o **)(v17 + 40);
  v18 = (PartyOrganizationUtility_o *)(v17 + 40);
  v20 = (SpringPanel_OnFinished_o *)sub_1C13F70(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v20, (Il2CppObject *)v2, Method_UserNameEntryComponent_OnCenterOnChildFinished__, 0LL);
  v21 = System_Delegate__Combine(v19, (System_Delegate_o *)v20, 0LL);
  v28 = (int64_t)v21;
  if ( !v21 )
    goto LABEL_15;
  v29 = SpringPanel_OnFinished_TypeInfo;
  if ( (SpringPanel_OnFinished_c *)v21->klass != SpringPanel_OnFinished_TypeInfo
    || (v18->klass = (PartyOrganizationUtility_c *)v21, (SpringPanel_OnFinished_c *)v21->klass != v29) )
  {
    sub_1C14240(v21);
LABEL_15:
    v18->klass = (PartyOrganizationUtility_c *)v28;
  }
  sub_1C13CC8(v18, v28, v22, v23, v24, v25, v26, v27);
  this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
  if ( !this )
    goto LABEL_27;
  this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v31 = childCount;
    v32 = 0;
    p_genderSel = &v2->fields.genderSel;
    while ( 1 )
    {
      this = (UserNameEntryComponent_o *)v2->fields.loopCtr;
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v32, 0LL);
      if ( !this )
        break;
      this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
      *p_genderSel = (struct GenderSelectControl_o *)Component_object;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v2->fields.genderSel,
        (int64_t)Component_object,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      if ( !*p_genderSel )
        break;
      (*p_genderSel)->fields.idx = v32++;
      if ( v31 == v32 )
        return;
    }
LABEL_27:
    sub_1C13F80(this, method);
  }
}


void __fastcall UserNameEntryComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB346C & 1) == 0 )
  {
    sub_1C13D24(&UserNameEntryComponent___c_TypeInfo, v1);
    byte_4BB346C = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(UserNameEntryComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserNameEntryComponent___c_TypeInfo->static_fields->__9 = (struct UserNameEntryComponent___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)UserNameEntryComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall UserNameEntryComponent___c___ctor(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserNameEntryComponent___c___open_b__25_0(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  ;
}