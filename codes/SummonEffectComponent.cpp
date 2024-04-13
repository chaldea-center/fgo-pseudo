void __fastcall SummonEffectComponent___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v33; // x1
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
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct SummonEffectComponent_StaticFields *v82; // x0
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct SummonEffectComponent_StaticFields *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7

  if ( (byte_42EC8F0 & 1) == 0 )
  {
    sub_B5D5C4(&SummonEffectComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_22748/*"summon_up_04"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_22746/*"summon_up_02"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_7020/*"GetAnimationName"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22747/*"summon_up_03"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_22745/*"summon_up_01"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11416/*"RarityAnimationName"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_15211/*"UpAnimationName"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_7706/*"InitializeAnimationName"*/, v29, v30, v31);
    byte_42EC8F0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SummonEffectComponent_TypeInfo->static_fields;
  v33 = (System_Int32_array **)StringLiteral_22745/*"summon_up_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22745/*"summon_up_01"*/;
  sub_B5D560(static_fields, v33, v2, v3, v4, v5, v6, v7);
  v34 = SummonEffectComponent_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_22746/*"summon_up_02"*/;
  v34->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_22746/*"summon_up_02"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v34->RANKUP_TO_SILVER_ANIMATION, v35, v36, v37, v38, v39, v40, v41);
  v42 = SummonEffectComponent_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_22747/*"summon_up_03"*/;
  v42->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_22747/*"summon_up_03"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v42->RANKUP_TO_GOLD_ANIMATION, v43, v44, v45, v46, v47, v48, v49);
  v50 = SummonEffectComponent_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_22748/*"summon_up_04"*/;
  v50->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_22748/*"summon_up_04"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v50->RANKUP_COMMANDCODE_ANIMATION, v51, v52, v53, v54, v55, v56, v57);
  v58 = SummonEffectComponent_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_15211/*"UpAnimationName"*/;
  v58->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15211/*"UpAnimationName"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v58->FSM_VARIABLE_UP_ANIMATION_NAME, v59, v60, v61, v62, v63, v64, v65);
  v66 = SummonEffectComponent_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_7706/*"InitializeAnimationName"*/;
  v66->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7706/*"InitializeAnimationName"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v66->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = SummonEffectComponent_TypeInfo->static_fields;
  v75 = (System_Int32_array **)StringLiteral_11416/*"RarityAnimationName"*/;
  v74->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11416/*"RarityAnimationName"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v74->FSM_VARIABLE_RARITY_ANIMATION_NAME,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = SummonEffectComponent_TypeInfo->static_fields;
  v83 = (System_Int32_array **)StringLiteral_7020/*"GetAnimationName"*/;
  v82->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7020/*"GetAnimationName"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v82->FSM_VARIABLE_GET_ANIMATION_NAME, v83, v84, v85, v86, v87, v88, v89);
  v90 = SummonEffectComponent_TypeInfo->static_fields;
  v90->rarityToColor = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v90->rarityToColor, 0LL, v91, v92, v93, v94, v95, v96);
}


void __fastcall SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Int32_array *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  il2cpp_array_size_t max_length; // w8
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0

  if ( (byte_42EC8EF & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EC8EF = 1;
  }
  v8 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  max_length = v8->max_length;
  if ( !max_length || (v8->m_Items[1] = 512, max_length == 1) )
  {
    v24 = sub_B5D6C8(v8);
    sub_B5D668(v24, 0LL);
  }
  v8->m_Items[2] = 875;
  this->fields.cardTextureSize = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cardTextureSize,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.effAnimName, v17, v18, v19, v20, v21, v22, v23);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x26
  SummonEffectComponent_SummonInfo_o *v22; // x27
  __int64 v23; // x0
  __int64 v24; // x1

  if ( (byte_42EC8DF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__,
      servantId,
      limitCount,
      isRankup);
    sub_B5D5C4(&SummonEffectComponent_SummonInfo_TypeInfo, v18, v19, v20);
    byte_42EC8DF = 1;
  }
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = this->fields.SummonInfos;
  }
  v22 = (SummonEffectComponent_SummonInfo_o *)sub_B5D694(SummonEffectComponent_SummonInfo_TypeInfo);
  SummonEffectComponent_SummonInfo___ctor(
    v22,
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
    sub_B5D69C(v23, v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SummonInfos,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
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
  if ( (byte_42EC8E8 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_B5D5C4(
                                        &Method_UnityEngine_Component_GetComponent_UITexture___,
                                        (_DWORD)cardNode,
                                        col,
                                        method);
    byte_42EC8E8 = 1;
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
                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, const char *))this->klass[2]._1.gc_desc)(
                                            this,
                                            v8,
                                            this->klass[2]._1.name),
        (cardTextureSize = v6->fields.cardTextureSize) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(this, cardNode);
  }
  if ( cardTextureSize->max_length <= 1 )
  {
LABEL_11:
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t counterMax; // w9
  int32_t v9; // w8
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v11; // x1

  if ( (byte_42EC8E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12210/*"SETUP_DONE"*/, v5, v6, v7);
    byte_42EC8E9 = 1;
  }
  counterMax = this->fields._counterMax;
  v9 = this->fields._counter + 1;
  this->fields._counter = v9;
  if ( v9 >= counterMax )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B5D69C(0LL, v11);
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_12210/*"SETUP_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x19

  if ( (byte_42EC8E1 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42EC8E1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v9 )
    sub_B5D69C(Instance, v8);
  CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


int32_t __fastcall SummonEffectComponent__GetGachaId(SummonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.gachaId;
}


void __fastcall SummonEffectComponent__InitSummonEffect(SummonEffectComponent_o *this, const MethodInfo *method)
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
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  void *Component_WebViewObject; // x0
  __int64 v57; // x1
  PlayMakerFSM_o *v58; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x8
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x22
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x21
  _BOOL8 v76; // x0
  __int64 v77; // x1
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v79; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  AssetLoader_LoadEndDataHandler_o *v82; // x22
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EC8E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v14, v15, v16);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&Method_SummonEffectComponent_OnCharaGraphLoadDone__, v41, v42, v43);
    sub_B5D5C4(&SummonEffectComponent_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_8263/*"IsNoSkip"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_17939/*"countMax"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_13314/*"SummonEffectAnimation"*/, v53, v54, v55);
    byte_42EC8E2 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  v58 = (PlayMakerFSM_o *)Component_WebViewObject;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_17939/*"countMax"*/,
                              0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_32;
  if ( !Component_WebViewObject )
    goto LABEL_32;
  *((_DWORD *)Component_WebViewObject + 14) = SummonInfos->fields._size;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v58, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8263/*"IsNoSkip"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  *((_BYTE *)Component_WebViewObject + 56) = this->fields.isNoSkip;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v58, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_13314/*"SummonEffectAnimation"*/,
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
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v67,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v67;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.upAnimationNameList,
    (System_Int32_array **)v67,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
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
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  Component_WebViewObject = *p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  Component_WebViewObject = *p_upAnimationNameList;
  if ( !*p_upAnimationNameList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__),
        (Component_WebViewObject = *p_upAnimationNameList) == 0LL)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__),
        (Component_WebViewObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_WebViewObject, 1, 0LL),
        (Component_WebViewObject = this->fields.SummonInfos) == 0LL) )
  {
LABEL_32:
    sub_B5D69C(Component_WebViewObject, v57);
  }
  this->fields.DownloadCounter = *((_DWORD *)Component_WebViewObject + 6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v83,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Component_WebViewObject,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v84 = v83;
  while ( 1 )
  {
    v76 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v84,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v76 )
      break;
    if ( !v84.fields.current )
      sub_B5D69C(v76, v77);
    klass = (int32_t)v84.fields.current[1].klass;
    if ( HIDWORD(v84.fields.current[2].klass) == 3 )
    {
      v79 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v79,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadCommandAsset(klass, v79, 0LL);
    }
    else
    {
      klass_high = HIDWORD(v84.fields.current[1].klass);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0LL);
      v82 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v82,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v82, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v84,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void __fastcall SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EC8DE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo, v5, v6, v7);
    byte_42EC8DE = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.SummonInfos,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t v11; // w8
  CommonUI_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42EC8E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, (_DWORD)loadData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_7377/*"INIT_DONE"*/, v8, v9, v10);
    byte_42EC8E3 = 1;
  }
  v11 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v11;
  if ( !v11 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0LL),
          (Instance = (CommonUI_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0LL) )
    {
      sub_B5D69C(Instance, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7377/*"INIT_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v9; // x1

  if ( (byte_42EC8EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5794/*"EVENT_SKIP"*/, v5, v6, v7);
    byte_42EC8EE = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B5D69C(0LL, v9);
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5794/*"EVENT_SKIP"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__ReleasePrevAsset(SummonEffectComponent_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  Il2CppObject *current; // x20
  __int64 v22; // x1
  struct System_Collections_Generic_List_string__o *v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC8E4 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v17, v18, v19);
    byte_42EC8E4 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseAssetPath,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v24.fields.current;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v23 = this->fields._releaseAssetPath;
    if ( !v23 )
      sub_B5D69C(0LL, v22);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v23,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
  }
}


void __fastcall SummonEffectComponent__SetGachaId(SummonEffectComponent_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.gachaId = id;
}


void __fastcall SummonEffectComponent__SetUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
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
  void *Component_WebViewObject; // x0
  __int64 v18; // x1
  PlayMakerFSM_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x22
  int size; // w8
  __int64 items; // x8
  struct System_String_o *v29; // x1
  HutongGames_PlayMaker_FsmVariables_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **effAnimName; // x1

  if ( (byte_42EC8EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v8, v9, v10);
    sub_B5D5C4(&SummonEffectComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11403/*"Rank"*/, v14, v15, v16);
    byte_42EC8EA = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject
    || (v19 = (PlayMakerFSM_o *)Component_WebViewObject,
        (Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL)) == 0LL)
    || (Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                    (System_String_o *)StringLiteral_11403/*"Rank"*/,
                                    0LL)) == 0LL )
  {
LABEL_22:
    sub_B5D69C(Component_WebViewObject, v18);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      items = (__int64)upAnimationNameList->fields._items + 8 * (int)Component_WebViewObject;
      goto LABEL_16;
    }
  }
  if ( !upAnimationNameList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  items = (__int64)upAnimationNameList->fields._items;
LABEL_16:
  v29 = *(struct System_String_o **)(items + 32);
  this->fields.effAnimName = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effAnimName,
    (System_Int32_array **)v29,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v19, 0LL);
  v30 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v30 )
    goto LABEL_22;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              v30,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_22;
  effAnimName = (System_Int32_array **)this->fields.effAnimName;
  *((_QWORD *)Component_WebViewObject + 7) = effAnimName;
  sub_B5D560(
    (BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56),
    effAnimName,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void __fastcall SummonEffectComponent__SetUpInitializeAnimation(
        SummonEffectComponent_o *this,
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
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v12; // x1
  PlayMakerFSM_o *v13; // x19
  HutongGames_PlayMaker_FsmVariables_o *v14; // x20
  System_String_o *Value; // x0

  if ( (byte_42EC8EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SummonEffectComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_7370/*"INITIALIZE_ANIMATION"*/, v8, v9, v10);
    byte_42EC8EB = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_11;
  v13 = Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  v14 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v14
    || (Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                      v14,
                                                      SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                                      0LL)) == 0LL )
  {
LABEL_11:
    sub_B5D69C(Component_WebViewObject, v12);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) )
    PlayMakerFSM__SendEvent(v13, (System_String_o *)StringLiteral_7370/*"INITIALIZE_ANIMATION"*/, 0LL);
}


void __fastcall SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  SummonEffectComponent_c *v13; // x0
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  SummonEffectComponent_c *v23; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_42EC8E0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__,
      v4,
      v5,
      v6);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo,
      v7,
      v8,
      v9);
    sub_B5D5C4(&SummonEffectComponent_TypeInfo, v10, v11, v12);
    byte_42EC8E0 = 1;
  }
  v13 = SummonEffectComponent_TypeInfo;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v13 = SummonEffectComponent_TypeInfo;
  }
  if ( !v13->static_fields->rarityToColor )
  {
    v14 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B5D694(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
      v14,
      (const MethodInfo_2F451F8 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v14 )
      sub_B5D69C(v15, v16);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v14,
      0,
      0,
      (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v14,
      1,
      0,
      (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v14,
      2,
      0,
      (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v14,
      3,
      1,
      (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v14,
      4,
      2,
      (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v14,
      5,
      2,
      (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v14,
      101,
      0,
      (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v14,
      102,
      0,
      (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v23 = SummonEffectComponent_TypeInfo;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v23 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v23->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v14;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->rarityToColor,
      (System_Int32_array **)v14,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
}


void __fastcall SummonEffectComponent__StopRarityAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
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
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v15; // x1
  HutongGames_PlayMaker_FsmVariables_o *v16; // x20
  System_String_o *Value; // x0
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v19; // x20
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0

  if ( (byte_42EC8ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SummonEffectComponent_TypeInfo, v11, v12, v13);
    byte_42EC8ED = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_25;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  v16 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v16 )
    goto LABEL_25;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                v16,
                                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v19 = Value;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0LL, 0LL) && !System_String__IsNullOrEmpty(v19, 0LL) )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.effAnimation;
    if ( Component_WebViewObject )
    {
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)Component_WebViewObject, v19, 0LL) )
        return;
      Component_WebViewObject = (PlayMakerFSM_o *)this->fields.effAnimation;
      if ( Component_WebViewObject )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)Component_WebViewObject,
                                                   v19,
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
    sub_B5D69C(Component_WebViewObject, v15);
  }
}


void __fastcall SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *effAnimation; // x20
  __int64 v9; // x1
  UnityEngine_Animation_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v14; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x0

  if ( (byte_42EC8EC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____68825800,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC8EC = 1;
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
    sub_B5D69C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v9);
  }
LABEL_15:
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = this->fields.effAnimation;
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_29;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         (UnityEngine_Component_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                         1,
                                                                                         (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____68825800);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_29;
  klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
  v14 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
      {
        v17 = sub_B5D6C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B5D668(v17, 0LL);
      }
      v16 = (UnityEngine_Object_o *)*((_QWORD *)&v14[1].monitor + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(
                                                                                             v16,
                                                                                             0LL,
                                                                                             0LL);
      if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_29;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)v16,
                                                                                               0LL);
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
          0,
          0LL);
      }
      LODWORD(klass) = v14[1].klass;
    }
  }
}


void __fastcall SummonEffectComponent__UpdateCardParam(SummonEffectComponent_o *this, const MethodInfo *method)
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
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  void *Component_WebViewObject; // x0
  __int64 v42; // x1
  PlayMakerFSM_o *v43; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x22
  SummonEffectComponent_SummonInfo_o *v45; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v46; // x22
  int32_t ServantId; // w28
  SummonEffectComponent_SummonInfo_o *v48; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v49; // x22
  int32_t LimitCount; // w27
  SummonEffectComponent_SummonInfo_o *v51; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v52; // x22
  bool IsRankUp; // w26
  SummonEffectComponent_SummonInfo_o *v54; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v55; // x22
  _BOOL4 IsNewCard; // w24
  SummonEffectComponent_SummonInfo_o *v57; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v58; // x22
  SummonEffectComponent_SummonInfo_o *v59; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v60; // x25
  int32_t Rarity; // w22
  SummonEffectComponent_SummonInfo_o *v62; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v63; // x24
  int32_t CardType; // w25
  SummonEffectComponent_SummonInfo_o *v65; // x8
  bool IsSkipStop; // w21
  HutongGames_PlayMaker_FsmVariables_o *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  int v86; // w21
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20
  _BOOL4 v89; // [xsp+8h] [xbp-58h]
  int32_t NoticeRarity; // [xsp+Ch] [xbp-54h]

  if ( (byte_42EC8E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SummonEffectComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_8262/*"IsNewCard"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17938/*"countIndex"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8275/*"IsRankUp"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_8279/*"IsSkipStop"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_8608/*"LimitCount"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_9795/*"NoticeRarity"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_3959/*"CardType"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_11414/*"Rarity"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12869/*"ServantId"*/, v38, v39, v40);
    byte_42EC8E6 = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  v43 = (PlayMakerFSM_o *)Component_WebViewObject;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_17938/*"countIndex"*/,
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v45 = SummonInfos->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v45 )
    goto LABEL_82;
  v46 = this->fields.SummonInfos;
  if ( !v46 )
    goto LABEL_82;
  ServantId = v45->fields.ServantId;
  if ( v46->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v48 = v46->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v48 )
    goto LABEL_82;
  v49 = this->fields.SummonInfos;
  if ( !v49 )
    goto LABEL_82;
  LimitCount = v48->fields.LimitCount;
  if ( v49->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v51 = v49->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v51 )
    goto LABEL_82;
  v52 = this->fields.SummonInfos;
  if ( !v52 )
    goto LABEL_82;
  IsRankUp = v51->fields.IsRankUp;
  if ( v52->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v54 = v52->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v54 )
    goto LABEL_82;
  v55 = this->fields.SummonInfos;
  if ( !v55 )
    goto LABEL_82;
  IsNewCard = v54->fields.IsNewCard;
  if ( v55->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v57 = v55->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v57 )
    goto LABEL_82;
  v58 = this->fields.SummonInfos;
  if ( !v58 )
    goto LABEL_82;
  NoticeRarity = v57->fields.NoticeRarity;
  if ( v58->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v89 = IsNewCard;
  v59 = v58->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v59 )
    goto LABEL_82;
  v60 = this->fields.SummonInfos;
  if ( !v60 )
    goto LABEL_82;
  Rarity = v59->fields.Rarity;
  if ( v60->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v62 = v60->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v62 )
    goto LABEL_82;
  v63 = this->fields.SummonInfos;
  if ( !v63 )
    goto LABEL_82;
  CardType = v62->fields.CardType;
  if ( v63->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v65 = v63->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v65 )
    goto LABEL_82;
  IsSkipStop = v65->fields.IsSkipStop;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v43, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_12869/*"ServantId"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = ServantId;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v43, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8608/*"LimitCount"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = LimitCount;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v43, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8275/*"IsRankUp"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = IsRankUp;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v43, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8279/*"IsSkipStop"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = IsSkipStop;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v43, 0LL);
  v67 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v67 )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              v67,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v68, v69, v70, v71, v72, v73);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v43, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v74, v75, v76, v77, v78, v79);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v43, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_QWORD *)Component_WebViewObject + 7) = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)((char *)Component_WebViewObject + 56), 0LL, v80, v81, v82, v83, v84, v85);
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v43, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_8262/*"IsNewCard"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_BYTE *)Component_WebViewObject + 56) = v89 || Rarity == 0;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v43, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_9795/*"NoticeRarity"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = NoticeRarity;
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v43, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_3959/*"CardType"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = CardType;
  if ( (unsigned int)(Rarity - 3) >= 3 )
    v86 = Rarity ? 0 : 3;
  else
    v86 = dword_32B5404[Rarity - 3];
  Component_WebViewObject = PlayMakerFSM__get_FsmVariables(v43, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  Component_WebViewObject = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                              (System_String_o *)StringLiteral_11414/*"Rarity"*/,
                              0LL);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  *((_DWORD *)Component_WebViewObject + 14) = v86;
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
      sub_B5D69C(Component_WebViewObject, v42);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
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
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int v128; // w1
  int v129; // w2
  __int64 v130; // x3
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  int v134; // w1
  int v135; // w2
  __int64 v136; // x3
  int v137; // w1
  int v138; // w2
  __int64 v139; // x3
  int v140; // w1
  int v141; // w2
  __int64 v142; // x3
  int v143; // w1
  int v144; // w2
  __int64 v145; // x3
  int v146; // w1
  int v147; // w2
  __int64 v148; // x3
  int v149; // w1
  int v150; // w2
  __int64 v151; // x3
  int v152; // w1
  int v153; // w2
  __int64 v154; // x3
  int v155; // w1
  int v156; // w2
  __int64 v157; // x3
  int v158; // w1
  int v159; // w2
  __int64 v160; // x3
  int v161; // w1
  int v162; // w2
  __int64 v163; // x3
  int v164; // w1
  int v165; // w2
  __int64 v166; // x3
  int v167; // w1
  int v168; // w2
  __int64 v169; // x3
  int v170; // w1
  int v171; // w2
  __int64 v172; // x3
  int v173; // w1
  int v174; // w2
  __int64 v175; // x3
  int v176; // w1
  int v177; // w2
  __int64 v178; // x3
  int v179; // w1
  int v180; // w2
  __int64 v181; // x3
  int v182; // w1
  int v183; // w2
  __int64 v184; // x3
  int v185; // w1
  int v186; // w2
  __int64 v187; // x3
  int v188; // w1
  int v189; // w2
  __int64 v190; // x3
  int v191; // w1
  int v192; // w2
  __int64 v193; // x3
  int v194; // w1
  int v195; // w2
  __int64 v196; // x3
  int v197; // w1
  int v198; // w2
  __int64 v199; // x3
  int v200; // w1
  int v201; // w2
  __int64 v202; // x3
  int v203; // w1
  int v204; // w2
  __int64 v205; // x3
  int v206; // w1
  int v207; // w2
  __int64 v208; // x3
  int v209; // w1
  int v210; // w2
  __int64 v211; // x3
  int v212; // w1
  int v213; // w2
  __int64 v214; // x3
  int v215; // w1
  int v216; // w2
  __int64 v217; // x3
  int v218; // w1
  int v219; // w2
  __int64 v220; // x3
  __int64 v221; // x21
  PlayMakerFSM_o *Component_WebViewObject; // x0
  System_String_c *v223; // x1
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  PlayMakerFSM_o *v230; // x23
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x22
  SummonEffectComponent_SummonInfo_o *v232; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v233; // x22
  SummonEffectComponent_SummonInfo_o *v234; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v235; // x22
  SummonEffectComponent_SummonInfo_o *v236; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v237; // x22
  _BOOL4 IsRankUp; // w25
  SummonEffectComponent_SummonInfo_o *v239; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v240; // x22
  _BOOL4 IsNewCard; // w28
  SummonEffectComponent_SummonInfo_o *v242; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v243; // x26
  int32_t NoticeRarity; // w22
  SummonEffectComponent_SummonInfo_o *v245; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v246; // x26
  int Rarity; // w27
  SummonEffectComponent_SummonInfo_o *v248; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v249; // x26
  SummonEffectComponent_SummonInfo_o *v250; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v251; // x27
  bool IsSkipStop; // w26
  SummonEffectComponent_SummonInfo_o *v253; // x8
  int64_t userServantId; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v255; // x19
  System_String_array **v256; // x2
  System_String_array **v257; // x3
  System_Boolean_array **v258; // x4
  System_Int32_array **v259; // x5
  System_Int32_array *v260; // x6
  System_Int32_array *v261; // x7
  HutongGames_PlayMaker_FsmVariables_o *v262; // x19
  System_String_array **v263; // x2
  System_String_array **v264; // x3
  System_Boolean_array **v265; // x4
  System_Int32_array **v266; // x5
  System_Int32_array *v267; // x6
  System_Int32_array *v268; // x7
  int v269; // w22
  HutongGames_PlayMaker_FsmVariables_o *v270; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  Il2CppObject *v272; // x0
  System_String_array **v273; // x2
  System_String_array **v274; // x3
  System_Boolean_array **v275; // x4
  System_Int32_array **v276; // x5
  System_Int32_array *v277; // x6
  System_Int32_array *v278; // x7
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  System_String_array **v281; // x2
  System_String_array **v282; // x3
  System_Boolean_array **v283; // x4
  System_Int32_array **v284; // x5
  System_Int32_array *v285; // x6
  System_Int32_array *v286; // x7
  System_String_o *v287; // x22
  float v288; // s8
  System_Int32_array **v289; // x0
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  System_Int32_array **v296; // x0
  System_String_array **v297; // x2
  System_String_array **v298; // x3
  System_Boolean_array **v299; // x4
  System_Int32_array **v300; // x5
  System_Int32_array *v301; // x6
  System_Int32_array *v302; // x7
  System_Int32_array **v303; // x0
  System_String_array **v304; // x2
  System_String_array **v305; // x3
  System_Boolean_array **v306; // x4
  System_Int32_array **v307; // x5
  System_Int32_array *v308; // x6
  System_Int32_array *v309; // x7
  System_Int32_array **v310; // x0
  System_String_array **v311; // x2
  System_String_array **v312; // x3
  System_Boolean_array **v313; // x4
  System_Int32_array **v314; // x5
  System_Int32_array *v315; // x6
  System_Int32_array *v316; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v318; // x24
  UnityEngine_Transform_o *v319; // x19
  int v320; // s0
  _BOOL4 v323; // w25
  PlayMakerFSM_o *v324; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v325; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v326; // x8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v327; // x22
  GachaBehaviorMaster_c *v328; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v329; // x0
  int32_t v330; // w24
  int v331; // w28
  UnityEngine_Object_o *prevObject; // x19
  struct UnityEngine_GameObject_o **p_prevObject; // x22
  int v334; // w9
  _BOOL4 v335; // w24
  int32_t v336; // w8
  UnityEngine_Object_o *v337; // x19
  System_String_array **v338; // x2
  System_String_array **v339; // x3
  System_Boolean_array **v340; // x4
  System_Int32_array **v341; // x5
  System_Int32_array *v342; // x6
  System_Int32_array *v343; // x7
  UnityEngine_GameObject_o *gameObject; // x19
  System_Action_o *v345; // x25
  bool v346; // w25
  UnityEngine_GameObject_o *v347; // x19
  UserServantEntity_o *v348; // x25
  int v349; // w27
  System_Action_o *v350; // x28
  System_Action_o *v351; // x3
  System_Action_o *v352; // x25
  UnityEngine_Component_o *v353; // x19
  UnityEngine_Transform_o *v354; // x25
  int v355; // s0
  System_Int32_array **v358; // x0
  System_String_array **v359; // x2
  System_String_array **v360; // x3
  System_Boolean_array **v361; // x4
  System_Int32_array **v362; // x5
  System_Int32_array *v363; // x6
  System_Int32_array *v364; // x7
  System_String_o *v365; // x22
  System_String_o *v366; // x19
  UnityEngine_Transform_o *v367; // x0
  UnityEngine_Component_o *v368; // x26
  UnityEngine_Transform_o *v369; // x0
  UnityEngine_Component_o *v370; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  __int64 v372; // x1
  int v373; // w8
  UnityEngine_Transform_o *v374; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v376; // x3
  UnityEngine_Transform_o *v377; // x0
  UnityEngine_Transform_o *v378; // x0
  const MethodInfo *v379; // x3
  UnityEngine_Transform_o *v380; // x0
  UnityEngine_Transform_o *v381; // x1
  const MethodInfo *v382; // x3
  SummonEffectComponent_o *v383; // x0
  int32_t v384; // w2
  System_String_o *v385; // x0
  System_String_o *v386; // x19
  System_String_o *v387; // x0
  System_String_o *v388; // x0
  System_String_o *v389; // x19
  AssetLoader_LoadEndDataHandler_o *v390; // x20
  System_String_o *v391; // x19
  AssetLoader_LoadEndDataHandler_o *v392; // x20
  System_String_o *v393; // x0
  AssetLoader_LoadEndDataHandler_o *v394; // x1
  UnityEngine_Transform_o *v395; // x0
  UnityEngine_Transform_o *v396; // x0
  UnityEngine_Transform_o *v397; // x0
  const MethodInfo *v398; // x3
  const MethodInfo *v399; // x1
  __int64 v400; // x22
  System_String_array **v401; // x2
  System_String_array **v402; // x3
  System_Boolean_array **v403; // x4
  System_Int32_array **v404; // x5
  System_Int32_array *v405; // x6
  System_Int32_array *v406; // x7
  WarEntity_o *v407; // x19
  int v408; // w8
  int32_t v409; // w19
  __int64 v410; // x21
  System_String_array **v411; // x2
  System_String_array **v412; // x3
  System_Boolean_array **v413; // x4
  System_Int32_array **v414; // x5
  System_Int32_array *v415; // x6
  System_Int32_array *v416; // x7
  Il2CppObject **v417; // x20
  int32_t LowerColorRarity; // w0
  int32_t v419; // w22
  GachaBehaviorMaster_c *v420; // x0
  GachaBehaviorMaster_c *v421; // x0
  int v422; // w8
  GachaBehaviorMaster_c *v423; // x0
  GachaBehaviorMaster_c *v424; // x0
  int v425; // w9
  GachaBehaviorMaster_c *v426; // x0
  GachaBehaviorMaster_c *v427; // x0
  int v428; // w8
  GachaBehaviorMaster_c *v429; // x0
  GachaBehaviorMaster_c *v430; // x0
  int v431; // w8
  GachaBehaviorMaster_c *v432; // x0
  _BOOL4 v433; // w10
  HutongGames_PlayMaker_FsmVariables_o *v434; // x19
  HutongGames_PlayMaker_FsmString_o *v435; // x0
  GachaBehaviorMaster_c *v436; // x8
  System_String_array **v437; // x2
  System_String_array **v438; // x3
  System_Boolean_array **v439; // x4
  System_Int32_array **v440; // x5
  System_Int32_array *v441; // x6
  System_Int32_array *v442; // x7
  PlayMakerFSM_o *v443; // x8
  GachaBehaviorMaster_c *v444; // x0
  HutongGames_PlayMaker_FsmVariables_o *v445; // x19
  HutongGames_PlayMaker_FsmString_o *v446; // x0
  GachaBehaviorMaster_c *v447; // x8
  System_String_array **v448; // x2
  System_String_array **v449; // x3
  System_Boolean_array **v450; // x4
  System_Int32_array **v451; // x5
  System_Int32_array *v452; // x6
  System_Int32_array *v453; // x7
  GachaBehaviorMaster_c *v454; // x0
  HutongGames_PlayMaker_FsmVariables_o *v455; // x19
  HutongGames_PlayMaker_FsmString_o *v456; // x0
  GachaBehaviorMaster_c *v457; // x8
  System_String_array **v458; // x2
  System_String_array **v459; // x3
  System_Boolean_array **v460; // x4
  System_Int32_array **v461; // x5
  System_Int32_array *v462; // x6
  System_Int32_array *v463; // x7
  __int64 v464; // x20
  System_String_array **v465; // x2
  System_String_array **v466; // x3
  System_Boolean_array **v467; // x4
  System_Int32_array **v468; // x5
  System_Int32_array *v469; // x6
  System_Int32_array *v470; // x7
  Il2CppObject **v471; // x21
  int v472; // w8
  System_String_o *v473; // x22
  Il2CppObject *v474; // x24
  AssetLoader_LoadEndDataHandler_o *v475; // x23
  _DWORD *monitor; // x8
  System_String_o **v477; // x8
  int32_t *v478; // x21
  System_String_o *v479; // x19
  AssetLoader_LoadEndDataHandler_o *v480; // x21
  System_String_o *DesignCardPath; // x23
  AssetLoader_LoadEndDataHandler_o *v482; // x24
  System_String_o *v483; // x22
  AssetLoader_LoadEndDataHandler_o *v484; // x23
  Il2CppObject *v485; // x21
  SummonEffectComponent_o *v486; // x0
  UnityEngine_Transform_o *v487; // x1
  int32_t v488; // w2
  const MethodInfo *v489; // x3
  _BOOL4 v490; // [xsp+8h] [xbp-D8h]
  int v491; // [xsp+Ch] [xbp-D4h]
  int v492; // [xsp+10h] [xbp-D0h]
  int v493; // [xsp+14h] [xbp-CCh]
  int v494; // [xsp+2Ch] [xbp-B4h]
  int64_t v495; // [xsp+30h] [xbp-B0h]
  System_String_o **v496; // [xsp+38h] [xbp-A8h]
  int32_t Item; // [xsp+4Ch] [xbp-94h]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+50h] [xbp-90h]
  int32_t limitCount; // [xsp+5Ch] [xbp-84h]
  UnityEngine_Component_o *v500; // [xsp+60h] [xbp-80h]
  int key; // [xsp+68h] [xbp-78h]
  int32_t svtId; // [xsp+6Ch] [xbp-74h]
  int v503; // [xsp+70h] [xbp-70h] BYREF
  int v504; // [xsp+74h] [xbp-6Ch] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v506; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v507; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v508; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v509; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v510; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EC8E7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AtlasManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UITexture___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaBehaviorMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v26, v27, v28);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v29, v30, v31);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v32, v33, v34);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v35, v36, v37);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v38, v39, v40);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v44, v45, v46);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__,
      v47,
      v48,
      v49);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v50, v51, v52);
    sub_B5D5C4(&GachaBehaviorMaster_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&int_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&long_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__IndexOf__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v71, v72, v73);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__, v74, v75, v76);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__, v77, v78, v79);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v80, v81, v82);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v83, v84, v85);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v86, v87, v88);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v89, v90, v91);
    sub_B5D5C4(&Rarity_TypeInfo, v92, v93, v94);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v95, v96, v97);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v98, v99, v100);
    sub_B5D5C4(&string_TypeInfo, v101, v102, v103);
    sub_B5D5C4(&SummonEffectComponent_TypeInfo, v104, v105, v106);
    sub_B5D5C4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__, v107, v108, v109);
    sub_B5D5C4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__, v110, v111, v112);
    sub_B5D5C4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__, v113, v114, v115);
    sub_B5D5C4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__, v116, v117, v118);
    sub_B5D5C4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__, v119, v120, v121);
    sub_B5D5C4(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo, v122, v123, v124);
    sub_B5D5C4(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__, v125, v126, v127);
    sub_B5D5C4(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__, v128, v129, v130);
    sub_B5D5C4(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo, v131, v132, v133);
    sub_B5D5C4(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__, v134, v135, v136);
    sub_B5D5C4(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__, v137, v138, v139);
    sub_B5D5C4(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo, v140, v141, v142);
    sub_B5D5C4(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__, v143, v144, v145);
    sub_B5D5C4(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo, v146, v147, v148);
    sub_B5D5C4(&StringLiteral_3955/*"CardScale"*/, v149, v150, v151);
    sub_B5D5C4(&StringLiteral_3956/*"CardSecondName"*/, v152, v153, v154);
    sub_B5D5C4(&StringLiteral_3947/*"CardFirstName"*/, v155, v156, v157);
    sub_B5D5C4(&StringLiteral_8262/*"IsNewCard"*/, v158, v159, v160);
    sub_B5D5C4(&StringLiteral_3954/*"CardRotName"*/, v161, v162, v163);
    sub_B5D5C4(&StringLiteral_4182/*"CodeCardRarity02"*/, v164, v165, v166);
    sub_B5D5C4(&StringLiteral_2389/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v167, v168, v169);
    sub_B5D5C4(&StringLiteral_11403/*"Rank"*/, v170, v171, v172);
    sub_B5D5C4(&StringLiteral_17938/*"countIndex"*/, v173, v174, v175);
    sub_B5D5C4(&StringLiteral_13312/*"SummonEffect"*/, v176, v177, v178);
    sub_B5D5C4(&StringLiteral_21997/*"rarity"*/, v179, v180, v181);
    sub_B5D5C4(&StringLiteral_8275/*"IsRankUp"*/, v182, v183, v184);
    sub_B5D5C4(&StringLiteral_16097/*"_0"*/, v185, v186, v187);
    sub_B5D5C4(&StringLiteral_4181/*"CodeCardRarity"*/, v188, v189, v190);
    sub_B5D5C4(&StringLiteral_8279/*"IsSkipStop"*/, v191, v192, v193);
    sub_B5D5C4(&StringLiteral_8608/*"LimitCount"*/, v194, v195, v196);
    sub_B5D5C4(&StringLiteral_9795/*"NoticeRarity"*/, v197, v198, v199);
    sub_B5D5C4(&StringLiteral_2388/*"BACKSIDE_CLASS_IMAGE_ID"*/, v200, v201, v202);
    sub_B5D5C4(&StringLiteral_3959/*"CardType"*/, v203, v204, v205);
    sub_B5D5C4(&StringLiteral_3953/*"CardNodeName"*/, v206, v207, v208);
    sub_B5D5C4(&StringLiteral_3948/*"CardFirstPeelName"*/, v209, v210, v211);
    sub_B5D5C4(&StringLiteral_22739/*"summon_rarity_0"*/, v212, v213, v214);
    sub_B5D5C4(&StringLiteral_11414/*"Rarity"*/, v215, v216, v217);
    sub_B5D5C4(&StringLiteral_12869/*"ServantId"*/, v218, v219, v220);
    byte_42EC8E7 = 1;
  }
  entity = 0LL;
  v504 = 0;
  v221 = sub_B5D694(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  SummonEffectComponent___c__DisplayClass45_0___ctor((SummonEffectComponent___c__DisplayClass45_0_o *)v221, 0LL);
  if ( !v221 )
    goto LABEL_393;
  *(_QWORD *)(v221 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v221 + 16),
    (System_Int32_array **)this,
    v224,
    v225,
    v226,
    v227,
    v228,
    v229);
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v230 = Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_17938/*"countIndex"*/,
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v232 = SummonInfos->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v232 )
    goto LABEL_393;
  v233 = this->fields.SummonInfos;
  if ( !v233 )
    goto LABEL_393;
  svtId = v232->fields.ServantId;
  if ( v233->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v234 = v233->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v234 )
    goto LABEL_393;
  v235 = this->fields.SummonInfos;
  if ( !v235 )
    goto LABEL_393;
  limitCount = v234->fields.LimitCount;
  if ( v235->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v236 = v235->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v236 )
    goto LABEL_393;
  v237 = this->fields.SummonInfos;
  if ( !v237 )
    goto LABEL_393;
  IsRankUp = v236->fields.IsRankUp;
  if ( v237->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v239 = v237->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v239 )
    goto LABEL_393;
  v240 = this->fields.SummonInfos;
  if ( !v240 )
    goto LABEL_393;
  IsNewCard = v239->fields.IsNewCard;
  if ( v240->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v242 = v240->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v242 )
    goto LABEL_393;
  v243 = this->fields.SummonInfos;
  if ( !v243 )
    goto LABEL_393;
  NoticeRarity = v242->fields.NoticeRarity;
  if ( v243->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v245 = v243->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v245 )
    goto LABEL_393;
  v246 = this->fields.SummonInfos;
  if ( !v246 )
    goto LABEL_393;
  Rarity = v245->fields.Rarity;
  if ( v246->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v248 = v246->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v248 )
    goto LABEL_393;
  *(_DWORD *)(v221 + 56) = v248->fields.CardType;
  v249 = this->fields.SummonInfos;
  if ( !v249 )
    goto LABEL_393;
  if ( v249->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  key = Rarity;
  v250 = v249->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v250 )
    goto LABEL_393;
  v251 = this->fields.SummonInfos;
  if ( !v251 )
    goto LABEL_393;
  IsSkipStop = v250->fields.IsSkipStop;
  if ( v251->fields._size <= (unsigned int)Component_WebViewObject )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v253 = v251->fields._items->m_Items[(int)Component_WebViewObject];
  if ( !v253 )
    goto LABEL_393;
  userServantId = v253->fields.userServantId;
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v223);
  v255 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v255,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v255;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._releaseAssetPath,
    (System_Int32_array **)v255,
    v256,
    v257,
    v258,
    v259,
    v260,
    v261);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_12869/*"ServantId"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = svtId;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8608/*"LimitCount"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = limitCount;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8275/*"IsRankUp"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsRankUp;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8279/*"IsSkipStop"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsSkipStop;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  v262 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v262 )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                v262,
                                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject[1].klass = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&Component_WebViewObject[1], 0LL, v263, v264, v265, v266, v267, v268);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_8262/*"IsNewCard"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LOBYTE(Component_WebViewObject[1].klass) = IsNewCard || key == 0;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_9795/*"NoticeRarity"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = NoticeRarity;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3959/*"CardType"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = *(_DWORD *)(v221 + 56);
  if ( (unsigned int)(key - 3) >= 3 )
    v269 = key ? 0 : 3;
  else
    v269 = dword_32B5404[key - 3];
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_11414/*"Rarity"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = v269;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  v270 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v270 )
    goto LABEL_393;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v270,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0LL);
  v503 = v269;
  v272 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v503);
  Component_WebViewObject = (PlayMakerFSM_o *)System_String__Concat((Il2CppObject *)StringLiteral_22739/*"summon_rarity_0"*/, v272, 0LL);
  if ( !FsmString )
    goto LABEL_393;
  FsmString->fields.value = (struct System_String_o *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&FsmString->fields.value,
    (System_Int32_array **)Component_WebViewObject,
    v273,
    v274,
    v275,
    v276,
    v277,
    v278);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v495 = userServantId;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_13312/*"SummonEffect"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)Component_WebViewObject,
            0LL);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)Value,
    v281,
    v282,
    v283,
    v284,
    v285,
    v286);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3953/*"CardNodeName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v287 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3955/*"CardScale"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v288 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3947/*"CardFirstName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v289 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v221 + 24) = v289;
  sub_B5D560((BattleServantConfConponent_o *)(v221 + 24), v289, v290, v291, v292, v293, v294, v295);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3948/*"CardFirstPeelName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v296 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v221 + 32) = v296;
  sub_B5D560((BattleServantConfConponent_o *)(v221 + 32), v296, v297, v298, v299, v300, v301, v302);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3956/*"CardSecondName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v303 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v221 + 40) = v303;
  sub_B5D560((BattleServantConfConponent_o *)(v221 + 40), v303, v304, v305, v306, v307, v308, v309);
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3954/*"CardRotName"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v310 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                  0LL);
  *(_QWORD *)(v221 + 48) = v310;
  v496 = (System_String_o **)(v221 + 48);
  sub_B5D560((BattleServantConfConponent_o *)(v221 + 48), v310, v311, v312, v313, v314, v315, v316);
  Component_WebViewObject = (PlayMakerFSM_o *)*p_effect;
  if ( !*p_effect )
    goto LABEL_393;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v287, 1, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v318 = (UnityEngine_Component_o *)Component_WebViewObject;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Component_WebViewObject,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 0, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v318, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v319 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_WebViewObject, 0LL);
  *(UnityEngine_Vector3_o *)&v320 = UnityEngine_Vector3__get_one(0LL);
  if ( !v319 )
    goto LABEL_393;
  UnityEngine_Transform__set_localScale(v319, *(UnityEngine_Vector3_o *)&v320, 0LL);
  Component_WebViewObject = (PlayMakerFSM_o *)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Item = System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
           (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)Component_WebViewObject,
           key,
           (const MethodInfo_2F45CDC *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Component_WebViewObject,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v323 = IsRankUp && Item != 0;
  Component_WebViewObject = (PlayMakerFSM_o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                (GachaBehaviorMaster_o *)Component_WebViewObject,
                                                this->fields.gachaId,
                                                svtId,
                                                0LL);
  v500 = v318;
  if ( !Component_WebViewObject )
    goto LABEL_120;
  v324 = Component_WebViewObject;
  if ( SLODWORD(Component_WebViewObject->fields.fsm) < 1 )
    goto LABEL_120;
  v325 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&Component_WebViewObject->fields.m_CachedPtr
                                                                 + 32LL);
  if ( !v325 )
    goto LABEL_393;
  if ( !*(_QWORD *)&v325->fields.targetId )
  {
LABEL_120:
    v492 = -1;
    v493 = -1;
    v491 = -1;
    v494 = -1;
    v331 = -1;
LABEL_121:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v323 )
      v334 = 4;
    else
      v334 = 3;
    v335 = v323;
    if ( this->fields.EditMode )
      v336 = 0;
    else
      v336 = v334;
    this->fields._counter = 0;
    this->fields._counterMax = v336;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(prevObject, 0LL, 0LL) )
    {
      v337 = (UnityEngine_Object_o *)*p_prevObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v337, 0LL);
      *p_prevObject = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.prevObject, 0LL, v338, v339, v340, v341, v342, v343);
    }
    if ( *(_DWORD *)(v221 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v500, 0LL);
      v345 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v345,
        (Il2CppObject *)v221,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0LL);
      Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateCommandTexturePrefab(
                                                    gameObject,
                                                    svtId,
                                                    0,
                                                    v345,
                                                    0LL);
    }
    else
    {
      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_WebViewObject )
        goto LABEL_393;
      Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)Component_WebViewObject,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0LL;
      if ( !Component_WebViewObject )
        goto LABEL_393;
      v346 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Component_WebViewObject,
               &entity,
               v495,
               (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v347 = UnityEngine_Component__get_gameObject(v500, 0LL);
      if ( v346 )
      {
        v348 = entity;
        v349 = v331;
        v350 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v350,
          (Il2CppObject *)v221,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0LL);
        v351 = v350;
        v331 = v349;
        p_effect = &this->fields.effect;
        Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_26715676(
                                                      v347,
                                                      v348,
                                                      0,
                                                      v351,
                                                      0LL);
      }
      else
      {
        v352 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v352,
          (Il2CppObject *)v221,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0LL);
        Component_WebViewObject = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab(
                                                      v347,
                                                      svtId,
                                                      limitCount,
                                                      0,
                                                      1,
                                                      0,
                                                      v352,
                                                      0,
                                                      0LL);
      }
    }
    v353 = (UnityEngine_Component_o *)Component_WebViewObject;
    if ( Component_WebViewObject )
    {
      v354 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_WebViewObject, 0LL);
      *(UnityEngine_Vector3_o *)&v355 = UnityEngine_Vector3__get_zero(0LL);
      if ( v354 )
      {
        UnityEngine_Transform__set_localPosition(v354, *(UnityEngine_Vector3_o *)&v355, 0LL);
        Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v353, 0LL);
        if ( Component_WebViewObject )
        {
          v506.fields.x = v288;
          v506.fields.y = v288;
          v506.fields.z = v288;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_WebViewObject, v506, 0LL);
          Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        v500,
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
          if ( Component_WebViewObject )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
            v358 = (System_Int32_array **)UnityEngine_Component__get_gameObject(v353, 0LL);
            *p_prevObject = (struct UnityEngine_GameObject_o *)v358;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.prevObject,
              v358,
              v359,
              v360,
              v361,
              v362,
              v363,
              v364);
            Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
            if ( Component_WebViewObject )
            {
              Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                            (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                            (System_String_o *)StringLiteral_4181/*"CodeCardRarity"*/,
                                                            0LL);
              if ( Component_WebViewObject )
              {
                v365 = HutongGames_PlayMaker_FsmString__get_Value(
                         (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                         0LL);
                Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
                if ( Component_WebViewObject )
                {
                  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                                (System_String_o *)StringLiteral_4182/*"CodeCardRarity02"*/,
                                                                0LL);
                  if ( Component_WebViewObject )
                  {
                    Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                  (HutongGames_PlayMaker_FsmString_o *)Component_WebViewObject,
                                                                  0LL);
                    if ( *p_effect )
                    {
                      v366 = (System_String_o *)Component_WebViewObject;
                      v367 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                      Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(v367, v365, 1, 0LL);
                      if ( Component_WebViewObject )
                      {
                        Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                      (UnityEngine_Component_o *)Component_WebViewObject,
                                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                        if ( *p_effect )
                        {
                          v368 = (UnityEngine_Component_o *)Component_WebViewObject;
                          v369 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                          Component_WebViewObject = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(
                                                                        v369,
                                                                        v366,
                                                                        1,
                                                                        0LL);
                          if ( Component_WebViewObject )
                          {
                            Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                          (UnityEngine_Component_o *)Component_WebViewObject,
                                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                            if ( v368 )
                            {
                              v370 = (UnityEngine_Component_o *)Component_WebViewObject;
                              Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                            v368,
                                                                            0LL);
                              if ( Component_WebViewObject )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Component_WebViewObject,
                                  0,
                                  0LL);
                                if ( v370 )
                                {
                                  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                v370,
                                                                                0LL);
                                  if ( Component_WebViewObject )
                                  {
                                    UnityEngine_GameObject__SetActive(
                                      (UnityEngine_GameObject_o *)Component_WebViewObject,
                                      0,
                                      0LL);
                                    if ( this->fields.EditMode )
                                    {
                                      FsmVariables = PlayMakerFSM__get_FsmVariables(v230, 0LL);
                                      if ( !FsmVariables )
                                        goto LABEL_394;
                                      FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                                                               FsmVariables,
                                                                                               (System_String_o *)StringLiteral_11403/*"Rank"*/,
                                                                                               0LL);
                                      if ( v335 )
                                      {
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v373 = Item == 2 ? 2 : 1;
                                        LODWORD(FsmVariables->fields.vector3Variables) = v373;
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_effect;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v374 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        NodeFromName = TransformHelper__getNodeFromName(
                                                         v374,
                                                         *(System_String_o **)(v221 + 24),
                                                         1,
                                                         0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, Item - 1, v376);
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v377 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v378 = TransformHelper__getNodeFromName(
                                                 v377,
                                                 *(System_String_o **)(v221 + 32),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v378, Item - 1, v379);
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        v380 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v381 = TransformHelper__getNodeFromName(v380, *v496, 1, 0LL);
                                        v383 = this;
                                        v384 = Item - 1;
                                      }
                                      else
                                      {
                                        if ( !FsmVariables )
                                          goto LABEL_394;
                                        LODWORD(FsmVariables->fields.vector3Variables) = 0;
                                        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_effect;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v395 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v381 = TransformHelper__getNodeFromName(v395, *v496, 1, 0LL);
                                        v383 = this;
                                        v384 = Item;
                                      }
                                      SummonEffectComponent__ChangeClassCardColor(v383, v381, v384, v382);
                                      FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.effect;
                                      if ( FsmVariables )
                                      {
                                        v396 = UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)FsmVariables,
                                                 0LL);
                                        v397 = TransformHelper__getNodeFromName(
                                                 v396,
                                                 *(System_String_o **)(v221 + 40),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v397, Item, v398);
                                        SummonEffectComponent__CompleteCallback(this, v399);
                                        return;
                                      }
LABEL_394:
                                      sub_B5D69C(FsmVariables, v372);
                                    }
                                    if ( *(_DWORD *)(v221 + 56) == 3 )
                                    {
                                      Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(
                                                                                    v230,
                                                                                    0LL);
                                      if ( Component_WebViewObject )
                                      {
                                        Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                                                      (System_String_o *)StringLiteral_11403/*"Rank"*/,
                                                                                      0LL);
                                        if ( Component_WebViewObject )
                                        {
                                          LODWORD(Component_WebViewObject[1].klass) = 3;
                                          v504 = key;
                                          Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                        v368,
                                                                                        0LL);
                                          if ( Component_WebViewObject )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)Component_WebViewObject,
                                              1,
                                              0LL);
                                            v385 = System_Int32__ToString((int32_t)&v504, 0LL);
                                            v386 = System_String__Concat_44580072(
                                                     (System_String_o *)StringLiteral_21997/*"rarity"*/,
                                                     v385,
                                                     (System_String_o *)StringLiteral_16097/*"_0"*/,
                                                     0LL);
                                            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !AtlasManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                            }
                                            AtlasManager__SetCharaGraphaOption((UISprite_o *)v368, v386, 0LL);
                                            ((void (__fastcall *)(UnityEngine_Component_o *, void *))v368->klass[2]._1.typeMetadataHandle)(
                                              v368,
                                              v368->klass[2]._1.interopData);
                                            Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(
                                                                                          v370,
                                                                                          0LL);
                                            if ( Component_WebViewObject )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)Component_WebViewObject,
                                                1,
                                                0LL);
                                              v387 = System_Int32__ToString((int32_t)&v504, 0LL);
                                              v388 = System_String__Concat_44580072(
                                                       (System_String_o *)StringLiteral_21997/*"rarity"*/,
                                                       v387,
                                                       (System_String_o *)StringLiteral_16097/*"_0"*/,
                                                       0LL);
                                              AtlasManager__SetCharaGraphaOption((UISprite_o *)v370, v388, 0LL);
                                              ((void (__fastcall *)(UnityEngine_Component_o *, void *))v370->klass[2]._1.typeMetadataHandle)(
                                                v370,
                                                v370->klass[2]._1.interopData);
                                              Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                            v368,
                                                                                            0LL);
                                              if ( Component_WebViewObject )
                                              {
                                                v507.fields.x = 0.0;
                                                v507.fields.z = 0.0;
                                                v507.fields.y = 216.81;
                                                UnityEngine_Transform__set_localPosition(
                                                  (UnityEngine_Transform_o *)Component_WebViewObject,
                                                  v507,
                                                  0LL);
                                                Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                              v368,
                                                                                              0LL);
                                                if ( Component_WebViewObject )
                                                {
                                                  v508.fields.x = v288;
                                                  v508.fields.y = v288;
                                                  v508.fields.z = v288;
                                                  UnityEngine_Transform__set_localScale(
                                                    (UnityEngine_Transform_o *)Component_WebViewObject,
                                                    v508,
                                                    0LL);
                                                  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                                v370,
                                                                                                0LL);
                                                  if ( Component_WebViewObject )
                                                  {
                                                    v509.fields.x = 0.0;
                                                    v509.fields.z = 0.0;
                                                    v509.fields.y = 216.81;
                                                    UnityEngine_Transform__set_localPosition(
                                                      (UnityEngine_Transform_o *)Component_WebViewObject,
                                                      v509,
                                                      0LL);
                                                    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(
                                                                                                  v370,
                                                                                                  0LL);
                                                    if ( Component_WebViewObject )
                                                    {
                                                      v510.fields.x = v288;
                                                      v510.fields.y = v288;
                                                      v510.fields.z = v288;
                                                      UnityEngine_Transform__set_localScale(
                                                        (UnityEngine_Transform_o *)Component_WebViewObject,
                                                        v510,
                                                        0LL);
                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                      if ( Component_WebViewObject )
                                                      {
                                                        Component_WebViewObject = (PlayMakerFSM_o *)DesignCardManager__GetCommanCodeCardPath((DesignCardManager_o *)Component_WebViewObject, 1, key, 0LL);
                                                        if ( *p_releaseAssetPath )
                                                        {
                                                          v389 = (System_String_o *)Component_WebViewObject;
                                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                            (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
                                                            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
                                                          v390 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                          AssetLoader_LoadEndDataHandler___ctor(
                                                            v390,
                                                            (Il2CppObject *)v221,
                                                            Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
                                                            0LL);
                                                          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                            && !AssetManager_TypeInfo->_2.cctor_finished )
                                                          {
                                                            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                          }
                                                          AssetManager__loadAssetStorage(v389, v390, 1, 0LL);
                                                          Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                          if ( Component_WebViewObject )
                                                          {
                                                            Component_WebViewObject = (PlayMakerFSM_o *)DesignCardManager__GetCommanCodeCardPath((DesignCardManager_o *)Component_WebViewObject, 101, key, 0LL);
                                                            if ( *p_releaseAssetPath )
                                                            {
                                                              v391 = (System_String_o *)Component_WebViewObject;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
                                                                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v392 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v392,
                                                                (Il2CppObject *)v221,
                                                                Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
                                                                0LL);
LABEL_189:
                                                              v393 = v391;
                                                              v394 = v392;
LABEL_358:
                                                              AssetManager__loadAssetStorage(v393, v394, 1, 0LL);
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
                                      v400 = sub_B5D694(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
                                      SummonEffectComponent___c__DisplayClass45_1___ctor(
                                        (SummonEffectComponent___c__DisplayClass45_1_o *)v400,
                                        0LL);
                                      if ( v400 )
                                      {
                                        *(_QWORD *)(v400 + 24) = v221;
                                        sub_B5D560(
                                          (BattleServantConfConponent_o *)(v400 + 24),
                                          (System_Int32_array **)v221,
                                          v401,
                                          v402,
                                          v403,
                                          v404,
                                          v405,
                                          v406);
                                        Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                        if ( Component_WebViewObject )
                                        {
                                          Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Component_WebViewObject,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
                                          if ( Component_WebViewObject )
                                          {
                                            v407 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Component_WebViewObject,
                                                     svtId,
                                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                                            Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                            if ( Component_WebViewObject )
                                            {
                                              Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Component_WebViewObject,
                                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                                              if ( Component_WebViewObject )
                                              {
                                                ServantLimitMaster__GetEntity(
                                                  (ServantLimitMaster_o *)Component_WebViewObject,
                                                  svtId,
                                                  limitCount,
                                                  0LL);
                                                Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                                if ( Component_WebViewObject )
                                                {
                                                  Component_WebViewObject = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Component_WebViewObject,
                                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
                                                  if ( v407 )
                                                  {
                                                    if ( Component_WebViewObject )
                                                    {
                                                      Component_WebViewObject = (PlayMakerFSM_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Component_WebViewObject,
                                                                                                    v407->fields.startType,
                                                                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
                                                      if ( Component_WebViewObject )
                                                      {
                                                        v408 = *(_DWORD *)&Component_WebViewObject->fields.eventHandlerComponentsAdded;
                                                        if ( v493 != -1 )
                                                          v408 = v493;
                                                        *(_DWORD *)(v400 + 16) = v408;
                                                        if ( v492 == -1 )
                                                          v409 = key;
                                                        else
                                                          v409 = v492;
                                                        if ( v335 )
                                                        {
                                                          v410 = sub_B5D694(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
                                                          SummonEffectComponent___c__DisplayClass45_2___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_2_o *)v410,
                                                            0LL);
                                                          if ( v410 )
                                                          {
                                                            *(_QWORD *)(v410 + 24) = v400;
                                                            v417 = (Il2CppObject **)(v410 + 24);
                                                            sub_B5D560(
                                                              (BattleServantConfConponent_o *)(v410 + 24),
                                                              (System_Int32_array **)v400,
                                                              v411,
                                                              v412,
                                                              v413,
                                                              v414,
                                                              v415,
                                                              v416);
                                                            if ( *(_QWORD *)(v410 + 24) )
                                                            {
                                                              *(_DWORD *)(v410 + 16) = *(_DWORD *)(*(_QWORD *)(v410 + 24)
                                                                                                 + 16LL);
                                                              if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !Rarity_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                                                              }
                                                              LowerColorRarity = Rarity__getLowerColorRarity(v409, 0LL);
                                                              if ( v494 != -1 )
                                                                *(_DWORD *)(v410 + 16) = v494;
                                                              v419 = v491 == -1 ? LowerColorRarity : v491;
                                                              Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
                                                              if ( Component_WebViewObject )
                                                              {
                                                                Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt((HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject, (System_String_o *)StringLiteral_11403/*"Rank"*/, 0LL);
                                                                if ( v331 == -1 )
                                                                {
                                                                  if ( !Component_WebViewObject )
                                                                    goto LABEL_393;
                                                                  v331 = Item == 2 ? 2 : 1;
                                                                }
                                                                else if ( !Component_WebViewObject )
                                                                {
                                                                  goto LABEL_393;
                                                                }
                                                                LODWORD(Component_WebViewObject[1].klass) = v331;
                                                                Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !Component_WebViewObject )
                                                                  goto LABEL_393;
                                                                DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                   (DesignCardManager_o *)Component_WebViewObject,
                                                                                   *(_DWORD *)(v410 + 16),
                                                                                   v419,
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
                                                                  *(_DWORD *)(v410 + 16) = 1;
                                                                  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( !Component_WebViewObject )
                                                                    goto LABEL_393;
                                                                  v419 = 3;
                                                                  DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                     (DesignCardManager_o *)Component_WebViewObject,
                                                                                     *(_DWORD *)(v410 + 16),
                                                                                     3,
                                                                                     0LL);
                                                                }
                                                                Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                if ( *p_releaseAssetPath )
                                                                {
                                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                    (EventMissionProgressRequest_Argument_ProgressData_o *)DesignCardPath,
                                                                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
                                                                  v482 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                  AssetLoader_LoadEndDataHandler___ctor(
                                                                    v482,
                                                                    (Il2CppObject *)v410,
                                                                    Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
                                                                    0LL);
                                                                  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                    && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                  {
                                                                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                  }
                                                                  AssetManager__loadAssetStorage(
                                                                    DesignCardPath,
                                                                    v482,
                                                                    1,
                                                                    0LL);
                                                                  *(_DWORD *)(v410 + 20) = ConstantMaster__getValue(
                                                                                             (System_String_o *)StringLiteral_2388/*"BACKSIDE_CLASS_IMAGE_ID"*/,
                                                                                             0LL);
                                                                  Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( Component_WebViewObject )
                                                                  {
                                                                    v483 = DesignCardManager__GetDesignCardPath(
                                                                             (DesignCardManager_o *)Component_WebViewObject,
                                                                             *(_DWORD *)(v410 + 20),
                                                                             v419,
                                                                             0LL);
                                                                    if ( !AssetManager__isExistAssetStorage(v483, 0LL) )
                                                                    {
                                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( !Component_WebViewObject )
                                                                        goto LABEL_393;
                                                                      v483 = DesignCardManager__GetDesignCardPath(
                                                                               (DesignCardManager_o *)Component_WebViewObject,
                                                                               *(_DWORD *)(v410 + 20),
                                                                               3,
                                                                               0LL);
                                                                    }
                                                                    Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                    if ( *p_releaseAssetPath )
                                                                    {
                                                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                        (EventMissionProgressRequest_Argument_ProgressData_o *)v483,
                                                                        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
                                                                      v484 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                      AssetLoader_LoadEndDataHandler___ctor(
                                                                        v484,
                                                                        (Il2CppObject *)v410,
                                                                        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
                                                                        0LL);
                                                                      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                        && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                      {
                                                                        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                      }
                                                                      AssetManager__loadAssetStorage(v483, v484, 1, 0LL);
                                                                      Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( *v417 )
                                                                      {
                                                                        if ( Component_WebViewObject )
                                                                        {
                                                                          v391 = DesignCardManager__GetDesignCardPath(
                                                                                   (DesignCardManager_o *)Component_WebViewObject,
                                                                                   (int32_t)(*v417)[1].klass,
                                                                                   v409,
                                                                                   0LL);
                                                                          Component_WebViewObject = (PlayMakerFSM_o *)AssetManager__isExistAssetStorage(v391, 0LL);
                                                                          if ( ((unsigned __int8)Component_WebViewObject & 1) == 0 )
                                                                          {
                                                                            if ( !*v417 )
                                                                              goto LABEL_393;
                                                                            LODWORD((*v417)[1].klass) = 1;
                                                                            Component_WebViewObject = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                            if ( !*v417 || !Component_WebViewObject )
                                                                              goto LABEL_393;
                                                                            v391 = DesignCardManager__GetDesignCardPath(
                                                                                     (DesignCardManager_o *)Component_WebViewObject,
                                                                                     (int32_t)(*v417)[1].klass,
                                                                                     3,
                                                                                     0LL);
                                                                          }
                                                                          Component_WebViewObject = (PlayMakerFSM_o *)*p_releaseAssetPath;
                                                                          if ( *p_releaseAssetPath )
                                                                          {
                                                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
                                                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v391,
                                                                              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
                                                                            v485 = *v417;
                                                                            v392 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                                            AssetLoader_LoadEndDataHandler___ctor(
                                                                              v392,
                                                                              v485,
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
                                                          v464 = sub_B5D694(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
                                                          SummonEffectComponent___c__DisplayClass45_3___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_3_o *)v464,
                                                            0LL);
                                                          if ( v464 )
                                                          {
                                                            *(_QWORD *)(v464 + 24) = v400;
                                                            v471 = (Il2CppObject **)(v464 + 24);
                                                            sub_B5D560(
                                                              (BattleServantConfConponent_o *)(v464 + 24),
                                                              (System_Int32_array **)v400,
                                                              v465,
                                                              v466,
                                                              v467,
                                                              v468,
                                                              v469,
                                                              v470);
                                                            Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
                                                            if ( Component_WebViewObject )
                                                            {
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt((HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject, (System_String_o *)StringLiteral_11403/*"Rank"*/, 0LL);
                                                              if ( !FsmVariables )
                                                                goto LABEL_394;
                                                              v472 = v331 == -1 ? 0 : v331;
                                                              LODWORD(FsmVariables->fields.vector3Variables) = v472;
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !*v471 || !FsmVariables )
                                                                goto LABEL_394;
                                                              v473 = DesignCardManager__GetDesignCardPath(
                                                                       (DesignCardManager_o *)FsmVariables,
                                                                       (int32_t)(*v471)[1].klass,
                                                                       v409,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)AssetManager__isExistAssetStorage(v473, 0LL);
                                                              if ( ((unsigned __int8)FsmVariables & 1) == 0 )
                                                              {
                                                                if ( !*v471 )
                                                                  goto LABEL_394;
                                                                LODWORD((*v471)[1].klass) = 1;
                                                                FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !*v471 || !FsmVariables )
                                                                  goto LABEL_394;
                                                                v409 = 3;
                                                                v473 = DesignCardManager__GetDesignCardPath(
                                                                         (DesignCardManager_o *)FsmVariables,
                                                                         (int32_t)(*v471)[1].klass,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_releaseAssetPath;
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)FsmVariables,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v473,
                                                                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v474 = *v471;
                                                              v475 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v475,
                                                                v474,
                                                                Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)AssetManager__loadAssetStorage(v473, v475, 1, 0LL);
                                                              if ( !*v471 )
                                                                goto LABEL_394;
                                                              monitor = (*v471)[1].monitor;
                                                              if ( !monitor )
                                                                goto LABEL_394;
                                                              v477 = (System_String_o **)(monitor[14] == 1
                                                                                        ? &StringLiteral_2389/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/
                                                                                        : &StringLiteral_2388/*"BACKSIDE_CLASS_IMAGE_ID"*/);
                                                              *(_DWORD *)(v464 + 16) = ConstantMaster__getValue(
                                                                                         *v477,
                                                                                         0LL);
                                                              v478 = (int32_t *)(v464 + 16);
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !FsmVariables )
                                                                goto LABEL_394;
                                                              v479 = DesignCardManager__GetDesignCardPath(
                                                                       (DesignCardManager_o *)FsmVariables,
                                                                       *v478,
                                                                       v409,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              if ( !AssetManager__isExistAssetStorage(v479, 0LL) )
                                                              {
                                                                FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !FsmVariables )
                                                                  goto LABEL_394;
                                                                v479 = DesignCardManager__GetDesignCardPath(
                                                                         (DesignCardManager_o *)FsmVariables,
                                                                         *v478,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)*p_releaseAssetPath;
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)FsmVariables,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v479,
                                                                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v480 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v480,
                                                                (Il2CppObject *)v464,
                                                                Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              v393 = v479;
                                                              v394 = v480;
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
    sub_B5D69C(Component_WebViewObject, v223);
  }
  if ( IsNewCard )
  {
    this->fields.isNoSkipAll = 1;
    if ( !LODWORD(Component_WebViewObject->fields.fsm) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  }
  v326 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&Component_WebViewObject->fields.m_CachedPtr
                                                                 + 32LL);
  if ( !v326 )
    goto LABEL_393;
  v327 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v326->fields.targetId;
  Component_WebViewObject = (PlayMakerFSM_o *)GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  }
  if ( !v327 )
    goto LABEL_393;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v327,
         (System_Xml_XmlQualifiedName_o *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v328 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v328 = GachaBehaviorMaster_TypeInfo;
    }
    v329 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             v327,
             (System_Type_o *)v328->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v324 = (PlayMakerFSM_o *)v329;
    if ( v329 )
    {
      v223 = string_TypeInfo;
      if ( (System_String_c *)v329->klass != string_TypeInfo )
        goto LABEL_397;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Component_WebViewObject,
            (WarBoardManager_TaskList_o *)v324,
            (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
      if ( !Component_WebViewObject )
        goto LABEL_393;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_WebViewObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v324,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    }
    Component_WebViewObject = (PlayMakerFSM_o *)this->fields.upAnimationNameList;
    if ( !Component_WebViewObject )
      goto LABEL_393;
    v330 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Component_WebViewObject,
             (WarBoardManager_TaskList_o *)v324,
             (const MethodInfo_3058070 *)Method_System_Collections_Generic_List_string__IndexOf__);
  }
  else
  {
    v330 = -1;
  }
  v420 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v420 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v327,
         (System_Xml_XmlQualifiedName_o *)v420->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v421 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v421 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v327,
                                                  (System_Type_o *)v421->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v422 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v422 = -1;
  }
  v423 = GachaBehaviorMaster_TypeInfo;
  v494 = v422;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v423 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v327,
         (System_Xml_XmlQualifiedName_o *)v423->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v424 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v424 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v327,
                                                  (System_Type_o *)v424->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v425 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v425 = -1;
  }
  v426 = GachaBehaviorMaster_TypeInfo;
  v491 = v425;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v426 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v327,
         (System_Xml_XmlQualifiedName_o *)v426->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v427 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v427 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v327,
                                                  (System_Type_o *)v427->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v428 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
  }
  else
  {
    v428 = -1;
  }
  v429 = GachaBehaviorMaster_TypeInfo;
  v493 = v428;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v429 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v327,
          (System_Xml_XmlQualifiedName_o *)v429->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v431 = -1;
    goto LABEL_269;
  }
  v430 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v430 = GachaBehaviorMaster_TypeInfo;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v327,
                                                (System_Type_o *)v430->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                                (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  if ( Component_WebViewObject->klass->_1.element_class != long_TypeInfo->_1.element_class )
  {
LABEL_395:
    sub_B5D990(Component_WebViewObject);
    goto LABEL_396;
  }
  v431 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_WebViewObject);
LABEL_269:
  v432 = GachaBehaviorMaster_TypeInfo;
  v433 = v323;
  v492 = v431;
  if ( v330 != -1 )
    v433 = v494 != -1;
  v490 = v433;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v432 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v327,
         (System_Xml_XmlQualifiedName_o *)v432->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                  (System_String_o *)StringLiteral_9795/*"NoticeRarity"*/,
                                                  0LL);
    if ( !Component_WebViewObject )
      goto LABEL_393;
    LODWORD(Component_WebViewObject[1].klass) = 3;
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
    v434 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v434 )
      goto LABEL_393;
    v435 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v434,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0LL);
    v436 = GachaBehaviorMaster_TypeInfo;
    v324 = (PlayMakerFSM_o *)v435;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v436 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v327,
                                                  (System_Type_o *)v436->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v324 )
      goto LABEL_393;
    v443 = Component_WebViewObject;
    if ( Component_WebViewObject && (System_String_c *)Component_WebViewObject->klass != string_TypeInfo )
      goto LABEL_396;
    v324[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v324[1],
      (System_Int32_array **)Component_WebViewObject,
      v437,
      v438,
      v439,
      v440,
      v441,
      v442);
  }
  v444 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v444 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v327,
          (System_Xml_XmlQualifiedName_o *)v444->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_305:
    v454 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v454 = GachaBehaviorMaster_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v327,
            (System_Xml_XmlQualifiedName_o *)v454->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
            (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v323 = v490;
      v331 = v330;
      goto LABEL_121;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
    v323 = v490;
    v455 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v455 )
      goto LABEL_393;
    v456 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v455,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
             0LL);
    v457 = GachaBehaviorMaster_TypeInfo;
    v324 = (PlayMakerFSM_o *)v456;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v457 = GachaBehaviorMaster_TypeInfo;
    }
    Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  v327,
                                                  (System_Type_o *)v457->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v324 )
      goto LABEL_393;
    v443 = Component_WebViewObject;
    v331 = v330;
    if ( !Component_WebViewObject || (System_String_c *)Component_WebViewObject->klass == string_TypeInfo )
    {
      v324[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v324[1],
        (System_Int32_array **)Component_WebViewObject,
        v458,
        v459,
        v460,
        v461,
        v462,
        v463);
      goto LABEL_121;
    }
    goto LABEL_396;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  Component_WebViewObject = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_3959/*"CardType"*/,
                                                0LL);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  LODWORD(Component_WebViewObject[1].klass) = 4;
  Component_WebViewObject = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(v230, 0LL);
  v445 = (HutongGames_PlayMaker_FsmVariables_o *)Component_WebViewObject;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v445 )
    goto LABEL_393;
  v446 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v445,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0LL);
  v447 = GachaBehaviorMaster_TypeInfo;
  v324 = (PlayMakerFSM_o *)v446;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v447 = GachaBehaviorMaster_TypeInfo;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v327,
                                                (System_Type_o *)v447->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                                (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v324 )
    goto LABEL_393;
  v443 = Component_WebViewObject;
  if ( !Component_WebViewObject || (System_String_c *)Component_WebViewObject->klass == string_TypeInfo )
  {
    v324[1].klass = (PlayMakerFSM_c *)Component_WebViewObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v324[1],
      (System_Int32_array **)Component_WebViewObject,
      v448,
      v449,
      v450,
      v451,
      v452,
      v453);
    goto LABEL_305;
  }
LABEL_396:
  sub_B5D990(v443);
LABEL_397:
  sub_B5D990(v324);
  SummonEffectComponent__ChangeClassCardColor(v486, v487, v488, v489);
}


void __fastcall SummonEffectComponent___endAnimation_b__43_0(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  PlayMakerFSM_o *Component_WebViewObject; // x0
  __int64 v21; // x1

  if ( (byte_42EC8F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5560/*"END_FADE"*/, v8, v9, v10);
    byte_42EC8F1 = 1;
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
    v13 = (UnityEngine_Object_o *)*p_effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v13, 0LL);
    *p_effect = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v14, v15, v16, v17, v18, v19);
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    sub_B5D69C(0LL, v21);
  PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5560/*"END_FADE"*/, 0LL);
}


void __fastcall SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EC8E5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonEffectComponent__endAnimation_b__43_0__, v11, v12, v13);
    byte_42EC8E5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
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
    sub_B5D69C(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__3(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SummonEffectComponent___c__DisplayClass45_0_o *v5; // x20
  struct SummonEffectComponent_o *_4__this; // x21
  UnityEngine_Transform_o *transform; // x0
  struct SummonEffectComponent_o *v8; // x21
  UnityEngine_Transform_o *v9; // x0
  struct SummonEffectComponent_o *v10; // x8
  struct SummonEffectComponent_o *v11; // x8
  struct SummonEffectComponent_o *v12; // x8
  DesignCardManager_o *v13; // x21
  UnityEngine_Transform_o *v14; // x0

  v5 = this;
  if ( (byte_42E646F & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_B5D5C4(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              (_DWORD)d,
                                                              (_DWORD)method,
                                                              v3);
    byte_42E646F = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  _4__this->fields.firstTr = TransformHelper__getNodeFromName(transform, v5->fields.cardFirstName, 1, 0LL);
  sub_B5D560(&_4__this->fields.firstTr);
  v8 = v5->fields.__4__this;
  if ( !v8 )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)v8->fields.effect;
  if ( !this )
    goto LABEL_16;
  v9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v8->fields.firstTPeelr = TransformHelper__getNodeFromName(v9, v5->fields.cardFirstPeelName, 1, 0LL);
  sub_B5D560(&v8->fields.firstTPeelr);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v10 = v5->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v10->fields.firstTr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v11 = v5->fields.__4__this;
  if ( !v11 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v11->fields.firstTPeelr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v12 = v5->fields.__4__this;
  if ( !v12
    || (v13 = (DesignCardManager_o *)this,
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v12->fields.effect) == 0LL)
    || (v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)TransformHelper__getNodeFromName(
                                                                  v14,
                                                                  v5->fields.cardSecondName,
                                                                  1,
                                                                  0LL),
        !v13)
    || (DesignCardManager__SetupCardImage(v13, d, (UnityEngine_Transform_o *)this, 1, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v5->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__4(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SummonEffectComponent___c__DisplayClass45_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct SummonEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x21
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Shader_o *v19; // x22
  UnityEngine_Material_o *v20; // x21
  UnityEngine_Texture_o *v21; // x22

  v5 = this;
  if ( (byte_42E6470 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UITexture___, (_DWORD)d, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v9, v10, v11);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_B5D5C4(&StringLiteral_4590/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v12, v13, v14);
    byte_42E6470 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v5->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0LL);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)NodeFromName,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v19 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4590/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0LL);
  v20 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v20, v19, 0LL);
  if ( !Component_WebViewObject
    || (v21 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(WebViewObject_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._2_GetHashCode.method)(
                                         Component_WebViewObject,
                                         Component_WebViewObject->klass[1].vtable._3_ToString.methodPtr),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)((__int64 (__fastcall *)(WebViewObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._1_Finalize.method)(
                                                                  Component_WebViewObject,
                                                                  v20,
                                                                  Component_WebViewObject->klass[1].vtable._2_GetHashCode.methodPtr),
        !v20)
    || (UnityEngine_Material__set_mainTexture(v20, v21, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v5->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(this, d);
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
  __int64 v3; // x3
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v7; // x1
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v10; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v12; // x8

  if ( (byte_42E6471 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, (_DWORD)d, (_DWORD)method, v3);
    byte_42E6471 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v10 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL),
        (v11 = this->fields.CS___8__locals1) == 0LL)
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v11->fields.cardSecondName,
                                                 1,
                                                 0LL),
        !v10)
    || (DesignCardManager__SetupCardImage(v10, d, (UnityEngine_Transform_o *)Instance, this->fields.classCardId, 0LL),
        (v12 = this->fields.CS___8__locals1) == 0LL)
    || (Instance = (UnityEngine_GameObject_o *)v12->fields.__4__this) == 0LL )
  {
LABEL_11:
    sub_B5D69C(Instance, v7);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_1___UpdateCardTexture_b__8(
        SummonEffectComponent___c__DisplayClass45_1_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SummonEffectComponent___c__DisplayClass45_1_o *v5; // x19
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v8; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v9; // x8
  struct SummonEffectComponent_o *v10; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v12; // x8
  struct SummonEffectComponent_o *v13; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v14; // x8
  struct SummonEffectComponent_o *v15; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v16; // x8
  struct SummonEffectComponent_o *v17; // x8
  DesignCardManager_o *v18; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v19; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v20; // x8

  v5 = this;
  if ( (byte_42E6472 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_B5D5C4(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              (_DWORD)d,
                                                              (_DWORD)method,
                                                              v3);
    byte_42E6472 = 1;
  }
  CS___8__locals1 = v5->fields.CS___8__locals1;
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
  v8 = v5->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_25;
  _4__this->fields.firstTr = TransformHelper__getNodeFromName(
                               (UnityEngine_Transform_o *)this,
                               v8->fields.cardFirstName,
                               1,
                               0LL);
  sub_B5D560(&_4__this->fields.firstTr);
  v9 = v5->fields.CS___8__locals1;
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
  v11 = v5->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_25;
  v10->fields.firstTPeelr = TransformHelper__getNodeFromName(
                              (UnityEngine_Transform_o *)this,
                              v11->fields.cardFirstPeelName,
                              1,
                              0LL);
  sub_B5D560(&v10->fields.firstTPeelr);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v12 = v5->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_25;
  v13 = v12->fields.__4__this;
  if ( !v13 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v13->fields.firstTr, v5->fields.classCardId, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v14 = v5->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_25;
  v15 = v14->fields.__4__this;
  if ( !v15 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage(
    (DesignCardManager_o *)this,
    d,
    v15->fields.firstTPeelr,
    v5->fields.classCardId,
    0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v16 = v5->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_25;
  v17 = v16->fields.__4__this;
  if ( !v17 )
    goto LABEL_25;
  v18 = (DesignCardManager_o *)this;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)v17->fields.effect;
  if ( !this
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL),
        (v19 = v5->fields.CS___8__locals1) == 0LL)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)TransformHelper__getNodeFromName(
                                                                  (UnityEngine_Transform_o *)this,
                                                                  v19->fields.cardSecondName,
                                                                  1,
                                                                  0LL),
        !v18)
    || (DesignCardManager__SetupCardImage(v18, d, (UnityEngine_Transform_o *)this, v5->fields.classCardId, 0LL),
        (v20 = v5->fields.CS___8__locals1) == 0LL)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)v20->fields.__4__this) == 0LL )
  {
LABEL_25:
    sub_B5D69C(this, d);
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
  __int64 v3; // x3
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v7; // x1
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals2; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v11; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v14; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v15; // x8
  struct SummonEffectComponent_o *v16; // x8
  DesignCardManager_o *v17; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v18; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v19; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v20; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v21; // x8

  if ( (byte_42E6473 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, (_DWORD)d, (_DWORD)method, v3);
    byte_42E6473 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_21;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_21;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  v11 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  v12 = this->fields.CS___8__locals2;
  if ( !v12 )
    goto LABEL_21;
  v13 = v12->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                           (UnityEngine_Transform_o *)Instance,
                                           v13->fields.cardFirstName,
                                           1,
                                           0LL);
  if ( !v11 )
    goto LABEL_21;
  DesignCardManager__SetupCardImage(v11, d, (UnityEngine_Transform_o *)Instance, this->fields.beforeClassCardId, 0LL);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v14 = this->fields.CS___8__locals2;
  if ( !v14 )
    goto LABEL_21;
  v15 = v14->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_21;
  v16 = v15->fields.__4__this;
  if ( !v16 )
    goto LABEL_21;
  v17 = (DesignCardManager_o *)Instance;
  Instance = v16->fields.effect;
  if ( !Instance )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  v18 = this->fields.CS___8__locals2;
  if ( !v18
    || (v19 = v18->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v19->fields.cardFirstPeelName,
                                                 1,
                                                 0LL),
        !v17)
    || (DesignCardManager__SetupCardImage(
          v17,
          d,
          (UnityEngine_Transform_o *)Instance,
          this->fields.beforeClassCardId,
          0LL),
        (v20 = this->fields.CS___8__locals2) == 0LL)
    || (v21 = v20->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)v21->fields.__4__this) == 0LL )
  {
LABEL_21:
    sub_B5D69C(Instance, v7);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_2___UpdateCardTexture_b__6(
        SummonEffectComponent___c__DisplayClass45_2_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v7; // x1
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals2; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v11; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v14; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v15; // x8

  if ( (byte_42E6474 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, (_DWORD)d, (_DWORD)method, v3);
    byte_42E6474 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_14;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v11 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance )
    goto LABEL_14;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  v12 = this->fields.CS___8__locals2;
  if ( !v12
    || (v13 = v12->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v13->fields.cardRotName,
                                                 1,
                                                 0LL),
        !v11)
    || (DesignCardManager__SetupCardImage(v11, d, (UnityEngine_Transform_o *)Instance, this->fields.classBackId, 0LL),
        (v14 = this->fields.CS___8__locals2) == 0LL)
    || (v15 = v14->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)v15->fields.__4__this) == 0LL )
  {
LABEL_14:
    sub_B5D69C(Instance, v7);
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
  __int64 v3; // x3
  SummonEffectComponent___c__DisplayClass45_3_o *v5; // x19
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
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals3; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v21; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v22; // x8
  UnityEngine_Transform_o *NodeFromName; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v24; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v25; // x8
  SummonEffectComponent___c__DisplayClass45_3_o *v26; // x20
  System_String_o **v27; // x8
  UnityEngine_Shader_o *v28; // x22
  UnityEngine_Material_o *v29; // x21
  UnityEngine_Texture_o *v30; // x22
  struct SummonEffectComponent___c__DisplayClass45_1_o *v31; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v32; // x8

  v5 = this;
  if ( (byte_42E6475 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UITexture___, (_DWORD)d, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_15172/*"Unlit/Transparent Colored"*/, v12, v13, v14);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_B5D5C4(&StringLiteral_4590/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v15, v16, v17);
    byte_42E6475 = 1;
  }
  CS___8__locals3 = v5->fields.CS___8__locals3;
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
  v21 = v5->fields.CS___8__locals3;
  if ( !v21 )
    goto LABEL_22;
  v22 = v21->fields.CS___8__locals1;
  if ( !v22 )
    goto LABEL_22;
  NodeFromName = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v22->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v5->fields.backImageId, 0LL);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v24 = v5->fields.CS___8__locals3;
  if ( !v24 )
    goto LABEL_22;
  v25 = v24->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_22;
  v26 = this;
  v27 = (System_String_o **)(v25->fields.cardType == 1 ? &StringLiteral_4590/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15172/*"Unlit/Transparent Colored"*/);
  v28 = UnityEngine_Shader__Find(*v27, 0LL);
  v29 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v29, v28, 0LL);
  if ( !v26
    || (v30 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, void *))v26->klass[1].vtable._3_ToString.method)(
                                         v26,
                                         v26->klass[2]._1.image),
        this = (SummonEffectComponent___c__DisplayClass45_3_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v26->klass[1].vtable._2_GetHashCode.method)(
                                                                  v26,
                                                                  v29,
                                                                  v26->klass[1].vtable._3_ToString.methodPtr),
        !v29)
    || (UnityEngine_Material__set_mainTexture(v29, v30, 0LL), (v31 = v5->fields.CS___8__locals3) == 0LL)
    || (v32 = v31->fields.CS___8__locals1) == 0LL
    || (this = (SummonEffectComponent___c__DisplayClass45_3_o *)v32->fields.__4__this) == 0LL )
  {
LABEL_22:
    sub_B5D69C(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}