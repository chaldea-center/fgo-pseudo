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

  if ( (byte_40FBFFD & 1) == 0 )
  {
    sub_B16FFC(&SummonEffectComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_22352, v8);
    sub_B16FFC(&StringLiteral_22350, v9);
    sub_B16FFC(&StringLiteral_6909, v10);
    sub_B16FFC(&StringLiteral_22351, v11);
    sub_B16FFC(&StringLiteral_22349, v12);
    sub_B16FFC(&StringLiteral_11247, v13);
    sub_B16FFC(&StringLiteral_14993, v14);
    sub_B16FFC(&StringLiteral_7594, v15);
    byte_40FBFFD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SummonEffectComponent_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_22349;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22349;
  sub_B16F98(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = SummonEffectComponent_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_22350;
  v18->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_22350;
  sub_B16F98((BattleServantConfConponent_o *)&v18->RANKUP_TO_SILVER_ANIMATION, v19, v20, v21, v22, v23, v24, v25);
  v26 = SummonEffectComponent_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_22351;
  v26->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_22351;
  sub_B16F98((BattleServantConfConponent_o *)&v26->RANKUP_TO_GOLD_ANIMATION, v27, v28, v29, v30, v31, v32, v33);
  v34 = SummonEffectComponent_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_22352;
  v34->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_22352;
  sub_B16F98((BattleServantConfConponent_o *)&v34->RANKUP_COMMANDCODE_ANIMATION, v35, v36, v37, v38, v39, v40, v41);
  v42 = SummonEffectComponent_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_14993;
  v42->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_14993;
  sub_B16F98((BattleServantConfConponent_o *)&v42->FSM_VARIABLE_UP_ANIMATION_NAME, v43, v44, v45, v46, v47, v48, v49);
  v50 = SummonEffectComponent_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_7594;
  v50->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7594;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v50->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = SummonEffectComponent_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_11247;
  v58->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11247;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v58->FSM_VARIABLE_RARITY_ANIMATION_NAME,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = SummonEffectComponent_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_6909;
  v66->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_6909;
  sub_B16F98((BattleServantConfConponent_o *)&v66->FSM_VARIABLE_GET_ANIMATION_NAME, v67, v68, v69, v70, v71, v72, v73);
  v74 = SummonEffectComponent_TypeInfo->static_fields;
  v74->rarityToColor = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v74->rarityToColor, 0LL, v75, v76, v77, v78, v79, v80);
}


void __fastcall SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct System_Int32_array *v5; // x0
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

  if ( (byte_40FBFFC & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FBFFC = 1;
  }
  v5 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 2LL, v2);
  if ( !v5 )
    sub_B170D4();
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 512, max_length == 1) )
  {
    sub_B17100(v5, v5, v6);
    sub_B170A0();
  }
  v5->m_Items[2] = 875;
  this->fields.cardTextureSize = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cardTextureSize,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (System_Int32_array **)StringLiteral_1;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.effAnimName, v13, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_40FBFEC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__, *(_QWORD *)&servantId);
    sub_B16FFC(&SummonEffectComponent_SummonInfo_TypeInfo, v18);
    byte_40FBFEC = 1;
  }
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = this->fields.SummonInfos;
  }
  v20 = (SummonEffectComponent_SummonInfo_o *)sub_B170CC(
                                                SummonEffectComponent_SummonInfo_TypeInfo,
                                                *(_QWORD *)&servantId,
                                                *(_QWORD *)&limitCount,
                                                isRankup,
                                                isNewCard);
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
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SummonInfos,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonEffectComponent__ChangeClassCardColor(
        SummonEffectComponent_o *this,
        UnityEngine_Transform_o *cardNode,
        int32_t col,
        const MethodInfo *method)
{
  SummonEffectComponent_o *v6; // x20
  struct UnityEngine_Texture2D_array *testCards; // x8
  UnityEngine_Texture2D_o *v8; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  UITexture_o *v10; // x19
  float v11; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s7
  struct System_Int32_array *cardTextureSize; // x8
  UnityEngine_Rect_o v16; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_40FBFF5 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITexture___, cardNode);
    byte_40FBFF5 = 1;
  }
  testCards = v6->fields.testCards;
  if ( !testCards )
    goto LABEL_10;
  if ( testCards->max_length <= col )
    goto LABEL_11;
  if ( !cardNode
    || (v8 = testCards->m_Items[col],
        (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)cardNode,
                                     (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL)
    || (v10 = (UITexture_o *)Component_WebViewObject,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(WebViewObject_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._3_ToString.method)(
                                            Component_WebViewObject,
                                            v8,
                                            Component_WebViewObject->klass[1].vtable._4_OnDestroy.methodPtr),
        (cardTextureSize = v6->fields.cardTextureSize) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  if ( cardTextureSize->max_length <= 1 )
  {
LABEL_11:
    sub_B17100(this, cardNode, *(_QWORD *)&col);
    sub_B170A0();
  }
  v17.fields.m_Width = 0.5;
  v17.fields.m_Height = (float)cardTextureSize->m_Items[2] * 0.00097656;
  v17.fields.m_YMin = 1.0 - v17.fields.m_Height;
  v17.fields.m_XMin = 0.0;
  *(_QWORD *)&v16.fields.m_XMin = 0LL;
  *(_QWORD *)&v16.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v17, v11, v12, v13, v14, (const MethodInfo *)&v16);
  UITexture__set_uvRect(v10, v16, 0LL);
}


void __fastcall SummonEffectComponent__CompleteCallback(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t counterMax; // w9
  int32_t v5; // w8
  PlayMakerFSM_o *Component_WebViewObject; // x0

  if ( (byte_40FBFF6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&StringLiteral_12012, v3);
    byte_40FBFF6 = 1;
  }
  counterMax = this->fields._counterMax;
  v5 = this->fields._counter + 1;
  this->fields._counter = v5;
  if ( v5 >= counterMax )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B170D4();
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_12012, 0LL);
  }
}


void __fastcall SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  CommonUI_o *Instance; // x19

  if ( (byte_40FBFEE & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_40FBFEE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  PlayMakerFSM_o *Component_WebViewObject; // x0
  PlayMakerFSM_o *v21; // x20
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x8
  HutongGames_PlayMaker_FsmVariables_o *v25; // x0
  HutongGames_PlayMaker_FsmBool_o *FsmBool; // x0
  HutongGames_PlayMaker_FsmVariables_o *v27; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  UnityEngine_GameObject_o *Value; // x0
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_upAnimationNameList; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x21
  CommonUI_o *Instance; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v57; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  AssetLoader_LoadEndDataHandler_o *v64; // x22
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FBFEF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__, v11);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&Method_SummonEffectComponent_OnCharaGraphLoadDone__, v15);
    sub_B16FFC(&SummonEffectComponent_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_8150, v17);
    sub_B16FFC(&StringLiteral_17652, v18);
    sub_B16FFC(&StringLiteral_13102, v19);
    byte_40FBFEF = 1;
  }
  memset(&v66, 0, sizeof(v66));
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_32;
  v21 = Component_WebViewObject;
  FsmVariables = PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  if ( !FsmVariables )
    goto LABEL_32;
  FsmInt = HutongGames_PlayMaker_FsmVariables__GetFsmInt(FsmVariables, (System_String_o *)StringLiteral_17652, 0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_32;
  if ( !FsmInt )
    goto LABEL_32;
  FsmInt->fields.value = SummonInfos->fields._size;
  v25 = PlayMakerFSM__get_FsmVariables(v21, 0LL);
  if ( !v25 )
    goto LABEL_32;
  FsmBool = HutongGames_PlayMaker_FsmVariables__GetFsmBool(v25, (System_String_o *)StringLiteral_8150, 0LL);
  if ( !FsmBool )
    goto LABEL_32;
  FsmBool->fields.value = this->fields.isNoSkip;
  v27 = PlayMakerFSM__get_FsmVariables(v21, 0LL);
  if ( !v27 )
    goto LABEL_32;
  FsmGameObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(v27, (System_String_o *)StringLiteral_13102, 0LL);
  if ( !FsmGameObject )
    goto LABEL_32;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value(FsmGameObject, 0LL);
  if ( !Value )
    goto LABEL_32;
  Component_srcLineSprite = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Value,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39,
                                                                                                  v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  p_upAnimationNameList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.upAnimationNameList;
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.upAnimationNameList,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  upAnimationNameList = this->fields.upAnimationNameList;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !upAnimationNameList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)upAnimationNameList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__),
        !*p_upAnimationNameList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_upAnimationNameList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__),
        !*p_upAnimationNameList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_upAnimationNameList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__),
        !*p_upAnimationNameList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_upAnimationNameList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode(Instance, 1, 0LL),
        (v51 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.SummonInfos) == 0LL) )
  {
LABEL_32:
    sub_B170D4();
  }
  this->fields.DownloadCounter = v51->fields._size;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    v51,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v66,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__) )
  {
    if ( !v66.fields.current )
      sub_B170D4();
    klass = (int32_t)v66.fields.current[1].klass;
    if ( HIDWORD(v66.fields.current[2].klass) == 3 )
    {
      v57 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v52, v53, v54, v55);
      AssetLoader_LoadEndDataHandler___ctor(
        v57,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadCommandAsset(klass, v57, 0LL);
    }
    else
    {
      klass_high = HIDWORD(v66.fields.current[1].klass);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0LL);
      v64 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v60, v61, v62, v63);
      AssetLoader_LoadEndDataHandler___ctor(
        v64,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v64, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v66,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void __fastcall SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FBFEB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo, v6);
    byte_40FBFEB = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.SummonInfos,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  PlayMakerFSM_o *Component_WebViewObject; // x0

  if ( (byte_40FBFF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, loadData);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_7267, v5);
    byte_40FBFF0 = 1;
  }
  v6 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v6;
  if ( !v6 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode(Instance, 0, 0LL),
          (Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0LL) )
    {
      sub_B170D4();
    }
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_7267, 0LL);
  }
}


void __fastcall SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *Component_WebViewObject; // x0

  if ( (byte_40FBFFB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&StringLiteral_5699, v3);
    byte_40FBFFB = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_WebViewObject )
      sub_B170D4();
    PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5699, 0LL);
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

  if ( (byte_40FBFF1 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_40FBFF1 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseAssetPath,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
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
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v10 = this->fields._releaseAssetPath;
    if ( !v10 )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
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
  PlayMakerFSM_o *Component_WebViewObject; // x0
  PlayMakerFSM_o *v8; // x20
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  int32_t Value; // w0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x22
  unsigned int size; // w8
  __int64 items; // x8
  struct System_String_o *v21; // x1
  HutongGames_PlayMaker_FsmVariables_o *v22; // x20
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **effAnimName; // x1

  if ( (byte_40FBFF7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v4);
    sub_B16FFC(&SummonEffectComponent_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11234, v6);
    byte_40FBFF7 = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject
    || (v8 = Component_WebViewObject,
        (FsmVariables = PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL)) == 0LL)
    || (FsmInt = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                   FsmVariables,
                   (System_String_o *)StringLiteral_11234,
                   0LL)) == 0LL )
  {
LABEL_22:
    sub_B170D4();
  }
  Value = HutongGames_PlayMaker_FsmInt__get_Value(FsmInt, 0LL);
  upAnimationNameList = this->fields.upAnimationNameList;
  if ( (Value & 0x80000000) != 0 )
  {
    if ( !upAnimationNameList )
      goto LABEL_22;
  }
  else
  {
    if ( !upAnimationNameList )
      goto LABEL_22;
    size = upAnimationNameList->fields._size;
    if ( Value < (int)size )
    {
      if ( size <= Value )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      items = (__int64)upAnimationNameList->fields._items + 8 * Value;
      goto LABEL_16;
    }
  }
  if ( !upAnimationNameList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  items = (__int64)upAnimationNameList->fields._items;
LABEL_16:
  v21 = *(struct System_String_o **)(items + 32);
  this->fields.effAnimName = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effAnimName,
    (System_Int32_array **)v21,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = PlayMakerFSM__get_FsmVariables(v8, 0LL);
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v22 )
    goto LABEL_22;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v22,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                0LL);
  if ( !FsmString )
    goto LABEL_22;
  effAnimName = (System_Int32_array **)this->fields.effAnimName;
  FsmString->fields.value = (struct System_String_o *)effAnimName;
  sub_B16F98((BattleServantConfConponent_o *)&FsmString->fields.value, effAnimName, v24, v25, v26, v27, v28, v29);
}


void __fastcall SummonEffectComponent__SetUpInitializeAnimation(
        SummonEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *Component_WebViewObject; // x0
  PlayMakerFSM_o *v6; // x19
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x20
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *Value; // x0

  if ( (byte_40FBFF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&SummonEffectComponent_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_7260, v4);
    byte_40FBFF8 = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_11;
  v6 = Component_WebViewObject;
  FsmVariables = PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !FsmVariables
    || (FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                      FsmVariables,
                      SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                      0LL)) == 0LL )
  {
LABEL_11:
    sub_B170D4();
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) )
    PlayMakerFSM__SendEvent(v6, (System_String_o *)StringLiteral_7260, 0LL);
}


void __fastcall SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SummonEffectComponent_c *v8; // x0
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v9; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  SummonEffectComponent_c *v16; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_40FBFED & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__,
      method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo, v6);
    sub_B16FFC(&SummonEffectComponent_TypeInfo, v7);
    byte_40FBFED = 1;
  }
  v8 = SummonEffectComponent_TypeInfo;
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v8 = SummonEffectComponent_TypeInfo;
  }
  if ( !v8->static_fields->rarityToColor )
  {
    v9 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B170CC(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo, method, v2, v3, v4);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
      v9,
      (const MethodInfo_2DFB4F0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v9 )
      sub_B170D4();
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v9,
      0,
      0,
      (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v9,
      1,
      0,
      (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v9,
      2,
      0,
      (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v9,
      3,
      1,
      (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v9,
      4,
      2,
      (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v9,
      5,
      2,
      (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v9,
      101,
      0,
      (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
      v9,
      102,
      0,
      (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v16 = SummonEffectComponent_TypeInfo;
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v16 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v16->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&static_fields->rarityToColor,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
}


void __fastcall SummonEffectComponent__StopRarityAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *Component_WebViewObject; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x20
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *Value; // x0
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v11; // x20
  UnityEngine_Animation_o *v12; // x0
  UnityEngine_Animation_o *v13; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  UnityEngine_Animation_o *v16; // x0

  if ( (byte_40FBFFA & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&SummonEffectComponent_TypeInfo, v5);
    byte_40FBFFA = 1;
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_25;
  FsmVariables = PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !FsmVariables )
    goto LABEL_25;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                FsmVariables,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0LL);
  if ( !FsmString )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v11 = Value;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0LL, 0LL) && !System_String__IsNullOrEmpty(v11, 0LL) )
  {
    v12 = this->fields.effAnimation;
    if ( v12 )
    {
      if ( !UnityEngine_Animation__IsPlaying(v12, v11, 0LL) )
        return;
      v13 = this->fields.effAnimation;
      if ( v13 )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v13, v11, 0LL);
        if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
          return;
        if ( Item )
        {
          length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0LL);
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, length, 0LL);
          UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 1, 0LL);
          v16 = this->fields.effAnimation;
          if ( v16 )
          {
            UnityEngine_Animation__Sample(v16, 0LL);
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
    sub_B170D4();
  }
}


void __fastcall SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *effAnimation; // x20
  UnityEngine_Animation_o *v5; // x0
  UnityEngine_Animation_o *v6; // x0
  UnityEngine_AnimationState_o *Item; // x20
  float length; // s0
  UnityEngine_Animation_o *v9; // x0
  UnityEngine_Component_o *v10; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x8
  WarBoardControlPlayTalkUiComponent_array *v15; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v17; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FBFF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____66819888, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FBFF9 = 1;
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
  v5 = this->fields.effAnimation;
  if ( !v5 )
    goto LABEL_29;
  if ( !UnityEngine_Animation__IsPlaying(v5, this->fields.effAnimName, 0LL) )
    return;
  v6 = this->fields.effAnimation;
  if ( !v6 )
    goto LABEL_29;
  Item = UnityEngine_Animation__get_Item(v6, this->fields.effAnimName, 0LL);
  if ( UnityEngine_TrackedReference__op_Inequality((UnityEngine_TrackedReference_o *)Item, 0LL, 0LL) )
  {
    if ( Item )
    {
      length = UnityEngine_AnimationState__get_length(Item, 0LL);
      UnityEngine_AnimationState__set_time(Item, length, 0LL);
      UnityEngine_AnimationState__set_enabled(Item, 1, 0LL);
      v9 = this->fields.effAnimation;
      if ( v9 )
      {
        UnityEngine_Animation__Sample(v9, 0LL);
        UnityEngine_AnimationState__set_enabled(Item, 0, 0LL);
        goto LABEL_15;
      }
    }
LABEL_29:
    sub_B170D4();
  }
LABEL_15:
  v10 = (UnityEngine_Component_o *)this->fields.effAnimation;
  if ( !v10 )
    goto LABEL_29;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v10,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____66819888);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_29;
  v14 = *(_QWORD *)&ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v15 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( (int)v14 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v14; ++i )
    {
      if ( i >= (unsigned int)v14 )
      {
        sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v12, v13);
        sub_B170A0();
      }
      v17 = (UnityEngine_Object_o *)v15->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
      if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_29;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
        if ( !gameObject )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      LODWORD(v14) = v15->max_length;
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
  PlayMakerFSM_o *Component_WebViewObject; // x0
  PlayMakerFSM_o *v16; // x20
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  int32_t Value; // w0
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x22
  SummonEffectComponent_SummonInfo_o *v21; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v22; // x22
  int32_t ServantId; // w28
  SummonEffectComponent_SummonInfo_o *v24; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v25; // x22
  int32_t LimitCount; // w27
  SummonEffectComponent_SummonInfo_o *v27; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v28; // x22
  bool IsRankUp; // w26
  SummonEffectComponent_SummonInfo_o *v30; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v31; // x22
  _BOOL4 IsNewCard; // w24
  SummonEffectComponent_SummonInfo_o *v33; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v34; // x22
  SummonEffectComponent_SummonInfo_o *v35; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v36; // x25
  int32_t Rarity; // w22
  SummonEffectComponent_SummonInfo_o *v38; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v39; // x24
  int32_t CardType; // w25
  SummonEffectComponent_SummonInfo_o *v41; // x8
  bool IsSkipStop; // w21
  HutongGames_PlayMaker_FsmVariables_o *v43; // x0
  HutongGames_PlayMaker_FsmInt_o *v44; // x0
  HutongGames_PlayMaker_FsmVariables_o *v45; // x0
  HutongGames_PlayMaker_FsmInt_o *v46; // x0
  HutongGames_PlayMaker_FsmVariables_o *v47; // x0
  HutongGames_PlayMaker_FsmBool_o *FsmBool; // x0
  HutongGames_PlayMaker_FsmVariables_o *v49; // x0
  HutongGames_PlayMaker_FsmBool_o *v50; // x0
  HutongGames_PlayMaker_FsmVariables_o *v51; // x21
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  HutongGames_PlayMaker_FsmVariables_o *v59; // x0
  HutongGames_PlayMaker_FsmString_o *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  HutongGames_PlayMaker_FsmVariables_o *v67; // x0
  HutongGames_PlayMaker_FsmString_o *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  HutongGames_PlayMaker_FsmVariables_o *v75; // x0
  HutongGames_PlayMaker_FsmBool_o *v76; // x0
  HutongGames_PlayMaker_FsmVariables_o *v77; // x0
  HutongGames_PlayMaker_FsmInt_o *v78; // x0
  HutongGames_PlayMaker_FsmVariables_o *v79; // x0
  HutongGames_PlayMaker_FsmInt_o *v80; // x0
  int v81; // w21
  HutongGames_PlayMaker_FsmVariables_o *v82; // x0
  HutongGames_PlayMaker_FsmInt_o *v83; // x0
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20
  UnityEngine_Component_o *v86; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v88; // x0
  UnityEngine_GameObject_o *v89; // x0
  _BOOL4 v90; // [xsp+8h] [xbp-58h]
  int32_t NoticeRarity; // [xsp+Ch] [xbp-54h]

  if ( (byte_40FBFF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&SummonEffectComponent_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8149, v6);
    sub_B16FFC(&StringLiteral_17651, v7);
    sub_B16FFC(&StringLiteral_8162, v8);
    sub_B16FFC(&StringLiteral_8166, v9);
    sub_B16FFC(&StringLiteral_8493, v10);
    sub_B16FFC(&StringLiteral_9667, v11);
    sub_B16FFC(&StringLiteral_3879, v12);
    sub_B16FFC(&StringLiteral_11245, v13);
    sub_B16FFC(&StringLiteral_12661, v14);
    byte_40FBFF3 = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_82;
  v16 = Component_WebViewObject;
  FsmVariables = PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  if ( !FsmVariables )
    goto LABEL_82;
  FsmInt = HutongGames_PlayMaker_FsmVariables__GetFsmInt(FsmVariables, (System_String_o *)StringLiteral_17651, 0LL);
  if ( !FsmInt )
    goto LABEL_82;
  Value = HutongGames_PlayMaker_FsmInt__get_Value(FsmInt, 0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_82;
  if ( SummonInfos->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v21 = SummonInfos->fields._items->m_Items[Value];
  if ( !v21 )
    goto LABEL_82;
  v22 = this->fields.SummonInfos;
  if ( !v22 )
    goto LABEL_82;
  ServantId = v21->fields.ServantId;
  if ( v22->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v24 = v22->fields._items->m_Items[Value];
  if ( !v24 )
    goto LABEL_82;
  v25 = this->fields.SummonInfos;
  if ( !v25 )
    goto LABEL_82;
  LimitCount = v24->fields.LimitCount;
  if ( v25->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v27 = v25->fields._items->m_Items[Value];
  if ( !v27 )
    goto LABEL_82;
  v28 = this->fields.SummonInfos;
  if ( !v28 )
    goto LABEL_82;
  IsRankUp = v27->fields.IsRankUp;
  if ( v28->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v30 = v28->fields._items->m_Items[Value];
  if ( !v30 )
    goto LABEL_82;
  v31 = this->fields.SummonInfos;
  if ( !v31 )
    goto LABEL_82;
  IsNewCard = v30->fields.IsNewCard;
  if ( v31->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v33 = v31->fields._items->m_Items[Value];
  if ( !v33 )
    goto LABEL_82;
  v34 = this->fields.SummonInfos;
  if ( !v34 )
    goto LABEL_82;
  NoticeRarity = v33->fields.NoticeRarity;
  if ( v34->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v90 = IsNewCard;
  v35 = v34->fields._items->m_Items[Value];
  if ( !v35 )
    goto LABEL_82;
  v36 = this->fields.SummonInfos;
  if ( !v36 )
    goto LABEL_82;
  Rarity = v35->fields.Rarity;
  if ( v36->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v38 = v36->fields._items->m_Items[Value];
  if ( !v38 )
    goto LABEL_82;
  v39 = this->fields.SummonInfos;
  if ( !v39 )
    goto LABEL_82;
  CardType = v38->fields.CardType;
  if ( v39->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v41 = v39->fields._items->m_Items[Value];
  if ( !v41 )
    goto LABEL_82;
  IsSkipStop = v41->fields.IsSkipStop;
  v43 = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !v43 )
    goto LABEL_82;
  v44 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v43, (System_String_o *)StringLiteral_12661, 0LL);
  if ( !v44 )
    goto LABEL_82;
  v44->fields.value = ServantId;
  v45 = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !v45 )
    goto LABEL_82;
  v46 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v45, (System_String_o *)StringLiteral_8493, 0LL);
  if ( !v46 )
    goto LABEL_82;
  v46->fields.value = LimitCount;
  v47 = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !v47 )
    goto LABEL_82;
  FsmBool = HutongGames_PlayMaker_FsmVariables__GetFsmBool(v47, (System_String_o *)StringLiteral_8162, 0LL);
  if ( !FsmBool )
    goto LABEL_82;
  FsmBool->fields.value = IsRankUp;
  v49 = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !v49 )
    goto LABEL_82;
  v50 = HutongGames_PlayMaker_FsmVariables__GetFsmBool(v49, (System_String_o *)StringLiteral_8166, 0LL);
  if ( !v50 )
    goto LABEL_82;
  v50->fields.value = IsSkipStop;
  v51 = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v51 )
    goto LABEL_82;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v51,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                0LL);
  if ( !FsmString )
    goto LABEL_82;
  FsmString->fields.value = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&FsmString->fields.value, 0LL, v53, v54, v55, v56, v57, v58);
  v59 = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !v59 )
    goto LABEL_82;
  v60 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
          v59,
          SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
          0LL);
  if ( !v60 )
    goto LABEL_82;
  v60->fields.value = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v60->fields.value, 0LL, v61, v62, v63, v64, v65, v66);
  v67 = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !v67 )
    goto LABEL_82;
  v68 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
          v67,
          SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
          0LL);
  if ( !v68 )
    goto LABEL_82;
  v68->fields.value = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v68->fields.value, 0LL, v69, v70, v71, v72, v73, v74);
  v75 = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !v75 )
    goto LABEL_82;
  v76 = HutongGames_PlayMaker_FsmVariables__GetFsmBool(v75, (System_String_o *)StringLiteral_8149, 0LL);
  if ( !v76 )
    goto LABEL_82;
  v76->fields.value = v90 || Rarity == 0;
  v77 = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !v77 )
    goto LABEL_82;
  v78 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v77, (System_String_o *)StringLiteral_9667, 0LL);
  if ( !v78 )
    goto LABEL_82;
  v78->fields.value = NoticeRarity;
  v79 = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !v79 )
    goto LABEL_82;
  v80 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v79, (System_String_o *)StringLiteral_3879, 0LL);
  if ( !v80 )
    goto LABEL_82;
  v80->fields.value = CardType;
  if ( (unsigned int)(Rarity - 3) >= 3 )
    v81 = Rarity ? 0 : 3;
  else
    v81 = dword_3137A9C[Rarity - 3];
  v82 = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !v82 )
    goto LABEL_82;
  v83 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v82, (System_String_o *)StringLiteral_11245, 0LL);
  if ( !v83 )
    goto LABEL_82;
  v83->fields.value = v81;
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
      v86 = (UnityEngine_Component_o *)this->fields.firstTr;
      if ( v86 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v86, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          v88 = (UnityEngine_Component_o *)this->fields.firstTPeelr;
          if ( v88 )
          {
            v89 = UnityEngine_Component__get_gameObject(v88, 0LL);
            if ( v89 )
            {
              UnityEngine_GameObject__SetActive(v89, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_82:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x21
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  PlayMakerFSM_o *Component_WebViewObject; // x0
  PlayMakerFSM_o *v86; // x23
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  int32_t Value; // w0
  const MethodInfo *v90; // x1
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x22
  SummonEffectComponent_SummonInfo_o *v92; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v93; // x22
  SummonEffectComponent_SummonInfo_o *v94; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v95; // x22
  SummonEffectComponent_SummonInfo_o *v96; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v97; // x22
  _BOOL4 IsRankUp; // w25
  SummonEffectComponent_SummonInfo_o *v99; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v100; // x22
  _BOOL4 IsNewCard; // w28
  SummonEffectComponent_SummonInfo_o *v102; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v103; // x26
  int32_t NoticeRarity; // w22
  SummonEffectComponent_SummonInfo_o *v105; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v106; // x26
  int Rarity; // w27
  SummonEffectComponent_SummonInfo_o *v108; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v109; // x26
  SummonEffectComponent_SummonInfo_o *v110; // x8
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *v111; // x27
  bool IsSkipStop; // w26
  SummonEffectComponent_SummonInfo_o *v113; // x8
  int64_t userServantId; // x27
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v119; // x19
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  HutongGames_PlayMaker_FsmVariables_o *v126; // x0
  HutongGames_PlayMaker_FsmInt_o *v127; // x0
  HutongGames_PlayMaker_FsmVariables_o *v128; // x0
  HutongGames_PlayMaker_FsmInt_o *v129; // x0
  HutongGames_PlayMaker_FsmVariables_o *v130; // x0
  HutongGames_PlayMaker_FsmBool_o *FsmBool; // x0
  HutongGames_PlayMaker_FsmVariables_o *v132; // x0
  HutongGames_PlayMaker_FsmBool_o *v133; // x0
  HutongGames_PlayMaker_FsmVariables_o *v134; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  HutongGames_PlayMaker_FsmVariables_o *v142; // x0
  HutongGames_PlayMaker_FsmBool_o *v143; // x0
  HutongGames_PlayMaker_FsmVariables_o *v144; // x0
  HutongGames_PlayMaker_FsmInt_o *v145; // x0
  HutongGames_PlayMaker_FsmVariables_o *v146; // x0
  HutongGames_PlayMaker_FsmInt_o *v147; // x0
  int v148; // w22
  HutongGames_PlayMaker_FsmVariables_o *v149; // x0
  HutongGames_PlayMaker_FsmInt_o *v150; // x0
  HutongGames_PlayMaker_FsmVariables_o *v151; // x19
  HutongGames_PlayMaker_FsmString_o *v152; // x19
  Il2CppObject *v153; // x0
  System_Int32_array **v154; // x0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  HutongGames_PlayMaker_FsmVariables_o *v161; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  struct UnityEngine_GameObject_o *v163; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  HutongGames_PlayMaker_FsmVariables_o *v171; // x0
  HutongGames_PlayMaker_FsmString_o *v172; // x0
  System_String_o *v173; // x22
  HutongGames_PlayMaker_FsmVariables_o *v174; // x0
  HutongGames_PlayMaker_FsmFloat_o *FsmFloat; // x0
  float v176; // s8
  HutongGames_PlayMaker_FsmVariables_o *v177; // x0
  HutongGames_PlayMaker_FsmString_o *v178; // x0
  System_Int32_array **v179; // x0
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  HutongGames_PlayMaker_FsmVariables_o *v186; // x0
  HutongGames_PlayMaker_FsmString_o *v187; // x0
  System_Int32_array **v188; // x0
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  HutongGames_PlayMaker_FsmVariables_o *v195; // x0
  HutongGames_PlayMaker_FsmString_o *v196; // x0
  System_Int32_array **v197; // x0
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  HutongGames_PlayMaker_FsmVariables_o *v204; // x0
  HutongGames_PlayMaker_FsmString_o *v205; // x0
  System_Int32_array **v206; // x0
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *NodeFromName; // x0
  UnityEngine_Component_o *v215; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v217; // x0
  UnityEngine_Transform_o *v218; // x19
  int v219; // s0
  struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *rarityToColor; // x0
  WebViewManager_o *Instance; // x0
  GachaBehaviorMaster_o *MasterData_WarQuestSelectionMaster; // x0
  _BOOL4 v225; // w25
  System_Collections_Generic_List_GachaBehaviorEntity__o *GachaBehaviors; // x0
  char *v227; // x19
  GachaBehaviorEntity_o *v228; // x8
  GachaBehaviorEntity_o *v229; // x8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x22
  GachaBehaviorMaster_c *v231; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v232; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *upAnimationNameList; // x0
  struct System_Collections_Generic_List_string__o *v234; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v235; // x0
  int32_t v236; // w24
  int v237; // w28
  UnityEngine_Object_o *prevObject; // x19
  struct UnityEngine_GameObject_o **p_prevObject; // x22
  int v240; // w9
  _BOOL4 v241; // w24
  int32_t v242; // w8
  UnityEngine_Object_o *v243; // x19
  System_String_array **v244; // x2
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  UnityEngine_GameObject_o *v250; // x19
  __int64 v251; // x1
  __int64 v252; // x2
  __int64 v253; // x3
  __int64 v254; // x4
  System_Action_o *v255; // x25
  UnityEngine_Component_o *CommandTexturePrefab; // x0
  WebViewManager_o *v257; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v258; // x0
  bool v259; // w25
  __int64 v260; // x1
  __int64 v261; // x2
  __int64 v262; // x3
  __int64 v263; // x4
  UnityEngine_GameObject_o *v264; // x19
  UserServantEntity_o *v265; // x25
  int v266; // w27
  System_Action_o *v267; // x28
  System_Action_o *v268; // x3
  System_Action_o *v269; // x25
  UnityEngine_Component_o *v270; // x19
  UnityEngine_Transform_o *v271; // x25
  int v272; // s0
  UnityEngine_Transform_o *v275; // x0
  UnityEngine_Behaviour_o *v276; // x0
  System_Int32_array **v277; // x0
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  HutongGames_PlayMaker_FsmVariables_o *v284; // x0
  HutongGames_PlayMaker_FsmString_o *v285; // x0
  System_String_o *v286; // x22
  HutongGames_PlayMaker_FsmVariables_o *v287; // x0
  HutongGames_PlayMaker_FsmString_o *v288; // x0
  System_String_o *v289; // x0
  System_String_o *v290; // x19
  UnityEngine_Transform_o *v291; // x0
  UnityEngine_Component_o *v292; // x0
  WebViewObject_o *v293; // x0
  UnityEngine_Component_o *v294; // x26
  UnityEngine_Transform_o *v295; // x0
  UnityEngine_Component_o *v296; // x0
  WebViewObject_o *v297; // x0
  UnityEngine_Component_o *v298; // x22
  UnityEngine_GameObject_o *v299; // x0
  UnityEngine_GameObject_o *v300; // x0
  __int64 v301; // x1
  __int64 v302; // x2
  __int64 v303; // x3
  __int64 v304; // x4
  HutongGames_PlayMaker_FsmVariables_o *v305; // x0
  HutongGames_PlayMaker_FsmInt_o *v306; // x0
  int v307; // w8
  UnityEngine_Transform_o *v308; // x0
  UnityEngine_Transform_o *v309; // x0
  const MethodInfo *v310; // x3
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *v312; // x0
  UnityEngine_Transform_o *v313; // x0
  const MethodInfo *v314; // x3
  UnityEngine_GameObject_o *v315; // x0
  UnityEngine_Transform_o *v316; // x0
  UnityEngine_Transform_o *v317; // x1
  const MethodInfo *v318; // x3
  SummonEffectComponent_o *v319; // x0
  int32_t v320; // w2
  HutongGames_PlayMaker_FsmVariables_o *v321; // x0
  HutongGames_PlayMaker_FsmInt_o *v322; // x0
  UnityEngine_GameObject_o *v323; // x0
  System_String_o *v324; // x0
  System_String_o *v325; // x19
  UnityEngine_GameObject_o *v326; // x0
  System_String_o *v327; // x0
  System_String_o *v328; // x0
  UnityEngine_Transform_o *v329; // x0
  UnityEngine_Transform_o *v330; // x0
  UnityEngine_Transform_o *v331; // x0
  UnityEngine_Transform_o *v332; // x0
  DesignCardManager_o *v333; // x0
  System_String_o *CommanCodeCardPath; // x0
  System_String_o *v335; // x19
  __int64 v336; // x1
  __int64 v337; // x2
  __int64 v338; // x3
  __int64 v339; // x4
  AssetLoader_LoadEndDataHandler_o *v340; // x20
  DesignCardManager_o *v341; // x0
  System_String_o *v342; // x0
  System_String_o *v343; // x19
  __int64 v344; // x1
  __int64 v345; // x2
  __int64 v346; // x3
  __int64 v347; // x4
  AssetLoader_LoadEndDataHandler_o *v348; // x20
  System_String_o *v349; // x0
  AssetLoader_LoadEndDataHandler_o *v350; // x1
  UnityEngine_Transform_o *v351; // x0
  UnityEngine_GameObject_o *v352; // x0
  UnityEngine_Transform_o *v353; // x0
  UnityEngine_Transform_o *v354; // x0
  const MethodInfo *v355; // x3
  const MethodInfo *v356; // x1
  __int64 v357; // x22
  System_String_array **v358; // x2
  System_String_array **v359; // x3
  System_Boolean_array **v360; // x4
  System_Int32_array **v361; // x5
  System_Int32_array *v362; // x6
  System_Int32_array *v363; // x7
  WebViewManager_o *v364; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v365; // x0
  WarEntity_o *v366; // x19
  WebViewManager_o *v367; // x0
  ServantLimitMaster_o *v368; // x0
  WebViewManager_o *v369; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v370; // x0
  WarEntity_o *v371; // x0
  __int64 v372; // x1
  __int64 v373; // x2
  __int64 v374; // x3
  __int64 v375; // x4
  int longName; // w8
  int32_t v377; // w19
  __int64 v378; // x21
  System_String_array **v379; // x2
  System_String_array **v380; // x3
  System_Boolean_array **v381; // x4
  System_Int32_array **v382; // x5
  System_Int32_array *v383; // x6
  System_Int32_array *v384; // x7
  Il2CppObject **v385; // x20
  int32_t LowerColorRarity; // w0
  int32_t v387; // w22
  HutongGames_PlayMaker_FsmVariables_o *v388; // x0
  HutongGames_PlayMaker_FsmInt_o *v389; // x0
  GachaBehaviorMaster_c *v390; // x0
  GachaBehaviorMaster_c *v391; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v392; // x0
  int v393; // w8
  GachaBehaviorMaster_c *v394; // x0
  GachaBehaviorMaster_c *v395; // x0
  int v396; // w9
  GachaBehaviorMaster_c *v397; // x0
  GachaBehaviorMaster_c *v398; // x0
  int v399; // w8
  GachaBehaviorMaster_c *v400; // x0
  GachaBehaviorMaster_c *v401; // x0
  int v402; // w8
  GachaBehaviorMaster_c *v403; // x0
  _BOOL4 v404; // w10
  HutongGames_PlayMaker_FsmVariables_o *v405; // x0
  HutongGames_PlayMaker_FsmInt_o *v406; // x0
  HutongGames_PlayMaker_FsmVariables_o *v407; // x19
  HutongGames_PlayMaker_FsmString_o *v408; // x0
  GachaBehaviorMaster_c *v409; // x8
  System_Int32_array **v410; // x0
  System_String_array **v411; // x2
  System_String_array **v412; // x3
  System_Boolean_array **v413; // x4
  System_Int32_array **v414; // x5
  System_Int32_array *v415; // x6
  System_Int32_array *v416; // x7
  System_Int32_array **v417; // x8
  GachaBehaviorMaster_c *v418; // x0
  HutongGames_PlayMaker_FsmVariables_o *v419; // x0
  HutongGames_PlayMaker_FsmInt_o *v420; // x0
  HutongGames_PlayMaker_FsmVariables_o *v421; // x19
  HutongGames_PlayMaker_FsmString_o *v422; // x0
  GachaBehaviorMaster_c *v423; // x8
  System_Int32_array **v424; // x0
  System_String_array **v425; // x2
  System_String_array **v426; // x3
  System_Boolean_array **v427; // x4
  System_Int32_array **v428; // x5
  System_Int32_array *v429; // x6
  System_Int32_array *v430; // x7
  GachaBehaviorMaster_c *v431; // x0
  HutongGames_PlayMaker_FsmVariables_o *v432; // x19
  HutongGames_PlayMaker_FsmString_o *v433; // x0
  GachaBehaviorMaster_c *v434; // x8
  System_Int32_array **v435; // x0
  System_String_array **v436; // x2
  System_String_array **v437; // x3
  System_Boolean_array **v438; // x4
  System_Int32_array **v439; // x5
  System_Int32_array *v440; // x6
  System_Int32_array *v441; // x7
  __int64 v442; // x20
  System_String_array **v443; // x2
  System_String_array **v444; // x3
  System_Boolean_array **v445; // x4
  System_Int32_array **v446; // x5
  System_Int32_array *v447; // x6
  System_Int32_array *v448; // x7
  Il2CppObject **v449; // x21
  HutongGames_PlayMaker_FsmVariables_o *v450; // x0
  HutongGames_PlayMaker_FsmInt_o *v451; // x0
  int32_t v452; // w8
  DesignCardManager_o *v453; // x0
  System_String_o *v454; // x22
  DesignCardManager_o *v455; // x0
  Il2CppObject *v456; // x24
  __int64 v457; // x1
  __int64 v458; // x2
  __int64 v459; // x3
  __int64 v460; // x4
  AssetLoader_LoadEndDataHandler_o *v461; // x23
  _DWORD *monitor; // x8
  System_String_o **v463; // x8
  int32_t *v464; // x21
  DesignCardManager_o *v465; // x0
  System_String_o *v466; // x19
  DesignCardManager_o *v467; // x0
  __int64 v468; // x1
  __int64 v469; // x2
  __int64 v470; // x3
  __int64 v471; // x4
  AssetLoader_LoadEndDataHandler_o *v472; // x21
  DesignCardManager_o *v473; // x0
  System_String_o *DesignCardPath; // x23
  DesignCardManager_o *v475; // x0
  __int64 v476; // x1
  __int64 v477; // x2
  __int64 v478; // x3
  __int64 v479; // x4
  AssetLoader_LoadEndDataHandler_o *v480; // x24
  DesignCardManager_o *v481; // x0
  System_String_o *v482; // x22
  DesignCardManager_o *v483; // x0
  __int64 v484; // x1
  __int64 v485; // x2
  __int64 v486; // x3
  __int64 v487; // x4
  AssetLoader_LoadEndDataHandler_o *v488; // x23
  DesignCardManager_o *v489; // x0
  DesignCardManager_o *v490; // x0
  Il2CppObject *v491; // x21
  __int64 v492; // x1
  __int64 v493; // x2
  __int64 v494; // x3
  __int64 v495; // x4
  SummonEffectComponent_o *v496; // x0
  UnityEngine_Transform_o *v497; // x1
  int32_t v498; // w2
  const MethodInfo *v499; // x3
  _BOOL4 v500; // [xsp+8h] [xbp-D8h]
  int v501; // [xsp+Ch] [xbp-D4h]
  int v502; // [xsp+10h] [xbp-D0h]
  int v503; // [xsp+14h] [xbp-CCh]
  int v504; // [xsp+2Ch] [xbp-B4h]
  int64_t v505; // [xsp+30h] [xbp-B0h]
  System_String_o **v506; // [xsp+38h] [xbp-A8h]
  int32_t Item; // [xsp+4Ch] [xbp-94h]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+50h] [xbp-90h]
  int32_t limitCount; // [xsp+5Ch] [xbp-84h]
  UnityEngine_Component_o *v510; // [xsp+60h] [xbp-80h]
  int key; // [xsp+68h] [xbp-78h]
  int32_t svtId; // [xsp+6Ch] [xbp-74h]
  int v513; // [xsp+70h] [xbp-70h] BYREF
  int v514; // [xsp+74h] [xbp-6Ch] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v516; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v517; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v518; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v519; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v520; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBFF4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AssetManager_TypeInfo, v6);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v8);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v9);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITexture___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaBehaviorMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v19);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__,
      v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v21);
    sub_B16FFC(&GachaBehaviorMaster_TypeInfo, v22);
    sub_B16FFC(&int_TypeInfo, v23);
    sub_B16FFC(&long_TypeInfo, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__IndexOf__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v31);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v32);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v33);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v34);
    sub_B16FFC(&Rarity_TypeInfo, v35);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v36);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37);
    sub_B16FFC(&string_TypeInfo, v38);
    sub_B16FFC(&SummonEffectComponent_TypeInfo, v39);
    sub_B16FFC(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__, v40);
    sub_B16FFC(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__, v41);
    sub_B16FFC(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__, v42);
    sub_B16FFC(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__, v43);
    sub_B16FFC(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__, v44);
    sub_B16FFC(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo, v45);
    sub_B16FFC(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__, v46);
    sub_B16FFC(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__, v47);
    sub_B16FFC(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo, v48);
    sub_B16FFC(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__, v49);
    sub_B16FFC(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__, v50);
    sub_B16FFC(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo, v51);
    sub_B16FFC(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__, v52);
    sub_B16FFC(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo, v53);
    sub_B16FFC(&StringLiteral_3875, v54);
    sub_B16FFC(&StringLiteral_3876, v55);
    sub_B16FFC(&StringLiteral_3867, v56);
    sub_B16FFC(&StringLiteral_8149, v57);
    sub_B16FFC(&StringLiteral_3874, v58);
    sub_B16FFC(&StringLiteral_4095, v59);
    sub_B16FFC(&StringLiteral_2343, v60);
    sub_B16FFC(&StringLiteral_11234, v61);
    sub_B16FFC(&StringLiteral_17651, v62);
    sub_B16FFC(&StringLiteral_13100, v63);
    sub_B16FFC(&StringLiteral_21611, v64);
    sub_B16FFC(&StringLiteral_8162, v65);
    sub_B16FFC(&StringLiteral_15843, v66);
    sub_B16FFC(&StringLiteral_4094, v67);
    sub_B16FFC(&StringLiteral_8166, v68);
    sub_B16FFC(&StringLiteral_8493, v69);
    sub_B16FFC(&StringLiteral_9667, v70);
    sub_B16FFC(&StringLiteral_2342, v71);
    sub_B16FFC(&StringLiteral_3879, v72);
    sub_B16FFC(&StringLiteral_3873, v73);
    sub_B16FFC(&StringLiteral_3868, v74);
    sub_B16FFC(&StringLiteral_22343, v75);
    sub_B16FFC(&StringLiteral_11245, v76);
    sub_B16FFC(&StringLiteral_12661, v77);
    byte_40FBFF4 = 1;
  }
  entity = 0LL;
  v514 = 0;
  v78 = sub_B170CC(SummonEffectComponent___c__DisplayClass45_0_TypeInfo, method, v2, v3, v4);
  SummonEffectComponent___c__DisplayClass45_0___ctor((SummonEffectComponent___c__DisplayClass45_0_o *)v78, 0LL);
  if ( !v78 )
    goto LABEL_393;
  *(_QWORD *)(v78 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v78 + 16), (System_Int32_array **)this, v79, v80, v81, v82, v83, v84);
  this->fields.isNoSkipAll = 0;
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    goto LABEL_393;
  v86 = Component_WebViewObject;
  FsmVariables = PlayMakerFSM__get_FsmVariables(Component_WebViewObject, 0LL);
  if ( !FsmVariables )
    goto LABEL_393;
  FsmInt = HutongGames_PlayMaker_FsmVariables__GetFsmInt(FsmVariables, (System_String_o *)StringLiteral_17651, 0LL);
  if ( !FsmInt )
    goto LABEL_393;
  Value = HutongGames_PlayMaker_FsmInt__get_Value(FsmInt, 0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_393;
  if ( SummonInfos->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v92 = SummonInfos->fields._items->m_Items[Value];
  if ( !v92 )
    goto LABEL_393;
  v93 = this->fields.SummonInfos;
  if ( !v93 )
    goto LABEL_393;
  svtId = v92->fields.ServantId;
  if ( v93->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v94 = v93->fields._items->m_Items[Value];
  if ( !v94 )
    goto LABEL_393;
  v95 = this->fields.SummonInfos;
  if ( !v95 )
    goto LABEL_393;
  limitCount = v94->fields.LimitCount;
  if ( v95->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v96 = v95->fields._items->m_Items[Value];
  if ( !v96 )
    goto LABEL_393;
  v97 = this->fields.SummonInfos;
  if ( !v97 )
    goto LABEL_393;
  IsRankUp = v96->fields.IsRankUp;
  if ( v97->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v99 = v97->fields._items->m_Items[Value];
  if ( !v99 )
    goto LABEL_393;
  v100 = this->fields.SummonInfos;
  if ( !v100 )
    goto LABEL_393;
  IsNewCard = v99->fields.IsNewCard;
  if ( v100->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v102 = v100->fields._items->m_Items[Value];
  if ( !v102 )
    goto LABEL_393;
  v103 = this->fields.SummonInfos;
  if ( !v103 )
    goto LABEL_393;
  NoticeRarity = v102->fields.NoticeRarity;
  if ( v103->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v105 = v103->fields._items->m_Items[Value];
  if ( !v105 )
    goto LABEL_393;
  v106 = this->fields.SummonInfos;
  if ( !v106 )
    goto LABEL_393;
  Rarity = v105->fields.Rarity;
  if ( v106->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v108 = v106->fields._items->m_Items[Value];
  if ( !v108 )
    goto LABEL_393;
  *(_DWORD *)(v78 + 56) = v108->fields.CardType;
  v109 = this->fields.SummonInfos;
  if ( !v109 )
    goto LABEL_393;
  if ( v109->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  key = Rarity;
  v110 = v109->fields._items->m_Items[Value];
  if ( !v110 )
    goto LABEL_393;
  v111 = this->fields.SummonInfos;
  if ( !v111 )
    goto LABEL_393;
  IsSkipStop = v110->fields.IsSkipStop;
  if ( v111->fields._size <= (unsigned int)Value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v113 = v111->fields._items->m_Items[Value];
  if ( !v113 )
    goto LABEL_393;
  userServantId = v113->fields.userServantId;
  SummonEffectComponent__ReleasePrevAsset(this, v90);
  v119 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_string__TypeInfo,
                                                                                                   v115,
                                                                                                   v116,
                                                                                                   v117,
                                                                                                   v118);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v119,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v119;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._releaseAssetPath,
    (System_Int32_array **)v119,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  v126 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v126 )
    goto LABEL_393;
  v127 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v126, (System_String_o *)StringLiteral_12661, 0LL);
  if ( !v127 )
    goto LABEL_393;
  v127->fields.value = svtId;
  v128 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v128 )
    goto LABEL_393;
  v129 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v128, (System_String_o *)StringLiteral_8493, 0LL);
  if ( !v129 )
    goto LABEL_393;
  v129->fields.value = limitCount;
  v130 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v130 )
    goto LABEL_393;
  FsmBool = HutongGames_PlayMaker_FsmVariables__GetFsmBool(v130, (System_String_o *)StringLiteral_8162, 0LL);
  if ( !FsmBool )
    goto LABEL_393;
  FsmBool->fields.value = IsRankUp;
  v132 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v132 )
    goto LABEL_393;
  v133 = HutongGames_PlayMaker_FsmVariables__GetFsmBool(v132, (System_String_o *)StringLiteral_8166, 0LL);
  if ( !v133 )
    goto LABEL_393;
  v133->fields.value = IsSkipStop;
  v134 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v134 )
    goto LABEL_393;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v134,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                0LL);
  if ( !FsmString )
    goto LABEL_393;
  FsmString->fields.value = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&FsmString->fields.value, 0LL, v136, v137, v138, v139, v140, v141);
  v142 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v142 )
    goto LABEL_393;
  v143 = HutongGames_PlayMaker_FsmVariables__GetFsmBool(v142, (System_String_o *)StringLiteral_8149, 0LL);
  if ( !v143 )
    goto LABEL_393;
  v143->fields.value = IsNewCard || key == 0;
  v144 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v144 )
    goto LABEL_393;
  v145 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v144, (System_String_o *)StringLiteral_9667, 0LL);
  if ( !v145 )
    goto LABEL_393;
  v145->fields.value = NoticeRarity;
  v146 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v146 )
    goto LABEL_393;
  v147 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v146, (System_String_o *)StringLiteral_3879, 0LL);
  if ( !v147 )
    goto LABEL_393;
  v147->fields.value = *(_DWORD *)(v78 + 56);
  if ( (unsigned int)(key - 3) >= 3 )
    v148 = key ? 0 : 3;
  else
    v148 = dword_3137A9C[key - 3];
  v149 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v149 )
    goto LABEL_393;
  v150 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v149, (System_String_o *)StringLiteral_11245, 0LL);
  if ( !v150 )
    goto LABEL_393;
  v150->fields.value = v148;
  v151 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v151 )
    goto LABEL_393;
  v152 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v151,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
           0LL);
  v513 = v148;
  v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v513);
  v154 = (System_Int32_array **)System_String__Concat((Il2CppObject *)StringLiteral_22343, v153, 0LL);
  if ( !v152 )
    goto LABEL_393;
  v152->fields.value = (struct System_String_o *)v154;
  sub_B16F98((BattleServantConfConponent_o *)&v152->fields.value, v154, v155, v156, v157, v158, v159, v160);
  v161 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v161 )
    goto LABEL_393;
  v505 = userServantId;
  FsmGameObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                    v161,
                    (System_String_o *)StringLiteral_13100,
                    0LL);
  if ( !FsmGameObject )
    goto LABEL_393;
  v163 = HutongGames_PlayMaker_FsmGameObject__get_Value(FsmGameObject, 0LL);
  this->fields.effect = v163;
  p_effect = &this->fields.effect;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)v163,
    v165,
    v166,
    v167,
    v168,
    v169,
    v170);
  v171 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v171 )
    goto LABEL_393;
  v172 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v171, (System_String_o *)StringLiteral_3873, 0LL);
  if ( !v172 )
    goto LABEL_393;
  v173 = HutongGames_PlayMaker_FsmString__get_Value(v172, 0LL);
  v174 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v174 )
    goto LABEL_393;
  FsmFloat = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(v174, (System_String_o *)StringLiteral_3875, 0LL);
  if ( !FsmFloat )
    goto LABEL_393;
  v176 = HutongGames_PlayMaker_FsmFloat__get_Value(FsmFloat, 0LL);
  v177 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v177 )
    goto LABEL_393;
  v178 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v177, (System_String_o *)StringLiteral_3867, 0LL);
  if ( !v178 )
    goto LABEL_393;
  v179 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(v178, 0LL);
  *(_QWORD *)(v78 + 24) = v179;
  sub_B16F98((BattleServantConfConponent_o *)(v78 + 24), v179, v180, v181, v182, v183, v184, v185);
  v186 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v186 )
    goto LABEL_393;
  v187 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v186, (System_String_o *)StringLiteral_3868, 0LL);
  if ( !v187 )
    goto LABEL_393;
  v188 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(v187, 0LL);
  *(_QWORD *)(v78 + 32) = v188;
  sub_B16F98((BattleServantConfConponent_o *)(v78 + 32), v188, v189, v190, v191, v192, v193, v194);
  v195 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v195 )
    goto LABEL_393;
  v196 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v195, (System_String_o *)StringLiteral_3876, 0LL);
  if ( !v196 )
    goto LABEL_393;
  v197 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(v196, 0LL);
  *(_QWORD *)(v78 + 40) = v197;
  sub_B16F98((BattleServantConfConponent_o *)(v78 + 40), v197, v198, v199, v200, v201, v202, v203);
  v204 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v204 )
    goto LABEL_393;
  v205 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v204, (System_String_o *)StringLiteral_3874, 0LL);
  if ( !v205 )
    goto LABEL_393;
  v206 = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(v205, 0LL);
  *(_QWORD *)(v78 + 48) = v206;
  v506 = (System_String_o **)(v78 + 48);
  sub_B16F98((BattleServantConfConponent_o *)(v78 + 48), v206, v207, v208, v209, v210, v211, v212);
  if ( !*p_effect )
    goto LABEL_393;
  transform = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(transform, v173, 1, 0LL);
  if ( !NodeFromName )
    goto LABEL_393;
  v215 = NodeFromName;
  gameObject = UnityEngine_Component__get_gameObject(NodeFromName, 0LL);
  if ( !gameObject )
    goto LABEL_393;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v217 = UnityEngine_Component__get_gameObject(v215, 0LL);
  if ( !v217 )
    goto LABEL_393;
  v218 = UnityEngine_GameObject__get_transform(v217, 0LL);
  *(UnityEngine_Vector3_o *)&v219 = UnityEngine_Vector3__get_one(0LL);
  if ( !v218 )
    goto LABEL_393;
  UnityEngine_Transform__set_localScale(v218, *(UnityEngine_Vector3_o *)&v219, 0LL);
  rarityToColor = SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !rarityToColor )
    goto LABEL_393;
  Item = System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
           (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)rarityToColor,
           key,
           (const MethodInfo_2DFBFD4 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_393;
  MasterData_WarQuestSelectionMaster = (GachaBehaviorMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_393;
  v225 = IsRankUp && Item != 0;
  GachaBehaviors = GachaBehaviorMaster__GetGachaBehaviors(
                     MasterData_WarQuestSelectionMaster,
                     this->fields.gachaId,
                     svtId,
                     0LL);
  v510 = v215;
  if ( !GachaBehaviors )
    goto LABEL_120;
  v227 = (char *)GachaBehaviors;
  if ( GachaBehaviors->fields._size < 1 )
    goto LABEL_120;
  v228 = GachaBehaviors->fields._items->m_Items[0];
  if ( !v228 )
    goto LABEL_393;
  if ( !v228->fields.script )
  {
LABEL_120:
    v502 = -1;
    v503 = -1;
    v501 = -1;
    v504 = -1;
    v237 = -1;
LABEL_121:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v225 )
      v240 = 4;
    else
      v240 = 3;
    v241 = v225;
    if ( this->fields.EditMode )
      v242 = 0;
    else
      v242 = v240;
    this->fields._counter = 0;
    this->fields._counterMax = v242;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(prevObject, 0LL, 0LL) )
    {
      v243 = (UnityEngine_Object_o *)*p_prevObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v243, 0LL);
      *p_prevObject = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.prevObject, 0LL, v244, v245, v246, v247, v248, v249);
    }
    if ( *(_DWORD *)(v78 + 56) == 3 )
    {
      v250 = UnityEngine_Component__get_gameObject(v510, 0LL);
      v255 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v251, v252, v253, v254);
      System_Action___ctor(
        v255,
        (Il2CppObject *)v78,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0LL);
      CommandTexturePrefab = (UnityEngine_Component_o *)CharaGraphManager__CreateCommandTexturePrefab(
                                                          v250,
                                                          svtId,
                                                          0,
                                                          v255,
                                                          0LL);
    }
    else
    {
      v257 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v257 )
        goto LABEL_393;
      v258 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                      (DataManager_o *)v257,
                                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0LL;
      if ( !v258 )
        goto LABEL_393;
      v259 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               v258,
               &entity,
               v505,
               (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v264 = UnityEngine_Component__get_gameObject(v510, 0LL);
      if ( v259 )
      {
        v265 = entity;
        v266 = v237;
        v267 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v260, v261, v262, v263);
        System_Action___ctor(
          v267,
          (Il2CppObject *)v78,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0LL);
        v268 = v267;
        v237 = v266;
        p_effect = &this->fields.effect;
        CommandTexturePrefab = (UnityEngine_Component_o *)CharaGraphManager__CreateTexturePrefab_26882704(
                                                            v264,
                                                            v265,
                                                            0,
                                                            v268,
                                                            0LL);
      }
      else
      {
        v269 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v260, v261, v262, v263);
        System_Action___ctor(
          v269,
          (Il2CppObject *)v78,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0LL);
        CommandTexturePrefab = (UnityEngine_Component_o *)CharaGraphManager__CreateTexturePrefab(
                                                            v264,
                                                            svtId,
                                                            limitCount,
                                                            0,
                                                            1,
                                                            0,
                                                            v269,
                                                            0,
                                                            0LL);
      }
    }
    v270 = CommandTexturePrefab;
    if ( CommandTexturePrefab )
    {
      v271 = UnityEngine_Component__get_transform(CommandTexturePrefab, 0LL);
      *(UnityEngine_Vector3_o *)&v272 = UnityEngine_Vector3__get_zero(0LL);
      if ( v271 )
      {
        UnityEngine_Transform__set_localPosition(v271, *(UnityEngine_Vector3_o *)&v272, 0LL);
        v275 = UnityEngine_Component__get_transform(v270, 0LL);
        if ( v275 )
        {
          v516.fields.x = v176;
          v516.fields.y = v176;
          v516.fields.z = v176;
          UnityEngine_Transform__set_localScale(v275, v516, 0LL);
          v276 = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              v510,
                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
          if ( v276 )
          {
            UnityEngine_Behaviour__set_enabled(v276, 0, 0LL);
            v277 = (System_Int32_array **)UnityEngine_Component__get_gameObject(v270, 0LL);
            *p_prevObject = (struct UnityEngine_GameObject_o *)v277;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.prevObject,
              v277,
              v278,
              v279,
              v280,
              v281,
              v282,
              v283);
            v284 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
            if ( v284 )
            {
              v285 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v284, (System_String_o *)StringLiteral_4094, 0LL);
              if ( v285 )
              {
                v286 = HutongGames_PlayMaker_FsmString__get_Value(v285, 0LL);
                v287 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
                if ( v287 )
                {
                  v288 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                           v287,
                           (System_String_o *)StringLiteral_4095,
                           0LL);
                  if ( v288 )
                  {
                    v289 = HutongGames_PlayMaker_FsmString__get_Value(v288, 0LL);
                    if ( *p_effect )
                    {
                      v290 = v289;
                      v291 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                      v292 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(v291, v286, 1, 0LL);
                      if ( v292 )
                      {
                        v293 = UnityEngine_Component__GetComponent_WebViewObject_(
                                 v292,
                                 (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                        if ( *p_effect )
                        {
                          v294 = (UnityEngine_Component_o *)v293;
                          v295 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                          v296 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(v295, v290, 1, 0LL);
                          if ( v296 )
                          {
                            v297 = UnityEngine_Component__GetComponent_WebViewObject_(
                                     v296,
                                     (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                            if ( v294 )
                            {
                              v298 = (UnityEngine_Component_o *)v297;
                              v299 = UnityEngine_Component__get_gameObject(v294, 0LL);
                              if ( v299 )
                              {
                                UnityEngine_GameObject__SetActive(v299, 0, 0LL);
                                if ( v298 )
                                {
                                  v300 = UnityEngine_Component__get_gameObject(v298, 0LL);
                                  if ( v300 )
                                  {
                                    UnityEngine_GameObject__SetActive(v300, 0, 0LL);
                                    if ( this->fields.EditMode )
                                    {
                                      v305 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
                                      if ( !v305 )
                                        goto LABEL_394;
                                      v306 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                               v305,
                                               (System_String_o *)StringLiteral_11234,
                                               0LL);
                                      if ( v241 )
                                      {
                                        if ( !v306 )
                                          goto LABEL_394;
                                        v307 = Item == 2 ? 2 : 1;
                                        v306->fields.value = v307;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v308 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                                        v309 = TransformHelper__getNodeFromName(
                                                 v308,
                                                 *(System_String_o **)(v78 + 24),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v309, Item - 1, v310);
                                        effect = this->fields.effect;
                                        if ( !effect )
                                          goto LABEL_394;
                                        v312 = UnityEngine_GameObject__get_transform(effect, 0LL);
                                        v313 = TransformHelper__getNodeFromName(
                                                 v312,
                                                 *(System_String_o **)(v78 + 32),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v313, Item - 1, v314);
                                        v315 = this->fields.effect;
                                        if ( !v315 )
                                          goto LABEL_394;
                                        v316 = UnityEngine_GameObject__get_transform(v315, 0LL);
                                        v317 = TransformHelper__getNodeFromName(v316, *v506, 1, 0LL);
                                        v319 = this;
                                        v320 = Item - 1;
                                      }
                                      else
                                      {
                                        if ( !v306 )
                                          goto LABEL_394;
                                        v306->fields.value = 0;
                                        if ( !*p_effect )
                                          goto LABEL_394;
                                        v351 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
                                        v317 = TransformHelper__getNodeFromName(v351, *v506, 1, 0LL);
                                        v319 = this;
                                        v320 = Item;
                                      }
                                      SummonEffectComponent__ChangeClassCardColor(v319, v317, v320, v318);
                                      v352 = this->fields.effect;
                                      if ( v352 )
                                      {
                                        v353 = UnityEngine_GameObject__get_transform(v352, 0LL);
                                        v354 = TransformHelper__getNodeFromName(
                                                 v353,
                                                 *(System_String_o **)(v78 + 40),
                                                 1,
                                                 0LL);
                                        SummonEffectComponent__ChangeClassCardColor(this, v354, Item, v355);
                                        SummonEffectComponent__CompleteCallback(this, v356);
                                        return;
                                      }
LABEL_394:
                                      sub_B170D4();
                                    }
                                    if ( *(_DWORD *)(v78 + 56) == 3 )
                                    {
                                      v321 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
                                      if ( v321 )
                                      {
                                        v322 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                 v321,
                                                 (System_String_o *)StringLiteral_11234,
                                                 0LL);
                                        if ( v322 )
                                        {
                                          v322->fields.value = 3;
                                          v514 = key;
                                          v323 = UnityEngine_Component__get_gameObject(v294, 0LL);
                                          if ( v323 )
                                          {
                                            UnityEngine_GameObject__SetActive(v323, 1, 0LL);
                                            v324 = System_Int32__ToString((int32_t)&v514, 0LL);
                                            v325 = System_String__Concat_43746016(
                                                     (System_String_o *)StringLiteral_21611,
                                                     v324,
                                                     (System_String_o *)StringLiteral_15843,
                                                     0LL);
                                            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !AtlasManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                            }
                                            AtlasManager__SetCharaGraphaOption((UISprite_o *)v294, v325, 0LL);
                                            ((void (__fastcall *)(UnityEngine_Component_o *, void *))v294->klass[2]._1.typeMetadataHandle)(
                                              v294,
                                              v294->klass[2]._1.interopData);
                                            v326 = UnityEngine_Component__get_gameObject(v298, 0LL);
                                            if ( v326 )
                                            {
                                              UnityEngine_GameObject__SetActive(v326, 1, 0LL);
                                              v327 = System_Int32__ToString((int32_t)&v514, 0LL);
                                              v328 = System_String__Concat_43746016(
                                                       (System_String_o *)StringLiteral_21611,
                                                       v327,
                                                       (System_String_o *)StringLiteral_15843,
                                                       0LL);
                                              AtlasManager__SetCharaGraphaOption((UISprite_o *)v298, v328, 0LL);
                                              ((void (__fastcall *)(UnityEngine_Component_o *, void *))v298->klass[2]._1.typeMetadataHandle)(
                                                v298,
                                                v298->klass[2]._1.interopData);
                                              v329 = UnityEngine_Component__get_transform(v294, 0LL);
                                              if ( v329 )
                                              {
                                                v517.fields.x = 0.0;
                                                v517.fields.z = 0.0;
                                                v517.fields.y = 216.81;
                                                UnityEngine_Transform__set_localPosition(v329, v517, 0LL);
                                                v330 = UnityEngine_Component__get_transform(v294, 0LL);
                                                if ( v330 )
                                                {
                                                  v518.fields.x = v176;
                                                  v518.fields.y = v176;
                                                  v518.fields.z = v176;
                                                  UnityEngine_Transform__set_localScale(v330, v518, 0LL);
                                                  v331 = UnityEngine_Component__get_transform(v298, 0LL);
                                                  if ( v331 )
                                                  {
                                                    v519.fields.x = 0.0;
                                                    v519.fields.z = 0.0;
                                                    v519.fields.y = 216.81;
                                                    UnityEngine_Transform__set_localPosition(v331, v519, 0LL);
                                                    v332 = UnityEngine_Component__get_transform(v298, 0LL);
                                                    if ( v332 )
                                                    {
                                                      v520.fields.x = v176;
                                                      v520.fields.y = v176;
                                                      v520.fields.z = v176;
                                                      UnityEngine_Transform__set_localScale(v332, v520, 0LL);
                                                      v333 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                      if ( v333 )
                                                      {
                                                        CommanCodeCardPath = DesignCardManager__GetCommanCodeCardPath(
                                                                               v333,
                                                                               1,
                                                                               key,
                                                                               0LL);
                                                        if ( *p_releaseAssetPath )
                                                        {
                                                          v335 = CommanCodeCardPath;
                                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                            (EventMissionProgressRequest_Argument_ProgressData_o *)CommanCodeCardPath,
                                                            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
                                                          v340 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v336, v337, v338, v339);
                                                          AssetLoader_LoadEndDataHandler___ctor(
                                                            v340,
                                                            (Il2CppObject *)v78,
                                                            Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
                                                            0LL);
                                                          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                            && !AssetManager_TypeInfo->_2.cctor_finished )
                                                          {
                                                            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                          }
                                                          AssetManager__loadAssetStorage(v335, v340, 1, 0LL);
                                                          v341 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                          if ( v341 )
                                                          {
                                                            v342 = DesignCardManager__GetCommanCodeCardPath(
                                                                     v341,
                                                                     101,
                                                                     key,
                                                                     0LL);
                                                            if ( *p_releaseAssetPath )
                                                            {
                                                              v343 = v342;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v342,
                                                                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v348 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v344, v345, v346, v347);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v348,
                                                                (Il2CppObject *)v78,
                                                                Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
                                                                0LL);
LABEL_189:
                                                              v349 = v343;
                                                              v350 = v348;
LABEL_358:
                                                              AssetManager__loadAssetStorage(v349, v350, 1, 0LL);
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
                                      v357 = sub_B170CC(
                                               SummonEffectComponent___c__DisplayClass45_1_TypeInfo,
                                               v301,
                                               v302,
                                               v303,
                                               v304);
                                      SummonEffectComponent___c__DisplayClass45_1___ctor(
                                        (SummonEffectComponent___c__DisplayClass45_1_o *)v357,
                                        0LL);
                                      if ( v357 )
                                      {
                                        *(_QWORD *)(v357 + 24) = v78;
                                        sub_B16F98(
                                          (BattleServantConfConponent_o *)(v357 + 24),
                                          (System_Int32_array **)v78,
                                          v358,
                                          v359,
                                          v360,
                                          v361,
                                          v362,
                                          v363);
                                        v364 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                        if ( v364 )
                                        {
                                          v365 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)v364,
                                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
                                          if ( v365 )
                                          {
                                            v366 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     v365,
                                                     svtId,
                                                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                                            v367 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                            if ( v367 )
                                            {
                                              v368 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)v367,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                                              if ( v368 )
                                              {
                                                ServantLimitMaster__GetEntity(v368, svtId, limitCount, 0LL);
                                                v369 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                                if ( v369 )
                                                {
                                                  v370 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v369, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
                                                  if ( v366 )
                                                  {
                                                    if ( v370 )
                                                    {
                                                      v371 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                               v370,
                                                               v366->fields.startType,
                                                               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
                                                      if ( v371 )
                                                      {
                                                        longName = (int)v371->fields.longName;
                                                        if ( v503 != -1 )
                                                          longName = v503;
                                                        *(_DWORD *)(v357 + 16) = longName;
                                                        if ( v502 == -1 )
                                                          v377 = key;
                                                        else
                                                          v377 = v502;
                                                        if ( v241 )
                                                        {
                                                          v378 = sub_B170CC(
                                                                   SummonEffectComponent___c__DisplayClass45_2_TypeInfo,
                                                                   v372,
                                                                   v373,
                                                                   v374,
                                                                   v375);
                                                          SummonEffectComponent___c__DisplayClass45_2___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_2_o *)v378,
                                                            0LL);
                                                          if ( v378 )
                                                          {
                                                            *(_QWORD *)(v378 + 24) = v357;
                                                            v385 = (Il2CppObject **)(v378 + 24);
                                                            sub_B16F98(
                                                              (BattleServantConfConponent_o *)(v378 + 24),
                                                              (System_Int32_array **)v357,
                                                              v379,
                                                              v380,
                                                              v381,
                                                              v382,
                                                              v383,
                                                              v384);
                                                            if ( *(_QWORD *)(v378 + 24) )
                                                            {
                                                              *(_DWORD *)(v378 + 16) = *(_DWORD *)(*(_QWORD *)(v378 + 24)
                                                                                                 + 16LL);
                                                              if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !Rarity_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                                                              }
                                                              LowerColorRarity = Rarity__getLowerColorRarity(v377, 0LL);
                                                              if ( v504 != -1 )
                                                                *(_DWORD *)(v378 + 16) = v504;
                                                              v387 = v501 == -1 ? LowerColorRarity : v501;
                                                              v388 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
                                                              if ( v388 )
                                                              {
                                                                v389 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                                         v388,
                                                                         (System_String_o *)StringLiteral_11234,
                                                                         0LL);
                                                                if ( v237 == -1 )
                                                                {
                                                                  if ( !v389 )
                                                                    goto LABEL_393;
                                                                  v237 = Item == 2 ? 2 : 1;
                                                                }
                                                                else if ( !v389 )
                                                                {
                                                                  goto LABEL_393;
                                                                }
                                                                v389->fields.value = v237;
                                                                v473 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !v473 )
                                                                  goto LABEL_393;
                                                                DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                   v473,
                                                                                   *(_DWORD *)(v378 + 16),
                                                                                   v387,
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
                                                                  *(_DWORD *)(v378 + 16) = 1;
                                                                  v475 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( !v475 )
                                                                    goto LABEL_393;
                                                                  v387 = 3;
                                                                  DesignCardPath = DesignCardManager__GetDesignCardPath(
                                                                                     v475,
                                                                                     *(_DWORD *)(v378 + 16),
                                                                                     3,
                                                                                     0LL);
                                                                }
                                                                if ( *p_releaseAssetPath )
                                                                {
                                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                                    (EventMissionProgressRequest_Argument_ProgressData_o *)DesignCardPath,
                                                                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
                                                                  v480 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v476, v477, v478, v479);
                                                                  AssetLoader_LoadEndDataHandler___ctor(
                                                                    v480,
                                                                    (Il2CppObject *)v378,
                                                                    Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
                                                                    0LL);
                                                                  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                    && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                  {
                                                                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                  }
                                                                  AssetManager__loadAssetStorage(
                                                                    DesignCardPath,
                                                                    v480,
                                                                    1,
                                                                    0LL);
                                                                  *(_DWORD *)(v378 + 20) = ConstantMaster__getValue(
                                                                                             (System_String_o *)StringLiteral_2342,
                                                                                             0LL);
                                                                  v481 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                  if ( v481 )
                                                                  {
                                                                    v482 = DesignCardManager__GetDesignCardPath(
                                                                             v481,
                                                                             *(_DWORD *)(v378 + 20),
                                                                             v387,
                                                                             0LL);
                                                                    if ( !AssetManager__isExistAssetStorage(v482, 0LL) )
                                                                    {
                                                                      v483 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( !v483 )
                                                                        goto LABEL_393;
                                                                      v482 = DesignCardManager__GetDesignCardPath(
                                                                               v483,
                                                                               *(_DWORD *)(v378 + 20),
                                                                               3,
                                                                               0LL);
                                                                    }
                                                                    if ( *p_releaseAssetPath )
                                                                    {
                                                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                                        (EventMissionProgressRequest_Argument_ProgressData_o *)v482,
                                                                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
                                                                      v488 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v484, v485, v486, v487);
                                                                      AssetLoader_LoadEndDataHandler___ctor(
                                                                        v488,
                                                                        (Il2CppObject *)v378,
                                                                        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
                                                                        0LL);
                                                                      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                        && !AssetManager_TypeInfo->_2.cctor_finished )
                                                                      {
                                                                        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                                      }
                                                                      AssetManager__loadAssetStorage(v482, v488, 1, 0LL);
                                                                      v489 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                      if ( *v385 )
                                                                      {
                                                                        if ( v489 )
                                                                        {
                                                                          v343 = DesignCardManager__GetDesignCardPath(
                                                                                   v489,
                                                                                   (int32_t)(*v385)[1].klass,
                                                                                   v377,
                                                                                   0LL);
                                                                          if ( !AssetManager__isExistAssetStorage(
                                                                                  v343,
                                                                                  0LL) )
                                                                          {
                                                                            if ( !*v385 )
                                                                              goto LABEL_393;
                                                                            LODWORD((*v385)[1].klass) = 1;
                                                                            v490 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                            if ( !*v385 || !v490 )
                                                                              goto LABEL_393;
                                                                            v343 = DesignCardManager__GetDesignCardPath(
                                                                                     v490,
                                                                                     (int32_t)(*v385)[1].klass,
                                                                                     3,
                                                                                     0LL);
                                                                          }
                                                                          if ( *p_releaseAssetPath )
                                                                          {
                                                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v343,
                                                                              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
                                                                            v491 = *v385;
                                                                            v348 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v492, v493, v494, v495);
                                                                            AssetLoader_LoadEndDataHandler___ctor(
                                                                              v348,
                                                                              v491,
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
                                                          v442 = sub_B170CC(
                                                                   SummonEffectComponent___c__DisplayClass45_3_TypeInfo,
                                                                   v372,
                                                                   v373,
                                                                   v374,
                                                                   v375);
                                                          SummonEffectComponent___c__DisplayClass45_3___ctor(
                                                            (SummonEffectComponent___c__DisplayClass45_3_o *)v442,
                                                            0LL);
                                                          if ( v442 )
                                                          {
                                                            *(_QWORD *)(v442 + 24) = v357;
                                                            v449 = (Il2CppObject **)(v442 + 24);
                                                            sub_B16F98(
                                                              (BattleServantConfConponent_o *)(v442 + 24),
                                                              (System_Int32_array **)v357,
                                                              v443,
                                                              v444,
                                                              v445,
                                                              v446,
                                                              v447,
                                                              v448);
                                                            v450 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
                                                            if ( v450 )
                                                            {
                                                              v451 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                                       v450,
                                                                       (System_String_o *)StringLiteral_11234,
                                                                       0LL);
                                                              if ( !v451 )
                                                                goto LABEL_394;
                                                              v452 = v237 == -1 ? 0 : v237;
                                                              v451->fields.value = v452;
                                                              v453 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !*v449 || !v453 )
                                                                goto LABEL_394;
                                                              v454 = DesignCardManager__GetDesignCardPath(
                                                                       v453,
                                                                       (int32_t)(*v449)[1].klass,
                                                                       v377,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              if ( !AssetManager__isExistAssetStorage(v454, 0LL) )
                                                              {
                                                                if ( !*v449 )
                                                                  goto LABEL_394;
                                                                LODWORD((*v449)[1].klass) = 1;
                                                                v455 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !*v449 || !v455 )
                                                                  goto LABEL_394;
                                                                v377 = 3;
                                                                v454 = DesignCardManager__GetDesignCardPath(
                                                                         v455,
                                                                         (int32_t)(*v449)[1].klass,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v454,
                                                                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v456 = *v449;
                                                              v461 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v457, v458, v459, v460);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v461,
                                                                v456,
                                                                Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              AssetManager__loadAssetStorage(v454, v461, 1, 0LL);
                                                              if ( !*v449 )
                                                                goto LABEL_394;
                                                              monitor = (*v449)[1].monitor;
                                                              if ( !monitor )
                                                                goto LABEL_394;
                                                              v463 = (System_String_o **)(monitor[14] == 1
                                                                                        ? &StringLiteral_2343
                                                                                        : &StringLiteral_2342);
                                                              *(_DWORD *)(v442 + 16) = ConstantMaster__getValue(
                                                                                         *v463,
                                                                                         0LL);
                                                              v464 = (int32_t *)(v442 + 16);
                                                              v465 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                              if ( !v465 )
                                                                goto LABEL_394;
                                                              v466 = DesignCardManager__GetDesignCardPath(
                                                                       v465,
                                                                       *v464,
                                                                       v377,
                                                                       0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              if ( !AssetManager__isExistAssetStorage(v466, 0LL) )
                                                              {
                                                                v467 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
                                                                if ( !v467 )
                                                                  goto LABEL_394;
                                                                v466 = DesignCardManager__GetDesignCardPath(
                                                                         v467,
                                                                         *v464,
                                                                         3,
                                                                         0LL);
                                                              }
                                                              if ( !*p_releaseAssetPath )
                                                                goto LABEL_394;
                                                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath,
                                                                (EventMissionProgressRequest_Argument_ProgressData_o *)v466,
                                                                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
                                                              v472 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v468, v469, v470, v471);
                                                              AssetLoader_LoadEndDataHandler___ctor(
                                                                v472,
                                                                (Il2CppObject *)v442,
                                                                Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
                                                                0LL);
                                                              if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AssetManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                                                              }
                                                              v349 = v466;
                                                              v350 = v472;
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
    sub_B170D4();
  }
  if ( IsNewCard )
  {
    this->fields.isNoSkipAll = 1;
    if ( !GachaBehaviors->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  }
  v229 = GachaBehaviors->fields._items->m_Items[0];
  if ( !v229 )
    goto LABEL_393;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v229->fields.script;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  }
  if ( !script )
    goto LABEL_393;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v231 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v231 = GachaBehaviorMaster_TypeInfo;
    }
    v232 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             script,
             (System_Type_o *)v231->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v227 = (char *)v232;
    if ( v232 && (System_String_c *)v232->klass != string_TypeInfo )
      goto LABEL_397;
    upAnimationNameList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.upAnimationNameList;
    if ( !upAnimationNameList )
      goto LABEL_393;
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            upAnimationNameList,
            (WarBoardManager_TaskList_o *)v227,
            (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      v234 = this->fields.upAnimationNameList;
      if ( !v234 )
        goto LABEL_393;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v234,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v227,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    }
    v235 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.upAnimationNameList;
    if ( !v235 )
      goto LABEL_393;
    v236 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
             v235,
             (WarBoardManager_TaskList_o *)v227,
             (const MethodInfo_2F26D88 *)Method_System_Collections_Generic_List_string__IndexOf__);
  }
  else
  {
    v236 = -1;
  }
  v390 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v390 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)v390->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v391 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v391 = GachaBehaviorMaster_TypeInfo;
    }
    v392 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             script,
             (System_Type_o *)v391->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v392 )
      goto LABEL_393;
    if ( v392->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v393 = *(_DWORD *)j_il2cpp_object_unbox_0(v392);
  }
  else
  {
    v393 = -1;
  }
  v394 = GachaBehaviorMaster_TypeInfo;
  v504 = v393;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v394 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)v394->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v395 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v395 = GachaBehaviorMaster_TypeInfo;
    }
    v392 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             script,
             (System_Type_o *)v395->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v392 )
      goto LABEL_393;
    if ( v392->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v396 = *(_DWORD *)j_il2cpp_object_unbox_0(v392);
  }
  else
  {
    v396 = -1;
  }
  v397 = GachaBehaviorMaster_TypeInfo;
  v501 = v396;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v397 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)v397->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v398 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v398 = GachaBehaviorMaster_TypeInfo;
    }
    v392 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             script,
             (System_Type_o *)v398->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v392 )
      goto LABEL_393;
    if ( v392->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_395;
    v399 = *(_DWORD *)j_il2cpp_object_unbox_0(v392);
  }
  else
  {
    v399 = -1;
  }
  v400 = GachaBehaviorMaster_TypeInfo;
  v503 = v399;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v400 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v400->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v402 = -1;
    goto LABEL_269;
  }
  v401 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v401 = GachaBehaviorMaster_TypeInfo;
  }
  v392 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           script,
           (System_Type_o *)v401->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v392 )
    goto LABEL_393;
  if ( v392->klass->_1.element_class != long_TypeInfo->_1.element_class )
  {
LABEL_395:
    sub_B173C8(v392);
    goto LABEL_396;
  }
  v402 = *(_DWORD *)j_il2cpp_object_unbox_0(v392);
LABEL_269:
  v403 = GachaBehaviorMaster_TypeInfo;
  v404 = v225;
  v502 = v402;
  if ( v236 != -1 )
    v404 = v504 != -1;
  v500 = v404;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v403 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)v403->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v405 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
    if ( !v405 )
      goto LABEL_393;
    v406 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v405, (System_String_o *)StringLiteral_9667, 0LL);
    if ( !v406 )
      goto LABEL_393;
    v406->fields.value = 3;
    v407 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v407 )
      goto LABEL_393;
    v408 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v407,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0LL);
    v409 = GachaBehaviorMaster_TypeInfo;
    v227 = (char *)v408;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v409 = GachaBehaviorMaster_TypeInfo;
    }
    v410 = (System_Int32_array **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    script,
                                    (System_Type_o *)v409->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                    (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v227 )
      goto LABEL_393;
    v417 = v410;
    if ( v410 && *v410 != (System_Int32_array *)string_TypeInfo )
      goto LABEL_396;
    *((_QWORD *)v227 + 7) = v410;
    sub_B16F98((BattleServantConfConponent_o *)(v227 + 56), v410, v411, v412, v413, v414, v415, v416);
  }
  v418 = GachaBehaviorMaster_TypeInfo;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v418 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v418->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_305:
    v431 = GachaBehaviorMaster_TypeInfo;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v431 = GachaBehaviorMaster_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)v431->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
            (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v225 = v500;
      v237 = v236;
      goto LABEL_121;
    }
    v225 = v500;
    v432 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
    if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    }
    if ( !v432 )
      goto LABEL_393;
    v433 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v432,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
             0LL);
    v434 = GachaBehaviorMaster_TypeInfo;
    v227 = (char *)v433;
    if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v434 = GachaBehaviorMaster_TypeInfo;
    }
    v435 = (System_Int32_array **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    script,
                                    (System_Type_o *)v434->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                    (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v227 )
      goto LABEL_393;
    v417 = v435;
    v237 = v236;
    if ( !v435 || *v435 == (System_Int32_array *)string_TypeInfo )
    {
      *((_QWORD *)v227 + 7) = v435;
      sub_B16F98((BattleServantConfConponent_o *)(v227 + 56), v435, v436, v437, v438, v439, v440, v441);
      goto LABEL_121;
    }
    goto LABEL_396;
  }
  v419 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( !v419 )
    goto LABEL_393;
  v420 = HutongGames_PlayMaker_FsmVariables__GetFsmInt(v419, (System_String_o *)StringLiteral_3879, 0LL);
  if ( !v420 )
    goto LABEL_393;
  v420->fields.value = 4;
  v421 = PlayMakerFSM__get_FsmVariables(v86, 0LL);
  if ( (BYTE3(SummonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  }
  if ( !v421 )
    goto LABEL_393;
  v422 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v421,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0LL);
  v423 = GachaBehaviorMaster_TypeInfo;
  v227 = (char *)v422;
  if ( (BYTE3(GachaBehaviorMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v423 = GachaBehaviorMaster_TypeInfo;
  }
  v424 = (System_Int32_array **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  script,
                                  (System_Type_o *)v423->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v227 )
    goto LABEL_393;
  v417 = v424;
  if ( !v424 || *v424 == (System_Int32_array *)string_TypeInfo )
  {
    *((_QWORD *)v227 + 7) = v424;
    sub_B16F98((BattleServantConfConponent_o *)(v227 + 56), v424, v425, v426, v427, v428, v429, v430);
    goto LABEL_305;
  }
LABEL_396:
  sub_B173C8(v417);
LABEL_397:
  sub_B173C8(v227);
  SummonEffectComponent__ChangeClassCardColor(v496, v497, v498, v499);
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

  if ( (byte_40FBFFE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5468, v4);
    byte_40FBFFE = 1;
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
    UnityEngine_Object__Destroy_34809464(v7, 0LL);
    *p_effect = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v8, v9, v10, v11, v12, v13);
  }
  Component_WebViewObject = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_WebViewObject )
    sub_B170D4();
  PlayMakerFSM__SendEvent(Component_WebViewObject, (System_String_o *)StringLiteral_5468, 0LL);
}


void __fastcall SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40FBFF2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SummonEffectComponent__endAnimation_b__43_0__, v5);
    byte_40FBFF2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
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
    sub_B170D4();
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__3(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  struct SummonEffectComponent_o *_4__this; // x21
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **NodeFromName; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct SummonEffectComponent_o *v15; // x21
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Transform_o *v17; // x0
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  DesignCardManager_o *Instance; // x0
  struct SummonEffectComponent_o *v26; // x8
  DesignCardManager_o *v27; // x0
  struct SummonEffectComponent_o *v28; // x8
  WebViewManager_o *v29; // x0
  struct SummonEffectComponent_o *v30; // x8
  DesignCardManager_o *v31; // x21
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_Transform_o *v34; // x0
  SummonEffectComponent_o *v35; // x0

  if ( (byte_40F7A88 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_40F7A88 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  effect = _4__this->fields.effect;
  if ( !effect )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform(effect, 0LL);
  NodeFromName = (System_Int32_array **)TransformHelper__getNodeFromName(transform, this->fields.cardFirstName, 1, 0LL);
  _4__this->fields.firstTr = (struct UnityEngine_Transform_o *)NodeFromName;
  sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.firstTr, NodeFromName, v9, v10, v11, v12, v13, v14);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_16;
  v16 = v15->fields.effect;
  if ( !v16 )
    goto LABEL_16;
  v17 = UnityEngine_GameObject__get_transform(v16, 0LL);
  v18 = (System_Int32_array **)TransformHelper__getNodeFromName(v17, this->fields.cardFirstPeelName, 1, 0LL);
  v15->fields.firstTPeelr = (struct UnityEngine_Transform_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v15->fields.firstTPeelr, v18, v19, v20, v21, v22, v23, v24);
  Instance = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_16;
  if ( !Instance )
    goto LABEL_16;
  DesignCardManager__SetupCardImage(Instance, d, v26->fields.firstTr, 1, 0LL);
  v27 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_16;
  if ( !v27 )
    goto LABEL_16;
  DesignCardManager__SetupCardImage(v27, d, v28->fields.firstTPeelr, 1, 0LL);
  v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v30 = this->fields.__4__this;
  if ( !v30
    || (v31 = (DesignCardManager_o *)v29, (v32 = v30->fields.effect) == 0LL)
    || (v33 = UnityEngine_GameObject__get_transform(v32, 0LL),
        v34 = TransformHelper__getNodeFromName(v33, this->fields.cardSecondName, 1, 0LL),
        !v31)
    || (DesignCardManager__SetupCardImage(v31, d, v34, 1, 0LL), (v35 = this->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  SummonEffectComponent__CompleteCallback(v35, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__4(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct SummonEffectComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x21
  DesignCardManager_o *Instance; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Shader_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UnityEngine_Material_o *v19; // x21
  UnityEngine_Texture_o *v20; // x22
  SummonEffectComponent_o *v21; // x0

  if ( (byte_40F7A89 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_4501, v7);
    byte_40F7A89 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  effect = _4__this->fields.effect;
  if ( !effect )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform(effect, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, this->fields.cardRotName, 1, 0LL);
  Instance = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  DesignCardManager__SetupCardImage(Instance, d, NodeFromName, 101, 0LL);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)NodeFromName,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v14 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4501, 0LL);
  v19 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v15, v16, v17, v18);
  UnityEngine_Material___ctor(v19, v14, 0LL);
  if ( !Component_WebViewObject
    || (v20 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(WebViewObject_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._2_GetHashCode.method)(
                                         Component_WebViewObject,
                                         Component_WebViewObject->klass[1].vtable._3_ToString.methodPtr),
        ((void (__fastcall *)(WebViewObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._1_Finalize.method)(
          Component_WebViewObject,
          v19,
          Component_WebViewObject->klass[1].vtable._2_GetHashCode.methodPtr),
        !v19)
    || (UnityEngine_Material__set_mainTexture(v19, v20, 0LL), (v21 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  SummonEffectComponent__CompleteCallback(v21, 0LL);
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
  WebViewManager_o *Instance; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v8; // x21
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *transform; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8
  UnityEngine_Transform_o *NodeFromName; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  SummonEffectComponent_o *v14; // x0

  if ( (byte_40F7A8A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_40F7A8A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v8 = (DesignCardManager_o *)Instance;
  effect = _4__this->fields.effect;
  if ( !effect
    || (transform = UnityEngine_GameObject__get_transform(effect, 0LL), (v11 = this->fields.CS___8__locals1) == 0LL)
    || (NodeFromName = TransformHelper__getNodeFromName(transform, v11->fields.cardSecondName, 1, 0LL), !v8)
    || (DesignCardManager__SetupCardImage(v8, d, NodeFromName, this->fields.classCardId, 0LL),
        (v13 = this->fields.CS___8__locals1) == 0LL)
    || (v14 = v13->fields.__4__this) == 0LL )
  {
LABEL_11:
    sub_B170D4();
  }
  SummonEffectComponent__CompleteCallback(v14, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_1___UpdateCardTexture_b__8(
        SummonEffectComponent___c__DisplayClass45_1_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x21
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *transform; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *v9; // x8
  System_Int32_array **NodeFromName; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct SummonEffectComponent___c__DisplayClass45_0_o *v17; // x8
  struct SummonEffectComponent_o *v18; // x21
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Transform_o *v20; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *v21; // x8
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  DesignCardManager_o *Instance; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *v30; // x8
  struct SummonEffectComponent_o *v31; // x8
  DesignCardManager_o *v32; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *v33; // x8
  struct SummonEffectComponent_o *v34; // x8
  WebViewManager_o *v35; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *v36; // x8
  struct SummonEffectComponent_o *v37; // x8
  DesignCardManager_o *v38; // x21
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Transform_o *v40; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *v41; // x8
  UnityEngine_Transform_o *v42; // x0
  struct SummonEffectComponent___c__DisplayClass45_0_o *v43; // x8
  SummonEffectComponent_o *v44; // x0

  if ( (byte_40F7A8B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_40F7A8B = 1;
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_25;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  effect = _4__this->fields.effect;
  if ( !effect )
    goto LABEL_25;
  transform = UnityEngine_GameObject__get_transform(effect, 0LL);
  v9 = this->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_25;
  NodeFromName = (System_Int32_array **)TransformHelper__getNodeFromName(transform, v9->fields.cardFirstName, 1, 0LL);
  _4__this->fields.firstTr = (struct UnityEngine_Transform_o *)NodeFromName;
  sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.firstTr, NodeFromName, v11, v12, v13, v14, v15, v16);
  v17 = this->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  v18 = v17->fields.__4__this;
  if ( !v18 )
    goto LABEL_25;
  v19 = v18->fields.effect;
  if ( !v19 )
    goto LABEL_25;
  v20 = UnityEngine_GameObject__get_transform(v19, 0LL);
  v21 = this->fields.CS___8__locals1;
  if ( !v21 )
    goto LABEL_25;
  v22 = (System_Int32_array **)TransformHelper__getNodeFromName(v20, v21->fields.cardFirstPeelName, 1, 0LL);
  v18->fields.firstTPeelr = (struct UnityEngine_Transform_o *)v22;
  sub_B16F98((BattleServantConfConponent_o *)&v18->fields.firstTPeelr, v22, v23, v24, v25, v26, v27, v28);
  Instance = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v30 = this->fields.CS___8__locals1;
  if ( !v30 )
    goto LABEL_25;
  v31 = v30->fields.__4__this;
  if ( !v31 )
    goto LABEL_25;
  if ( !Instance )
    goto LABEL_25;
  DesignCardManager__SetupCardImage(Instance, d, v31->fields.firstTr, this->fields.classCardId, 0LL);
  v32 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v33 = this->fields.CS___8__locals1;
  if ( !v33 )
    goto LABEL_25;
  v34 = v33->fields.__4__this;
  if ( !v34 )
    goto LABEL_25;
  if ( !v32 )
    goto LABEL_25;
  DesignCardManager__SetupCardImage(v32, d, v34->fields.firstTPeelr, this->fields.classCardId, 0LL);
  v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v36 = this->fields.CS___8__locals1;
  if ( !v36 )
    goto LABEL_25;
  v37 = v36->fields.__4__this;
  if ( !v37 )
    goto LABEL_25;
  v38 = (DesignCardManager_o *)v35;
  v39 = v37->fields.effect;
  if ( !v39
    || (v40 = UnityEngine_GameObject__get_transform(v39, 0LL), (v41 = this->fields.CS___8__locals1) == 0LL)
    || (v42 = TransformHelper__getNodeFromName(v40, v41->fields.cardSecondName, 1, 0LL), !v38)
    || (DesignCardManager__SetupCardImage(v38, d, v42, this->fields.classCardId, 0LL),
        (v43 = this->fields.CS___8__locals1) == 0LL)
    || (v44 = v43->fields.__4__this) == 0LL )
  {
LABEL_25:
    sub_B170D4();
  }
  SummonEffectComponent__CompleteCallback(v44, 0LL);
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
  WebViewManager_o *Instance; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals2; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v9; // x21
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *transform; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  UnityEngine_Transform_o *NodeFromName; // x0
  WebViewManager_o *v15; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *v16; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v17; // x8
  struct SummonEffectComponent_o *v18; // x8
  DesignCardManager_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Transform_o *v21; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *v22; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v23; // x8
  UnityEngine_Transform_o *v24; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *v25; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v26; // x8
  SummonEffectComponent_o *v27; // x0

  if ( (byte_40F7A8C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_40F7A8C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  effect = _4__this->fields.effect;
  if ( !effect )
    goto LABEL_21;
  transform = UnityEngine_GameObject__get_transform(effect, 0LL);
  v12 = this->fields.CS___8__locals2;
  if ( !v12 )
    goto LABEL_21;
  v13 = v12->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_21;
  NodeFromName = TransformHelper__getNodeFromName(transform, v13->fields.cardFirstName, 1, 0LL);
  if ( !v9 )
    goto LABEL_21;
  DesignCardManager__SetupCardImage(v9, d, NodeFromName, this->fields.beforeClassCardId, 0LL);
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v16 = this->fields.CS___8__locals2;
  if ( !v16 )
    goto LABEL_21;
  v17 = v16->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_21;
  v18 = v17->fields.__4__this;
  if ( !v18 )
    goto LABEL_21;
  v19 = (DesignCardManager_o *)v15;
  v20 = v18->fields.effect;
  if ( !v20 )
    goto LABEL_21;
  v21 = UnityEngine_GameObject__get_transform(v20, 0LL);
  v22 = this->fields.CS___8__locals2;
  if ( !v22
    || (v23 = v22->fields.CS___8__locals1) == 0LL
    || (v24 = TransformHelper__getNodeFromName(v21, v23->fields.cardFirstPeelName, 1, 0LL), !v19)
    || (DesignCardManager__SetupCardImage(v19, d, v24, this->fields.beforeClassCardId, 0LL),
        (v25 = this->fields.CS___8__locals2) == 0LL)
    || (v26 = v25->fields.CS___8__locals1) == 0LL
    || (v27 = v26->fields.__4__this) == 0LL )
  {
LABEL_21:
    sub_B170D4();
  }
  SummonEffectComponent__CompleteCallback(v27, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_2___UpdateCardTexture_b__6(
        SummonEffectComponent___c__DisplayClass45_2_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals2; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v9; // x21
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *transform; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  UnityEngine_Transform_o *NodeFromName; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *v15; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v16; // x8
  SummonEffectComponent_o *v17; // x0

  if ( (byte_40F7A8D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_40F7A8D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  effect = _4__this->fields.effect;
  if ( !effect )
    goto LABEL_14;
  transform = UnityEngine_GameObject__get_transform(effect, 0LL);
  v12 = this->fields.CS___8__locals2;
  if ( !v12
    || (v13 = v12->fields.CS___8__locals1) == 0LL
    || (NodeFromName = TransformHelper__getNodeFromName(transform, v13->fields.cardRotName, 1, 0LL), !v9)
    || (DesignCardManager__SetupCardImage(v9, d, NodeFromName, this->fields.classBackId, 0LL),
        (v15 = this->fields.CS___8__locals2) == 0LL)
    || (v16 = v15->fields.CS___8__locals1) == 0LL
    || (v17 = v16->fields.__4__this) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  SummonEffectComponent__CompleteCallback(v17, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals3; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *transform; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *v14; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v15; // x8
  UnityEngine_Transform_o *NodeFromName; // x21
  DesignCardManager_o *Instance; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *v19; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v20; // x8
  WebViewObject_o *v21; // x20
  System_String_o **v22; // x8
  UnityEngine_Shader_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  UnityEngine_Material_o *v28; // x21
  UnityEngine_Texture_o *v29; // x22
  struct SummonEffectComponent___c__DisplayClass45_1_o *v30; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v31; // x8
  SummonEffectComponent_o *v32; // x0

  if ( (byte_40F7A8E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_14954, v7);
    sub_B16FFC(&StringLiteral_4501, v8);
    byte_40F7A8E = 1;
  }
  CS___8__locals3 = this->fields.CS___8__locals3;
  if ( !CS___8__locals3 )
    goto LABEL_22;
  CS___8__locals1 = CS___8__locals3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_22;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  effect = _4__this->fields.effect;
  if ( !effect )
    goto LABEL_22;
  transform = UnityEngine_GameObject__get_transform(effect, 0LL);
  v14 = this->fields.CS___8__locals3;
  if ( !v14 )
    goto LABEL_22;
  v15 = v14->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_22;
  NodeFromName = TransformHelper__getNodeFromName(transform, v15->fields.cardRotName, 1, 0LL);
  Instance = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  DesignCardManager__SetupCardImage(Instance, d, NodeFromName, this->fields.backImageId, 0LL);
  if ( !NodeFromName )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)NodeFromName,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v19 = this->fields.CS___8__locals3;
  if ( !v19 )
    goto LABEL_22;
  v20 = v19->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_22;
  v21 = Component_WebViewObject;
  v22 = (System_String_o **)(v20->fields.cardType == 1 ? &StringLiteral_4501 : &StringLiteral_14954);
  v23 = UnityEngine_Shader__Find(*v22, 0LL);
  v28 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v24, v25, v26, v27);
  UnityEngine_Material___ctor(v28, v23, 0LL);
  if ( !v21
    || (v29 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(WebViewObject_o *, Il2CppMethodPointer))v21->klass[1].vtable._2_GetHashCode.method)(
                                         v21,
                                         v21->klass[1].vtable._3_ToString.methodPtr),
        ((void (__fastcall *)(WebViewObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v21->klass[1].vtable._1_Finalize.method)(
          v21,
          v28,
          v21->klass[1].vtable._2_GetHashCode.methodPtr),
        !v28)
    || (UnityEngine_Material__set_mainTexture(v28, v29, 0LL), (v30 = this->fields.CS___8__locals3) == 0LL)
    || (v31 = v30->fields.CS___8__locals1) == 0LL
    || (v32 = v31->fields.__4__this) == 0LL )
  {
LABEL_22:
    sub_B170D4();
  }
  SummonEffectComponent__CompleteCallback(v32, 0LL);
}