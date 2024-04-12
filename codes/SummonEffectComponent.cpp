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

  if ( (byte_42B3E91 & 1) == 0 )
  {
    sub_B52984(&SummonEffectComponent_TypeInfo);
    sub_B52984(&StringLiteral_22633/*"summon_up_04"*/);
    sub_B52984(&StringLiteral_22631/*"summon_up_02"*/);
    sub_B52984(&StringLiteral_6984/*"GetAnimationName"*/);
    sub_B52984(&StringLiteral_22632/*"summon_up_03"*/);
    sub_B52984(&StringLiteral_22630/*"summon_up_01"*/);
    sub_B52984(&StringLiteral_11370/*"RarityAnimationName"*/);
    sub_B52984(&StringLiteral_15152/*"UpAnimationName"*/);
    sub_B52984(&StringLiteral_7669/*"InitializeAnimationName"*/);
    byte_42B3E91 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SummonEffectComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_22630/*"summon_up_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22630/*"summon_up_01"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = SummonEffectComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22631/*"summon_up_02"*/;
  v9->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_22631/*"summon_up_02"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->RANKUP_TO_SILVER_ANIMATION, v10, v11, v12, v13, v14, v15, v16);
  v17 = SummonEffectComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_22632/*"summon_up_03"*/;
  v17->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_22632/*"summon_up_03"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->RANKUP_TO_GOLD_ANIMATION, v18, v19, v20, v21, v22, v23, v24);
  v25 = SummonEffectComponent_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_22633/*"summon_up_04"*/;
  v25->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_22633/*"summon_up_04"*/;
  sub_B52920((BattleServantConfConponent_o *)&v25->RANKUP_COMMANDCODE_ANIMATION, v26, v27, v28, v29, v30, v31, v32);
  v33 = SummonEffectComponent_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_15152/*"UpAnimationName"*/;
  v33->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15152/*"UpAnimationName"*/;
  sub_B52920((BattleServantConfConponent_o *)&v33->FSM_VARIABLE_UP_ANIMATION_NAME, v34, v35, v36, v37, v38, v39, v40);
  v41 = SummonEffectComponent_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_7669/*"InitializeAnimationName"*/;
  v41->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7669/*"InitializeAnimationName"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&v41->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = SummonEffectComponent_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_11370/*"RarityAnimationName"*/;
  v49->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11370/*"RarityAnimationName"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&v49->FSM_VARIABLE_RARITY_ANIMATION_NAME,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = SummonEffectComponent_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_6984/*"GetAnimationName"*/;
  v57->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_6984/*"GetAnimationName"*/;
  sub_B52920((BattleServantConfConponent_o *)&v57->FSM_VARIABLE_GET_ANIMATION_NAME, v58, v59, v60, v61, v62, v63, v64);
  v65 = SummonEffectComponent_TypeInfo->static_fields;
  v65->rarityToColor = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v65->rarityToColor, 0LL, v66, v67, v68, v69, v70, v71);
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

  if ( (byte_42B3E90 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3E90 = 1;
  }
  v3 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 2LL);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 512, max_length == 1) )
  {
    v19 = sub_B52A88(v3);
    sub_B52A28(v19, 0LL);
  }
  v3->m_Items[2] = 875;
  this->fields.cardTextureSize = v3;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.effAnimName, v12, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_42B3E80 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
    sub_B52984(&SummonEffectComponent_SummonInfo_TypeInfo);
    byte_42B3E80 = 1;
  }
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = this->fields.SummonInfos;
  }
  v19 = (SummonEffectComponent_SummonInfo_o *)sub_B52A54(SummonEffectComponent_SummonInfo_TypeInfo);
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
    sub_B52A5C(v20, v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SummonInfos,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
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
  if ( (byte_42B3E89 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_B52984(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_42B3E89 = 1;
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
                                             (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, const char *))this->klass[2]._1.gc_desc)(
                                            this,
                                            v8,
                                            this->klass[2]._1.name),
        (cardTextureSize = v6->fields.cardTextureSize) == 0LL) )
  {
LABEL_10:
    sub_B52A5C(this, cardNode);
  }
  if ( cardTextureSize->max_length <= 1 )
  {
LABEL_11:
    v15 = sub_B52A88(this);
    sub_B52A28(v15, 0LL);
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

  if ( (byte_42B3E8A & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B52984(&StringLiteral_12152/*"SETUP_DONE"*/);
    byte_42B3E8A = 1;
  }
  counterMax = this->fields._counterMax;
  v4 = this->fields._counter + 1;
  this->fields._counter = v4;
  if ( v4 >= counterMax )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B52A5C(0LL, v6);
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_12152/*"SETUP_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_42B3E82 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B3E82 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v4 )
    sub_B52A5C(Instance, v3);
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

  if ( (byte_42B3E83 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SummonEffectComponent_OnCharaGraphLoadDone__);
    sub_B52984(&SummonEffectComponent_TypeInfo);
    sub_B52984(&StringLiteral_8226/*"IsNoSkip"*/);
    sub_B52984(&StringLiteral_17845/*"countMax"*/);
    sub_B52984(&StringLiteral_13255/*"SummonEffectAnimation"*/);
    byte_42B3E83 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  v5 = (PlayMakerFSM_o *)Component_WebViewObject;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_17845/*"countMax"*/,
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
                              (System_String_o *)StringLiteral_8226/*"IsNoSkip"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  *((_BYTE *)Component_WebViewObject + 56) = this->fields.isNoSkip;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_13255/*"SummonEffectAnimation"*/,
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
                                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = Component_srcLineSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.effAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v14;
  sub_B52920(
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
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  Component_WebViewObject = *p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  Component_WebViewObject = *p_upAnimationNameList;
  if ( !*p_upAnimationNameList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__),
        (Component_WebViewObject = *p_upAnimationNameList) == 0LL)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__),
        (Component_WebViewObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_WebViewObject, 1, 0LL),
        (Component_WebViewObject = this->fields.SummonInfos) == 0LL) )
  {
LABEL_32:
    sub_B52A5C(Component_WebViewObject, v4);
  }
  this->fields.DownloadCounter = *((_DWORD *)Component_WebViewObject + 6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Component_WebViewObject,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v23 )
      break;
    if ( !v31.fields.current )
      sub_B52A5C(v23, v24);
    klass = (int32_t)v31.fields.current[1].klass;
    if ( HIDWORD(v31.fields.current[2].klass) == 3 )
    {
      v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
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
      v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
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

  if ( (byte_42B3E7F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
    byte_42B3E7F = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v3;
  sub_B52920(
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

  if ( (byte_42B3E84 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_7341/*"INIT_DONE"*/);
    byte_42B3E84 = 1;
  }
  v4 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v4;
  if ( !v4 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0LL),
          (Instance = (CommonUI_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0LL) )
    {
      sub_B52A5C(Instance, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7341/*"INIT_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v4; // x1

  if ( (byte_42B3E8F & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B52984(&StringLiteral_5759/*"EVENT_SKIP"*/);
    byte_42B3E8F = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B52A5C(0LL, v4);
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5759/*"EVENT_SKIP"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__ReleasePrevAsset(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *v6; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B3E85 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_42B3E85 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseAssetPath,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
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
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v6 = this->fields._releaseAssetPath;
    if ( !v6 )
      sub_B52A5C(0LL, v5);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_string__Clear__);
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

  if ( (byte_42B3E8B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&SummonEffectComponent_TypeInfo);
    sub_B52984(&StringLiteral_11357/*"Rank"*/);
    byte_42B3E8B = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject
    || (v5 = (PlayMakerFSM_o *)Component_WebViewObject,
        (Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL)) == 0LL)
    || (Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                    (System_String_o *)StringLiteral_11357/*"Rank"*/,
                                    0LL)) == 0LL )
  {
LABEL_22:
    sub_B52A5C(Component_WebViewObject, v4);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      items = (__int64)upAnimationNameList->fields._items + 8 * (int)Component_WebViewObject;
      goto LABEL_16;
    }
  }
  if ( !upAnimationNameList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  items = (__int64)upAnimationNameList->fields._items;
LABEL_16:
  v15 = *(struct System_String_o **)(items + 32);
  this->fields.effAnimName = v15;
  sub_B52920(
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
  sub_B52920(
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

  if ( (byte_42B3E8C & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B52984(&SummonEffectComponent_TypeInfo);
    sub_B52984(&StringLiteral_7334/*"INITIALIZE_ANIMATION"*/);
    byte_42B3E8C = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
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
    sub_B52A5C(Component_WebViewObject, v4);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) )
    PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_7334/*"INITIALIZE_ANIMATION"*/, 0LL);
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

  if ( (byte_42B3E81 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    sub_B52984(&SummonEffectComponent_TypeInfo);
    byte_42B3E81 = 1;
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
    v3 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B52A54(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
      v3,
      (const MethodInfo_2F3AE3C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v3 )
      sub_B52A5C(v4, v5);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      0,
      0,
      (const MethodInfo_2F3B9E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      1,
      0,
      (const MethodInfo_2F3B9E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      2,
      0,
      (const MethodInfo_2F3B9E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      3,
      1,
      (const MethodInfo_2F3B9E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      4,
      2,
      (const MethodInfo_2F3B9E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      5,
      2,
      (const MethodInfo_2F3B9E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      101,
      0,
      (const MethodInfo_2F3B9E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v3,
      102,
      0,
      (const MethodInfo_2F3B9E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v12 = SummonEffectComponent_TypeInfo;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v12 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v3;
    sub_B52920(
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

  if ( (byte_42B3E8E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&SummonEffectComponent_TypeInfo);
    byte_42B3E8E = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
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
    sub_B52A5C(Component_WebViewObject, v4);
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

  if ( (byte_42B3E8D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____68597904);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3E8D = 1;
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
    sub_B52A5C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v4);
  }
LABEL_15:
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = this->fields.effAnimation;
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_29;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         (UnityEngine_Component_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                         1,
                                                                                         (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____68597904);
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
        v12 = sub_B52A88(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B52A28(v12, 0LL);
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

  if ( (byte_42B3E87 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B52984(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SummonEffectComponent_TypeInfo);
    sub_B52984(&StringLiteral_8225/*"IsNewCard"*/);
    sub_B52984(&StringLiteral_17844/*"countIndex"*/);
    sub_B52984(&StringLiteral_8238/*"IsRankUp"*/);
    sub_B52984(&StringLiteral_8242/*"IsSkipStop"*/);
    sub_B52984(&StringLiteral_8571/*"LimitCount"*/);
    sub_B52984(&StringLiteral_9755/*"NoticeRarity"*/);
    sub_B52984(&StringLiteral_3926/*"CardType"*/);
    sub_B52984(&StringLiteral_11368/*"Rarity"*/);
    sub_B52984(&StringLiteral_12810/*"ServantId"*/);
    byte_42B3E87 = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  v5 = (PlayMakerFSM_o *)Component_WebViewObject;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_17844/*"countIndex"*/,
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v7 = SummonInfos->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v7 )
    goto LABEL_82;
  v8 = this->fields.SummonInfos;
  if ( !v8 )
    goto LABEL_82;
  ServantId = v7->fields.ServantId;
  if ( v8->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v10 = v8->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v10 )
    goto LABEL_82;
  v11 = this->fields.SummonInfos;
  if ( !v11 )
    goto LABEL_82;
  LimitCount = v10->fields.LimitCount;
  if ( v11->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v13 = v11->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v13 )
    goto LABEL_82;
  v14 = this->fields.SummonInfos;
  if ( !v14 )
    goto LABEL_82;
  IsRankUp = v13->fields.IsRankUp;
  if ( v14->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v16 = v14->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v16 )
    goto LABEL_82;
  v17 = this->fields.SummonInfos;
  if ( !v17 )
    goto LABEL_82;
  IsNewCard = v16->fields.IsNewCard;
  if ( v17->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v19 = v17->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v19 )
    goto LABEL_82;
  v20 = this->fields.SummonInfos;
  if ( !v20 )
    goto LABEL_82;
  NoticeRarity = v19->fields.NoticeRarity;
  if ( v20->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v51 = IsNewCard;
  v21 = v20->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v21 )
    goto LABEL_82;
  v22 = this->fields.SummonInfos;
  if ( !v22 )
    goto LABEL_82;
  Rarity = v21->fields.Rarity;
  if ( v22->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v24 = v22->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v24 )
    goto LABEL_82;
  v25 = this->fields.SummonInfos;
  if ( !v25 )
    goto LABEL_82;
  CardType = v24->fields.CardType;
  if ( v25->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v27 = v25->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v27 )
    goto LABEL_82;
  IsSkipStop = v27->fields.IsSkipStop;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_12810/*"ServantId"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = ServantId;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8571/*"LimitCount"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = LimitCount;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8238/*"IsRankUp"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = IsRankUp;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8242/*"IsSkipStop"*/,
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
  sub_B52920((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v30, v31, v32, v33, v34, v35);
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
  sub_B52920((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v36, v37, v38, v39, v40, v41);
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
  sub_B52920((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v42, v43, v44, v45, v46, v47);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8225/*"IsNewCard"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = v51 || Rarity == 0;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_9755/*"NoticeRarity"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = NoticeRarity;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_3926/*"CardType"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = CardType;
  if ( (unsigned int)(Rarity - 3) >= 3 )
    v48 = Rarity ? 0 : 3;
  else
    v48 = dword_328E504[Rarity - 3];
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_11368/*"Rarity"*/,
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
      sub_B52A5C(Component_WebViewObject, v4);
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
  Il2CppObject *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_o *v69; // x22
  float v70; // s8
  System_Int32_array **v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v100; // x24
  UnityEngine_Transform_o *v101; // x19
  int v102; // s0
  _BOOL4 v105; // w25
  PlayMakerFSM_o *v106; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v107; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v108; // x8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v109; // x22
  GachaBehaviorMaster_c *v110; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v111; // x0
  int32_t v112; // w24
  int v113; // w28
  UnityEngine_Object_o *prevObject; // x19
  struct UnityEngine_GameObject_o **p_prevObject; // x22
  int v116; // w9
  _BOOL4 v117; // w24
  int32_t v118; // w8
  UnityEngine_Object_o *v119; // x19
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  UnityEngine_GameObject_o *gameObject; // x19
  System_Action_o *v127; // x25
  bool v128; // w25
  UnityEngine_GameObject_o *v129; // x19
  UserServantEntity_o *v130; // x25
  int v131; // w27
  System_Action_o *v132; // x28
  System_Action_o *v133; // x3
  System_Action_o *v134; // x25
  UnityEngine_Component_o *v135; // x19
  UnityEngine_Transform_o *v136; // x25
  int v137; // s0
  System_Int32_array **v140; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_String_o *v147; // x22
  System_String_o *v148; // x19
  UnityEngine_Transform_o *v149; // x0
  UnityEngine_Component_o *v150; // x26
  UnityEngine_Transform_o *v151; // x0
  UnityEngine_Component_o *v152; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  __int64 v154; // x1
  int v155; // w8
  UnityEngine_Transform_o *v156; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v158; // x3
  UnityEngine_Transform_o *v159; // x0
  UnityEngine_Transform_o *v160; // x0
  const MethodInfo *v161; // x3
  UnityEngine_Transform_o *v162; // x0
  UnityEngine_Transform_o *v163; // x1
  const MethodInfo *v164; // x3
  SummonEffectComponent_o *v165; // x0
  int32_t v166; // w2
  System_String_o *v167; // x0
  System_String_o *v168; // x19
  System_String_o *v169; // x0
  System_String_o *v170; // x0
  System_String_o *v171; // x19
  AssetLoader_LoadEndDataHandler_o *v172; // x20
  System_String_o *v173; // x19
  AssetLoader_LoadEndDataHandler_o *v174; // x20
  System_String_o *v175; // x0
  AssetLoader_LoadEndDataHandler_o *v176; // x1
  UnityEngine_Transform_o *v177; // x0
  UnityEngine_Transform_o *v178; // x0
  UnityEngine_Transform_o *v179; // x0
  const MethodInfo *v180; // x3
  const MethodInfo *v181; // x1
  __int64 v182; // x22
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  WarEntity_o *v189; // x19
  int v190; // w8
  int32_t v191; // w19
  __int64 v192; // x21
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  Il2CppObject **v199; // x20
  int32_t LowerColorRarity; // w0
  int32_t v201; // w22
  GachaBehaviorMaster_c *v202; // x0
  GachaBehaviorMaster_c *v203; // x0
  int v204; // w8
  GachaBehaviorMaster_c *v205; // x0
  GachaBehaviorMaster_c *v206; // x0
  int v207; // w9
  GachaBehaviorMaster_c *v208; // x0
  GachaBehaviorMaster_c *v209; // x0
  int v210; // w8
  GachaBehaviorMaster_c *v211; // x0
  GachaBehaviorMaster_c *v212; // x0
  int v213; // w8
  GachaBehaviorMaster_c *v214; // x0
  _BOOL4 v215; // w10
  HutongGames_PlayMaker_FsmVariables_o *v216; // x19
  HutongGames_PlayMaker_FsmString_o *v217; // x0
  GachaBehaviorMaster_c *v218; // x8
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  PlayMakerFSM_o *v225; // x8
  GachaBehaviorMaster_c *v226; // x0
  HutongGames_PlayMaker_FsmVariables_o *v227; // x19
  HutongGames_PlayMaker_FsmString_o *v228; // x0
  GachaBehaviorMaster_c *v229; // x8
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  GachaBehaviorMaster_c *v236; // x0
  HutongGames_PlayMaker_FsmVariables_o *v237; // x19
  HutongGames_PlayMaker_FsmString_o *v238; // x0
  GachaBehaviorMaster_c *v239; // x8
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  __int64 v246; // x20
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  Il2CppObject **v253; // x21
  int v254; // w8
  System_String_o *v255; // x22
  Il2CppObject *v256; // x24
  AssetLoader_LoadEndDataHandler_o *v257; // x23
  _DWORD *monitor; // x8
  System_String_o **v259; // x8
  int32_t *v260; // x21
  System_String_o *v261; // x19
  AssetLoader_LoadEndDataHandler_o *v262; // x21
  System_String_o *DesignCardPath; // x23
  AssetLoader_LoadEndDataHandler_o *v264; // x24
  System_String_o *v265; // x22
  AssetLoader_LoadEndDataHandler_o *v266; // x23
  Il2CppObject *v267; // x21
  SummonEffectComponent_o *v268; // x0
  UnityEngine_Transform_o *v269; // x1
  int32_t v270; // w2
  const MethodInfo *v271; // x3
  _BOOL4 v272; // [xsp+8h] [xbp-D8h]
  int v273; // [xsp+Ch] [xbp-D4h]
  int v274; // [xsp+10h] [xbp-D0h]
  int v275; // [xsp+14h] [xbp-CCh]
  int v276; // [xsp+2Ch] [xbp-B4h]
  int64_t v277; // [xsp+30h] [xbp-B0h]
  System_String_o **v278; // [xsp+38h] [xbp-A8h]
  int32_t Item; // [xsp+4Ch] [xbp-94h]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+50h] [xbp-90h]
  int32_t limitCount; // [xsp+5Ch] [xbp-84h]
  UnityEngine_Component_o *v282; // [xsp+60h] [xbp-80h]
  int key; // [xsp+68h] [xbp-78h]
  int32_t svtId; // [xsp+6Ch] [xbp-74h]
  int v285; // [xsp+70h] [xbp-70h] BYREF
  int v286; // [xsp+74h] [xbp-6Ch] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v288; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v289; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v290; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v291; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v292; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B3E88 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_B52984(&Method_DataManager_GetMasterData_GachaBehaviorMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&GachaBehaviorMaster_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Rarity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&SummonEffectComponent_TypeInfo);
    sub_B52984(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__);
    sub_B52984(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__);
    sub_B52984(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__);
    sub_B52984(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__);
    sub_B52984(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__);
    sub_B52984(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
    sub_B52984(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__);
    sub_B52984(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__);
    sub_B52984(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
    sub_B52984(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__);
    sub_B52984(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__);
    sub_B52984(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
    sub_B52984(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__);
    sub_B52984(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
    sub_B52984(&StringLiteral_3922/*"CardScale"*/);
    sub_B52984(&StringLiteral_3923/*"CardSecondName"*/);
    sub_B52984(&StringLiteral_3914/*"CardFirstName"*/);
    sub_B52984(&StringLiteral_8225/*"IsNewCard"*/);
    sub_B52984(&StringLiteral_3921/*"CardRotName"*/);
    sub_B52984(&StringLiteral_4149/*"CodeCardRarity02"*/);
    sub_B52984(&StringLiteral_2384/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/);
    sub_B52984(&StringLiteral_11357/*"Rank"*/);
    sub_B52984(&StringLiteral_17844/*"countIndex"*/);
    sub_B52984(&StringLiteral_13253/*"SummonEffect"*/);
    sub_B52984(&StringLiteral_21884/*"rarity"*/);
    sub_B52984(&StringLiteral_8238/*"IsRankUp"*/);
    sub_B52984(&StringLiteral_16012/*"_0"*/);
    sub_B52984(&StringLiteral_4148/*"CodeCardRarity"*/);
    sub_B52984(&StringLiteral_8242/*"IsSkipStop"*/);
    sub_B52984(&StringLiteral_8571/*"LimitCount"*/);
    sub_B52984(&StringLiteral_9755/*"NoticeRarity"*/);
    sub_B52984(&StringLiteral_2383/*"BACKSIDE_CLASS_IMAGE_ID"*/);
    sub_B52984(&StringLiteral_3926/*"CardType"*/);
    sub_B52984(&StringLiteral_3920/*"CardNodeName"*/);
    sub_B52984(&StringLiteral_3915/*"CardFirstPeelName"*/);
    sub_B52984(&StringLiteral_22624/*"summon_rarity_0"*/);
    sub_B52984(&StringLiteral_11368/*"Rarity"*/);
    sub_B52984(&StringLiteral_12810/*"ServantId"*/);
    byte_42B3E88 = 1;
  }
  entity = 0LL;
  v286 = 0;
  v3 = sub_B52A54(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  SummonEffectComponent___c__DisplayClass45_0___ctor((SummonEffectComponent___c__DisplayClass45_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_393;
  *(_QWORD *)(v3 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v12 = Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_17844/*"countIndex"*/,
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v14 = SummonInfos->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v14 )
    goto LABEL_393;
  v15 = this->fields.SummonInfos;
  if ( !v15 )
    goto LABEL_393;
  svtId = v14->fields.ServantId;
  if ( v15->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v16 = v15->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v16 )
    goto LABEL_393;
  v17 = this->fields.SummonInfos;
  if ( !v17 )
    goto LABEL_393;
  limitCount = v16->fields.LimitCount;
  if ( v17->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v18 = v17->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v18 )
    goto LABEL_393;
  v19 = this->fields.SummonInfos;
  if ( !v19 )
    goto LABEL_393;
  IsRankUp = v18->fields.IsRankUp;
  if ( v19->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v21 = v19->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v21 )
    goto LABEL_393;
  v22 = this->fields.SummonInfos;
  if ( !v22 )
    goto LABEL_393;
  IsNewCard = v21->fields.IsNewCard;
  if ( v22->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v24 = v22->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v24 )
    goto LABEL_393;
  v25 = this->fields.SummonInfos;
  if ( !v25 )
    goto LABEL_393;
  NoticeRarity = v24->fields.NoticeRarity;
  if ( v25->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v27 = v25->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v27 )
    goto LABEL_393;
  v28 = this->fields.SummonInfos;
  if ( !v28 )
    goto LABEL_393;
  Rarity = v27->fields.Rarity;
  if ( v28->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v30 = v28->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v30 )
    goto LABEL_393;
  *(_DWORD *)(v3 + 56) = v30->fields.CardType;
  v31 = this->fields.SummonInfos;
  if ( !v31 )
    goto LABEL_393;
  if ( v31->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  key = Rarity;
  v32 = v31->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v32 )
    goto LABEL_393;
  v33 = this->fields.SummonInfos;
  if ( !v33 )
    goto LABEL_393;
  IsSkipStop = v32->fields.IsSkipStop;
  if ( v33->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v35 = v33->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v35 )
    goto LABEL_393;
  userServantId = v35->fields.userServantId;
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v5);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v37;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  sub_B52920(
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
                                                (System_String_o *)StringLiteral_12810/*"ServantId"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = svtId;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8571/*"LimitCount"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = limitCount;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8238/*"IsRankUp"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsRankUp;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8242/*"IsSkipStop"*/,
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
  sub_B52920((BattleServantConfConponent_o *)&Component_WebViewObject[1], 0LL, v45, v46, v47, v48, v49, v50);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8225/*"IsNewCard"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsNewCard || key == 0;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_9755/*"NoticeRarity"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = NoticeRarity;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3926/*"CardType"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = *(_DWORD *)(v3 + 56);
  if ( (unsigned int)(key - 3) >= 3 )
    v51 = key ? 0 : 3;
  else
    v51 = dword_328E504[key - 3];
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_11368/*"Rarity"*/,
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
  v285 = v51;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v285);
  Component_WebViewObject = (PlayMakerFSM_o *)System_String__Concat((Il2CppObject *)StringLiteral_22624/*"summon_rarity_0"*/, v54, 0LL);
  if ( !FsmString )
    goto LABEL_393;
  FsmString->fields.value = (struct System_String_o *)Component_WebViewObject;
  sub_B52920(
    (BattleServantConfConponent_o *)&FsmString->fields.value,
    (System_Int32_array **)Component_WebViewObject,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v277 = userServantId;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_13253/*"SummonEffect"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)Component_WebViewObject,
            0LL);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)Value,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3920/*"CardNodeName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v69 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3922/*"CardScale"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v70 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3914/*"CardFirstName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v71 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                 (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                 0LL);
  *(_QWORD *)(v3 + 24) = v71;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 24), v71, v72, v73, v74, v75, v76, v77);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3915/*"CardFirstPeelName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v78 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                 (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                 0LL);
  *(_QWORD *)(v3 + 32) = v78;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), v78, v79, v80, v81, v82, v83, v84);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3923/*"CardSecondName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v85 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                 (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                 0LL);
  *(_QWORD *)(v3 + 40) = v85;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 40), v85, v86, v87, v88, v89, v90, v91);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3921/*"CardRotName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v92 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                 (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                 0LL);
  *(_QWORD *)(v3 + 48) = v92;
  v278 = (System_String_o **)(v3 + 48);
  sub_B52920((BattleServantConfConponent_o *)(v3 + 48), v92, v93, v94, v95, v96, v97, v98);
  Component_WebViewObject = (PlayMakerFSM_o *)*p_effect;
  if ( !*p_effect )
    goto LABEL_393;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v69, 1, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v100 = (UnityEngine_Component_o *)Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Component_WebViewObject,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 0, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v100, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v101 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_WebViewObject, 0LL);
  *(UnityEngine_Vector3_o *)&v102 = UnityEngine_Vector3__get_one(0LL);
  if ( !v101 )
    goto LABEL_393;
  UnityEngine_Transform__set_localScale(v101, *(UnityEngine_Vector3_o *)&v102, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Item = System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
           (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)Component_WebViewObject,
           key,
           (const MethodInfo_2F3B920 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Component_WebViewObject,
                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v105 = IsRankUp && Item != 0;
  Component_WebViewObject = (PlayMakerFSM_o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                (GachaBehaviorMaster_o *)Component_WebViewObject,
                                                this->fields.gachaId,
                                                svtId,
                                                0LL);
  v282 = v100;
  if ( !Component_WebViewObject )
    goto LABEL_120;
  v106 = Component_WebViewObject;
  if ( SLODWORD(Component_WebViewObject->fields.fsm) < 1 )
    goto LABEL_120;
  v107 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&Component_WebViewObject->fields.m_CachedPtr
                                                                 + 32LL);
  if ( !v107 )
    goto LABEL_393;
  if ( !*(_QWORD *)&v107->fields.targetId )
  {
LABEL_120:
    v274 = -1;
    v275 = -1;
    v273 = -1;
    v276 = -1;
    v113 = -1;
LABEL_121:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v105 )
      v116 = 4;
    else
      v116 = 3;
    v117 = v105;
    if ( this->fields.EditMode )
      v118 = 0;
    else
      v118 = v116;
    this->fields._counter = 0;
    this->fields._counterMax = v118;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(prevObject, 0LL, 0LL) )
    {
      v119 = (UnityEngine_Object_o *)*p_prevObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v119, 0LL);
      *p_prevObject = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.prevObject, 0LL, v120, v121, v122, v123, v124, v125);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v282, 0LL);
      v127 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v127,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0LL);
      Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateCommandTexturePrefab(
                                                    gameObject,
                                                    svtId,
                                                    0,
                                                    v127,
                                                    0LL);
    }
    else
    {
      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_WebViewObject )
        goto LABEL_393;
      Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)Component_WebViewObject,
                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0LL;
      if ( !Component_WebViewObject )
        goto LABEL_393;
      v128 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Component_WebViewObject,
               &entity,
               v277,
               (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v129 = UnityEngine_Component__get_gameObject(v282, 0LL);
      if ( v128 )
      {
        v130 = entity;
        v131 = v113;
        v132 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          v132,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0LL);
        v133 = v132;
        v113 = v131;
        p_effect = &this->fields.effect;
        Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_24904344(
                                                      v129,
                                                      v130,
                                                      0,
                                                      v133,
                                                      0LL);
      }
      else
      {
        v134 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          v134,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0LL);
        Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab(
                                                      v129,
                                                      svtId,
                                                      limitCount,
                                                      0,
                                                      1,
                                                      0,
                                                      v134,
                                                      0,
                                                      0LL);
      }
    }
    v135 = (UnityEngine_Component_o *)Component_WebViewObject;
    if ( Component_WebViewObject )
    {
      v136 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_WebViewObject, 0LL);
      *(UnityEngine_Vector3_o *)&v137 = UnityEngine_Vector3__get_zero(0LL);
      if ( v136 )
      {
        UnityEngine_Transform__set_localPosition(v136, *(UnityEngine_Vector3_o *)&v137, 0LL);
        Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v135, 0LL);
        if ( Component_WebViewObject )
        {
          v288.fields.x = v70;
          v288.fields.y = v70;
          v288.fields.z = v70;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_WebViewObject, v288, 0LL);
          Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        v282,
                                                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
          if ( Component_WebViewObject )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
            v140 = (System_Int32_array **)UnityEngine_Component__get_gameObject(v135, 0LL);
            *p_prevObject = (struct UnityEngine_GameObject_o *)v140;
            sub_B52920(
              (BattleServantConfConponent_o *)&this->fields.prevObject,
              v140,
              v141,
              v142,
              v143,
              v144,
              v145,
              v146);
            Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
            if ( Component_WebViewObject )
            {
              Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                            (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                            (System_String_o *)StringLiteral_4148/*"CodeCardRarity"*/,
                                                            0LL);
              if ( Component_WebViewObject )
              {
                v147 = HutongGames_PlayMaker_FsmString__get_Value(
                         (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                         0LL);
                Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
                if ( Component_WebViewObject )
                {
                  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                                (System_String_o *)StringLiteral_4149/*"CodeCardRarity02"*/,
                                                                0LL);
                  if ( Component_WebViewObject )
                  {
                    Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                                                  0LL);
                    if ( *p_effect )
                    {
                      v148 = (System_String_o *)Component_WebViewObject;
                      v149 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                      Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(v149, v147, 1, 0LL);
                      if ( Component_WebViewObject )
                      {
                        Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                      (UnityEngine_Component_o *)Component_WebViewObject,
                                                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                        if ( *p_effect )
                        {
                          v150 = (UnityEngine_Component_o *)Component_WebViewObject;
                          v151 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                          Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(
                                                                        v151,
                                                                        v148,
                                                                        1,
                                                                        0LL);
                          if ( Component_WebViewObject )
                          {
                            Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                          (UnityEngine_Component_o *)Component_WebViewObject,
                                                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                            if ( v150 )
                            {
                              v152 = (UnityEngine_Component_o *)Component_WebViewObject;
                              Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                            v150,
                                                                            0LL);
                              if ( Component_WebViewObject )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Component_WebViewObject,
                                  0,
                                  0LL);
                                if ( v152 )
                                {
                                  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                v152,
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
                                                                                               (System_String_o *)StringLiteral_11357/*"Rank"*/,
                                                                                               0LL);
                                      if ( v117 )
                                      {
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v155 = Item == 2 ? 2 : 1;
                                        LODWORD(FsmVariables->fields.vector3Variables) = v155;
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_effect;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v156 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        NodeFromName = TransformHelper__getNodeFromName(
                                                         v156,
                                                         *(System_String_o **)(v3 + 24),
                                                         1,
                                                         0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, Item - 1, v158);
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v159 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v160 = TransformHelper__getNodeFromName(
                                                 v159,
                                                 *(System_String_o **)(v3 + 32),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v160, Item - 1, v161);
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v162 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v163 = TransformHelper__getNodeFromName(v162, *v278, 1, 0LL);
                                        v165 = this;
                                        v166 = Item - 1;
                                      }
                                      else
                                      {
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        LODWORD(FsmVariables->fields.vector3Variables) = 0;
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_effect;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v177 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v163 = TransformHelper__getNodeFromName(v177, *v278, 1, 0LL);
                                        v165 = this;
                                        v166 = Item;
                                      }
                                      SummonEffectComponent__ChangeClassCardColor(v165, v163, v166, v164);
                                      FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                      if ( FsmVariables )
                                      {
                                        v178 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v179 = TransformHelper__getNodeFromName(
                                                 v178,
                                                 *(System_String_o **)(v3 + 40),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v179, Item, v180);
                                        SummonEffectComponent__CompleteCallback(this, v181);
                                        return;
                                      }
LABEL_394:
                                      sub_B52A5C(FsmVariables, v154);
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
                                                                                      (System_String_o *)StringLiteral_11357/*"Rank"*/,
                                                                                      0LL);
                                        if ( Component_WebViewObject )
                                        {
                                          LODWORD(Component_WebViewObject[1].klass) = 3;
                                          v286 = key;
                                          Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                        v150,
                                                                                        0LL);
                                          if ( Component_WebViewObject )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)Component_WebViewObject,
                                              1,
                                              0LL);
                                            v167 = System_Int32__ToString((int32_t)&v286, 0LL);
                                            v168 = System_String__Concat_44570600(
                                                     (System_String_o *)StringLiteral_21884/*"rarity"*/,
                                                     v167,
                                                     (System_String_o *)StringLiteral_16012/*"_0"*/,
                                                     0LL);
                                            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !AtlasManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                            }
                                            AtlasManager__SetCharaGraphaOption((UISprite_o *)v150, v168, 0LL);
                                            ((void (__fastcall *)(UnityEngine_Component_o *, void *))v150->klass[2]._1.typeMetadataHandle)(
                                              v150,
                                              v150->klass[2]._1.interopData);
                                            Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                          v152,
                                                                                          0LL);
                                            if ( Component_WebViewObject )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)Component_WebViewObject,
                                                1,
                                                0LL);
                                              v169 = System_Int32__ToString((int32_t)&v286, 0LL);
                                              v170 = System_String__Concat_44570600(
                                                       (System_String_o *)StringLiteral_21884/*"rarity"*/,
                                                       v169,
                                                       (System_String_o *)StringLiteral_16012/*"_0"*/,
                                                       0LL);
                                              AtlasManager__SetCharaGraphaOption((UISprite_o *)v152, v170, 0LL);
                                              ((void (__fastcall *)(UnityEngine_Component_o *, void *))v152->klass[2]._1.typeMetadataHandle)(
                                                v152,
                                                v152->klass[2]._1.interopData);
                                              Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                            v150,
                                                                                            0LL);
                                              if ( Component_WebViewObject )
                                              {
                                                v289.fields.x = 0.0;
                                                v289.fields.z = 0.0;
                                                v289.fields.y = 216.81;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)Component_WebViewObject,
                                                  v289,
                                                  0LL);
                                                Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                              v150,
                                                                                              0LL);
                                                if ( Component_WebViewObject )
                                                {
                                                  v290.fields.x = v70;
                                                  v290.fields.y = v70;
                                                  v290.fields.z = v70;
                                                  UnityEngine_Transform__set_localScale(
                                                    (UnityEngine_Transform_o *)Component_WebViewObject,
                                                    v290,
                                                    0LL);
                                                  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                                v152,
                                                                                                0LL);
                                                  if ( Component_WebViewObject )
                                                  {
                                                    v291.fields.x = 0.0;
                                                    v291.fields.z = 0.0;
                                                    v291.fields.y = 216.81;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)Component_WebViewObject,
                                                      v291,
                                                      0LL);
                                                    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                                  v152,
                                                                                                  0LL);
                                                    if ( Component_WebViewObject )
                                                    {
                                                      v292.fields.x = v70;
                                                      v292.fields.y = v70;
                                                      v292.fields.z = v70;
                                                      UnityEngine_Transform__set_localScale(
                                                        (UnityEngine_Transform_o *)Component_WebViewObject,
                                                        v292,
                                                        0LL);
                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                      if ( Component_WebViewObject )
                                                      {
                                                        Component_WebViewObject = (PlayMakerFSM_o *)DesignCardManager__GetCommanCodeCardPath((DesignCardManager_o *)Component_WebViewObject, 1, key, 0LL);
                                                        if ( *p_releaseAssetPath )
                                                        {
                                                          v171 = (System_String_o *)Component_WebViewObject;
                                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                            (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
                                                            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
                                                          v172 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                          AssetLoader_LoadEndDataHandler___ctor(
                                                            v172,
                                                            (Il2CppObject *)v3,
                                                            Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
                                                            0LL);
                                                          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                            && !AssetManager_TypeInfo->_2.cctor_finished )
                                                          {
                                                            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                          }
                                                          AssetManager__loadAssetStorage(v171, v172, 1, 0LL);
                                                          Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                          if ( Component_WebViewObject )
                                                          {
                                                            Component_WebViewObject = (PlayMakerFSM_o *)DesignCardManager__GetCommanCodeCardPath((DesignCardManager_o *)Component_WebViewObject, 101, key, 0LL);
                                                            if ( *p_releaseAssetPath )
                                                            {
                                                              v173 = (System_String_o *)Component_WebViewObject;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
                                                                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v174 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v174,
                                                                (Il2CppObject *)v3,
                                                                Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
                                                                0LL);
LABEL_189:
                                                              v175 = v173;
                                                              v176 = v174;
LABEL_358:
                                                              AssetManager__loadAssetStorage(v175, v176, 1, 0LL);
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
                                      v182 = sub_B52A54(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
                                      SummonEffectComponent___c__DisplayClass45_1___ctor(
                                        (SummonEffectComponent___c__DisplayClass45_1_o *)v182,
                                        0LL);
                                      if ( v182 )
                                      {
                                        *(_QWORD *)(v182 + 24) = v3;
                                        sub_B52920(
                                          (BattleServantConfConponent_o *)(v182 + 24),
                                          (System_Int32_array **)v3,
                                          v183,
                                          v184,
                                          v185,
                                          v186,
                                          v187,
                                          v188);
                                        Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                        if ( Component_WebViewObject )
                                        {
                                          Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Component_WebViewObject,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
                                          if ( Component_WebViewObject )
                                          {
                                            v189 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Component_WebViewObject,
                                                     svtId,
                                                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                                            Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                            if ( Component_WebViewObject )
                                            {
                                              Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Component_WebViewObject,
                                                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                                              if ( Component_WebViewObject )
                                              {
                                                ServantLimitMaster__GetEntity(
                                                  (ServantLimitMaster_o *)Component_WebViewObject,
                                                  svtId,
                                                  limitCount,
                                                  0LL);
                                                Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                                if ( Component_WebViewObject )
                                                {
                                                  Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Component_WebViewObject,
                                                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
                                                  if ( v189 )
                                                  {
                                                    if ( Component_WebViewObject )
                                                    {
                                                      Component_WebViewObject = (PlayMakerFSM_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Component_WebViewObject,
                                                                                                    v189->fields.startType,
                                                                                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
                                                      if ( Component_WebViewObject )
                                                      {
                                                        v190 = *(_DWORD *)&Component_WebViewObject->fields.eventHandlerComponentsAdded;
                                                        if ( v275 != -1 )
                                                          v190 = v275;
                                                        *(_DWORD *)(v182 + 16) = v190;
                                                        if ( v274 == -1 )
                                                          v191 = key;
                                                        else
                                                          v191 = v274;
                                                        if ( v117 )
                                                        {
                                                          v192 = sub_B52A54(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
                                                          SummonEffectComponent___c__DisplayClass45_2___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_2_o *)v192,
                                                            0LL);
                                                          if ( v192 )
                                                          {
                                                            *(_QWORD *)(v192 + 24) = v182;
                                                            v199 = (Il2CppObject **)(v192 + 24);
                                                            sub_B52920(
                                                              (BattleServantConfConponent_o *)(v192 + 24),
                                                              (System_Int32_array **)v182,
                                                              v193,
                                                              v194,
                                                              v195,
                                                              v196,
                                                              v197,
                                                              v198);
                                                            if ( *(_QWORD *)(v192 + 24) )
                                                            {
                                                              *(_DWORD *)(v192 + 16) = *(_DWORD *)(*(_QWORD *)(v192 + 24)
                                                                                                 + 16LL);
                                                              if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !Rarity_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                                                              }
                                                              LowerColorRarity = Rarity__getLowerColorRarity(v191, 0LL);
                                                              if ( v276 != -1 )
                                                                *(_DWORD *)(v192 + 16) = v276;
                                                              v201 = v273 == -1 ? LowerColorRarity : v273;
                                                              Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
                                                              if ( Component_WebViewObject )
                                                              {
                                                                Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt((HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject, (System_String_o *)StringLiteral_11357/*"Rank"*/, 0LL);
                                                                if ( v113 == -1 )
                                                                {
                                                                  if ( !Component_WebViewObject )
                                                                    goto LABEL_393;
                                                                  v113 = Item == 2 ? 2 : 1;
                                                                }
                                                                else if ( !Component_WebViewObject )
                                                                {
                                                                  goto LABEL_393;
                                                                }
                                                                LODWORD(Component_WebViewObject[1].klass) = v113;
                                                                Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !Component_WebViewObject )
                                                                  goto LABEL_393;
                                                                DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                   (DesignCardManager_o *)Component_WebViewObject,
                                                                                   *(_DWORD *)(v192 + 16),
                                                                                   v201,
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
                                                                  *(_DWORD *)(v192 + 16) = 1;
                                                                  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( !Component_WebViewObject )
                                                                    goto LABEL_393;
                                                                  v201 = 3;
                                                                  DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                     (DesignCardManager_o *)Component_WebViewObject,
                                                                                     *(_DWORD *)(v192 + 16),
                                                                                     3,
                                                                                     0LL);
                                                                }
                                                                Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                if ( *p_releaseAssetPath )
                                                                {
                                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                    (EventMissionProgressRequest_Argument_ProgressData_o *)DesignCardPath,
                                                                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
                                                                  v264 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                  AssetLoader_LoadEndDataHandler___ctor(
                                                                    v264,
                                                                    (Il2CppObject *)v192,
                                                                    Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
                                                                    0LL);
                                                                  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                    && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                  {
                                                                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                  }
                                                                  AssetManager__loadAssetStorage(
                                                                    DesignCardPath,
                                                                    v264,
                                                                    1,
                                                                    0LL);
                                                                  *(_DWORD *)(v192 + 20) = ConstantMaster__getValue(
                                                                                             (System_String_o *)StringLiteral_2383/*"BACKSIDE_CLASS_IMAGE_ID"*/,
                                                                                             0LL);
                                                                  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( Component_WebViewObject )
                                                                  {
                                                                    v265 = DesignCardManager__GetDesignCardPath(
                                                                             (DesignCardManager_o *)Component_WebViewObject,
                                                                             *(_DWORD *)(v192 + 20),
                                                                             v201,
                                                                             0LL);
                                                                    if ( !AssetManager__isExistAssetStorage(v265, 0LL) )
                                                                    {
                                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( !Component_WebViewObject )
                                                                        goto LABEL_393;
                                                                      v265 = DesignCardManager__GetDesignCardPath(
                                                                               (DesignCardManager_o *)Component_WebViewObject,
                                                                               *(_DWORD *)(v192 + 20),
                                                                               3,
                                                                               0LL);
                                                                    }
                                                                    Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                    if ( *p_releaseAssetPath )
                                                                    {
                                                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                        (EventMissionProgressRequest_Argument_ProgressData_o *)v265,
                                                                        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
                                                                      v266 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                      AssetLoader_LoadEndDataHandler___ctor(
                                                                        v266,
                                                                        (Il2CppObject *)v192,
                                                                        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
                                                                        0LL);
                                                                      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                        && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                      {
                                                                        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                      }
                                                                      AssetManager__loadAssetStorage(v265, v266, 1, 0LL);
                                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( *v199 )
                                                                      {
                                                                        if ( Component_WebViewObject )
                                                                        {
                                                                          v173 = DesignCardManager__GetDesignCardPath(
                                                                                   (DesignCardManager_o *)Component_WebViewObject,
                                                                                   (int32_t)(*v199)[1].klass,
                                                                                   v191,
                                                                                   0LL);
                                                                          Component_WebViewObject = (PlayMakerFSM_o *)AssetManager__isExistAssetStorage(v173, 0LL);
                                                                          if ( ((unsigned __int8)Component_WebViewObject & 1) == 0 )
                                                                          {
                                                                            if ( !*v199 )
                                                                              goto LABEL_393;
                                                                            LODWORD((*v199)[1].klass) = 1;
                                                                            Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                            if ( !*v199 || !Component_WebViewObject )
                                                                              goto LABEL_393;
                                                                            v173 = DesignCardManager__GetDesignCardPath(
                                                                                     (DesignCardManager_o *)Component_WebViewObject,
                                                                                     (int32_t)(*v199)[1].klass,
                                                                                     3,
                                                                                     0LL);
                                                                          }
                                                                          Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                          if ( *p_releaseAssetPath )
                                                                          {
                                                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v173,
                                                                              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
                                                                            v267 = *v199;
                                                                            v174 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                            AssetLoader_LoadEndDataHandler___ctor(
                                                                              v174,
                                                                              v267,
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
                                                          v246 = sub_B52A54(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
                                                          SummonEffectComponent___c__DisplayClass45_3___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_3_o *)v246,
                                                            0LL);
                                                          if ( v246 )
                                                          {
                                                            *(_QWORD *)(v246 + 24) = v182;
                                                            v253 = (Il2CppObject **)(v246 + 24);
                                                            sub_B52920(
                                                              (BattleServantConfConponent_o *)(v246 + 24),
                                                              (System_Int32_array **)v182,
                                                              v247,
                                                              v248,
                                                              v249,
                                                              v250,
                                                              v251,
                                                              v252);
                                                            Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
                                                            if ( Component_WebViewObject )
                                                            {
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt((HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject, (System_String_o *)StringLiteral_11357/*"Rank"*/, 0LL);
                                                              if ( !FsmVariables )
                                                                goto LABEL_394;
                                                              v254 = v113 == -1 ? 0 : v113;
                                                              LODWORD(FsmVariables->fields.vector3Variables) = v254;
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !*v253 || !FsmVariables )
                                                                goto LABEL_394;
                                                              v255 = DesignCardManager__GetDesignCardPath(
                                                                       (DesignCardManager_o *)FsmVariables,
                                                                       (int32_t)(*v253)[1].klass,
                                                                       v191,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)AssetManager__isExistAssetStorage(v255, 0LL);
                                                              if ( ((unsigned __int8)FsmVariables & 1) == 0 )
                                                              {
                                                                if ( !*v253 )
                                                                  goto LABEL_394;
                                                                LODWORD((*v253)[1].klass) = 1;
                                                                FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !*v253 || !FsmVariables )
                                                                  goto LABEL_394;
                                                                v191 = 3;
                                                                v255 = DesignCardManager__GetDesignCardPath(
                                                                         (DesignCardManager_o *)FsmVariables,
                                                                         (int32_t)(*v253)[1].klass,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_releaseAssetPath;
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)FsmVariables,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v255,
                                                                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v256 = *v253;
                                                              v257 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v257,
                                                                v256,
                                                                Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)AssetManager__loadAssetStorage(v255, v257, 1, 0LL);
                                                              if ( !*v253 )
                                                                goto LABEL_394;
                                                              monitor = (*v253)[1].monitor;
                                                              if ( !monitor )
                                                                goto LABEL_394;
                                                              v259 = (System_String_o **)(monitor[14] == 1
                                                                                        ? &StringLiteral_2384/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/
                                                                                        : &StringLiteral_2383/*"BACKSIDE_CLASS_IMAGE_ID"*/);
                                                              *(_DWORD *)(v246 + 16) = ConstantMaster__getValue(
                                                                                         *v259,
                                                                                         0LL);
                                                              v260 = (int32_t *)(v246 + 16);
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !FsmVariables )
                                                                goto LABEL_394;
                                                              v261 = DesignCardManager__GetDesignCardPath(
                                                                       (DesignCardManager_o *)FsmVariables,
                                                                       *v260,
                                                                       v191,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              if ( !AssetManager__isExistAssetStorage(v261, 0LL) )
                                                              {
                                                                FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !FsmVariables )
                                                                  goto LABEL_394;
                                                                v261 = DesignCardManager__GetDesignCardPath(
                                                                         (DesignCardManager_o *)FsmVariables,
                                                                         *v260,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_releaseAssetPath;
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)FsmVariables,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v261,
                                                                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v262 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v262,
                                                                (Il2CppObject *)v246,
                                                                Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              v175 = v261;
                                                              v176 = v262;
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
    sub_B52A5C(Component_WebViewObject, v5);
  }
  if ( IsNewCard )
  {
    this->fields.isNoSkipAll = 1;
    if ( !LODWORD(Component_WebViewObject->fields.fsm) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  }
  v108 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&Component_WebViewObject->fields.m_CachedPtr
                                                                 + 32LL);
  if ( !v108 )
    goto LABEL_393;
  v109 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v108->fields.targetId;
  Component_WebViewObject = (PlayMakerFSM_o *)GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  }
  if ( !v109 )
    goto LABEL_393;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v109,
         (System_Xml_XmlQualifiedName_o *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v110 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v110 = GachaBehaviorMaster_TypeInfo;
    }
    v111 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             v109,
             (System_Type_o *)v110->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v106 = (PlayMakerFSM_o *)v111;
    if ( v111 )
    {
      v5 = string_TypeInfo;
      if ( (System_String_c *)v111->klass != string_TypeInfo )
        goto LABEL_397;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Component_WebViewObject,
            (WarBoardManager_TaskList_o *)v106,
            (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
      if ( !Component_WebViewObject )
        goto LABEL_393;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v106,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
    }
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
    if ( !Component_WebViewObject )
      goto LABEL_393;
    v112 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Component_WebViewObject,
             (WarBoardManager_TaskList_o *)v106,
             (const MethodInfo_2FF26B4 *)Method_System_Collections_Generic_List_string__IndexOf__);
  }
  else
  {
    v112 = -1;
  }
  v202 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v202 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v109,
         (System_Xml_XmlQualifiedName_o *)v202->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v203 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v203 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v109,
                                                  (System_Type_o *)v203->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                                  (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v204 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v204 = -1;
  }
  v205 = GachaBehaviorMaster_TypeInfo;
  v276 = v204;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v205 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v109,
         (System_Xml_XmlQualifiedName_o *)v205->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v206 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v206 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v109,
                                                  (System_Type_o *)v206->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                                  (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v207 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v207 = -1;
  }
  v208 = GachaBehaviorMaster_TypeInfo;
  v273 = v207;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v208 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v109,
         (System_Xml_XmlQualifiedName_o *)v208->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v209 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v209 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v109,
                                                  (System_Type_o *)v209->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                                  (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v210 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v210 = -1;
  }
  v211 = GachaBehaviorMaster_TypeInfo;
  v275 = v210;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v211 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v109,
          (System_Xml_XmlQualifiedName_o *)v211->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v213 = -1;
    goto LABEL_269;
  }
  v212 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v212 = GachaBehaviorMaster_TypeInfo;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v109,
                                                (System_Type_o *)v212->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                                (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
  {
LABEL_395:
    sub_B52D50(Component_WebViewObject);
    goto LABEL_396;
  }
  v213 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
LABEL_269:
  v214 = GachaBehaviorMaster_TypeInfo;
  v215 = v105;
  v274 = v213;
  if ( v112 != -1 )
    v215 = v276 != -1;
  v272 = v215;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v214 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v109,
         (System_Xml_XmlQualifiedName_o *)v214->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                  (System_String_o *)StringLiteral_9755/*"NoticeRarity"*/,
                                                  0LL);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    LODWORD(Component_WebViewObject[1].klass) = 3;
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
    v216 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v216 )
      goto LABEL_393;
    v217 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v216,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0LL);
    v218 = GachaBehaviorMaster_TypeInfo;
    v106 = (PlayMakerFSM_o *)v217;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v218 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v109,
                                                  (System_Type_o *)v218->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                                  (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v106 )
      goto LABEL_393;
    v225 = Component_WebViewObject;
    if ( Component_WebViewObject && (System_String_c *)Component_WebViewObject->klass != string_TypeInfo )
      goto LABEL_396;
    v106[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
    sub_B52920(
      (BattleServantConfConponent_o *)&v106[1],
      (System_Int32_array **)Component_WebViewObject,
      v219,
      v220,
      v221,
      v222,
      v223,
      v224);
  }
  v226 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v226 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v109,
          (System_Xml_XmlQualifiedName_o *)v226->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_305:
    v236 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v236 = GachaBehaviorMaster_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v109,
            (System_Xml_XmlQualifiedName_o *)v236->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
            (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v105 = v272;
      v113 = v112;
      goto LABEL_121;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
    v105 = v272;
    v237 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v237 )
      goto LABEL_393;
    v238 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v237,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
             0LL);
    v239 = GachaBehaviorMaster_TypeInfo;
    v106 = (PlayMakerFSM_o *)v238;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v239 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v109,
                                                  (System_Type_o *)v239->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                                  (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v106 )
      goto LABEL_393;
    v225 = Component_WebViewObject;
    v113 = v112;
    if ( !Component_WebViewObject || (System_String_c *)Component_WebViewObject->klass == string_TypeInfo )
    {
      v106[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
      sub_B52920(
        (BattleServantConfConponent_o *)&v106[1],
        (System_Int32_array **)Component_WebViewObject,
        v240,
        v241,
        v242,
        v243,
        v244,
        v245);
      goto LABEL_121;
    }
    goto LABEL_396;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3926/*"CardType"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = 4;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  v227 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v227 )
    goto LABEL_393;
  v228 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v227,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0LL);
  v229 = GachaBehaviorMaster_TypeInfo;
  v106 = (PlayMakerFSM_o *)v228;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v229 = GachaBehaviorMaster_TypeInfo;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v109,
                                                (System_Type_o *)v229->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                                (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v106 )
    goto LABEL_393;
  v225 = Component_WebViewObject;
  if ( !Component_WebViewObject || (System_String_c *)Component_WebViewObject->klass == string_TypeInfo )
  {
    v106[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
    sub_B52920(
      (BattleServantConfConponent_o *)&v106[1],
      (System_Int32_array **)Component_WebViewObject,
      v230,
      v231,
      v232,
      v233,
      v234,
      v235);
    goto LABEL_305;
  }
LABEL_396:
  sub_B52D50(v225);
LABEL_397:
  sub_B52D50(v106);
  SummonEffectComponent__ChangeClassCardColor(v268, v269, v270, v271);
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

  if ( (byte_42B3E92 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_5525/*"END_FADE"*/);
    byte_42B3E92 = 1;
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
    UnityEngine_Object__Destroy_35616956(v5, 0LL);
    *p_effect = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v6, v7, v8, v9, v10, v11);
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    sub_B52A5C(0LL, v13);
  PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5525/*"END_FADE"*/, 0LL);
}


void __fastcall SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B3E86 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SummonEffectComponent__endAnimation_b__43_0__);
    byte_42B3E86 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0LL);
  if ( !Instance )
    sub_B52A5C(v7, v8);
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
    sub_B52A5C(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
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
  if ( (byte_42ADD95 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_B52984(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_42ADD95 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  _4__this->fields.firstTr = TransformHelper__getNodeFromName(transform, v4->fields.cardFirstName, 1, 0LL);
  sub_B52920(&_4__this->fields.firstTr);
  v7 = v4->fields.__4__this;
  if ( !v7 )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)v7->fields.effect;
  if ( !this )
    goto LABEL_16;
  v8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v7->fields.firstTPeelr = TransformHelper__getNodeFromName(v8, v4->fields.cardFirstPeelName, 1, 0LL);
  sub_B52920(&v7->fields.firstTPeelr);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v9->fields.firstTr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v10->fields.firstTPeelr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B52A5C(this, d);
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
  if ( (byte_42ADD96 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_B52984(&StringLiteral_4557/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_42ADD96 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0LL);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)NodeFromName,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4557/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0LL);
  v10 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
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
    sub_B52A5C(this, d);
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

  if ( (byte_42ADD97 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_42ADD97 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B52A5C(Instance, v6);
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
  if ( (byte_42ADD98 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_B52984(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_42ADD98 = 1;
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
  sub_B52920(&_4__this->fields.firstTr);
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
  sub_B52920(&v9->fields.firstTPeelr);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v11 = v4->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_25;
  v12 = v11->fields.__4__this;
  if ( !v12 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v12->fields.firstTr, v4->fields.classCardId, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B52A5C(this, d);
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

  if ( (byte_42ADD99 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_42ADD99 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B52A5C(Instance, v6);
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

  if ( (byte_42ADD9A & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_42ADD9A = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B52A5C(Instance, v6);
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
  if ( (byte_42ADD9B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_B52984(&StringLiteral_15113/*"Unlit/Transparent Colored"*/);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_B52984(&StringLiteral_4557/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_42ADD9B = 1;
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
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0LL);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v11 = v4->fields.CS___8__locals3;
  if ( !v11 )
    goto LABEL_22;
  v12 = v11->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_22;
  v13 = this;
  v14 = (System_String_o **)(v12->fields.cardType == 1 ? &StringLiteral_4557/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15113/*"Unlit/Transparent Colored"*/);
  v15 = UnityEngine_Shader__Find(*v14, 0LL);
  v16 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
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
    sub_B52A5C(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}