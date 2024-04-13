void __fastcall UserNameEntryComponent___ctor(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UserNameEntryComponent__OnCenterOnChildFinished(
        UserNameEntryComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserNameEntryComponent_o *v4; // x19
  struct UICenterOnChild_o *centerChild; // x8
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct GenderSelectControl_o *genderSel; // x8

  v4 = this;
  if ( (byte_42E71CA & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_B5D5C4(
                                         &Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___,
                                         (_DWORD)method,
                                         v2,
                                         v3);
    byte_42E71CA = 1;
  }
  centerChild = v4->fields.centerChild;
  if ( !centerChild
    || (this = (UserNameEntryComponent_o *)centerChild->fields.mCenteredObject) == 0LL
    || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)this,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___),
        v4->fields.genderSel = (struct GenderSelectControl_o *)Component_srcLineSprite,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v4->fields.genderSel,
          Component_srcLineSprite,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (genderSel = v4->fields.genderSel) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  v4->fields.genderType = (int32_t)genderSel->fields.genderImg;
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
    sub_B5D69C(scrollView, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v27; // x20
  NetworkManager_o *Instance; // x0
  CommonUI_o *v29; // x20
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_42E71C9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42E71C9 = 1;
  }
  v24 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL);
  if ( v24 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)v24);
    if ( SelfUserGame )
    {
      v27 = SelfUserGame;
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      NetworkManager__SetSignup(Instance, v27->fields.name, v27->fields.genderType, 0LL);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      NetworkManager__WriteSignup(Instance, 0LL);
    }
    v29 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v30 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v30 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
    v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)this,
      Method_UserNameEntryComponent__callbackUserNameChange_b__33_0__,
      0LL);
    if ( v29 )
    {
      CommonUI__maskFadeout(v29, 1, DEFAULT_FADE_TIME, v32, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(Instance, v25);
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
  if ( (byte_42E71C2 & 1) == 0 )
  {
    this = (UserNameEntryComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E71C2 = 1;
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
        v15 = sub_B5D6C8(this);
        sub_B5D668(v15, 0LL);
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
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
        klass = p_masterFigureList->klass;
        ++v12;
        if ( p_masterFigureList->klass )
          continue;
      }
      sub_B5D69C(this, method);
    }
    p_masterFigureList->klass = 0LL;
    sub_B5D560(p_masterFigureList, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__endConfirm(UserNameEntryComponent_o *this, bool res, const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42E71C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, res, (_DWORD)method, v3);
    byte_42E71C7 = 1;
  }
  if ( res )
    UserNameEntryComponent__requestUserNameChange(this, (const MethodInfo *)res);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


int32_t __fastcall UserNameEntryComponent__getGendetType(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  return this->fields.genderType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__onChangeInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v13; // x0
  int32_t v14; // w21
  uint16_t Chars; // w0
  bool IsNullOrEmpty; // w20
  int v17; // s0
  System_String_o *v21; // x0

  if ( (byte_42E71C4 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E71C4 = 1;
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
  v13 = System_String__Trim_44565120(Text, 0LL);
  if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_12;
  if ( Text->fields.m_stringLength >= 1 )
  {
    v14 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v14, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        goto LABEL_12;
    }
    while ( ++v14 < Text->fields.m_stringLength );
  }
  if ( (System_String__IndexOf_44650136(Text, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    entryNameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0LL);
    if ( entryNameInput )
    {
      v21 = System_String__Trim_44565120((System_String_o *)entryNameInput, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v21, 0LL);
      goto LABEL_13;
    }
LABEL_24:
    sub_B5D69C(entryNameInput, method);
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
  *(UnityEngine_Color_o *)&v17 = IsNullOrEmpty ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  entryNameInput = (UILineInput_o *)this->fields.confirmTxt;
  if ( !entryNameInput )
    goto LABEL_24;
  UIWidget__set_color((UIWidget_o *)entryNameInput, *(UnityEngine_Color_o *)&v17, 0LL);
}


void __fastcall UserNameEntryComponent__onClickInput(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42E71C5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E71C5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  UserNameEntryComponent__openConfirm(this, v5);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  struct UIInput_o *mInput; // x20
  UIInput_OnValidate_o *v68; // x21
  __int64 entryNameInput; // x0
  const MethodInfo *v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  UILabel_o *mInfoLabelMain; // x20
  UILabel_o *mInfoLabelSub; // x20
  UILabel_o *mInfoLabelInput; // x20
  UILabel_o *mInfoLabelFlick; // x20
  UnityEngine_Object_o *mScrollArrowRight; // x21
  struct UnityEngine_GameObject_o *mArrowRightPrefab; // x21
  UnityEngine_GameObject_o *v83; // x21
  struct ScrollArrowComponent_o *Component_srcLineSprite; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  UnityEngine_Object_o *mScrollArrowLeft; // x21
  const MethodInfo *v92; // x1
  struct UnityEngine_GameObject_o *mArrowLeftPrefab; // x21
  UnityEngine_GameObject_o *v94; // x21
  struct ScrollArrowComponent_o *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct UnityEngine_GameObject_array *masterFigureBaseList; // x8
  struct UIMasterFullFigureTexture_array *v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  struct UnityEngine_GameObject_array *v110; // x8
  unsigned __int64 v111; // x22
  __int64 v112; // x23
  unsigned __int64 max_length; // x9
  struct UIMasterFullFigureTexture_array *masterFigureList; // x25
  int32_t v115; // w2
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v123; // x20
  CommandSpellIconComponent_o *cmdSpellIconFemale; // x21
  __int64 v125; // x22
  __int64 v126; // x23
  CommandSpellIconComponent_o *cmdSpellIconMale; // x21
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v129; // x8
  float DEFAULT_FADE_TIME; // s8
  struct UserNameEntryComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__25_0; // x20
  Il2CppObject *v133; // x21
  struct UserNameEntryComponent___c_StaticFields *v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  __int64 v141; // x0
  __int64 v142; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  UnityEngine_Vector2_o v144; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v145; // 0:s0.4,4:s1.4

  if ( (byte_42E71C1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)closed_act, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_EmojiUtility_ValidateNameText__, v19, v20, v21);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v28, v29, v30);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&UIInput_OnValidate_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41, v42);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v43, v44, v45);
    sub_B5D5C4(&Method_UserNameEntryComponent___c__open_b__25_0__, v46, v47, v48);
    sub_B5D5C4(&UserNameEntryComponent___c_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&UIMasterFullFigureTexture___TypeInfo, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_7383/*"INPUT_NAME_INFO"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_7382/*"INPUT_NAME_ANNOUNCE"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_11759/*"SELECT_FIGURE_INFO"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_7384/*"INPUT_NAME_LIMIT_NUM"*/, v64, v65, v66);
    byte_42E71C1 = 1;
  }
  this->fields.mClosedAct = closed_act;
  sub_B5D560(
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
  v68 = (UIInput_OnValidate_o *)sub_B5D694(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v68, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !mInput )
    goto LABEL_44;
  mInput->fields.onValidate = v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&mInput->fields.onValidate,
    (System_Int32_array **)v68,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  mInfoLabelMain = this->fields.mInfoLabelMain;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7382/*"INPUT_NAME_ANNOUNCE"*/, 0LL);
  if ( !mInfoLabelMain )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelMain, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelSub = this->fields.mInfoLabelSub;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7383/*"INPUT_NAME_INFO"*/, 0LL);
  if ( !mInfoLabelSub )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelSub, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelInput = this->fields.mInfoLabelInput;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7384/*"INPUT_NAME_LIMIT_NUM"*/, 0LL);
  if ( !mInfoLabelInput )
    goto LABEL_44;
  UILabel__set_text(mInfoLabelInput, (System_String_o *)entryNameInput, 0LL);
  mInfoLabelFlick = this->fields.mInfoLabelFlick;
  entryNameInput = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SELECT_FIGURE_INFO"*/, 0LL);
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
    v83 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mArrowRightPrefab,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_32436524(v83, this->fields.mArrowRightRoot, 0LL);
    if ( !v83 )
      goto LABEL_44;
    Component_srcLineSprite = (struct ScrollArrowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v83,
                                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowRight = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mScrollArrowRight,
      (System_Int32_array **)Component_srcLineSprite,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
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
    v94 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mArrowLeftPrefab,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_32436524(v94, this->fields.mArrowLeftRoot, 0LL);
    if ( !v94 )
      goto LABEL_44;
    v95 = (struct ScrollArrowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v94,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScrollArrowComponent___);
    this->fields.mScrollArrowLeft = v95;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mScrollArrowLeft,
      (System_Int32_array **)v95,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101);
  }
  UserNameEntryComponent__setEntry(this, v92);
  entryNameInput = (__int64)this->fields.entryNameInput;
  if ( !entryNameInput )
    goto LABEL_44;
  UILineInput__SetInputEnable((UILineInput_o *)entryNameInput, 1, 0LL);
  if ( !this->fields.masterFigureList )
  {
    masterFigureBaseList = this->fields.masterFigureBaseList;
    if ( !masterFigureBaseList )
      goto LABEL_44;
    v103 = (struct UIMasterFullFigureTexture_array *)sub_B5D5DC(
                                                       UIMasterFullFigureTexture___TypeInfo,
                                                       masterFigureBaseList->max_length);
    this->fields.masterFigureList = v103;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.masterFigureList,
      (System_Int32_array **)v103,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
    v110 = this->fields.masterFigureBaseList;
    if ( !v110 )
      goto LABEL_44;
    v111 = 0LL;
    v112 = 32LL;
    while ( 1 )
    {
      max_length = v110->max_length;
      if ( (__int64)v111 >= (int)max_length )
        break;
      if ( v111 >= max_length )
        goto LABEL_68;
      masterFigureList = this->fields.masterFigureList;
      if ( (v111 & 1) != 0 )
        v115 = 1;
      else
        v115 = 2;
      entryNameInput = (__int64)MasterFullFigureManager__CreatePrefab_25267500(
                                  v110->m_Items[v111],
                                  0,
                                  v115,
                                  0,
                                  1,
                                  0LL,
                                  0LL);
      if ( masterFigureList )
      {
        v122 = (System_Int32_array **)entryNameInput;
        if ( entryNameInput )
        {
          entryNameInput = sub_B5D684(entryNameInput, masterFigureList->obj.klass->_1.element_class);
          if ( !entryNameInput )
          {
            v142 = sub_B5D6BC();
            sub_B5D668(v142, 0LL);
          }
        }
        if ( v111 >= masterFigureList->max_length )
        {
LABEL_68:
          v141 = sub_B5D6C8(entryNameInput);
          sub_B5D668(v141, 0LL);
        }
        *(Il2CppClass **)((char *)&masterFigureList->obj.klass + v112) = (Il2CppClass *)v122;
        sub_B5D560(
          (BattleServantConfConponent_o *)((char *)masterFigureList + v112),
          v122,
          v116,
          v117,
          v118,
          v119,
          v120,
          v121);
        v110 = this->fields.masterFigureBaseList;
        ++v111;
        v112 += 8LL;
        if ( v110 )
          continue;
      }
      goto LABEL_44;
    }
  }
  UserNameEntryComponent__onChangeInput(this, v70);
  entryNameInput = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_44;
  entryNameInput = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)entryNameInput,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !entryNameInput )
    goto LABEL_44;
  entryNameInput = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)entryNameInput,
                              1,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !entryNameInput )
    goto LABEL_44;
  v123 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)entryNameInput;
  cmdSpellIconFemale = this->fields.cmdSpellIconFemale;
  v126 = *(_QWORD *)(entryNameInput + 128);
  v125 = *(_QWORD *)(entryNameInput + 136);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v143.fields.currentCryptoKey = v126;
  *(_QWORD *)&v143.fields.fakeValue = v125;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v143, 0LL);
  if ( !cmdSpellIconFemale )
    goto LABEL_44;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconFemale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconFemale;
  if ( !entryNameInput )
    goto LABEL_44;
  v144.fields.x = 120.0;
  v144.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v144, 0LL);
  cmdSpellIconMale = this->fields.cmdSpellIconMale;
  entryNameInput = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v123[7], 0LL);
  if ( !cmdSpellIconMale )
    goto LABEL_44;
  CommandSpellIconComponent__SetChangeCmdSpellData(cmdSpellIconMale, entryNameInput, 0LL);
  entryNameInput = (__int64)this->fields.cmdSpellIconMale;
  if ( !entryNameInput )
    goto LABEL_44;
  v145.fields.x = 120.0;
  v145.fields.y = 120.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)entryNameInput, v145, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v129 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v129 = AvalonSceneManager_TypeInfo;
  }
  entryNameInput = (__int64)UserNameEntryComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v129->static_fields->DEFAULT_FADE_TIME;
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
    v133 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v133, Method_UserNameEntryComponent___c__open_b__25_0__, 0LL);
    v134 = UserNameEntryComponent___c_TypeInfo->static_fields;
    v134->__9__25_0 = _9__25_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v134->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v135,
      v136,
      v137,
      v138,
      v139,
      v140);
  }
  if ( !Instance )
LABEL_44:
    sub_B5D69C(entryNameInput, v70);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__25_0, 0LL);
}


void __fastcall UserNameEntryComponent__openConfirm(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  Il2CppObject *v28; // x20
  __int64 *v29; // x8
  Il2CppObject *v30; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v34; // x22
  CommonConfirmDialog_ClickDelegate_o *v35; // x23

  if ( (byte_42E71C6 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_UserNameEntryComponent_endConfirm__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5587/*"ENTRY_GENDER_MAN"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_3400/*"CONFIRM_TITLE_MESSAGE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_3391/*"CONFIRM_INFO_MESSAGE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5588/*"ENTRY_GENDER_WOMAN"*/, v23, v24, v25);
    byte_42E71C6 = 1;
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
  v28 = (Il2CppObject *)LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  if ( this->fields.genderType == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = &StringLiteral_5587/*"ENTRY_GENDER_MAN"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = &StringLiteral_5588/*"ENTRY_GENDER_WOMAN"*/;
  }
  v30 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v29, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3391/*"CONFIRM_INFO_MESSAGE"*/, 0LL);
  v32 = System_String__Format_44573324(v31, v30, v28, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3400/*"CONFIRM_TITLE_MESSAGE"*/, 0LL);
  v35 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v35, (Il2CppObject *)this, Method_UserNameEntryComponent_endConfirm__, 0LL);
  if ( !Instance )
LABEL_21:
    sub_B5D69C(entryNameInput, method);
  CommonUI__OpenConfirmDialog(Instance, v34, v32, v35, 0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserNameEntryComponent__requestUserNameChange(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UILineInput_o *entryNameInput; // x0
  System_String_o *Text; // x20
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  System_String_o *v34; // x20
  ManagerConfig_c *v35; // x8
  const MethodInfo *v36; // x2
  NetworkManager_c *v37; // x0
  NetworkManager_ResultCallbackFunc_o *v38; // x21
  const MethodInfo *v39; // x4
  UIWidget_o *confirmTxt; // x20
  int v41; // s0

  if ( (byte_42E71C8 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_UserNameEntryComponent_callbackUserNameChange__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42E71C8 = 1;
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
  v34 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
  v35 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v35 = ManagerConfig_TypeInfo;
  }
  if ( !v35->static_fields->UseMock )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( !byte_42E665F )
    {
      sub_B5D5C4(&NetworkManager_TypeInfo, v31, v32, v33);
      byte_42E665F = 1;
    }
    v37 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v37 = NetworkManager_TypeInfo;
    }
    if ( v37->static_fields->isLogin )
    {
      v38 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_UserNameEntryComponent_callbackUserNameChange__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      entryNameInput = (UILineInput_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v38,
                                          (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
      if ( entryNameInput )
      {
        UserNameChangeRequest__beginRequest(
          (UserNameChangeRequest_o *)entryNameInput,
          v34,
          this->fields.genderType,
          (System_String_o *)StringLiteral_1/*""*/,
          v39);
        goto LABEL_28;
      }
LABEL_32:
      sub_B5D69C(entryNameInput, method);
    }
  }
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_32;
  NetworkManager__SetSignup((NetworkManager_o *)entryNameInput, v34, this->fields.genderType, 0LL);
  entryNameInput = (UILineInput_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entryNameInput )
    goto LABEL_32;
  NetworkManager__WriteSignup((NetworkManager_o *)entryNameInput, 0LL);
  UserNameEntryComponent__callbackUserNameChange(this, (System_String_o *)StringLiteral_21497/*"ok"*/, v36);
LABEL_28:
  entryNameInput = (UILineInput_o *)this->fields.confirmBtn;
  if ( !entryNameInput )
    goto LABEL_32;
  ((void (__fastcall *)(UILineInput_o *, _QWORD, void *))entryNameInput->klass[1]._1.namespaze)(
    entryNameInput,
    0LL,
    entryNameInput->klass[1]._1.byval_arg.data);
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_gray(0LL);
  if ( !confirmTxt )
    goto LABEL_32;
  UIWidget__set_color(confirmTxt, *(UnityEngine_Color_o *)&v41, 0LL);
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
    sub_B5D69C(cmdSpellIconFemale, *(_QWORD *)&gtype);
  }
}


void __fastcall UserNameEntryComponent__setEntry(UserNameEntryComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserNameEntryComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct UIWrapContent_o *loopCtr; // x8
  __int64 *p_centerChild; // x20
  UnityEngine_Object_o *centerChild; // x21
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x20
  BattleServantConfConponent_o *v28; // x20
  System_Delegate_o *v29; // t1
  SpringPanel_OnFinished_o *v30; // x22
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t childCount; // w0
  int32_t v39; // w20
  int32_t v40; // w21
  struct GenderSelectControl_o **p_genderSel; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UserNameEntryComponent_o *v49; // x0
  const MethodInfo *v50; // x1

  v4 = this;
  if ( (byte_42E71C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SpringPanel_OnFinished_TypeInfo, v11, v12, v13);
    this = (UserNameEntryComponent_o *)sub_B5D5C4(
                                         &Method_UserNameEntryComponent_OnCenterOnChildFinished__,
                                         v14,
                                         v15,
                                         v16);
    byte_42E71C3 = 1;
  }
  loopCtr = v4->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_25;
  p_centerChild = (__int64 *)&v4->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)v4->fields.centerChild;
  v4->fields.cellWidth = *(_DWORD *)&loopCtr->fields.cullContent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (UserNameEntryComponent_o *)UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UserNameEntryComponent_o *)v4->fields.loopCtr;
    if ( !this )
      goto LABEL_25;
    this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_25;
    v20 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   (UnityEngine_GameObject_o *)this,
                                   (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (__int64)v20;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.centerChild, v20, v21, v22, v23, v24, v25, v26);
  }
  v27 = *p_centerChild;
  if ( !v27 )
    goto LABEL_25;
  v29 = *(System_Delegate_o **)(v27 + 32);
  v28 = (BattleServantConfConponent_o *)(v27 + 32);
  v30 = (SpringPanel_OnFinished_o *)sub_B5D694(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v30, (Il2CppObject *)v4, Method_UserNameEntryComponent_OnCenterOnChildFinished__, 0LL);
  v31 = (System_Int32_array **)System_Delegate__Combine(v29, (System_Delegate_o *)v30, 0LL);
  if ( v31 && *v31 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
  {
    v49 = (UserNameEntryComponent_o *)sub_B5D990(v31);
    UserNameEntryComponent__onChangeInput(v49, v50);
  }
  else
  {
    v28->klass = (BattleServantConfConponent_c *)v31;
    sub_B5D560(v28, v31, v32, v33, v34, v35, v36, v37);
    this = (UserNameEntryComponent_o *)v4->fields.loopCtr;
    if ( !this )
      goto LABEL_25;
    this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_25;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
    if ( childCount >= 1 )
    {
      v39 = childCount;
      v40 = 0;
      p_genderSel = &v4->fields.genderSel;
      while ( 1 )
      {
        this = (UserNameEntryComponent_o *)v4->fields.loopCtr;
        if ( !this )
          break;
        this = (UserNameEntryComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        this = (UserNameEntryComponent_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v40, 0LL);
        if ( !this )
          break;
        this = (UserNameEntryComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)this,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_GenderSelectControl___);
        *p_genderSel = (struct GenderSelectControl_o *)Component_srcLineSprite;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v4->fields.genderSel,
          Component_srcLineSprite,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        if ( !*p_genderSel )
          break;
        LODWORD((*p_genderSel)[1].klass) = v40++;
        if ( v40 >= v39 )
          return;
      }
LABEL_25:
      sub_B5D69C(this, method);
    }
  }
}


void __fastcall UserNameEntryComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7004 & 1) == 0 )
  {
    sub_B5D5C4(&UserNameEntryComponent___c_TypeInfo, v1, v2, v3);
    byte_42E7004 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserNameEntryComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserNameEntryComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall UserNameEntryComponent___c___ctor(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserNameEntryComponent___c___open_b__25_0(UserNameEntryComponent___c_o *this, const MethodInfo *method)
{
  ;
}