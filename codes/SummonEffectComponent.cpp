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

  if ( (byte_4189AFB & 1) == 0 )
  {
    sub_B2C35C(&SummonEffectComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_22444/*"summon_up_04"*/, v8);
    sub_B2C35C(&StringLiteral_22442/*"summon_up_02"*/, v9);
    sub_B2C35C(&StringLiteral_6937/*"GetAnimationName"*/, v10);
    sub_B2C35C(&StringLiteral_22443/*"summon_up_03"*/, v11);
    sub_B2C35C(&StringLiteral_22441/*"summon_up_01"*/, v12);
    sub_B2C35C(&StringLiteral_11283/*"RarityAnimationName"*/, v13);
    sub_B2C35C(&StringLiteral_15053/*"UpAnimationName"*/, v14);
    sub_B2C35C(&StringLiteral_7622/*"InitializeAnimationName"*/, v15);
    byte_4189AFB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SummonEffectComponent_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_22441/*"summon_up_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22441/*"summon_up_01"*/;
  sub_B2C2F8(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = SummonEffectComponent_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_22442/*"summon_up_02"*/;
  v18->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_22442/*"summon_up_02"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v18->RANKUP_TO_SILVER_ANIMATION, v19, v20, v21, v22, v23, v24, v25);
  v26 = SummonEffectComponent_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_22443/*"summon_up_03"*/;
  v26->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_22443/*"summon_up_03"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->RANKUP_TO_GOLD_ANIMATION, v27, v28, v29, v30, v31, v32, v33);
  v34 = SummonEffectComponent_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_22444/*"summon_up_04"*/;
  v34->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_22444/*"summon_up_04"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->RANKUP_COMMANDCODE_ANIMATION, v35, v36, v37, v38, v39, v40, v41);
  v42 = SummonEffectComponent_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_15053/*"UpAnimationName"*/;
  v42->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15053/*"UpAnimationName"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v42->FSM_VARIABLE_UP_ANIMATION_NAME, v43, v44, v45, v46, v47, v48, v49);
  v50 = SummonEffectComponent_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_7622/*"InitializeAnimationName"*/;
  v50->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7622/*"InitializeAnimationName"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v50->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = SummonEffectComponent_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_11283/*"RarityAnimationName"*/;
  v58->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11283/*"RarityAnimationName"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v58->FSM_VARIABLE_RARITY_ANIMATION_NAME,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = SummonEffectComponent_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_6937/*"GetAnimationName"*/;
  v66->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_6937/*"GetAnimationName"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v66->FSM_VARIABLE_GET_ANIMATION_NAME, v67, v68, v69, v70, v71, v72, v73);
  v74 = SummonEffectComponent_TypeInfo->static_fields;
  v74->rarityToColor = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v74->rarityToColor, 0LL, v75, v76, v77, v78, v79, v80);
}


void __fastcall SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  il2cpp_array_size_t max_length; // w8
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0

  if ( (byte_4189AFA & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4189AFA = 1;
  }
  v4 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = 512, max_length == 1) )
  {
    v20 = sub_B2C460(v4);
    sub_B2C400(v20, 0LL);
  }
  v4->m_Items[2] = 875;
  this->fields.cardTextureSize = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cardTextureSize,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.effAnimName, v13, v14, v15, v16, v17, v18, v19);
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
  __int64 v22; // x1

  if ( (byte_4189AEA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__, *(_QWORD *)&servantId);
    sub_B2C35C(&SummonEffectComponent_SummonInfo_TypeInfo, v18);
    byte_4189AEA = 1;
  }
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = this->fields.SummonInfos;
  }
  v20 = (SummonEffectComponent_SummonInfo_o *)sub_B2C42C(SummonEffectComponent_SummonInfo_TypeInfo);
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
    sub_B2C434(v21, v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SummonInfos,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
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
  if ( (byte_4189AF3 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, cardNode);
    byte_4189AF3 = 1;
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
                                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, const char *))this->klass[2]._1.gc_desc)(
                                            this,
                                            v8,
                                            this->klass[2]._1.name),
        (cardTextureSize = v6->fields.cardTextureSize) == 0LL) )
  {
LABEL_10:
    sub_B2C434(this, cardNode);
  }
  if ( cardTextureSize->max_length <= 1 )
  {
LABEL_11:
    v15 = sub_B2C460(this);
    sub_B2C400(v15, 0LL);
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
  __int64 v7; // x1

  if ( (byte_4189AF4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B2C35C(&StringLiteral_12063/*"SETUP_DONE"*/, v3);
    byte_4189AF4 = 1;
  }
  counterMax = this->fields._counterMax;
  v5 = this->fields._counter + 1;
  this->fields._counter = v5;
  if ( v5 >= counterMax )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B2C434(0LL, v7);
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_12063/*"SETUP_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19

  if ( (byte_4189AEC & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4189AEC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v5 )
    sub_B2C434(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  __int64 v21; // x1
  PlayMakerFSM_o *v22; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x8
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x21
  _BOOL8 v40; // x0
  __int64 v41; // x1
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v43; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  AssetLoader_LoadEndDataHandler_o *v46; // x22
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4189AED & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__, v11);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&Method_SummonEffectComponent_OnCharaGraphLoadDone__, v15);
    sub_B2C35C(&SummonEffectComponent_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_8179/*"IsNoSkip"*/, v17);
    sub_B2C35C(&StringLiteral_17720/*"countMax"*/, v18);
    sub_B2C35C(&StringLiteral_13158/*"SummonEffectAnimation"*/, v19);
    byte_4189AED = 1;
  }
  memset(&v48, 0, sizeof(v48));
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  v22 = (PlayMakerFSM_o *)Component_WebViewObject;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_17720/*"countMax"*/,
                              0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_32;
  if ( !Component_WebViewObject )
    goto LABEL_32;
  *((_DWORD *)Component_WebViewObject + 14) = SummonInfos->fields._size;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v22, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8179/*"IsNoSkip"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  *((_BYTE *)Component_WebViewObject + 56) = this->fields.isNoSkip;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v22, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_13158/*"SummonEffectAnimation"*/,
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
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.effAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.upAnimationNameList,
    (System_Int32_array **)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  Component_WebViewObject = *p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  Component_WebViewObject = *p_upAnimationNameList;
  if ( !*p_upAnimationNameList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__),
        (Component_WebViewObject = *p_upAnimationNameList) == 0LL)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__),
        (Component_WebViewObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_WebViewObject, 1, 0LL),
        (Component_WebViewObject = this->fields.SummonInfos) == 0LL) )
  {
LABEL_32:
    sub_B2C434(Component_WebViewObject, v21);
  }
  this->fields.DownloadCounter = *((_DWORD *)Component_WebViewObject + 6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Component_WebViewObject,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v40 )
      break;
    if ( !v48.fields.current )
      sub_B2C434(v40, v41);
    klass = (int32_t)v48.fields.current[1].klass;
    if ( HIDWORD(v48.fields.current[2].klass) == 3 )
    {
      v43 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v43,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadCommandAsset(klass, v43, 0LL);
    }
    else
    {
      klass_high = HIDWORD(v48.fields.current[1].klass);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0LL);
      v46 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v46,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v46, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void __fastcall SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4189AE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo, v3);
    byte_4189AE9 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.SummonInfos,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v8; // x1

  if ( (byte_4189AEE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, loadData);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_7295/*"INIT_DONE"*/, v5);
    byte_4189AEE = 1;
  }
  v6 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v6;
  if ( !v6 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0LL),
          (Instance = (CommonUI_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0LL) )
    {
      sub_B2C434(Instance, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7295/*"INIT_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v5; // x1

  if ( (byte_4189AF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B2C35C(&StringLiteral_5717/*"EVENT_SKIP"*/, v3);
    byte_4189AF9 = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B2C434(0LL, v5);
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5717/*"EVENT_SKIP"*/, 0LL);
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
  __int64 v10; // x1
  struct System_Collections_Generic_List_string__o *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189AEF & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_4189AEF = 1;
  }
  memset(&v12, 0, sizeof(v12));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseAssetPath,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v12.fields.current;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v11 = this->fields._releaseAssetPath;
    if ( !v11 )
      sub_B2C434(0LL, v10);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
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
  __int64 v8; // x1
  PlayMakerFSM_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x22
  int size; // w8
  __int64 items; // x8
  struct System_String_o *v19; // x1
  HutongGames_PlayMaker_FsmVariables_o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **effAnimName; // x1

  if ( (byte_4189AF5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v4);
    sub_B2C35C(&SummonEffectComponent_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_11270/*"Rank"*/, v6);
    byte_4189AF5 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject
    || (v9 = (PlayMakerFSM_o *)Component_WebViewObject,
        (Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL)) == 0LL)
    || (Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                    (System_String_o *)StringLiteral_11270/*"Rank"*/,
                                    0LL)) == 0LL )
  {
LABEL_22:
    sub_B2C434(Component_WebViewObject, v8);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      items = (__int64)upAnimationNameList->fields._items + 8 * (int)Component_WebViewObject;
      goto LABEL_16;
    }
  }
  if ( !upAnimationNameList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  items = (__int64)upAnimationNameList->fields._items;
LABEL_16:
  v19 = *(struct System_String_o **)(items + 32);
  this->fields.effAnimName = v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.effAnimName,
    (System_Int32_array **)v19,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v9, 0LL);
  v20 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v20 )
    goto LABEL_22;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              v20,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  effAnimName = (System_Int32_array **)this->fields.effAnimName;
  *((_QWORD *)Component_WebViewObject + 7) = effAnimName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56),
    effAnimName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall SummonEffectComponent__SetUpInitializeAnimation(
        SummonEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v6; // x1
  PlayMakerFSM_o *v7; // x19
  HutongGames_PlayMaker_FsmVariables_o *v8; // x20
  System_String_o *Value; // x0

  if ( (byte_4189AF6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B2C35C(&SummonEffectComponent_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_7288/*"INITIALIZE_ANIMATION"*/, v4);
    byte_4189AF6 = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_11;
  v7 = Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  v8 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v8
    || (Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                      v8,
                                                      SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                                      0LL)) == 0LL )
  {
LABEL_11:
    sub_B2C434(Component_WebViewObject, v6);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) )
    PlayMakerFSM__SendEvent(v7, (System_String_o *)StringLiteral_7288/*"INITIALIZE_ANIMATION"*/, 0LL);
}


void __fastcall SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  SummonEffectComponent_c *v5; // x0
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  SummonEffectComponent_c *v15; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_4189AEB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__,
      method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__, v2);
    sub_B2C35C(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo, v3);
    sub_B2C35C(&SummonEffectComponent_TypeInfo, v4);
    byte_4189AEB = 1;
  }
  v5 = SummonEffectComponent_TypeInfo;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v5 = SummonEffectComponent_TypeInfo;
  }
  if ( !v5->static_fields->rarityToColor )
  {
    v6 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B2C42C(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
      v6,
      (const MethodInfo_2E76880 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v6 )
      sub_B2C434(v7, v8);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v6,
      0,
      0,
      (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v6,
      1,
      0,
      (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v6,
      2,
      0,
      (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v6,
      3,
      1,
      (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v6,
      4,
      2,
      (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v6,
      5,
      2,
      (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v6,
      101,
      0,
      (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v6,
      102,
      0,
      (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v15 = SummonEffectComponent_TypeInfo;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v15 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v15->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v6;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&static_fields->rarityToColor,
      (System_Int32_array **)v6,
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
  __int64 v7; // x1
  HutongGames_PlayMaker_FsmVariables_o *v8; // x20
  System_String_o *Value; // x0
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v11; // x20
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0

  if ( (byte_4189AF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&SummonEffectComponent_TypeInfo, v5);
    byte_4189AF8 = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_25;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  v8 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v8 )
    goto LABEL_25;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                v8,
                                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v11 = Value;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0LL, 0LL) && !System_String__IsNullOrEmpty(v11, 0LL) )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.effAnimation;
    if ( Component_WebViewObject )
    {
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)Component_WebViewObject, v11, 0LL) )
        return;
      Component_WebViewObject = (PlayMakerFSM_o *)this->fields.effAnimation;
      if ( Component_WebViewObject )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)Component_WebViewObject,
                                                   v11,
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
    sub_B2C434(Component_WebViewObject, v7);
  }
}


void __fastcall SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *effAnimation; // x20
  __int64 v5; // x1
  UnityEngine_Animation_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v10; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x0

  if ( (byte_4189AF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____67394992, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4189AF7 = 1;
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
    sub_B2C434(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v5);
  }
LABEL_15:
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = this->fields.effAnimation;
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_29;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         (UnityEngine_Component_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                         1,
                                                                                         (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____67394992);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_29;
  klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
  v10 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
      {
        v13 = sub_B2C460(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B2C400(v13, 0LL);
      }
      v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(
                                                                                             v12,
                                                                                             0LL,
                                                                                             0LL);
      if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_29;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)v12,
                                                                                               0LL);
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
          0,
          0LL);
      }
      LODWORD(klass) = v10[1].klass;
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
  __int64 v16; // x1
  PlayMakerFSM_o *v17; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x22
  SummonEffectComponent_SummonInfo_o *v19; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v20; // x22
  int32_t ServantId; // w28
  SummonEffectComponent_SummonInfo_o *v22; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v23; // x22
  int32_t LimitCount; // w27
  SummonEffectComponent_SummonInfo_o *v25; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v26; // x22
  bool IsRankUp; // w26
  SummonEffectComponent_SummonInfo_o *v28; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v29; // x22
  _BOOL4 IsNewCard; // w24
  SummonEffectComponent_SummonInfo_o *v31; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v32; // x22
  SummonEffectComponent_SummonInfo_o *v33; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v34; // x25
  int32_t Rarity; // w22
  SummonEffectComponent_SummonInfo_o *v36; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v37; // x24
  int32_t CardType; // w25
  SummonEffectComponent_SummonInfo_o *v39; // x8
  bool IsSkipStop; // w21
  HutongGames_PlayMaker_FsmVariables_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int v60; // w21
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20
  _BOOL4 v63; // [xsp+8h] [xbp-58h]
  int32_t NoticeRarity; // [xsp+Ch] [xbp-54h]

  if ( (byte_4189AF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&SummonEffectComponent_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8178/*"IsNewCard"*/, v6);
    sub_B2C35C(&StringLiteral_17719/*"countIndex"*/, v7);
    sub_B2C35C(&StringLiteral_8191/*"IsRankUp"*/, v8);
    sub_B2C35C(&StringLiteral_8195/*"IsSkipStop"*/, v9);
    sub_B2C35C(&StringLiteral_8522/*"LimitCount"*/, v10);
    sub_B2C35C(&StringLiteral_9697/*"NoticeRarity"*/, v11);
    sub_B2C35C(&StringLiteral_3893/*"CardType"*/, v12);
    sub_B2C35C(&StringLiteral_11281/*"Rarity"*/, v13);
    sub_B2C35C(&StringLiteral_12717/*"ServantId"*/, v14);
    byte_4189AF1 = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  v17 = (PlayMakerFSM_o *)Component_WebViewObject;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_17719/*"countIndex"*/,
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v19 = SummonInfos->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v19 )
    goto LABEL_82;
  v20 = this->fields.SummonInfos;
  if ( !v20 )
    goto LABEL_82;
  ServantId = v19->fields.ServantId;
  if ( v20->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v22 = v20->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v22 )
    goto LABEL_82;
  v23 = this->fields.SummonInfos;
  if ( !v23 )
    goto LABEL_82;
  LimitCount = v22->fields.LimitCount;
  if ( v23->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v25 = v23->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v25 )
    goto LABEL_82;
  v26 = this->fields.SummonInfos;
  if ( !v26 )
    goto LABEL_82;
  IsRankUp = v25->fields.IsRankUp;
  if ( v26->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v28 = v26->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v28 )
    goto LABEL_82;
  v29 = this->fields.SummonInfos;
  if ( !v29 )
    goto LABEL_82;
  IsNewCard = v28->fields.IsNewCard;
  if ( v29->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v31 = v29->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v31 )
    goto LABEL_82;
  v32 = this->fields.SummonInfos;
  if ( !v32 )
    goto LABEL_82;
  NoticeRarity = v31->fields.NoticeRarity;
  if ( v32->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v63 = IsNewCard;
  v33 = v32->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v33 )
    goto LABEL_82;
  v34 = this->fields.SummonInfos;
  if ( !v34 )
    goto LABEL_82;
  Rarity = v33->fields.Rarity;
  if ( v34->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v36 = v34->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v36 )
    goto LABEL_82;
  v37 = this->fields.SummonInfos;
  if ( !v37 )
    goto LABEL_82;
  CardType = v36->fields.CardType;
  if ( v37->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v39 = v37->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v39 )
    goto LABEL_82;
  IsSkipStop = v39->fields.IsSkipStop;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_12717/*"ServantId"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = ServantId;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8522/*"LimitCount"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = LimitCount;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8191/*"IsRankUp"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = IsRankUp;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8195/*"IsSkipStop"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = IsSkipStop;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  v41 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v41 )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              v41,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v42, v43, v44, v45, v46, v47);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v48, v49, v50, v51, v52, v53);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v54, v55, v56, v57, v58, v59);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8178/*"IsNewCard"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = v63 || Rarity == 0;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_9697/*"NoticeRarity"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = NoticeRarity;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_3893/*"CardType"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = CardType;
  if ( (unsigned int)(Rarity - 3) >= 3 )
    v60 = Rarity ? 0 : 3;
  else
    v60 = dword_31A3EC4[Rarity - 3];
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_11281/*"Rarity"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = v60;
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
      sub_B2C434(Component_WebViewObject, v16);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
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
  __int64 v75; // x21
  PlayMakerFSM_o *Component_WebViewObject; // x0
  System_String_c *v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  PlayMakerFSM_o *v84; // x23
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x22
  SummonEffectComponent_SummonInfo_o *v86; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v87; // x22
  SummonEffectComponent_SummonInfo_o *v88; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v89; // x22
  SummonEffectComponent_SummonInfo_o *v90; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v91; // x22
  _BOOL4 IsRankUp; // w25
  SummonEffectComponent_SummonInfo_o *v93; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v94; // x22
  _BOOL4 IsNewCard; // w28
  SummonEffectComponent_SummonInfo_o *v96; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v97; // x26
  int32_t NoticeRarity; // w22
  SummonEffectComponent_SummonInfo_o *v99; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v100; // x26
  int Rarity; // w27
  SummonEffectComponent_SummonInfo_o *v102; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v103; // x26
  SummonEffectComponent_SummonInfo_o *v104; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v105; // x27
  bool IsSkipStop; // w26
  SummonEffectComponent_SummonInfo_o *v107; // x8
  int64_t userServantId; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // x19
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  HutongGames_PlayMaker_FsmVariables_o *v116; // x19
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  int v123; // w22
  HutongGames_PlayMaker_FsmVariables_o *v124; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  Il2CppObject *v126; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_String_o *v141; // x22
  float v142; // s8
  System_Int32_array **v143; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x0
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_Int32_array **v157; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **v164; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v172; // x24
  UnityEngine_Transform_o *v173; // x19
  int v174; // s0
  _BOOL4 v177; // w25
  PlayMakerFSM_o *v178; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v179; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v180; // x8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v181; // x22
  GachaBehaviorMaster_c *v182; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v183; // x0
  int32_t v184; // w24
  int v185; // w28
  UnityEngine_Object_o *prevObject; // x19
  struct UnityEngine_GameObject_o **p_prevObject; // x22
  int v188; // w9
  _BOOL4 v189; // w24
  int32_t v190; // w8
  UnityEngine_Object_o *v191; // x19
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  UnityEngine_GameObject_o *gameObject; // x19
  System_Action_o *v199; // x25
  bool v200; // w25
  UnityEngine_GameObject_o *v201; // x19
  UserServantEntity_o *v202; // x25
  int v203; // w27
  System_Action_o *v204; // x28
  System_Action_o *v205; // x3
  System_Action_o *v206; // x25
  UnityEngine_Component_o *v207; // x19
  UnityEngine_Transform_o *v208; // x25
  int v209; // s0
  System_Int32_array **v212; // x0
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  System_String_o *v219; // x22
  System_String_o *v220; // x19
  UnityEngine_Transform_o *v221; // x0
  UnityEngine_Component_o *v222; // x26
  UnityEngine_Transform_o *v223; // x0
  UnityEngine_Component_o *v224; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  __int64 v226; // x1
  int v227; // w8
  UnityEngine_Transform_o *v228; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v230; // x3
  UnityEngine_Transform_o *v231; // x0
  UnityEngine_Transform_o *v232; // x0
  const MethodInfo *v233; // x3
  UnityEngine_Transform_o *v234; // x0
  UnityEngine_Transform_o *v235; // x1
  const MethodInfo *v236; // x3
  SummonEffectComponent_o *v237; // x0
  int32_t v238; // w2
  System_String_o *v239; // x0
  System_String_o *v240; // x19
  System_String_o *v241; // x0
  System_String_o *v242; // x0
  System_String_o *v243; // x19
  AssetLoader_LoadEndDataHandler_o *v244; // x20
  System_String_o *v245; // x19
  AssetLoader_LoadEndDataHandler_o *v246; // x20
  System_String_o *v247; // x0
  AssetLoader_LoadEndDataHandler_o *v248; // x1
  UnityEngine_Transform_o *v249; // x0
  UnityEngine_Transform_o *v250; // x0
  UnityEngine_Transform_o *v251; // x0
  const MethodInfo *v252; // x3
  const MethodInfo *v253; // x1
  __int64 v254; // x22
  System_String_array **v255; // x2
  System_String_array **v256; // x3
  System_Boolean_array **v257; // x4
  System_Int32_array **v258; // x5
  System_Int32_array *v259; // x6
  System_Int32_array *v260; // x7
  WarEntity_o *v261; // x19
  int v262; // w8
  int32_t v263; // w19
  __int64 v264; // x21
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  Il2CppObject **v271; // x20
  int32_t LowerColorRarity; // w0
  int32_t v273; // w22
  GachaBehaviorMaster_c *v274; // x0
  GachaBehaviorMaster_c *v275; // x0
  int v276; // w8
  GachaBehaviorMaster_c *v277; // x0
  GachaBehaviorMaster_c *v278; // x0
  int v279; // w9
  GachaBehaviorMaster_c *v280; // x0
  GachaBehaviorMaster_c *v281; // x0
  int v282; // w8
  GachaBehaviorMaster_c *v283; // x0
  GachaBehaviorMaster_c *v284; // x0
  int v285; // w8
  GachaBehaviorMaster_c *v286; // x0
  _BOOL4 v287; // w10
  HutongGames_PlayMaker_FsmVariables_o *v288; // x19
  HutongGames_PlayMaker_FsmString_o *v289; // x0
  GachaBehaviorMaster_c *v290; // x8
  System_String_array **v291; // x2
  System_String_array **v292; // x3
  System_Boolean_array **v293; // x4
  System_Int32_array **v294; // x5
  System_Int32_array *v295; // x6
  System_Int32_array *v296; // x7
  PlayMakerFSM_o *v297; // x8
  GachaBehaviorMaster_c *v298; // x0
  HutongGames_PlayMaker_FsmVariables_o *v299; // x19
  HutongGames_PlayMaker_FsmString_o *v300; // x0
  GachaBehaviorMaster_c *v301; // x8
  System_String_array **v302; // x2
  System_String_array **v303; // x3
  System_Boolean_array **v304; // x4
  System_Int32_array **v305; // x5
  System_Int32_array *v306; // x6
  System_Int32_array *v307; // x7
  GachaBehaviorMaster_c *v308; // x0
  HutongGames_PlayMaker_FsmVariables_o *v309; // x19
  HutongGames_PlayMaker_FsmString_o *v310; // x0
  GachaBehaviorMaster_c *v311; // x8
  System_String_array **v312; // x2
  System_String_array **v313; // x3
  System_Boolean_array **v314; // x4
  System_Int32_array **v315; // x5
  System_Int32_array *v316; // x6
  System_Int32_array *v317; // x7
  __int64 v318; // x20
  System_String_array **v319; // x2
  System_String_array **v320; // x3
  System_Boolean_array **v321; // x4
  System_Int32_array **v322; // x5
  System_Int32_array *v323; // x6
  System_Int32_array *v324; // x7
  Il2CppObject **v325; // x21
  int v326; // w8
  System_String_o *v327; // x22
  Il2CppObject *v328; // x24
  AssetLoader_LoadEndDataHandler_o *v329; // x23
  _DWORD *monitor; // x8
  System_String_o **v331; // x8
  int32_t *v332; // x21
  System_String_o *v333; // x19
  AssetLoader_LoadEndDataHandler_o *v334; // x21
  System_String_o *DesignCardPath; // x23
  AssetLoader_LoadEndDataHandler_o *v336; // x24
  System_String_o *v337; // x22
  AssetLoader_LoadEndDataHandler_o *v338; // x23
  Il2CppObject *v339; // x21
  SummonEffectComponent_o *v340; // x0
  UnityEngine_Transform_o *v341; // x1
  int32_t v342; // w2
  const MethodInfo *v343; // x3
  _BOOL4 v344; // [xsp+8h] [xbp-D8h]
  int v345; // [xsp+Ch] [xbp-D4h]
  int v346; // [xsp+10h] [xbp-D0h]
  int v347; // [xsp+14h] [xbp-CCh]
  int v348; // [xsp+2Ch] [xbp-B4h]
  int64_t v349; // [xsp+30h] [xbp-B0h]
  System_String_o **v350; // [xsp+38h] [xbp-A8h]
  int32_t Item; // [xsp+4Ch] [xbp-94h]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+50h] [xbp-90h]
  int32_t limitCount; // [xsp+5Ch] [xbp-84h]
  UnityEngine_Component_o *v354; // [xsp+60h] [xbp-80h]
  int key; // [xsp+68h] [xbp-78h]
  int32_t svtId; // [xsp+6Ch] [xbp-74h]
  int v357; // [xsp+70h] [xbp-70h] BYREF
  int v358; // [xsp+74h] [xbp-6Ch] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v360; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v361; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v362; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v363; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v364; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189AF2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&AtlasManager_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v6);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_GachaBehaviorMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v16);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__,
      v17);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v18);
    sub_B2C35C(&GachaBehaviorMaster_TypeInfo, v19);
    sub_B2C35C(&int_TypeInfo, v20);
    sub_B2C35C(&long_TypeInfo, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__IndexOf__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v28);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v29);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v30);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v31);
    sub_B2C35C(&Rarity_TypeInfo, v32);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v33);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_B2C35C(&string_TypeInfo, v35);
    sub_B2C35C(&SummonEffectComponent_TypeInfo, v36);
    sub_B2C35C(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__, v37);
    sub_B2C35C(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__, v38);
    sub_B2C35C(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__, v39);
    sub_B2C35C(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__, v40);
    sub_B2C35C(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__, v41);
    sub_B2C35C(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo, v42);
    sub_B2C35C(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__, v43);
    sub_B2C35C(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__, v44);
    sub_B2C35C(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo, v45);
    sub_B2C35C(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__, v46);
    sub_B2C35C(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__, v47);
    sub_B2C35C(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo, v48);
    sub_B2C35C(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__, v49);
    sub_B2C35C(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo, v50);
    sub_B2C35C(&StringLiteral_3889/*"CardScale"*/, v51);
    sub_B2C35C(&StringLiteral_3890/*"CardSecondName"*/, v52);
    sub_B2C35C(&StringLiteral_3881/*"CardFirstName"*/, v53);
    sub_B2C35C(&StringLiteral_8178/*"IsNewCard"*/, v54);
    sub_B2C35C(&StringLiteral_3888/*"CardRotName"*/, v55);
    sub_B2C35C(&StringLiteral_4113/*"CodeCardRarity02"*/, v56);
    sub_B2C35C(&StringLiteral_2353/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v57);
    sub_B2C35C(&StringLiteral_11270/*"Rank"*/, v58);
    sub_B2C35C(&StringLiteral_17719/*"countIndex"*/, v59);
    sub_B2C35C(&StringLiteral_13156/*"SummonEffect"*/, v60);
    sub_B2C35C(&StringLiteral_21703/*"rarity"*/, v61);
    sub_B2C35C(&StringLiteral_8191/*"IsRankUp"*/, v62);
    sub_B2C35C(&StringLiteral_15906/*"_0"*/, v63);
    sub_B2C35C(&StringLiteral_4112/*"CodeCardRarity"*/, v64);
    sub_B2C35C(&StringLiteral_8195/*"IsSkipStop"*/, v65);
    sub_B2C35C(&StringLiteral_8522/*"LimitCount"*/, v66);
    sub_B2C35C(&StringLiteral_9697/*"NoticeRarity"*/, v67);
    sub_B2C35C(&StringLiteral_2352/*"BACKSIDE_CLASS_IMAGE_ID"*/, v68);
    sub_B2C35C(&StringLiteral_3893/*"CardType"*/, v69);
    sub_B2C35C(&StringLiteral_3887/*"CardNodeName"*/, v70);
    sub_B2C35C(&StringLiteral_3882/*"CardFirstPeelName"*/, v71);
    sub_B2C35C(&StringLiteral_22435/*"summon_rarity_0"*/, v72);
    sub_B2C35C(&StringLiteral_11281/*"Rarity"*/, v73);
    sub_B2C35C(&StringLiteral_12717/*"ServantId"*/, v74);
    byte_4189AF2 = 1;
  }
  entity = 0LL;
  v358 = 0;
  v75 = sub_B2C42C(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  SummonEffectComponent___c__DisplayClass45_0___ctor((SummonEffectComponent___c__DisplayClass45_0_o *)v75, 0LL);
  if ( !v75 )
    goto LABEL_393;
  *(_QWORD *)(v75 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v75 + 16), (System_Int32_array **)this, v78, v79, v80, v81, v82, v83);
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v84 = Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_17719/*"countIndex"*/,
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v86 = SummonInfos->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v86 )
    goto LABEL_393;
  v87 = this->fields.SummonInfos;
  if ( !v87 )
    goto LABEL_393;
  svtId = v86->fields.ServantId;
  if ( v87->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v88 = v87->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v88 )
    goto LABEL_393;
  v89 = this->fields.SummonInfos;
  if ( !v89 )
    goto LABEL_393;
  limitCount = v88->fields.LimitCount;
  if ( v89->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v90 = v89->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v90 )
    goto LABEL_393;
  v91 = this->fields.SummonInfos;
  if ( !v91 )
    goto LABEL_393;
  IsRankUp = v90->fields.IsRankUp;
  if ( v91->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v93 = v91->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v93 )
    goto LABEL_393;
  v94 = this->fields.SummonInfos;
  if ( !v94 )
    goto LABEL_393;
  IsNewCard = v93->fields.IsNewCard;
  if ( v94->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v96 = v94->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v96 )
    goto LABEL_393;
  v97 = this->fields.SummonInfos;
  if ( !v97 )
    goto LABEL_393;
  NoticeRarity = v96->fields.NoticeRarity;
  if ( v97->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v99 = v97->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v99 )
    goto LABEL_393;
  v100 = this->fields.SummonInfos;
  if ( !v100 )
    goto LABEL_393;
  Rarity = v99->fields.Rarity;
  if ( v100->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v102 = v100->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v102 )
    goto LABEL_393;
  *(_DWORD *)(v75 + 56) = v102->fields.CardType;
  v103 = this->fields.SummonInfos;
  if ( !v103 )
    goto LABEL_393;
  if ( v103->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  key = Rarity;
  v104 = v103->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v104 )
    goto LABEL_393;
  v105 = this->fields.SummonInfos;
  if ( !v105 )
    goto LABEL_393;
  IsSkipStop = v104->fields.IsSkipStop;
  if ( v105->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v107 = v105->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v107 )
    goto LABEL_393;
  userServantId = v107->fields.userServantId;
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v77);
  v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v109,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v109;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._releaseAssetPath,
    (System_Int32_array **)v109,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_12717/*"ServantId"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = svtId;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8522/*"LimitCount"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = limitCount;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8191/*"IsRankUp"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsRankUp;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8195/*"IsSkipStop"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsSkipStop;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  v116 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v116 )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                v116,
                                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject[1].klass = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&Component_WebViewObject[1], 0LL, v117, v118, v119, v120, v121, v122);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8178/*"IsNewCard"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsNewCard || key == 0;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_9697/*"NoticeRarity"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = NoticeRarity;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3893/*"CardType"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = *(_DWORD *)(v75 + 56);
  if ( (unsigned int)(key - 3) >= 3 )
    v123 = key ? 0 : 3;
  else
    v123 = dword_31A3EC4[key - 3];
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_11281/*"Rarity"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = v123;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  v124 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v124 )
    goto LABEL_393;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v124,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0LL);
  v357 = v123;
  v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v357);
  Component_WebViewObject = (PlayMakerFSM_o *)System_String__Concat((Il2CppObject *)StringLiteral_22435/*"summon_rarity_0"*/, v126, 0LL);
  if ( !FsmString )
    goto LABEL_393;
  FsmString->fields.value = (struct System_String_o *)Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&FsmString->fields.value,
    (System_Int32_array **)Component_WebViewObject,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v349 = userServantId;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_13156/*"SummonEffect"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)Component_WebViewObject,
            0LL);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)Value,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3887/*"CardNodeName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v141 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3889/*"CardScale"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v142 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3881/*"CardFirstName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v143 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v75 + 24) = v143;
  sub_B2C2F8((BattleServantConfConponent_o *)(v75 + 24), v143, v144, v145, v146, v147, v148, v149);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3882/*"CardFirstPeelName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v150 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v75 + 32) = v150;
  sub_B2C2F8((BattleServantConfConponent_o *)(v75 + 32), v150, v151, v152, v153, v154, v155, v156);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3890/*"CardSecondName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v157 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v75 + 40) = v157;
  sub_B2C2F8((BattleServantConfConponent_o *)(v75 + 40), v157, v158, v159, v160, v161, v162, v163);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3888/*"CardRotName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v164 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v75 + 48) = v164;
  v350 = (System_String_o **)(v75 + 48);
  sub_B2C2F8((BattleServantConfConponent_o *)(v75 + 48), v164, v165, v166, v167, v168, v169, v170);
  Component_WebViewObject = (PlayMakerFSM_o *)*p_effect;
  if ( !*p_effect )
    goto LABEL_393;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v141, 1, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v172 = (UnityEngine_Component_o *)Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Component_WebViewObject,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 0, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v172, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v173 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_WebViewObject, 0LL);
  *(UnityEngine_Vector3_o *)&v174 = UnityEngine_Vector3__get_one(0LL);
  if ( !v173 )
    goto LABEL_393;
  UnityEngine_Transform__set_localScale(v173, *(UnityEngine_Vector3_o *)&v174, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Item = System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
           (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)Component_WebViewObject,
           key,
           (const MethodInfo_2E77364 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Component_WebViewObject,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v177 = IsRankUp && Item != 0;
  Component_WebViewObject = (PlayMakerFSM_o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                (GachaBehaviorMaster_o *)Component_WebViewObject,
                                                this->fields.gachaId,
                                                svtId,
                                                0LL);
  v354 = v172;
  if ( !Component_WebViewObject )
    goto LABEL_120;
  v178 = Component_WebViewObject;
  if ( SLODWORD(Component_WebViewObject->fields.fsm) < 1 )
    goto LABEL_120;
  v179 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&Component_WebViewObject->fields.m_CachedPtr
                                                                 + 32LL);
  if ( !v179 )
    goto LABEL_393;
  if ( !*(_QWORD *)&v179->fields.targetId )
  {
LABEL_120:
    v346 = -1;
    v347 = -1;
    v345 = -1;
    v348 = -1;
    v185 = -1;
LABEL_121:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v177 )
      v188 = 4;
    else
      v188 = 3;
    v189 = v177;
    if ( this->fields.EditMode )
      v190 = 0;
    else
      v190 = v188;
    this->fields._counter = 0;
    this->fields._counterMax = v190;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(prevObject, 0LL, 0LL) )
    {
      v191 = (UnityEngine_Object_o *)*p_prevObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v191, 0LL);
      *p_prevObject = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.prevObject, 0LL, v192, v193, v194, v195, v196, v197);
    }
    if ( *(_DWORD *)(v75 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v354, 0LL);
      v199 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v199,
        (Il2CppObject *)v75,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0LL);
      Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateCommandTexturePrefab(
                                                    gameObject,
                                                    svtId,
                                                    0,
                                                    v199,
                                                    0LL);
    }
    else
    {
      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_WebViewObject )
        goto LABEL_393;
      Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)Component_WebViewObject,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0LL;
      if ( !Component_WebViewObject )
        goto LABEL_393;
      v200 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Component_WebViewObject,
               &entity,
               v349,
               (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v201 = UnityEngine_Component__get_gameObject(v354, 0LL);
      if ( v200 )
      {
        v202 = entity;
        v203 = v185;
        v204 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v204,
          (Il2CppObject *)v75,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0LL);
        v205 = v204;
        v185 = v203;
        p_effect = &this->fields.effect;
        Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_25402380(
                                                      v201,
                                                      v202,
                                                      0,
                                                      v205,
                                                      0LL);
      }
      else
      {
        v206 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v206,
          (Il2CppObject *)v75,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0LL);
        Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab(
                                                      v201,
                                                      svtId,
                                                      limitCount,
                                                      0,
                                                      1,
                                                      0,
                                                      v206,
                                                      0,
                                                      0LL);
      }
    }
    v207 = (UnityEngine_Component_o *)Component_WebViewObject;
    if ( Component_WebViewObject )
    {
      v208 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_WebViewObject, 0LL);
      *(UnityEngine_Vector3_o *)&v209 = UnityEngine_Vector3__get_zero(0LL);
      if ( v208 )
      {
        UnityEngine_Transform__set_localPosition(v208, *(UnityEngine_Vector3_o *)&v209, 0LL);
        Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v207, 0LL);
        if ( Component_WebViewObject )
        {
          v360.fields.x = v142;
          v360.fields.y = v142;
          v360.fields.z = v142;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_WebViewObject, v360, 0LL);
          Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        v354,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
          if ( Component_WebViewObject )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
            v212 = (System_Int32_array **)UnityEngine_Component__get_gameObject(v207, 0LL);
            *p_prevObject = (struct UnityEngine_GameObject_o *)v212;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.prevObject,
              v212,
              v213,
              v214,
              v215,
              v216,
              v217,
              v218);
            Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
            if ( Component_WebViewObject )
            {
              Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                            (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                            (System_String_o *)StringLiteral_4112/*"CodeCardRarity"*/,
                                                            0LL);
              if ( Component_WebViewObject )
              {
                v219 = HutongGames_PlayMaker_FsmString__get_Value(
                         (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                         0LL);
                Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
                if ( Component_WebViewObject )
                {
                  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                                (System_String_o *)StringLiteral_4113/*"CodeCardRarity02"*/,
                                                                0LL);
                  if ( Component_WebViewObject )
                  {
                    Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                                                  0LL);
                    if ( *p_effect )
                    {
                      v220 = (System_String_o *)Component_WebViewObject;
                      v221 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                      Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(v221, v219, 1, 0LL);
                      if ( Component_WebViewObject )
                      {
                        Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                      (UnityEngine_Component_o *)Component_WebViewObject,
                                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                        if ( *p_effect )
                        {
                          v222 = (UnityEngine_Component_o *)Component_WebViewObject;
                          v223 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                          Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(
                                                                        v223,
                                                                        v220,
                                                                        1,
                                                                        0LL);
                          if ( Component_WebViewObject )
                          {
                            Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                          (UnityEngine_Component_o *)Component_WebViewObject,
                                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                            if ( v222 )
                            {
                              v224 = (UnityEngine_Component_o *)Component_WebViewObject;
                              Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                            v222,
                                                                            0LL);
                              if ( Component_WebViewObject )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Component_WebViewObject,
                                  0,
                                  0LL);
                                if ( v224 )
                                {
                                  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                v224,
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
                                                                                               (System_String_o *)StringLiteral_11270/*"Rank"*/,
                                                                                               0LL);
                                      if ( v189 )
                                      {
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v227 = Item == 2 ? 2 : 1;
                                        LODWORD(FsmVariables->fields.vector3Variables) = v227;
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_effect;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v228 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        NodeFromName = TransformHelper__getNodeFromName(
                                                         v228,
                                                         *(System_String_o **)(v75 + 24),
                                                         1,
                                                         0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, Item - 1, v230);
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v231 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v232 = TransformHelper__getNodeFromName(
                                                 v231,
                                                 *(System_String_o **)(v75 + 32),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v232, Item - 1, v233);
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v234 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v235 = TransformHelper__getNodeFromName(v234, *v350, 1, 0LL);
                                        v237 = this;
                                        v238 = Item - 1;
                                      }
                                      else
                                      {
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        LODWORD(FsmVariables->fields.vector3Variables) = 0;
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_effect;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v249 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v235 = TransformHelper__getNodeFromName(v249, *v350, 1, 0LL);
                                        v237 = this;
                                        v238 = Item;
                                      }
                                      SummonEffectComponent__ChangeClassCardColor(v237, v235, v238, v236);
                                      FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                      if ( FsmVariables )
                                      {
                                        v250 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v251 = TransformHelper__getNodeFromName(
                                                 v250,
                                                 *(System_String_o **)(v75 + 40),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v251, Item, v252);
                                        SummonEffectComponent__CompleteCallback(this, v253);
                                        return;
                                      }
LABEL_394:
                                      sub_B2C434(FsmVariables, v226);
                                    }
                                    if ( *(_DWORD *)(v75 + 56) == 3 )
                                    {
                                      Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(
                                                                                    v84,
                                                                                    0LL);
                                      if ( Component_WebViewObject )
                                      {
                                        Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                                                      (System_String_o *)StringLiteral_11270/*"Rank"*/,
                                                                                      0LL);
                                        if ( Component_WebViewObject )
                                        {
                                          LODWORD(Component_WebViewObject[1].klass) = 3;
                                          v358 = key;
                                          Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                        v222,
                                                                                        0LL);
                                          if ( Component_WebViewObject )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)Component_WebViewObject,
                                              1,
                                              0LL);
                                            v239 = System_Int32__ToString((int32_t)&v358, 0LL);
                                            v240 = System_String__Concat_44307816(
                                                     (System_String_o *)StringLiteral_21703/*"rarity"*/,
                                                     v239,
                                                     (System_String_o *)StringLiteral_15906/*"_0"*/,
                                                     0LL);
                                            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !AtlasManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                            }
                                            AtlasManager__SetCharaGraphaOption((UISprite_o *)v222, v240, 0LL);
                                            ((void (__fastcall *)(UnityEngine_Component_o *, void *))v222->klass[2]._1.typeMetadataHandle)(
                                              v222,
                                              v222->klass[2]._1.interopData);
                                            Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                          v224,
                                                                                          0LL);
                                            if ( Component_WebViewObject )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)Component_WebViewObject,
                                                1,
                                                0LL);
                                              v241 = System_Int32__ToString((int32_t)&v358, 0LL);
                                              v242 = System_String__Concat_44307816(
                                                       (System_String_o *)StringLiteral_21703/*"rarity"*/,
                                                       v241,
                                                       (System_String_o *)StringLiteral_15906/*"_0"*/,
                                                       0LL);
                                              AtlasManager__SetCharaGraphaOption((UISprite_o *)v224, v242, 0LL);
                                              ((void (__fastcall *)(UnityEngine_Component_o *, void *))v224->klass[2]._1.typeMetadataHandle)(
                                                v224,
                                                v224->klass[2]._1.interopData);
                                              Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                            v222,
                                                                                            0LL);
                                              if ( Component_WebViewObject )
                                              {
                                                v361.fields.x = 0.0;
                                                v361.fields.z = 0.0;
                                                v361.fields.y = 216.81;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)Component_WebViewObject,
                                                  v361,
                                                  0LL);
                                                Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                              v222,
                                                                                              0LL);
                                                if ( Component_WebViewObject )
                                                {
                                                  v362.fields.x = v142;
                                                  v362.fields.y = v142;
                                                  v362.fields.z = v142;
                                                  UnityEngine_Transform__set_localScale(
                                                    (UnityEngine_Transform_o *)Component_WebViewObject,
                                                    v362,
                                                    0LL);
                                                  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                                v224,
                                                                                                0LL);
                                                  if ( Component_WebViewObject )
                                                  {
                                                    v363.fields.x = 0.0;
                                                    v363.fields.z = 0.0;
                                                    v363.fields.y = 216.81;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)Component_WebViewObject,
                                                      v363,
                                                      0LL);
                                                    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                                  v224,
                                                                                                  0LL);
                                                    if ( Component_WebViewObject )
                                                    {
                                                      v364.fields.x = v142;
                                                      v364.fields.y = v142;
                                                      v364.fields.z = v142;
                                                      UnityEngine_Transform__set_localScale(
                                                        (UnityEngine_Transform_o *)Component_WebViewObject,
                                                        v364,
                                                        0LL);
                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                      if ( Component_WebViewObject )
                                                      {
                                                        Component_WebViewObject = (PlayMakerFSM_o *)DesignCardManager__GetCommanCodeCardPath((DesignCardManager_o *)Component_WebViewObject, 1, key, 0LL);
                                                        if ( *p_releaseAssetPath )
                                                        {
                                                          v243 = (System_String_o *)Component_WebViewObject;
                                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                            (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
                                                            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
                                                          v244 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                          AssetLoader_LoadEndDataHandler___ctor(
                                                            v244,
                                                            (Il2CppObject *)v75,
                                                            Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
                                                            0LL);
                                                          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                            && !AssetManager_TypeInfo->_2.cctor_finished )
                                                          {
                                                            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                          }
                                                          AssetManager__loadAssetStorage(v243, v244, 1, 0LL);
                                                          Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                          if ( Component_WebViewObject )
                                                          {
                                                            Component_WebViewObject = (PlayMakerFSM_o *)DesignCardManager__GetCommanCodeCardPath((DesignCardManager_o *)Component_WebViewObject, 101, key, 0LL);
                                                            if ( *p_releaseAssetPath )
                                                            {
                                                              v245 = (System_String_o *)Component_WebViewObject;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
                                                                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v246 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v246,
                                                                (Il2CppObject *)v75,
                                                                Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
                                                                0LL);
LABEL_189:
                                                              v247 = v245;
                                                              v248 = v246;
LABEL_358:
                                                              AssetManager__loadAssetStorage(v247, v248, 1, 0LL);
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
                                      v254 = sub_B2C42C(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
                                      SummonEffectComponent___c__DisplayClass45_1___ctor(
                                        (SummonEffectComponent___c__DisplayClass45_1_o *)v254,
                                        0LL);
                                      if ( v254 )
                                      {
                                        *(_QWORD *)(v254 + 24) = v75;
                                        sub_B2C2F8(
                                          (BattleServantConfConponent_o *)(v254 + 24),
                                          (System_Int32_array **)v75,
                                          v255,
                                          v256,
                                          v257,
                                          v258,
                                          v259,
                                          v260);
                                        Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                        if ( Component_WebViewObject )
                                        {
                                          Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Component_WebViewObject,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
                                          if ( Component_WebViewObject )
                                          {
                                            v261 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Component_WebViewObject,
                                                     svtId,
                                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                                            Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                            if ( Component_WebViewObject )
                                            {
                                              Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Component_WebViewObject,
                                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                                              if ( Component_WebViewObject )
                                              {
                                                ServantLimitMaster__GetEntity(
                                                  (ServantLimitMaster_o *)Component_WebViewObject,
                                                  svtId,
                                                  limitCount,
                                                  0LL);
                                                Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                                if ( Component_WebViewObject )
                                                {
                                                  Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Component_WebViewObject,
                                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
                                                  if ( v261 )
                                                  {
                                                    if ( Component_WebViewObject )
                                                    {
                                                      Component_WebViewObject = (PlayMakerFSM_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Component_WebViewObject,
                                                                                                    v261->fields.startType,
                                                                                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
                                                      if ( Component_WebViewObject )
                                                      {
                                                        v262 = *(_DWORD *)&Component_WebViewObject->fields.eventHandlerComponentsAdded;
                                                        if ( v347 != -1 )
                                                          v262 = v347;
                                                        *(_DWORD *)(v254 + 16) = v262;
                                                        if ( v346 == -1 )
                                                          v263 = key;
                                                        else
                                                          v263 = v346;
                                                        if ( v189 )
                                                        {
                                                          v264 = sub_B2C42C(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
                                                          SummonEffectComponent___c__DisplayClass45_2___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_2_o *)v264,
                                                            0LL);
                                                          if ( v264 )
                                                          {
                                                            *(_QWORD *)(v264 + 24) = v254;
                                                            v271 = (Il2CppObject **)(v264 + 24);
                                                            sub_B2C2F8(
                                                              (BattleServantConfConponent_o *)(v264 + 24),
                                                              (System_Int32_array **)v254,
                                                              v265,
                                                              v266,
                                                              v267,
                                                              v268,
                                                              v269,
                                                              v270);
                                                            if ( *(_QWORD *)(v264 + 24) )
                                                            {
                                                              *(_DWORD *)(v264 + 16) = *(_DWORD *)(*(_QWORD *)(v264 + 24)
                                                                                                 + 16LL);
                                                              if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !Rarity_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                                                              }
                                                              LowerColorRarity = Rarity__getLowerColorRarity(v263, 0LL);
                                                              if ( v348 != -1 )
                                                                *(_DWORD *)(v264 + 16) = v348;
                                                              v273 = v345 == -1 ? LowerColorRarity : v345;
                                                              Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
                                                              if ( Component_WebViewObject )
                                                              {
                                                                Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt((HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject, (System_String_o *)StringLiteral_11270/*"Rank"*/, 0LL);
                                                                if ( v185 == -1 )
                                                                {
                                                                  if ( !Component_WebViewObject )
                                                                    goto LABEL_393;
                                                                  v185 = Item == 2 ? 2 : 1;
                                                                }
                                                                else if ( !Component_WebViewObject )
                                                                {
                                                                  goto LABEL_393;
                                                                }
                                                                LODWORD(Component_WebViewObject[1].klass) = v185;
                                                                Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !Component_WebViewObject )
                                                                  goto LABEL_393;
                                                                DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                   (DesignCardManager_o *)Component_WebViewObject,
                                                                                   *(_DWORD *)(v264 + 16),
                                                                                   v273,
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
                                                                  *(_DWORD *)(v264 + 16) = 1;
                                                                  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( !Component_WebViewObject )
                                                                    goto LABEL_393;
                                                                  v273 = 3;
                                                                  DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                     (DesignCardManager_o *)Component_WebViewObject,
                                                                                     *(_DWORD *)(v264 + 16),
                                                                                     3,
                                                                                     0LL);
                                                                }
                                                                Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                if ( *p_releaseAssetPath )
                                                                {
                                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                    (EventMissionProgressRequest_Argument_ProgressData_o *)DesignCardPath,
                                                                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
                                                                  v336 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                  AssetLoader_LoadEndDataHandler___ctor(
                                                                    v336,
                                                                    (Il2CppObject *)v264,
                                                                    Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
                                                                    0LL);
                                                                  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                    && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                  {
                                                                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                  }
                                                                  AssetManager__loadAssetStorage(
                                                                    DesignCardPath,
                                                                    v336,
                                                                    1,
                                                                    0LL);
                                                                  *(_DWORD *)(v264 + 20) = ConstantMaster__getValue(
                                                                                             (System_String_o *)StringLiteral_2352/*"BACKSIDE_CLASS_IMAGE_ID"*/,
                                                                                             0LL);
                                                                  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( Component_WebViewObject )
                                                                  {
                                                                    v337 = DesignCardManager__GetDesignCardPath(
                                                                             (DesignCardManager_o *)Component_WebViewObject,
                                                                             *(_DWORD *)(v264 + 20),
                                                                             v273,
                                                                             0LL);
                                                                    if ( !AssetManager__isExistAssetStorage(v337, 0LL) )
                                                                    {
                                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( !Component_WebViewObject )
                                                                        goto LABEL_393;
                                                                      v337 = DesignCardManager__GetDesignCardPath(
                                                                               (DesignCardManager_o *)Component_WebViewObject,
                                                                               *(_DWORD *)(v264 + 20),
                                                                               3,
                                                                               0LL);
                                                                    }
                                                                    Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                    if ( *p_releaseAssetPath )
                                                                    {
                                                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                        (EventMissionProgressRequest_Argument_ProgressData_o *)v337,
                                                                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
                                                                      v338 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                      AssetLoader_LoadEndDataHandler___ctor(
                                                                        v338,
                                                                        (Il2CppObject *)v264,
                                                                        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
                                                                        0LL);
                                                                      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                        && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                      {
                                                                        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                      }
                                                                      AssetManager__loadAssetStorage(v337, v338, 1, 0LL);
                                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( *v271 )
                                                                      {
                                                                        if ( Component_WebViewObject )
                                                                        {
                                                                          v245 = DesignCardManager__GetDesignCardPath(
                                                                                   (DesignCardManager_o *)Component_WebViewObject,
                                                                                   (int32_t)(*v271)[1].klass,
                                                                                   v263,
                                                                                   0LL);
                                                                          Component_WebViewObject = (PlayMakerFSM_o *)AssetManager__isExistAssetStorage(v245, 0LL);
                                                                          if ( ((unsigned __int8)Component_WebViewObject & 1) == 0 )
                                                                          {
                                                                            if ( !*v271 )
                                                                              goto LABEL_393;
                                                                            LODWORD((*v271)[1].klass) = 1;
                                                                            Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                            if ( !*v271 || !Component_WebViewObject )
                                                                              goto LABEL_393;
                                                                            v245 = DesignCardManager__GetDesignCardPath(
                                                                                     (DesignCardManager_o *)Component_WebViewObject,
                                                                                     (int32_t)(*v271)[1].klass,
                                                                                     3,
                                                                                     0LL);
                                                                          }
                                                                          Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                          if ( *p_releaseAssetPath )
                                                                          {
                                                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v245,
                                                                              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
                                                                            v339 = *v271;
                                                                            v246 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                            AssetLoader_LoadEndDataHandler___ctor(
                                                                              v246,
                                                                              v339,
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
                                                          v318 = sub_B2C42C(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
                                                          SummonEffectComponent___c__DisplayClass45_3___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_3_o *)v318,
                                                            0LL);
                                                          if ( v318 )
                                                          {
                                                            *(_QWORD *)(v318 + 24) = v254;
                                                            v325 = (Il2CppObject **)(v318 + 24);
                                                            sub_B2C2F8(
                                                              (BattleServantConfConponent_o *)(v318 + 24),
                                                              (System_Int32_array **)v254,
                                                              v319,
                                                              v320,
                                                              v321,
                                                              v322,
                                                              v323,
                                                              v324);
                                                            Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
                                                            if ( Component_WebViewObject )
                                                            {
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt((HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject, (System_String_o *)StringLiteral_11270/*"Rank"*/, 0LL);
                                                              if ( !FsmVariables )
                                                                goto LABEL_394;
                                                              v326 = v185 == -1 ? 0 : v185;
                                                              LODWORD(FsmVariables->fields.vector3Variables) = v326;
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !*v325 || !FsmVariables )
                                                                goto LABEL_394;
                                                              v327 = DesignCardManager__GetDesignCardPath(
                                                                       (DesignCardManager_o *)FsmVariables,
                                                                       (int32_t)(*v325)[1].klass,
                                                                       v263,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)AssetManager__isExistAssetStorage(v327, 0LL);
                                                              if ( ((unsigned __int8)FsmVariables & 1) == 0 )
                                                              {
                                                                if ( !*v325 )
                                                                  goto LABEL_394;
                                                                LODWORD((*v325)[1].klass) = 1;
                                                                FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !*v325 || !FsmVariables )
                                                                  goto LABEL_394;
                                                                v263 = 3;
                                                                v327 = DesignCardManager__GetDesignCardPath(
                                                                         (DesignCardManager_o *)FsmVariables,
                                                                         (int32_t)(*v325)[1].klass,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_releaseAssetPath;
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)FsmVariables,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v327,
                                                                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v328 = *v325;
                                                              v329 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v329,
                                                                v328,
                                                                Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)AssetManager__loadAssetStorage(v327, v329, 1, 0LL);
                                                              if ( !*v325 )
                                                                goto LABEL_394;
                                                              monitor = (*v325)[1].monitor;
                                                              if ( !monitor )
                                                                goto LABEL_394;
                                                              v331 = (System_String_o **)(monitor[14] == 1
                                                                                        ? &StringLiteral_2353/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/
                                                                                        : &StringLiteral_2352/*"BACKSIDE_CLASS_IMAGE_ID"*/);
                                                              *(_DWORD *)(v318 + 16) = ConstantMaster__getValue(
                                                                                         *v331,
                                                                                         0LL);
                                                              v332 = (int32_t *)(v318 + 16);
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !FsmVariables )
                                                                goto LABEL_394;
                                                              v333 = DesignCardManager__GetDesignCardPath(
                                                                       (DesignCardManager_o *)FsmVariables,
                                                                       *v332,
                                                                       v263,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              if ( !AssetManager__isExistAssetStorage(v333, 0LL) )
                                                              {
                                                                FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !FsmVariables )
                                                                  goto LABEL_394;
                                                                v333 = DesignCardManager__GetDesignCardPath(
                                                                         (DesignCardManager_o *)FsmVariables,
                                                                         *v332,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_releaseAssetPath;
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)FsmVariables,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v333,
                                                                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v334 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v334,
                                                                (Il2CppObject *)v318,
                                                                Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              v247 = v333;
                                                              v248 = v334;
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
    sub_B2C434(Component_WebViewObject, v77);
  }
  if ( IsNewCard )
  {
    this->fields.isNoSkipAll = 1;
    if ( !LODWORD(Component_WebViewObject->fields.fsm) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  }
  v180 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&Component_WebViewObject->fields.m_CachedPtr
                                                                 + 32LL);
  if ( !v180 )
    goto LABEL_393;
  v181 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v180->fields.targetId;
  Component_WebViewObject = (PlayMakerFSM_o *)GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  }
  if ( !v181 )
    goto LABEL_393;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v181,
         (System_Xml_XmlQualifiedName_o *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v182 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v182 = GachaBehaviorMaster_TypeInfo;
    }
    v183 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             v181,
             (System_Type_o *)v182->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v178 = (PlayMakerFSM_o *)v183;
    if ( v183 )
    {
      v77 = string_TypeInfo;
      if ( (System_String_c *)v183->klass != string_TypeInfo )
        goto LABEL_397;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Component_WebViewObject,
            (WarBoardManager_TaskList_o *)v178,
            (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
      if ( !Component_WebViewObject )
        goto LABEL_393;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v178,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    }
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
    if ( !Component_WebViewObject )
      goto LABEL_393;
    v184 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Component_WebViewObject,
             (WarBoardManager_TaskList_o *)v178,
             (const MethodInfo_2EF5510 *)Method_System_Collections_Generic_List_string__IndexOf__);
  }
  else
  {
    v184 = -1;
  }
  v274 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v274 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v181,
         (System_Xml_XmlQualifiedName_o *)v274->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v275 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v275 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v181,
                                                  (System_Type_o *)v275->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v276 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v276 = -1;
  }
  v277 = GachaBehaviorMaster_TypeInfo;
  v348 = v276;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v277 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v181,
         (System_Xml_XmlQualifiedName_o *)v277->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v278 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v278 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v181,
                                                  (System_Type_o *)v278->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v279 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v279 = -1;
  }
  v280 = GachaBehaviorMaster_TypeInfo;
  v345 = v279;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v280 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v181,
         (System_Xml_XmlQualifiedName_o *)v280->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v281 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v281 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v181,
                                                  (System_Type_o *)v281->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v282 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v282 = -1;
  }
  v283 = GachaBehaviorMaster_TypeInfo;
  v347 = v282;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v283 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v181,
          (System_Xml_XmlQualifiedName_o *)v283->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v285 = -1;
    goto LABEL_269;
  }
  v284 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v284 = GachaBehaviorMaster_TypeInfo;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v181,
                                                (System_Type_o *)v284->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                                (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
  {
LABEL_395:
    sub_B2C728(Component_WebViewObject);
    goto LABEL_396;
  }
  v285 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
LABEL_269:
  v286 = GachaBehaviorMaster_TypeInfo;
  v287 = v177;
  v346 = v285;
  if ( v184 != -1 )
    v287 = v348 != -1;
  v344 = v287;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v286 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v181,
         (System_Xml_XmlQualifiedName_o *)v286->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                  (System_String_o *)StringLiteral_9697/*"NoticeRarity"*/,
                                                  0LL);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    LODWORD(Component_WebViewObject[1].klass) = 3;
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
    v288 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v288 )
      goto LABEL_393;
    v289 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v288,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0LL);
    v290 = GachaBehaviorMaster_TypeInfo;
    v178 = (PlayMakerFSM_o *)v289;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v290 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v181,
                                                  (System_Type_o *)v290->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v178 )
      goto LABEL_393;
    v297 = Component_WebViewObject;
    if ( Component_WebViewObject && (System_String_c *)Component_WebViewObject->klass != string_TypeInfo )
      goto LABEL_396;
    v178[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v178[1],
      (System_Int32_array **)Component_WebViewObject,
      v291,
      v292,
      v293,
      v294,
      v295,
      v296);
  }
  v298 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v298 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v181,
          (System_Xml_XmlQualifiedName_o *)v298->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_305:
    v308 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v308 = GachaBehaviorMaster_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v181,
            (System_Xml_XmlQualifiedName_o *)v308->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
            (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v177 = v344;
      v185 = v184;
      goto LABEL_121;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
    v177 = v344;
    v309 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v309 )
      goto LABEL_393;
    v310 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v309,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
             0LL);
    v311 = GachaBehaviorMaster_TypeInfo;
    v178 = (PlayMakerFSM_o *)v310;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v311 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v181,
                                                  (System_Type_o *)v311->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v178 )
      goto LABEL_393;
    v297 = Component_WebViewObject;
    v185 = v184;
    if ( !Component_WebViewObject || (System_String_c *)Component_WebViewObject->klass == string_TypeInfo )
    {
      v178[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v178[1],
        (System_Int32_array **)Component_WebViewObject,
        v312,
        v313,
        v314,
        v315,
        v316,
        v317);
      goto LABEL_121;
    }
    goto LABEL_396;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3893/*"CardType"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = 4;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  v299 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v299 )
    goto LABEL_393;
  v300 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v299,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0LL);
  v301 = GachaBehaviorMaster_TypeInfo;
  v178 = (PlayMakerFSM_o *)v300;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v301 = GachaBehaviorMaster_TypeInfo;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v181,
                                                (System_Type_o *)v301->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                                (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v178 )
    goto LABEL_393;
  v297 = Component_WebViewObject;
  if ( !Component_WebViewObject || (System_String_c *)Component_WebViewObject->klass == string_TypeInfo )
  {
    v178[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v178[1],
      (System_Int32_array **)Component_WebViewObject,
      v302,
      v303,
      v304,
      v305,
      v306,
      v307);
    goto LABEL_305;
  }
LABEL_396:
  sub_B2C728(v297);
LABEL_397:
  v340 = (SummonEffectComponent_o *)sub_B2C728(v178);
  SummonEffectComponent__ChangeClassCardColor(v340, v341, v342, v343);
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
  __int64 v15; // x1

  if ( (byte_4189AFC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_5483/*"END_FADE"*/, v4);
    byte_4189AFC = 1;
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
    UnityEngine_Object__Destroy_35314896(v7, 0LL);
    *p_effect = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v8, v9, v10, v11, v12, v13);
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    sub_B2C434(0LL, v15);
  PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5483/*"END_FADE"*/, 0LL);
}


void __fastcall SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4189AF0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_SummonEffectComponent__endAnimation_b__43_0__, v5);
    byte_4189AF0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v9, 0LL);
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
    sub_B2C434(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
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
  if ( (byte_41847B9 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_B2C35C(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d);
    byte_41847B9 = 1;
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
  sub_B2C2F8(&_4__this->fields.firstTr, NodeFromName);
  v8 = v4->fields.__4__this;
  if ( !v8 )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)v8->fields.effect;
  if ( !this )
    goto LABEL_16;
  v9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v10 = TransformHelper__getNodeFromName(v9, v4->fields.cardFirstPeelName, 1, 0LL);
  v8->fields.firstTPeelr = v10;
  sub_B2C2F8(&v8->fields.firstTPeelr, v10);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v11->fields.firstTr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v12->fields.firstTPeelr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B2C434(this, d);
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
  UnityEngine_Material_o *v13; // x21
  UnityEngine_Texture_o *v14; // x22

  v4 = this;
  if ( (byte_41847BA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_B2C35C(&StringLiteral_4519/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v7);
    byte_41847BA = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0LL);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)NodeFromName,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4519/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v13, v12, 0LL);
  if ( !Component_WebViewObject
    || (v14 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(WebViewObject_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._2_GetHashCode.method)(
                                         Component_WebViewObject,
                                         Component_WebViewObject->klass[1].vtable._3_ToString.methodPtr),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)((__int64 (__fastcall *)(WebViewObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._1_Finalize.method)(
                                                                  Component_WebViewObject,
                                                                  v13,
                                                                  Component_WebViewObject->klass[1].vtable._2_GetHashCode.methodPtr),
        !v13)
    || (UnityEngine_Material__set_mainTexture(v13, v14, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B2C434(this, d);
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

  if ( (byte_41847BB & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_41847BB = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B2C434(Instance, v6);
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
  if ( (byte_41847BC & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_B2C35C(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d);
    byte_41847BC = 1;
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
  sub_B2C2F8(&_4__this->fields.firstTr, NodeFromName);
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
  sub_B2C2F8(&v10->fields.firstTPeelr, v12);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v13 = v4->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_25;
  v14 = v13->fields.__4__this;
  if ( !v14 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v14->fields.firstTr, v4->fields.classCardId, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B2C434(this, d);
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

  if ( (byte_41847BD & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_41847BD = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B2C434(Instance, v6);
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

  if ( (byte_41847BE & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_41847BE = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B2C434(Instance, v6);
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
  UnityEngine_Material_o *v20; // x21
  UnityEngine_Texture_o *v21; // x22
  struct SummonEffectComponent___c__DisplayClass45_1_o *v22; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v23; // x8

  v4 = this;
  if ( (byte_41847BF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_15014/*"Unlit/Transparent Colored"*/, v7);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_B2C35C(&StringLiteral_4519/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v8);
    byte_41847BF = 1;
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
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0LL);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v15 = v4->fields.CS___8__locals3;
  if ( !v15 )
    goto LABEL_22;
  v16 = v15->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_22;
  v17 = this;
  v18 = (System_String_o **)(v16->fields.cardType == 1 ? &StringLiteral_4519/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15014/*"Unlit/Transparent Colored"*/);
  v19 = UnityEngine_Shader__Find(*v18, 0LL);
  v20 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v20, v19, 0LL);
  if ( !v17
    || (v21 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, void *))v17->klass[1].vtable._3_ToString.method)(
                                         v17,
                                         v17->klass[2]._1.image),
        this = (SummonEffectComponent___c__DisplayClass45_3_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v17->klass[1].vtable._2_GetHashCode.method)(
                                                                  v17,
                                                                  v20,
                                                                  v17->klass[1].vtable._3_ToString.methodPtr),
        !v20)
    || (UnityEngine_Material__set_mainTexture(v20, v21, 0LL), (v22 = v4->fields.CS___8__locals3) == 0LL)
    || (v23 = v22->fields.CS___8__locals1) == 0LL
    || (this = (SummonEffectComponent___c__DisplayClass45_3_o *)v23->fields.__4__this) == 0LL )
  {
LABEL_22:
    sub_B2C434(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}