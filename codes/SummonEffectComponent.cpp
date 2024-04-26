void __fastcall SummonEffectComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct SummonEffectComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct SummonEffectComponent_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct SummonEffectComponent_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct SummonEffectComponent_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct SummonEffectComponent_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct SummonEffectComponent_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct SummonEffectComponent_StaticFields *v57; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct SummonEffectComponent_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7

  if ( (byte_4355E54 & 1) == 0 )
  {
    sub_B70694(&SummonEffectComponent_TypeInfo);
    sub_B70694(&StringLiteral_22819/*"summon_up_04"*/);
    sub_B70694(&StringLiteral_22817/*"summon_up_02"*/);
    sub_B70694(&StringLiteral_7035/*"GetAnimationName"*/);
    sub_B70694(&StringLiteral_22818/*"summon_up_03"*/);
    sub_B70694(&StringLiteral_22816/*"summon_up_01"*/);
    sub_B70694(&StringLiteral_11437/*"RarityAnimationName"*/);
    sub_B70694(&StringLiteral_15240/*"UpAnimationName"*/);
    sub_B70694(&StringLiteral_7721/*"InitializeAnimationName"*/);
    byte_4355E54 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SummonEffectComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_22816/*"summon_up_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22816/*"summon_up_01"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = SummonEffectComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22817/*"summon_up_02"*/;
  v9->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_22817/*"summon_up_02"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->RANKUP_TO_SILVER_ANIMATION, v10, v11, v12, v13, v14, v15, v16);
  v17 = SummonEffectComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_22818/*"summon_up_03"*/;
  v17->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_22818/*"summon_up_03"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->RANKUP_TO_GOLD_ANIMATION, v18, v19, v20, v21, v22, v23, v24);
  v25 = SummonEffectComponent_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_22819/*"summon_up_04"*/;
  v25->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_22819/*"summon_up_04"*/;
  sub_B70630((BattleServantConfConponent_o *)&v25->RANKUP_COMMANDCODE_ANIMATION, v26, v27, v28, v29, v30, v31, v32);
  v33 = SummonEffectComponent_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_15240/*"UpAnimationName"*/;
  v33->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15240/*"UpAnimationName"*/;
  sub_B70630((BattleServantConfConponent_o *)&v33->FSM_VARIABLE_UP_ANIMATION_NAME, v34, v35, v36, v37, v38, v39, v40);
  v41 = SummonEffectComponent_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_7721/*"InitializeAnimationName"*/;
  v41->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7721/*"InitializeAnimationName"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&v41->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = SummonEffectComponent_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_11437/*"RarityAnimationName"*/;
  v49->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11437/*"RarityAnimationName"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&v49->FSM_VARIABLE_RARITY_ANIMATION_NAME,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = SummonEffectComponent_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_7035/*"GetAnimationName"*/;
  v57->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7035/*"GetAnimationName"*/;
  sub_B70630((BattleServantConfConponent_o *)&v57->FSM_VARIABLE_GET_ANIMATION_NAME, v58, v59, v60, v61, v62, v63, v64);
  v65 = SummonEffectComponent_TypeInfo->static_fields;
  v65->rarityToColor = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v65->rarityToColor, 0LL, v66, v67, v68, v69, v70, v71);
}


void __fastcall SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  il2cpp_array_size_t max_length; // w8
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x0

  if ( (byte_4355E53 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4355E53 = 1;
  }
  v3 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 2LL);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 512, max_length == 1) )
  {
    v19 = sub_B70798(v3);
    sub_B70738(v19, 0LL);
  }
  v3->m_Items[2] = 875;
  this->fields.cardTextureSize = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.cardTextureSize,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.effAnimName, v12, v13, v14, v15, v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonEffectComponent__AddSummonInfo(
        SummonEffectComponent_o *this,
        int32_t servantId,
        int32_t limitCount,
        bool isRankup,
        bool isNewCard,
        int32_t noticeRarity,
        int32_t rarity,
        int32_t cardType,
        bool isSkipStop,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x26
  SummonEffectComponent_SummonInfo_o *v19; // x27
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_4355E43 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
    sub_B70694(&SummonEffectComponent_SummonInfo_TypeInfo);
    byte_4355E43 = 1;
  }
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = this->fields.SummonInfos;
  }
  v19 = (SummonEffectComponent_SummonInfo_o *)sub_B70764(SummonEffectComponent_SummonInfo_TypeInfo);
  SummonEffectComponent_SummonInfo___ctor(
    v19,
    servantId,
    limitCount,
    isRankup,
    isNewCard,
    noticeRarity,
    rarity,
    cardType,
    isSkipStop,
    userSvtId,
    0LL);
  if ( !SummonInfos )
    sub_B7076C(v20, v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SummonInfos,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
}


void __fastcall SummonEffectComponent__ChangeClassCardColor(
        SummonEffectComponent_o *this,
        UnityEngine_Transform_o *cardNode,
        int32_t col,
        const MethodInfo *method)
{
  SummonEffectComponent_o *v6; // x20
  struct UnityEngine_Texture2D_array *testCards; // x8
  UnityEngine_Texture2D_o *v8; // x21
  UITexture_o *v9; // x19
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  struct System_Int32_array *cardTextureSize; // x8
  __int64 v15; // x0
  UnityEngine_Rect_o v16; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4355E4C & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_B70694(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4355E4C = 1;
  }
  testCards = v6->fields.testCards;
  if ( !testCards )
    goto LABEL_10;
  if ( testCards->max_length <= col )
    goto LABEL_11;
  if ( !cardNode
    || (v8 = testCards->m_Items[col],
        (this = (SummonEffectComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)cardNode,
                                             (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, const char *))this->klass[2]._1.gc_desc)(
                                            this,
                                            v8,
                                            this->klass[2]._1.name),
        (cardTextureSize = v6->fields.cardTextureSize) == 0LL) )
  {
LABEL_10:
    sub_B7076C(this, cardNode);
  }
  if ( cardTextureSize->max_length <= 1 )
  {
LABEL_11:
    v15 = sub_B70798(this);
    sub_B70738(v15, 0LL);
  }
  v17.fields.m_Width = 0.5;
  v17.fields.m_Height = (float)cardTextureSize->m_Items[2] * 0.00097656;
  v17.fields.m_YMin = 1.0 - v17.fields.m_Height;
  v17.fields.m_XMin = 0.0;
  *(_QWORD *)&v16.fields.m_XMin = 0LL;
  *(_QWORD *)&v16.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v17, v10, v11, v12, v13, (const MethodInfo *)&v16);
  UITexture__set_uvRect(v9, v16, 0LL);
}


void __fastcall SummonEffectComponent__CompleteCallback(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int32_t counterMax; // w9
  int32_t v4; // w8
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v6; // x1

  if ( (byte_4355E4D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B70694(&StringLiteral_12231/*"SETUP_DONE"*/);
    byte_4355E4D = 1;
  }
  counterMax = this->fields._counterMax;
  v4 = this->fields._counter + 1;
  this->fields._counter = v4;
  if ( v4 >= counterMax )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B7076C(0LL, v6);
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_12231/*"SETUP_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4355E45 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4355E45 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v4 )
    sub_B7076C(Instance, v3);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


int32_t __fastcall SummonEffectComponent__GetGachaId(SummonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.gachaId;
}


void __fastcall SummonEffectComponent__InitSummonEffect(SummonEffectComponent_o *this, const MethodInfo *method)
{
  void *Component_WebViewObject; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x8
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  AssetLoader_LoadEndDataHandler_o *v29; // x22
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4355E46 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonEffectComponent_OnCharaGraphLoadDone__);
    sub_B70694(&SummonEffectComponent_TypeInfo);
    sub_B70694(&StringLiteral_8278/*"IsNoSkip"*/);
    sub_B70694(&StringLiteral_17986/*"countMax"*/);
    sub_B70694(&StringLiteral_13342/*"SummonEffectAnimation"*/);
    byte_4355E46 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  v5 = (PlayMakerFSM_o *)Component_WebViewObject;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_17986/*"countMax"*/,
                              0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_32;
  if ( !Component_WebViewObject )
    goto LABEL_32;
  *((_DWORD *)Component_WebViewObject + 14) = SummonInfos->fields._size;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8278/*"IsNoSkip"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  *((_BYTE *)Component_WebViewObject + 56) = this->fields.isNoSkip;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_13342/*"SummonEffectAnimation"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmGameObject__get_Value(
                              (HutongGames_PlayMaker_FsmGameObject_o *)Component_WebViewObject,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_srcLineSprite = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)Component_WebViewObject,
                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = Component_srcLineSprite;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.effAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.upAnimationNameList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  upAnimationNameList = this->fields.upAnimationNameList;
  Component_WebViewObject = SummonEffectComponent_TypeInfo;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !upAnimationNameList )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)upAnimationNameList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  Component_WebViewObject = *p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  Component_WebViewObject = *p_upAnimationNameList;
  if ( !*p_upAnimationNameList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__),
        (Component_WebViewObject = *p_upAnimationNameList) == 0LL)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__),
        (Component_WebViewObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_WebViewObject, 1, 0LL),
        (Component_WebViewObject = this->fields.SummonInfos) == 0LL) )
  {
LABEL_32:
    sub_B7076C(Component_WebViewObject, v4);
  }
  this->fields.DownloadCounter = *((_DWORD *)Component_WebViewObject + 6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Component_WebViewObject,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v23 )
      break;
    if ( !v31.fields.current )
      sub_B7076C(v23, v24);
    klass = (int32_t)v31.fields.current[1].klass;
    if ( HIDWORD(v31.fields.current[2].klass) == 3 )
    {
      v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v26,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadCommandAsset(klass, v26, 0LL);
    }
    else
    {
      klass_high = HIDWORD(v31.fields.current[1].klass);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0LL);
      v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v29,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v29, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void __fastcall SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4355E42 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
    byte_4355E42 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.SummonInfos,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  int32_t v4; // w8
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4355E47 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_7392/*"INIT_DONE"*/);
    byte_4355E47 = 1;
  }
  v4 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v4;
  if ( !v4 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0LL),
          (Instance = (CommonUI_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0LL) )
    {
      sub_B7076C(Instance, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7392/*"INIT_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v4; // x1

  if ( (byte_4355E52 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B70694(&StringLiteral_5806/*"EVENT_SKIP"*/);
    byte_4355E52 = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B7076C(0LL, v4);
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5806/*"EVENT_SKIP"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__ReleasePrevAsset(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *v6; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4355E48 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4355E48 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseAssetPath,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v7.fields.current;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v6 = this->fields._releaseAssetPath;
    if ( !v6 )
      sub_B7076C(0LL, v5);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__);
  }
}


void __fastcall SummonEffectComponent__SetGachaId(SummonEffectComponent_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.gachaId = id;
}


void __fastcall SummonEffectComponent__SetUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  void *Component_WebViewObject; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x22
  int size; // w8
  __int64 items; // x8
  struct System_String_o *v15; // x1
  HutongGames_PlayMaker_FsmVariables_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **effAnimName; // x1

  if ( (byte_4355E4E & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B70694(&SummonEffectComponent_TypeInfo);
    sub_B70694(&StringLiteral_11424/*"Rank"*/);
    byte_4355E4E = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject
    || (v5 = (PlayMakerFSM_o *)Component_WebViewObject,
        (Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL)) == 0LL)
    || (Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                    (System_String_o *)StringLiteral_11424/*"Rank"*/,
                                    0LL)) == 0LL )
  {
LABEL_22:
    sub_B7076C(Component_WebViewObject, v4);
  }
  Component_WebViewObject = (void *)HutongGames_PlayMaker_FsmInt__get_Value(
                                      (HutongGames_PlayMaker_FsmInt_o *)Component_WebViewObject,
                                      0LL);
  upAnimationNameList = this->fields.upAnimationNameList;
  if ( ((unsigned int)Component_WebViewObject & 0x80000000) != 0 )
  {
    if ( !upAnimationNameList )
      goto LABEL_22;
  }
  else
  {
    if ( !upAnimationNameList )
      goto LABEL_22;
    size = upAnimationNameList->fields._size;
    if ( (int)Component_WebViewObject < size )
    {
      if ( size <= (unsigned int)Component_WebViewObject )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      items = (__int64)upAnimationNameList->fields._items + 8 * (int)Component_WebViewObject;
      goto LABEL_16;
    }
  }
  if ( !upAnimationNameList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  items = (__int64)upAnimationNameList->fields._items;
LABEL_16:
  v15 = *(struct System_String_o **)(items + 32);
  this->fields.effAnimName = v15;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.effAnimName,
    (System_Int32_array **)v15,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  v16 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v16 )
    goto LABEL_22;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              v16,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  effAnimName = (System_Int32_array **)this->fields.effAnimName;
  *((_QWORD *)Component_WebViewObject + 7) = effAnimName;
  sub_B70630(
    (BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56),
    effAnimName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall SummonEffectComponent__SetUpInitializeAnimation(
        SummonEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x19
  HutongGames_PlayMaker_FsmVariables_o *v6; // x20
  System_String_o *Value; // x0

  if ( (byte_4355E4F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B70694(&SummonEffectComponent_TypeInfo);
    sub_B70694(&StringLiteral_7385/*"INITIALIZE_ANIMATION"*/);
    byte_4355E4F = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_11;
  v5 = Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  v6 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v6
    || (Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                      v6,
                                                      SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                                      0LL)) == 0LL )
  {
LABEL_11:
    sub_B7076C(Component_WebViewObject, v4);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) )
    PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_7385/*"INITIALIZE_ANIMATION"*/, 0LL);
}


void __fastcall SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  SummonEffectComponent_c *v2; // x0
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  SummonEffectComponent_c *v12; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_4355E44 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    sub_B70694(&SummonEffectComponent_TypeInfo);
    byte_4355E44 = 1;
  }
  v2 = SummonEffectComponent_TypeInfo;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v2 = SummonEffectComponent_TypeInfo;
  }
  if ( !v2->static_fields->rarityToColor )
  {
    v3 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B70764(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
      v3,
      (const MethodInfo_2F6D8C0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v3 )
      sub_B7076C(v4, v5);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      0,
      0,
      (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      1,
      0,
      (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      2,
      0,
      (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      3,
      1,
      (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      4,
      2,
      (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      5,
      2,
      (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      101,
      0,
      (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      102,
      0,
      (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v12 = SummonEffectComponent_TypeInfo;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v12 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v3;
    sub_B70630(
      (BattleServantConfConponent_o *)&static_fields->rarityToColor,
      (System_Int32_array **)v3,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
}


void __fastcall SummonEffectComponent__StopRarityAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v4; // x1
  HutongGames_PlayMaker_FsmVariables_o *v5; // x20
  System_String_o *Value; // x0
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v8; // x20
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0

  if ( (byte_4355E51 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&SummonEffectComponent_TypeInfo);
    byte_4355E51 = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_25;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  v5 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v5 )
    goto LABEL_25;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                v5,
                                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v8 = Value;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0LL, 0LL) && !System_String__IsNullOrEmpty(v8, 0LL) )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.effAnimation;
    if ( Component_WebViewObject )
    {
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)Component_WebViewObject, v8, 0LL) )
        return;
      Component_WebViewObject = (PlayMakerFSM_o *)this->fields.effAnimation;
      if ( Component_WebViewObject )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)Component_WebViewObject,
                                                   v8,
                                                   0LL);
        Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
        if ( ((unsigned __int8)Component_WebViewObject & 1) == 0 )
          return;
        if ( Item )
        {
          length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0LL);
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, length, 0LL);
          UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 1, 0LL);
          Component_WebViewObject = (PlayMakerFSM_o *)this->fields.effAnimation;
          if ( Component_WebViewObject )
          {
            UnityEngine_Animation__Sample((UnityEngine_Animation_o *)Component_WebViewObject, 0LL);
            UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 0, 0LL);
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__stopSe(0.0, 0LL);
            return;
          }
        }
      }
    }
LABEL_25:
    sub_B7076C(Component_WebViewObject, v4);
  }
}


void __fastcall SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effAnimation; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v9; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x0

  if ( (byte_4355E50 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____69251200);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355E50 = 1;
  }
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(effAnimation, 0LL, 0LL)
    || System_String__IsNullOrEmpty(this->fields.effAnimName, 0LL) )
  {
    return;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = this->fields.effAnimation;
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_29;
  if ( !UnityEngine_Animation__IsPlaying(
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
          this->fields.effAnimName,
          0LL) )
    return;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = this->fields.effAnimation;
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_29;
  Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                             ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                             this->fields.effAnimName,
                                             0LL);
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(
                                                                                         Item,
                                                                                         0LL,
                                                                                         0LL);
  if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
  {
    if ( Item )
    {
      length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0LL);
      UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, length, 0LL);
      UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 1, 0LL);
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = this->fields.effAnimation;
      if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
      {
        UnityEngine_Animation__Sample(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, 0LL);
        UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 0, 0LL);
        goto LABEL_15;
      }
    }
LABEL_29:
    sub_B7076C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v4);
  }
LABEL_15:
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = this->fields.effAnimation;
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_29;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         (UnityEngine_Component_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                         1,
                                                                                         (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____69251200);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_29;
  klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
  v9 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
      {
        v12 = sub_B70798(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B70738(v12, 0LL);
      }
      v11 = (UnityEngine_Object_o *)*((_QWORD *)&v9[1].monitor + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(
                                                                                             v11,
                                                                                             0LL,
                                                                                             0LL);
      if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_29;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)v11,
                                                                                               0LL);
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
          0,
          0LL);
      }
      LODWORD(klass) = v9[1].klass;
    }
  }
}


void __fastcall SummonEffectComponent__UpdateCardParam(SummonEffectComponent_o *this, const MethodInfo *method)
{
  void *Component_WebViewObject; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x22
  SummonEffectComponent_SummonInfo_o *v7; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v8; // x22
  int32_t ServantId; // w28
  SummonEffectComponent_SummonInfo_o *v10; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v11; // x22
  int32_t LimitCount; // w27
  SummonEffectComponent_SummonInfo_o *v13; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v14; // x22
  bool IsRankUp; // w26
  SummonEffectComponent_SummonInfo_o *v16; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v17; // x22
  _BOOL4 IsNewCard; // w24
  SummonEffectComponent_SummonInfo_o *v19; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v20; // x22
  SummonEffectComponent_SummonInfo_o *v21; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v22; // x25
  int32_t Rarity; // w22
  SummonEffectComponent_SummonInfo_o *v24; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v25; // x24
  int32_t CardType; // w25
  SummonEffectComponent_SummonInfo_o *v27; // x8
  bool IsSkipStop; // w21
  HutongGames_PlayMaker_FsmVariables_o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int v48; // w21
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20
  _BOOL4 v51; // [xsp+8h] [xbp-58h]
  int32_t NoticeRarity; // [xsp+Ch] [xbp-54h]

  if ( (byte_4355E4A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B70694(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SummonEffectComponent_TypeInfo);
    sub_B70694(&StringLiteral_8277/*"IsNewCard"*/);
    sub_B70694(&StringLiteral_17985/*"countIndex"*/);
    sub_B70694(&StringLiteral_8290/*"IsRankUp"*/);
    sub_B70694(&StringLiteral_8294/*"IsSkipStop"*/);
    sub_B70694(&StringLiteral_8623/*"LimitCount"*/);
    sub_B70694(&StringLiteral_9811/*"NoticeRarity"*/);
    sub_B70694(&StringLiteral_3968/*"CardType"*/);
    sub_B70694(&StringLiteral_11435/*"Rarity"*/);
    sub_B70694(&StringLiteral_12890/*"ServantId"*/);
    byte_4355E4A = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  v5 = (PlayMakerFSM_o *)Component_WebViewObject;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_17985/*"countIndex"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = (void *)HutongGames_PlayMaker_FsmInt__get_Value(
                                      (HutongGames_PlayMaker_FsmInt_o *)Component_WebViewObject,
                                      0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_82;
  if ( SummonInfos->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v7 = SummonInfos->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v7 )
    goto LABEL_82;
  v8 = this->fields.SummonInfos;
  if ( !v8 )
    goto LABEL_82;
  ServantId = v7->fields.ServantId;
  if ( v8->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v10 = v8->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v10 )
    goto LABEL_82;
  v11 = this->fields.SummonInfos;
  if ( !v11 )
    goto LABEL_82;
  LimitCount = v10->fields.LimitCount;
  if ( v11->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v13 = v11->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v13 )
    goto LABEL_82;
  v14 = this->fields.SummonInfos;
  if ( !v14 )
    goto LABEL_82;
  IsRankUp = v13->fields.IsRankUp;
  if ( v14->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v16 = v14->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v16 )
    goto LABEL_82;
  v17 = this->fields.SummonInfos;
  if ( !v17 )
    goto LABEL_82;
  IsNewCard = v16->fields.IsNewCard;
  if ( v17->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v19 = v17->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v19 )
    goto LABEL_82;
  v20 = this->fields.SummonInfos;
  if ( !v20 )
    goto LABEL_82;
  NoticeRarity = v19->fields.NoticeRarity;
  if ( v20->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v51 = IsNewCard;
  v21 = v20->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v21 )
    goto LABEL_82;
  v22 = this->fields.SummonInfos;
  if ( !v22 )
    goto LABEL_82;
  Rarity = v21->fields.Rarity;
  if ( v22->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v24 = v22->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v24 )
    goto LABEL_82;
  v25 = this->fields.SummonInfos;
  if ( !v25 )
    goto LABEL_82;
  CardType = v24->fields.CardType;
  if ( v25->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v27 = v25->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v27 )
    goto LABEL_82;
  IsSkipStop = v27->fields.IsSkipStop;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_12890/*"ServantId"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = ServantId;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8623/*"LimitCount"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = LimitCount;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8290/*"IsRankUp"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = IsRankUp;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8294/*"IsSkipStop"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = IsSkipStop;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  v29 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v29 )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              v29,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B70630((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v30, v31, v32, v33, v34, v35);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B70630((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v36, v37, v38, v39, v40, v41);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B70630((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v42, v43, v44, v45, v46, v47);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8277/*"IsNewCard"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = v51 || Rarity == 0;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_9811/*"NoticeRarity"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = NoticeRarity;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_3968/*"CardType"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = CardType;
  if ( (unsigned int)(Rarity - 3) >= 3 )
    v48 = Rarity ? 0 : 3;
  else
    v48 = dword_32FD53C[Rarity - 3];
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_11435/*"Rarity"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = v48;
  firstTr = (UnityEngine_Object_o *)this->fields.firstTr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(firstTr, 0LL, 0LL) )
  {
    firstTPeelr = (UnityEngine_Object_o *)this->fields.firstTPeelr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(firstTPeelr, 0LL, 0LL) )
    {
      Component_WebViewObject = this->fields.firstTr;
      if ( Component_WebViewObject )
      {
        Component_WebViewObject = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)Component_WebViewObject,
                                    0LL);
        if ( Component_WebViewObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 0, 0LL);
          Component_WebViewObject = this->fields.firstTPeelr;
          if ( Component_WebViewObject )
          {
            Component_WebViewObject = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)Component_WebViewObject,
                                        0LL);
            if ( Component_WebViewObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_82:
      sub_B7076C(Component_WebViewObject, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  PlayMakerFSM_o *Component_WebViewObject; // x0
  System_String_c *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  PlayMakerFSM_o *v12; // x23
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x22
  SummonEffectComponent_SummonInfo_o *v14; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v15; // x22
  SummonEffectComponent_SummonInfo_o *v16; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v17; // x22
  SummonEffectComponent_SummonInfo_o *v18; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v19; // x22
  _BOOL4 IsRankUp; // w25
  SummonEffectComponent_SummonInfo_o *v21; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v22; // x22
  _BOOL4 IsNewCard; // w28
  SummonEffectComponent_SummonInfo_o *v24; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v25; // x26
  int32_t NoticeRarity; // w22
  SummonEffectComponent_SummonInfo_o *v27; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v28; // x26
  int Rarity; // w27
  SummonEffectComponent_SummonInfo_o *v30; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v31; // x26
  SummonEffectComponent_SummonInfo_o *v32; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v33; // x27
  bool IsSkipStop; // w26
  SummonEffectComponent_SummonInfo_o *v35; // x8
  int64_t userServantId; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  HutongGames_PlayMaker_FsmVariables_o *v44; // x19
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int v51; // w22
  HutongGames_PlayMaker_FsmVariables_o *v52; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  __int64 v54; // x2
  Il2CppObject *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_o *v70; // x22
  float v71; // s8
  System_Int32_array **v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v101; // x24
  UnityEngine_Transform_o *v102; // x19
  int v103; // s0
  _BOOL4 v106; // w25
  PlayMakerFSM_o *v107; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v108; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v109; // x8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v110; // x22
  GachaBehaviorMaster_c *v111; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v112; // x0
  int32_t v113; // w24
  int v114; // w28
  UnityEngine_Object_o *prevObject; // x19
  struct UnityEngine_GameObject_o **p_prevObject; // x22
  int v117; // w9
  _BOOL4 v118; // w24
  int32_t v119; // w8
  UnityEngine_Object_o *v120; // x19
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  UnityEngine_GameObject_o *gameObject; // x19
  System_Action_o *v128; // x25
  bool v129; // w25
  UnityEngine_GameObject_o *v130; // x19
  UserServantEntity_o *v131; // x25
  int v132; // w27
  System_Action_o *v133; // x28
  System_Action_o *v134; // x3
  System_Action_o *v135; // x25
  UnityEngine_Component_o *v136; // x19
  UnityEngine_Transform_o *v137; // x25
  int v138; // s0
  System_Int32_array **v141; // x0
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_String_o *v148; // x22
  System_String_o *v149; // x19
  UnityEngine_Transform_o *v150; // x0
  UnityEngine_Component_o *v151; // x26
  UnityEngine_Transform_o *v152; // x0
  UnityEngine_Component_o *v153; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  __int64 v155; // x1
  int v156; // w8
  UnityEngine_Transform_o *v157; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v159; // x3
  UnityEngine_Transform_o *v160; // x0
  UnityEngine_Transform_o *v161; // x0
  const MethodInfo *v162; // x3
  UnityEngine_Transform_o *v163; // x0
  UnityEngine_Transform_o *v164; // x1
  const MethodInfo *v165; // x3
  SummonEffectComponent_o *v166; // x0
  int32_t v167; // w2
  System_String_o *v168; // x0
  System_String_o *v169; // x19
  System_String_o *v170; // x0
  System_String_o *v171; // x0
  System_String_o *v172; // x19
  AssetLoader_LoadEndDataHandler_o *v173; // x20
  System_String_o *v174; // x19
  AssetLoader_LoadEndDataHandler_o *v175; // x20
  System_String_o *v176; // x0
  AssetLoader_LoadEndDataHandler_o *v177; // x1
  UnityEngine_Transform_o *v178; // x0
  UnityEngine_Transform_o *v179; // x0
  UnityEngine_Transform_o *v180; // x0
  const MethodInfo *v181; // x3
  const MethodInfo *v182; // x1
  __int64 v183; // x22
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  WarEntity_o *v190; // x19
  int v191; // w8
  int32_t v192; // w19
  __int64 v193; // x21
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  Il2CppObject **v200; // x20
  int32_t LowerColorRarity; // w0
  int32_t v202; // w22
  GachaBehaviorMaster_c *v203; // x0
  GachaBehaviorMaster_c *v204; // x0
  int v205; // w8
  GachaBehaviorMaster_c *v206; // x0
  GachaBehaviorMaster_c *v207; // x0
  int v208; // w9
  GachaBehaviorMaster_c *v209; // x0
  GachaBehaviorMaster_c *v210; // x0
  int v211; // w8
  GachaBehaviorMaster_c *v212; // x0
  GachaBehaviorMaster_c *v213; // x0
  int v214; // w8
  GachaBehaviorMaster_c *v215; // x0
  _BOOL4 v216; // w10
  HutongGames_PlayMaker_FsmVariables_o *v217; // x19
  HutongGames_PlayMaker_FsmString_o *v218; // x0
  GachaBehaviorMaster_c *v219; // x8
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  PlayMakerFSM_o *v226; // x8
  GachaBehaviorMaster_c *v227; // x0
  HutongGames_PlayMaker_FsmVariables_o *v228; // x19
  HutongGames_PlayMaker_FsmString_o *v229; // x0
  GachaBehaviorMaster_c *v230; // x8
  System_String_array **v231; // x2
  System_String_array **v232; // x3
  System_Boolean_array **v233; // x4
  System_Int32_array **v234; // x5
  System_Int32_array *v235; // x6
  System_Int32_array *v236; // x7
  GachaBehaviorMaster_c *v237; // x0
  HutongGames_PlayMaker_FsmVariables_o *v238; // x19
  HutongGames_PlayMaker_FsmString_o *v239; // x0
  GachaBehaviorMaster_c *v240; // x8
  System_String_array **v241; // x2
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  __int64 v247; // x20
  System_String_array **v248; // x2
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  Il2CppObject **v254; // x21
  int v255; // w8
  System_String_o *v256; // x22
  Il2CppObject *v257; // x24
  AssetLoader_LoadEndDataHandler_o *v258; // x23
  _DWORD *monitor; // x8
  System_String_o **v260; // x8
  int32_t *v261; // x21
  System_String_o *v262; // x19
  AssetLoader_LoadEndDataHandler_o *v263; // x21
  System_String_o *DesignCardPath; // x23
  AssetLoader_LoadEndDataHandler_o *v265; // x24
  System_String_o *v266; // x22
  AssetLoader_LoadEndDataHandler_o *v267; // x23
  Il2CppObject *v268; // x21
  SummonEffectComponent_o *v269; // x0
  UnityEngine_Transform_o *v270; // x1
  int32_t v271; // w2
  const MethodInfo *v272; // x3
  _BOOL4 v273; // [xsp+8h] [xbp-D8h]
  int v274; // [xsp+Ch] [xbp-D4h]
  int v275; // [xsp+10h] [xbp-D0h]
  int v276; // [xsp+14h] [xbp-CCh]
  int v277; // [xsp+2Ch] [xbp-B4h]
  int64_t v278; // [xsp+30h] [xbp-B0h]
  System_String_o **v279; // [xsp+38h] [xbp-A8h]
  int32_t Item; // [xsp+4Ch] [xbp-94h]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+50h] [xbp-90h]
  int32_t limitCount; // [xsp+5Ch] [xbp-84h]
  UnityEngine_Component_o *v283; // [xsp+60h] [xbp-80h]
  int key; // [xsp+68h] [xbp-78h]
  int32_t svtId; // [xsp+6Ch] [xbp-74h]
  int v286; // [xsp+70h] [xbp-70h] BYREF
  int v287; // [xsp+74h] [xbp-6Ch] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v289; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v290; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v291; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v292; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v293; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4355E4B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_B70694(&Method_DataManager_GetMasterData_GachaBehaviorMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&GachaBehaviorMaster_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Rarity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&SummonEffectComponent_TypeInfo);
    sub_B70694(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__);
    sub_B70694(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__);
    sub_B70694(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__);
    sub_B70694(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__);
    sub_B70694(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__);
    sub_B70694(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
    sub_B70694(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__);
    sub_B70694(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__);
    sub_B70694(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
    sub_B70694(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__);
    sub_B70694(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__);
    sub_B70694(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
    sub_B70694(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__);
    sub_B70694(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
    sub_B70694(&StringLiteral_3964/*"CardScale"*/);
    sub_B70694(&StringLiteral_3965/*"CardSecondName"*/);
    sub_B70694(&StringLiteral_3956/*"CardFirstName"*/);
    sub_B70694(&StringLiteral_8277/*"IsNewCard"*/);
    sub_B70694(&StringLiteral_3963/*"CardRotName"*/);
    sub_B70694(&StringLiteral_4191/*"CodeCardRarity02"*/);
    sub_B70694(&StringLiteral_2396/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/);
    sub_B70694(&StringLiteral_11424/*"Rank"*/);
    sub_B70694(&StringLiteral_17985/*"countIndex"*/);
    sub_B70694(&StringLiteral_13340/*"SummonEffect"*/);
    sub_B70694(&StringLiteral_22064/*"rarity"*/);
    sub_B70694(&StringLiteral_8290/*"IsRankUp"*/);
    sub_B70694(&StringLiteral_16128/*"_0"*/);
    sub_B70694(&StringLiteral_4190/*"CodeCardRarity"*/);
    sub_B70694(&StringLiteral_8294/*"IsSkipStop"*/);
    sub_B70694(&StringLiteral_8623/*"LimitCount"*/);
    sub_B70694(&StringLiteral_9811/*"NoticeRarity"*/);
    sub_B70694(&StringLiteral_2395/*"BACKSIDE_CLASS_IMAGE_ID"*/);
    sub_B70694(&StringLiteral_3968/*"CardType"*/);
    sub_B70694(&StringLiteral_3962/*"CardNodeName"*/);
    sub_B70694(&StringLiteral_3957/*"CardFirstPeelName"*/);
    sub_B70694(&StringLiteral_22810/*"summon_rarity_0"*/);
    sub_B70694(&StringLiteral_11435/*"Rarity"*/);
    sub_B70694(&StringLiteral_12890/*"ServantId"*/);
    byte_4355E4B = 1;
  }
  entity = 0LL;
  v287 = 0;
  v3 = sub_B70764(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  SummonEffectComponent___c__DisplayClass45_0___ctor((SummonEffectComponent___c__DisplayClass45_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_393;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v12 = Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_17985/*"countIndex"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmInt__get_Value(
                                                (HutongGames_PlayMaker_FsmInt_o *)Component_WebViewObject,
                                                0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_393;
  if ( SummonInfos->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v14 = SummonInfos->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v14 )
    goto LABEL_393;
  v15 = this->fields.SummonInfos;
  if ( !v15 )
    goto LABEL_393;
  svtId = v14->fields.ServantId;
  if ( v15->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v16 = v15->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v16 )
    goto LABEL_393;
  v17 = this->fields.SummonInfos;
  if ( !v17 )
    goto LABEL_393;
  limitCount = v16->fields.LimitCount;
  if ( v17->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v18 = v17->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v18 )
    goto LABEL_393;
  v19 = this->fields.SummonInfos;
  if ( !v19 )
    goto LABEL_393;
  IsRankUp = v18->fields.IsRankUp;
  if ( v19->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v21 = v19->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v21 )
    goto LABEL_393;
  v22 = this->fields.SummonInfos;
  if ( !v22 )
    goto LABEL_393;
  IsNewCard = v21->fields.IsNewCard;
  if ( v22->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v24 = v22->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v24 )
    goto LABEL_393;
  v25 = this->fields.SummonInfos;
  if ( !v25 )
    goto LABEL_393;
  NoticeRarity = v24->fields.NoticeRarity;
  if ( v25->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v27 = v25->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v27 )
    goto LABEL_393;
  v28 = this->fields.SummonInfos;
  if ( !v28 )
    goto LABEL_393;
  Rarity = v27->fields.Rarity;
  if ( v28->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v30 = v28->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v30 )
    goto LABEL_393;
  *(_DWORD *)(v3 + 56) = v30->fields.CardType;
  v31 = this->fields.SummonInfos;
  if ( !v31 )
    goto LABEL_393;
  if ( v31->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  key = Rarity;
  v32 = v31->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v32 )
    goto LABEL_393;
  v33 = this->fields.SummonInfos;
  if ( !v33 )
    goto LABEL_393;
  IsSkipStop = v32->fields.IsSkipStop;
  if ( v33->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v35 = v33->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v35 )
    goto LABEL_393;
  userServantId = v35->fields.userServantId;
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v5);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v37;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._releaseAssetPath,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_12890/*"ServantId"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = svtId;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8623/*"LimitCount"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = limitCount;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8290/*"IsRankUp"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsRankUp;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8294/*"IsSkipStop"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsSkipStop;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  v44 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v44 )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                v44,
                                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject[1].klass = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&Component_WebViewObject[1], 0LL, v45, v46, v47, v48, v49, v50);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8277/*"IsNewCard"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsNewCard || key == 0;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_9811/*"NoticeRarity"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = NoticeRarity;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3968/*"CardType"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = *(_DWORD *)(v3 + 56);
  if ( (unsigned int)(key - 3) >= 3 )
    v51 = key ? 0 : 3;
  else
    v51 = dword_32FD53C[key - 3];
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_11435/*"Rarity"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = v51;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  v52 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v52 )
    goto LABEL_393;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v52,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0LL);
  v286 = v51;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v286, v54);
  Component_WebViewObject = (PlayMakerFSM_o *)System_String__Concat((Il2CppObject *)StringLiteral_22810/*"summon_rarity_0"*/, v55, 0LL);
  if ( !FsmString )
    goto LABEL_393;
  FsmString->fields.value = (struct System_String_o *)Component_WebViewObject;
  sub_B70630(
    (BattleServantConfConponent_o *)&FsmString->fields.value,
    (System_Int32_array **)Component_WebViewObject,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v278 = userServantId;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_13340/*"SummonEffect"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)Component_WebViewObject,
            0LL);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)Value,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3962/*"CardNodeName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v70 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3964/*"CardScale"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v71 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3956/*"CardFirstName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v72 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                 (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                 0LL);
  *(_QWORD *)(v3 + 24) = v72;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), v72, v73, v74, v75, v76, v77, v78);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3957/*"CardFirstPeelName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v79 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                 (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                 0LL);
  *(_QWORD *)(v3 + 32) = v79;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), v79, v80, v81, v82, v83, v84, v85);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3965/*"CardSecondName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v86 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                 (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                 0LL);
  *(_QWORD *)(v3 + 40) = v86;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 40), v86, v87, v88, v89, v90, v91, v92);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3963/*"CardRotName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v93 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                 (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                 0LL);
  *(_QWORD *)(v3 + 48) = v93;
  v279 = (System_String_o **)(v3 + 48);
  sub_B70630((BattleServantConfConponent_o *)(v3 + 48), v93, v94, v95, v96, v97, v98, v99);
  Component_WebViewObject = (PlayMakerFSM_o *)*p_effect;
  if ( !*p_effect )
    goto LABEL_393;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v70, 1, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v101 = (UnityEngine_Component_o *)Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Component_WebViewObject,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 0, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v101, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v102 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_WebViewObject, 0LL);
  *(UnityEngine_Vector3_o *)&v103 = UnityEngine_Vector3__get_one(0LL);
  if ( !v102 )
    goto LABEL_393;
  UnityEngine_Transform__set_localScale(v102, *(UnityEngine_Vector3_o *)&v103, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Item = System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
           (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)Component_WebViewObject,
           key,
           (const MethodInfo_2F6E3A4 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Component_WebViewObject,
                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v106 = IsRankUp && Item != 0;
  Component_WebViewObject = (PlayMakerFSM_o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                (GachaBehaviorMaster_o *)Component_WebViewObject,
                                                this->fields.gachaId,
                                                svtId,
                                                0LL);
  v283 = v101;
  if ( !Component_WebViewObject )
    goto LABEL_120;
  v107 = Component_WebViewObject;
  if ( SLODWORD(Component_WebViewObject->fields.fsm) < 1 )
    goto LABEL_120;
  v108 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&Component_WebViewObject->fields.m_CachedPtr
                                                                 + 32LL);
  if ( !v108 )
    goto LABEL_393;
  if ( !*(_QWORD *)&v108->fields.targetId )
  {
LABEL_120:
    v275 = -1;
    v276 = -1;
    v274 = -1;
    v277 = -1;
    v114 = -1;
LABEL_121:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v106 )
      v117 = 4;
    else
      v117 = 3;
    v118 = v106;
    if ( this->fields.EditMode )
      v119 = 0;
    else
      v119 = v117;
    this->fields._counter = 0;
    this->fields._counterMax = v119;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(prevObject, 0LL, 0LL) )
    {
      v120 = (UnityEngine_Object_o *)*p_prevObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v120, 0LL);
      *p_prevObject = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.prevObject, 0LL, v121, v122, v123, v124, v125, v126);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v283, 0LL);
      v128 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v128,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0LL);
      Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateCommandTexturePrefab(
                                                    gameObject,
                                                    svtId,
                                                    0,
                                                    v128,
                                                    0LL);
    }
    else
    {
      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_WebViewObject )
        goto LABEL_393;
      Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)Component_WebViewObject,
                                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0LL;
      if ( !Component_WebViewObject )
        goto LABEL_393;
      v129 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Component_WebViewObject,
               &entity,
               v278,
               (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v130 = UnityEngine_Component__get_gameObject(v283, 0LL);
      if ( v129 )
      {
        v131 = entity;
        v132 = v114;
        v133 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v133,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0LL);
        v134 = v133;
        v114 = v132;
        p_effect = &this->fields.effect;
        Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_30572456(
                                                      v130,
                                                      v131,
                                                      0,
                                                      v134,
                                                      0LL);
      }
      else
      {
        v135 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v135,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0LL);
        Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab(
                                                      v130,
                                                      svtId,
                                                      limitCount,
                                                      0,
                                                      1,
                                                      0,
                                                      v135,
                                                      0,
                                                      0LL);
      }
    }
    v136 = (UnityEngine_Component_o *)Component_WebViewObject;
    if ( Component_WebViewObject )
    {
      v137 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_WebViewObject, 0LL);
      *(UnityEngine_Vector3_o *)&v138 = UnityEngine_Vector3__get_zero(0LL);
      if ( v137 )
      {
        UnityEngine_Transform__set_localPosition(v137, *(UnityEngine_Vector3_o *)&v138, 0LL);
        Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v136, 0LL);
        if ( Component_WebViewObject )
        {
          v289.fields.x = v71;
          v289.fields.y = v71;
          v289.fields.z = v71;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_WebViewObject, v289, 0LL);
          Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        v283,
                                                        (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
          if ( Component_WebViewObject )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
            v141 = (System_Int32_array **)UnityEngine_Component__get_gameObject(v136, 0LL);
            *p_prevObject = (struct UnityEngine_GameObject_o *)v141;
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.prevObject,
              v141,
              v142,
              v143,
              v144,
              v145,
              v146,
              v147);
            Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
            if ( Component_WebViewObject )
            {
              Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                            (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                            (System_String_o *)StringLiteral_4190/*"CodeCardRarity"*/,
                                                            0LL);
              if ( Component_WebViewObject )
              {
                v148 = HutongGames_PlayMaker_FsmString__get_Value(
                         (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                         0LL);
                Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
                if ( Component_WebViewObject )
                {
                  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                                (System_String_o *)StringLiteral_4191/*"CodeCardRarity02"*/,
                                                                0LL);
                  if ( Component_WebViewObject )
                  {
                    Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                                                  0LL);
                    if ( *p_effect )
                    {
                      v149 = (System_String_o *)Component_WebViewObject;
                      v150 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                      Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(v150, v148, 1, 0LL);
                      if ( Component_WebViewObject )
                      {
                        Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                      (UnityEngine_Component_o *)Component_WebViewObject,
                                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                        if ( *p_effect )
                        {
                          v151 = (UnityEngine_Component_o *)Component_WebViewObject;
                          v152 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                          Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(
                                                                        v152,
                                                                        v149,
                                                                        1,
                                                                        0LL);
                          if ( Component_WebViewObject )
                          {
                            Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                          (UnityEngine_Component_o *)Component_WebViewObject,
                                                                          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                            if ( v151 )
                            {
                              v153 = (UnityEngine_Component_o *)Component_WebViewObject;
                              Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                            v151,
                                                                            0LL);
                              if ( Component_WebViewObject )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Component_WebViewObject,
                                  0,
                                  0LL);
                                if ( v153 )
                                {
                                  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                v153,
                                                                                0LL);
                                  if ( Component_WebViewObject )
                                  {
                                    UnityEngine_GameObject__SetActive(
                                      (UnityEngine_GameObject_o *)Component_WebViewObject,
                                      0,
                                      0LL);
                                    if ( this->fields.EditMode )
                                    {
                                      FsmVariables = PlayMakerFSM__get_FsmVariables(v12, 0LL);
                                      if ( !FsmVariables )
                                        goto LABEL_394;
                                      FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                                                               FsmVariables,
                                                                                               (System_String_o *)StringLiteral_11424/*"Rank"*/,
                                                                                               0LL);
                                      if ( v118 )
                                      {
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v156 = Item == 2 ? 2 : 1;
                                        LODWORD(FsmVariables->fields.vector3Variables) = v156;
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_effect;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v157 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        NodeFromName = TransformHelper__getNodeFromName(
                                                         v157,
                                                         *(System_String_o **)(v3 + 24),
                                                         1,
                                                         0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, Item - 1, v159);
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v160 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v161 = TransformHelper__getNodeFromName(
                                                 v160,
                                                 *(System_String_o **)(v3 + 32),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v161, Item - 1, v162);
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v163 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v164 = TransformHelper__getNodeFromName(v163, *v279, 1, 0LL);
                                        v166 = this;
                                        v167 = Item - 1;
                                      }
                                      else
                                      {
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        LODWORD(FsmVariables->fields.vector3Variables) = 0;
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_effect;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v178 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v164 = TransformHelper__getNodeFromName(v178, *v279, 1, 0LL);
                                        v166 = this;
                                        v167 = Item;
                                      }
                                      SummonEffectComponent__ChangeClassCardColor(v166, v164, v167, v165);
                                      FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                      if ( FsmVariables )
                                      {
                                        v179 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v180 = TransformHelper__getNodeFromName(
                                                 v179,
                                                 *(System_String_o **)(v3 + 40),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v180, Item, v181);
                                        SummonEffectComponent__CompleteCallback(this, v182);
                                        return;
                                      }
LABEL_394:
                                      sub_B7076C(FsmVariables, v155);
                                    }
                                    if ( *(_DWORD *)(v3 + 56) == 3 )
                                    {
                                      Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(
                                                                                    v12,
                                                                                    0LL);
                                      if ( Component_WebViewObject )
                                      {
                                        Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                                                      (System_String_o *)StringLiteral_11424/*"Rank"*/,
                                                                                      0LL);
                                        if ( Component_WebViewObject )
                                        {
                                          LODWORD(Component_WebViewObject[1].klass) = 3;
                                          v287 = key;
                                          Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                        v151,
                                                                                        0LL);
                                          if ( Component_WebViewObject )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)Component_WebViewObject,
                                              1,
                                              0LL);
                                            v168 = System_Int32__ToString((int32_t)&v287, 0LL);
                                            v169 = System_String__Concat_44760452(
                                                     (System_String_o *)StringLiteral_22064/*"rarity"*/,
                                                     v168,
                                                     (System_String_o *)StringLiteral_16128/*"_0"*/,
                                                     0LL);
                                            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !AtlasManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                            }
                                            AtlasManager__SetCharaGraphaOption((UISprite_o *)v151, v169, 0LL);
                                            ((void (__fastcall *)(UnityEngine_Component_o *, void *))v151->klass[2]._1.typeMetadataHandle)(
                                              v151,
                                              v151->klass[2]._1.interopData);
                                            Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                          v153,
                                                                                          0LL);
                                            if ( Component_WebViewObject )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)Component_WebViewObject,
                                                1,
                                                0LL);
                                              v170 = System_Int32__ToString((int32_t)&v287, 0LL);
                                              v171 = System_String__Concat_44760452(
                                                       (System_String_o *)StringLiteral_22064/*"rarity"*/,
                                                       v170,
                                                       (System_String_o *)StringLiteral_16128/*"_0"*/,
                                                       0LL);
                                              AtlasManager__SetCharaGraphaOption((UISprite_o *)v153, v171, 0LL);
                                              ((void (__fastcall *)(UnityEngine_Component_o *, void *))v153->klass[2]._1.typeMetadataHandle)(
                                                v153,
                                                v153->klass[2]._1.interopData);
                                              Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                            v151,
                                                                                            0LL);
                                              if ( Component_WebViewObject )
                                              {
                                                v290.fields.x = 0.0;
                                                v290.fields.z = 0.0;
                                                v290.fields.y = 216.81;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)Component_WebViewObject,
                                                  v290,
                                                  0LL);
                                                Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                              v151,
                                                                                              0LL);
                                                if ( Component_WebViewObject )
                                                {
                                                  v291.fields.x = v71;
                                                  v291.fields.y = v71;
                                                  v291.fields.z = v71;
                                                  UnityEngine_Transform__set_localScale(
                                                    (UnityEngine_Transform_o *)Component_WebViewObject,
                                                    v291,
                                                    0LL);
                                                  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                                v153,
                                                                                                0LL);
                                                  if ( Component_WebViewObject )
                                                  {
                                                    v292.fields.x = 0.0;
                                                    v292.fields.z = 0.0;
                                                    v292.fields.y = 216.81;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)Component_WebViewObject,
                                                      v292,
                                                      0LL);
                                                    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                                  v153,
                                                                                                  0LL);
                                                    if ( Component_WebViewObject )
                                                    {
                                                      v293.fields.x = v71;
                                                      v293.fields.y = v71;
                                                      v293.fields.z = v71;
                                                      UnityEngine_Transform__set_localScale(
                                                        (UnityEngine_Transform_o *)Component_WebViewObject,
                                                        v293,
                                                        0LL);
                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                      if ( Component_WebViewObject )
                                                      {
                                                        Component_WebViewObject = (PlayMakerFSM_o *)DesignCardManager__GetCommanCodeCardPath((DesignCardManager_o *)Component_WebViewObject, 1, key, 0LL);
                                                        if ( *p_releaseAssetPath )
                                                        {
                                                          v172 = (System_String_o *)Component_WebViewObject;
                                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                            (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
                                                            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
                                                          v173 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                          AssetLoader_LoadEndDataHandler___ctor(
                                                            v173,
                                                            (Il2CppObject *)v3,
                                                            Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
                                                            0LL);
                                                          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                            && !AssetManager_TypeInfo->_2.cctor_finished )
                                                          {
                                                            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                          }
                                                          AssetManager__loadAssetStorage(v172, v173, 1, 0LL);
                                                          Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                          if ( Component_WebViewObject )
                                                          {
                                                            Component_WebViewObject = (PlayMakerFSM_o *)DesignCardManager__GetCommanCodeCardPath((DesignCardManager_o *)Component_WebViewObject, 101, key, 0LL);
                                                            if ( *p_releaseAssetPath )
                                                            {
                                                              v174 = (System_String_o *)Component_WebViewObject;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
                                                                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v175 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v175,
                                                                (Il2CppObject *)v3,
                                                                Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
                                                                0LL);
LABEL_189:
                                                              v176 = v174;
                                                              v177 = v175;
LABEL_358:
                                                              AssetManager__loadAssetStorage(v176, v177, 1, 0LL);
                                                              return;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else
                                    {
                                      v183 = sub_B70764(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
                                      SummonEffectComponent___c__DisplayClass45_1___ctor(
                                        (SummonEffectComponent___c__DisplayClass45_1_o *)v183,
                                        0LL);
                                      if ( v183 )
                                      {
                                        *(_QWORD *)(v183 + 24) = v3;
                                        sub_B70630(
                                          (BattleServantConfConponent_o *)(v183 + 24),
                                          (System_Int32_array **)v3,
                                          v184,
                                          v185,
                                          v186,
                                          v187,
                                          v188,
                                          v189);
                                        Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                        if ( Component_WebViewObject )
                                        {
                                          Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Component_WebViewObject,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
                                          if ( Component_WebViewObject )
                                          {
                                            v190 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Component_WebViewObject,
                                                     svtId,
                                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                                            Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                            if ( Component_WebViewObject )
                                            {
                                              Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Component_WebViewObject,
                                                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                                              if ( Component_WebViewObject )
                                              {
                                                ServantLimitMaster__GetEntity(
                                                  (ServantLimitMaster_o *)Component_WebViewObject,
                                                  svtId,
                                                  limitCount,
                                                  0LL);
                                                Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                                if ( Component_WebViewObject )
                                                {
                                                  Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Component_WebViewObject,
                                                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
                                                  if ( v190 )
                                                  {
                                                    if ( Component_WebViewObject )
                                                    {
                                                      Component_WebViewObject = (PlayMakerFSM_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Component_WebViewObject,
                                                                                                    v190->fields.startType,
                                                                                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
                                                      if ( Component_WebViewObject )
                                                      {
                                                        v191 = *(_DWORD *)&Component_WebViewObject->fields.eventHandlerComponentsAdded;
                                                        if ( v276 != -1 )
                                                          v191 = v276;
                                                        *(_DWORD *)(v183 + 16) = v191;
                                                        if ( v275 == -1 )
                                                          v192 = key;
                                                        else
                                                          v192 = v275;
                                                        if ( v118 )
                                                        {
                                                          v193 = sub_B70764(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
                                                          SummonEffectComponent___c__DisplayClass45_2___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_2_o *)v193,
                                                            0LL);
                                                          if ( v193 )
                                                          {
                                                            *(_QWORD *)(v193 + 24) = v183;
                                                            v200 = (Il2CppObject **)(v193 + 24);
                                                            sub_B70630(
                                                              (BattleServantConfConponent_o *)(v193 + 24),
                                                              (System_Int32_array **)v183,
                                                              v194,
                                                              v195,
                                                              v196,
                                                              v197,
                                                              v198,
                                                              v199);
                                                            if ( *(_QWORD *)(v193 + 24) )
                                                            {
                                                              *(_DWORD *)(v193 + 16) = *(_DWORD *)(*(_QWORD *)(v193 + 24)
                                                                                                 + 16LL);
                                                              if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !Rarity_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                                                              }
                                                              LowerColorRarity = Rarity__getLowerColorRarity(v192, 0LL);
                                                              if ( v277 != -1 )
                                                                *(_DWORD *)(v193 + 16) = v277;
                                                              v202 = v274 == -1 ? LowerColorRarity : v274;
                                                              Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
                                                              if ( Component_WebViewObject )
                                                              {
                                                                Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt((HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject, (System_String_o *)StringLiteral_11424/*"Rank"*/, 0LL);
                                                                if ( v114 == -1 )
                                                                {
                                                                  if ( !Component_WebViewObject )
                                                                    goto LABEL_393;
                                                                  v114 = Item == 2 ? 2 : 1;
                                                                }
                                                                else if ( !Component_WebViewObject )
                                                                {
                                                                  goto LABEL_393;
                                                                }
                                                                LODWORD(Component_WebViewObject[1].klass) = v114;
                                                                Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !Component_WebViewObject )
                                                                  goto LABEL_393;
                                                                DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                   (DesignCardManager_o *)Component_WebViewObject,
                                                                                   *(_DWORD *)(v193 + 16),
                                                                                   v202,
                                                                                   0LL);
                                                                if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                  && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                {
                                                                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                }
                                                                if ( !AssetManager__isExistAssetStorage(
                                                                        DesignCardPath,
                                                                        0LL) )
                                                                {
                                                                  *(_DWORD *)(v193 + 16) = 1;
                                                                  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( !Component_WebViewObject )
                                                                    goto LABEL_393;
                                                                  v202 = 3;
                                                                  DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                     (DesignCardManager_o *)Component_WebViewObject,
                                                                                     *(_DWORD *)(v193 + 16),
                                                                                     3,
                                                                                     0LL);
                                                                }
                                                                Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                if ( *p_releaseAssetPath )
                                                                {
                                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                    (EventMissionProgressRequest_Argument_ProgressData_o *)DesignCardPath,
                                                                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
                                                                  v265 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                  AssetLoader_LoadEndDataHandler___ctor(
                                                                    v265,
                                                                    (Il2CppObject *)v193,
                                                                    Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
                                                                    0LL);
                                                                  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                    && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                  {
                                                                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                  }
                                                                  AssetManager__loadAssetStorage(
                                                                    DesignCardPath,
                                                                    v265,
                                                                    1,
                                                                    0LL);
                                                                  *(_DWORD *)(v193 + 20) = ConstantMaster__getValue(
                                                                                             (System_String_o *)StringLiteral_2395/*"BACKSIDE_CLASS_IMAGE_ID"*/,
                                                                                             0LL);
                                                                  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( Component_WebViewObject )
                                                                  {
                                                                    v266 = DesignCardManager__GetDesignCardPath(
                                                                             (DesignCardManager_o *)Component_WebViewObject,
                                                                             *(_DWORD *)(v193 + 20),
                                                                             v202,
                                                                             0LL);
                                                                    if ( !AssetManager__isExistAssetStorage(v266, 0LL) )
                                                                    {
                                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( !Component_WebViewObject )
                                                                        goto LABEL_393;
                                                                      v266 = DesignCardManager__GetDesignCardPath(
                                                                               (DesignCardManager_o *)Component_WebViewObject,
                                                                               *(_DWORD *)(v193 + 20),
                                                                               3,
                                                                               0LL);
                                                                    }
                                                                    Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                    if ( *p_releaseAssetPath )
                                                                    {
                                                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                        (EventMissionProgressRequest_Argument_ProgressData_o *)v266,
                                                                        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
                                                                      v267 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                      AssetLoader_LoadEndDataHandler___ctor(
                                                                        v267,
                                                                        (Il2CppObject *)v193,
                                                                        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
                                                                        0LL);
                                                                      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                        && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                      {
                                                                        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                      }
                                                                      AssetManager__loadAssetStorage(v266, v267, 1, 0LL);
                                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( *v200 )
                                                                      {
                                                                        if ( Component_WebViewObject )
                                                                        {
                                                                          v174 = DesignCardManager__GetDesignCardPath(
                                                                                   (DesignCardManager_o *)Component_WebViewObject,
                                                                                   (int32_t)(*v200)[1].klass,
                                                                                   v192,
                                                                                   0LL);
                                                                          Component_WebViewObject = (PlayMakerFSM_o *)AssetManager__isExistAssetStorage(v174, 0LL);
                                                                          if ( ((unsigned __int8)Component_WebViewObject & 1) == 0 )
                                                                          {
                                                                            if ( !*v200 )
                                                                              goto LABEL_393;
                                                                            LODWORD((*v200)[1].klass) = 1;
                                                                            Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                            if ( !*v200 || !Component_WebViewObject )
                                                                              goto LABEL_393;
                                                                            v174 = DesignCardManager__GetDesignCardPath(
                                                                                     (DesignCardManager_o *)Component_WebViewObject,
                                                                                     (int32_t)(*v200)[1].klass,
                                                                                     3,
                                                                                     0LL);
                                                                          }
                                                                          Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                          if ( *p_releaseAssetPath )
                                                                          {
                                                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v174,
                                                                              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
                                                                            v268 = *v200;
                                                                            v175 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                            AssetLoader_LoadEndDataHandler___ctor(
                                                                              v175,
                                                                              v268,
                                                                              Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
                                                                              0LL);
                                                                            if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                              && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                            {
                                                                              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                            }
                                                                            goto LABEL_189;
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v247 = sub_B70764(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
                                                          SummonEffectComponent___c__DisplayClass45_3___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_3_o *)v247,
                                                            0LL);
                                                          if ( v247 )
                                                          {
                                                            *(_QWORD *)(v247 + 24) = v183;
                                                            v254 = (Il2CppObject **)(v247 + 24);
                                                            sub_B70630(
                                                              (BattleServantConfConponent_o *)(v247 + 24),
                                                              (System_Int32_array **)v183,
                                                              v248,
                                                              v249,
                                                              v250,
                                                              v251,
                                                              v252,
                                                              v253);
                                                            Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
                                                            if ( Component_WebViewObject )
                                                            {
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt((HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject, (System_String_o *)StringLiteral_11424/*"Rank"*/, 0LL);
                                                              if ( !FsmVariables )
                                                                goto LABEL_394;
                                                              v255 = v114 == -1 ? 0 : v114;
                                                              LODWORD(FsmVariables->fields.vector3Variables) = v255;
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !*v254 || !FsmVariables )
                                                                goto LABEL_394;
                                                              v256 = DesignCardManager__GetDesignCardPath(
                                                                       (DesignCardManager_o *)FsmVariables,
                                                                       (int32_t)(*v254)[1].klass,
                                                                       v192,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)AssetManager__isExistAssetStorage(v256, 0LL);
                                                              if ( ((unsigned __int8)FsmVariables & 1) == 0 )
                                                              {
                                                                if ( !*v254 )
                                                                  goto LABEL_394;
                                                                LODWORD((*v254)[1].klass) = 1;
                                                                FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !*v254 || !FsmVariables )
                                                                  goto LABEL_394;
                                                                v192 = 3;
                                                                v256 = DesignCardManager__GetDesignCardPath(
                                                                         (DesignCardManager_o *)FsmVariables,
                                                                         (int32_t)(*v254)[1].klass,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_releaseAssetPath;
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)FsmVariables,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v256,
                                                                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v257 = *v254;
                                                              v258 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v258,
                                                                v257,
                                                                Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)AssetManager__loadAssetStorage(v256, v258, 1, 0LL);
                                                              if ( !*v254 )
                                                                goto LABEL_394;
                                                              monitor = (*v254)[1].monitor;
                                                              if ( !monitor )
                                                                goto LABEL_394;
                                                              v260 = (System_String_o **)(monitor[14] == 1
                                                                                        ? &StringLiteral_2396/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/
                                                                                        : &StringLiteral_2395/*"BACKSIDE_CLASS_IMAGE_ID"*/);
                                                              *(_DWORD *)(v247 + 16) = ConstantMaster__getValue(
                                                                                         *v260,
                                                                                         0LL);
                                                              v261 = (int32_t *)(v247 + 16);
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !FsmVariables )
                                                                goto LABEL_394;
                                                              v262 = DesignCardManager__GetDesignCardPath(
                                                                       (DesignCardManager_o *)FsmVariables,
                                                                       *v261,
                                                                       v192,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              if ( !AssetManager__isExistAssetStorage(v262, 0LL) )
                                                              {
                                                                FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !FsmVariables )
                                                                  goto LABEL_394;
                                                                v262 = DesignCardManager__GetDesignCardPath(
                                                                         (DesignCardManager_o *)FsmVariables,
                                                                         *v261,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_releaseAssetPath;
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)FsmVariables,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v262,
                                                                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v263 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v263,
                                                                (Il2CppObject *)v247,
                                                                Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              v176 = v262;
                                                              v177 = v263;
                                                              goto LABEL_358;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_393:
    sub_B7076C(Component_WebViewObject, v5);
  }
  if ( IsNewCard )
  {
    this->fields.isNoSkipAll = 1;
    if ( !LODWORD(Component_WebViewObject->fields.fsm) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  }
  v109 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&Component_WebViewObject->fields.m_CachedPtr
                                                                 + 32LL);
  if ( !v109 )
    goto LABEL_393;
  v110 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v109->fields.targetId;
  Component_WebViewObject = (PlayMakerFSM_o *)GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  }
  if ( !v110 )
    goto LABEL_393;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v110,
         (System_Xml_XmlQualifiedName_o *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v111 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v111 = GachaBehaviorMaster_TypeInfo;
    }
    v112 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             v110,
             (System_Type_o *)v111->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v107 = (PlayMakerFSM_o *)v112;
    if ( v112 )
    {
      v5 = string_TypeInfo;
      if ( (System_String_c *)v112->klass != string_TypeInfo )
        goto LABEL_397;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Component_WebViewObject,
            (WarBoardManager_TaskList_o *)v107,
            (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
      if ( !Component_WebViewObject )
        goto LABEL_393;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v107,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
    }
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
    if ( !Component_WebViewObject )
      goto LABEL_393;
    v113 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Component_WebViewObject,
             (WarBoardManager_TaskList_o *)v107,
             (const MethodInfo_3026738 *)Method_System_Collections_Generic_List_string__IndexOf__);
  }
  else
  {
    v113 = -1;
  }
  v203 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v203 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v110,
         (System_Xml_XmlQualifiedName_o *)v203->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v204 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v204 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v110,
                                                  (System_Type_o *)v204->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                                  (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v205 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v205 = -1;
  }
  v206 = GachaBehaviorMaster_TypeInfo;
  v277 = v205;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v206 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v110,
         (System_Xml_XmlQualifiedName_o *)v206->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v207 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v207 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v110,
                                                  (System_Type_o *)v207->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                                  (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v208 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v208 = -1;
  }
  v209 = GachaBehaviorMaster_TypeInfo;
  v274 = v208;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v209 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v110,
         (System_Xml_XmlQualifiedName_o *)v209->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v210 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v210 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v110,
                                                  (System_Type_o *)v210->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                                  (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v211 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v211 = -1;
  }
  v212 = GachaBehaviorMaster_TypeInfo;
  v276 = v211;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v212 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v110,
          (System_Xml_XmlQualifiedName_o *)v212->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v214 = -1;
    goto LABEL_269;
  }
  v213 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v213 = GachaBehaviorMaster_TypeInfo;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v110,
                                                (System_Type_o *)v213->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                                (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
  {
LABEL_395:
    sub_B70A60(Component_WebViewObject);
    goto LABEL_396;
  }
  v214 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
LABEL_269:
  v215 = GachaBehaviorMaster_TypeInfo;
  v216 = v106;
  v275 = v214;
  if ( v113 != -1 )
    v216 = v277 != -1;
  v273 = v216;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v215 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v110,
         (System_Xml_XmlQualifiedName_o *)v215->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                  (System_String_o *)StringLiteral_9811/*"NoticeRarity"*/,
                                                  0LL);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    LODWORD(Component_WebViewObject[1].klass) = 3;
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
    v217 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v217 )
      goto LABEL_393;
    v218 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v217,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0LL);
    v219 = GachaBehaviorMaster_TypeInfo;
    v107 = (PlayMakerFSM_o *)v218;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v219 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v110,
                                                  (System_Type_o *)v219->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                                  (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v107 )
      goto LABEL_393;
    v226 = Component_WebViewObject;
    if ( Component_WebViewObject && (System_String_c *)Component_WebViewObject->klass != string_TypeInfo )
      goto LABEL_396;
    v107[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
    sub_B70630(
      (BattleServantConfConponent_o *)&v107[1],
      (System_Int32_array **)Component_WebViewObject,
      v220,
      v221,
      v222,
      v223,
      v224,
      v225);
  }
  v227 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v227 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v110,
          (System_Xml_XmlQualifiedName_o *)v227->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_305:
    v237 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v237 = GachaBehaviorMaster_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v110,
            (System_Xml_XmlQualifiedName_o *)v237->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
            (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v106 = v273;
      v114 = v113;
      goto LABEL_121;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
    v106 = v273;
    v238 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v238 )
      goto LABEL_393;
    v239 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v238,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
             0LL);
    v240 = GachaBehaviorMaster_TypeInfo;
    v107 = (PlayMakerFSM_o *)v239;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v240 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v110,
                                                  (System_Type_o *)v240->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                                  (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v107 )
      goto LABEL_393;
    v226 = Component_WebViewObject;
    v114 = v113;
    if ( !Component_WebViewObject || (System_String_c *)Component_WebViewObject->klass == string_TypeInfo )
    {
      v107[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
      sub_B70630(
        (BattleServantConfConponent_o *)&v107[1],
        (System_Int32_array **)Component_WebViewObject,
        v241,
        v242,
        v243,
        v244,
        v245,
        v246);
      goto LABEL_121;
    }
    goto LABEL_396;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3968/*"CardType"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = 4;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  v228 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v228 )
    goto LABEL_393;
  v229 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v228,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0LL);
  v230 = GachaBehaviorMaster_TypeInfo;
  v107 = (PlayMakerFSM_o *)v229;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v230 = GachaBehaviorMaster_TypeInfo;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v110,
                                                (System_Type_o *)v230->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                                (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v107 )
    goto LABEL_393;
  v226 = Component_WebViewObject;
  if ( !Component_WebViewObject || (System_String_c *)Component_WebViewObject->klass == string_TypeInfo )
  {
    v107[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
    sub_B70630(
      (BattleServantConfConponent_o *)&v107[1],
      (System_Int32_array **)Component_WebViewObject,
      v231,
      v232,
      v233,
      v234,
      v235,
      v236);
    goto LABEL_305;
  }
LABEL_396:
  sub_B70A60(v226);
LABEL_397:
  sub_B70A60(v107);
  SummonEffectComponent__ChangeClassCardColor(v269, v270, v271, v272);
}


void __fastcall SummonEffectComponent___endAnimation_b__43_0(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v13; // x1

  if ( (byte_4355E55 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_5571/*"END_FADE"*/);
    byte_4355E55 = 1;
  }
  p_effect = &this->fields.effect;
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effect, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)*p_effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v5, 0LL);
    *p_effect = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v6, v7, v8, v9, v10, v11);
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    sub_B7076C(0LL, v13);
  PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5571/*"END_FADE"*/, 0LL);
}


void __fastcall SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4355E49 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonEffectComponent__endAnimation_b__43_0__);
    byte_4355E49 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0LL);
  if ( !Instance )
    sub_B7076C(v7, v8);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v6, 0LL);
}


bool __fastcall SummonEffectComponent__get_IsNoSkip(SummonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isNoSkip;
}


void __fastcall SummonEffectComponent__set_IsNoSkip(
        SummonEffectComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isNoSkip = value;
}


void __fastcall SummonEffectComponent_SummonInfo___ctor(
        SummonEffectComponent_SummonInfo_o *this,
        int32_t servantId,
        int32_t limitCount,
        bool isRankup,
        bool isNewCard,
        int32_t noticeRarity,
        int32_t rarity,
        int32_t cardType,
        bool isSkipStop,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.ServantId = servantId;
  this->fields.LimitCount = limitCount;
  this->fields.NoticeRarity = noticeRarity;
  this->fields.Rarity = rarity;
  this->fields.CardType = cardType;
  this->fields.IsRankUp = isRankup;
  this->fields.IsNewCard = isNewCard;
  this->fields.IsSkipStop = isSkipStop;
  this->fields.userServantId = userSvtId;
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___ctor(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__0(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__3(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  SummonEffectComponent___c__DisplayClass45_0_o *v4; // x20
  struct SummonEffectComponent_o *_4__this; // x21
  UnityEngine_Transform_o *transform; // x0
  struct SummonEffectComponent_o *v7; // x21
  UnityEngine_Transform_o *v8; // x0
  struct SummonEffectComponent_o *v9; // x8
  struct SummonEffectComponent_o *v10; // x8
  struct SummonEffectComponent_o *v11; // x8
  DesignCardManager_o *v12; // x21
  UnityEngine_Transform_o *v13; // x0

  v4 = this;
  if ( (byte_434F0DE & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_B70694(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_434F0DE = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  _4__this->fields.firstTr = TransformHelper__getNodeFromName(transform, v4->fields.cardFirstName, 1, 0LL);
  sub_B70630(&_4__this->fields.firstTr);
  v7 = v4->fields.__4__this;
  if ( !v7 )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)v7->fields.effect;
  if ( !this )
    goto LABEL_16;
  v8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v7->fields.firstTPeelr = TransformHelper__getNodeFromName(v8, v4->fields.cardFirstPeelName, 1, 0LL);
  sub_B70630(&v7->fields.firstTPeelr);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v9->fields.firstTr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v10->fields.firstTPeelr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v11 = v4->fields.__4__this;
  if ( !v11
    || (v12 = (DesignCardManager_o *)this,
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v11->fields.effect) == 0LL)
    || (v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)TransformHelper__getNodeFromName(
                                                                  v13,
                                                                  v4->fields.cardSecondName,
                                                                  1,
                                                                  0LL),
        !v12)
    || (DesignCardManager__SetupCardImage(v12, d, (UnityEngine_Transform_o *)this, 1, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_B7076C(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__4(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  SummonEffectComponent___c__DisplayClass45_0_o *v4; // x19
  struct SummonEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x21
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Shader_o *v9; // x22
  UnityEngine_Material_o *v10; // x21
  UnityEngine_Texture_o *v11; // x22

  v4 = this;
  if ( (byte_434F0DF & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_B70694(&UnityEngine_Material_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_B70694(&StringLiteral_4600/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_434F0DF = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0LL);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)NodeFromName,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4600/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0LL);
  v10 = (UnityEngine_Material_o *)sub_B70764(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v10, v9, 0LL);
  if ( !Component_WebViewObject
    || (v11 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(WebViewObject_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._2_GetHashCode.method)(
                                         Component_WebViewObject,
                                         Component_WebViewObject->klass[1].vtable._3_ToString.methodPtr),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)((__int64 (__fastcall *)(WebViewObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._1_Finalize.method)(
                                                                  Component_WebViewObject,
                                                                  v10,
                                                                  Component_WebViewObject->klass[1].vtable._2_GetHashCode.methodPtr),
        !v10)
    || (UnityEngine_Material__set_mainTexture(v10, v11, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B7076C(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_1___ctor(
        SummonEffectComponent___c__DisplayClass45_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_1___UpdateCardTexture_b__7(
        SummonEffectComponent___c__DisplayClass45_1_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v6; // x1
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v9; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v10; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8

  if ( (byte_434F0E0 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_434F0E0 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v9 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL),
        (v10 = this->fields.CS___8__locals1) == 0LL)
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v10->fields.cardSecondName,
                                                 1,
                                                 0LL),
        !v9)
    || (DesignCardManager__SetupCardImage(v9, d, (UnityEngine_Transform_o *)Instance, this->fields.classCardId, 0LL),
        (v11 = this->fields.CS___8__locals1) == 0LL)
    || (Instance = (UnityEngine_GameObject_o *)v11->fields.__4__this) == 0LL )
  {
LABEL_11:
    sub_B7076C(Instance, v6);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_1___UpdateCardTexture_b__8(
        SummonEffectComponent___c__DisplayClass45_1_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  SummonEffectComponent___c__DisplayClass45_1_o *v4; // x19
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v7; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v8; // x8
  struct SummonEffectComponent_o *v9; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v10; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8
  struct SummonEffectComponent_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  struct SummonEffectComponent_o *v14; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v15; // x8
  struct SummonEffectComponent_o *v16; // x8
  DesignCardManager_o *v17; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v18; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v19; // x8

  v4 = this;
  if ( (byte_434F0E1 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_B70694(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_434F0E1 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_25;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_25;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  v7 = v4->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_25;
  _4__this->fields.firstTr = TransformHelper__getNodeFromName(
                               (UnityEngine_Transform_o *)this,
                               v7->fields.cardFirstName,
                               1,
                               0LL);
  sub_B70630(&_4__this->fields.firstTr);
  v8 = v4->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_25;
  v9 = v8->fields.__4__this;
  if ( !v9 )
    goto LABEL_25;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)v9->fields.effect;
  if ( !this )
    goto LABEL_25;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  v10 = v4->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_25;
  v9->fields.firstTPeelr = TransformHelper__getNodeFromName(
                             (UnityEngine_Transform_o *)this,
                             v10->fields.cardFirstPeelName,
                             1,
                             0LL);
  sub_B70630(&v9->fields.firstTPeelr);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v11 = v4->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_25;
  v12 = v11->fields.__4__this;
  if ( !v12 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v12->fields.firstTr, v4->fields.classCardId, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v13 = v4->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_25;
  v14 = v13->fields.__4__this;
  if ( !v14 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage(
    (DesignCardManager_o *)this,
    d,
    v14->fields.firstTPeelr,
    v4->fields.classCardId,
    0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v15 = v4->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_25;
  v16 = v15->fields.__4__this;
  if ( !v16 )
    goto LABEL_25;
  v17 = (DesignCardManager_o *)this;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)v16->fields.effect;
  if ( !this
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL),
        (v18 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)TransformHelper__getNodeFromName(
                                                                  (UnityEngine_Transform_o *)this,
                                                                  v18->fields.cardSecondName,
                                                                  1,
                                                                  0LL),
        !v17)
    || (DesignCardManager__SetupCardImage(v17, d, (UnityEngine_Transform_o *)this, v4->fields.classCardId, 0LL),
        (v19 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)v19->fields.__4__this) == 0LL )
  {
LABEL_25:
    sub_B7076C(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_2___ctor(
        SummonEffectComponent___c__DisplayClass45_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_2___UpdateCardTexture_b__5(
        SummonEffectComponent___c__DisplayClass45_2_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v6; // x1
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals2; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v10; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v11; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v13; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v14; // x8
  struct SummonEffectComponent_o *v15; // x8
  DesignCardManager_o *v16; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v17; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v18; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v19; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v20; // x8

  if ( (byte_434F0E2 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_434F0E2 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_21;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_21;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  v10 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  v11 = this->fields.CS___8__locals2;
  if ( !v11 )
    goto LABEL_21;
  v12 = v11->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                           (UnityEngine_Transform_o *)Instance,
                                           v12->fields.cardFirstName,
                                           1,
                                           0LL);
  if ( !v10 )
    goto LABEL_21;
  DesignCardManager__SetupCardImage(v10, d, (UnityEngine_Transform_o *)Instance, this->fields.beforeClassCardId, 0LL);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v13 = this->fields.CS___8__locals2;
  if ( !v13 )
    goto LABEL_21;
  v14 = v13->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_21;
  v15 = v14->fields.__4__this;
  if ( !v15 )
    goto LABEL_21;
  v16 = (DesignCardManager_o *)Instance;
  Instance = v15->fields.effect;
  if ( !Instance )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  v17 = this->fields.CS___8__locals2;
  if ( !v17
    || (v18 = v17->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v18->fields.cardFirstPeelName,
                                                 1,
                                                 0LL),
        !v16)
    || (DesignCardManager__SetupCardImage(
          v16,
          d,
          (UnityEngine_Transform_o *)Instance,
          this->fields.beforeClassCardId,
          0LL),
        (v19 = this->fields.CS___8__locals2) == 0LL)
    || (v20 = v19->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)v20->fields.__4__this) == 0LL )
  {
LABEL_21:
    sub_B7076C(Instance, v6);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_2___UpdateCardTexture_b__6(
        SummonEffectComponent___c__DisplayClass45_2_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v6; // x1
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals2; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v10; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v11; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v13; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v14; // x8

  if ( (byte_434F0E3 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_434F0E3 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_14;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v10 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance )
    goto LABEL_14;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  v11 = this->fields.CS___8__locals2;
  if ( !v11
    || (v12 = v11->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v12->fields.cardRotName,
                                                 1,
                                                 0LL),
        !v10)
    || (DesignCardManager__SetupCardImage(v10, d, (UnityEngine_Transform_o *)Instance, this->fields.classBackId, 0LL),
        (v13 = this->fields.CS___8__locals2) == 0LL)
    || (v14 = v13->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)v14->fields.__4__this) == 0LL )
  {
LABEL_14:
    sub_B7076C(Instance, v6);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_3___ctor(
        SummonEffectComponent___c__DisplayClass45_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_3___UpdateCardTexture_b__9(
        SummonEffectComponent___c__DisplayClass45_3_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  SummonEffectComponent___c__DisplayClass45_3_o *v4; // x19
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals3; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v8; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v9; // x8
  UnityEngine_Transform_o *NodeFromName; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v11; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v12; // x8
  SummonEffectComponent___c__DisplayClass45_3_o *v13; // x20
  System_String_o **v14; // x8
  UnityEngine_Shader_o *v15; // x22
  UnityEngine_Material_o *v16; // x21
  UnityEngine_Texture_o *v17; // x22
  struct SummonEffectComponent___c__DisplayClass45_1_o *v18; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v19; // x8

  v4 = this;
  if ( (byte_434F0E4 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_B70694(&UnityEngine_Material_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_B70694(&StringLiteral_15201/*"Unlit/Transparent Colored"*/);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_B70694(&StringLiteral_4600/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_434F0E4 = 1;
  }
  CS___8__locals3 = v4->fields.CS___8__locals3;
  if ( !CS___8__locals3 )
    goto LABEL_22;
  CS___8__locals1 = CS___8__locals3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_22;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  v8 = v4->fields.CS___8__locals3;
  if ( !v8 )
    goto LABEL_22;
  v9 = v8->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_22;
  NodeFromName = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v9->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0LL);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v11 = v4->fields.CS___8__locals3;
  if ( !v11 )
    goto LABEL_22;
  v12 = v11->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_22;
  v13 = this;
  v14 = (System_String_o **)(v12->fields.cardType == 1 ? &StringLiteral_4600/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15201/*"Unlit/Transparent Colored"*/);
  v15 = UnityEngine_Shader__Find(*v14, 0LL);
  v16 = (UnityEngine_Material_o *)sub_B70764(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v16, v15, 0LL);
  if ( !v13
    || (v17 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, void *))v13->klass[1].vtable._3_ToString.method)(
                                         v13,
                                         v13->klass[2]._1.image),
        this = (SummonEffectComponent___c__DisplayClass45_3_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v13->klass[1].vtable._2_GetHashCode.method)(
                                                                  v13,
                                                                  v16,
                                                                  v13->klass[1].vtable._3_ToString.methodPtr),
        !v16)
    || (UnityEngine_Material__set_mainTexture(v16, v17, 0LL), (v18 = v4->fields.CS___8__locals3) == 0LL)
    || (v19 = v18->fields.CS___8__locals1) == 0LL
    || (this = (SummonEffectComponent___c__DisplayClass45_3_o *)v19->fields.__4__this) == 0LL )
  {
LABEL_22:
    sub_B7076C(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}