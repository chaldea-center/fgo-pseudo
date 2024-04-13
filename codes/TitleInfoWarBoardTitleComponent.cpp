void __fastcall TitleInfoWarBoardTitleComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E6C9D & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoWarBoardTitleComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_3502/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v8, v9, v10);
    byte_42E6C9D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoWarBoardTitleComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_3502/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_3502/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall TitleInfoWarBoardTitleComponent___ctor(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E6C9C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E6C9C = 1;
  }
  this->fields.TitleFadeOutPlayTime = 1.0;
  *(_QWORD *)&this->fields.BgmFadeOutPlayTime = 0x400000003F800000LL;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.movieName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.movieName, v9, v2, v3, v4, v5, v6, v7);
  this->fields.moviePlayerDepth = 100;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Awake(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct CStateManager_TitleInfoWarBoardTitleComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x21
  TitleInfoWarBoardTitleComponent_StateNone_o *v44; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v46; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v47; // x21
  TitleInfoWarBoardTitleComponent_StateMovieFade_o *v48; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v49; // x21
  TitleInfoWarBoardTitleComponent_StateMovie_o *v50; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v51; // x21
  TitleInfoWarBoardTitleComponent_StatePlay_o *v52; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v53; // x20
  TitleInfoWarBoardTitleComponent_StateTouchWait_o *v54; // x21
  const MethodInfo *v55; // x2
  UnityEngine_Object_o *particleObj; // x21
  const MethodInfo *v57; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v59; // x21
  UnityEngine_GameObject_o *v60; // x21
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6C8A & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_TitleInfoWarBoardTitleComponent__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&TitleInfoWarBoardTitleComponent_StateNone_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo, v32, v33, v34);
    byte_42E6C8A = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v36 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v36,
      (QAASpotStateController_IMapSpot_o *)this,
      5,
      (const MethodInfo_2BB2630 *)Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TitleInfoWarBoardTitleComponent__o *)v36;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    mFSM = this->fields.mFSM;
    v44 = (TitleInfoWarBoardTitleComponent_StateNone_o *)sub_B5D694(TitleInfoWarBoardTitleComponent_StateNone_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateNone___ctor(v44, 0LL);
    if ( !mFSM )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v44,
      (const MethodInfo_2BB26FC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v47 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v48 = (TitleInfoWarBoardTitleComponent_StateMovieFade_o *)sub_B5D694(TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateMovieFade___ctor(v48, 0LL);
    if ( !v47 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v47,
      1,
      (IState_T__o *)v48,
      (const MethodInfo_2BB26FC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v49 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v50 = (TitleInfoWarBoardTitleComponent_StateMovie_o *)sub_B5D694(TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateMovie___ctor(v50, 0LL);
    if ( !v49 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v49,
      2,
      (IState_T__o *)v50,
      (const MethodInfo_2BB26FC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v51 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v52 = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_B5D694(TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo);
    TitleInfoWarBoardTitleComponent_StatePlay___ctor(v52, 0LL);
    if ( !v51 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v51,
      3,
      (IState_T__o *)v52,
      (const MethodInfo_2BB26FC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v53 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v54 = (TitleInfoWarBoardTitleComponent_StateTouchWait_o *)sub_B5D694(TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateTouchWait___ctor(v54, 0LL);
    if ( !v53 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v53,
      4,
      (IState_T__o *)v54,
      (const MethodInfo_2BB26FC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    TitleInfoWarBoardTitleComponent__SetState(this, 0, v55);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v59 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v60 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v59,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v60, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v60, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v60, zero, 0LL);
        if ( v60 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v60,
                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v60;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v60,
              v61,
              v62,
              v63,
              v64,
              v65,
              v66);
            goto LABEL_25;
          }
        }
LABEL_26:
        sub_B5D69C(ComponentInChildren_Dropdown_DropdownItem, v46);
      }
    }
  }
LABEL_25:
  TitleInfoWarBoardTitleComponent__SetBackgrundActive(this, 0, v57);
}


UnityEngine_GameObject_o *__fastcall TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *moviePlayerName,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
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
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x19
  UnityEngine_GameObject_o *v19; // x19
  _BOOL8 v20; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v23; // x20

  if ( (byte_42E6C95 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_UIRootReScale___,
      (_DWORD)moviePlayerName,
      (_DWORD)parent,
      method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIRoot___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_GameObject___, v15, v16, v17);
    byte_42E6C95 = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        moviePlayerName,
                                                        (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      UIAtlas,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( v20 )
    GameObjectExtensions__SafeSetParent(v19, parent, 0LL);
  if ( !v19 )
    goto LABEL_22;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v19,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIRoot___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( v20 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_22;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
  }
  v23 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v19,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
  if ( v20 )
  {
    if ( v23 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v23, 0, 0LL);
      goto LABEL_21;
    }
LABEL_22:
    sub_B5D69C(v20, v21);
  }
LABEL_21:
  GameObjectExtensions__ResetLocalScale(v19, 0LL);
  return v19;
}


System_String_o *__fastcall TitleInfoWarBoardTitleComponent__CreateMoviePath(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *movieName,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E6C96 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9307/*"Movie/{0}.usm"*/, (_DWORD)movieName, (_DWORD)method, v3);
    byte_42E6C96 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9307/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__EndMovie(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *moviePlayer; // x20
  CRIMoviePlayer_o *v9; // x0
  __int64 v10; // x1
  struct WarBoardQuestEntity_o *warBoardQuestEntity; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  WarBoardMovieHistoryManager_c *v14; // x0

  if ( (byte_42E6C97 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarBoardMovieHistoryManager_TypeInfo, v5, v6, v7);
    byte_42E6C97 = 1;
  }
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(moviePlayer, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v9 = this->fields.moviePlayer;
    if ( !v9 )
      goto LABEL_14;
    CRIMoviePlayer__Dispose(v9, 0LL);
  }
  warBoardQuestEntity = this->fields.warBoardQuestEntity;
  if ( !warBoardQuestEntity )
LABEL_14:
    sub_B5D69C(v9, v10);
  questId = warBoardQuestEntity->fields.questId;
  questPhase = warBoardQuestEntity->fields.questPhase;
  v14 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v14 = WarBoardMovieHistoryManager_TypeInfo;
  }
  WarBoardMovieHistoryManager__AddHistory(questId, questPhase, v14->static_fields->SAVE_KEY_START_MOVIE, 0LL);
  WarBoardMovieHistoryManager__WriteData(0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__FadeOutBGM(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float BgmFadeOutPlayTime; // s8

  if ( (byte_42E6C90 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6C90 = 1;
  }
  BgmFadeOutPlayTime = this->fields.BgmFadeOutPlayTime;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BgmFadeOutPlayTime, 0LL);
}


int32_t __fastcall TitleInfoWarBoardTitleComponent__GetState(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoWarBoardTitleComponent_o *v4; // x19
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E6C92 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_B5D5C4(
                                                  &Method_CStateManager_TitleInfoWarBoardTitleComponent__getState__,
                                                  (_DWORD)method,
                                                  v2,
                                                  v3);
    byte_42E6C92 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickCancelButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v18; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_42E6C9A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__, v14, v15, v16);
    byte_42E6C9A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v18 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
    v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)this,
      Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__,
      0LL);
    if ( !Instance )
      sub_B5D69C(v21, v22);
    CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v20, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickDecideButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
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
  __int64 v14; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  WebViewManager_o *Instance; // x0
  float TitleFadeOutPlayTime; // s8
  CommonUI_o *v18; // x20
  System_Action_o *v19; // x21

  if ( (byte_42E6C99 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SeManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__, v11, v12, v13);
    byte_42E6C99 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(28, 0LL);
    screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
    this->fields.isButtonEnable = 0;
    if ( !screenTouchInfo
      || (screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          TitleFadeOutPlayTime = this->fields.TitleFadeOutPlayTime,
          v18 = (CommonUI_o *)Instance,
          v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(
            v19,
            (Il2CppObject *)this,
            Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__,
            0LL),
          !v18) )
    {
      sub_B5D69C(screenTouchInfo, v14);
    }
    CommonUI__maskFadeout(v18, 1, TitleFadeOutPlayTime, v19, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnEnable(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42E6C9B & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2709/*"BackAnchor/BtnBg"*/, v5, v6, v7);
    byte_42E6C9B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_2709/*"BackAnchor/BtnBg"*/, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Play(
        TitleInfoWarBoardTitleComponent_o *this,
        System_Action_o *end_act,
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v22; // x20
  System_String_o *name; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  System_String_o *MoviePath; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_42E6C8E & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__, v16, v17, v18);
    byte_42E6C8E = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v22 = this->fields.mAnimation;
    if ( v22 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( gameObject )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v22, name, 0LL);
        if ( gameObject )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
          goto LABEL_12;
        }
      }
    }
LABEL_18:
    sub_B5D69C(gameObject, v20);
  }
LABEL_12:
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.movieName, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_17;
  MoviePath = TitleInfoWarBoardTitleComponent__CreateMoviePath(
                (TitleInfoWarBoardTitleComponent_o *)IsNullOrEmpty,
                this->fields.movieName,
                v26);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)this,
    Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v28, 1, 0LL) )
LABEL_17:
    TitleInfoWarBoardTitleComponent__StartTitleEffect(this, v25);
}


void __fastcall TitleInfoWarBoardTitleComponent__PlayBGM(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *bgmName; // x19

  if ( (byte_42E6C91 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6C91 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(bgmName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoWarBoardTitleComponent__PlayMovie(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TitleInfoWarBoardTitleComponent_c *v14; // x0
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x20
  struct CRIMoviePlayer_o *Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  CRIMoviePlayer_o *moviePlayer; // x20
  int v26; // s0
  CRIMoviePlayer_o *v30; // x20
  TitleInfoWarBoardTitleComponent_o *v31; // x0
  const MethodInfo *v32; // x2
  System_String_o *v33; // x21
  int v34; // w2
  __int64 v35; // x3
  System_String_o *Path; // x22

  if ( (byte_42E6C94 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v8, v9, v10);
    sub_B5D5C4(&TitleInfoWarBoardTitleComponent_TypeInfo, v11, v12, v13);
    byte_42E6C94 = 1;
  }
  v14 = TitleInfoWarBoardTitleComponent_TypeInfo;
  if ( (BYTE3(TitleInfoWarBoardTitleComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoWarBoardTitleComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoWarBoardTitleComponent_TypeInfo);
    v14 = TitleInfoWarBoardTitleComponent_TypeInfo;
  }
  CriMoviePlayerObject = TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
                           (TitleInfoWarBoardTitleComponent_o *)v14,
                           v14->static_fields->MOVIE_PLAYER_OBJECT_PATH,
                           (UnityEngine_Component_o *)this,
                           v3);
  if ( !CriMoviePlayerObject )
    goto LABEL_21;
  v17 = CriMoviePlayerObject;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       CriMoviePlayerObject,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !CriMoviePlayerObject )
    goto LABEL_21;
  UIPanel__set_depth((UIPanel_o *)CriMoviePlayerObject, this->fields.moviePlayerDepth, 0LL);
  Component_srcLineSprite = (struct CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v17,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
  this->fields.moviePlayer = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.moviePlayer,
    (System_Int32_array **)Component_srcLineSprite,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  moviePlayer = this->fields.moviePlayer;
  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_white(0LL);
  if ( !moviePlayer )
    goto LABEL_21;
  CRIMoviePlayer__SetBackgroundColor(moviePlayer, *(UnityEngine_Color_o *)&v26, 0LL);
  v30 = this->fields.moviePlayer;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)TitleInfoWarBoardTitleComponent__CreateMoviePath(
                                                       v31,
                                                       this->fields.movieName,
                                                       v32);
  if ( !this->fields.movieAssetData )
    goto LABEL_21;
  v33 = (System_String_o *)CriMoviePlayerObject;
  Path = AssetData__get_Path(this->fields.movieAssetData, 0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_42E4CBD )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, v16, v34, v35);
    byte_42E4CBD = 1;
  }
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  }
  if ( !v30
    || (CRIMoviePlayer__Initialize(
          v30,
          v33,
          Path,
          *(float *)(*(_QWORD *)&CriMoviePlayerObject[7].fields.m_CachedPtr + 32LL),
          this->fields.isPlayedStartMovie,
          0LL,
          0LL,
          0,
          0LL,
          0,
          0,
          1,
          0LL),
        (CriMoviePlayerObject = (UnityEngine_GameObject_o *)this->fields.moviePlayer) == 0LL) )
  {
LABEL_21:
    sub_B5D69C(CriMoviePlayerObject, v16);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)CriMoviePlayerObject, 1, 1, 1, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__RefreshPanel(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *basePanel; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_42E6C8D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6C8D = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  base2Panel = (UnityEngine_Object_o *)this->fields.base2Panel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(base2Panel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.base2Panel;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.base2Panel;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B5D69C(gameObject, v6);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__SetBackgrundActive(
        TitleInfoWarBoardTitleComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *backgrund; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42E6C98 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isActive, (_DWORD)method, v3);
    byte_42E6C98 = 1;
  }
  backgrund = (UnityEngine_Object_o *)this->fields.backgrund;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(backgrund, 0LL, 0LL) )
  {
    v8 = this->fields.backgrund;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isActive, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__SetButtonEnable(
        TitleInfoWarBoardTitleComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = isEnable;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoWarBoardTitleComponent__SetState(
        TitleInfoWarBoardTitleComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x0

  if ( (byte_42E6C93 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__, state, (_DWORD)method, v3);
    byte_42E6C93 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
}


void __fastcall TitleInfoWarBoardTitleComponent__Setup(
        TitleInfoWarBoardTitleComponent_o *this,
        WarBoardQuestEntity_o *warBoardQuestEnt,
        System_Action_o *callbackDecide,
        System_Action_o *callbackCancel,
        const MethodInfo *method)
{
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  __int64 v69; // x21
  DataManager_o *Instance; // x0
  __int64 v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct WarBoardQuestEntity_o **p_warBoardQuestEntity; // x22
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct System_String_o *age; // x1
  int v99; // w2
  __int64 v100; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  struct System_String_o *WarBoardStartMovieName; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct WarBoardQuestEntity_o *v109; // x8
  int32_t questPhase; // w22
  int32_t questId; // w23
  WarBoardMovieHistoryManager_c *v112; // x0
  bool exists; // w0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  CommonUI_o *v116; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_o *v124; // x24
  System_String_o *name; // x23
  System_String_o *v126; // x22
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Action_o *v134; // x25
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  UnityEngine_Object_o *titleLabel; // x20
  UnityEngine_Object_o *messageManager; // x20
  struct ScriptLineMessage_o *v149; // x8
  UnityEngine_Object_o *messageLabel; // x20
  WarEntity_o *v151; // [xsp+0h] [xbp-60h] BYREF
  QuestPhaseEntity_o *v152; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *v153; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42E6C8C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)warBoardQuestEnt, (_DWORD)callbackDecide, callbackCancel);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v24, v25, v26);
    sub_B5D5C4(&DataManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v30, v31, v32);
    sub_B5D5C4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__, v33, v34, v35);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v36, v37, v38);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v39, v40, v41);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v48, v49, v50);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__, v54, v55, v56);
    sub_B5D5C4(&TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&WarBoardMovieHistoryManager_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_24173/*"仮"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_1/*""*/, v66, v67, v68);
    byte_42E6C8C = 1;
  }
  entity = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v151 = 0LL;
  v69 = sub_B5D694(TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo);
  TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___ctor(
    (TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *)v69,
    0LL);
  if ( !v69 )
    goto LABEL_77;
  *(_QWORD *)(v69 + 16) = callbackDecide;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v69 + 16),
    (System_Int32_array **)callbackDecide,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields.warBoardQuestEntity = warBoardQuestEnt;
  p_warBoardQuestEntity = &this->fields.warBoardQuestEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.warBoardQuestEntity,
    (System_Int32_array **)warBoardQuestEnt,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v85 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bgmName, v85, v86, v87, v88, v89, v90, v91);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_77;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         (*p_warBoardQuestEntity)->fields.stageId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !entity || !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &v151,
                                  (int32_t)entity->fields.name,
                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v151 )
        goto LABEL_77;
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(v151->fields.age, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v151 )
          goto LABEL_77;
        age = v151->fields.age;
        this->fields.bgmName = age;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.bgmName,
          (System_Int32_array **)age,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97);
      }
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v71, v99, v100);
    byte_42E4B33 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_77;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &v153,
    (int32_t)Instance[1].fields.saveNameList->fields._items,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( !v153 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)QuestPhaseMaster__TryGetEntity(
                                (QuestPhaseMaster_o *)Instance,
                                &v152,
                                (*p_warBoardQuestEntity)->fields.questId,
                                (*p_warBoardQuestEntity)->fields.questPhase,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)v152;
    if ( !v152 )
      goto LABEL_77;
    WarBoardStartMovieName = QuestPhaseEntity__GetWarBoardStartMovieName(v152, 0LL);
    this->fields.movieName = WarBoardStartMovieName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.movieName,
      (System_Int32_array **)WarBoardStartMovieName,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
  }
  v109 = *p_warBoardQuestEntity;
  if ( !*p_warBoardQuestEntity )
LABEL_77:
    sub_B5D69C(Instance, v71);
  questId = v109->fields.questId;
  questPhase = v109->fields.questPhase;
  v112 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v112 = WarBoardMovieHistoryManager_TypeInfo;
  }
  exists = WarBoardMovieHistoryManager__ExistsHistory(
             questId,
             questPhase,
             v112->static_fields->SAVE_KEY_START_MOVIE,
             0LL);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  this->fields.isPlayedStartMovie = exists;
  this->fields.isButtonEnable = 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    v116 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v116 )
      goto LABEL_77;
    Instance = (DataManager_o *)CommonUI__CreateScreeenTouchInfo(v116, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !Instance )
      goto LABEL_77;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)Instance,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
  }
  Instance = (DataManager_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_77;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_77;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)v153;
  if ( !v153 )
    goto LABEL_77;
  v124 = (System_String_o *)StringLiteral_24173/*"仮"*/;
  Instance = (DataManager_o *)QuestEntity__getQuestName((QuestEntity_o *)v153, 0LL);
  if ( !v153 )
    goto LABEL_77;
  name = v153->fields.name;
  v126 = (System_String_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_77;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)Instance,
                                                                     (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !Instance )
    goto LABEL_77;
  BYTE5(Instance->fields.masterLoadThreads) = 1;
  v134 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v134,
    (Il2CppObject *)v69,
    Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__,
    0LL);
  this->fields.callbackDecide = v134;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackDecide,
    (System_Int32_array **)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  this->fields.callbackCancel = callbackCancel;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackCancel,
    (System_Int32_array **)callbackCancel,
    v141,
    v142,
    v143,
    v144,
    v145,
    v146);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.titleLabel;
    if ( !Instance )
      goto LABEL_77;
    UILabel__set_text((UILabel_o *)Instance, v124, 0LL);
  }
  messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageManager, 0LL, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(name, 0LL) )
    {
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(v126, 0LL);
      v149 = this->fields.messageManager;
      if ( v149 )
      {
        if ( ((unsigned __int8)Instance & 1) != 0 )
          ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
        else
          ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v149->klass->vtable._7_SetText.method)(
            this->fields.messageManager,
            v126,
            0LL,
            0LL,
            0LL,
            0LL,
            v149->klass[1]._1.image);
        return;
      }
    }
    else
    {
      Instance = (DataManager_o *)this->fields.messageManager;
      if ( Instance )
      {
        (*(void (__fastcall **)(DataManager_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))&Instance->klass[1]._1.this_arg.bits)(
          Instance,
          name,
          0LL,
          0LL,
          0LL,
          0LL,
          Instance->klass[1]._1.element_class);
        return;
      }
    }
    goto LABEL_77;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.messageLabel;
    if ( Instance )
    {
      UILabel__set_text((UILabel_o *)Instance, v126, 0LL);
      return;
    }
    goto LABEL_77;
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__StartTitleEffect(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_42E6C8F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6622/*"FadeOutBGM"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10788/*"PlayBGM"*/, v5, v6, v7);
    byte_42E6C8F = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6622/*"FadeOutBGM"*/,
    this->fields.BgmFadeOutStartTime,
    0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.bgmName, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10788/*"PlayBGM"*/,
      this->fields.BgmPlayStartTime,
      0LL);
  TitleInfoWarBoardTitleComponent__SetState(this, 3, v8);
}


void __fastcall TitleInfoWarBoardTitleComponent__Update(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x0

  if ( (byte_42E6C8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_TitleInfoWarBoardTitleComponent__update__, (_DWORD)method, v2, v3);
    byte_42E6C8B = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
  TitleInfoWarBoardTitleComponent__RefreshPanel(this, method);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickCancelButton_b__52_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_o *callbackCancel; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E6CA0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6CA0 = 1;
  }
  callbackCancel = this->fields.callbackCancel;
  if ( !callbackCancel )
    sub_B5D69C(0LL, method);
  System_Action__Invoke(callbackCancel, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickDecideButton_b__51_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_o *callbackDecide; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E6C9F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6C9F = 1;
  }
  callbackDecide = this->fields.callbackDecide;
  if ( !callbackDecide )
    sub_B5D69C(0LL, method);
  System_Action__Invoke(callbackDecide, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___Play_b__34_0(
        TitleInfoWarBoardTitleComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2

  if ( (byte_42E6C9E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6C9E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  this->fields.movieAssetData = data;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.movieAssetData,
    (System_Int32_array **)data,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  TitleInfoWarBoardTitleComponent__SetState(this, 1, v12);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie___ctor(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__begin(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  this->fields.state = 1;
  if ( !that )
    sub_B5D69C(this, 0LL);
  TitleInfoWarBoardTitleComponent__PlayMovie(that, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__end(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42E624E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)that, (_DWORD)method, v3);
    byte_42E624E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__InitConnect(Instance, 0LL), this->fields.state = 0, !that) )
    sub_B5D69C(Instance, v7);
  TitleInfoWarBoardTitleComponent__EndMovie(that, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__update(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  int32_t state; // w8
  TitleInfoWarBoardTitleComponent_StateMovie_o *v4; // x19

  state = this->fields.state;
  v4 = this;
  if ( state != 2 )
  {
    if ( state != 1 )
      return;
    if ( that )
    {
      this = (TitleInfoWarBoardTitleComponent_StateMovie_o *)that->fields.moviePlayer;
      if ( this )
      {
        if ( CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0LL) )
          v4->fields.state = 2;
        return;
      }
    }
LABEL_12:
    sub_B5D69C(this, that);
  }
  if ( !that )
    goto LABEL_12;
  this = (TitleInfoWarBoardTitleComponent_StateMovie_o *)that->fields.moviePlayer;
  if ( !this )
    goto LABEL_12;
  if ( !CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0LL) )
  {
    v4->fields.state = 3;
    TitleInfoWarBoardTitleComponent__StartTitleEffect(that, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade___ctor(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade__begin(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
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
  TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_42E624F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__, v11, v12, v13);
    sub_B5D5C4(&TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo, v14, v15, v16);
    byte_42E624F = 1;
  }
  v17 = (TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *)sub_B5D694(TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo);
  TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_9;
  v17->fields.that = that;
  sub_B5D560(&v17->fields);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v17,
    Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v23, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade__end(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E6250 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)that, (_DWORD)method, v3);
    byte_42E6250 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__maskFadein(Instance, 0.0, 0LL, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade__update(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0___ctor(
        TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0___begin_b__0(
        TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TitleInfoWarBoardTitleComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(0LL, method);
  TitleInfoWarBoardTitleComponent__SetState(that, 2, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateNone___ctor(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateNone__begin(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StateNone__end(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StateNone__update(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StatePlay___ctor(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StatePlay__begin(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v8; // x19
  System_String_o *v9; // x0

  if ( (byte_42E6251 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_B5D5C4(
                                                            &UnityEngine_Object_TypeInfo,
                                                            (_DWORD)that,
                                                            (_DWORD)method,
                                                            v3);
    byte_42E6251 = 1;
  }
  if ( !that )
    goto LABEL_15;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    TitleInfoWarBoardTitleComponent__SetBackgrundActive(that, 1, 0LL);
    v6 = that->fields.mAnimation;
    if ( v6 )
    {
      this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__Play_51249124(v6, name, 0LL);
        v8 = that->fields.mAnimation;
        if ( v8 )
        {
          this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v8, 0LL);
          if ( this )
          {
            v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v8, v9, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_15:
    sub_B5D69C(this, that);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent_StatePlay__end(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StatePlay__update(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v6; // x20
  System_String_o *name; // x0

  if ( (byte_42E6252 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_B5D5C4(
                                                            &UnityEngine_Object_TypeInfo,
                                                            (_DWORD)that,
                                                            (_DWORD)method,
                                                            v3);
    byte_42E6252 = 1;
  }
  if ( !that )
    goto LABEL_14;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = that->fields.mAnimation;
    if ( v6 )
    {
      this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v6, name, 0LL);
        if ( this )
        {
          if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) >= 1.0 )
            TitleInfoWarBoardTitleComponent__SetState(that, 4, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(this, that);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent_StateTouchWait___ctor(
        TitleInfoWarBoardTitleComponent_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateTouchWait__begin(
        TitleInfoWarBoardTitleComponent_StateTouchWait_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (TitleInfoWarBoardTitleComponent_StateTouchWait_o *)that->fields.screenTouchInfo,
        that->fields.isButtonEnable = 1,
        !this)
    || (this = (TitleInfoWarBoardTitleComponent_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL)) == 0LL )
  {
    sub_B5D69C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateTouchWait__end(
        TitleInfoWarBoardTitleComponent_StateTouchWait_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StateTouchWait__update(
        TitleInfoWarBoardTitleComponent_StateTouchWait_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___ctor(
        TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___Setup_b__0(
        TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callbackDecide; // x0

  callbackDecide = this->fields.callbackDecide;
  if ( !callbackDecide )
    sub_B5D69C(0LL, method);
  System_Action__Invoke(callbackDecide, 0LL);
}