void SummonEffectComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct SummonEffectComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct SummonEffectComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct SummonEffectComponent_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct SummonEffectComponent_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct SummonEffectComponent_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct SummonEffectComponent_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct SummonEffectComponent_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct SummonEffectComponent_StaticFields *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7

  if ( (byte_5934A2A & 1) == 0 )
  {
    sub_21FFC50(&SummonEffectComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_25062/*"summon_up_04"*/);
    sub_21FFC50(&StringLiteral_25060/*"summon_up_02"*/);
    sub_21FFC50(&StringLiteral_7352/*"GetAnimationName"*/);
    sub_21FFC50(&StringLiteral_25061/*"summon_up_03"*/);
    sub_21FFC50(&StringLiteral_25059/*"summon_up_01"*/);
    sub_21FFC50(&StringLiteral_11659/*"RarityAnimationName"*/);
    sub_21FFC50(&StringLiteral_15746/*"UpAnimationName"*/);
    sub_21FFC50(&StringLiteral_7980/*"InitializeAnimationName"*/);
    byte_5934A2A = 1;
  }
  v7 = StringLiteral_25059/*"summon_up_01"*/;
  SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION = (struct System_String_o *)StringLiteral_25059/*"summon_up_01"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SummonEffectComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_25060/*"summon_up_02"*/;
  static_fields = SummonEffectComponent_TypeInfo->static_fields;
  static_fields->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_25060/*"summon_up_02"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->RANKUP_TO_SILVER_ANIMATION,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_25061/*"summon_up_03"*/;
  v17 = SummonEffectComponent_TypeInfo->static_fields;
  v17->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_25061/*"summon_up_03"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->RANKUP_TO_GOLD_ANIMATION, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_25062/*"summon_up_04"*/;
  v25 = SummonEffectComponent_TypeInfo->static_fields;
  v25->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_25062/*"summon_up_04"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->RANKUP_COMMANDCODE_ANIMATION, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_15746/*"UpAnimationName"*/;
  v33 = SummonEffectComponent_TypeInfo->static_fields;
  v33->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15746/*"UpAnimationName"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v33->FSM_VARIABLE_UP_ANIMATION_NAME,
    v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = StringLiteral_7980/*"InitializeAnimationName"*/;
  v41 = SummonEffectComponent_TypeInfo->static_fields;
  v41->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7980/*"InitializeAnimationName"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v41->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = StringLiteral_11659/*"RarityAnimationName"*/;
  v49 = SummonEffectComponent_TypeInfo->static_fields;
  v49->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11659/*"RarityAnimationName"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v49->FSM_VARIABLE_RARITY_ANIMATION_NAME,
    v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = StringLiteral_7352/*"GetAnimationName"*/;
  v57 = SummonEffectComponent_TypeInfo->static_fields;
  v57->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7352/*"GetAnimationName"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v57->FSM_VARIABLE_GET_ANIMATION_NAME,
    v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = SummonEffectComponent_TypeInfo->static_fields;
  v64->rarityToColor = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v64->rarityToColor, 0, v65, v66, v67, v68, v69, v70);
}


void SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int v11; // w8
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5934A29 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934A29 = 1;
  }
  v3 = sub_21FFD10(int___TypeInfo, 2);
  if ( !v3 )
    sub_21FFECC(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 512, v11 == 1) )
    sub_21FFED4(v3);
  *(_DWORD *)(v3 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cardTextureSize, v3, v5, v6, v7, v8, v9, v10);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.effAnimName, v12, v13, v14, v15, v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonEffectComponent__AddSummonInfo(
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
  System_Collections_Generic_List_object__o *SummonInfos; // x19
  __int64 v19; // x24
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_5934A19 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
    sub_21FFC50(&SummonEffectComponent_SummonInfo_TypeInfo);
    byte_5934A19 = 1;
  }
  SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  }
  v19 = sub_21FFEBC(SummonEffectComponent_SummonInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  *(_DWORD *)(v19 + 16) = servantId;
  *(_DWORD *)(v19 + 20) = limitCount;
  *(_BYTE *)(v19 + 24) = isRankup;
  *(_BYTE *)(v19 + 25) = isNewCard;
  *(_DWORD *)(v19 + 28) = noticeRarity;
  *(_DWORD *)(v19 + 32) = rarity;
  *(_DWORD *)(v19 + 36) = cardType;
  *(_BYTE *)(v19 + 40) = isSkipStop;
  *(_QWORD *)(v19 + 48) = userSvtId;
  if ( !SummonInfos
    || (items = SummonInfos->fields._items,
        v29 = Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__,
        ++SummonInfos->fields._version,
        !items) )
  {
    sub_21FFECC(v20, v21);
  }
  size = SummonInfos->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      SummonInfos,
      (Il2CppObject *)v19,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    SummonInfos->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v19;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 4), v19, v22, v23, v24, v25, v26, v27);
  }
}


void SummonEffectComponent__ChangeClassCardColor(
        SummonEffectComponent_o *this,
        UnityEngine_Transform_o *cardNode,
        int32_t col,
        const MethodInfo *method)
{
  SummonEffectComponent_o *v6; // x19
  struct UnityEngine_Texture2D_array *testCards; // x8
  UnityEngine_Texture2D_o *v8; // x21
  UITexture_o *v9; // x20
  struct System_Int32_array *cardTextureSize; // x8
  UnityEngine_Rect_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_5934A22 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_5934A22 = 1;
  }
  testCards = v6->fields.testCards;
  if ( !testCards )
    goto LABEL_10;
  if ( LODWORD(testCards->max_length) <= col )
    goto LABEL_11;
  if ( !cardNode
    || (v8 = testCards->m_Items[col],
        (this = (SummonEffectComponent_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)cardNode,
                                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, void *))this->klass[1].vtable._3_ToString.method)(
                                            this,
                                            v8,
                                            this->klass[2]._1.image),
        (cardTextureSize = v6->fields.cardTextureSize) == 0) )
  {
LABEL_10:
    sub_21FFECC(this, cardNode);
  }
  if ( (cardTextureSize->max_length & 0xFFFFFFFE) == 0 )
LABEL_11:
    sub_21FFED4(this);
  v11.fields.m_Width = 0.5;
  v11.fields.m_Height = (float)cardTextureSize->m_Items[1] * 0.00097656;
  v11.fields.m_YMin = 1.0 - v11.fields.m_Height;
  v11.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v9, v11, 0);
}


void SummonEffectComponent__CompleteCallback(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int32_t counterMax; // w9
  int32_t v4; // w8
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_5934A23 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&StringLiteral_12505/*"SETUP_DONE"*/);
    byte_5934A23 = 1;
  }
  counterMax = this->fields._counterMax;
  v4 = this->fields._counter + 1;
  this->fields._counter = v4;
  if ( v4 >= counterMax )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_21FFECC(0, v6);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_12505/*"SETUP_DONE"*/, 0);
  }
}


void SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  CommonUI_o *v5; // x19

  if ( (byte_5934A1B & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5934A1B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v3, v4);
  if ( !v5 )
    sub_21FFECC(Instance, v3);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


int32_t SummonEffectComponent__GetGachaId(SummonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.gachaId;
}


void SummonEffectComponent__InitSummonEffect(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int *Component_object; // x0
  Il2CppObject *RANKUP_TO_SILVER_ANIMATION; // x1
  PlayMakerFSM_o *v5; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x8
  Il2CppObject *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *v14; // x21
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_List_object__o *upAnimationNameList; // x21
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8
  const MethodInfo_4450604 *v63; // x1
  _BOOL8 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v68; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  AssetLoader_LoadEndDataHandler_o *v71; // x22
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5934A1C & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SummonEffectComponent_OnCharaGraphLoadDone__);
    sub_21FFC50(&SummonEffectComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_8385/*"IsNoSkip"*/);
    sub_21FFC50(&StringLiteral_19068/*"countMax"*/);
    sub_21FFC50(&StringLiteral_13696/*"SummonEffectAnimation"*/);
    byte_5934A1C = 1;
  }
  memset(&v73, 0, sizeof(v73));
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_46;
  v5 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_19068/*"countMax"*/,
                              0);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_46;
  if ( !Component_object )
    goto LABEL_46;
  Component_object[14] = SummonInfos->fields._size;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_8385/*"IsNoSkip"*/,
                              0);
  if ( !Component_object )
    goto LABEL_46;
  *((_BYTE *)Component_object + 56) = this->fields.isNoSkip;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_13696/*"SummonEffectAnimation"*/,
                              0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                              (HutongGames_PlayMaker_FsmGameObject_o *)Component_object,
                              0);
  if ( !Component_object )
    goto LABEL_46;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)Component_object,
         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = (struct UnityEngine_Animation_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.effAnimation, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v14;
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.upAnimationNameList,
    (int32_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  Component_object = (int *)SummonEffectComponent_TypeInfo;
  upAnimationNameList = (System_Collections_Generic_List_object__o *)this->fields.upAnimationNameList;
  if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, RANKUP_TO_SILVER_ANIMATION, v22);
    Component_object = (int *)SummonEffectComponent_TypeInfo;
  }
  if ( !upAnimationNameList )
    goto LABEL_46;
  items = upAnimationNameList->fields._items;
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)**((_QWORD **)Component_object + 23);
  v30 = Method_System_Collections_Generic_List_string__Add__;
  ++upAnimationNameList->fields._version;
  if ( !items )
    goto LABEL_46;
  size = upAnimationNameList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      upAnimationNameList,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    upAnimationNameList->fields._size = size + 1;
    v32[4] = (Il2CppClass *)RANKUP_TO_SILVER_ANIMATION;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v32 + 4),
      (int32_t)RANKUP_TO_SILVER_ANIMATION,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v39 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION;
  v40 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v39 )
    goto LABEL_46;
  v41 = Component_object[6];
  if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = v39 + 8 * v41;
    Component_object[6] = v41 + 1;
    *(_QWORD *)(v42 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v42 + 32),
      (int32_t)RANKUP_TO_SILVER_ANIMATION,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v49 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION;
  v50 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v49 )
    goto LABEL_46;
  v51 = Component_object[6];
  if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = v49 + 8 * v51;
    Component_object[6] = v51 + 1;
    *(_QWORD *)(v52 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v52 + 32),
      (int32_t)RANKUP_TO_SILVER_ANIMATION,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v59 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION;
  v60 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v59 )
    goto LABEL_46;
  v61 = Component_object[6];
  if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = v59 + 8 * v61;
    Component_object[6] = v61 + 1;
    *(_QWORD *)(v62 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v62 + 32),
      (int32_t)RANKUP_TO_SILVER_ANIMATION,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  Component_object = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Component_object
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_object, 1, 0),
        (Component_object = (int *)this->fields.SummonInfos) == 0) )
  {
LABEL_46:
    sub_21FFECC(Component_object, RANKUP_TO_SILVER_ANIMATION);
  }
  v63 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__;
  this->fields.DownloadCounter = Component_object[6];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    (System_Collections_Generic_List_object__o *)Component_object,
    v63);
  v73 = v72;
  v72.fields._list = 0;
  *(_QWORD *)&v72.fields._index = &v73;
  while ( 1 )
  {
    v64 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v64 )
      break;
    if ( !v73.fields._current )
      sub_21FFECC(v64, v65);
    klass = (int32_t)v73.fields._current[1].klass;
    if ( HIDWORD(v73.fields._current[2].klass) == 3 )
    {
      v68 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v68,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0);
      CharaGraphManager__DownloadCommandAsset(klass, v68, 0);
    }
    else
    {
      klass_high = HIDWORD(v73.fields._current[1].klass);
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v65, v66);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0);
      v71 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v71,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v71, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5934A18 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
    byte_5934A18 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.SummonInfos, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  int32_t v4; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5934A1D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_7773/*"INIT_DONE"*/);
    byte_5934A1D = 1;
  }
  v4 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v4;
  if ( !v4 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0),
          (Instance = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0) )
    {
      sub_21FFECC(Instance, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7773/*"INIT_DONE"*/, 0);
  }
}


void SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1

  if ( (byte_5934A28 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&StringLiteral_5934/*"EVENT_SKIP"*/);
    byte_5934A28 = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_21FFECC(0, v4);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5934/*"EVENT_SKIP"*/, 0);
  }
}


void SummonEffectComponent__ReleasePrevAsset(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_string__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5934A1E & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_5934A1E = 1;
  }
  releaseAssetPath = this->fields._releaseAssetPath;
  memset(&v12, 0, sizeof(v12));
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v5);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v9 = this->fields._releaseAssetPath;
    if ( !v9 )
      sub_21FFECC(v7, v8);
    size = v9->fields._size;
    v11 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v11;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
  }
}


void SummonEffectComponent__SetGachaId(SummonEffectComponent_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.gachaId = id;
}


void SummonEffectComponent__SetUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  char *Component_object; // x0
  __int64 Value; // x1
  PlayMakerFSM_o *v5; // x20
  const MethodInfo_444F85C *v6; // x2
  Il2CppObject *Item; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x2
  HutongGames_PlayMaker_FsmVariables_o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_String_o *effAnimName; // x1

  if ( (byte_5934A24 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&SummonEffectComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_11645/*"Rank"*/);
    byte_5934A24 = 1;
  }
  Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object
    || (v5 = (PlayMakerFSM_o *)Component_object,
        (Component_object = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0)) == 0)
    || (Component_object = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                     (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                     (System_String_o *)StringLiteral_11645/*"Rank"*/,
                                     0)) == 0 )
  {
LABEL_17:
    sub_21FFECC(Component_object, Value);
  }
  Value = (unsigned int)HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Component_object, 0);
  Component_object = (char *)this->fields.upAnimationNameList;
  if ( (Value & 0x80000000) != 0 )
  {
    if ( !Component_object )
      goto LABEL_17;
  }
  else
  {
    if ( !Component_object )
      goto LABEL_17;
    if ( (int)Value < *((_DWORD *)Component_object + 6) )
    {
      v6 = (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__;
      goto LABEL_12;
    }
  }
  v6 = (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__;
  LODWORD(Value) = 0;
LABEL_12:
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)Component_object,
           Value,
           v6);
  this->fields.effAnimName = (struct System_String_o *)Item;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.effAnimName, (int32_t)Item, v8, v9, v10, v11, v12, v13);
  Component_object = (char *)PlayMakerFSM__get_FsmVariables(v5, 0);
  v15 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, Value, v14);
  if ( !v15 )
    goto LABEL_17;
  Component_object = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               v15,
                               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                               0);
  if ( !Component_object )
    goto LABEL_17;
  effAnimName = this->fields.effAnimName;
  *((_QWORD *)Component_object + 7) = effAnimName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(Component_object + 56),
    (int32_t)effAnimName,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void SummonEffectComponent__SetUpInitializeAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *Component_object; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x19
  __int64 v6; // x2
  HutongGames_PlayMaker_FsmVariables_o *v7; // x20
  System_String_o *Value; // x0

  if ( (byte_5934A25 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&SummonEffectComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_7766/*"INITIALIZE_ANIMATION"*/);
    byte_5934A25 = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_10;
  v5 = Component_object;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0);
  v7 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v4, v6);
  if ( !v7
    || (Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                               v7,
                                               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                               0)) == 0 )
  {
LABEL_10:
    sub_21FFECC(Component_object, v4);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  if ( !System_String__IsNullOrEmpty(Value, 0) )
    PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_7766/*"INITIALIZE_ANIMATION"*/, 0);
}


void SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonEffectComponent_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  SummonEffectComponent_c *v14; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_5934A1A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    sub_21FFC50(&SummonEffectComponent_TypeInfo);
    byte_5934A1A = 1;
  }
  v3 = SummonEffectComponent_TypeInfo;
  if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, method, v2);
    v3 = SummonEffectComponent_TypeInfo;
  }
  if ( !v3->static_fields->rarityToColor )
  {
    v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
      v4,
      (const MethodInfo_3F84F84 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v4 )
      sub_21FFECC(v5, v6);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v4,
      0,
      0,
      (const MethodInfo_3F85928 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v4,
      1,
      0,
      (const MethodInfo_3F85928 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v4,
      2,
      0,
      (const MethodInfo_3F85928 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v4,
      3,
      1,
      (const MethodInfo_3F85928 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v4,
      4,
      2,
      (const MethodInfo_3F85928 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v4,
      5,
      2,
      (const MethodInfo_3F85928 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v4,
      101,
      0,
      (const MethodInfo_3F85928 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v4,
      102,
      0,
      (const MethodInfo_3F85928 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v14 = SummonEffectComponent_TypeInfo;
    if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v7, v8);
      v14 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v4;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->rarityToColor,
      (int32_t)v4,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
}


void SummonEffectComponent__StopRarityAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *Component_object; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  HutongGames_PlayMaker_FsmVariables_o *v6; // x20
  System_String_o *Value; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v11; // x20
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  __int64 v14; // x1
  __int64 v15; // x2

  if ( (byte_5934A27 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&SummonEffectComponent_TypeInfo);
    byte_5934A27 = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0);
  v6 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v4, v5);
  if ( !v6 )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                         v6,
                                         SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                                         0);
  if ( !Component_object )
    goto LABEL_22;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v11 = Value;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0, 0) && !System_String__IsNullOrEmpty(v11, 0) )
  {
    Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
    if ( Component_object )
    {
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)Component_object, v11, 0) )
        return;
      Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
      if ( Component_object )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)Component_object,
                                                   v11,
                                                   0);
        Component_object = (PlayMakerFSM_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
        if ( ((unsigned __int8)Component_object & 1) == 0 )
          return;
        if ( Item )
        {
          length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0);
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, length, 0);
          UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 1, 0);
          Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
          if ( Component_object )
          {
            UnityEngine_Animation__Sample((UnityEngine_Animation_o *)Component_object, 0);
            UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 0, 0);
            if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v14, v15);
            SoundManager__stopSe(0.0, 0);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_21FFECC(Component_object, v4);
  }
}


void SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *effAnimation; // x20
  __int64 v5; // x1
  UnityEngine_Animation_o *ComponentsInChildren_object; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  __int64 v9; // x2
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v11; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v13; // x20

  if ( (byte_5934A26 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____91505672);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934A26 = 1;
  }
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(effAnimation, 0, 0)
    || System_String__IsNullOrEmpty(this->fields.effAnimName, 0) )
  {
    return;
  }
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  if ( !UnityEngine_Animation__IsPlaying(ComponentsInChildren_object, this->fields.effAnimName, 0) )
    return;
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                             ComponentsInChildren_object,
                                             this->fields.effAnimName,
                                             0);
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
  {
    if ( Item )
    {
      length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0);
      UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, length, 0);
      UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 1, 0);
      ComponentsInChildren_object = this->fields.effAnimation;
      if ( ComponentsInChildren_object )
      {
        UnityEngine_Animation__Sample(ComponentsInChildren_object, 0);
        UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 0, 0);
        goto LABEL_14;
      }
    }
LABEL_27:
    sub_21FFECC(ComponentsInChildren_object, v5);
  }
LABEL_14:
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                             1,
                                                             (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____91505672);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  klass = ComponentsInChildren_object[1].klass;
  v11 = ComponentsInChildren_object;
  if ( (int)klass >= 1 )
  {
    for ( i = 0; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_21FFED4(ComponentsInChildren_object);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11[1].monitor + i);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
      ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
      if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)v13,
                                                                   0);
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object, 0, 0);
      }
      LODWORD(klass) = v11[1].klass;
    }
  }
}


void SummonEffectComponent__UpdateCardParam(SummonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo_37ED7E0 *v3; // x1
  void *Component_object; // x0
  __int64 v5; // x1
  PlayMakerFSM_o *v6; // x20
  int32_t v7; // w21
  int v8; // w28
  int v9; // w27
  char v10; // w26
  int v11; // w25
  int v12; // w23
  int v13; // w22
  int v14; // w24
  char v15; // w21
  __int64 v16; // x2
  HutongGames_PlayMaker_FsmVariables_o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  bool v36; // zf
  bool v37; // w8
  int v38; // w21
  __int64 v39; // x2
  UnityEngine_Object_o *firstTr; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  UnityEngine_Object_o *firstTPeelr; // x20

  if ( (byte_5934A20 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SummonEffectComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_8384/*"IsNewCard"*/);
    sub_21FFC50(&StringLiteral_19067/*"countIndex"*/);
    sub_21FFC50(&StringLiteral_8398/*"IsRankUp"*/);
    sub_21FFC50(&StringLiteral_8404/*"IsSkipStop"*/);
    sub_21FFC50(&StringLiteral_8778/*"LimitCount"*/);
    sub_21FFC50(&StringLiteral_9959/*"NoticeRarity"*/);
    sub_21FFC50(&StringLiteral_4503/*"CardType"*/);
    sub_21FFC50(&StringLiteral_11657/*"Rarity"*/);
    sub_21FFC50(&StringLiteral_13247/*"ServantId"*/);
    byte_5934A20 = 1;
  }
  v3 = (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___;
  this->fields.isNoSkipAll = 0;
  Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v3);
  if ( !Component_object )
    goto LABEL_69;
  v6 = (PlayMakerFSM_o *)Component_object;
  Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_19067/*"countIndex"*/,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = (void *)HutongGames_PlayMaker_FsmInt__get_Value(
                               (HutongGames_PlayMaker_FsmInt_o *)Component_object,
                               0);
  if ( !this->fields.SummonInfos )
    goto LABEL_69;
  v7 = (int)Component_object;
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       (int32_t)Component_object,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_69;
  if ( !this->fields.SummonInfos )
    goto LABEL_69;
  v8 = *((_DWORD *)Component_object + 4);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v7,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_69;
  if ( !this->fields.SummonInfos )
    goto LABEL_69;
  v9 = *((_DWORD *)Component_object + 5);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v7,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_69;
  if ( !this->fields.SummonInfos )
    goto LABEL_69;
  v10 = *((_BYTE *)Component_object + 24);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v7,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_69;
  if ( !this->fields.SummonInfos )
    goto LABEL_69;
  v11 = *((unsigned __int8 *)Component_object + 25);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v7,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_69;
  if ( !this->fields.SummonInfos )
    goto LABEL_69;
  v12 = *((_DWORD *)Component_object + 7);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v7,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_69;
  if ( !this->fields.SummonInfos )
    goto LABEL_69;
  v13 = *((_DWORD *)Component_object + 8);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v7,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_69;
  if ( !this->fields.SummonInfos )
    goto LABEL_69;
  v14 = *((_DWORD *)Component_object + 9);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v7,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_69;
  v15 = *((_BYTE *)Component_object + 40);
  Component_object = PlayMakerFSM__get_FsmVariables(v6, 0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_13247/*"ServantId"*/,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  *((_DWORD *)Component_object + 14) = v8;
  Component_object = PlayMakerFSM__get_FsmVariables(v6, 0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8778/*"LimitCount"*/,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  *((_DWORD *)Component_object + 14) = v9;
  Component_object = PlayMakerFSM__get_FsmVariables(v6, 0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8398/*"IsRankUp"*/,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  *((_BYTE *)Component_object + 56) = v10;
  Component_object = PlayMakerFSM__get_FsmVariables(v6, 0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8404/*"IsSkipStop"*/,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  *((_BYTE *)Component_object + 56) = v15;
  Component_object = PlayMakerFSM__get_FsmVariables(v6, 0);
  v17 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v5, v16);
  if ( !v17 )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v17,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  *((_QWORD *)Component_object + 7) = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)Component_object + 56), 0, v18, v19, v20, v21, v22, v23);
  Component_object = PlayMakerFSM__get_FsmVariables(v6, 0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  *((_QWORD *)Component_object + 7) = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)Component_object + 56), 0, v24, v25, v26, v27, v28, v29);
  Component_object = PlayMakerFSM__get_FsmVariables(v6, 0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  *((_QWORD *)Component_object + 7) = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)Component_object + 56), 0, v30, v31, v32, v33, v34, v35);
  Component_object = PlayMakerFSM__get_FsmVariables(v6, 0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8384/*"IsNewCard"*/,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  v36 = v11 || v13 == 0;
  v37 = v36;
  *((_BYTE *)Component_object + 56) = v37;
  Component_object = PlayMakerFSM__get_FsmVariables(v6, 0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_9959/*"NoticeRarity"*/,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  *((_DWORD *)Component_object + 14) = v12;
  Component_object = PlayMakerFSM__get_FsmVariables(v6, 0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_4503/*"CardType"*/,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  *((_DWORD *)Component_object + 14) = v14;
  if ( (unsigned int)(v13 - 3) >= 3 )
    v38 = v13 ? 0 : 3;
  else
    v38 = dword_ECF9D8[v13 - 3];
  Component_object = PlayMakerFSM__get_FsmVariables(v6, 0);
  if ( !Component_object )
    goto LABEL_69;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_11657/*"Rarity"*/,
                       0);
  if ( !Component_object )
    goto LABEL_69;
  firstTr = (UnityEngine_Object_o *)this->fields.firstTr;
  *((_DWORD *)Component_object + 14) = v38;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v39);
  if ( UnityEngine_Object__op_Inequality(firstTr, 0, 0) )
  {
    firstTPeelr = (UnityEngine_Object_o *)this->fields.firstTPeelr;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41, v42);
    if ( UnityEngine_Object__op_Inequality(firstTPeelr, 0, 0) )
    {
      Component_object = this->fields.firstTr;
      if ( Component_object )
      {
        Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
        if ( Component_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
          Component_object = this->fields.firstTPeelr;
          if ( Component_object )
          {
            Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
            if ( Component_object )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
              return;
            }
          }
        }
      }
LABEL_69:
      sub_21FFECC(Component_object, v5);
    }
  }
}


void SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  __int64 Component_object; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo_37ED7E0 *v12; // x1
  PlayMakerFSM_o *v13; // x23
  int32_t v14; // w19
  int v15; // w26
  int v16; // w27
  int v17; // w22
  int32_t v18; // w29
  int v19; // w8
  char v20; // w28
  System_Collections_Generic_List_object__o *v21; // x19
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x2
  HutongGames_PlayMaker_FsmVariables_o *v29; // x19
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  bool v36; // zf
  bool v37; // w8
  int v38; // w22
  __int64 v39; // x2
  HutongGames_PlayMaker_FsmVariables_o *v40; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  Il2CppObject *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x28
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x24
  float v58; // s8
  System_String_o *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_String_o *v73; // x0
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_String_o *v80; // x0
  System_String_o **v81; // x19
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v89; // x24
  UnityEngine_Transform_o *v90; // x22
  int32_t Item; // w0
  bool v92; // zf
  _BOOL4 v93; // w26
  System_Collections_Generic_List_object__o *GachaBehaviors; // x0
  __int64 v95; // x2
  __int64 v96; // x22
  __int64 v97; // x2
  System_Collections_Generic_Dictionary_object__object__o *v98; // x27
  __int64 v99; // x1
  __int64 v100; // x2
  GachaBehaviorMaster_c *v101; // x0
  Il2CppObject *v102; // x0
  __int64 v103; // x2
  __int64 v104; // x3
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  __int64 v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  __int64 v114; // x8
  UnityEngine_Object_o *prevObject; // x22
  struct UnityEngine_GameObject_o **p_prevObject; // x27
  UnityEngine_Object_c *v117; // x0
  int32_t v118; // w9
  int v119; // w8
  __int64 v120; // x1
  __int64 v121; // x2
  UnityEngine_Object_o *v122; // x22
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  _BOOL4 v129; // w29
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v131; // x26
  bool v132; // w26
  UnityEngine_GameObject_o *v133; // x22
  Il2CppObject *v134; // x26
  System_Action_o *v135; // x25
  System_Action_o *v136; // x25
  UnityEngine_Component_o *v137; // x22
  UnityEngine_Transform_o *v138; // x26
  UnityEngine_GameObject_o *v139; // x0
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  System_String_o *v146; // x24
  System_String_o *v147; // x22
  UnityEngine_Transform_o *v148; // x0
  UnityEngine_Component_o *v149; // x27
  UnityEngine_Transform_o *v150; // x0
  UnityEngine_Component_o *v151; // x24
  int32_t v152; // w22
  System_String_o **v153; // x23
  UnityEngine_GameObject_o *v154; // x8
  int v155; // w9
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
  __int64 v168; // x1
  __int64 v169; // x2
  System_String_o *v170; // x19
  System_String_o *v171; // x0
  System_String_o *v172; // x0
  System_String_o *v173; // x2
  System_String_o *v174; // x3
  int32_t v175; // w4
  int32_t v176; // w5
  bool v177; // w6
  bool v178; // w7
  System_Collections_Generic_List_object__o *v179; // x8
  struct System_Object_array *items; // x9
  _QWORD *v181; // x10
  __int64 size; // x11
  System_String_o *v183; // x19
  Il2CppClass **v184; // x0
  UnityEngine_GameObject_o *v185; // x8
  UnityEngine_Transform_o *v186; // x0
  UnityEngine_Transform_o *v187; // x0
  UnityEngine_Transform_o *v188; // x0
  const MethodInfo *v189; // x3
  const MethodInfo *v190; // x1
  __int64 v191; // x24
  System_String_o *v192; // x2
  System_String_o *v193; // x3
  int32_t v194; // w4
  int32_t v195; // w5
  bool v196; // w6
  bool v197; // w7
  Il2CppObject *v198; // x19
  int v199; // w8
  int32_t v200; // w19
  __int64 v201; // x21
  System_String_o *v202; // x2
  System_String_o *v203; // x3
  int32_t v204; // w4
  int32_t v205; // w5
  bool v206; // w6
  bool v207; // w7
  Il2CppObject **v208; // x20
  __int64 v209; // x2
  Rarity_c *v210; // x0
  int32_t LowerColorRarity; // w0
  int32_t v212; // w22
  int v213; // w23
  __int64 v214; // x20
  System_String_o *v215; // x2
  System_String_o *v216; // x3
  int32_t v217; // w4
  int32_t v218; // w5
  bool v219; // w6
  bool v220; // w7
  Il2CppObject **v221; // x21
  int32_t v222; // w23
  int klass; // w22
  AssetLoader_LoadEndDataHandler_o *v224; // x20
  __int64 v225; // x1
  __int64 v226; // x2
  System_String_o *v227; // x2
  System_String_o *v228; // x3
  int32_t v229; // w4
  int32_t v230; // w5
  bool v231; // w6
  bool v232; // w7
  System_Collections_Generic_List_object__o *v233; // x8
  struct System_Object_array *v234; // x9
  _QWORD *v235; // x10
  __int64 v236; // x11
  System_String_o *v237; // x19
  Il2CppClass **v238; // x0
  AssetLoader_LoadEndDataHandler_o *v239; // x20
  Il2CppObject *v240; // x8
  __int64 v241; // x1
  __int64 v242; // x2
  System_String_o *v243; // x23
  System_String_o *v244; // x2
  System_String_o *v245; // x3
  int32_t v246; // w4
  int32_t v247; // w5
  bool v248; // w6
  bool v249; // w7
  const MethodInfo_476E8C0 *v250; // x0
  __int64 v251; // x8
  _QWORD *v252; // x9
  __int64 v253; // x10
  __int64 v254; // x8
  AssetLoader_LoadEndDataHandler_o *v255; // x24
  __int64 v256; // x1
  __int64 v257; // x2
  int32_t v258; // w0
  const MethodInfo_476E8C0 *v259; // x8
  System_String_o *v260; // x22
  System_String_o *v261; // x2
  System_String_o *v262; // x3
  int32_t v263; // w4
  int32_t v264; // w5
  bool v265; // w6
  bool v266; // w7
  __int64 v267; // x8
  _QWORD *v268; // x9
  __int64 v269; // x10
  __int64 v270; // x8
  AssetLoader_LoadEndDataHandler_o *v271; // x23
  __int64 v272; // x1
  __int64 v273; // x2
  int32_t v274; // w9
  Il2CppObject *v275; // x8
  __int64 v276; // x1
  __int64 v277; // x2
  System_String_o *DesignCardPath; // x22
  System_String_o *v279; // x2
  System_String_o *v280; // x3
  int32_t v281; // w4
  int32_t v282; // w5
  bool v283; // w6
  bool v284; // w7
  const MethodInfo_476E8C0 *v285; // x0
  __int64 v286; // x8
  _QWORD *v287; // x9
  __int64 v288; // x10
  __int64 v289; // x8
  Il2CppObject *v290; // x24
  AssetLoader_LoadEndDataHandler_o *v291; // x23
  __int64 v292; // x1
  __int64 v293; // x2
  _DWORD *monitor; // x8
  System_String_o **v295; // x8
  int32_t v296; // w0
  const MethodInfo_476E8C0 *v297; // x8
  __int64 v298; // x1
  __int64 v299; // x2
  System_String_o *v300; // x19
  System_String_o *v301; // x2
  System_String_o *v302; // x3
  int32_t v303; // w4
  int32_t v304; // w5
  bool v305; // w6
  bool v306; // w7
  __int64 v307; // x8
  _QWORD *v308; // x9
  __int64 v309; // x10
  __int64 v310; // x8
  AssetLoader_LoadEndDataHandler_o *v311; // x21
  __int64 v312; // x1
  __int64 v313; // x2
  System_String_o *v314; // x0
  AssetLoader_LoadEndDataHandler_o *v315; // x1
  const MethodInfo_476E8C0 *v316; // x0
  __int64 v317; // x1
  __int64 v318; // x2
  System_String_o *v319; // x2
  System_String_o *v320; // x3
  int32_t v321; // w4
  int32_t v322; // w5
  bool v323; // w6
  bool v324; // w7
  const MethodInfo_476E8C0 *v325; // x0
  __int64 v326; // x8
  _QWORD *v327; // x9
  __int64 v328; // x10
  __int64 v329; // x8
  Il2CppObject *v330; // x21
  __int64 v331; // x1
  __int64 v332; // x2
  GachaBehaviorMaster_c *v333; // x0
  __int64 v334; // x1
  __int64 v335; // x2
  GachaBehaviorMaster_c *v336; // x0
  __int64 v337; // x2
  __int64 v338; // x3
  __int64 v339; // x1
  int v340; // w8
  GachaBehaviorMaster_c *v341; // x0
  __int64 v342; // x1
  __int64 v343; // x2
  GachaBehaviorMaster_c *v344; // x0
  int v345; // w8
  GachaBehaviorMaster_c *v346; // x0
  __int64 v347; // x1
  __int64 v348; // x2
  GachaBehaviorMaster_c *v349; // x0
  int v350; // w8
  GachaBehaviorMaster_c *v351; // x0
  __int64 v352; // x1
  __int64 v353; // x2
  GachaBehaviorMaster_c *v354; // x0
  int v355; // w8
  GachaBehaviorMaster_c *v356; // x0
  _BOOL4 v357; // w10
  __int64 v358; // x1
  __int64 v359; // x2
  __int64 v360; // x2
  HutongGames_PlayMaker_FsmVariables_o *v361; // x22
  HutongGames_PlayMaker_FsmString_o *v362; // x0
  __int64 v363; // x1
  __int64 v364; // x2
  GachaBehaviorMaster_c *v365; // x8
  System_String_o *v366; // x2
  System_String_o *v367; // x3
  int32_t v368; // w4
  int32_t v369; // w5
  bool v370; // w6
  bool v371; // w7
  __int64 v372; // x8
  __int64 v373; // x1
  GachaBehaviorMaster_c *v374; // x0
  __int64 v375; // x1
  __int64 v376; // x2
  __int64 v377; // x2
  HutongGames_PlayMaker_FsmVariables_o *v378; // x22
  HutongGames_PlayMaker_FsmString_o *v379; // x0
  __int64 v380; // x1
  __int64 v381; // x2
  GachaBehaviorMaster_c *v382; // x8
  int32_t v383; // w4
  int32_t v384; // w5
  bool v385; // w6
  bool v386; // w7
  GachaBehaviorMaster_c *v387; // x0
  __int64 v388; // x2
  HutongGames_PlayMaker_FsmVariables_o *v389; // x22
  HutongGames_PlayMaker_FsmString_o *v390; // x0
  __int64 v391; // x1
  __int64 v392; // x2
  GachaBehaviorMaster_c *v393; // x8
  int32_t v394; // w4
  int32_t v395; // w5
  bool v396; // w6
  bool v397; // w7
  SummonEffectComponent___c__DisplayClass45_0_o *v398; // x0
  const MethodInfo *v399; // x1
  _BOOL4 v400; // [xsp+14h] [xbp-DCh]
  int v401; // [xsp+18h] [xbp-D8h]
  int v402; // [xsp+1Ch] [xbp-D4h]
  int v403; // [xsp+20h] [xbp-D0h]
  int32_t OverwriteClassImageId; // [xsp+24h] [xbp-CCh]
  int v405; // [xsp+3Ch] [xbp-B4h]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+40h] [xbp-B0h]
  int32_t v407; // [xsp+4Ch] [xbp-A4h]
  int64_t v408; // [xsp+50h] [xbp-A0h]
  int32_t v409; // [xsp+60h] [xbp-90h]
  int32_t key; // [xsp+64h] [xbp-8Ch]
  int32_t v411; // [xsp+68h] [xbp-88h]
  int32_t svtId; // [xsp+6Ch] [xbp-84h]
  int v413; // [xsp+70h] [xbp-80h] BYREF
  int32_t v414; // [xsp+74h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v416; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v417; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v418; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v419; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v420; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5934A21 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_21FFC50(&Method_DataManager_GetMasterData_GachaBehaviorMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
    sub_21FFC50(&GachaBehaviorMaster_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_21FFC50(&SummonEffectComponent_TypeInfo);
    sub_21FFC50(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__);
    sub_21FFC50(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__);
    sub_21FFC50(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__);
    sub_21FFC50(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__);
    sub_21FFC50(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__);
    sub_21FFC50(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
    sub_21FFC50(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__);
    sub_21FFC50(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__);
    sub_21FFC50(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
    sub_21FFC50(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__);
    sub_21FFC50(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__);
    sub_21FFC50(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
    sub_21FFC50(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__);
    sub_21FFC50(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
    sub_21FFC50(&StringLiteral_4499/*"CardScale"*/);
    sub_21FFC50(&StringLiteral_4500/*"CardSecondName"*/);
    sub_21FFC50(&StringLiteral_4491/*"CardFirstName"*/);
    sub_21FFC50(&StringLiteral_8384/*"IsNewCard"*/);
    sub_21FFC50(&StringLiteral_4498/*"CardRotName"*/);
    sub_21FFC50(&StringLiteral_4689/*"CodeCardRarity02"*/);
    sub_21FFC50(&StringLiteral_2784/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/);
    sub_21FFC50(&StringLiteral_11645/*"Rank"*/);
    sub_21FFC50(&StringLiteral_19067/*"countIndex"*/);
    sub_21FFC50(&StringLiteral_13694/*"SummonEffect"*/);
    sub_21FFC50(&StringLiteral_24110/*"rarity"*/);
    sub_21FFC50(&StringLiteral_8398/*"IsRankUp"*/);
    sub_21FFC50(&StringLiteral_16715/*"_0"*/);
    sub_21FFC50(&StringLiteral_4688/*"CodeCardRarity"*/);
    sub_21FFC50(&StringLiteral_8404/*"IsSkipStop"*/);
    sub_21FFC50(&StringLiteral_8778/*"LimitCount"*/);
    sub_21FFC50(&StringLiteral_9959/*"NoticeRarity"*/);
    sub_21FFC50(&StringLiteral_2783/*"BACKSIDE_CLASS_IMAGE_ID"*/);
    sub_21FFC50(&StringLiteral_4503/*"CardType"*/);
    sub_21FFC50(&StringLiteral_4497/*"CardNodeName"*/);
    sub_21FFC50(&StringLiteral_4492/*"CardFirstPeelName"*/);
    sub_21FFC50(&StringLiteral_25053/*"summon_rarity_0"*/);
    sub_21FFC50(&StringLiteral_11657/*"Rarity"*/);
    sub_21FFC50(&StringLiteral_13247/*"ServantId"*/);
    byte_5934A21 = 1;
  }
  entity = 0;
  v414 = 0;
  v3 = sub_21FFEBC(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_401;
  *(_QWORD *)(v3 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___;
  this->fields.isNoSkipAll = 0;
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v12);
  if ( !Component_object )
    goto LABEL_401;
  v13 = (PlayMakerFSM_o *)Component_object;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_19067/*"countIndex"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Component_object, 0);
  if ( !this->fields.SummonInfos )
    goto LABEL_401;
  v14 = Component_object;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                Component_object,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_401;
  if ( !this->fields.SummonInfos )
    goto LABEL_401;
  svtId = *(_DWORD *)(Component_object + 16);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v14,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_401;
  if ( !this->fields.SummonInfos )
    goto LABEL_401;
  v411 = *(_DWORD *)(Component_object + 20);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v14,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_401;
  if ( !this->fields.SummonInfos )
    goto LABEL_401;
  v15 = *(unsigned __int8 *)(Component_object + 24);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v14,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_401;
  if ( !this->fields.SummonInfos )
    goto LABEL_401;
  v16 = *(unsigned __int8 *)(Component_object + 25);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v14,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_401;
  if ( !this->fields.SummonInfos )
    goto LABEL_401;
  v17 = *(_DWORD *)(Component_object + 28);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v14,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_401;
  if ( !this->fields.SummonInfos )
    goto LABEL_401;
  v18 = *(_DWORD *)(Component_object + 32);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v14,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_401;
  v19 = *(_DWORD *)(Component_object + 36);
  Component_object = (__int64)this->fields.SummonInfos;
  *(_DWORD *)(v3 + 56) = v19;
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Component_object,
                                v14,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_401;
  if ( !this->fields.SummonInfos )
    goto LABEL_401;
  v20 = *(_BYTE *)(Component_object + 40);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v14,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_401;
  v408 = *(_QWORD *)(Component_object + 48);
  SummonEffectComponent__ReleasePrevAsset(this, v5);
  v21 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v21;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._releaseAssetPath,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13247/*"ServantId"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  *(_DWORD *)(Component_object + 56) = svtId;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8778/*"LimitCount"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  *(_DWORD *)(Component_object + 56) = v411;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8398/*"IsRankUp"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  *(_BYTE *)(Component_object + 56) = v15;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8404/*"IsSkipStop"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  *(_BYTE *)(Component_object + 56) = v20;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  v29 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v5, v28);
  if ( !v29 )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                v29,
                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  *(_QWORD *)(Component_object + 56) = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Component_object + 56), 0, v30, v31, v32, v33, v34, v35);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8384/*"IsNewCard"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  v36 = v16 || v18 == 0;
  v37 = v36;
  *(_BYTE *)(Component_object + 56) = v37;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_9959/*"NoticeRarity"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  *(_DWORD *)(Component_object + 56) = v17;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4503/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  *(_DWORD *)(Component_object + 56) = *(_DWORD *)(v3 + 56);
  if ( (unsigned int)(v18 - 3) >= 3 )
    v38 = v18 ? 0 : 3;
  else
    v38 = dword_ECF9D8[v18 - 3];
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_11657/*"Rarity"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  *(_DWORD *)(Component_object + 56) = v38;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  v40 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v5, v39);
  if ( !v40 )
    goto LABEL_401;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v40,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0);
  v413 = v38;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v413);
  Component_object = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_25053/*"summon_rarity_0"*/, v42, 0);
  if ( !FsmString )
    goto LABEL_401;
  FsmString->fields.value = (struct System_String_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&FsmString->fields.value,
    Component_object,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13694/*"SummonEffect"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, 0);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.effect, (int32_t)Value, v51, v52, v53, v54, v55, v56);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4497/*"CardNodeName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  v57 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4499/*"CardScale"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  v58 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4491/*"CardFirstName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  v59 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 24) = v59;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v59, v60, v61, v62, v63, v64, v65);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4492/*"CardFirstPeelName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  v66 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 32) = v66;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v66, v67, v68, v69, v70, v71, v72);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  key = v18;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4500/*"CardSecondName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  v73 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 40) = v73;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v73, v74, v75, v76, v77, v78, v79);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4498/*"CardRotName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  v80 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 48) = v80;
  v81 = (System_String_o **)(v3 + 48);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 48), (int32_t)v80, v82, v83, v84, v85, v86, v87);
  Component_object = (__int64)*p_effect;
  if ( !*p_effect )
    goto LABEL_401;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  Component_object = (__int64)TransformHelper__getNodeFromName(transform, v57, 1, 0);
  if ( !Component_object )
    goto LABEL_401;
  v89 = (UnityEngine_Component_o *)Component_object;
  Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_401;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v89, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  v90 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_5931945 )
  {
    Component_object = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v90 )
    goto LABEL_401;
  UnityEngine_Transform__set_localScale(v90, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Component_object = (__int64)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_object )
    goto LABEL_401;
  Item = System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)Component_object,
           v18,
           (const MethodInfo_3F8588C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  v409 = Item;
  v92 = !v15 || Item == 0;
  v93 = !v92;
  Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Component_object,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_object )
    goto LABEL_401;
  GachaBehaviors = (System_Collections_Generic_List_object__o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                                  (GachaBehaviorMaster_o *)Component_object,
                                                                  this->fields.gachaId,
                                                                  svtId,
                                                                  0);
  if ( !GachaBehaviors || GachaBehaviors->fields._size < 1 )
    goto LABEL_110;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                GachaBehaviors,
                                0,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_401;
  v96 = Component_object;
  if ( !*(_QWORD *)(Component_object + 24) )
  {
LABEL_110:
    v401 = -1;
    v402 = -1;
    v403 = -1;
    OverwriteClassImageId = 0;
    v405 = -1;
    v407 = -1;
    goto LABEL_111;
  }
  OverwriteClassImageId = GachaBehaviorEntity__GetOverwriteClassImageId((GachaBehaviorEntity_o *)Component_object, 0);
  if ( v16 )
    this->fields.isNoSkipAll = 1;
  v98 = *(System_Collections_Generic_Dictionary_object__object__o **)(v96 + 24);
  Component_object = (__int64)GachaBehaviorMaster_TypeInfo;
  if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v5, v97);
  if ( !v98 )
    goto LABEL_401;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v98,
         (Il2CppObject *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v101 = GachaBehaviorMaster_TypeInfo;
    if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v99, v100);
      v101 = GachaBehaviorMaster_TypeInfo;
    }
    v102 = System_Collections_Generic_Dictionary_object__object___get_Item(
             v98,
             (Il2CppObject *)v101->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v96 = (__int64)v102;
    if ( v102 )
    {
      v5 = (const MethodInfo *)qword_594C0B8;
      if ( v102->klass != (Il2CppClass *)qword_594C0B8 )
        goto LABEL_404;
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_401;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v96,
            (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_object = (__int64)this->fields.upAnimationNameList;
      if ( !Component_object )
        goto LABEL_401;
      v111 = *(_QWORD *)(Component_object + 16);
      v112 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v111 )
        goto LABEL_401;
      v113 = *(int *)(Component_object + 24);
      if ( (unsigned int)v113 >= *(_DWORD *)(v111 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v96,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
      }
      else
      {
        v114 = v111 + 8 * v113;
        *(_DWORD *)(Component_object + 24) = v113 + 1;
        *(_QWORD *)(v114 + 32) = v96;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v114 + 32), v96, v105, v106, v107, v108, v109, v110);
      }
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_401;
    v407 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)Component_object,
             (Il2CppObject *)v96,
             (const MethodInfo_44507B0 *)Method_System_Collections_Generic_List_string__IndexOf__);
  }
  else
  {
    v407 = -1;
  }
  v333 = GachaBehaviorMaster_TypeInfo;
  if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v99, v100);
    v333 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v98,
         (Il2CppObject *)v333->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v336 = GachaBehaviorMaster_TypeInfo;
    if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v334, v335);
      v336 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v98,
                                  (Il2CppObject *)v336->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_401;
    v339 = qword_594C090;
    if ( *(_QWORD *)(*(_QWORD *)Component_object + 64LL) != *(_QWORD *)(qword_594C090 + 64) )
      goto LABEL_402;
    v340 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_object, qword_594C090, v337, v338);
  }
  else
  {
    v340 = -1;
  }
  v341 = GachaBehaviorMaster_TypeInfo;
  v405 = v340;
  if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v334, v335);
    v341 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v98,
         (Il2CppObject *)v341->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v344 = GachaBehaviorMaster_TypeInfo;
    if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v342, v343);
      v344 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v98,
                                  (Il2CppObject *)v344->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_401;
    v339 = qword_594C090;
    if ( *(_QWORD *)(*(_QWORD *)Component_object + 64LL) != *(_QWORD *)(qword_594C090 + 64) )
      goto LABEL_402;
    v345 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_object, qword_594C090, v337, v338);
  }
  else
  {
    v345 = -1;
  }
  v346 = GachaBehaviorMaster_TypeInfo;
  v401 = v345;
  if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v342, v343);
    v346 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v98,
         (Il2CppObject *)v346->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v349 = GachaBehaviorMaster_TypeInfo;
    if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v347, v348);
      v349 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v98,
                                  (Il2CppObject *)v349->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_401;
    v339 = qword_594C090;
    if ( *(_QWORD *)(*(_QWORD *)Component_object + 64LL) != *(_QWORD *)(qword_594C090 + 64) )
      goto LABEL_402;
    v350 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_object, qword_594C090, v337, v338);
  }
  else
  {
    v350 = -1;
  }
  v351 = GachaBehaviorMaster_TypeInfo;
  v403 = v350;
  if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v347, v348);
    v351 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v98,
          (Il2CppObject *)v351->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v355 = -1;
    goto LABEL_358;
  }
  v354 = GachaBehaviorMaster_TypeInfo;
  if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v352, v353);
    v354 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v98,
                                (Il2CppObject *)v354->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_object )
    goto LABEL_401;
  v339 = qword_594C090;
  if ( *(_QWORD *)(*(_QWORD *)Component_object + 64LL) != *(_QWORD *)(qword_594C090 + 64) )
  {
LABEL_402:
    sub_220024C(Component_object, v339, v337, v338);
    goto LABEL_403;
  }
  v355 = *(_DWORD *)j_il2cpp_object_unbox_0(Component_object, qword_594C090, v337, v338);
LABEL_358:
  v402 = v355;
  v356 = GachaBehaviorMaster_TypeInfo;
  v357 = v93;
  if ( v407 != -1 )
    v357 = v405 != -1;
  v400 = v357;
  if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v352, v353);
    v356 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v98,
         (Il2CppObject *)v356->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
    if ( !Component_object )
      goto LABEL_401;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_9959/*"NoticeRarity"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_401;
    *(_DWORD *)(Component_object + 56) = 3;
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
    v361 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v5, v360);
    if ( !v361 )
      goto LABEL_401;
    v362 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v361,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0);
    v365 = GachaBehaviorMaster_TypeInfo;
    v96 = (__int64)v362;
    if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v363, v364);
      v365 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v98,
                                  (Il2CppObject *)v365->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v96 )
      goto LABEL_401;
    v372 = Component_object;
    if ( Component_object )
    {
      v373 = qword_594C0B8;
      if ( *(_QWORD *)Component_object != qword_594C0B8 )
        goto LABEL_403;
    }
    *(_QWORD *)(v96 + 56) = Component_object;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v96 + 56), Component_object, v366, v367, v368, v369, v370, v371);
  }
  v374 = GachaBehaviorMaster_TypeInfo;
  if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v358, v359);
    v374 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v98,
          (Il2CppObject *)v374->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_388;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  if ( !Component_object )
    goto LABEL_401;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4503/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_401;
  *(_DWORD *)(Component_object + 56) = 4;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
  v378 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v5, v377);
  if ( !v378 )
    goto LABEL_401;
  v379 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v378,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0);
  v382 = GachaBehaviorMaster_TypeInfo;
  v96 = (__int64)v379;
  if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v380, v381);
    v382 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v98,
                                (Il2CppObject *)v382->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v96 )
    goto LABEL_401;
  v372 = Component_object;
  if ( !Component_object || (v373 = qword_594C0B8, *(_QWORD *)Component_object == qword_594C0B8) )
  {
    *(_QWORD *)(v96 + 56) = Component_object;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v96 + 56), Component_object, v366, v367, v383, v384, v385, v386);
LABEL_388:
    v387 = GachaBehaviorMaster_TypeInfo;
    if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v375, v376);
      v387 = GachaBehaviorMaster_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            v98,
            (Il2CppObject *)v387->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
            (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v93 = v400;
LABEL_111:
      p_prevObject = &this->fields.prevObject;
      prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
      v117 = UnityEngine_Object_TypeInfo;
      if ( v93 )
        v118 = 4;
      else
        v118 = 3;
      v119 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
      if ( this->fields.EditMode )
        v118 = 0;
      this->fields._counter = 0;
      this->fields._counterMax = v118;
      if ( !v119 )
        j_il2cpp_runtime_class_init_0(v117, v5, v95);
      if ( UnityEngine_Object__op_Inequality(prevObject, 0, 0) )
      {
        v122 = (UnityEngine_Object_o *)*p_prevObject;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v120, v121);
        UnityEngine_Object__Destroy_83246496(v122, 0);
        *p_prevObject = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.prevObject, 0, v123, v124, v125, v126, v127, v128);
      }
      if ( *(_DWORD *)(v3 + 56) == 3 )
      {
        v129 = v93;
        gameObject = UnityEngine_Component__get_gameObject(v89, 0);
        v131 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v131,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
          0);
        Component_object = (__int64)CharaGraphManager__CreateCommandTexturePrefab(gameObject, svtId, 0, v131, 0);
      }
      else
      {
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_401;
        v129 = v93;
        Component_object = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Component_object,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
        entity = 0;
        if ( !Component_object )
          goto LABEL_401;
        v132 = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                 &entity,
                 v408,
                 (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        v133 = UnityEngine_Component__get_gameObject(v89, 0);
        if ( v132 )
        {
          v134 = entity;
          v135 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v135,
            (Il2CppObject *)v3,
            Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
            0);
          Component_object = (__int64)CharaGraphManager__CreateTexturePrefab_47593964(
                                        v133,
                                        (UserServantEntity_o *)v134,
                                        0,
                                        v135,
                                        0);
        }
        else
        {
          v136 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v136,
            (Il2CppObject *)v3,
            Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
            0);
          Component_object = (__int64)CharaGraphManager__CreateTexturePrefab(v133, svtId, v411, 0, 1, 0, v136, 0, 0);
        }
      }
      v137 = (UnityEngine_Component_o *)Component_object;
      if ( !Component_object )
        goto LABEL_401;
      Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      v138 = (UnityEngine_Transform_o *)Component_object;
      if ( !byte_5931940 )
      {
        Component_object = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      if ( !v138 )
        goto LABEL_401;
      UnityEngine_Transform__set_localPosition(v138, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v137, 0);
      if ( !Component_object )
        goto LABEL_401;
      v416.fields.x = v58;
      v416.fields.y = v58;
      v416.fields.z = v58;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v416, 0);
      Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                    v89,
                                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
      if ( !Component_object )
        goto LABEL_401;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      v139 = UnityEngine_Component__get_gameObject(v137, 0);
      *p_prevObject = v139;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.prevObject,
        (int32_t)v139,
        v140,
        v141,
        v142,
        v143,
        v144,
        v145);
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
      if ( !Component_object )
        goto LABEL_401;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_4688/*"CodeCardRarity"*/,
                                    0);
      if ( !Component_object )
        goto LABEL_401;
      v146 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
      if ( !Component_object )
        goto LABEL_401;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_4689/*"CodeCardRarity02"*/,
                                    0);
      if ( !Component_object )
        goto LABEL_401;
      Component_object = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                    (HutongGames_PlayMaker_FsmString_o *)Component_object,
                                    0);
      if ( !*p_effect )
        goto LABEL_401;
      v147 = (System_String_o *)Component_object;
      v148 = UnityEngine_GameObject__get_transform(*p_effect, 0);
      Component_object = (__int64)TransformHelper__getNodeFromName(v148, v146, 1, 0);
      if ( !Component_object )
        goto LABEL_401;
      Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Component_object,
                                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !*p_effect )
        goto LABEL_401;
      v149 = (UnityEngine_Component_o *)Component_object;
      v150 = UnityEngine_GameObject__get_transform(*p_effect, 0);
      Component_object = (__int64)TransformHelper__getNodeFromName(v150, v147, 1, 0);
      if ( !Component_object )
        goto LABEL_401;
      Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Component_object,
                                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !v149 )
        goto LABEL_401;
      v151 = (UnityEngine_Component_o *)Component_object;
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v149, 0);
      if ( !Component_object )
        goto LABEL_401;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
      if ( !v151 )
        goto LABEL_401;
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v151, 0);
      if ( !Component_object )
        goto LABEL_401;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
      if ( this->fields.EditMode )
      {
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
        if ( v129 )
        {
          v152 = v409;
          if ( !Component_object )
            goto LABEL_401;
          Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                        (System_String_o *)StringLiteral_11645/*"Rank"*/,
                                        0);
          v153 = (System_String_o **)(v3 + 40);
          if ( !Component_object )
            goto LABEL_401;
          v154 = *p_effect;
          v155 = v409 == 2 ? 2 : 1;
          *(_DWORD *)(Component_object + 56) = v155;
          if ( !v154 )
            goto LABEL_401;
          v156 = UnityEngine_GameObject__get_transform(v154, 0);
          NodeFromName = TransformHelper__getNodeFromName(v156, *(System_String_o **)(v3 + 24), 1, 0);
          SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, v409 - 1, v158);
          Component_object = (__int64)this->fields.effect;
          if ( !Component_object )
            goto LABEL_401;
          v159 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
          v160 = TransformHelper__getNodeFromName(v159, *(System_String_o **)(v3 + 32), 1, 0);
          SummonEffectComponent__ChangeClassCardColor(this, v160, v409 - 1, v161);
          Component_object = (__int64)this->fields.effect;
          if ( !Component_object )
            goto LABEL_401;
          v162 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
          v163 = TransformHelper__getNodeFromName(v162, *v81, 1, 0);
          v165 = this;
          v166 = v409 - 1;
        }
        else
        {
          v152 = v409;
          if ( !Component_object )
            goto LABEL_401;
          Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                        (System_String_o *)StringLiteral_11645/*"Rank"*/,
                                        0);
          v153 = (System_String_o **)(v3 + 40);
          if ( !Component_object )
            goto LABEL_401;
          v185 = *p_effect;
          *(_DWORD *)(Component_object + 56) = 0;
          if ( !v185 )
            goto LABEL_401;
          v186 = UnityEngine_GameObject__get_transform(v185, 0);
          v163 = TransformHelper__getNodeFromName(v186, *v81, 1, 0);
          v165 = this;
          v166 = v409;
        }
        SummonEffectComponent__ChangeClassCardColor(v165, v163, v166, v164);
        Component_object = (__int64)this->fields.effect;
        if ( Component_object )
        {
          v187 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
          v188 = TransformHelper__getNodeFromName(v187, *v153, 1, 0);
          SummonEffectComponent__ChangeClassCardColor(this, v188, v152, v189);
          SummonEffectComponent__CompleteCallback(this, v190);
          return;
        }
LABEL_401:
        sub_21FFECC(Component_object, v5);
      }
      if ( *(_DWORD *)(v3 + 56) == 3 )
      {
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
        if ( !Component_object )
          goto LABEL_401;
        Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11645/*"Rank"*/,
                                      0);
        if ( !Component_object )
          goto LABEL_401;
        v414 = key;
        *(_DWORD *)(Component_object + 56) = 3;
        Component_object = (__int64)UnityEngine_Component__get_gameObject(v149, 0);
        if ( !Component_object )
          goto LABEL_401;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
        v167 = System_Int32__ToString((int32_t)&v414, 0);
        v170 = System_String__Concat_75481624(
                 (System_String_o *)StringLiteral_24110/*"rarity"*/,
                 v167,
                 (System_String_o *)StringLiteral_16715/*"_0"*/,
                 0);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v168, v169);
        AtlasManager__SetCharaGraphaOption((UISprite_o *)v149, v170, 0);
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))v149->klass[2]._1.parent)(
          v149,
          v149->klass[2]._1.generic_class);
        Component_object = (__int64)UnityEngine_Component__get_gameObject(v151, 0);
        if ( !Component_object )
          goto LABEL_401;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
        v171 = System_Int32__ToString((int32_t)&v414, 0);
        v172 = System_String__Concat_75481624(
                 (System_String_o *)StringLiteral_24110/*"rarity"*/,
                 v171,
                 (System_String_o *)StringLiteral_16715/*"_0"*/,
                 0);
        AtlasManager__SetCharaGraphaOption((UISprite_o *)v151, v172, 0);
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))v151->klass[2]._1.parent)(
          v151,
          v151->klass[2]._1.generic_class);
        Component_object = (__int64)UnityEngine_Component__get_transform(v149, 0);
        if ( !Component_object )
          goto LABEL_401;
        v417.fields.x = 0.0;
        v417.fields.z = 0.0;
        v417.fields.y = 216.81;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v417, 0);
        Component_object = (__int64)UnityEngine_Component__get_transform(v149, 0);
        if ( !Component_object )
          goto LABEL_401;
        v418.fields.x = v58;
        v418.fields.y = v58;
        v418.fields.z = v58;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v418, 0);
        Component_object = (__int64)UnityEngine_Component__get_transform(v151, 0);
        if ( !Component_object )
          goto LABEL_401;
        v419.fields.x = 0.0;
        v419.fields.z = 0.0;
        v419.fields.y = 216.81;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v419, 0);
        Component_object = (__int64)UnityEngine_Component__get_transform(v151, 0);
        if ( !Component_object )
          goto LABEL_401;
        v420.fields.x = v58;
        v420.fields.y = v58;
        v420.fields.z = v58;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v420, 0);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_401;
        Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                      (DesignCardManager_o *)Component_object,
                                      1,
                                      key,
                                      0);
        v179 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_401;
        items = v179->fields._items;
        v181 = Method_System_Collections_Generic_List_string__Add__;
        ++v179->fields._version;
        if ( !items )
          goto LABEL_401;
        size = v179->fields._size;
        v183 = (System_String_o *)Component_object;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v179,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
        }
        else
        {
          v184 = &items->obj.klass + size;
          v179->fields._size = size + 1;
          v184[4] = (Il2CppClass *)v183;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v184 + 4), (int32_t)v183, v173, v174, v175, v176, v177, v178);
        }
        v224 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v224,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
          0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v225, v226);
        AssetManager__loadAssetStorage(v183, v224, 1, 0, 0);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_401;
        Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                      (DesignCardManager_o *)Component_object,
                                      101,
                                      key,
                                      0);
        v233 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_401;
        v234 = v233->fields._items;
        v235 = Method_System_Collections_Generic_List_string__Add__;
        ++v233->fields._version;
        if ( !v234 )
          goto LABEL_401;
        v236 = v233->fields._size;
        v237 = (System_String_o *)Component_object;
        if ( (unsigned int)v236 >= LODWORD(v234->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v233,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v235[4] + 192LL) + 112LL));
        }
        else
        {
          v238 = &v234->obj.klass + v236;
          v233->fields._size = v236 + 1;
          v238[4] = (Il2CppClass *)v237;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v238 + 4), (int32_t)v237, v227, v228, v229, v230, v231, v232);
        }
        v239 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v239,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
          0);
      }
      else
      {
        v191 = sub_21FFEBC(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v191, 0);
        if ( !v191 )
          goto LABEL_401;
        *(_QWORD *)(v191 + 24) = v3;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v191 + 24), v3, v192, v193, v194, v195, v196, v197);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_401;
        Component_object = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Component_object,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Component_object )
          goto LABEL_401;
        v198 = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                 svtId,
                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_401;
        Component_object = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Component_object,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !Component_object )
          goto LABEL_401;
        ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Component_object, svtId, v411, 0);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_401;
        Component_object = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Component_object,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
        if ( !v198 )
          goto LABEL_401;
        if ( !Component_object )
          goto LABEL_401;
        Component_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                                      (int32_t)v198[5].klass,
                                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
        if ( !Component_object )
          goto LABEL_401;
        v199 = *(_DWORD *)(Component_object + 40);
        if ( v403 != -1 )
          v199 = v403;
        *(_DWORD *)(v191 + 16) = v199;
        if ( v402 == -1 )
          v200 = key;
        else
          v200 = v402;
        if ( !v129 )
        {
          v214 = sub_21FFEBC(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v214, 0);
          if ( !v214 )
            goto LABEL_401;
          *(_QWORD *)(v214 + 24) = v191;
          v221 = (Il2CppObject **)(v214 + 24);
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v214 + 24), v191, v215, v216, v217, v218, v219, v220);
          Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
          v222 = v407;
          if ( v407 == -1 )
          {
            klass = OverwriteClassImageId;
            if ( !Component_object )
              goto LABEL_401;
            Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                          (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                          (System_String_o *)StringLiteral_11645/*"Rank"*/,
                                          0);
            if ( !Component_object )
              goto LABEL_401;
            v222 = 0;
          }
          else
          {
            klass = OverwriteClassImageId;
            if ( !Component_object )
              goto LABEL_401;
            Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                          (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                          (System_String_o *)StringLiteral_11645/*"Rank"*/,
                                          0);
            if ( !Component_object )
              goto LABEL_401;
          }
          v240 = *v221;
          *(_DWORD *)(Component_object + 56) = v222;
          if ( klass <= 0 )
          {
            if ( !v240 )
              goto LABEL_401;
            klass = (int)v240[1].klass;
          }
          else if ( !v240 )
          {
            goto LABEL_401;
          }
          LODWORD(v240[1].klass) = klass;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v221 || !Component_object )
            goto LABEL_401;
          DesignCardPath = DesignCardManager__GetDesignCardPath(
                             (DesignCardManager_o *)Component_object,
                             (int32_t)(*v221)[1].klass,
                             v200,
                             0);
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v276, v277);
          Component_object = AssetManager__isExistAssetStorage(DesignCardPath, 0);
          if ( (Component_object & 1) == 0 )
          {
            if ( !*v221 )
              goto LABEL_401;
            v285 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__;
            LODWORD((*v221)[1].klass) = 1;
            Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance(v285);
            if ( !*v221 || !Component_object )
              goto LABEL_401;
            v200 = 3;
            DesignCardPath = DesignCardManager__GetDesignCardPath(
                               (DesignCardManager_o *)Component_object,
                               (int32_t)(*v221)[1].klass,
                               3,
                               0);
          }
          Component_object = (__int64)*p_releaseAssetPath;
          if ( !*p_releaseAssetPath )
            goto LABEL_401;
          v286 = *(_QWORD *)(Component_object + 16);
          v287 = Method_System_Collections_Generic_List_string__Add__;
          ++*(_DWORD *)(Component_object + 28);
          if ( !v286 )
            goto LABEL_401;
          v288 = *(int *)(Component_object + 24);
          if ( (unsigned int)v288 >= *(_DWORD *)(v286 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Component_object,
              (Il2CppObject *)DesignCardPath,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v287[4] + 192LL) + 112LL));
          }
          else
          {
            v289 = v286 + 8 * v288;
            *(_DWORD *)(Component_object + 24) = v288 + 1;
            *(_QWORD *)(v289 + 32) = DesignCardPath;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v289 + 32),
              (int32_t)DesignCardPath,
              v279,
              v280,
              v281,
              v282,
              v283,
              v284);
          }
          v290 = *v221;
          v291 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v291,
            v290,
            Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
            0);
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v292, v293);
          Component_object = AssetManager__loadAssetStorage(DesignCardPath, v291, 1, 0, 0);
          if ( !*v221 )
            goto LABEL_401;
          monitor = (*v221)[1].monitor;
          if ( !monitor )
            goto LABEL_401;
          v295 = (System_String_o **)(monitor[14] == 1 ? &StringLiteral_2784/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/ : &StringLiteral_2783/*"BACKSIDE_CLASS_IMAGE_ID"*/);
          v296 = ConstantMaster__getValue(*v295, 0);
          v297 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__;
          *(_DWORD *)(v214 + 16) = v296;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance(v297);
          if ( !Component_object )
            goto LABEL_401;
          v300 = DesignCardManager__GetDesignCardPath(
                   (DesignCardManager_o *)Component_object,
                   *(_DWORD *)(v214 + 16),
                   v200,
                   0);
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v298, v299);
          if ( !AssetManager__isExistAssetStorage(v300, 0) )
          {
            Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
            if ( !Component_object )
              goto LABEL_401;
            v300 = DesignCardManager__GetDesignCardPath(
                     (DesignCardManager_o *)Component_object,
                     *(_DWORD *)(v214 + 16),
                     3,
                     0);
          }
          Component_object = (__int64)*p_releaseAssetPath;
          if ( !*p_releaseAssetPath )
            goto LABEL_401;
          v307 = *(_QWORD *)(Component_object + 16);
          v308 = Method_System_Collections_Generic_List_string__Add__;
          ++*(_DWORD *)(Component_object + 28);
          if ( !v307 )
            goto LABEL_401;
          v309 = *(int *)(Component_object + 24);
          if ( (unsigned int)v309 >= *(_DWORD *)(v307 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Component_object,
              (Il2CppObject *)v300,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v308[4] + 192LL) + 112LL));
          }
          else
          {
            v310 = v307 + 8 * v309;
            *(_DWORD *)(Component_object + 24) = v309 + 1;
            *(_QWORD *)(v310 + 32) = v300;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v310 + 32),
              (int32_t)v300,
              v301,
              v302,
              v303,
              v304,
              v305,
              v306);
          }
          v311 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v311,
            (Il2CppObject *)v214,
            Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
            0);
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v312, v313);
          v314 = v300;
          v315 = v311;
          goto LABEL_318;
        }
        v201 = sub_21FFEBC(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
        System_Object___ctor((Il2CppObject *)v201, 0);
        if ( !v201 )
          goto LABEL_401;
        *(_QWORD *)(v201 + 24) = v191;
        v208 = (Il2CppObject **)(v201 + 24);
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v201 + 24), v191, v202, v203, v204, v205, v206, v207);
        if ( !*(_QWORD *)(v201 + 24) )
          goto LABEL_401;
        v210 = Rarity_TypeInfo;
        *(_DWORD *)(v201 + 16) = *(_DWORD *)(*(_QWORD *)(v201 + 24) + 16LL);
        if ( !*(&v210->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v210, v5, v209);
        LowerColorRarity = Rarity__getLowerColorRarity(v200, 0);
        if ( v405 != -1 )
          *(_DWORD *)(v201 + 16) = v405;
        v212 = v401 == -1 ? LowerColorRarity : v401;
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
        v213 = v407;
        if ( v407 == -1 )
        {
          if ( !Component_object )
            goto LABEL_401;
          Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                        (System_String_o *)StringLiteral_11645/*"Rank"*/,
                                        0);
          if ( !Component_object )
            goto LABEL_401;
          v213 = v409 == 2 ? 2 : 1;
        }
        else
        {
          if ( !Component_object )
            goto LABEL_401;
          Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                        (System_String_o *)StringLiteral_11645/*"Rank"*/,
                                        0);
          if ( !Component_object )
            goto LABEL_401;
        }
        *(_DWORD *)(Component_object + 56) = v213;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_401;
        v243 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v201 + 16),
                 v212,
                 0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v241, v242);
        if ( !AssetManager__isExistAssetStorage(v243, 0) )
        {
          v250 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__;
          *(_DWORD *)(v201 + 16) = 1;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance(v250);
          if ( !Component_object )
            goto LABEL_401;
          v212 = 3;
          v243 = DesignCardManager__GetDesignCardPath(
                   (DesignCardManager_o *)Component_object,
                   *(_DWORD *)(v201 + 16),
                   3,
                   0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_401;
        v251 = *(_QWORD *)(Component_object + 16);
        v252 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v251 )
          goto LABEL_401;
        v253 = *(int *)(Component_object + 24);
        if ( (unsigned int)v253 >= *(_DWORD *)(v251 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v243,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
        }
        else
        {
          v254 = v251 + 8 * v253;
          *(_DWORD *)(Component_object + 24) = v253 + 1;
          *(_QWORD *)(v254 + 32) = v243;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v254 + 32),
            (int32_t)v243,
            v244,
            v245,
            v246,
            v247,
            v248,
            v249);
        }
        v255 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v255,
          (Il2CppObject *)v201,
          Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
          0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v256, v257);
        AssetManager__loadAssetStorage(v243, v255, 1, 0, 0);
        v258 = ConstantMaster__getValue((System_String_o *)StringLiteral_2783/*"BACKSIDE_CLASS_IMAGE_ID"*/, 0);
        v259 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__;
        *(_DWORD *)(v201 + 20) = v258;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance(v259);
        if ( !Component_object )
          goto LABEL_401;
        v260 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v201 + 20),
                 v212,
                 0);
        if ( !AssetManager__isExistAssetStorage(v260, 0) )
        {
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_401;
          v260 = DesignCardManager__GetDesignCardPath(
                   (DesignCardManager_o *)Component_object,
                   *(_DWORD *)(v201 + 20),
                   3,
                   0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_401;
        v267 = *(_QWORD *)(Component_object + 16);
        v268 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v267 )
          goto LABEL_401;
        v269 = *(int *)(Component_object + 24);
        if ( (unsigned int)v269 >= *(_DWORD *)(v267 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v260,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v268[4] + 192LL) + 112LL));
        }
        else
        {
          v270 = v267 + 8 * v269;
          *(_DWORD *)(Component_object + 24) = v269 + 1;
          *(_QWORD *)(v270 + 32) = v260;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v270 + 32),
            (int32_t)v260,
            v261,
            v262,
            v263,
            v264,
            v265,
            v266);
        }
        v271 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v271,
          (Il2CppObject *)v201,
          Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
          0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v272, v273);
        Component_object = AssetManager__loadAssetStorage(v260, v271, 1, 0, 0);
        v274 = OverwriteClassImageId;
        v275 = *v208;
        if ( OverwriteClassImageId <= 0 )
        {
          if ( !v275 )
            goto LABEL_401;
          v274 = (int32_t)v275[1].klass;
        }
        else if ( !v275 )
        {
          goto LABEL_401;
        }
        v316 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__;
        LODWORD(v275[1].klass) = v274;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance(v316);
        if ( !*v208 || !Component_object )
          goto LABEL_401;
        v237 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 (int32_t)(*v208)[1].klass,
                 v200,
                 0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v317, v318);
        Component_object = AssetManager__isExistAssetStorage(v237, 0);
        if ( (Component_object & 1) == 0 )
        {
          if ( !*v208 )
            goto LABEL_401;
          v325 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__;
          LODWORD((*v208)[1].klass) = 1;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance(v325);
          if ( !*v208 || !Component_object )
            goto LABEL_401;
          v237 = DesignCardManager__GetDesignCardPath(
                   (DesignCardManager_o *)Component_object,
                   (int32_t)(*v208)[1].klass,
                   3,
                   0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_401;
        v326 = *(_QWORD *)(Component_object + 16);
        v327 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v326 )
          goto LABEL_401;
        v328 = *(int *)(Component_object + 24);
        if ( (unsigned int)v328 >= *(_DWORD *)(v326 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v237,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v327[4] + 192LL) + 112LL));
        }
        else
        {
          v329 = v326 + 8 * v328;
          *(_DWORD *)(Component_object + 24) = v328 + 1;
          *(_QWORD *)(v329 + 32) = v237;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v329 + 32),
            (int32_t)v237,
            v319,
            v320,
            v321,
            v322,
            v323,
            v324);
        }
        v330 = *v208;
        v239 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v239,
          v330,
          Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
          0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v331, v332);
      }
      v314 = v237;
      v315 = v239;
LABEL_318:
      AssetManager__loadAssetStorage(v314, v315, 1, 0, 0);
      return;
    }
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v13, 0);
    v389 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !*(&SummonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v5, v388);
    if ( !v389 )
      goto LABEL_401;
    v390 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v389,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
             0);
    v393 = GachaBehaviorMaster_TypeInfo;
    v96 = (__int64)v390;
    if ( !*(&GachaBehaviorMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v391, v392);
      v393 = GachaBehaviorMaster_TypeInfo;
    }
    v93 = v400;
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v98,
                                  (Il2CppObject *)v393->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v96 )
      goto LABEL_401;
    v372 = Component_object;
    if ( !Component_object || (v373 = qword_594C0B8, *(_QWORD *)Component_object == qword_594C0B8) )
    {
      *(_QWORD *)(v96 + 56) = Component_object;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v96 + 56), Component_object, v366, v367, v394, v395, v396, v397);
      goto LABEL_111;
    }
  }
LABEL_403:
  sub_220024C(v372, v373, v366, v367);
LABEL_404:
  sub_220024C(v96, v5, v103, v104);
  SummonEffectComponent___c__DisplayClass45_0___ctor(v398, v399);
}


void SummonEffectComponent___endAnimation_b__43_0(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *Component_object; // x0
  __int64 v16; // x1

  if ( (byte_5934A2B & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5631/*"END_FADE"*/);
    byte_5934A2B = 1;
  }
  p_effect = &this->fields.effect;
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(effect, 0, 0) )
  {
    v8 = (UnityEngine_Object_o *)*p_effect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    UnityEngine_Object__Destroy_83246496(v8, 0);
    *p_effect = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.effect, 0, v9, v10, v11, v12, v13, v14);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    sub_21FFECC(0, v16);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5631/*"END_FADE"*/, 0);
}


void SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_5934A1F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SummonEffectComponent__endAnimation_b__43_0__);
    byte_5934A1F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0);
  if ( !v7 )
    sub_21FFECC(v10, v11);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
}


bool SummonEffectComponent__get_IsNoSkip(SummonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isNoSkip;
}


void SummonEffectComponent__set_IsNoSkip(SummonEffectComponent_o *this, bool value, const MethodInfo *method)
{
  this->fields.isNoSkip = value;
}


void SummonEffectComponent_SummonInfo___ctor(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.ServantId = servantId;
  this->fields.LimitCount = limitCount;
  this->fields.IsRankUp = isRankup;
  this->fields.IsNewCard = isNewCard;
  this->fields.NoticeRarity = noticeRarity;
  this->fields.Rarity = rarity;
  this->fields.CardType = cardType;
  this->fields.IsSkipStop = isSkipStop;
  this->fields.userServantId = userSvtId;
}


void SummonEffectComponent___c__DisplayClass45_0___ctor(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__0(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__3(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  SummonEffectComponent___c__DisplayClass45_0_o *v4; // x19
  struct SummonEffectComponent_o *_4__this; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct SummonEffectComponent_o *v14; // x21
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct SummonEffectComponent_o *v23; // x8
  struct SummonEffectComponent_o *v24; // x8
  struct SummonEffectComponent_o *v25; // x8
  DesignCardManager_o *v26; // x21
  UnityEngine_Transform_o *v27; // x0

  v4 = this;
  if ( (byte_5934A2C & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_5934A2C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardFirstName, 1, 0);
  _4__this->fields.firstTr = NodeFromName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.firstTr,
    (int32_t)NodeFromName,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)v14->fields.effect;
  if ( !this )
    goto LABEL_16;
  v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v16 = TransformHelper__getNodeFromName(v15, v4->fields.cardFirstPeelName, 1, 0);
  v14->fields.firstTPeelr = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->fields.firstTPeelr, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v23 = v4->fields.__4__this;
  if ( !v23 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v23->fields.firstTr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v24 = v4->fields.__4__this;
  if ( !v24 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v24->fields.firstTPeelr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v25 = v4->fields.__4__this;
  if ( !v25
    || (v26 = (DesignCardManager_o *)this,
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v25->fields.effect) == 0)
    || (v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)TransformHelper__getNodeFromName(
                                                                  v27,
                                                                  v4->fields.cardSecondName,
                                                                  1,
                                                                  0),
        !v26)
    || (DesignCardManager__SetupCardImage(v26, d, (UnityEngine_Transform_o *)this, 1, 0),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_16:
    sub_21FFECC(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__4(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  SummonEffectComponent___c__DisplayClass45_0_o *v4; // x19
  struct SummonEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_Shader_o *v9; // x22
  UnityEngine_Material_o *v10; // x21
  UnityEngine_Texture_o *v11; // x22

  v4 = this;
  if ( (byte_5934A2D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_21FFC50(&StringLiteral_5092/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_5934A2D = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5092/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0);
  v10 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v10, v9, 0);
  if ( !Component_object
    || (v11 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[26].methodPtr)(
                                         Component_object,
                                         Component_object->klass->vtable[26].method),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, const MethodInfo *))Component_object->klass->vtable[25].methodPtr)(
                                                                  Component_object,
                                                                  v10,
                                                                  Component_object->klass->vtable[25].method),
        !v10)
    || (UnityEngine_Material__set_mainTexture(v10, v11, 0),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_21FFECC(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
}


void SummonEffectComponent___c__DisplayClass45_1___ctor(
        SummonEffectComponent___c__DisplayClass45_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonEffectComponent___c__DisplayClass45_1___UpdateCardTexture_b__7(
        SummonEffectComponent___c__DisplayClass45_1_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  const MethodInfo *v6; // x1
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v9; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v10; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8

  if ( (byte_5934A2E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_5934A2E = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v9 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0),
        (v10 = this->fields.CS___8__locals1) == 0)
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v10->fields.cardSecondName,
                                                 1,
                                                 0),
        !v9)
    || (DesignCardManager__SetupCardImage(v9, d, (UnityEngine_Transform_o *)Instance, this->fields.classCardId, 0),
        (v11 = this->fields.CS___8__locals1) == 0)
    || (Instance = (UnityEngine_GameObject_o *)v11->fields.__4__this) == 0 )
  {
LABEL_11:
    sub_21FFECC(Instance, v6);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v6);
}


void SummonEffectComponent___c__DisplayClass45_1___UpdateCardTexture_b__8(
        SummonEffectComponent___c__DisplayClass45_1_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  SummonEffectComponent___c__DisplayClass45_1_o *v4; // x19
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v7; // x8
  UnityEngine_Transform_o *NodeFromName; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct SummonEffectComponent___c__DisplayClass45_0_o *v15; // x8
  struct SummonEffectComponent_o *v16; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v17; // x8
  UnityEngine_Transform_o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct SummonEffectComponent___c__DisplayClass45_0_o *v25; // x8
  struct SummonEffectComponent_o *v26; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v27; // x8
  struct SummonEffectComponent_o *v28; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v29; // x8
  struct SummonEffectComponent_o *v30; // x8
  DesignCardManager_o *v31; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v32; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v33; // x8

  v4 = this;
  if ( (byte_5934A2F & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_5934A2F = 1;
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
                                                            0);
  v7 = v4->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_25;
  NodeFromName = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v7->fields.cardFirstName, 1, 0);
  _4__this->fields.firstTr = NodeFromName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.firstTr,
    (int32_t)NodeFromName,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = v4->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_25;
  v16 = v15->fields.__4__this;
  if ( !v16 )
    goto LABEL_25;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)v16->fields.effect;
  if ( !this )
    goto LABEL_25;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  v18 = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v17->fields.cardFirstPeelName, 1, 0);
  v16->fields.firstTPeelr = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->fields.firstTPeelr, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v25 = v4->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_25;
  v26 = v25->fields.__4__this;
  if ( !v26 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v26->fields.firstTr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v27 = v4->fields.CS___8__locals1;
  if ( !v27 )
    goto LABEL_25;
  v28 = v27->fields.__4__this;
  if ( !v28 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v28->fields.firstTPeelr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v29 = v4->fields.CS___8__locals1;
  if ( !v29 )
    goto LABEL_25;
  v30 = v29->fields.__4__this;
  if ( !v30 )
    goto LABEL_25;
  v31 = (DesignCardManager_o *)this;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)v30->fields.effect;
  if ( !this
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0),
        (v32 = v4->fields.CS___8__locals1) == 0)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)TransformHelper__getNodeFromName(
                                                                  (UnityEngine_Transform_o *)this,
                                                                  v32->fields.cardSecondName,
                                                                  1,
                                                                  0),
        !v31)
    || (DesignCardManager__SetupCardImage(v31, d, (UnityEngine_Transform_o *)this, v4->fields.classCardId, 0),
        (v33 = v4->fields.CS___8__locals1) == 0)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)v33->fields.__4__this) == 0 )
  {
LABEL_25:
    sub_21FFECC(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
}


void SummonEffectComponent___c__DisplayClass45_2___ctor(
        SummonEffectComponent___c__DisplayClass45_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonEffectComponent___c__DisplayClass45_2___UpdateCardTexture_b__5(
        SummonEffectComponent___c__DisplayClass45_2_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  const MethodInfo *v6; // x1
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

  if ( (byte_5934A30 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_5934A30 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0);
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
                                           0);
  if ( !v10 )
    goto LABEL_21;
  DesignCardManager__SetupCardImage(v10, d, (UnityEngine_Transform_o *)Instance, this->fields.beforeClassCardId, 0);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0);
  v17 = this->fields.CS___8__locals2;
  if ( !v17
    || (v18 = v17->fields.CS___8__locals1) == 0
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v18->fields.cardFirstPeelName,
                                                 1,
                                                 0),
        !v16)
    || (DesignCardManager__SetupCardImage(
          v16,
          d,
          (UnityEngine_Transform_o *)Instance,
          this->fields.beforeClassCardId,
          0),
        (v19 = this->fields.CS___8__locals2) == 0)
    || (v20 = v19->fields.CS___8__locals1) == 0
    || (Instance = (UnityEngine_GameObject_o *)v20->fields.__4__this) == 0 )
  {
LABEL_21:
    sub_21FFECC(Instance, v6);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v6);
}


void SummonEffectComponent___c__DisplayClass45_2___UpdateCardTexture_b__6(
        SummonEffectComponent___c__DisplayClass45_2_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  const MethodInfo *v6; // x1
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals2; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v10; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v11; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v13; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v14; // x8

  if ( (byte_5934A31 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_5934A31 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0);
  v11 = this->fields.CS___8__locals2;
  if ( !v11
    || (v12 = v11->fields.CS___8__locals1) == 0
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v12->fields.cardRotName,
                                                 1,
                                                 0),
        !v10)
    || (DesignCardManager__SetupCardImage(v10, d, (UnityEngine_Transform_o *)Instance, this->fields.classBackId, 0),
        (v13 = this->fields.CS___8__locals2) == 0)
    || (v14 = v13->fields.CS___8__locals1) == 0
    || (Instance = (UnityEngine_GameObject_o *)v14->fields.__4__this) == 0 )
  {
LABEL_14:
    sub_21FFECC(Instance, v6);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v6);
}


void SummonEffectComponent___c__DisplayClass45_3___ctor(
        SummonEffectComponent___c__DisplayClass45_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonEffectComponent___c__DisplayClass45_3___UpdateCardTexture_b__9(
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
  if ( (byte_5934A32 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_15702/*"Unlit/Transparent Colored"*/);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_21FFC50(&StringLiteral_5092/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_5934A32 = 1;
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
                                                            0);
  v8 = v4->fields.CS___8__locals3;
  if ( !v8 )
    goto LABEL_22;
  v9 = v8->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_22;
  NodeFromName = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v9->fields.cardRotName, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v11 = v4->fields.CS___8__locals3;
  if ( !v11 )
    goto LABEL_22;
  v12 = v11->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_22;
  v13 = this;
  v14 = (System_String_o **)(v12->fields.cardType == 1 ? &StringLiteral_5092/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15702/*"Unlit/Transparent Colored"*/);
  v15 = UnityEngine_Shader__Find(*v14, 0);
  v16 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v16, v15, 0);
  if ( !v13
    || (v17 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, Il2CppMethodPointer))v13->klass[1].vtable._2_GetHashCode.method)(
                                         v13,
                                         v13->klass[1].vtable._3_ToString.methodPtr),
        this = (SummonEffectComponent___c__DisplayClass45_3_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v13->klass[1].vtable._1_Finalize.method)(
                                                                  v13,
                                                                  v16,
                                                                  v13->klass[1].vtable._2_GetHashCode.methodPtr),
        !v16)
    || (UnityEngine_Material__set_mainTexture(v16, v17, 0), (v18 = v4->fields.CS___8__locals3) == 0)
    || (v19 = v18->fields.CS___8__locals1) == 0
    || (this = (SummonEffectComponent___c__DisplayClass45_3_o *)v19->fields.__4__this) == 0 )
  {
LABEL_22:
    sub_21FFECC(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
}