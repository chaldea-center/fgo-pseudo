void SummonEffectComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct SummonEffectComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct SummonEffectComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct SummonEffectComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct SummonEffectComponent_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  struct SummonEffectComponent_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  struct SummonEffectComponent_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w1
  struct SummonEffectComponent_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct SummonEffectComponent_StaticFields *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7

  if ( (byte_4E73A59 & 1) == 0 )
  {
    sub_1D0F0B4(&SummonEffectComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_24326/*"summon_up_04"*/);
    sub_1D0F0B4(&StringLiteral_24324/*"summon_up_02"*/);
    sub_1D0F0B4(&StringLiteral_7148/*"GetAnimationName"*/);
    sub_1D0F0B4(&StringLiteral_24325/*"summon_up_03"*/);
    sub_1D0F0B4(&StringLiteral_24323/*"summon_up_01"*/);
    sub_1D0F0B4(&StringLiteral_11357/*"RarityAnimationName"*/);
    sub_1D0F0B4(&StringLiteral_15374/*"UpAnimationName"*/);
    sub_1D0F0B4(&StringLiteral_7758/*"InitializeAnimationName"*/);
    byte_4E73A59 = 1;
  }
  SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION = (struct System_String_o *)StringLiteral_24323/*"summon_up_01"*/;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)SummonEffectComponent_TypeInfo->static_fields,
    StringLiteral_24323/*"summon_up_01"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_24324/*"summon_up_02"*/;
  static_fields = SummonEffectComponent_TypeInfo->static_fields;
  static_fields->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_24324/*"summon_up_02"*/;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&static_fields->RANKUP_TO_SILVER_ANIMATION,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_24325/*"summon_up_03"*/;
  v16 = SummonEffectComponent_TypeInfo->static_fields;
  v16->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_24325/*"summon_up_03"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v16->RANKUP_TO_GOLD_ANIMATION, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_24326/*"summon_up_04"*/;
  v24 = SummonEffectComponent_TypeInfo->static_fields;
  v24->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_24326/*"summon_up_04"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v24->RANKUP_COMMANDCODE_ANIMATION, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_15374/*"UpAnimationName"*/;
  v32 = SummonEffectComponent_TypeInfo->static_fields;
  v32->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15374/*"UpAnimationName"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v32->FSM_VARIABLE_UP_ANIMATION_NAME, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_7758/*"InitializeAnimationName"*/;
  v40 = SummonEffectComponent_TypeInfo->static_fields;
  v40->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7758/*"InitializeAnimationName"*/;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v40->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = StringLiteral_11357/*"RarityAnimationName"*/;
  v48 = SummonEffectComponent_TypeInfo->static_fields;
  v48->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11357/*"RarityAnimationName"*/;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v48->FSM_VARIABLE_RARITY_ANIMATION_NAME,
    v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = StringLiteral_7148/*"GetAnimationName"*/;
  v56 = SummonEffectComponent_TypeInfo->static_fields;
  v56->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7148/*"GetAnimationName"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v56->FSM_VARIABLE_GET_ANIMATION_NAME, v55, v57, v58, v59, v60, v61, v62);
  v63 = SummonEffectComponent_TypeInfo->static_fields;
  v63->rarityToColor = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v63->rarityToColor, 0, v64, v65, v66, v67, v68, v69);
}


void SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int v11; // w8
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4E73A58 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E73A58 = 1;
  }
  v3 = sub_1D0F15C(int___TypeInfo, 2);
  if ( !v3 )
    sub_1D0F30C(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 512, v11 == 1) )
    sub_1D0F314(v3);
  *(_DWORD *)(v3 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.cardTextureSize, v3, v5, v6, v7, v8, v9, v10);
  v12 = StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.effAnimName, v12, v13, v14, v15, v16, v17, v18);
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
  System_Collections_Generic_List_object__o *SummonInfos; // x20
  __int64 v19; // x24
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4E73A48 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
    sub_1D0F0B4(&SummonEffectComponent_SummonInfo_TypeInfo);
    byte_4E73A48 = 1;
  }
  SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  }
  v19 = sub_1D0F300(SummonEffectComponent_SummonInfo_TypeInfo);
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
    sub_1D0F30C(v20, v21);
  }
  size = SummonInfos->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      SummonInfos,
      (Il2CppObject *)v19,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    SummonInfos->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v19;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v31 + 4), v19, v22, v23, v24, v25, v26, v27);
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
  if ( (byte_4E73A51 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4E73A51 = 1;
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
                                             (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, void *))this->klass[1].vtable._3_ToString.method)(
                                            this,
                                            v8,
                                            this->klass[2]._1.image),
        (cardTextureSize = v6->fields.cardTextureSize) == 0) )
  {
LABEL_10:
    sub_1D0F30C(this, cardNode);
  }
  if ( LODWORD(cardTextureSize->max_length) <= 1 )
LABEL_11:
    sub_1D0F314(this);
  v11.fields.m_Height = (float)cardTextureSize->m_Items[1] * 0.00097656;
  v11.fields.m_XMin = 0.0;
  v11.fields.m_YMin = 1.0 - v11.fields.m_Height;
  v11.fields.m_Width = 0.5;
  UITexture__set_uvRect(v9, v11, 0);
}


void SummonEffectComponent__CompleteCallback(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int32_t counterMax; // w9
  int32_t v4; // w8
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4E73A52 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1D0F0B4(&StringLiteral_12187/*"SETUP_DONE"*/);
    byte_4E73A52 = 1;
  }
  counterMax = this->fields._counterMax;
  v4 = this->fields._counter + 1;
  this->fields._counter = v4;
  if ( v4 >= counterMax )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1D0F30C(0, v6);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_12187/*"SETUP_DONE"*/, 0);
  }
}


void SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4E73A4A & 1) == 0 )
  {
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E73A4A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1D0F30C(Instance, v3);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x21
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_List_object__o *upAnimationNameList; // x21
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8
  _BOOL8 v63; // x0
  __int64 v64; // x1
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v66; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  AssetLoader_LoadEndDataHandler_o *v69; // x22
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4E73A4B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__);
    sub_1D0F0B4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SummonEffectComponent_OnCharaGraphLoadDone__);
    sub_1D0F0B4(&SummonEffectComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_8151/*"IsNoSkip"*/);
    sub_1D0F0B4(&StringLiteral_18578/*"countMax"*/);
    sub_1D0F0B4(&StringLiteral_13357/*"SummonEffectAnimation"*/);
    byte_4E73A4B = 1;
  }
  memset(&v71, 0, sizeof(v71));
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_46;
  v5 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_18578/*"countMax"*/,
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
                              (System_String_o *)StringLiteral_8151/*"IsNoSkip"*/,
                              0);
  if ( !Component_object )
    goto LABEL_46;
  *((_BYTE *)Component_object + 56) = this->fields.isNoSkip;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_13357/*"SummonEffectAnimation"*/,
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
         (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = (struct UnityEngine_Animation_o *)v7;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.effAnimation, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v14;
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.upAnimationNameList,
    (int32_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  Component_object = (int *)SummonEffectComponent_TypeInfo;
  upAnimationNameList = (System_Collections_Generic_List_object__o *)this->fields.upAnimationNameList;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
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
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    upAnimationNameList->fields._size = size + 1;
    v32[4] = (Il2CppClass *)RANKUP_TO_SILVER_ANIMATION;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)(v32 + 4),
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
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = v39 + 8 * v41;
    Component_object[6] = v41 + 1;
    *(_QWORD *)(v42 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)(v42 + 32),
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
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = v49 + 8 * v51;
    Component_object[6] = v51 + 1;
    *(_QWORD *)(v52 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)(v52 + 32),
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
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = v59 + 8 * v61;
    Component_object[6] = v61 + 1;
    *(_QWORD *)(v62 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)(v62 + 32),
      (int32_t)RANKUP_TO_SILVER_ANIMATION,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  Component_object = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Component_object
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_object, 1, 0),
        (Component_object = (int *)this->fields.SummonInfos) == 0) )
  {
LABEL_46:
    sub_1D0F30C(Component_object, RANKUP_TO_SILVER_ANIMATION);
  }
  this->fields.DownloadCounter = Component_object[6];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)Component_object,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v71 = v70;
  while ( 1 )
  {
    v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v63 )
      break;
    if ( !v71.fields._current )
      sub_1D0F30C(v63, v64);
    klass = (int32_t)v71.fields._current[1].klass;
    if ( HIDWORD(v71.fields._current[2].klass) == 3 )
    {
      v66 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v66,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0);
      CharaGraphManager__DownloadCommandAsset(klass, v66, 0);
    }
    else
    {
      klass_high = HIDWORD(v71.fields._current[1].klass);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0);
      v69 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v69,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v69, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E73A47 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
    byte_4E73A47 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.SummonInfos, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  int32_t v4; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4E73A4C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_7556/*"INIT_DONE"*/);
    byte_4E73A4C = 1;
  }
  v4 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v4;
  if ( !v4 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0),
          (Instance = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0) )
    {
      sub_1D0F30C(Instance, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7556/*"INIT_DONE"*/, 0);
  }
}


void SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1

  if ( (byte_4E73A57 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1D0F0B4(&StringLiteral_5774/*"EVENT_SKIP"*/);
    byte_4E73A57 = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1D0F30C(0, v4);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5774/*"EVENT_SKIP"*/, 0);
  }
}


void SummonEffectComponent__ReleasePrevAsset(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E73A4D & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4E73A4D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v7 = this->fields._releaseAssetPath;
    if ( !v7 )
      sub_1D0F30C(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  }
}


void SummonEffectComponent__SetGachaId(SummonEffectComponent_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.gachaId = id;
}


void SummonEffectComponent__SetUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  void *Component_object; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x20
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x8
  int32_t v7; // w1
  Il2CppObject *Item; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  HutongGames_PlayMaker_FsmVariables_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_String_o *effAnimName; // x1

  if ( (byte_4E73A53 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1D0F0B4(&SummonEffectComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11343/*"Rank"*/);
    byte_4E73A53 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object
    || (v5 = (PlayMakerFSM_o *)Component_object,
        (Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0)) == 0)
    || (Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                             (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                             (System_String_o *)StringLiteral_11343/*"Rank"*/,
                             0)) == 0 )
  {
LABEL_17:
    sub_1D0F30C(Component_object, v4);
  }
  Component_object = (void *)HutongGames_PlayMaker_FsmInt__get_Value(
                               (HutongGames_PlayMaker_FsmInt_o *)Component_object,
                               0);
  upAnimationNameList = this->fields.upAnimationNameList;
  if ( ((unsigned int)Component_object & 0x80000000) != 0 )
  {
    if ( !upAnimationNameList )
      goto LABEL_17;
    goto LABEL_11;
  }
  if ( !upAnimationNameList )
    goto LABEL_17;
  v7 = (int)Component_object;
  if ( (int)Component_object >= upAnimationNameList->fields._size )
LABEL_11:
    v7 = 0;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.upAnimationNameList,
           v7,
           (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.effAnimName = (struct System_String_o *)Item;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.effAnimName, (int32_t)Item, v9, v10, v11, v12, v13, v14);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  v15 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v15 )
    goto LABEL_17;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v15,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_17;
  effAnimName = this->fields.effAnimName;
  *((_QWORD *)Component_object + 7) = effAnimName;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)((char *)Component_object + 56),
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
  HutongGames_PlayMaker_FsmVariables_o *v6; // x20
  System_String_o *Value; // x0

  if ( (byte_4E73A54 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1D0F0B4(&SummonEffectComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_7549/*"INITIALIZE_ANIMATION"*/);
    byte_4E73A54 = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_10;
  v5 = Component_object;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0);
  v6 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v6
    || (Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                               v6,
                                               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                               0)) == 0 )
  {
LABEL_10:
    sub_1D0F30C(Component_object, v4);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  if ( !System_String__IsNullOrEmpty(Value, 0) )
    PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_7549/*"INITIALIZE_ANIMATION"*/, 0);
}


void SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  SummonEffectComponent_c *v2; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  SummonEffectComponent_c *v12; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_4E73A49 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    sub_1D0F0B4(&SummonEffectComponent_TypeInfo);
    byte_4E73A49 = 1;
  }
  v2 = SummonEffectComponent_TypeInfo;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v2 = SummonEffectComponent_TypeInfo;
  }
  if ( !v2->static_fields->rarityToColor )
  {
    v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1D0F300(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
      v3,
      (const MethodInfo_35C4FEC *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v3 )
      sub_1D0F30C(v4, v5);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      0,
      0,
      (const MethodInfo_35C59B0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      1,
      0,
      (const MethodInfo_35C59B0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      2,
      0,
      (const MethodInfo_35C59B0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      3,
      1,
      (const MethodInfo_35C59B0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      4,
      2,
      (const MethodInfo_35C59B0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      5,
      2,
      (const MethodInfo_35C59B0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      101,
      0,
      (const MethodInfo_35C59B0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      102,
      0,
      (const MethodInfo_35C59B0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v12 = SummonEffectComponent_TypeInfo;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v12 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v3;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->rarityToColor, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  }
}


void SummonEffectComponent__StopRarityAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *Component_object; // x0
  __int64 v4; // x1
  HutongGames_PlayMaker_FsmVariables_o *v5; // x20
  System_String_o *Value; // x0
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v8; // x20
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0

  if ( (byte_4E73A56 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&SoundManager_TypeInfo);
    sub_1D0F0B4(&SummonEffectComponent_TypeInfo);
    byte_4E73A56 = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0);
  v5 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v5 )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                         v5,
                                         SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                                         0);
  if ( !Component_object )
    goto LABEL_22;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v8 = Value;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0, 0) && !System_String__IsNullOrEmpty(v8, 0) )
  {
    Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
    if ( Component_object )
    {
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)Component_object, v8, 0) )
        return;
      Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
      if ( Component_object )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)Component_object,
                                                   v8,
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
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__stopSe(0.0, 0);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1D0F30C(Component_object, v4);
  }
}


void SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effAnimation; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *ComponentsInChildren_object; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v9; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v11; // x20

  if ( (byte_4E73A55 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____80392952);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E73A55 = 1;
  }
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1D0F30C(ComponentsInChildren_object, v4);
  }
LABEL_14:
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                             1,
                                                             (const MethodInfo_32466AC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____80392952);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  klass = ComponentsInChildren_object[1].klass;
  v9 = ComponentsInChildren_object;
  if ( (int)klass >= 1 )
  {
    for ( i = 0; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1D0F314(ComponentsInChildren_object);
      v11 = (UnityEngine_Object_o *)*((_QWORD *)&v9[1].monitor + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
      if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)v11,
                                                                   0);
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object, 0, 0);
      }
      LODWORD(klass) = v9[1].klass;
    }
  }
}


void SummonEffectComponent__UpdateCardParam(SummonEffectComponent_o *this, const MethodInfo *method)
{
  void *Component_object; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x20
  int32_t v6; // w21
  int v7; // w28
  int v8; // w27
  char v9; // w26
  int v10; // w25
  int v11; // w23
  int v12; // w22
  int v13; // w24
  char v14; // w21
  HutongGames_PlayMaker_FsmVariables_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int v34; // w9
  int v35; // w22
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20

  if ( (byte_4E73A4F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&SummonEffectComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_8150/*"IsNewCard"*/);
    sub_1D0F0B4(&StringLiteral_18577/*"countIndex"*/);
    sub_1D0F0B4(&StringLiteral_8164/*"IsRankUp"*/);
    sub_1D0F0B4(&StringLiteral_8170/*"IsSkipStop"*/);
    sub_1D0F0B4(&StringLiteral_8530/*"LimitCount"*/);
    sub_1D0F0B4(&StringLiteral_9693/*"NoticeRarity"*/);
    sub_1D0F0B4(&StringLiteral_4382/*"CardType"*/);
    sub_1D0F0B4(&StringLiteral_11355/*"Rarity"*/);
    sub_1D0F0B4(&StringLiteral_12920/*"ServantId"*/);
    byte_4E73A4F = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_66;
  v5 = (PlayMakerFSM_o *)Component_object;
  Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_18577/*"countIndex"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = (void *)HutongGames_PlayMaker_FsmInt__get_Value(
                               (HutongGames_PlayMaker_FsmInt_o *)Component_object,
                               0);
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v6 = (int)Component_object;
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       (int32_t)Component_object,
                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v7 = *((_DWORD *)Component_object + 4);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v8 = *((_DWORD *)Component_object + 5);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v9 = *((_BYTE *)Component_object + 24);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v10 = *((unsigned __int8 *)Component_object + 25);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v11 = *((_DWORD *)Component_object + 7);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v12 = *((_DWORD *)Component_object + 8);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v13 = *((_DWORD *)Component_object + 9);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  v14 = *((_BYTE *)Component_object + 40);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_12920/*"ServantId"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v7;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8530/*"LimitCount"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v8;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8164/*"IsRankUp"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v9;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8170/*"IsSkipStop"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v14;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  v15 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v15 )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v15,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)((char *)Component_object + 56), 0, v16, v17, v18, v19, v20, v21);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)((char *)Component_object + 56), 0, v22, v23, v24, v25, v26, v27);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)((char *)Component_object + 56), 0, v28, v29, v30, v31, v32, v33);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8150/*"IsNewCard"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v10 != 0 || v12 == 0;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_9693/*"NoticeRarity"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v11;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_4382/*"CardType"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  if ( v12 )
    v34 = 0;
  else
    v34 = 3;
  *((_DWORD *)Component_object + 14) = v13;
  if ( v12 == 3 )
    v34 = 1;
  v35 = (v12 & 0xFFFFFFFE) == 4 ? 2 : v34;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_11355/*"Rarity"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v35;
  firstTr = (UnityEngine_Object_o *)this->fields.firstTr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(firstTr, 0, 0) )
  {
    firstTPeelr = (UnityEngine_Object_o *)this->fields.firstTPeelr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_66:
      sub_1D0F30C(Component_object, v4);
    }
  }
}


void SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  __int64 Component_object; // x0
  System_String_c *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  PlayMakerFSM_o *v12; // x23
  int32_t v13; // w19
  int32_t v14; // w28
  int v15; // w29
  int v16; // w27
  int v17; // w22
  unsigned int v18; // w25
  char v19; // w26
  System_Collections_Generic_List_object__o *v20; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  HutongGames_PlayMaker_FsmVariables_o *v27; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int v34; // w22
  HutongGames_PlayMaker_FsmVariables_o *v35; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x28
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_String_o *v52; // x24
  float v53; // s8
  System_String_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  System_String_o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  System_String_o *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  System_String_o *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v83; // x24
  UnityEngine_Transform_o *v84; // x22
  int32_t Item; // w25
  _BOOL4 v86; // w26
  System_Collections_Generic_List_object__o *GachaBehaviors; // x0
  __int64 v88; // x22
  System_Collections_Generic_Dictionary_object__object__o *v89; // x27
  GachaBehaviorMaster_c *v90; // x0
  Il2CppObject *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  int v102; // w19
  UnityEngine_Object_o *prevObject; // x22
  struct UnityEngine_GameObject_o **p_prevObject; // x27
  int v105; // w9
  int32_t v106; // w8
  UnityEngine_Object_o *v107; // x22
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v115; // x29
  bool v116; // w29
  UnityEngine_GameObject_o *v117; // x22
  Il2CppObject *v118; // x29
  System_Action_o *v119; // x25
  System_Action_o *v120; // x25
  UnityEngine_Component_o *v121; // x22
  UnityEngine_Transform_o *v122; // x29
  UnityEngine_GameObject_o *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  System_String_o *v126; // x4
  int32_t v127; // w5
  int64_t v128; // x6
  System_String_o *v129; // x7
  System_String_o *v130; // x24
  System_String_o *v131; // x22
  UnityEngine_Transform_o *v132; // x0
  UnityEngine_Component_o *v133; // x27
  UnityEngine_Transform_o *v134; // x0
  UnityEngine_Component_o *v135; // x24
  int32_t v136; // w22
  int v137; // w8
  UnityEngine_Transform_o *v138; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v140; // x3
  UnityEngine_Transform_o *v141; // x0
  UnityEngine_Transform_o *v142; // x0
  const MethodInfo *v143; // x3
  UnityEngine_Transform_o *v144; // x0
  UnityEngine_Transform_o *v145; // x1
  const MethodInfo *v146; // x3
  SummonEffectComponent_o *v147; // x0
  int32_t v148; // w2
  System_String_o *v149; // x0
  System_String_o *v150; // x19
  System_String_o *v151; // x0
  System_String_o *v152; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  System_Collections_Generic_List_object__o *v159; // x8
  struct System_Object_array *items; // x9
  _QWORD *v161; // x10
  __int64 size; // x11
  System_String_o *v163; // x19
  Il2CppClass **v164; // x0
  UnityEngine_Transform_o *v165; // x0
  UnityEngine_Transform_o *v166; // x0
  UnityEngine_Transform_o *v167; // x0
  const MethodInfo *v168; // x3
  const MethodInfo *v169; // x1
  __int64 v170; // x24
  int32_t v171; // w2
  int32_t v172; // w3
  System_String_o *v173; // x4
  int32_t v174; // w5
  int64_t v175; // x6
  System_String_o *v176; // x7
  int v177; // w22
  Il2CppObject *v178; // x19
  int v179; // w8
  int32_t v180; // w19
  __int64 v181; // x21
  int32_t v182; // w2
  int32_t v183; // w3
  System_String_o *v184; // x4
  int32_t v185; // w5
  int64_t v186; // x6
  System_String_o *v187; // x7
  Il2CppObject **v188; // x20
  int32_t LowerColorRarity; // w0
  int32_t v190; // w22
  int v191; // w8
  __int64 v192; // x20
  int32_t v193; // w2
  int32_t v194; // w3
  System_String_o *v195; // x4
  int32_t v196; // w5
  int64_t v197; // x6
  System_String_o *v198; // x7
  Il2CppObject **v199; // x21
  int32_t v200; // w8
  int32_t klass; // w9
  Il2CppObject *v202; // x8
  AssetLoader_LoadEndDataHandler_o *v203; // x20
  int32_t v204; // w2
  int32_t v205; // w3
  System_String_o *v206; // x4
  int32_t v207; // w5
  int64_t v208; // x6
  System_String_o *v209; // x7
  System_Collections_Generic_List_object__o *v210; // x8
  struct System_Object_array *v211; // x9
  _QWORD *v212; // x10
  __int64 v213; // x11
  System_String_o *v214; // x19
  Il2CppClass **v215; // x0
  AssetLoader_LoadEndDataHandler_o *v216; // x20
  System_String_o *v217; // x23
  int32_t v218; // w2
  int32_t v219; // w3
  System_String_o *v220; // x4
  int32_t v221; // w5
  int64_t v222; // x6
  System_String_o *v223; // x7
  __int64 v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  __int64 v227; // x8
  AssetLoader_LoadEndDataHandler_o *v228; // x24
  System_String_o *v229; // x22
  int32_t v230; // w2
  int32_t v231; // w3
  System_String_o *v232; // x4
  int32_t v233; // w5
  int64_t v234; // x6
  System_String_o *v235; // x7
  __int64 v236; // x8
  _QWORD *v237; // x9
  __int64 v238; // x10
  __int64 v239; // x8
  AssetLoader_LoadEndDataHandler_o *v240; // x23
  int32_t v241; // w9
  Il2CppObject *v242; // x8
  System_String_o *DesignCardPath; // x22
  int32_t v244; // w2
  int32_t v245; // w3
  System_String_o *v246; // x4
  int32_t v247; // w5
  int64_t v248; // x6
  System_String_o *v249; // x7
  __int64 v250; // x8
  _QWORD *v251; // x9
  __int64 v252; // x10
  __int64 v253; // x8
  Il2CppObject *v254; // x24
  AssetLoader_LoadEndDataHandler_o *v255; // x23
  _DWORD *monitor; // x8
  System_String_o **v257; // x8
  int32_t *v258; // x21
  System_String_o *v259; // x19
  int32_t v260; // w2
  int32_t v261; // w3
  System_String_o *v262; // x4
  int32_t v263; // w5
  int64_t v264; // x6
  System_String_o *v265; // x7
  __int64 v266; // x8
  _QWORD *v267; // x9
  __int64 v268; // x10
  __int64 v269; // x8
  AssetLoader_LoadEndDataHandler_o *v270; // x21
  System_String_o *v271; // x0
  AssetLoader_LoadEndDataHandler_o *v272; // x1
  int32_t v273; // w2
  int32_t v274; // w3
  System_String_o *v275; // x4
  int32_t v276; // w5
  int64_t v277; // x6
  System_String_o *v278; // x7
  __int64 v279; // x8
  _QWORD *v280; // x9
  __int64 v281; // x10
  __int64 v282; // x8
  Il2CppObject *v283; // x21
  GachaBehaviorMaster_c *v284; // x0
  GachaBehaviorMaster_c *v285; // x0
  GachaBehaviorMaster_c *v286; // x0
  GachaBehaviorMaster_c *v287; // x0
  int v288; // w8
  GachaBehaviorMaster_c *v289; // x0
  GachaBehaviorMaster_c *v290; // x0
  int v291; // w8
  GachaBehaviorMaster_c *v292; // x0
  GachaBehaviorMaster_c *v293; // x0
  int v294; // w8
  GachaBehaviorMaster_c *v295; // x0
  _BOOL4 v296; // w10
  HutongGames_PlayMaker_FsmVariables_o *v297; // x22
  HutongGames_PlayMaker_FsmString_o *v298; // x0
  GachaBehaviorMaster_c *v299; // x8
  int32_t v300; // w2
  int32_t v301; // w3
  System_String_o *v302; // x4
  int32_t v303; // w5
  int64_t v304; // x6
  System_String_o *v305; // x7
  __int64 v306; // x8
  GachaBehaviorMaster_c *v307; // x0
  HutongGames_PlayMaker_FsmVariables_o *v308; // x22
  HutongGames_PlayMaker_FsmString_o *v309; // x0
  GachaBehaviorMaster_c *v310; // x8
  int32_t v311; // w2
  int32_t v312; // w3
  System_String_o *v313; // x4
  int32_t v314; // w5
  int64_t v315; // x6
  System_String_o *v316; // x7
  GachaBehaviorMaster_c *v317; // x0
  HutongGames_PlayMaker_FsmVariables_o *v318; // x22
  HutongGames_PlayMaker_FsmString_o *v319; // x0
  GachaBehaviorMaster_c *v320; // x8
  int32_t v321; // w2
  int32_t v322; // w3
  System_String_o *v323; // x4
  int32_t v324; // w5
  int64_t v325; // x6
  System_String_o *v326; // x7
  SummonEffectComponent___c__DisplayClass45_0_o *v327; // x0
  const MethodInfo *v328; // x1
  _BOOL4 v329; // [xsp+14h] [xbp-DCh]
  int v330; // [xsp+18h] [xbp-D8h]
  int v331; // [xsp+1Ch] [xbp-D4h]
  int v332; // [xsp+20h] [xbp-D0h]
  int32_t OverwriteClassImageId; // [xsp+24h] [xbp-CCh]
  int32_t v334; // [xsp+38h] [xbp-B8h]
  int32_t limitCount; // [xsp+3Ch] [xbp-B4h]
  int64_t v336; // [xsp+40h] [xbp-B0h]
  System_String_o **v337; // [xsp+48h] [xbp-A8h]
  int32_t v338; // [xsp+5Ch] [xbp-94h]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+60h] [xbp-90h]
  int32_t key; // [xsp+68h] [xbp-88h]
  int32_t svtId; // [xsp+6Ch] [xbp-84h]
  int v342; // [xsp+70h] [xbp-80h] BYREF
  int32_t v343; // [xsp+74h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v345; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v346; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v347; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v348; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v349; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E73A50 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_GachaBehaviorMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
    sub_1D0F0B4(&GachaBehaviorMaster_TypeInfo);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&long_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Rarity_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1D0F0B4(&string_TypeInfo);
    sub_1D0F0B4(&SummonEffectComponent_TypeInfo);
    sub_1D0F0B4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__);
    sub_1D0F0B4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__);
    sub_1D0F0B4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__);
    sub_1D0F0B4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__);
    sub_1D0F0B4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__);
    sub_1D0F0B4(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
    sub_1D0F0B4(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__);
    sub_1D0F0B4(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__);
    sub_1D0F0B4(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
    sub_1D0F0B4(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__);
    sub_1D0F0B4(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__);
    sub_1D0F0B4(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
    sub_1D0F0B4(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__);
    sub_1D0F0B4(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
    sub_1D0F0B4(&StringLiteral_4378/*"CardScale"*/);
    sub_1D0F0B4(&StringLiteral_4379/*"CardSecondName"*/);
    sub_1D0F0B4(&StringLiteral_4370/*"CardFirstName"*/);
    sub_1D0F0B4(&StringLiteral_8150/*"IsNewCard"*/);
    sub_1D0F0B4(&StringLiteral_4377/*"CardRotName"*/);
    sub_1D0F0B4(&StringLiteral_4565/*"CodeCardRarity02"*/);
    sub_1D0F0B4(&StringLiteral_2690/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/);
    sub_1D0F0B4(&StringLiteral_11343/*"Rank"*/);
    sub_1D0F0B4(&StringLiteral_18577/*"countIndex"*/);
    sub_1D0F0B4(&StringLiteral_13355/*"SummonEffect"*/);
    sub_1D0F0B4(&StringLiteral_23430/*"rarity"*/);
    sub_1D0F0B4(&StringLiteral_8164/*"IsRankUp"*/);
    sub_1D0F0B4(&StringLiteral_16315/*"_0"*/);
    sub_1D0F0B4(&StringLiteral_4564/*"CodeCardRarity"*/);
    sub_1D0F0B4(&StringLiteral_8170/*"IsSkipStop"*/);
    sub_1D0F0B4(&StringLiteral_8530/*"LimitCount"*/);
    sub_1D0F0B4(&StringLiteral_9693/*"NoticeRarity"*/);
    sub_1D0F0B4(&StringLiteral_2689/*"BACKSIDE_CLASS_IMAGE_ID"*/);
    sub_1D0F0B4(&StringLiteral_4382/*"CardType"*/);
    sub_1D0F0B4(&StringLiteral_4376/*"CardNodeName"*/);
    sub_1D0F0B4(&StringLiteral_4371/*"CardFirstPeelName"*/);
    sub_1D0F0B4(&StringLiteral_24317/*"summon_rarity_0"*/);
    sub_1D0F0B4(&StringLiteral_11355/*"Rarity"*/);
    sub_1D0F0B4(&StringLiteral_12920/*"ServantId"*/);
    byte_4E73A50 = 1;
  }
  entity = 0;
  v343 = 0;
  v3 = sub_1D0F300(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_385;
  *(_QWORD *)(v3 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  this->fields.isNoSkipAll = 0;
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_385;
  v12 = (PlayMakerFSM_o *)Component_object;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_18577/*"countIndex"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Component_object, 0);
  if ( !this->fields.SummonInfos )
    goto LABEL_385;
  v13 = Component_object;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                Component_object,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_385;
  if ( !this->fields.SummonInfos )
    goto LABEL_385;
  svtId = *(_DWORD *)(Component_object + 16);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_385;
  if ( !this->fields.SummonInfos )
    goto LABEL_385;
  v14 = *(_DWORD *)(Component_object + 20);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_385;
  if ( !this->fields.SummonInfos )
    goto LABEL_385;
  v15 = *(unsigned __int8 *)(Component_object + 24);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_385;
  if ( !this->fields.SummonInfos )
    goto LABEL_385;
  v16 = *(unsigned __int8 *)(Component_object + 25);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_385;
  if ( !this->fields.SummonInfos )
    goto LABEL_385;
  v17 = *(_DWORD *)(Component_object + 28);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_385;
  if ( !this->fields.SummonInfos )
    goto LABEL_385;
  v18 = *(_DWORD *)(Component_object + 32);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_385;
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(Component_object + 36);
  Component_object = (__int64)this->fields.SummonInfos;
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Component_object,
                                v13,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_385;
  if ( !this->fields.SummonInfos )
    goto LABEL_385;
  v19 = *(_BYTE *)(Component_object + 40);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_385;
  v336 = *(_QWORD *)(Component_object + 48);
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v5);
  v20 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v20;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._releaseAssetPath,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_12920/*"ServantId"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  *(_DWORD *)(Component_object + 56) = svtId;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8530/*"LimitCount"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  *(_DWORD *)(Component_object + 56) = v14;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8164/*"IsRankUp"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  *(_BYTE *)(Component_object + 56) = v15;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8170/*"IsSkipStop"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  *(_BYTE *)(Component_object + 56) = v19;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  v27 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v27 )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                v27,
                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  *(_QWORD *)(Component_object + 56) = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(Component_object + 56), 0, v28, v29, v30, v31, v32, v33);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8150/*"IsNewCard"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  *(_BYTE *)(Component_object + 56) = v16 != 0 || v18 == 0;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_9693/*"NoticeRarity"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  *(_DWORD *)(Component_object + 56) = v17;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4382/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  *(_DWORD *)(Component_object + 56) = *(_DWORD *)(v3 + 56);
  if ( v18 - 3 >= 3 )
    v34 = v18 ? 0 : 3;
  else
    v34 = dword_D67FE4[v18 - 3];
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_11355/*"Rarity"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  *(_DWORD *)(Component_object + 56) = v34;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  v35 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  key = v18;
  if ( !v35 )
    goto LABEL_385;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v35,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0);
  v342 = v34;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v342);
  Component_object = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_24317/*"summon_rarity_0"*/, v37, 0);
  if ( !FsmString )
    goto LABEL_385;
  FsmString->fields.value = (struct System_String_o *)Component_object;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&FsmString->fields.value, Component_object, v38, v39, v40, v41, v42, v43);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  limitCount = v14;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13355/*"SummonEffect"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, 0);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.effect, (int32_t)Value, v46, v47, v48, v49, v50, v51);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4376/*"CardNodeName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  v52 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4378/*"CardScale"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  v53 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4370/*"CardFirstName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  v54 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 24) = v54;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v54, v55, v56, v57, v58, v59, v60);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4371/*"CardFirstPeelName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  v61 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 32) = v61;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v61, v62, v63, v64, v65, v66, v67);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4379/*"CardSecondName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  v68 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 40) = v68;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)v68, v69, v70, v71, v72, v73, v74);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4377/*"CardRotName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  v75 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 48) = v75;
  v337 = (System_String_o **)(v3 + 48);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 48), (int32_t)v75, v76, v77, v78, v79, v80, v81);
  Component_object = (__int64)*p_effect;
  if ( !*p_effect )
    goto LABEL_385;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  Component_object = (__int64)TransformHelper__getNodeFromName(transform, v52, 1, 0);
  if ( !Component_object )
    goto LABEL_385;
  v83 = (UnityEngine_Component_o *)Component_object;
  Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_385;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v83, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  v84 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4E70C9E )
  {
    Component_object = sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C9E = 1;
  }
  if ( !v84 )
    goto LABEL_385;
  UnityEngine_Transform__set_localScale(v84, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v5 = (System_String_c *)v18;
  Component_object = (__int64)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_object )
    goto LABEL_385;
  Item = System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)Component_object,
           v18,
           (const MethodInfo_35C5914 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Component_object,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_object )
    goto LABEL_385;
  v86 = v15 != 0 && Item != 0;
  GachaBehaviors = (System_Collections_Generic_List_object__o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                                  (GachaBehaviorMaster_o *)Component_object,
                                                                  this->fields.gachaId,
                                                                  svtId,
                                                                  0);
  v338 = Item;
  if ( !GachaBehaviors || GachaBehaviors->fields._size < 1 )
    goto LABEL_98;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                GachaBehaviors,
                                0,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_385;
  v88 = Component_object;
  if ( !*(_QWORD *)(Component_object + 24) )
  {
LABEL_98:
    v332 = -1;
    OverwriteClassImageId = 0;
    v330 = -1;
    v331 = -1;
    v102 = -1;
    v334 = -1;
    goto LABEL_99;
  }
  OverwriteClassImageId = GachaBehaviorEntity__GetOverwriteClassImageId((GachaBehaviorEntity_o *)Component_object, 0);
  if ( v16 )
    this->fields.isNoSkipAll = 1;
  v89 = *(System_Collections_Generic_Dictionary_object__object__o **)(v88 + 24);
  Component_object = (__int64)GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  if ( !v89 )
    goto LABEL_385;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v89,
         (Il2CppObject *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v90 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v90 = GachaBehaviorMaster_TypeInfo;
    }
    v91 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v89,
            (Il2CppObject *)v90->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
            (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v88 = (__int64)v91;
    if ( v91 )
    {
      v5 = string_TypeInfo;
      if ( (System_String_c *)v91->klass != string_TypeInfo )
        goto LABEL_388;
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_385;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v88,
            (const MethodInfo_395C7A0 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_object = (__int64)this->fields.upAnimationNameList;
      if ( !Component_object )
        goto LABEL_385;
      v98 = *(_QWORD *)(Component_object + 16);
      v99 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v98 )
        goto LABEL_385;
      v100 = *(int *)(Component_object + 24);
      if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v88,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = v98 + 8 * v100;
        *(_DWORD *)(Component_object + 24) = v100 + 1;
        *(_QWORD *)(v101 + 32) = v88;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v101 + 32), v88, v92, v93, v94, v95, v96, v97);
      }
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_385;
    v334 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)Component_object,
             (Il2CppObject *)v88,
             (const MethodInfo_395D0B0 *)Method_System_Collections_Generic_List_string__IndexOf__);
  }
  else
  {
    v334 = -1;
  }
  v284 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v284 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v89,
         (Il2CppObject *)v284->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v285 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v285 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v89,
                                  (Il2CppObject *)v285->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                  (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_385;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_386;
    v102 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v102 = -1;
  }
  v286 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v286 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v89,
         (Il2CppObject *)v286->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v287 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v287 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v89,
                                  (Il2CppObject *)v287->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                  (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_385;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_386;
    v288 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v288 = -1;
  }
  v289 = GachaBehaviorMaster_TypeInfo;
  v330 = v288;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v289 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v89,
         (Il2CppObject *)v289->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v290 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v290 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v89,
                                  (Il2CppObject *)v290->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                  (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_385;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_386;
    v291 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v291 = -1;
  }
  v292 = GachaBehaviorMaster_TypeInfo;
  v332 = v291;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v292 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v89,
          (Il2CppObject *)v292->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v294 = -1;
    goto LABEL_342;
  }
  v293 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v293 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v89,
                                (Il2CppObject *)v293->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_object )
    goto LABEL_385;
  if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_386:
    sub_1D0F6A8(Component_object);
    goto LABEL_387;
  }
  v294 = *(_DWORD *)j_il2cpp_object_unbox_0();
LABEL_342:
  v295 = GachaBehaviorMaster_TypeInfo;
  v296 = v15 != 0 && Item != 0;
  v331 = v294;
  if ( v334 != -1 )
    v296 = v102 != -1;
  v329 = v296;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v295 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v89,
         (Il2CppObject *)v295->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
    if ( !Component_object )
      goto LABEL_385;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_9693/*"NoticeRarity"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_385;
    *(_DWORD *)(Component_object + 56) = 3;
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
    v297 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    if ( !v297 )
      goto LABEL_385;
    v298 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v297,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0);
    v299 = GachaBehaviorMaster_TypeInfo;
    v88 = (__int64)v298;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v299 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v89,
                                  (Il2CppObject *)v299->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                  (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v88 )
      goto LABEL_385;
    v306 = Component_object;
    if ( Component_object && *(System_String_c **)Component_object != string_TypeInfo )
      goto LABEL_387;
    *(_QWORD *)(v88 + 56) = Component_object;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v88 + 56), Component_object, v300, v301, v302, v303, v304, v305);
  }
  v307 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v307 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v89,
          (Il2CppObject *)v307->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_372;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_385;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4382/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_385;
  *(_DWORD *)(Component_object + 56) = 4;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  v308 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v308 )
    goto LABEL_385;
  v309 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v308,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0);
  v310 = GachaBehaviorMaster_TypeInfo;
  v88 = (__int64)v309;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v310 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v89,
                                (Il2CppObject *)v310->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v88 )
    goto LABEL_385;
  v306 = Component_object;
  if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
  {
    *(_QWORD *)(v88 + 56) = Component_object;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v88 + 56), Component_object, v311, v312, v313, v314, v315, v316);
LABEL_372:
    v317 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v317 = GachaBehaviorMaster_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            v89,
            (Il2CppObject *)v317->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
            (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v86 = v329;
LABEL_99:
      p_prevObject = &this->fields.prevObject;
      prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
      if ( v86 )
        v105 = 4;
      else
        v105 = 3;
      if ( this->fields.EditMode )
        v106 = 0;
      else
        v106 = v105;
      this->fields._counter = 0;
      this->fields._counterMax = v106;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(prevObject, 0, 0) )
      {
        v107 = (UnityEngine_Object_o *)*p_prevObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_73359484(v107, 0);
        *p_prevObject = 0;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.prevObject, 0, v108, v109, v110, v111, v112, v113);
      }
      if ( *(_DWORD *)(v3 + 56) == 3 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v83, 0);
        v115 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
        System_Action___ctor(
          v115,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
          0);
        Component_object = (__int64)CharaGraphManager__CreateCommandTexturePrefab(gameObject, svtId, 0, v115, 0);
      }
      else
      {
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_385;
        Component_object = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Component_object,
                                      (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        entity = 0;
        if ( !Component_object )
          goto LABEL_385;
        v116 = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                 &entity,
                 v336,
                 (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        v117 = UnityEngine_Component__get_gameObject(v83, 0);
        if ( v116 )
        {
          v118 = entity;
          v119 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
          System_Action___ctor(
            v119,
            (Il2CppObject *)v3,
            Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
            0);
          Component_object = (__int64)CharaGraphManager__CreateTexturePrefab_42022848(
                                        v117,
                                        (UserServantEntity_o *)v118,
                                        0,
                                        v119,
                                        0);
        }
        else
        {
          v120 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
          System_Action___ctor(
            v120,
            (Il2CppObject *)v3,
            Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
            0);
          Component_object = (__int64)CharaGraphManager__CreateTexturePrefab(
                                        v117,
                                        svtId,
                                        limitCount,
                                        0,
                                        1,
                                        0,
                                        v120,
                                        0,
                                        0);
        }
      }
      v121 = (UnityEngine_Component_o *)Component_object;
      if ( !Component_object )
        goto LABEL_385;
      Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      v122 = (UnityEngine_Transform_o *)Component_object;
      if ( !byte_4E70C99 )
      {
        Component_object = sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
        byte_4E70C99 = 1;
      }
      if ( !v122 )
        goto LABEL_385;
      UnityEngine_Transform__set_localPosition(v122, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v121, 0);
      if ( !Component_object )
        goto LABEL_385;
      v345.fields.x = v53;
      v345.fields.y = v53;
      v345.fields.z = v53;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v345, 0);
      Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                    v83,
                                    (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UITexture___);
      if ( !Component_object )
        goto LABEL_385;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      v123 = UnityEngine_Component__get_gameObject(v121, 0);
      *p_prevObject = v123;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&this->fields.prevObject,
        (int32_t)v123,
        v124,
        v125,
        v126,
        v127,
        v128,
        v129);
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
      if ( !Component_object )
        goto LABEL_385;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_4564/*"CodeCardRarity"*/,
                                    0);
      if ( !Component_object )
        goto LABEL_385;
      v130 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
      if ( !Component_object )
        goto LABEL_385;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_4565/*"CodeCardRarity02"*/,
                                    0);
      if ( !Component_object )
        goto LABEL_385;
      Component_object = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                    (HutongGames_PlayMaker_FsmString_o *)Component_object,
                                    0);
      if ( !*p_effect )
        goto LABEL_385;
      v131 = (System_String_o *)Component_object;
      v132 = UnityEngine_GameObject__get_transform(*p_effect, 0);
      Component_object = (__int64)TransformHelper__getNodeFromName(v132, v130, 1, 0);
      if ( !Component_object )
        goto LABEL_385;
      Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Component_object,
                                    (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !*p_effect )
        goto LABEL_385;
      v133 = (UnityEngine_Component_o *)Component_object;
      v134 = UnityEngine_GameObject__get_transform(*p_effect, 0);
      Component_object = (__int64)TransformHelper__getNodeFromName(v134, v131, 1, 0);
      if ( !Component_object )
        goto LABEL_385;
      Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Component_object,
                                    (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !v133 )
        goto LABEL_385;
      v135 = (UnityEngine_Component_o *)Component_object;
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v133, 0);
      if ( !Component_object )
        goto LABEL_385;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
      if ( !v135 )
        goto LABEL_385;
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v135, 0);
      if ( !Component_object )
        goto LABEL_385;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
      if ( this->fields.EditMode )
      {
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
        if ( !Component_object )
          goto LABEL_385;
        Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11343/*"Rank"*/,
                                      0);
        if ( v86 )
        {
          v136 = v338;
          if ( !Component_object )
            goto LABEL_385;
          v137 = v338 == 2 ? 2 : 1;
          *(_DWORD *)(Component_object + 56) = v137;
          Component_object = (__int64)*p_effect;
          if ( !*p_effect )
            goto LABEL_385;
          v138 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
          NodeFromName = TransformHelper__getNodeFromName(v138, *(System_String_o **)(v3 + 24), 1, 0);
          SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, v338 - 1, v140);
          Component_object = (__int64)this->fields.effect;
          if ( !Component_object )
            goto LABEL_385;
          v141 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
          v142 = TransformHelper__getNodeFromName(v141, *(System_String_o **)(v3 + 32), 1, 0);
          SummonEffectComponent__ChangeClassCardColor(this, v142, v338 - 1, v143);
          Component_object = (__int64)this->fields.effect;
          if ( !Component_object )
            goto LABEL_385;
          v144 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
          v145 = TransformHelper__getNodeFromName(v144, *v337, 1, 0);
          v147 = this;
          v148 = v338 - 1;
        }
        else
        {
          v136 = v338;
          if ( !Component_object )
            goto LABEL_385;
          *(_DWORD *)(Component_object + 56) = 0;
          Component_object = (__int64)*p_effect;
          if ( !*p_effect )
            goto LABEL_385;
          v165 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
          v145 = TransformHelper__getNodeFromName(v165, *v337, 1, 0);
          v147 = this;
          v148 = v338;
        }
        SummonEffectComponent__ChangeClassCardColor(v147, v145, v148, v146);
        Component_object = (__int64)this->fields.effect;
        if ( Component_object )
        {
          v166 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
          v167 = TransformHelper__getNodeFromName(v166, *(System_String_o **)(v3 + 40), 1, 0);
          SummonEffectComponent__ChangeClassCardColor(this, v167, v136, v168);
          SummonEffectComponent__CompleteCallback(this, v169);
          return;
        }
LABEL_385:
        sub_1D0F30C(Component_object, v5);
      }
      if ( *(_DWORD *)(v3 + 56) == 3 )
      {
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
        if ( !Component_object )
          goto LABEL_385;
        Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11343/*"Rank"*/,
                                      0);
        if ( !Component_object )
          goto LABEL_385;
        *(_DWORD *)(Component_object + 56) = 3;
        v343 = key;
        Component_object = (__int64)UnityEngine_Component__get_gameObject(v133, 0);
        if ( !Component_object )
          goto LABEL_385;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
        v149 = System_Int32__ToString((int32_t)&v343, 0);
        v150 = System_String__Concat_65601036(
                 (System_String_o *)StringLiteral_23430/*"rarity"*/,
                 v149,
                 (System_String_o *)StringLiteral_16315/*"_0"*/,
                 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetCharaGraphaOption((UISprite_o *)v133, v150, 0);
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))v133->klass[2]._1.parent)(
          v133,
          v133->klass[2]._1.generic_class);
        Component_object = (__int64)UnityEngine_Component__get_gameObject(v135, 0);
        if ( !Component_object )
          goto LABEL_385;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
        v151 = System_Int32__ToString((int32_t)&v343, 0);
        v152 = System_String__Concat_65601036(
                 (System_String_o *)StringLiteral_23430/*"rarity"*/,
                 v151,
                 (System_String_o *)StringLiteral_16315/*"_0"*/,
                 0);
        AtlasManager__SetCharaGraphaOption((UISprite_o *)v135, v152, 0);
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))v135->klass[2]._1.parent)(
          v135,
          v135->klass[2]._1.generic_class);
        Component_object = (__int64)UnityEngine_Component__get_transform(v133, 0);
        if ( !Component_object )
          goto LABEL_385;
        v346.fields.x = 0.0;
        v346.fields.z = 0.0;
        v346.fields.y = 216.81;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v346, 0);
        Component_object = (__int64)UnityEngine_Component__get_transform(v133, 0);
        if ( !Component_object )
          goto LABEL_385;
        v347.fields.x = v53;
        v347.fields.y = v53;
        v347.fields.z = v53;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v347, 0);
        Component_object = (__int64)UnityEngine_Component__get_transform(v135, 0);
        if ( !Component_object )
          goto LABEL_385;
        v348.fields.x = 0.0;
        v348.fields.z = 0.0;
        v348.fields.y = 216.81;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v348, 0);
        Component_object = (__int64)UnityEngine_Component__get_transform(v135, 0);
        if ( !Component_object )
          goto LABEL_385;
        v349.fields.x = v53;
        v349.fields.y = v53;
        v349.fields.z = v53;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v349, 0);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_385;
        Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                      (DesignCardManager_o *)Component_object,
                                      1,
                                      key,
                                      0);
        v159 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_385;
        items = v159->fields._items;
        v161 = Method_System_Collections_Generic_List_string__Add__;
        ++v159->fields._version;
        if ( !items )
          goto LABEL_385;
        size = v159->fields._size;
        v163 = (System_String_o *)Component_object;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v159,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
        }
        else
        {
          v164 = &items->obj.klass + size;
          v159->fields._size = size + 1;
          v164[4] = (Il2CppClass *)v163;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v164 + 4), (int32_t)v163, v153, v154, v155, v156, v157, v158);
        }
        v203 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v203,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v163, v203, 1, 0, 0);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_385;
        Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                      (DesignCardManager_o *)Component_object,
                                      101,
                                      key,
                                      0);
        v210 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_385;
        v211 = v210->fields._items;
        v212 = Method_System_Collections_Generic_List_string__Add__;
        ++v210->fields._version;
        if ( !v211 )
          goto LABEL_385;
        v213 = v210->fields._size;
        v214 = (System_String_o *)Component_object;
        if ( (unsigned int)v213 >= LODWORD(v211->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v210,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v212[4] + 192LL) + 112LL));
        }
        else
        {
          v215 = &v211->obj.klass + v213;
          v210->fields._size = v213 + 1;
          v215[4] = (Il2CppClass *)v214;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v215 + 4), (int32_t)v214, v204, v205, v206, v207, v208, v209);
        }
        v216 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v216,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
          0);
      }
      else
      {
        v170 = sub_1D0F300(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v170, 0);
        if ( !v170 )
          goto LABEL_385;
        *(_QWORD *)(v170 + 24) = v3;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v170 + 24), v3, v171, v172, v173, v174, v175, v176);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_385;
        v177 = v102;
        Component_object = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Component_object,
                                      (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Component_object )
          goto LABEL_385;
        v178 = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                 svtId,
                 (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_385;
        Component_object = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Component_object,
                                      (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !Component_object )
          goto LABEL_385;
        ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Component_object, svtId, limitCount, 0);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_385;
        Component_object = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Component_object,
                                      (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
        if ( !v178 )
          goto LABEL_385;
        if ( !Component_object )
          goto LABEL_385;
        Component_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                                      (int32_t)v178[5].klass,
                                      (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
        if ( !Component_object )
          goto LABEL_385;
        v179 = *(_DWORD *)(Component_object + 40);
        if ( v332 != -1 )
          v179 = v332;
        *(_DWORD *)(v170 + 16) = v179;
        if ( v331 == -1 )
          v180 = key;
        else
          v180 = v331;
        if ( !v86 )
        {
          v192 = sub_1D0F300(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v192, 0);
          if ( !v192 )
            goto LABEL_385;
          *(_QWORD *)(v192 + 24) = v170;
          v199 = (Il2CppObject **)(v192 + 24);
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v192 + 24), v170, v193, v194, v195, v196, v197, v198);
          Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
          if ( !Component_object )
            goto LABEL_385;
          Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                        (System_String_o *)StringLiteral_11343/*"Rank"*/,
                                        0);
          if ( !Component_object )
            goto LABEL_385;
          v200 = v334;
          klass = OverwriteClassImageId;
          if ( v334 == -1 )
            v200 = 0;
          *(_DWORD *)(Component_object + 56) = v200;
          v202 = *v199;
          if ( OverwriteClassImageId <= 0 )
          {
            if ( !v202 )
              goto LABEL_385;
            klass = (int32_t)v202[1].klass;
          }
          else if ( !v202 )
          {
            goto LABEL_385;
          }
          LODWORD(v202[1].klass) = klass;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v199 || !Component_object )
            goto LABEL_385;
          DesignCardPath = DesignCardManager__GetDesignCardPath(
                             (DesignCardManager_o *)Component_object,
                             (int32_t)(*v199)[1].klass,
                             v180,
                             0);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          Component_object = AssetManager__isExistAssetStorage(DesignCardPath, 0);
          if ( (Component_object & 1) == 0 )
          {
            if ( !*v199 )
              goto LABEL_385;
            LODWORD((*v199)[1].klass) = 1;
            Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
            if ( !*v199 || !Component_object )
              goto LABEL_385;
            v180 = 3;
            DesignCardPath = DesignCardManager__GetDesignCardPath(
                               (DesignCardManager_o *)Component_object,
                               (int32_t)(*v199)[1].klass,
                               3,
                               0);
          }
          Component_object = (__int64)*p_releaseAssetPath;
          if ( !*p_releaseAssetPath )
            goto LABEL_385;
          v250 = *(_QWORD *)(Component_object + 16);
          v251 = Method_System_Collections_Generic_List_string__Add__;
          ++*(_DWORD *)(Component_object + 28);
          if ( !v250 )
            goto LABEL_385;
          v252 = *(int *)(Component_object + 24);
          if ( (unsigned int)v252 >= *(_DWORD *)(v250 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Component_object,
              (Il2CppObject *)DesignCardPath,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v251[4] + 192LL) + 112LL));
          }
          else
          {
            v253 = v250 + 8 * v252;
            *(_DWORD *)(Component_object + 24) = v252 + 1;
            *(_QWORD *)(v253 + 32) = DesignCardPath;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)(v253 + 32),
              (int32_t)DesignCardPath,
              v244,
              v245,
              v246,
              v247,
              v248,
              v249);
          }
          v254 = *v199;
          v255 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v255,
            v254,
            Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
            0);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          Component_object = AssetManager__loadAssetStorage(DesignCardPath, v255, 1, 0, 0);
          if ( !*v199 )
            goto LABEL_385;
          monitor = (*v199)[1].monitor;
          if ( !monitor )
            goto LABEL_385;
          v257 = (System_String_o **)(monitor[14] == 1 ? &StringLiteral_2690/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/ : &StringLiteral_2689/*"BACKSIDE_CLASS_IMAGE_ID"*/);
          *(_DWORD *)(v192 + 16) = ConstantMaster__getValue(*v257, 0);
          v258 = (int32_t *)(v192 + 16);
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_385;
          v259 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v258, v180, 0);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( !AssetManager__isExistAssetStorage(v259, 0) )
          {
            Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
            if ( !Component_object )
              goto LABEL_385;
            v259 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v258, 3, 0);
          }
          Component_object = (__int64)*p_releaseAssetPath;
          if ( !*p_releaseAssetPath )
            goto LABEL_385;
          v266 = *(_QWORD *)(Component_object + 16);
          v267 = Method_System_Collections_Generic_List_string__Add__;
          ++*(_DWORD *)(Component_object + 28);
          if ( !v266 )
            goto LABEL_385;
          v268 = *(int *)(Component_object + 24);
          if ( (unsigned int)v268 >= *(_DWORD *)(v266 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Component_object,
              (Il2CppObject *)v259,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v267[4] + 192LL) + 112LL));
          }
          else
          {
            v269 = v266 + 8 * v268;
            *(_DWORD *)(Component_object + 24) = v268 + 1;
            *(_QWORD *)(v269 + 32) = v259;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v269 + 32), (int32_t)v259, v260, v261, v262, v263, v264, v265);
          }
          v270 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v270,
            (Il2CppObject *)v192,
            Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
            0);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v271 = v259;
          v272 = v270;
          goto LABEL_302;
        }
        v181 = sub_1D0F300(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
        System_Object___ctor((Il2CppObject *)v181, 0);
        if ( !v181 )
          goto LABEL_385;
        *(_QWORD *)(v181 + 24) = v170;
        v188 = (Il2CppObject **)(v181 + 24);
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v181 + 24), v170, v182, v183, v184, v185, v186, v187);
        if ( !*(_QWORD *)(v181 + 24) )
          goto LABEL_385;
        *(_DWORD *)(v181 + 16) = *(_DWORD *)(*(_QWORD *)(v181 + 24) + 16LL);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        LowerColorRarity = Rarity__getLowerColorRarity(v180, 0);
        if ( v177 != -1 )
          *(_DWORD *)(v181 + 16) = v177;
        v190 = v330 == -1 ? LowerColorRarity : v330;
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
        if ( !Component_object )
          goto LABEL_385;
        Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11343/*"Rank"*/,
                                      0);
        v191 = v334;
        if ( v334 == -1 )
        {
          if ( !Component_object )
            goto LABEL_385;
          v191 = v338 == 2 ? 2 : 1;
        }
        else if ( !Component_object )
        {
          goto LABEL_385;
        }
        *(_DWORD *)(Component_object + 56) = v191;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_385;
        v217 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v181 + 16),
                 v190,
                 0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( !AssetManager__isExistAssetStorage(v217, 0) )
        {
          *(_DWORD *)(v181 + 16) = 1;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_385;
          v190 = 3;
          v217 = DesignCardManager__GetDesignCardPath(
                   (DesignCardManager_o *)Component_object,
                   *(_DWORD *)(v181 + 16),
                   3,
                   0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_385;
        v224 = *(_QWORD *)(Component_object + 16);
        v225 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v224 )
          goto LABEL_385;
        v226 = *(int *)(Component_object + 24);
        if ( (unsigned int)v226 >= *(_DWORD *)(v224 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v217,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
        }
        else
        {
          v227 = v224 + 8 * v226;
          *(_DWORD *)(Component_object + 24) = v226 + 1;
          *(_QWORD *)(v227 + 32) = v217;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v227 + 32), (int32_t)v217, v218, v219, v220, v221, v222, v223);
        }
        v228 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v228,
          (Il2CppObject *)v181,
          Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v217, v228, 1, 0, 0);
        *(_DWORD *)(v181 + 20) = ConstantMaster__getValue((System_String_o *)StringLiteral_2689/*"BACKSIDE_CLASS_IMAGE_ID"*/, 0);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_385;
        v229 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v181 + 20),
                 v190,
                 0);
        if ( !AssetManager__isExistAssetStorage(v229, 0) )
        {
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_385;
          v229 = DesignCardManager__GetDesignCardPath(
                   (DesignCardManager_o *)Component_object,
                   *(_DWORD *)(v181 + 20),
                   3,
                   0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_385;
        v236 = *(_QWORD *)(Component_object + 16);
        v237 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v236 )
          goto LABEL_385;
        v238 = *(int *)(Component_object + 24);
        if ( (unsigned int)v238 >= *(_DWORD *)(v236 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v229,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
        }
        else
        {
          v239 = v236 + 8 * v238;
          *(_DWORD *)(Component_object + 24) = v238 + 1;
          *(_QWORD *)(v239 + 32) = v229;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v239 + 32), (int32_t)v229, v230, v231, v232, v233, v234, v235);
        }
        v240 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v240,
          (Il2CppObject *)v181,
          Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__loadAssetStorage(v229, v240, 1, 0, 0);
        v241 = OverwriteClassImageId;
        v242 = *v188;
        if ( OverwriteClassImageId <= 0 )
        {
          if ( !v242 )
            goto LABEL_385;
          v241 = (int32_t)v242[1].klass;
        }
        else if ( !v242 )
        {
          goto LABEL_385;
        }
        LODWORD(v242[1].klass) = v241;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v188 || !Component_object )
          goto LABEL_385;
        v214 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 (int32_t)(*v188)[1].klass,
                 v180,
                 0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__isExistAssetStorage(v214, 0);
        if ( (Component_object & 1) == 0 )
        {
          if ( !*v188 )
            goto LABEL_385;
          LODWORD((*v188)[1].klass) = 1;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v188 || !Component_object )
            goto LABEL_385;
          v214 = DesignCardManager__GetDesignCardPath(
                   (DesignCardManager_o *)Component_object,
                   (int32_t)(*v188)[1].klass,
                   3,
                   0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_385;
        v279 = *(_QWORD *)(Component_object + 16);
        v280 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v279 )
          goto LABEL_385;
        v281 = *(int *)(Component_object + 24);
        if ( (unsigned int)v281 >= *(_DWORD *)(v279 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v214,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v280[4] + 192LL) + 112LL));
        }
        else
        {
          v282 = v279 + 8 * v281;
          *(_DWORD *)(Component_object + 24) = v281 + 1;
          *(_QWORD *)(v282 + 32) = v214;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v282 + 32), (int32_t)v214, v273, v274, v275, v276, v277, v278);
        }
        v283 = *v188;
        v216 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v216,
          v283,
          Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      v271 = v214;
      v272 = v216;
LABEL_302:
      AssetManager__loadAssetStorage(v271, v272, 1, 0, 0);
      return;
    }
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
    v318 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    if ( !v318 )
      goto LABEL_385;
    v319 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v318,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
             0);
    v320 = GachaBehaviorMaster_TypeInfo;
    v88 = (__int64)v319;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v320 = GachaBehaviorMaster_TypeInfo;
    }
    v86 = v329;
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v89,
                                  (Il2CppObject *)v320->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                  (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v88 )
      goto LABEL_385;
    v306 = Component_object;
    if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
    {
      *(_QWORD *)(v88 + 56) = Component_object;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v88 + 56), Component_object, v321, v322, v323, v324, v325, v326);
      goto LABEL_99;
    }
  }
LABEL_387:
  sub_1D0F6A8(v306);
LABEL_388:
  sub_1D0F6A8(v88);
  SummonEffectComponent___c__DisplayClass45_0___ctor(v327, v328);
}


void SummonEffectComponent___endAnimation_b__43_0(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *Component_object; // x0
  __int64 v13; // x1

  if ( (byte_4E73A5A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_5499/*"END_FADE"*/);
    byte_4E73A5A = 1;
  }
  p_effect = &this->fields.effect;
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effect, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)*p_effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_73359484(v5, 0);
    *p_effect = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.effect, 0, v6, v7, v8, v9, v10, v11);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    sub_1D0F30C(0, v13);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5499/*"END_FADE"*/, 0);
}


void SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4E73A4E & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SummonEffectComponent__endAnimation_b__43_0__);
    byte_4E73A4E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0);
  if ( !v5 )
    sub_1D0F30C(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
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
  bool v17; // w26
  bool v18; // w27

  v17 = isRankup;
  v18 = isNewCard;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.ServantId = servantId;
  this->fields.LimitCount = limitCount;
  this->fields.IsRankUp = v17;
  this->fields.IsNewCard = v18;
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
    sub_1D0F30C(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__3(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  SummonEffectComponent___c__DisplayClass45_0_o *v4; // x20
  struct SummonEffectComponent_o *_4__this; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct SummonEffectComponent_o *v14; // x21
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct SummonEffectComponent_o *v23; // x8
  struct SummonEffectComponent_o *v24; // x8
  struct SummonEffectComponent_o *v25; // x8
  DesignCardManager_o *v26; // x21
  UnityEngine_Transform_o *v27; // x0

  v4 = this;
  if ( (byte_4E73A5B & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1D0F0B4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4E73A5B = 1;
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
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.firstTr,
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
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v14->fields.firstTPeelr, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v23 = v4->fields.__4__this;
  if ( !v23 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v23->fields.firstTr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v24 = v4->fields.__4__this;
  if ( !v24 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v24->fields.firstTPeelr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1D0F30C(this, d);
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
  if ( (byte_4E73A5C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1D0F0B4(&UnityEngine_Material_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1D0F0B4(&StringLiteral_4964/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4E73A5C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4964/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0);
  v10 = (UnityEngine_Material_o *)sub_1D0F300(UnityEngine_Material_TypeInfo);
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
    sub_1D0F30C(this, d);
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

  if ( (byte_4E73A5D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4E73A5D = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1D0F30C(Instance, v6);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct SummonEffectComponent___c__DisplayClass45_0_o *v15; // x8
  struct SummonEffectComponent_o *v16; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v17; // x8
  UnityEngine_Transform_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
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
  if ( (byte_4E73A5E & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_1D0F0B4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4E73A5E = 1;
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
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.firstTr,
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
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v16->fields.firstTPeelr, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v25 = v4->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_25;
  v26 = v25->fields.__4__this;
  if ( !v26 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v26->fields.firstTr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v27 = v4->fields.CS___8__locals1;
  if ( !v27 )
    goto LABEL_25;
  v28 = v27->fields.__4__this;
  if ( !v28 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v28->fields.firstTPeelr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1D0F30C(this, d);
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

  if ( (byte_4E73A5F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4E73A5F = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1D0F30C(Instance, v6);
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

  if ( (byte_4E73A60 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4E73A60 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1D0F30C(Instance, v6);
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
  if ( (byte_4E73A61 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1D0F0B4(&UnityEngine_Material_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_15334/*"Unlit/Transparent Colored"*/);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_1D0F0B4(&StringLiteral_4964/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4E73A61 = 1;
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
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v11 = v4->fields.CS___8__locals3;
  if ( !v11 )
    goto LABEL_22;
  v12 = v11->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_22;
  v13 = this;
  v14 = (System_String_o **)(v12->fields.cardType == 1 ? &StringLiteral_4964/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15334/*"Unlit/Transparent Colored"*/);
  v15 = UnityEngine_Shader__Find(*v14, 0);
  v16 = (UnityEngine_Material_o *)sub_1D0F300(UnityEngine_Material_TypeInfo);
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
    sub_1D0F30C(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
}