void __fastcall UserNameEntryComponent___ctor(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UserNameEntryComponent__OnCenterOnChildFinished(
        UserNameEntryComponent_o *this,
        const MethodInfo *method)
{
  struct UICenterOnChild_o *centerChild; // x8
  UnityEngine_GameObject_o *mCenteredObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct GenderSelectControl_o *genderSel; // x8

  if ( (byte_40F9772 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___, method);
    byte_40F9772 = 1;
  }
  centerChild = this->fields.centerChild;
  if ( !centerChild
    || (mCenteredObject = centerChild->fields.mCenteredObject) == 0LL
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    mCenteredObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___),
        this->fields.genderSel = (struct GenderSelectControl_o *)Component_srcLineSprite,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.genderSel,
          (System_Int32_array **)Component_srcLineSprite,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (genderSel = this->fields.genderSel) == 0LL) )
  {
    sub_B170D4();
  }
  this->fields.genderType = (int32_t)genderSel->fields.genderImg;
}


void __fastcall UserNameEntryComponent__Update(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Transform_o *transform; // x0
  float v5; // s0
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView || (transform = UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL )
    sub_B170D4();
  LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
  if ( (UnityEngine_Mathf__RoundToInt(fabsf(v5) / (float)this->fields.cellWidth, 0LL) & 1) != 0 )
    v7 = 1;
  else
    v7 = 2;
  UserNameEntryComponent__setCmdSpellImg(this, v7, v6);
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
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v13; // x20
  NetworkManager_o *Instance; // x0
  NetworkManager_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  CommonUI_o *v20; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21
  UIInput_o *mInput; // x0
  UILineInput_o *entryNameInput; // x0

  if ( (byte_40F9771 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__, v8);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40F9771 = 1;
  }
  v11 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL);
  if ( v11 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)v11);
    if ( SelfUserGame )
    {
      v13 = SelfUserGame;
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      NetworkManager__SetSignup(Instance, v13->fields.name, v13->fields.genderType, 0LL);
      v15 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !v15 )
        goto LABEL_16;
      NetworkManager__WriteSignup(v15, 0LL);
    }
    v20 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v21 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
    v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
    System_Action___ctor(
      v23,
      (Il2CppObject *)this,
      Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__,
      0LL);
    if ( v20 )
    {
      CommonUI__maskFadeout(v20, 1, DEFAULT_FADE_TIME, v23, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
  mInput = this->fields.mInput;
  if ( !mInput )
    goto LABEL_16;
  UIInput__set_value(mInput, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_16;
  UILineInput__SetInputEnable(entryNameInput, 1, 0LL);
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
  UnityEngine_Component_o *v14; // x0
  UnityEngine_Object_o *gameObject; // x20

  v8 = this;
  if ( (byte_40F976A & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F976A = 1;
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
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v14 = (UnityEngine_Component_o *)*((_QWORD *)&klass->_1.byval_arg.data + v12);
      if ( v14 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
        klass = p_masterFigureList->klass;
        ++v12;
        if ( p_masterFigureList->klass )
          continue;
      }
      sub_B170D4();
    }
    p_masterFigureList->klass = 0LL;
    sub_B16F98(p_masterFigureList, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__endConfirm(UserNameEntryComponent_o *this, bool res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F976F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, res);
    byte_40F976F = 1;
  }
  if ( res )
    UserNameEntryComponent__requestUserNameChange(this, (const MethodInfo *)res);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  struct UIButton_o *confirmBtn; // x0
  int v12; // s0
  UIWidget_o *confirmTxt; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x0

  if ( (byte_40F976C & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v3);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F976C = 1;
  }
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_24;
  Text = UILineInput__GetText(entryNameInput, 0LL);
  if ( System_String__IsNullOrEmpty(Text, 0LL) )
    goto LABEL_12;
  if ( !Text )
    goto LABEL_24;
  v7 = System_String__Trim_43731064(Text, 0LL);
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
  if ( (System_String__IndexOf_43816080(Text, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__ReplaceNameTag(Text, 0, 0LL);
    if ( v17 )
    {
      v18 = System_String__Trim_43731064(v17, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v18, 0LL);
      goto LABEL_13;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_12:
  IsNullOrEmpty = 1;
LABEL_13:
  confirmBtn = this->fields.confirmBtn;
  if ( !confirmBtn )
    goto LABEL_24;
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))confirmBtn->klass->vtable._5_set_isEnabled.method)(
    confirmBtn,
    !IsNullOrEmpty,
    confirmBtn->klass->vtable._6_OnInit.methodPtr);
  *(UnityEngine_Color_o *)&v12 = IsNullOrEmpty ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  if ( !confirmTxt )
    goto LABEL_24;
  UIWidget__set_color(confirmTxt, *(UnityEngine_Color_o *)&v12, 0LL);
}


void __fastcall UserNameEntryComponent__onClickInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40F976D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F976D = 1;
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
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  UIInput_OnValidate_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UILabel_o *mInfoLabelMain; // x20
  System_String_o *v42; // x0
  UILabel_o *mInfoLabelSub; // x20
  System_String_o *v44; // x0
  UILabel_o *mInfoLabelInput; // x20
  System_String_o *v46; // x0
  UILabel_o *mInfoLabelFlick; // x20
  System_String_o *v48; // x0
  UnityEngine_Object_o *mScrollArrowRight; // x21
  struct UnityEngine_GameObject_o *mArrowRightPrefab; // x21
  UnityEngine_GameObject_o *v51; // x21
  struct ScrollArrowComponent_o *Component_srcLineSprite; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Object_o *mScrollArrowLeft; // x21
  const MethodInfo *v60; // x1
  struct UnityEngine_GameObject_o *mArrowLeftPrefab; // x21
  UnityEngine_GameObject_o *v62; // x21
  struct ScrollArrowComponent_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UILineInput_o *entryNameInput; // x0
  const MethodInfo *v71; // x1
  __int64 v72; // x2
  struct UnityEngine_GameObject_array *masterFigureBaseList; // x8
  struct UIMasterFullFigureTexture_array *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UIMasterFullFigureTexture_o *Prefab_27262724; // x0
  System_String_array **v82; // x2
  struct UnityEngine_GameObject_array *v83; // x8
  unsigned __int64 v84; // x22
  __int64 v85; // x23
  unsigned __int64 max_length; // x9
  struct UIMasterFullFigureTexture_array *masterFigureList; // x25
  int32_t v88; // w2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v98; // x20
  CommandSpellIconComponent_o *cmdSpellIconFemale; // x21
  WarEntity_c *klass; // x22
  __int64 v101; // x23
  int32_t v102; // w0
  CommandSpellIconComponent_o *v103; // x0
  CommandSpellIconComponent_o *cmdSpellIconMale; // x21
  int32_t v105; // w0
  CommandSpellIconComponent_o *v106; // x0
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  CommonUI_o *v111; // x19
  AvalonSceneManager_c *v112; // x8
  UserNameEntryComponent___c_c *v113; // x0
  float DEFAULT_FADE_TIME; // s8
  struct UserNameEntryComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__25_0; // x20
  Il2CppObject *v117; // x21
  struct UserNameEntryComponent___c_StaticFields *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  UnityEngine_Vector2_o v126; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v127; // 0:s0.4,4:s1.4

  if ( (byte_40F9769 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, closed_act);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_EmojiUtility_ValidateNameText__, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&UIInput_OnValidate_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B16FFC(&Method_UserNameEntryComponent___c__open_b__25_0__, v22);
    sub_B16FFC(&UserNameEntryComponent___c_TypeInfo, v23);
    sub_B16FFC(&UIMasterFullFigureTexture___TypeInfo, v24);
    sub_B16FFC(&StringLiteral_7273/*"INPUT_NAME_INFO"*/, v25);
    sub_B16FFC(&StringLiteral_7272/*"INPUT_NAME_ANNOUNCE"*/, v26);
    sub_B16FFC(&StringLiteral_11590/*"SELECT_FIGURE_INFO"*/, v27);
    sub_B16FFC(&StringLiteral_7274/*"INPUT_NAME_LIMIT_NUM"*/, v28);
    byte_40F9769 = 1;
  }
  this->fields.mClosedAct = closed_act;
  sub_B16F98(
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
  v34 = (UIInput_OnValidate_o *)sub_B170CC(UIInput_OnValidate_TypeInfo, v30, v31, v32, v33);
  UIInput_OnValidate___ctor(v34, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !mInput )
    goto LABEL_44;
  mInput->fields.onValidate = v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&mInput->fields.onValidate,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  mInfoLabelMain = this->fields.mInfoLabelMain;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_7272/*"INPUT_NAME_ANNOUNCE"*/, 0LL);
  if ( !mInfoLabelMain )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelMain, v42, 0LL);
  mInfoLabelSub = this->fields.mInfoLabelSub;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_7273/*"INPUT_NAME_INFO"*/, 0LL);
  if ( !mInfoLabelSub )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelSub, v44, 0LL);
  mInfoLabelInput = this->fields.mInfoLabelInput;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_7274/*"INPUT_NAME_LIMIT_NUM"*/, 0LL);
  if ( !mInfoLabelInput )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelInput, v46, 0LL);
  mInfoLabelFlick = this->fields.mInfoLabelFlick;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11590/*"SELECT_FIGURE_INFO"*/, 0LL);
  if ( !mInfoLabelFlick )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelFlick, v48, 0LL);
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
    v51 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mArrowRightPrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_27425996(v51, this->fields.mArrowRightRoot, 0LL);
    if ( !v51 )
      goto LABEL_44;
    Component_srcLineSprite = (struct ScrollArrowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v51,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowRight = Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mScrollArrowRight,
      (System_Int32_array **)Component_srcLineSprite,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
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
    v62 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mArrowLeftPrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_27425996(v62, this->fields.mArrowLeftRoot, 0LL);
    if ( !v62 )
      goto LABEL_44;
    v63 = (struct ScrollArrowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v62,
                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowLeft = v63;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mScrollArrowLeft,
      (System_Int32_array **)v63,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  UserNameEntryComponent__setEntry(this, v60);
  entryNameInput = this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_44;
  UILineInput__SetInputEnable(entryNameInput, 1, 0LL);
  if ( !this->fields.masterFigureList )
  {
    masterFigureBaseList = this->fields.masterFigureBaseList;
    if ( !masterFigureBaseList )
      goto LABEL_44;
    v74 = (struct UIMasterFullFigureTexture_array *)sub_B17014(
                                                      UIMasterFullFigureTexture___TypeInfo,
                                                      masterFigureBaseList->max_length,
                                                      v72);
    this->fields.masterFigureList = v74;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.masterFigureList,
      (System_Int32_array **)v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    v83 = this->fields.masterFigureBaseList;
    if ( !v83 )
      goto LABEL_44;
    v84 = 0LL;
    v85 = 32LL;
    while ( 1 )
    {
      max_length = v83->max_length;
      if ( (__int64)v84 >= (int)max_length )
        break;
      if ( v84 >= max_length )
        goto LABEL_68;
      masterFigureList = this->fields.masterFigureList;
      if ( (v84 & 1) != 0 )
        v88 = 1;
      else
        v88 = 2;
      Prefab_27262724 = MasterFullFigureManager__CreatePrefab_27262724(v83->m_Items[v84], 0, v88, 0, 1, 0LL, 0LL);
      if ( masterFigureList )
      {
        v94 = (System_Int32_array **)Prefab_27262724;
        if ( Prefab_27262724 )
        {
          Prefab_27262724 = (UIMasterFullFigureTexture_o *)sub_B170BC(
                                                             Prefab_27262724,
                                                             masterFigureList->obj.klass->_1.element_class);
          if ( !Prefab_27262724 )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
        }
        if ( v84 >= masterFigureList->max_length )
        {
LABEL_68:
          sub_B17100(Prefab_27262724, v71, v82);
          sub_B170A0();
        }
        *(Il2CppClass **)((char *)&masterFigureList->obj.klass + v85) = (Il2CppClass *)v94;
        sub_B16F98((BattleServantConfConponent_o *)((char *)masterFigureList + v85), v94, v82, v89, v90, v91, v92, v93);
        v83 = this->fields.masterFigureBaseList;
        ++v84;
        v85 += 8LL;
        if ( v83 )
          continue;
      }
      goto LABEL_44;
    }
  }
  UserNameEntryComponent__onChangeInput(this, v71);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_44;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             1,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_44;
  v98 = Entity;
  cmdSpellIconFemale = this->fields.cmdSpellIconFemale;
  v101 = *(_QWORD *)&Entity->fields.assetId;
  klass = Entity[1].klass;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v125.fields.currentCryptoKey = v101;
  *(_QWORD *)&v125.fields.fakeValue = klass;
  v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v125, 0LL);
  if ( !cmdSpellIconFemale )
    goto LABEL_44;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconFemale, v102, 0LL);
  v103 = this->fields.cmdSpellIconFemale;
  if ( !v103 )
    goto LABEL_44;
  v126.fields.x = 120.0;
  v126.fields.y = 120.0;
  CommandSpellIconComponent__SetSize(v103, v126, 0LL);
  cmdSpellIconMale = this->fields.cmdSpellIconMale;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v98->fields.coordinate,
           0LL);
  if ( !cmdSpellIconMale )
    goto LABEL_44;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconMale, v105, 0LL);
  v106 = this->fields.cmdSpellIconMale;
  if ( !v106 )
    goto LABEL_44;
  v127.fields.x = 120.0;
  v127.fields.y = 120.0;
  CommandSpellIconComponent__SetSize(v106, v127, 0LL);
  v111 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v112 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v112 = AvalonSceneManager_TypeInfo;
  }
  v113 = UserNameEntryComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v112->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(UserNameEntryComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserNameEntryComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserNameEntryComponent___c_TypeInfo);
    v113 = UserNameEntryComponent___c_TypeInfo;
  }
  static_fields = v113->static_fields;
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v113->vtable._0_Equals.methodPtr) & 4) != 0 && !v113->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v113);
      static_fields = UserNameEntryComponent___c_TypeInfo->static_fields;
    }
    v117 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v107, v108, v109, v110);
    System_Action___ctor(_9__25_0, v117, Method_UserNameEntryComponent___c__open_b__25_0__, 0LL);
    v118 = UserNameEntryComponent___c_TypeInfo->static_fields;
    v118->__9__25_0 = _9__25_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v118->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
  }
  if ( !v111 )
LABEL_44:
    sub_B170D4();
  CommonUI__maskFadein(v111, DEFAULT_FADE_TIME, _9__25_0, 0LL);
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  CommonConfirmDialog_ClickDelegate_o *v23; // x23

  if ( (byte_40F976E & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_UserNameEntryComponent_endConfirm__, v5);
    sub_B16FFC(&StringLiteral_5495/*"ENTRY_GENDER_MAN"*/, v6);
    sub_B16FFC(&StringLiteral_3325/*"CONFIRM_TITLE_MESSAGE"*/, v7);
    sub_B16FFC(&StringLiteral_3316/*"CONFIRM_INFO_MESSAGE"*/, v8);
    sub_B16FFC(&StringLiteral_5496/*"ENTRY_GENDER_WOMAN"*/, v9);
    byte_40F976E = 1;
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
    v13 = &StringLiteral_5495/*"ENTRY_GENDER_MAN"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_5496/*"ENTRY_GENDER_WOMAN"*/;
  }
  v14 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v13, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3316/*"CONFIRM_INFO_MESSAGE"*/, 0LL);
  v16 = System_String__Format_43739268(v15, v14, v12, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3325/*"CONFIRM_TITLE_MESSAGE"*/, 0LL);
  v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                 v19,
                                                 v20,
                                                 v21,
                                                 v22);
  CommonConfirmDialog_ClickDelegate___ctor(v23, (Il2CppObject *)this, Method_UserNameEntryComponent_endConfirm__, 0LL);
  if ( !Instance )
LABEL_21:
    sub_B170D4();
  CommonUI__OpenConfirmDialog(Instance, v18, v16, v23, 0, 0, 0, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_String_o *v17; // x20
  ManagerConfig_c *v18; // x8
  NetworkManager_o *Instance; // x0
  NetworkManager_o *v20; // x0
  const MethodInfo *v21; // x2
  NetworkManager_c *v22; // x0
  NetworkManager_ResultCallbackFunc_o *v23; // x21
  UserNameChangeRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v25; // x4
  struct UIButton_o *confirmBtn; // x0
  UIWidget_o *confirmTxt; // x20
  int v28; // s0
  UILineInput_o *v32; // x0

  if ( (byte_40F9770 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&ManagerConfig_TypeInfo, v3);
    sub_B16FFC(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v7);
    sub_B16FFC(&Method_UserNameEntryComponent_callbackUserNameChange__, v8);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40F9770 = 1;
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
  v17 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  v18 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v18 = ManagerConfig_TypeInfo;
  }
  if ( !v18->static_fields->UseMock )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( !byte_40F6F91 )
    {
      sub_B16FFC(&NetworkManager_TypeInfo, v13);
      byte_40F6F91 = 1;
    }
    v22 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v22 = NetworkManager_TypeInfo;
    }
    if ( v22->static_fields->isLogin )
    {
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v13,
                                                     v14,
                                                     v15,
                                                     v16);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_UserNameEntryComponent_callbackUserNameChange__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (UserNameChangeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v23,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        UserNameChangeRequest__beginRequest(
          Request_WarBoardWallAttackRequest,
          v17,
          this->fields.genderType,
          (System_String_o *)StringLiteral_1/*""*/,
          v25);
        goto LABEL_28;
      }
LABEL_32:
      sub_B170D4();
    }
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  NetworkManager__SetSignup(Instance, v17, this->fields.genderType, 0LL);
  v20 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !v20 )
    goto LABEL_32;
  NetworkManager__WriteSignup(v20, 0LL);
  UserNameEntryComponent__callbackUserNameChange(this, (System_String_o *)StringLiteral_21129/*"ok"*/, v21);
LABEL_28:
  confirmBtn = this->fields.confirmBtn;
  if ( !confirmBtn )
    goto LABEL_32;
  ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))confirmBtn->klass->vtable._5_set_isEnabled.method)(
    confirmBtn,
    0LL,
    confirmBtn->klass->vtable._6_OnInit.methodPtr);
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_gray(0LL);
  if ( !confirmTxt )
    goto LABEL_32;
  UIWidget__set_color(confirmTxt, *(UnityEngine_Color_o *)&v28, 0LL);
  v32 = this->fields.entryNameInput;
  if ( !v32 )
    goto LABEL_32;
  UILineInput__SetInputEnable(v32, 0, 0LL);
}


void __fastcall UserNameEntryComponent__setCmdSpellImg(
        UserNameEntryComponent_o *this,
        int32_t gtype,
        const MethodInfo *method)
{
  UnityEngine_Component_o *cmdSpellIconFemale; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *cmdSpellIconMale; // x0
  UnityEngine_GameObject_o *v8; // x0
  bool v9; // w1
  UnityEngine_Component_o *v10; // x0

  if ( this->fields.genderType != gtype )
  {
    cmdSpellIconFemale = (UnityEngine_Component_o *)this->fields.cmdSpellIconFemale;
    this->fields.genderType = gtype;
    if ( cmdSpellIconFemale )
    {
      gameObject = UnityEngine_Component__get_gameObject(cmdSpellIconFemale, 0LL);
      if ( gameObject )
      {
        if ( gtype == 2 )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          cmdSpellIconMale = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
          if ( cmdSpellIconMale )
          {
            v8 = UnityEngine_Component__get_gameObject(cmdSpellIconMale, 0LL);
            if ( v8 )
            {
              v9 = 0;
LABEL_11:
              UnityEngine_GameObject__SetActive(v8, v9, 0LL);
              return;
            }
          }
        }
        else
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          v10 = (UnityEngine_Component_o *)this->fields.cmdSpellIconMale;
          if ( v10 )
          {
            v8 = UnityEngine_Component__get_gameObject(v10, 0LL);
            if ( v8 )
            {
              v9 = 1;
              goto LABEL_11;
            }
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall UserNameEntryComponent__setEntry(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UIWrapContent_o *loopCtr; // x8
  struct UICenterOnChild_o **p_centerChild; // x20
  UnityEngine_Object_o *centerChild; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UICenterOnChild_o *v23; // x20
  BattleServantConfConponent_o *p_onFinished; // x20
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v26; // x22
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Component_o *v34; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v37; // w20
  int32_t v38; // w21
  struct GenderSelectControl_o **p_genderSel; // x22
  UnityEngine_Component_o *v40; // x0
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *v43; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UserNameEntryComponent_o *v51; // x0
  const MethodInfo *v52; // x1

  if ( (byte_40F976B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&SpringPanel_OnFinished_TypeInfo, v5);
    sub_B16FFC(&Method_UserNameEntryComponent_OnCenterOnChildFinished__, v6);
    byte_40F976B = 1;
  }
  loopCtr = this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_25;
  p_centerChild = &this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  this->fields.cellWidth = *(_DWORD *)&loopCtr->fields.cullContent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)this->fields.loopCtr;
    if ( !v14 )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !gameObject )
      goto LABEL_25;
    v16 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   gameObject,
                                   (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v16;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.centerChild, v16, v17, v18, v19, v20, v21, v22);
  }
  v23 = *p_centerChild;
  if ( !v23 )
    goto LABEL_25;
  onFinished = (System_Delegate_o *)v23->fields.onFinished;
  p_onFinished = (BattleServantConfConponent_o *)&v23->fields.onFinished;
  v26 = (SpringPanel_OnFinished_o *)sub_B170CC(SpringPanel_OnFinished_TypeInfo, v10, v11, v12, v13);
  SpringPanel_OnFinished___ctor(v26, (Il2CppObject *)this, Method_UserNameEntryComponent_OnCenterOnChildFinished__, 0LL);
  v27 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v26, 0LL);
  if ( v27 && *v27 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
  {
    v51 = (UserNameEntryComponent_o *)sub_B173C8(v27);
    UserNameEntryComponent__onChangeInput(v51, v52);
  }
  else
  {
    p_onFinished->klass = (BattleServantConfConponent_c *)v27;
    sub_B16F98(p_onFinished, v27, v28, v29, v30, v31, v32, v33);
    v34 = (UnityEngine_Component_o *)this->fields.loopCtr;
    if ( !v34 )
      goto LABEL_25;
    transform = UnityEngine_Component__get_transform(v34, 0LL);
    if ( !transform )
      goto LABEL_25;
    childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
    if ( childCount >= 1 )
    {
      v37 = childCount;
      v38 = 0;
      p_genderSel = &this->fields.genderSel;
      while ( 1 )
      {
        v40 = (UnityEngine_Component_o *)this->fields.loopCtr;
        if ( !v40 )
          break;
        v41 = UnityEngine_Component__get_transform(v40, 0LL);
        if ( !v41 )
          break;
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v41, v38, 0LL);
        if ( !Child )
          break;
        v43 = UnityEngine_Component__get_gameObject(Child, 0LL);
        if ( !v43 )
          break;
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v43,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
        *p_genderSel = (struct GenderSelectControl_o *)Component_srcLineSprite;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.genderSel,
          Component_srcLineSprite,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        if ( !*p_genderSel )
          break;
        LODWORD((*p_genderSel)[1].klass) = v38++;
        if ( v38 >= v37 )
          return;
      }
LABEL_25:
      sub_B170D4();
    }
  }
}


void __fastcall UserNameEntryComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F798A & 1) == 0 )
  {
    sub_B16FFC(&UserNameEntryComponent___c_TypeInfo, v1);
    byte_40F798A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserNameEntryComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserNameEntryComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall UserNameEntryComponent___c___ctor(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserNameEntryComponent___c___open_b__25_0(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  ;
}