void __fastcall SummonEffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v17; // x1
  struct SummonEffectComponent_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct SummonEffectComponent_StaticFields *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct SummonEffectComponent_StaticFields *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct SummonEffectComponent_StaticFields *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct SummonEffectComponent_StaticFields *v50; // x0
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct SummonEffectComponent_StaticFields *v58; // x0
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct SummonEffectComponent_StaticFields *v66; // x0
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct SummonEffectComponent_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7

  if ( (byte_4218487 & 1) == 0 )
  {
    sub_B0D8A4(&SummonEffectComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_22520/*"summon_up_04"*/, v8);
    sub_B0D8A4(&StringLiteral_22518/*"summon_up_02"*/, v9);
    sub_B0D8A4(&StringLiteral_6957/*"GetAnimationName"*/, v10);
    sub_B0D8A4(&StringLiteral_22519/*"summon_up_03"*/, v11);
    sub_B0D8A4(&StringLiteral_22517/*"summon_up_01"*/, v12);
    sub_B0D8A4(&StringLiteral_11310/*"RarityAnimationName"*/, v13);
    sub_B0D8A4(&StringLiteral_15099/*"UpAnimationName"*/, v14);
    sub_B0D8A4(&StringLiteral_7643/*"InitializeAnimationName"*/, v15);
    byte_4218487 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SummonEffectComponent_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_22517/*"summon_up_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22517/*"summon_up_01"*/;
  sub_B0D840(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = SummonEffectComponent_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_22518/*"summon_up_02"*/;
  v18->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_22518/*"summon_up_02"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v18->RANKUP_TO_SILVER_ANIMATION, v19, v20, v21, v22, v23, v24, v25);
  v26 = SummonEffectComponent_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_22519/*"summon_up_03"*/;
  v26->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_22519/*"summon_up_03"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v26->RANKUP_TO_GOLD_ANIMATION, v27, v28, v29, v30, v31, v32, v33);
  v34 = SummonEffectComponent_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_22520/*"summon_up_04"*/;
  v34->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_22520/*"summon_up_04"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v34->RANKUP_COMMANDCODE_ANIMATION, v35, v36, v37, v38, v39, v40, v41);
  v42 = SummonEffectComponent_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_15099/*"UpAnimationName"*/;
  v42->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15099/*"UpAnimationName"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v42->FSM_VARIABLE_UP_ANIMATION_NAME, v43, v44, v45, v46, v47, v48, v49);
  v50 = SummonEffectComponent_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_7643/*"InitializeAnimationName"*/;
  v50->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7643/*"InitializeAnimationName"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v50->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = SummonEffectComponent_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_11310/*"RarityAnimationName"*/;
  v58->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11310/*"RarityAnimationName"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v58->FSM_VARIABLE_RARITY_ANIMATION_NAME,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = SummonEffectComponent_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_6957/*"GetAnimationName"*/;
  v66->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_6957/*"GetAnimationName"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v66->FSM_VARIABLE_GET_ANIMATION_NAME, v67, v68, v69, v70, v71, v72, v73);
  v74 = SummonEffectComponent_TypeInfo->static_fields;
  v74->rarityToColor = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v74->rarityToColor, 0LL, v75, v76, v77, v78, v79, v80);
}


void __fastcall SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
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

  if ( (byte_4218486 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4218486 = 1;
  }
  v4 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v4 )
    sub_B0D97C(0LL);
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = 512, max_length == 1) )
  {
    v19 = sub_B0D9A8(v4);
    sub_B0D948(v19, 0LL);
  }
  v4->m_Items[2] = 875;
  this->fields.cardTextureSize = v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cardTextureSize,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.effAnimName, v12, v13, v14, v15, v16, v17, v18);
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
  __int64 v18; // x1
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x26
  SummonEffectComponent_SummonInfo_o *v20; // x27
  __int64 v21; // x0

  if ( (byte_4218476 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__, *(_QWORD *)&servantId);
    sub_B0D8A4(&SummonEffectComponent_SummonInfo_TypeInfo, v18);
    byte_4218476 = 1;
  }
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = this->fields.SummonInfos;
  }
  v20 = (SummonEffectComponent_SummonInfo_o *)sub_B0D974(
                                                SummonEffectComponent_SummonInfo_TypeInfo,
                                                *(_QWORD *)&servantId,
                                                *(_QWORD *)&limitCount);
  SummonEffectComponent_SummonInfo___ctor(
    v20,
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
    sub_B0D97C(v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SummonInfos,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
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
  if ( (byte_421847F & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, cardNode);
    byte_421847F = 1;
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
                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, const char *))this->klass[2]._1.gc_desc)(
                                            this,
                                            v8,
                                            this->klass[2]._1.name),
        (cardTextureSize = v6->fields.cardTextureSize) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  if ( cardTextureSize->max_length <= 1 )
  {
LABEL_11:
    v15 = sub_B0D9A8(this);
    sub_B0D948(v15, 0LL);
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
  __int64 v3; // x1
  int32_t counterMax; // w9
  int32_t v5; // w8
  PlayMakerFSM_o *Component_WebViewObject; // x0

  if ( (byte_4218480 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&StringLiteral_12101/*"SETUP_DONE"*/, v3);
    byte_4218480 = 1;
  }
  counterMax = this->fields._counterMax;
  v5 = this->fields._counter + 1;
  this->fields._counter = v5;
  if ( v5 >= counterMax )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B0D97C(0LL);
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_12101/*"SETUP_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  CommonUI_o *v4; // x19

  if ( (byte_4218478 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4218478 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v4 )
    sub_B0D97C(Instance);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


int32_t __fastcall SummonEffectComponent__GetGachaId(SummonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.gachaId;
}


void __fastcall SummonEffectComponent__InitSummonEffect(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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
  void *Component_WebViewObject; // x0
  PlayMakerFSM_o *v21; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x8
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x22
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x21
  _BOOL8 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v45; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  __int64 v48; // x1
  __int64 v49; // x2
  AssetLoader_LoadEndDataHandler_o *v50; // x22
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4218479 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B0D8A4(&Method_SummonEffectComponent_OnCharaGraphLoadDone__, v15);
    sub_B0D8A4(&SummonEffectComponent_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_8200/*"IsNoSkip"*/, v17);
    sub_B0D8A4(&StringLiteral_17776/*"countMax"*/, v18);
    sub_B0D8A4(&StringLiteral_13202/*"SummonEffectAnimation"*/, v19);
    byte_4218479 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  v21 = (PlayMakerFSM_o *)Component_WebViewObject;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_17776/*"countMax"*/,
                              0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_32;
  if ( !Component_WebViewObject )
    goto LABEL_32;
  *((_DWORD *)Component_WebViewObject + 14) = SummonInfos->fields._size;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v21, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8200/*"IsNoSkip"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  *((_BYTE *)Component_WebViewObject + 56) = this->fields.isNoSkip;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v21, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_13202/*"SummonEffectAnimation"*/,
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
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v32;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.upAnimationNameList,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  Component_WebViewObject = *p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  Component_WebViewObject = *p_upAnimationNameList;
  if ( !*p_upAnimationNameList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__),
        (Component_WebViewObject = *p_upAnimationNameList) == 0LL)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__),
        (Component_WebViewObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_WebViewObject, 1, 0LL),
        (Component_WebViewObject = this->fields.SummonInfos) == 0LL) )
  {
LABEL_32:
    sub_B0D97C(Component_WebViewObject);
  }
  this->fields.DownloadCounter = *((_DWORD *)Component_WebViewObject + 6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Component_WebViewObject,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v52 = v51;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v41 )
      break;
    if ( !v52.fields.current )
      sub_B0D97C(v41);
    klass = (int32_t)v52.fields.current[1].klass;
    if ( HIDWORD(v52.fields.current[2].klass) == 3 )
    {
      v45 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v42, v43);
      AssetLoader_LoadEndDataHandler___ctor(
        v45,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadCommandAsset(klass, v45, 0LL);
    }
    else
    {
      klass_high = HIDWORD(v52.fields.current[1].klass);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0LL);
      v50 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v48, v49);
      AssetLoader_LoadEndDataHandler___ctor(
        v50,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v50, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void __fastcall SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4218475 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo, v4);
    byte_4218475 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.SummonInfos,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w8
  CommonUI_o *Instance; // x0

  if ( (byte_421847A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, loadData);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_7315/*"INIT_DONE"*/, v5);
    byte_421847A = 1;
  }
  v6 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v6;
  if ( !v6 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0LL),
          (Instance = (CommonUI_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0LL) )
    {
      sub_B0D97C(Instance);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7315/*"INIT_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *Component_WebViewObject; // x0

  if ( (byte_4218485 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&StringLiteral_5733/*"EVENT_SKIP"*/, v3);
    byte_4218485 = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B0D97C(0LL);
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5733/*"EVENT_SKIP"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__ReleasePrevAsset(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421847B & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_421847B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseAssetPath,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v11.fields.current;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v10 = this->fields._releaseAssetPath;
    if ( !v10 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
  }
}


void __fastcall SummonEffectComponent__SetGachaId(SummonEffectComponent_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.gachaId = id;
}


void __fastcall SummonEffectComponent__SetUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *Component_WebViewObject; // x0
  PlayMakerFSM_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x22
  int size; // w8
  __int64 items; // x8
  struct System_String_o *v18; // x1
  HutongGames_PlayMaker_FsmVariables_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **effAnimName; // x1

  if ( (byte_4218481 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v4);
    sub_B0D8A4(&SummonEffectComponent_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11297/*"Rank"*/, v6);
    byte_4218481 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject
    || (v8 = (PlayMakerFSM_o *)Component_WebViewObject,
        (Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL)) == 0LL)
    || (Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                    (System_String_o *)StringLiteral_11297/*"Rank"*/,
                                    0LL)) == 0LL )
  {
LABEL_22:
    sub_B0D97C(Component_WebViewObject);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      items = (__int64)upAnimationNameList->fields._items + 8 * (int)Component_WebViewObject;
      goto LABEL_16;
    }
  }
  if ( !upAnimationNameList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  items = (__int64)upAnimationNameList->fields._items;
LABEL_16:
  v18 = *(struct System_String_o **)(items + 32);
  this->fields.effAnimName = v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effAnimName,
    (System_Int32_array **)v18,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v8, 0LL);
  v19 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v19 )
    goto LABEL_22;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              v19,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  effAnimName = (System_Int32_array **)this->fields.effAnimName;
  *((_QWORD *)Component_WebViewObject + 7) = effAnimName;
  sub_B0D840(
    (BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56),
    effAnimName,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall SummonEffectComponent__SetUpInitializeAnimation(
        SummonEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *Component_WebViewObject; // x0
  PlayMakerFSM_o *v6; // x19
  HutongGames_PlayMaker_FsmVariables_o *v7; // x20
  System_String_o *Value; // x0

  if ( (byte_4218482 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&SummonEffectComponent_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_7308/*"INITIALIZE_ANIMATION"*/, v4);
    byte_4218482 = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_11;
  v6 = Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  v7 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v7
    || (Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                      v7,
                                                      SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                                      0LL)) == 0LL )
  {
LABEL_11:
    sub_B0D97C(Component_WebViewObject);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) )
    PlayMakerFSM__SendEvent(v6, (System_String_o *)StringLiteral_7308/*"INITIALIZE_ANIMATION"*/, 0LL);
}


void __fastcall SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SummonEffectComponent_c *v6; // x0
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v7; // x19
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  SummonEffectComponent_c *v15; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_4218477 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__,
      method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo, v4);
    sub_B0D8A4(&SummonEffectComponent_TypeInfo, v5);
    byte_4218477 = 1;
  }
  v6 = SummonEffectComponent_TypeInfo;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v6 = SummonEffectComponent_TypeInfo;
  }
  if ( !v6->static_fields->rarityToColor )
  {
    v7 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B0D974(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo, method, v2);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
      v7,
      (const MethodInfo_2EA255C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v7 )
      sub_B0D97C(v8);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v7,
      0,
      0,
      (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v7,
      1,
      0,
      (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v7,
      2,
      0,
      (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v7,
      3,
      1,
      (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v7,
      4,
      2,
      (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v7,
      5,
      2,
      (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v7,
      101,
      0,
      (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v7,
      102,
      0,
      (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v15 = SummonEffectComponent_TypeInfo;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v15 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v15->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v7;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->rarityToColor,
      (System_Int32_array **)v7,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
}


void __fastcall SummonEffectComponent__StopRarityAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *Component_WebViewObject; // x0
  HutongGames_PlayMaker_FsmVariables_o *v7; // x20
  System_String_o *Value; // x0
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v10; // x20
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0

  if ( (byte_4218484 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&SummonEffectComponent_TypeInfo, v5);
    byte_4218484 = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_25;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  v7 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v7 )
    goto LABEL_25;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                v7,
                                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v10 = Value;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0LL, 0LL) && !System_String__IsNullOrEmpty(v10, 0LL) )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.effAnimation;
    if ( Component_WebViewObject )
    {
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)Component_WebViewObject, v10, 0LL) )
        return;
      Component_WebViewObject = (PlayMakerFSM_o *)this->fields.effAnimation;
      if ( Component_WebViewObject )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)Component_WebViewObject,
                                                   v10,
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
    sub_B0D97C(Component_WebViewObject);
  }
}


void __fastcall SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *effAnimation; // x20
  UnityEngine_Animation_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v9; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x0

  if ( (byte_4218483 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____67969328, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4218483 = 1;
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
    sub_B0D97C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
  }
LABEL_15:
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = this->fields.effAnimation;
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_29;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         (UnityEngine_Component_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                         1,
                                                                                         (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____67969328);
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
        v12 = sub_B0D9A8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B0D948(v12, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *Component_WebViewObject; // x0
  PlayMakerFSM_o *v16; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x22
  SummonEffectComponent_SummonInfo_o *v18; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v19; // x22
  int32_t ServantId; // w28
  SummonEffectComponent_SummonInfo_o *v21; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v22; // x22
  int32_t LimitCount; // w27
  SummonEffectComponent_SummonInfo_o *v24; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v25; // x22
  bool IsRankUp; // w26
  SummonEffectComponent_SummonInfo_o *v27; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v28; // x22
  _BOOL4 IsNewCard; // w24
  SummonEffectComponent_SummonInfo_o *v30; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v31; // x22
  SummonEffectComponent_SummonInfo_o *v32; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v33; // x25
  int32_t Rarity; // w22
  SummonEffectComponent_SummonInfo_o *v35; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v36; // x24
  int32_t CardType; // w25
  SummonEffectComponent_SummonInfo_o *v38; // x8
  bool IsSkipStop; // w21
  HutongGames_PlayMaker_FsmVariables_o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int v59; // w21
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20
  _BOOL4 v62; // [xsp+8h] [xbp-58h]
  int32_t NoticeRarity; // [xsp+Ch] [xbp-54h]

  if ( (byte_421847D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&SummonEffectComponent_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_8199/*"IsNewCard"*/, v6);
    sub_B0D8A4(&StringLiteral_17775/*"countIndex"*/, v7);
    sub_B0D8A4(&StringLiteral_8212/*"IsRankUp"*/, v8);
    sub_B0D8A4(&StringLiteral_8216/*"IsSkipStop"*/, v9);
    sub_B0D8A4(&StringLiteral_8543/*"LimitCount"*/, v10);
    sub_B0D8A4(&StringLiteral_9721/*"NoticeRarity"*/, v11);
    sub_B0D8A4(&StringLiteral_3906/*"CardType"*/, v12);
    sub_B0D8A4(&StringLiteral_11308/*"Rarity"*/, v13);
    sub_B0D8A4(&StringLiteral_12757/*"ServantId"*/, v14);
    byte_421847D = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  v16 = (PlayMakerFSM_o *)Component_WebViewObject;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_17775/*"countIndex"*/,
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v18 = SummonInfos->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v18 )
    goto LABEL_82;
  v19 = this->fields.SummonInfos;
  if ( !v19 )
    goto LABEL_82;
  ServantId = v18->fields.ServantId;
  if ( v19->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v21 = v19->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v21 )
    goto LABEL_82;
  v22 = this->fields.SummonInfos;
  if ( !v22 )
    goto LABEL_82;
  LimitCount = v21->fields.LimitCount;
  if ( v22->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v24 = v22->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v24 )
    goto LABEL_82;
  v25 = this->fields.SummonInfos;
  if ( !v25 )
    goto LABEL_82;
  IsRankUp = v24->fields.IsRankUp;
  if ( v25->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v27 = v25->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v27 )
    goto LABEL_82;
  v28 = this->fields.SummonInfos;
  if ( !v28 )
    goto LABEL_82;
  IsNewCard = v27->fields.IsNewCard;
  if ( v28->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v30 = v28->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v30 )
    goto LABEL_82;
  v31 = this->fields.SummonInfos;
  if ( !v31 )
    goto LABEL_82;
  NoticeRarity = v30->fields.NoticeRarity;
  if ( v31->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v62 = IsNewCard;
  v32 = v31->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v32 )
    goto LABEL_82;
  v33 = this->fields.SummonInfos;
  if ( !v33 )
    goto LABEL_82;
  Rarity = v32->fields.Rarity;
  if ( v33->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v35 = v33->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v35 )
    goto LABEL_82;
  v36 = this->fields.SummonInfos;
  if ( !v36 )
    goto LABEL_82;
  CardType = v35->fields.CardType;
  if ( v36->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v38 = v36->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v38 )
    goto LABEL_82;
  IsSkipStop = v38->fields.IsSkipStop;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_12757/*"ServantId"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = ServantId;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8543/*"LimitCount"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = LimitCount;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8212/*"IsRankUp"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = IsRankUp;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8216/*"IsSkipStop"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = IsSkipStop;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  v40 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v40 )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              v40,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v41, v42, v43, v44, v45, v46);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v47, v48, v49, v50, v51, v52);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v53, v54, v55, v56, v57, v58);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8199/*"IsNewCard"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = v62 || Rarity == 0;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_9721/*"NoticeRarity"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = NoticeRarity;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_3906/*"CardType"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = CardType;
  if ( (unsigned int)(Rarity - 3) >= 3 )
    v59 = Rarity ? 0 : 3;
  else
    v59 = dword_3215D94[Rarity - 3];
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_11308/*"Rarity"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = v59;
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
      sub_B0D97C(Component_WebViewObject);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x21
  PlayMakerFSM_o *Component_WebViewObject; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  PlayMakerFSM_o *v84; // x23
  const MethodInfo *v85; // x1
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x22
  SummonEffectComponent_SummonInfo_o *v87; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v88; // x22
  SummonEffectComponent_SummonInfo_o *v89; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v90; // x22
  SummonEffectComponent_SummonInfo_o *v91; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v92; // x22
  _BOOL4 IsRankUp; // w25
  SummonEffectComponent_SummonInfo_o *v94; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v95; // x22
  _BOOL4 IsNewCard; // w28
  SummonEffectComponent_SummonInfo_o *v97; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v98; // x26
  int32_t NoticeRarity; // w22
  SummonEffectComponent_SummonInfo_o *v100; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v101; // x26
  int Rarity; // w27
  SummonEffectComponent_SummonInfo_o *v103; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v104; // x26
  SummonEffectComponent_SummonInfo_o *v105; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v106; // x27
  bool IsSkipStop; // w26
  SummonEffectComponent_SummonInfo_o *v108; // x8
  int64_t userServantId; // x27
  __int64 v110; // x1
  __int64 v111; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v112; // x19
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  HutongGames_PlayMaker_FsmVariables_o *v119; // x19
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  int v126; // w22
  HutongGames_PlayMaker_FsmVariables_o *v127; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  Il2CppObject *v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_String_o *v144; // x22
  float v145; // s8
  System_Int32_array **v146; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_Int32_array **v160; // x0
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_Int32_array **v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v175; // x24
  UnityEngine_Transform_o *v176; // x19
  int v177; // s0
  _BOOL4 v180; // w25
  PlayMakerFSM_o *v181; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v182; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v183; // x8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v184; // x22
  GachaBehaviorMaster_c *v185; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v186; // x0
  int32_t v187; // w24
  int v188; // w28
  UnityEngine_Object_o *prevObject; // x19
  struct UnityEngine_GameObject_o **p_prevObject; // x22
  int v191; // w9
  _BOOL4 v192; // w24
  int32_t v193; // w8
  UnityEngine_Object_o *v194; // x19
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v202; // x1
  __int64 v203; // x2
  System_Action_o *v204; // x25
  bool v205; // w25
  __int64 v206; // x1
  __int64 v207; // x2
  UnityEngine_GameObject_o *v208; // x19
  UserServantEntity_o *v209; // x25
  int v210; // w27
  System_Action_o *v211; // x28
  System_Action_o *v212; // x3
  System_Action_o *v213; // x25
  UnityEngine_Component_o *v214; // x19
  UnityEngine_Transform_o *v215; // x25
  int v216; // s0
  System_Int32_array **v219; // x0
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  System_String_o *v226; // x22
  System_String_o *v227; // x19
  UnityEngine_Transform_o *v228; // x0
  UnityEngine_Component_o *v229; // x26
  UnityEngine_Transform_o *v230; // x0
  UnityEngine_Component_o *v231; // x22
  __int64 v232; // x1
  __int64 v233; // x2
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  int v235; // w8
  UnityEngine_Transform_o *v236; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v238; // x3
  UnityEngine_Transform_o *v239; // x0
  UnityEngine_Transform_o *v240; // x0
  const MethodInfo *v241; // x3
  UnityEngine_Transform_o *v242; // x0
  UnityEngine_Transform_o *v243; // x1
  const MethodInfo *v244; // x3
  SummonEffectComponent_o *v245; // x0
  int32_t v246; // w2
  System_String_o *v247; // x0
  System_String_o *v248; // x19
  System_String_o *v249; // x0
  System_String_o *v250; // x0
  System_String_o *v251; // x19
  __int64 v252; // x1
  __int64 v253; // x2
  AssetLoader_LoadEndDataHandler_o *v254; // x20
  System_String_o *v255; // x19
  __int64 v256; // x1
  __int64 v257; // x2
  AssetLoader_LoadEndDataHandler_o *v258; // x20
  System_String_o *v259; // x0
  AssetLoader_LoadEndDataHandler_o *v260; // x1
  UnityEngine_Transform_o *v261; // x0
  UnityEngine_Transform_o *v262; // x0
  UnityEngine_Transform_o *v263; // x0
  const MethodInfo *v264; // x3
  const MethodInfo *v265; // x1
  __int64 v266; // x22
  System_String_array **v267; // x2
  System_String_array **v268; // x3
  System_Boolean_array **v269; // x4
  System_Int32_array **v270; // x5
  System_Int32_array *v271; // x6
  System_Int32_array *v272; // x7
  WarEntity_o *v273; // x19
  __int64 v274; // x1
  __int64 v275; // x2
  int v276; // w8
  int32_t v277; // w19
  __int64 v278; // x21
  System_String_array **v279; // x2
  System_String_array **v280; // x3
  System_Boolean_array **v281; // x4
  System_Int32_array **v282; // x5
  System_Int32_array *v283; // x6
  System_Int32_array *v284; // x7
  Il2CppObject **v285; // x20
  int32_t LowerColorRarity; // w0
  int32_t v287; // w22
  GachaBehaviorMaster_c *v288; // x0
  GachaBehaviorMaster_c *v289; // x0
  int v290; // w8
  GachaBehaviorMaster_c *v291; // x0
  GachaBehaviorMaster_c *v292; // x0
  int v293; // w9
  GachaBehaviorMaster_c *v294; // x0
  GachaBehaviorMaster_c *v295; // x0
  int v296; // w8
  GachaBehaviorMaster_c *v297; // x0
  GachaBehaviorMaster_c *v298; // x0
  int v299; // w8
  GachaBehaviorMaster_c *v300; // x0
  _BOOL4 v301; // w10
  HutongGames_PlayMaker_FsmVariables_o *v302; // x19
  HutongGames_PlayMaker_FsmString_o *v303; // x0
  GachaBehaviorMaster_c *v304; // x8
  System_String_array **v305; // x2
  System_String_array **v306; // x3
  System_Boolean_array **v307; // x4
  System_Int32_array **v308; // x5
  System_Int32_array *v309; // x6
  System_Int32_array *v310; // x7
  PlayMakerFSM_o *v311; // x8
  GachaBehaviorMaster_c *v312; // x0
  HutongGames_PlayMaker_FsmVariables_o *v313; // x19
  HutongGames_PlayMaker_FsmString_o *v314; // x0
  GachaBehaviorMaster_c *v315; // x8
  System_String_array **v316; // x2
  System_String_array **v317; // x3
  System_Boolean_array **v318; // x4
  System_Int32_array **v319; // x5
  System_Int32_array *v320; // x6
  System_Int32_array *v321; // x7
  GachaBehaviorMaster_c *v322; // x0
  HutongGames_PlayMaker_FsmVariables_o *v323; // x19
  HutongGames_PlayMaker_FsmString_o *v324; // x0
  GachaBehaviorMaster_c *v325; // x8
  System_String_array **v326; // x2
  System_String_array **v327; // x3
  System_Boolean_array **v328; // x4
  System_Int32_array **v329; // x5
  System_Int32_array *v330; // x6
  System_Int32_array *v331; // x7
  __int64 v332; // x20
  System_String_array **v333; // x2
  System_String_array **v334; // x3
  System_Boolean_array **v335; // x4
  System_Int32_array **v336; // x5
  System_Int32_array *v337; // x6
  System_Int32_array *v338; // x7
  Il2CppObject **v339; // x21
  int v340; // w8
  System_String_o *v341; // x22
  Il2CppObject *v342; // x24
  __int64 v343; // x1
  __int64 v344; // x2
  AssetLoader_LoadEndDataHandler_o *v345; // x23
  _DWORD *monitor; // x8
  System_String_o **v347; // x8
  int32_t *v348; // x21
  System_String_o *v349; // x19
  __int64 v350; // x1
  __int64 v351; // x2
  AssetLoader_LoadEndDataHandler_o *v352; // x21
  System_String_o *DesignCardPath; // x23
  __int64 v354; // x1
  __int64 v355; // x2
  AssetLoader_LoadEndDataHandler_o *v356; // x24
  System_String_o *v357; // x22
  __int64 v358; // x1
  __int64 v359; // x2
  AssetLoader_LoadEndDataHandler_o *v360; // x23
  Il2CppObject *v361; // x21
  __int64 v362; // x1
  __int64 v363; // x2
  SummonEffectComponent_o *v364; // x0
  UnityEngine_Transform_o *v365; // x1
  int32_t v366; // w2
  const MethodInfo *v367; // x3
  _BOOL4 v368; // [xsp+8h] [xbp-D8h]
  int v369; // [xsp+Ch] [xbp-D4h]
  int v370; // [xsp+10h] [xbp-D0h]
  int v371; // [xsp+14h] [xbp-CCh]
  int v372; // [xsp+2Ch] [xbp-B4h]
  int64_t v373; // [xsp+30h] [xbp-B0h]
  System_String_o **v374; // [xsp+38h] [xbp-A8h]
  int32_t Item; // [xsp+4Ch] [xbp-94h]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+50h] [xbp-90h]
  int32_t limitCount; // [xsp+5Ch] [xbp-84h]
  UnityEngine_Component_o *v378; // [xsp+60h] [xbp-80h]
  int key; // [xsp+68h] [xbp-78h]
  int32_t svtId; // [xsp+6Ch] [xbp-74h]
  int v381; // [xsp+70h] [xbp-70h] BYREF
  int v382; // [xsp+74h] [xbp-6Ch] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v384; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v385; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v386; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v387; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v388; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421847E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v4);
    sub_B0D8A4(&AtlasManager_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v6);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v7);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaBehaviorMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v15);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v17);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__,
      v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v19);
    sub_B0D8A4(&GachaBehaviorMaster_TypeInfo, v20);
    sub_B0D8A4(&int_TypeInfo, v21);
    sub_B0D8A4(&long_TypeInfo, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__IndexOf__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v29);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v30);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v31);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v32);
    sub_B0D8A4(&Rarity_TypeInfo, v33);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v34);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B0D8A4(&string_TypeInfo, v36);
    sub_B0D8A4(&SummonEffectComponent_TypeInfo, v37);
    sub_B0D8A4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__, v38);
    sub_B0D8A4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__, v39);
    sub_B0D8A4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__, v40);
    sub_B0D8A4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__, v41);
    sub_B0D8A4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__, v42);
    sub_B0D8A4(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo, v43);
    sub_B0D8A4(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__, v44);
    sub_B0D8A4(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__, v45);
    sub_B0D8A4(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo, v46);
    sub_B0D8A4(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__, v47);
    sub_B0D8A4(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__, v48);
    sub_B0D8A4(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo, v49);
    sub_B0D8A4(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__, v50);
    sub_B0D8A4(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo, v51);
    sub_B0D8A4(&StringLiteral_3902/*"CardScale"*/, v52);
    sub_B0D8A4(&StringLiteral_3903/*"CardSecondName"*/, v53);
    sub_B0D8A4(&StringLiteral_3894/*"CardFirstName"*/, v54);
    sub_B0D8A4(&StringLiteral_8199/*"IsNewCard"*/, v55);
    sub_B0D8A4(&StringLiteral_3901/*"CardRotName"*/, v56);
    sub_B0D8A4(&StringLiteral_4126/*"CodeCardRarity02"*/, v57);
    sub_B0D8A4(&StringLiteral_2363/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v58);
    sub_B0D8A4(&StringLiteral_11297/*"Rank"*/, v59);
    sub_B0D8A4(&StringLiteral_17775/*"countIndex"*/, v60);
    sub_B0D8A4(&StringLiteral_13200/*"SummonEffect"*/, v61);
    sub_B0D8A4(&StringLiteral_21773/*"rarity"*/, v62);
    sub_B0D8A4(&StringLiteral_8212/*"IsRankUp"*/, v63);
    sub_B0D8A4(&StringLiteral_15953/*"_0"*/, v64);
    sub_B0D8A4(&StringLiteral_4125/*"CodeCardRarity"*/, v65);
    sub_B0D8A4(&StringLiteral_8216/*"IsSkipStop"*/, v66);
    sub_B0D8A4(&StringLiteral_8543/*"LimitCount"*/, v67);
    sub_B0D8A4(&StringLiteral_9721/*"NoticeRarity"*/, v68);
    sub_B0D8A4(&StringLiteral_2362/*"BACKSIDE_CLASS_IMAGE_ID"*/, v69);
    sub_B0D8A4(&StringLiteral_3906/*"CardType"*/, v70);
    sub_B0D8A4(&StringLiteral_3900/*"CardNodeName"*/, v71);
    sub_B0D8A4(&StringLiteral_3895/*"CardFirstPeelName"*/, v72);
    sub_B0D8A4(&StringLiteral_22511/*"summon_rarity_0"*/, v73);
    sub_B0D8A4(&StringLiteral_11308/*"Rarity"*/, v74);
    sub_B0D8A4(&StringLiteral_12757/*"ServantId"*/, v75);
    byte_421847E = 1;
  }
  entity = 0LL;
  v382 = 0;
  v76 = sub_B0D974(SummonEffectComponent___c__DisplayClass45_0_TypeInfo, method, v2);
  SummonEffectComponent___c__DisplayClass45_0___ctor((SummonEffectComponent___c__DisplayClass45_0_o *)v76, 0LL);
  if ( !v76 )
    goto LABEL_393;
  *(_QWORD *)(v76 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v76 + 16), (System_Int32_array **)this, v78, v79, v80, v81, v82, v83);
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v84 = Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_17775/*"countIndex"*/,
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v87 = SummonInfos->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v87 )
    goto LABEL_393;
  v88 = this->fields.SummonInfos;
  if ( !v88 )
    goto LABEL_393;
  svtId = v87->fields.ServantId;
  if ( v88->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v89 = v88->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v89 )
    goto LABEL_393;
  v90 = this->fields.SummonInfos;
  if ( !v90 )
    goto LABEL_393;
  limitCount = v89->fields.LimitCount;
  if ( v90->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v91 = v90->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v91 )
    goto LABEL_393;
  v92 = this->fields.SummonInfos;
  if ( !v92 )
    goto LABEL_393;
  IsRankUp = v91->fields.IsRankUp;
  if ( v92->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v94 = v92->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v94 )
    goto LABEL_393;
  v95 = this->fields.SummonInfos;
  if ( !v95 )
    goto LABEL_393;
  IsNewCard = v94->fields.IsNewCard;
  if ( v95->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v97 = v95->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v97 )
    goto LABEL_393;
  v98 = this->fields.SummonInfos;
  if ( !v98 )
    goto LABEL_393;
  NoticeRarity = v97->fields.NoticeRarity;
  if ( v98->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v100 = v98->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v100 )
    goto LABEL_393;
  v101 = this->fields.SummonInfos;
  if ( !v101 )
    goto LABEL_393;
  Rarity = v100->fields.Rarity;
  if ( v101->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v103 = v101->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v103 )
    goto LABEL_393;
  *(_DWORD *)(v76 + 56) = v103->fields.CardType;
  v104 = this->fields.SummonInfos;
  if ( !v104 )
    goto LABEL_393;
  if ( v104->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  key = Rarity;
  v105 = v104->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v105 )
    goto LABEL_393;
  v106 = this->fields.SummonInfos;
  if ( !v106 )
    goto LABEL_393;
  IsSkipStop = v105->fields.IsSkipStop;
  if ( v106->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v108 = v106->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v108 )
    goto LABEL_393;
  userServantId = v108->fields.userServantId;
  SummonEffectComponent__ReleasePrevAsset(this, v85);
  v112 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_string__TypeInfo,
                                                                                                   v110,
                                                                                                   v111);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v112,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v112;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._releaseAssetPath,
    (System_Int32_array **)v112,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_12757/*"ServantId"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = svtId;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8543/*"LimitCount"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = limitCount;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8212/*"IsRankUp"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsRankUp;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8216/*"IsSkipStop"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsSkipStop;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  v119 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v119 )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                v119,
                                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject[1].klass = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&Component_WebViewObject[1], 0LL, v120, v121, v122, v123, v124, v125);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8199/*"IsNewCard"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsNewCard || key == 0;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_9721/*"NoticeRarity"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = NoticeRarity;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3906/*"CardType"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = *(_DWORD *)(v76 + 56);
  if ( (unsigned int)(key - 3) >= 3 )
    v126 = key ? 0 : 3;
  else
    v126 = dword_3215D94[key - 3];
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_11308/*"Rarity"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = v126;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  v127 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v127 )
    goto LABEL_393;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v127,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0LL);
  v381 = v126;
  v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v381);
  Component_WebViewObject = (PlayMakerFSM_o *)System_String__Concat((Il2CppObject *)StringLiteral_22511/*"summon_rarity_0"*/, v129, 0LL);
  if ( !FsmString )
    goto LABEL_393;
  FsmString->fields.value = (struct System_String_o *)Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&FsmString->fields.value,
    (System_Int32_array **)Component_WebViewObject,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v373 = userServantId;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_13200/*"SummonEffect"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)Component_WebViewObject,
            0LL);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)Value,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3900/*"CardNodeName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v144 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3902/*"CardScale"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v145 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3894/*"CardFirstName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v146 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v76 + 24) = v146;
  sub_B0D840((BattleServantConfConponent_o *)(v76 + 24), v146, v147, v148, v149, v150, v151, v152);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3895/*"CardFirstPeelName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v153 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v76 + 32) = v153;
  sub_B0D840((BattleServantConfConponent_o *)(v76 + 32), v153, v154, v155, v156, v157, v158, v159);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3903/*"CardSecondName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v160 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v76 + 40) = v160;
  sub_B0D840((BattleServantConfConponent_o *)(v76 + 40), v160, v161, v162, v163, v164, v165, v166);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3901/*"CardRotName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v167 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v76 + 48) = v167;
  v374 = (System_String_o **)(v76 + 48);
  sub_B0D840((BattleServantConfConponent_o *)(v76 + 48), v167, v168, v169, v170, v171, v172, v173);
  Component_WebViewObject = (PlayMakerFSM_o *)*p_effect;
  if ( !*p_effect )
    goto LABEL_393;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v144, 1, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v175 = (UnityEngine_Component_o *)Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Component_WebViewObject,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 0, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v175, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v176 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_WebViewObject, 0LL);
  *(UnityEngine_Vector3_o *)&v177 = UnityEngine_Vector3__get_one(0LL);
  if ( !v176 )
    goto LABEL_393;
  UnityEngine_Transform__set_localScale(v176, *(UnityEngine_Vector3_o *)&v177, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Item = System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
           (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)Component_WebViewObject,
           key,
           (const MethodInfo_2EA3040 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Component_WebViewObject,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v180 = IsRankUp && Item != 0;
  Component_WebViewObject = (PlayMakerFSM_o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                (GachaBehaviorMaster_o *)Component_WebViewObject,
                                                this->fields.gachaId,
                                                svtId,
                                                0LL);
  v378 = v175;
  if ( !Component_WebViewObject )
    goto LABEL_120;
  v181 = Component_WebViewObject;
  if ( SLODWORD(Component_WebViewObject->fields.fsm) < 1 )
    goto LABEL_120;
  v182 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&Component_WebViewObject->fields.m_CachedPtr
                                                                 + 32LL);
  if ( !v182 )
    goto LABEL_393;
  if ( !*(_QWORD *)&v182->fields.targetId )
  {
LABEL_120:
    v370 = -1;
    v371 = -1;
    v369 = -1;
    v372 = -1;
    v188 = -1;
LABEL_121:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v180 )
      v191 = 4;
    else
      v191 = 3;
    v192 = v180;
    if ( this->fields.EditMode )
      v193 = 0;
    else
      v193 = v191;
    this->fields._counter = 0;
    this->fields._counterMax = v193;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(prevObject, 0LL, 0LL) )
    {
      v194 = (UnityEngine_Object_o *)*p_prevObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v194, 0LL);
      *p_prevObject = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.prevObject, 0LL, v195, v196, v197, v198, v199, v200);
    }
    if ( *(_DWORD *)(v76 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v378, 0LL);
      v204 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v202, v203);
      System_Action___ctor(
        v204,
        (Il2CppObject *)v76,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0LL);
      Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateCommandTexturePrefab(
                                                    gameObject,
                                                    svtId,
                                                    0,
                                                    v204,
                                                    0LL);
    }
    else
    {
      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_WebViewObject )
        goto LABEL_393;
      Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)Component_WebViewObject,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0LL;
      if ( !Component_WebViewObject )
        goto LABEL_393;
      v205 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Component_WebViewObject,
               &entity,
               v373,
               (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v208 = UnityEngine_Component__get_gameObject(v378, 0LL);
      if ( v205 )
      {
        v209 = entity;
        v210 = v188;
        v211 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v206, v207);
        System_Action___ctor(
          v211,
          (Il2CppObject *)v76,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0LL);
        v212 = v211;
        v188 = v210;
        p_effect = &this->fields.effect;
        Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_24036388(
                                                      v208,
                                                      v209,
                                                      0,
                                                      v212,
                                                      0LL);
      }
      else
      {
        v213 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v206, v207);
        System_Action___ctor(
          v213,
          (Il2CppObject *)v76,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0LL);
        Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab(
                                                      v208,
                                                      svtId,
                                                      limitCount,
                                                      0,
                                                      1,
                                                      0,
                                                      v213,
                                                      0,
                                                      0LL);
      }
    }
    v214 = (UnityEngine_Component_o *)Component_WebViewObject;
    if ( Component_WebViewObject )
    {
      v215 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_WebViewObject, 0LL);
      *(UnityEngine_Vector3_o *)&v216 = UnityEngine_Vector3__get_zero(0LL);
      if ( v215 )
      {
        UnityEngine_Transform__set_localPosition(v215, *(UnityEngine_Vector3_o *)&v216, 0LL);
        Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v214, 0LL);
        if ( Component_WebViewObject )
        {
          v384.fields.x = v145;
          v384.fields.y = v145;
          v384.fields.z = v145;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_WebViewObject, v384, 0LL);
          Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        v378,
                                                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
          if ( Component_WebViewObject )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
            v219 = (System_Int32_array **)UnityEngine_Component__get_gameObject(v214, 0LL);
            *p_prevObject = (struct UnityEngine_GameObject_o *)v219;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.prevObject,
              v219,
              v220,
              v221,
              v222,
              v223,
              v224,
              v225);
            Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
            if ( Component_WebViewObject )
            {
              Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                            (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                            (System_String_o *)StringLiteral_4125/*"CodeCardRarity"*/,
                                                            0LL);
              if ( Component_WebViewObject )
              {
                v226 = HutongGames_PlayMaker_FsmString__get_Value(
                         (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                         0LL);
                Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
                if ( Component_WebViewObject )
                {
                  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                                (System_String_o *)StringLiteral_4126/*"CodeCardRarity02"*/,
                                                                0LL);
                  if ( Component_WebViewObject )
                  {
                    Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                                                  0LL);
                    if ( *p_effect )
                    {
                      v227 = (System_String_o *)Component_WebViewObject;
                      v228 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                      Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(v228, v226, 1, 0LL);
                      if ( Component_WebViewObject )
                      {
                        Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                      (UnityEngine_Component_o *)Component_WebViewObject,
                                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                        if ( *p_effect )
                        {
                          v229 = (UnityEngine_Component_o *)Component_WebViewObject;
                          v230 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                          Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(
                                                                        v230,
                                                                        v227,
                                                                        1,
                                                                        0LL);
                          if ( Component_WebViewObject )
                          {
                            Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                          (UnityEngine_Component_o *)Component_WebViewObject,
                                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                            if ( v229 )
                            {
                              v231 = (UnityEngine_Component_o *)Component_WebViewObject;
                              Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                            v229,
                                                                            0LL);
                              if ( Component_WebViewObject )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Component_WebViewObject,
                                  0,
                                  0LL);
                                if ( v231 )
                                {
                                  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                v231,
                                                                                0LL);
                                  if ( Component_WebViewObject )
                                  {
                                    UnityEngine_GameObject__SetActive(
                                      (UnityEngine_GameObject_o *)Component_WebViewObject,
                                      0,
                                      0LL);
                                    if ( this->fields.EditMode )
                                    {
                                      FsmVariables = PlayMakerFSM__get_FsmVariables(v84, 0LL);
                                      if ( !FsmVariables )
                                        goto LABEL_394;
                                      FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                                                               FsmVariables,
                                                                                               (System_String_o *)StringLiteral_11297/*"Rank"*/,
                                                                                               0LL);
                                      if ( v192 )
                                      {
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v235 = Item == 2 ? 2 : 1;
                                        LODWORD(FsmVariables->fields.vector3Variables) = v235;
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_effect;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v236 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        NodeFromName = TransformHelper__getNodeFromName(
                                                         v236,
                                                         *(System_String_o **)(v76 + 24),
                                                         1,
                                                         0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, Item - 1, v238);
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v239 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v240 = TransformHelper__getNodeFromName(
                                                 v239,
                                                 *(System_String_o **)(v76 + 32),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v240, Item - 1, v241);
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v242 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v243 = TransformHelper__getNodeFromName(v242, *v374, 1, 0LL);
                                        v245 = this;
                                        v246 = Item - 1;
                                      }
                                      else
                                      {
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        LODWORD(FsmVariables->fields.vector3Variables) = 0;
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_effect;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v261 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v243 = TransformHelper__getNodeFromName(v261, *v374, 1, 0LL);
                                        v245 = this;
                                        v246 = Item;
                                      }
                                      SummonEffectComponent__ChangeClassCardColor(v245, v243, v246, v244);
                                      FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                      if ( FsmVariables )
                                      {
                                        v262 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v263 = TransformHelper__getNodeFromName(
                                                 v262,
                                                 *(System_String_o **)(v76 + 40),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v263, Item, v264);
                                        SummonEffectComponent__CompleteCallback(this, v265);
                                        return;
                                      }
LABEL_394:
                                      sub_B0D97C(FsmVariables);
                                    }
                                    if ( *(_DWORD *)(v76 + 56) == 3 )
                                    {
                                      Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(
                                                                                    v84,
                                                                                    0LL);
                                      if ( Component_WebViewObject )
                                      {
                                        Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                                                      (System_String_o *)StringLiteral_11297/*"Rank"*/,
                                                                                      0LL);
                                        if ( Component_WebViewObject )
                                        {
                                          LODWORD(Component_WebViewObject[1].klass) = 3;
                                          v382 = key;
                                          Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                        v229,
                                                                                        0LL);
                                          if ( Component_WebViewObject )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)Component_WebViewObject,
                                              1,
                                              0LL);
                                            v247 = System_Int32__ToString((int32_t)&v382, 0LL);
                                            v248 = System_String__Concat_43852188(
                                                     (System_String_o *)StringLiteral_21773/*"rarity"*/,
                                                     v247,
                                                     (System_String_o *)StringLiteral_15953/*"_0"*/,
                                                     0LL);
                                            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !AtlasManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                            }
                                            AtlasManager__SetCharaGraphaOption((UISprite_o *)v229, v248, 0LL);
                                            ((void (__fastcall *)(UnityEngine_Component_o *, void *))v229->klass[2]._1.typeMetadataHandle)(
                                              v229,
                                              v229->klass[2]._1.interopData);
                                            Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                          v231,
                                                                                          0LL);
                                            if ( Component_WebViewObject )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)Component_WebViewObject,
                                                1,
                                                0LL);
                                              v249 = System_Int32__ToString((int32_t)&v382, 0LL);
                                              v250 = System_String__Concat_43852188(
                                                       (System_String_o *)StringLiteral_21773/*"rarity"*/,
                                                       v249,
                                                       (System_String_o *)StringLiteral_15953/*"_0"*/,
                                                       0LL);
                                              AtlasManager__SetCharaGraphaOption((UISprite_o *)v231, v250, 0LL);
                                              ((void (__fastcall *)(UnityEngine_Component_o *, void *))v231->klass[2]._1.typeMetadataHandle)(
                                                v231,
                                                v231->klass[2]._1.interopData);
                                              Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                            v229,
                                                                                            0LL);
                                              if ( Component_WebViewObject )
                                              {
                                                v385.fields.x = 0.0;
                                                v385.fields.z = 0.0;
                                                v385.fields.y = 216.81;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)Component_WebViewObject,
                                                  v385,
                                                  0LL);
                                                Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                              v229,
                                                                                              0LL);
                                                if ( Component_WebViewObject )
                                                {
                                                  v386.fields.x = v145;
                                                  v386.fields.y = v145;
                                                  v386.fields.z = v145;
                                                  UnityEngine_Transform__set_localScale(
                                                    (UnityEngine_Transform_o *)Component_WebViewObject,
                                                    v386,
                                                    0LL);
                                                  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                                v231,
                                                                                                0LL);
                                                  if ( Component_WebViewObject )
                                                  {
                                                    v387.fields.x = 0.0;
                                                    v387.fields.z = 0.0;
                                                    v387.fields.y = 216.81;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)Component_WebViewObject,
                                                      v387,
                                                      0LL);
                                                    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                                  v231,
                                                                                                  0LL);
                                                    if ( Component_WebViewObject )
                                                    {
                                                      v388.fields.x = v145;
                                                      v388.fields.y = v145;
                                                      v388.fields.z = v145;
                                                      UnityEngine_Transform__set_localScale(
                                                        (UnityEngine_Transform_o *)Component_WebViewObject,
                                                        v388,
                                                        0LL);
                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                      if ( Component_WebViewObject )
                                                      {
                                                        Component_WebViewObject = (PlayMakerFSM_o *)DesignCardManager__GetCommanCodeCardPath((DesignCardManager_o *)Component_WebViewObject, 1, key, 0LL);
                                                        if ( *p_releaseAssetPath )
                                                        {
                                                          v251 = (System_String_o *)Component_WebViewObject;
                                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                            (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
                                                            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
                                                          v254 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v252, v253);
                                                          AssetLoader_LoadEndDataHandler___ctor(
                                                            v254,
                                                            (Il2CppObject *)v76,
                                                            Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
                                                            0LL);
                                                          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                            && !AssetManager_TypeInfo->_2.cctor_finished )
                                                          {
                                                            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                          }
                                                          AssetManager__loadAssetStorage(v251, v254, 1, 0LL);
                                                          Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                          if ( Component_WebViewObject )
                                                          {
                                                            Component_WebViewObject = (PlayMakerFSM_o *)DesignCardManager__GetCommanCodeCardPath((DesignCardManager_o *)Component_WebViewObject, 101, key, 0LL);
                                                            if ( *p_releaseAssetPath )
                                                            {
                                                              v255 = (System_String_o *)Component_WebViewObject;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
                                                                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v258 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v256, v257);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v258,
                                                                (Il2CppObject *)v76,
                                                                Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
                                                                0LL);
LABEL_189:
                                                              v259 = v255;
                                                              v260 = v258;
LABEL_358:
                                                              AssetManager__loadAssetStorage(v259, v260, 1, 0LL);
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
                                      v266 = sub_B0D974(
                                               SummonEffectComponent___c__DisplayClass45_1_TypeInfo,
                                               v232,
                                               v233);
                                      SummonEffectComponent___c__DisplayClass45_1___ctor(
                                        (SummonEffectComponent___c__DisplayClass45_1_o *)v266,
                                        0LL);
                                      if ( v266 )
                                      {
                                        *(_QWORD *)(v266 + 24) = v76;
                                        sub_B0D840(
                                          (BattleServantConfConponent_o *)(v266 + 24),
                                          (System_Int32_array **)v76,
                                          v267,
                                          v268,
                                          v269,
                                          v270,
                                          v271,
                                          v272);
                                        Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                        if ( Component_WebViewObject )
                                        {
                                          Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Component_WebViewObject,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
                                          if ( Component_WebViewObject )
                                          {
                                            v273 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Component_WebViewObject,
                                                     svtId,
                                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                                            Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                            if ( Component_WebViewObject )
                                            {
                                              Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Component_WebViewObject,
                                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                                              if ( Component_WebViewObject )
                                              {
                                                ServantLimitMaster__GetEntity(
                                                  (ServantLimitMaster_o *)Component_WebViewObject,
                                                  svtId,
                                                  limitCount,
                                                  0LL);
                                                Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                                if ( Component_WebViewObject )
                                                {
                                                  Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Component_WebViewObject,
                                                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
                                                  if ( v273 )
                                                  {
                                                    if ( Component_WebViewObject )
                                                    {
                                                      Component_WebViewObject = (PlayMakerFSM_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Component_WebViewObject,
                                                                                                    v273->fields.startType,
                                                                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
                                                      if ( Component_WebViewObject )
                                                      {
                                                        v276 = *(_DWORD *)&Component_WebViewObject->fields.eventHandlerComponentsAdded;
                                                        if ( v371 != -1 )
                                                          v276 = v371;
                                                        *(_DWORD *)(v266 + 16) = v276;
                                                        if ( v370 == -1 )
                                                          v277 = key;
                                                        else
                                                          v277 = v370;
                                                        if ( v192 )
                                                        {
                                                          v278 = sub_B0D974(
                                                                   SummonEffectComponent___c__DisplayClass45_2_TypeInfo,
                                                                   v274,
                                                                   v275);
                                                          SummonEffectComponent___c__DisplayClass45_2___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_2_o *)v278,
                                                            0LL);
                                                          if ( v278 )
                                                          {
                                                            *(_QWORD *)(v278 + 24) = v266;
                                                            v285 = (Il2CppObject **)(v278 + 24);
                                                            sub_B0D840(
                                                              (BattleServantConfConponent_o *)(v278 + 24),
                                                              (System_Int32_array **)v266,
                                                              v279,
                                                              v280,
                                                              v281,
                                                              v282,
                                                              v283,
                                                              v284);
                                                            if ( *(_QWORD *)(v278 + 24) )
                                                            {
                                                              *(_DWORD *)(v278 + 16) = *(_DWORD *)(*(_QWORD *)(v278 + 24)
                                                                                                 + 16LL);
                                                              if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !Rarity_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                                                              }
                                                              LowerColorRarity = Rarity__getLowerColorRarity(v277, 0LL);
                                                              if ( v372 != -1 )
                                                                *(_DWORD *)(v278 + 16) = v372;
                                                              v287 = v369 == -1 ? LowerColorRarity : v369;
                                                              Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
                                                              if ( Component_WebViewObject )
                                                              {
                                                                Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt((HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject, (System_String_o *)StringLiteral_11297/*"Rank"*/, 0LL);
                                                                if ( v188 == -1 )
                                                                {
                                                                  if ( !Component_WebViewObject )
                                                                    goto LABEL_393;
                                                                  v188 = Item == 2 ? 2 : 1;
                                                                }
                                                                else if ( !Component_WebViewObject )
                                                                {
                                                                  goto LABEL_393;
                                                                }
                                                                LODWORD(Component_WebViewObject[1].klass) = v188;
                                                                Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !Component_WebViewObject )
                                                                  goto LABEL_393;
                                                                DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                   (DesignCardManager_o *)Component_WebViewObject,
                                                                                   *(_DWORD *)(v278 + 16),
                                                                                   v287,
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
                                                                  *(_DWORD *)(v278 + 16) = 1;
                                                                  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( !Component_WebViewObject )
                                                                    goto LABEL_393;
                                                                  v287 = 3;
                                                                  DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                     (DesignCardManager_o *)Component_WebViewObject,
                                                                                     *(_DWORD *)(v278 + 16),
                                                                                     3,
                                                                                     0LL);
                                                                }
                                                                Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                if ( *p_releaseAssetPath )
                                                                {
                                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                    (EventMissionProgressRequest_Argument_ProgressData_o *)DesignCardPath,
                                                                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
                                                                  v356 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v354, v355);
                                                                  AssetLoader_LoadEndDataHandler___ctor(
                                                                    v356,
                                                                    (Il2CppObject *)v278,
                                                                    Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
                                                                    0LL);
                                                                  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                    && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                  {
                                                                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                  }
                                                                  AssetManager__loadAssetStorage(
                                                                    DesignCardPath,
                                                                    v356,
                                                                    1,
                                                                    0LL);
                                                                  *(_DWORD *)(v278 + 20) = ConstantMaster__getValue(
                                                                                             (System_String_o *)StringLiteral_2362/*"BACKSIDE_CLASS_IMAGE_ID"*/,
                                                                                             0LL);
                                                                  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( Component_WebViewObject )
                                                                  {
                                                                    v357 = DesignCardManager__GetDesignCardPath(
                                                                             (DesignCardManager_o *)Component_WebViewObject,
                                                                             *(_DWORD *)(v278 + 20),
                                                                             v287,
                                                                             0LL);
                                                                    if ( !AssetManager__isExistAssetStorage(v357, 0LL) )
                                                                    {
                                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( !Component_WebViewObject )
                                                                        goto LABEL_393;
                                                                      v357 = DesignCardManager__GetDesignCardPath(
                                                                               (DesignCardManager_o *)Component_WebViewObject,
                                                                               *(_DWORD *)(v278 + 20),
                                                                               3,
                                                                               0LL);
                                                                    }
                                                                    Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                    if ( *p_releaseAssetPath )
                                                                    {
                                                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                        (EventMissionProgressRequest_Argument_ProgressData_o *)v357,
                                                                        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
                                                                      v360 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v358, v359);
                                                                      AssetLoader_LoadEndDataHandler___ctor(
                                                                        v360,
                                                                        (Il2CppObject *)v278,
                                                                        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
                                                                        0LL);
                                                                      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                        && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                      {
                                                                        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                      }
                                                                      AssetManager__loadAssetStorage(v357, v360, 1, 0LL);
                                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( *v285 )
                                                                      {
                                                                        if ( Component_WebViewObject )
                                                                        {
                                                                          v255 = DesignCardManager__GetDesignCardPath(
                                                                                   (DesignCardManager_o *)Component_WebViewObject,
                                                                                   (int32_t)(*v285)[1].klass,
                                                                                   v277,
                                                                                   0LL);
                                                                          Component_WebViewObject = (PlayMakerFSM_o *)AssetManager__isExistAssetStorage(v255, 0LL);
                                                                          if ( ((unsigned __int8)Component_WebViewObject & 1) == 0 )
                                                                          {
                                                                            if ( !*v285 )
                                                                              goto LABEL_393;
                                                                            LODWORD((*v285)[1].klass) = 1;
                                                                            Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                            if ( !*v285 || !Component_WebViewObject )
                                                                              goto LABEL_393;
                                                                            v255 = DesignCardManager__GetDesignCardPath(
                                                                                     (DesignCardManager_o *)Component_WebViewObject,
                                                                                     (int32_t)(*v285)[1].klass,
                                                                                     3,
                                                                                     0LL);
                                                                          }
                                                                          Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                          if ( *p_releaseAssetPath )
                                                                          {
                                                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v255,
                                                                              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
                                                                            v361 = *v285;
                                                                            v258 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v362, v363);
                                                                            AssetLoader_LoadEndDataHandler___ctor(
                                                                              v258,
                                                                              v361,
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
                                                          v332 = sub_B0D974(
                                                                   SummonEffectComponent___c__DisplayClass45_3_TypeInfo,
                                                                   v274,
                                                                   v275);
                                                          SummonEffectComponent___c__DisplayClass45_3___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_3_o *)v332,
                                                            0LL);
                                                          if ( v332 )
                                                          {
                                                            *(_QWORD *)(v332 + 24) = v266;
                                                            v339 = (Il2CppObject **)(v332 + 24);
                                                            sub_B0D840(
                                                              (BattleServantConfConponent_o *)(v332 + 24),
                                                              (System_Int32_array **)v266,
                                                              v333,
                                                              v334,
                                                              v335,
                                                              v336,
                                                              v337,
                                                              v338);
                                                            Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
                                                            if ( Component_WebViewObject )
                                                            {
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt((HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject, (System_String_o *)StringLiteral_11297/*"Rank"*/, 0LL);
                                                              if ( !FsmVariables )
                                                                goto LABEL_394;
                                                              v340 = v188 == -1 ? 0 : v188;
                                                              LODWORD(FsmVariables->fields.vector3Variables) = v340;
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !*v339 || !FsmVariables )
                                                                goto LABEL_394;
                                                              v341 = DesignCardManager__GetDesignCardPath(
                                                                       (DesignCardManager_o *)FsmVariables,
                                                                       (int32_t)(*v339)[1].klass,
                                                                       v277,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)AssetManager__isExistAssetStorage(v341, 0LL);
                                                              if ( ((unsigned __int8)FsmVariables & 1) == 0 )
                                                              {
                                                                if ( !*v339 )
                                                                  goto LABEL_394;
                                                                LODWORD((*v339)[1].klass) = 1;
                                                                FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !*v339 || !FsmVariables )
                                                                  goto LABEL_394;
                                                                v277 = 3;
                                                                v341 = DesignCardManager__GetDesignCardPath(
                                                                         (DesignCardManager_o *)FsmVariables,
                                                                         (int32_t)(*v339)[1].klass,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_releaseAssetPath;
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)FsmVariables,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v341,
                                                                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v342 = *v339;
                                                              v345 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v343, v344);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v345,
                                                                v342,
                                                                Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)AssetManager__loadAssetStorage(v341, v345, 1, 0LL);
                                                              if ( !*v339 )
                                                                goto LABEL_394;
                                                              monitor = (*v339)[1].monitor;
                                                              if ( !monitor )
                                                                goto LABEL_394;
                                                              v347 = (System_String_o **)(monitor[14] == 1
                                                                                        ? &StringLiteral_2363/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/
                                                                                        : &StringLiteral_2362/*"BACKSIDE_CLASS_IMAGE_ID"*/);
                                                              *(_DWORD *)(v332 + 16) = ConstantMaster__getValue(
                                                                                         *v347,
                                                                                         0LL);
                                                              v348 = (int32_t *)(v332 + 16);
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !FsmVariables )
                                                                goto LABEL_394;
                                                              v349 = DesignCardManager__GetDesignCardPath(
                                                                       (DesignCardManager_o *)FsmVariables,
                                                                       *v348,
                                                                       v277,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              if ( !AssetManager__isExistAssetStorage(v349, 0LL) )
                                                              {
                                                                FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !FsmVariables )
                                                                  goto LABEL_394;
                                                                v349 = DesignCardManager__GetDesignCardPath(
                                                                         (DesignCardManager_o *)FsmVariables,
                                                                         *v348,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_releaseAssetPath;
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)FsmVariables,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v349,
                                                                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v352 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v350, v351);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v352,
                                                                (Il2CppObject *)v332,
                                                                Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              v259 = v349;
                                                              v260 = v352;
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
    sub_B0D97C(Component_WebViewObject);
  }
  if ( IsNewCard )
  {
    this->fields.isNoSkipAll = 1;
    if ( !LODWORD(Component_WebViewObject->fields.fsm) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  }
  v183 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&Component_WebViewObject->fields.m_CachedPtr
                                                                 + 32LL);
  if ( !v183 )
    goto LABEL_393;
  v184 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v183->fields.targetId;
  Component_WebViewObject = (PlayMakerFSM_o *)GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  }
  if ( !v184 )
    goto LABEL_393;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v184,
         (System_Xml_XmlQualifiedName_o *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v185 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v185 = GachaBehaviorMaster_TypeInfo;
    }
    v186 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             v184,
             (System_Type_o *)v185->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v181 = (PlayMakerFSM_o *)v186;
    if ( v186 && (System_String_c *)v186->klass != string_TypeInfo )
      goto LABEL_397;
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Component_WebViewObject,
            (WarBoardManager_TaskList_o *)v181,
            (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
      if ( !Component_WebViewObject )
        goto LABEL_393;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v181,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    }
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
    if ( !Component_WebViewObject )
      goto LABEL_393;
    v187 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Component_WebViewObject,
             (WarBoardManager_TaskList_o *)v181,
             (const MethodInfo_2FC6798 *)Method_System_Collections_Generic_List_string__IndexOf__);
  }
  else
  {
    v187 = -1;
  }
  v288 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v288 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v184,
         (System_Xml_XmlQualifiedName_o *)v288->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v289 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v289 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v184,
                                                  (System_Type_o *)v289->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v290 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v290 = -1;
  }
  v291 = GachaBehaviorMaster_TypeInfo;
  v372 = v290;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v291 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v184,
         (System_Xml_XmlQualifiedName_o *)v291->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v292 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v292 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v184,
                                                  (System_Type_o *)v292->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v293 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v293 = -1;
  }
  v294 = GachaBehaviorMaster_TypeInfo;
  v369 = v293;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v294 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v184,
         (System_Xml_XmlQualifiedName_o *)v294->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v295 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v295 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v184,
                                                  (System_Type_o *)v295->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v296 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v296 = -1;
  }
  v297 = GachaBehaviorMaster_TypeInfo;
  v371 = v296;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v297 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v184,
          (System_Xml_XmlQualifiedName_o *)v297->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v299 = -1;
    goto LABEL_269;
  }
  v298 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v298 = GachaBehaviorMaster_TypeInfo;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v184,
                                                (System_Type_o *)v298->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                                (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
  {
LABEL_395:
    sub_B0DC70(Component_WebViewObject);
    goto LABEL_396;
  }
  v299 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
LABEL_269:
  v300 = GachaBehaviorMaster_TypeInfo;
  v301 = v180;
  v370 = v299;
  if ( v187 != -1 )
    v301 = v372 != -1;
  v368 = v301;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v300 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v184,
         (System_Xml_XmlQualifiedName_o *)v300->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                  (System_String_o *)StringLiteral_9721/*"NoticeRarity"*/,
                                                  0LL);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    LODWORD(Component_WebViewObject[1].klass) = 3;
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
    v302 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v302 )
      goto LABEL_393;
    v303 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v302,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0LL);
    v304 = GachaBehaviorMaster_TypeInfo;
    v181 = (PlayMakerFSM_o *)v303;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v304 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v184,
                                                  (System_Type_o *)v304->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v181 )
      goto LABEL_393;
    v311 = Component_WebViewObject;
    if ( Component_WebViewObject && (System_String_c *)Component_WebViewObject->klass != string_TypeInfo )
      goto LABEL_396;
    v181[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v181[1],
      (System_Int32_array **)Component_WebViewObject,
      v305,
      v306,
      v307,
      v308,
      v309,
      v310);
  }
  v312 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v312 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v184,
          (System_Xml_XmlQualifiedName_o *)v312->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_305:
    v322 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v322 = GachaBehaviorMaster_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v184,
            (System_Xml_XmlQualifiedName_o *)v322->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
            (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v180 = v368;
      v188 = v187;
      goto LABEL_121;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
    v180 = v368;
    v323 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v323 )
      goto LABEL_393;
    v324 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v323,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
             0LL);
    v325 = GachaBehaviorMaster_TypeInfo;
    v181 = (PlayMakerFSM_o *)v324;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v325 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v184,
                                                  (System_Type_o *)v325->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v181 )
      goto LABEL_393;
    v311 = Component_WebViewObject;
    v188 = v187;
    if ( !Component_WebViewObject || (System_String_c *)Component_WebViewObject->klass == string_TypeInfo )
    {
      v181[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v181[1],
        (System_Int32_array **)Component_WebViewObject,
        v326,
        v327,
        v328,
        v329,
        v330,
        v331);
      goto LABEL_121;
    }
    goto LABEL_396;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3906/*"CardType"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = 4;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  v313 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v313 )
    goto LABEL_393;
  v314 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v313,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0LL);
  v315 = GachaBehaviorMaster_TypeInfo;
  v181 = (PlayMakerFSM_o *)v314;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v315 = GachaBehaviorMaster_TypeInfo;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v184,
                                                (System_Type_o *)v315->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                                (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v181 )
    goto LABEL_393;
  v311 = Component_WebViewObject;
  if ( !Component_WebViewObject || (System_String_c *)Component_WebViewObject->klass == string_TypeInfo )
  {
    v181[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v181[1],
      (System_Int32_array **)Component_WebViewObject,
      v316,
      v317,
      v318,
      v319,
      v320,
      v321);
    goto LABEL_305;
  }
LABEL_396:
  sub_B0DC70(v311);
LABEL_397:
  sub_B0DC70(v181);
  SummonEffectComponent__ChangeClassCardColor(v364, v365, v366, v367);
}


void __fastcall SummonEffectComponent___endAnimation_b__43_0(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  PlayMakerFSM_o *Component_WebViewObject; // x0

  if ( (byte_4218488 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_5499/*"END_FADE"*/, v4);
    byte_4218488 = 1;
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
    v7 = (UnityEngine_Object_o *)*p_effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v7, 0LL);
    *p_effect = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v8, v9, v10, v11, v12, v13);
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5499/*"END_FADE"*/, 0LL);
}


void __fastcall SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_421847C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SummonEffectComponent__endAnimation_b__43_0__, v5);
    byte_421847C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v11, 0LL);
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
    sub_B0D97C(0LL);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
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
  UnityEngine_Transform_o *NodeFromName; // x0
  struct SummonEffectComponent_o *v8; // x21
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0
  struct SummonEffectComponent_o *v11; // x8
  struct SummonEffectComponent_o *v12; // x8
  struct SummonEffectComponent_o *v13; // x8
  DesignCardManager_o *v14; // x21
  UnityEngine_Transform_o *v15; // x0

  v4 = this;
  if ( (byte_421174E & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_B0D8A4(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d);
    byte_421174E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardFirstName, 1, 0LL);
  _4__this->fields.firstTr = NodeFromName;
  sub_B0D840(&_4__this->fields.firstTr, NodeFromName);
  v8 = v4->fields.__4__this;
  if ( !v8 )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)v8->fields.effect;
  if ( !this )
    goto LABEL_16;
  v9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v10 = TransformHelper__getNodeFromName(v9, v4->fields.cardFirstPeelName, 1, 0LL);
  v8->fields.firstTPeelr = v10;
  sub_B0D840(&v8->fields.firstTPeelr, v10);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v11->fields.firstTr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v12->fields.firstTPeelr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v13 = v4->fields.__4__this;
  if ( !v13
    || (v14 = (DesignCardManager_o *)this,
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v13->fields.effect) == 0LL)
    || (v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)TransformHelper__getNodeFromName(
                                                                  v15,
                                                                  v4->fields.cardSecondName,
                                                                  1,
                                                                  0LL),
        !v14)
    || (DesignCardManager__SetupCardImage(v14, d, (UnityEngine_Transform_o *)this, 1, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(this);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__4(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  SummonEffectComponent___c__DisplayClass45_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct SummonEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x21
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Shader_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Material_o *v15; // x21
  UnityEngine_Texture_o *v16; // x22

  v4 = this;
  if ( (byte_421174F & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_B0D8A4(&StringLiteral_4534/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v7);
    byte_421174F = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0LL);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)NodeFromName,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4534/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0LL);
  v15 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v13, v14);
  UnityEngine_Material___ctor(v15, v12, 0LL);
  if ( !Component_WebViewObject
    || (v16 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(WebViewObject_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._2_GetHashCode.method)(
                                         Component_WebViewObject,
                                         Component_WebViewObject->klass[1].vtable._3_ToString.methodPtr),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)((__int64 (__fastcall *)(WebViewObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._1_Finalize.method)(
                                                                  Component_WebViewObject,
                                                                  v15,
                                                                  Component_WebViewObject->klass[1].vtable._2_GetHashCode.methodPtr),
        !v15)
    || (UnityEngine_Material__set_mainTexture(v15, v16, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(this);
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
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v8; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v9; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v10; // x8

  if ( (byte_4211750 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_4211750 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v8 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL),
        (v9 = this->fields.CS___8__locals1) == 0LL)
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v9->fields.cardSecondName,
                                                 1,
                                                 0LL),
        !v8)
    || (DesignCardManager__SetupCardImage(v8, d, (UnityEngine_Transform_o *)Instance, this->fields.classCardId, 0LL),
        (v10 = this->fields.CS___8__locals1) == 0LL)
    || (Instance = (UnityEngine_GameObject_o *)v10->fields.__4__this) == 0LL )
  {
LABEL_11:
    sub_B0D97C(Instance);
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
  UnityEngine_Transform_o *NodeFromName; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *v9; // x8
  struct SummonEffectComponent_o *v10; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8
  UnityEngine_Transform_o *v12; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  struct SummonEffectComponent_o *v14; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v15; // x8
  struct SummonEffectComponent_o *v16; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v17; // x8
  struct SummonEffectComponent_o *v18; // x8
  DesignCardManager_o *v19; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v20; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v21; // x8

  v4 = this;
  if ( (byte_4211751 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_B0D8A4(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d);
    byte_4211751 = 1;
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
  NodeFromName = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v7->fields.cardFirstName, 1, 0LL);
  _4__this->fields.firstTr = NodeFromName;
  sub_B0D840(&_4__this->fields.firstTr, NodeFromName);
  v9 = v4->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_25;
  v10 = v9->fields.__4__this;
  if ( !v10 )
    goto LABEL_25;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)v10->fields.effect;
  if ( !this )
    goto LABEL_25;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  v11 = v4->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_25;
  v12 = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v11->fields.cardFirstPeelName, 1, 0LL);
  v10->fields.firstTPeelr = v12;
  sub_B0D840(&v10->fields.firstTPeelr, v12);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v13 = v4->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_25;
  v14 = v13->fields.__4__this;
  if ( !v14 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v14->fields.firstTr, v4->fields.classCardId, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v15 = v4->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_25;
  v16 = v15->fields.__4__this;
  if ( !v16 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage(
    (DesignCardManager_o *)this,
    d,
    v16->fields.firstTPeelr,
    v4->fields.classCardId,
    0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  v18 = v17->fields.__4__this;
  if ( !v18 )
    goto LABEL_25;
  v19 = (DesignCardManager_o *)this;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)v18->fields.effect;
  if ( !this
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL),
        (v20 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)TransformHelper__getNodeFromName(
                                                                  (UnityEngine_Transform_o *)this,
                                                                  v20->fields.cardSecondName,
                                                                  1,
                                                                  0LL),
        !v19)
    || (DesignCardManager__SetupCardImage(v19, d, (UnityEngine_Transform_o *)this, v4->fields.classCardId, 0LL),
        (v21 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)v21->fields.__4__this) == 0LL )
  {
LABEL_25:
    sub_B0D97C(this);
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
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals2; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v9; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v10; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  struct SummonEffectComponent_o *v14; // x8
  DesignCardManager_o *v15; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v16; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v17; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v18; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v19; // x8

  if ( (byte_4211752 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_4211752 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_21;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_21;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  v9 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  v10 = this->fields.CS___8__locals2;
  if ( !v10 )
    goto LABEL_21;
  v11 = v10->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                           (UnityEngine_Transform_o *)Instance,
                                           v11->fields.cardFirstName,
                                           1,
                                           0LL);
  if ( !v9 )
    goto LABEL_21;
  DesignCardManager__SetupCardImage(v9, d, (UnityEngine_Transform_o *)Instance, this->fields.beforeClassCardId, 0LL);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v12 = this->fields.CS___8__locals2;
  if ( !v12 )
    goto LABEL_21;
  v13 = v12->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_21;
  v14 = v13->fields.__4__this;
  if ( !v14 )
    goto LABEL_21;
  v15 = (DesignCardManager_o *)Instance;
  Instance = v14->fields.effect;
  if ( !Instance )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  v16 = this->fields.CS___8__locals2;
  if ( !v16
    || (v17 = v16->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v17->fields.cardFirstPeelName,
                                                 1,
                                                 0LL),
        !v15)
    || (DesignCardManager__SetupCardImage(
          v15,
          d,
          (UnityEngine_Transform_o *)Instance,
          this->fields.beforeClassCardId,
          0LL),
        (v18 = this->fields.CS___8__locals2) == 0LL)
    || (v19 = v18->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)v19->fields.__4__this) == 0LL )
  {
LABEL_21:
    sub_B0D97C(Instance);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_2___UpdateCardTexture_b__6(
        SummonEffectComponent___c__DisplayClass45_2_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals2; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v9; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v10; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8

  if ( (byte_4211753 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_4211753 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_14;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v9 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance )
    goto LABEL_14;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  v10 = this->fields.CS___8__locals2;
  if ( !v10
    || (v11 = v10->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v11->fields.cardRotName,
                                                 1,
                                                 0LL),
        !v9)
    || (DesignCardManager__SetupCardImage(v9, d, (UnityEngine_Transform_o *)Instance, this->fields.classBackId, 0LL),
        (v12 = this->fields.CS___8__locals2) == 0LL)
    || (v13 = v12->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)v13->fields.__4__this) == 0LL )
  {
LABEL_14:
    sub_B0D97C(Instance);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals3; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  UnityEngine_Transform_o *NodeFromName; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v15; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v16; // x8
  SummonEffectComponent___c__DisplayClass45_3_o *v17; // x20
  System_String_o **v18; // x8
  UnityEngine_Shader_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Material_o *v22; // x21
  UnityEngine_Texture_o *v23; // x22
  struct SummonEffectComponent___c__DisplayClass45_1_o *v24; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v25; // x8

  v4 = this;
  if ( (byte_4211754 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_15060/*"Unlit/Transparent Colored"*/, v7);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_B0D8A4(&StringLiteral_4534/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v8);
    byte_4211754 = 1;
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
  v12 = v4->fields.CS___8__locals3;
  if ( !v12 )
    goto LABEL_22;
  v13 = v12->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_22;
  NodeFromName = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v13->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0LL);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v15 = v4->fields.CS___8__locals3;
  if ( !v15 )
    goto LABEL_22;
  v16 = v15->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_22;
  v17 = this;
  v18 = (System_String_o **)(v16->fields.cardType == 1 ? &StringLiteral_4534/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15060/*"Unlit/Transparent Colored"*/);
  v19 = UnityEngine_Shader__Find(*v18, 0LL);
  v22 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v20, v21);
  UnityEngine_Material___ctor(v22, v19, 0LL);
  if ( !v17
    || (v23 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, void *))v17->klass[1].vtable._3_ToString.method)(
                                         v17,
                                         v17->klass[2]._1.image),
        this = (SummonEffectComponent___c__DisplayClass45_3_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v17->klass[1].vtable._2_GetHashCode.method)(
                                                                  v17,
                                                                  v22,
                                                                  v17->klass[1].vtable._3_ToString.methodPtr),
        !v22)
    || (UnityEngine_Material__set_mainTexture(v22, v23, 0LL), (v24 = v4->fields.CS___8__locals3) == 0LL)
    || (v25 = v24->fields.CS___8__locals1) == 0LL
    || (this = (SummonEffectComponent___c__DisplayClass45_3_o *)v25->fields.__4__this) == 0LL )
  {
LABEL_22:
    sub_B0D97C(this);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}