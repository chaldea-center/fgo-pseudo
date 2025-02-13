void __fastcall SummonEffectComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct SummonEffectComponent_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct SummonEffectComponent_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct SummonEffectComponent_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  struct SummonEffectComponent_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  struct SummonEffectComponent_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  struct SummonEffectComponent_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x1
  struct SummonEffectComponent_StaticFields *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct SummonEffectComponent_StaticFields *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7

  if ( (byte_4BD8C61 & 1) == 0 )
  {
    sub_1C21E38(&SummonEffectComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_24111/*"summon_up_04"*/);
    sub_1C21E38(&StringLiteral_24109/*"summon_up_02"*/);
    sub_1C21E38(&StringLiteral_7169/*"GetAnimationName"*/);
    sub_1C21E38(&StringLiteral_24110/*"summon_up_03"*/);
    sub_1C21E38(&StringLiteral_24108/*"summon_up_01"*/);
    sub_1C21E38(&StringLiteral_11371/*"RarityAnimationName"*/);
    sub_1C21E38(&StringLiteral_15431/*"UpAnimationName"*/);
    sub_1C21E38(&StringLiteral_7781/*"InitializeAnimationName"*/);
    byte_4BD8C61 = 1;
  }
  SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION = (struct System_String_o *)StringLiteral_24108/*"summon_up_01"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SummonEffectComponent_TypeInfo->static_fields,
    StringLiteral_24108/*"summon_up_01"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_24109/*"summon_up_02"*/;
  static_fields = SummonEffectComponent_TypeInfo->static_fields;
  static_fields->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_24109/*"summon_up_02"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->RANKUP_TO_SILVER_ANIMATION, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_24110/*"summon_up_03"*/;
  v16 = SummonEffectComponent_TypeInfo->static_fields;
  v16->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_24110/*"summon_up_03"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->RANKUP_TO_GOLD_ANIMATION, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_24111/*"summon_up_04"*/;
  v24 = SummonEffectComponent_TypeInfo->static_fields;
  v24->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_24111/*"summon_up_04"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->RANKUP_COMMANDCODE_ANIMATION, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_15431/*"UpAnimationName"*/;
  v32 = SummonEffectComponent_TypeInfo->static_fields;
  v32->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15431/*"UpAnimationName"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v32->FSM_VARIABLE_UP_ANIMATION_NAME, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_7781/*"InitializeAnimationName"*/;
  v40 = SummonEffectComponent_TypeInfo->static_fields;
  v40->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7781/*"InitializeAnimationName"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v40->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = StringLiteral_11371/*"RarityAnimationName"*/;
  v48 = SummonEffectComponent_TypeInfo->static_fields;
  v48->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11371/*"RarityAnimationName"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v48->FSM_VARIABLE_RARITY_ANIMATION_NAME, v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_7169/*"GetAnimationName"*/;
  v56 = SummonEffectComponent_TypeInfo->static_fields;
  v56->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7169/*"GetAnimationName"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->FSM_VARIABLE_GET_ANIMATION_NAME, v55, v57, v58, v59, v60, v61, v62);
  v63 = SummonEffectComponent_TypeInfo->static_fields;
  v63->rarityToColor = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v63->rarityToColor, 0LL, v64, v65, v66, v67, v68, v69);
}


void __fastcall SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  il2cpp_array_size_t max_length; // w8
  void *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BD8C60 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8C60 = 1;
  }
  v3 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 512, max_length == 1) )
    sub_1C2209C(v3, v3);
  v3->m_Items[2] = 875;
  this->fields.cardTextureSize = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.cardTextureSize, (int64_t)v3, v5, v6, v7, v8, v9, v10);
  v12 = StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effAnimName, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
  System_Collections_Generic_List_object__o *SummonInfos; // x20
  int64_t v19; // x24
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4BD8C50 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
    sub_1C21E38(&SummonEffectComponent_SummonInfo_TypeInfo);
    byte_4BD8C50 = 1;
  }
  SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  }
  v19 = sub_1C22084(SummonEffectComponent_SummonInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
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
    sub_1C22094(v20, v21);
  }
  size = SummonInfos->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      SummonInfos,
      (Il2CppObject *)v19,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    SummonInfos->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v19;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 4), v19, v22, v23, v24, v25, v26, v27);
  }
}


void __fastcall SummonEffectComponent__ChangeClassCardColor(
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
  if ( (byte_4BD8C59 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4BD8C59 = 1;
  }
  testCards = v6->fields.testCards;
  if ( !testCards )
    goto LABEL_10;
  if ( testCards->max_length <= col )
    goto LABEL_11;
  if ( !cardNode
    || (v8 = testCards->m_Items[col],
        (this = (SummonEffectComponent_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)cardNode,
                                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, const char *))this->klass[2]._1.gc_desc)(
                                            this,
                                            v8,
                                            this->klass[2]._1.name),
        (cardTextureSize = v6->fields.cardTextureSize) == 0LL) )
  {
LABEL_10:
    sub_1C22094(this, cardNode);
  }
  if ( cardTextureSize->max_length <= 1 )
LABEL_11:
    sub_1C2209C(this, cardNode);
  v11.fields.m_Height = (float)cardTextureSize->m_Items[2] * 0.00097656;
  v11.fields.m_XMin = 0.0;
  v11.fields.m_YMin = 1.0 - v11.fields.m_Height;
  v11.fields.m_Width = 0.5;
  UITexture__set_uvRect(v9, v11, 0LL);
}


void __fastcall SummonEffectComponent__CompleteCallback(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int32_t counterMax; // w9
  int32_t v4; // w8
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4BD8C5A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&StringLiteral_12177/*"SETUP_DONE"*/);
    byte_4BD8C5A = 1;
  }
  counterMax = this->fields._counterMax;
  v4 = this->fields._counter + 1;
  this->fields._counter = v4;
  if ( v4 >= counterMax )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C22094(0LL, v6);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_12177/*"SETUP_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4BD8C52 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8C52 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1C22094(Instance, v3);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


int32_t __fastcall SummonEffectComponent__GetGachaId(SummonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.gachaId;
}


void __fastcall SummonEffectComponent__InitSummonEffect(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int *Component_object; // x0
  Il2CppObject *RANKUP_TO_SILVER_ANIMATION; // x1
  PlayMakerFSM_o *v5; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x8
  Il2CppObject *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x21
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_List_object__o *upAnimationNameList; // x21
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
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

  if ( (byte_4BD8C53 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonEffectComponent_OnCharaGraphLoadDone__);
    sub_1C21E38(&SummonEffectComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_8206/*"IsNoSkip"*/);
    sub_1C21E38(&StringLiteral_18592/*"countMax"*/);
    sub_1C21E38(&StringLiteral_13331/*"SummonEffectAnimation"*/);
    byte_4BD8C53 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_46;
  v5 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_18592/*"countMax"*/,
                              0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_46;
  if ( !Component_object )
    goto LABEL_46;
  Component_object[14] = SummonInfos->fields._size;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_8206/*"IsNoSkip"*/,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  *((_BYTE *)Component_object + 56) = this->fields.isNoSkip;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_13331/*"SummonEffectAnimation"*/,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                              (HutongGames_PlayMaker_FsmGameObject_o *)Component_object,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)Component_object,
         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = (struct UnityEngine_Animation_o *)v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effAnimation, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v14;
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.upAnimationNameList,
    (int64_t)v14,
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
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      upAnimationNameList,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    upAnimationNameList->fields._size = size + 1;
    v32[4] = (Il2CppClass *)RANKUP_TO_SILVER_ANIMATION;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)(v32 + 4),
      (int64_t)RANKUP_TO_SILVER_ANIMATION,
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
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = v39 + 8 * v41;
    Component_object[6] = v41 + 1;
    *(_QWORD *)(v42 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)(v42 + 32),
      (int64_t)RANKUP_TO_SILVER_ANIMATION,
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
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = v49 + 8 * v51;
    Component_object[6] = v51 + 1;
    *(_QWORD *)(v52 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)(v52 + 32),
      (int64_t)RANKUP_TO_SILVER_ANIMATION,
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
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = v59 + 8 * v61;
    Component_object[6] = v61 + 1;
    *(_QWORD *)(v62 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)(v62 + 32),
      (int64_t)RANKUP_TO_SILVER_ANIMATION,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  Component_object = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Component_object
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_object, 1, 0LL),
        (Component_object = (int *)this->fields.SummonInfos) == 0LL) )
  {
LABEL_46:
    sub_1C22094(Component_object, RANKUP_TO_SILVER_ANIMATION);
  }
  this->fields.DownloadCounter = Component_object[6];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)Component_object,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v71 = v70;
  while ( 1 )
  {
    v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v63 )
      break;
    if ( !v71.fields._current )
      sub_1C22094(v63, v64);
    klass = (int32_t)v71.fields._current[1].klass;
    if ( HIDWORD(v71.fields._current[2].klass) == 3 )
    {
      v66 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v66,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadCommandAsset(klass, v66, 0LL);
    }
    else
    {
      klass_high = HIDWORD(v71.fields._current[1].klass);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0LL);
      v69 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v69,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v69, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void __fastcall SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD8C4F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
    byte_4BD8C4F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.SummonInfos, (int64_t)v3, v4, v5, v6, v7, v8, v9);
}


void __fastcall SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  int32_t v4; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BD8C54 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_7552/*"INIT_DONE"*/);
    byte_4BD8C54 = 1;
  }
  v4 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v4;
  if ( !v4 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL),
          (Instance = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0LL) )
    {
      sub_1C22094(Instance, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7552/*"INIT_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1

  if ( (byte_4BD8C5F & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&StringLiteral_5837/*"EVENT_SKIP"*/);
    byte_4BD8C5F = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C22094(0LL, v4);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5837/*"EVENT_SKIP"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__ReleasePrevAsset(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD8C55 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4BD8C55 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v7 = this->fields._releaseAssetPath;
    if ( !v7 )
      sub_1C22094(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
  }
}


void __fastcall SummonEffectComponent__SetGachaId(SummonEffectComponent_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.gachaId = id;
}


void __fastcall SummonEffectComponent__SetUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  void *Component_object; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x20
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x8
  int32_t v7; // w1
  Il2CppObject *Item; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  HutongGames_PlayMaker_FsmVariables_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_String_o *effAnimName; // x1

  if ( (byte_4BD8C5B & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&SummonEffectComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_11357/*"Rank"*/);
    byte_4BD8C5B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object
    || (v5 = (PlayMakerFSM_o *)Component_object,
        (Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL)) == 0LL)
    || (Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                             (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                             (System_String_o *)StringLiteral_11357/*"Rank"*/,
                             0LL)) == 0LL )
  {
LABEL_17:
    sub_1C22094(Component_object, v4);
  }
  Component_object = (void *)HutongGames_PlayMaker_FsmInt__get_Value(
                               (HutongGames_PlayMaker_FsmInt_o *)Component_object,
                               0LL);
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
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.effAnimName = (struct System_String_o *)Item;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effAnimName, (int64_t)Item, v9, v10, v11, v12, v13, v14);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  v15 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v15 )
    goto LABEL_17;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v15,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_17;
  effAnimName = this->fields.effAnimName;
  *((_QWORD *)Component_object + 7) = effAnimName;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)((char *)Component_object + 56),
    (int64_t)effAnimName,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall SummonEffectComponent__SetUpInitializeAnimation(
        SummonEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *Component_object; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x19
  HutongGames_PlayMaker_FsmVariables_o *v6; // x20
  System_String_o *Value; // x0

  if ( (byte_4BD8C5C & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&SummonEffectComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_7545/*"INITIALIZE_ANIMATION"*/);
    byte_4BD8C5C = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_10;
  v5 = Component_object;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0LL);
  v6 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v6
    || (Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                               v6,
                                               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                               0LL)) == 0LL )
  {
LABEL_10:
    sub_1C22094(Component_object, v4);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) )
    PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_7545/*"INITIALIZE_ANIMATION"*/, 0LL);
}


void __fastcall SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  SummonEffectComponent_c *v2; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  SummonEffectComponent_c *v12; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_4BD8C51 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    sub_1C21E38(&SummonEffectComponent_TypeInfo);
    byte_4BD8C51 = 1;
  }
  v2 = SummonEffectComponent_TypeInfo;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v2 = SummonEffectComponent_TypeInfo;
  }
  if ( !v2->static_fields->rarityToColor )
  {
    v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
      v3,
      (const MethodInfo_32E2ABC *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v3 )
      sub_1C22094(v4, v5);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      0,
      0,
      (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      1,
      0,
      (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      2,
      0,
      (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      3,
      1,
      (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      4,
      2,
      (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      5,
      2,
      (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      101,
      0,
      (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      102,
      0,
      (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v12 = SummonEffectComponent_TypeInfo;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v12 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->rarityToColor, (int64_t)v3, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall SummonEffectComponent__StopRarityAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *Component_object; // x0
  __int64 v4; // x1
  HutongGames_PlayMaker_FsmVariables_o *v5; // x20
  System_String_o *Value; // x0
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v8; // x20
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0

  if ( (byte_4BD8C5E & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&SummonEffectComponent_TypeInfo);
    byte_4BD8C5E = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0LL);
  v5 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v5 )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                         v5,
                                         SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                                         0LL);
  if ( !Component_object )
    goto LABEL_22;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v8 = Value;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0LL, 0LL) && !System_String__IsNullOrEmpty(v8, 0LL) )
  {
    Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
    if ( Component_object )
    {
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)Component_object, v8, 0LL) )
        return;
      Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
      if ( Component_object )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)Component_object,
                                                   v8,
                                                   0LL);
        Component_object = (PlayMakerFSM_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
        if ( ((unsigned __int8)Component_object & 1) == 0 )
          return;
        if ( Item )
        {
          length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0LL);
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, length, 0LL);
          UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 1, 0LL);
          Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
          if ( Component_object )
          {
            UnityEngine_Animation__Sample((UnityEngine_Animation_o *)Component_object, 0LL);
            UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 0, 0LL);
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__stopSe(0.0, 0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1C22094(Component_object, v4);
  }
}


void __fastcall SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4BD8C5D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____77649048);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8C5D = 1;
  }
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(effAnimation, 0LL, 0LL)
    || System_String__IsNullOrEmpty(this->fields.effAnimName, 0LL) )
  {
    return;
  }
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  if ( !UnityEngine_Animation__IsPlaying(ComponentsInChildren_object, this->fields.effAnimName, 0LL) )
    return;
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                             ComponentsInChildren_object,
                                             this->fields.effAnimName,
                                             0LL);
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
  {
    if ( Item )
    {
      length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0LL);
      UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, length, 0LL);
      UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 1, 0LL);
      ComponentsInChildren_object = this->fields.effAnimation;
      if ( ComponentsInChildren_object )
      {
        UnityEngine_Animation__Sample(ComponentsInChildren_object, 0LL);
        UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)Item, 0, 0LL);
        goto LABEL_14;
      }
    }
LABEL_27:
    sub_1C22094(ComponentsInChildren_object, v4);
  }
LABEL_14:
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                             1,
                                                             (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____77649048);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  klass = ComponentsInChildren_object[1].klass;
  v9 = ComponentsInChildren_object;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1C2209C(ComponentsInChildren_object, v4);
      v11 = (UnityEngine_Object_o *)*((_QWORD *)&v9[1].monitor + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)v11,
                                                                   0LL);
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object, 0, 0LL);
      }
      LODWORD(klass) = v9[1].klass;
    }
  }
}


void __fastcall SummonEffectComponent__UpdateCardParam(SummonEffectComponent_o *this, const MethodInfo *method)
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int v34; // w9
  int v35; // w22
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20

  if ( (byte_4BD8C57 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SummonEffectComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_8205/*"IsNewCard"*/);
    sub_1C21E38(&StringLiteral_18591/*"countIndex"*/);
    sub_1C21E38(&StringLiteral_8218/*"IsRankUp"*/);
    sub_1C21E38(&StringLiteral_8222/*"IsSkipStop"*/);
    sub_1C21E38(&StringLiteral_8581/*"LimitCount"*/);
    sub_1C21E38(&StringLiteral_9764/*"NoticeRarity"*/);
    sub_1C21E38(&StringLiteral_4481/*"CardType"*/);
    sub_1C21E38(&StringLiteral_11369/*"Rarity"*/);
    sub_1C21E38(&StringLiteral_12881/*"ServantId"*/);
    byte_4BD8C57 = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_66;
  v5 = (PlayMakerFSM_o *)Component_object;
  Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_18591/*"countIndex"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = (void *)HutongGames_PlayMaker_FsmInt__get_Value(
                               (HutongGames_PlayMaker_FsmInt_o *)Component_object,
                               0LL);
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v6 = (int)Component_object;
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       (int32_t)Component_object,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v7 = *((_DWORD *)Component_object + 4);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v8 = *((_DWORD *)Component_object + 5);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v9 = *((_BYTE *)Component_object + 24);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v10 = *((unsigned __int8 *)Component_object + 25);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v11 = *((_DWORD *)Component_object + 7);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v12 = *((_DWORD *)Component_object + 8);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v13 = *((_DWORD *)Component_object + 9);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  v14 = *((_BYTE *)Component_object + 40);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_12881/*"ServantId"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v7;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8581/*"LimitCount"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v8;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8218/*"IsRankUp"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v9;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8222/*"IsSkipStop"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v14;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  v15 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v15 )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v15,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)((char *)Component_object + 56), 0LL, v16, v17, v18, v19, v20, v21);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)((char *)Component_object + 56), 0LL, v22, v23, v24, v25, v26, v27);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)((char *)Component_object + 56), 0LL, v28, v29, v30, v31, v32, v33);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8205/*"IsNewCard"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v10 != 0 || v12 == 0;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_9764/*"NoticeRarity"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v11;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_4481/*"CardType"*/,
                       0LL);
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
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_11369/*"Rarity"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v35;
  firstTr = (UnityEngine_Object_o *)this->fields.firstTr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(firstTr, 0LL, 0LL) )
  {
    firstTPeelr = (UnityEngine_Object_o *)this->fields.firstTPeelr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(firstTPeelr, 0LL, 0LL) )
    {
      Component_object = this->fields.firstTr;
      if ( Component_object )
      {
        Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
        if ( Component_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
          Component_object = this->fields.firstTPeelr;
          if ( Component_object )
          {
            Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
            if ( Component_object )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_66:
      sub_1C22094(Component_object, v4);
    }
  }
}


void __fastcall SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v3; // x21
  int64_t Component_object; // x0
  System_String_c *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  PlayMakerFSM_o *v12; // x23
  int32_t v13; // w19
  int v14; // w28
  int v15; // w26
  int v16; // w22
  unsigned int v17; // w25
  char v18; // w27
  System_Collections_Generic_List_object__o *v19; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  HutongGames_PlayMaker_FsmVariables_o *v26; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int v33; // w22
  HutongGames_PlayMaker_FsmVariables_o *v34; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_o *v54; // x24
  float v55; // s8
  System_String_o *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_o *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_String_o *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_String_o *v77; // x0
  System_String_o **v78; // x19
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v86; // x24
  UnityEngine_Transform_o *v87; // x22
  int32_t Item; // w25
  _BOOL4 v89; // w29
  System_Collections_Generic_List_object__o *GachaBehaviors; // x0
  System_Collections_Generic_List_object__o *v91; // x22
  System_Collections_Generic_Dictionary_object__object__o *v92; // x26
  __int64 *v93; // x22
  GachaBehaviorMaster_c *v94; // x0
  int v95; // w29
  Il2CppObject *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  __int64 v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  __int64 v106; // x8
  int32_t v107; // w0
  GachaBehaviorMaster_c *v108; // x0
  GachaBehaviorMaster_c *v109; // x0
  int v110; // w8
  GachaBehaviorMaster_c *v111; // x0
  GachaBehaviorMaster_c *v112; // x0
  int v113; // w8
  GachaBehaviorMaster_c *v114; // x0
  GachaBehaviorMaster_c *v115; // x0
  int v116; // w8
  GachaBehaviorMaster_c *v117; // x0
  GachaBehaviorMaster_c *v118; // x0
  int v119; // w8
  GachaBehaviorMaster_c *v120; // x0
  _BOOL4 v121; // w10
  HutongGames_PlayMaker_FsmVariables_o *v122; // x22
  HutongGames_PlayMaker_FsmString_o *v123; // x0
  GachaBehaviorMaster_c *v124; // x8
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x8
  GachaBehaviorMaster_c *v132; // x0
  HutongGames_PlayMaker_FsmVariables_o *v133; // x22
  HutongGames_PlayMaker_FsmString_o *v134; // x0
  GachaBehaviorMaster_c *v135; // x8
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  GachaBehaviorMaster_c *v142; // x0
  HutongGames_PlayMaker_FsmVariables_o *v143; // x22
  HutongGames_PlayMaker_FsmString_o *v144; // x0
  GachaBehaviorMaster_c *v145; // x8
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  UnityEngine_Object_o *prevObject; // x22
  struct UnityEngine_GameObject_o **p_prevObject; // x26
  int v154; // w9
  int32_t v155; // w8
  UnityEngine_Object_o *v156; // x22
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v164; // x28
  bool v165; // w28
  UnityEngine_GameObject_o *v166; // x22
  Il2CppObject *v167; // x28
  System_Action_o *v168; // x25
  System_Action_o *v169; // x25
  UnityEngine_Component_o *v170; // x22
  UnityEngine_Transform_o *v171; // x28
  UnityEngine_GameObject_o *v172; // x0
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  System_String_o *v179; // x24
  System_String_o *v180; // x22
  UnityEngine_Transform_o *v181; // x0
  UnityEngine_Component_o *v182; // x26
  UnityEngine_Transform_o *v183; // x0
  UnityEngine_Component_o *v184; // x24
  int32_t v185; // w22
  int v186; // w8
  UnityEngine_Transform_o *v187; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v189; // x3
  UnityEngine_Transform_o *v190; // x0
  UnityEngine_Transform_o *v191; // x0
  const MethodInfo *v192; // x3
  UnityEngine_Transform_o *v193; // x0
  UnityEngine_Transform_o *v194; // x1
  const MethodInfo *v195; // x3
  SummonEffectComponent_o *v196; // x0
  int32_t v197; // w2
  System_String_o *v198; // x0
  System_String_o *v199; // x19
  System_String_o *v200; // x0
  System_String_o *v201; // x0
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  System_Collections_Generic_List_object__o *v208; // x8
  struct System_Object_array *items; // x9
  _QWORD *v210; // x10
  __int64 size; // x11
  System_String_o *v212; // x19
  Il2CppClass **v213; // x0
  UnityEngine_Transform_o *v214; // x0
  UnityEngine_Transform_o *v215; // x0
  UnityEngine_Transform_o *v216; // x0
  const MethodInfo *v217; // x3
  const MethodInfo *v218; // x1
  int64_t v219; // x24
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  Il2CppObject *v226; // x19
  intptr_t v227; // w8
  int32_t v228; // w19
  __int64 v229; // x21
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  Il2CppObject **v236; // x20
  int32_t LowerColorRarity; // w0
  int32_t v238; // w22
  int v239; // w8
  __int64 v240; // x20
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  Il2CppObject **v247; // x21
  int v248; // w8
  System_String_o *DesignCardPath; // x22
  int64_t v250; // x2
  int32_t v251; // w3
  System_String_o *v252; // x4
  BattleSetupInfo_o *v253; // x5
  FollowerInfo_o *v254; // x6
  PartyListViewItem_o *v255; // x7
  __int64 v256; // x8
  _QWORD *v257; // x9
  __int64 v258; // x10
  __int64 v259; // x8
  AssetLoader_LoadEndDataHandler_o *v260; // x20
  int64_t v261; // x2
  int32_t v262; // w3
  System_String_o *v263; // x4
  BattleSetupInfo_o *v264; // x5
  FollowerInfo_o *v265; // x6
  PartyListViewItem_o *v266; // x7
  System_Collections_Generic_List_object__o *v267; // x8
  struct System_Object_array *v268; // x9
  _QWORD *v269; // x10
  __int64 v270; // x11
  System_String_o *v271; // x19
  Il2CppClass **v272; // x0
  AssetLoader_LoadEndDataHandler_o *v273; // x20
  Il2CppObject *v274; // x24
  AssetLoader_LoadEndDataHandler_o *v275; // x23
  _DWORD *monitor; // x8
  System_String_o **v277; // x8
  int32_t *v278; // x21
  System_String_o *v279; // x19
  int64_t v280; // x2
  int32_t v281; // w3
  System_String_o *v282; // x4
  BattleSetupInfo_o *v283; // x5
  FollowerInfo_o *v284; // x6
  PartyListViewItem_o *v285; // x7
  __int64 v286; // x8
  _QWORD *v287; // x9
  __int64 v288; // x10
  __int64 v289; // x8
  AssetLoader_LoadEndDataHandler_o *v290; // x21
  System_String_o *v291; // x0
  AssetLoader_LoadEndDataHandler_o *v292; // x1
  System_String_o *v293; // x23
  int64_t v294; // x2
  int32_t v295; // w3
  System_String_o *v296; // x4
  BattleSetupInfo_o *v297; // x5
  FollowerInfo_o *v298; // x6
  PartyListViewItem_o *v299; // x7
  __int64 v300; // x8
  _QWORD *v301; // x9
  __int64 v302; // x10
  __int64 v303; // x8
  AssetLoader_LoadEndDataHandler_o *v304; // x24
  System_String_o *v305; // x22
  int64_t v306; // x2
  int32_t v307; // w3
  System_String_o *v308; // x4
  BattleSetupInfo_o *v309; // x5
  FollowerInfo_o *v310; // x6
  PartyListViewItem_o *v311; // x7
  __int64 v312; // x8
  _QWORD *v313; // x9
  __int64 v314; // x10
  __int64 v315; // x8
  AssetLoader_LoadEndDataHandler_o *v316; // x23
  int64_t v317; // x2
  int32_t v318; // w3
  System_String_o *v319; // x4
  BattleSetupInfo_o *v320; // x5
  FollowerInfo_o *v321; // x6
  PartyListViewItem_o *v322; // x7
  __int64 v323; // x8
  _QWORD *v324; // x9
  __int64 v325; // x10
  __int64 v326; // x8
  Il2CppObject *v327; // x21
  SummonEffectComponent___c__DisplayClass45_0_o *v328; // x0
  const MethodInfo *v329; // x1
  int v330; // [xsp+Ch] [xbp-D4h]
  int v331; // [xsp+10h] [xbp-D0h]
  int v332; // [xsp+14h] [xbp-CCh]
  int v333; // [xsp+18h] [xbp-C8h]
  _BOOL4 v334; // [xsp+1Ch] [xbp-C4h]
  int v335; // [xsp+34h] [xbp-ACh]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+38h] [xbp-A8h]
  int64_t v337; // [xsp+40h] [xbp-A0h]
  int32_t v338; // [xsp+50h] [xbp-90h]
  int key; // [xsp+54h] [xbp-8Ch]
  int32_t v340; // [xsp+58h] [xbp-88h]
  int32_t svtId; // [xsp+5Ch] [xbp-84h]
  int v342; // [xsp+60h] [xbp-80h] BYREF
  int v343; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v345; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v346; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v347; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v348; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v349; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8C58 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaBehaviorMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
    sub_1C21E38(&GachaBehaviorMaster_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Rarity_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&SummonEffectComponent_TypeInfo);
    sub_1C21E38(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__);
    sub_1C21E38(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__);
    sub_1C21E38(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__);
    sub_1C21E38(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__);
    sub_1C21E38(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__);
    sub_1C21E38(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
    sub_1C21E38(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__);
    sub_1C21E38(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__);
    sub_1C21E38(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
    sub_1C21E38(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__);
    sub_1C21E38(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__);
    sub_1C21E38(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
    sub_1C21E38(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__);
    sub_1C21E38(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
    sub_1C21E38(&StringLiteral_4477/*"CardScale"*/);
    sub_1C21E38(&StringLiteral_4478/*"CardSecondName"*/);
    sub_1C21E38(&StringLiteral_4469/*"CardFirstName"*/);
    sub_1C21E38(&StringLiteral_8205/*"IsNewCard"*/);
    sub_1C21E38(&StringLiteral_4476/*"CardRotName"*/);
    sub_1C21E38(&StringLiteral_4647/*"CodeCardRarity02"*/);
    sub_1C21E38(&StringLiteral_2830/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/);
    sub_1C21E38(&StringLiteral_11357/*"Rank"*/);
    sub_1C21E38(&StringLiteral_18591/*"countIndex"*/);
    sub_1C21E38(&StringLiteral_13329/*"SummonEffect"*/);
    sub_1C21E38(&StringLiteral_23200/*"rarity"*/);
    sub_1C21E38(&StringLiteral_8218/*"IsRankUp"*/);
    sub_1C21E38(&StringLiteral_16400/*"_0"*/);
    sub_1C21E38(&StringLiteral_4646/*"CodeCardRarity"*/);
    sub_1C21E38(&StringLiteral_8222/*"IsSkipStop"*/);
    sub_1C21E38(&StringLiteral_8581/*"LimitCount"*/);
    sub_1C21E38(&StringLiteral_9764/*"NoticeRarity"*/);
    sub_1C21E38(&StringLiteral_2829/*"BACKSIDE_CLASS_IMAGE_ID"*/);
    sub_1C21E38(&StringLiteral_4481/*"CardType"*/);
    sub_1C21E38(&StringLiteral_4475/*"CardNodeName"*/);
    sub_1C21E38(&StringLiteral_4470/*"CardFirstPeelName"*/);
    sub_1C21E38(&StringLiteral_24102/*"summon_rarity_0"*/);
    sub_1C21E38(&StringLiteral_11369/*"Rarity"*/);
    sub_1C21E38(&StringLiteral_12881/*"ServantId"*/);
    byte_4BD8C58 = 1;
  }
  entity = 0LL;
  v343 = 0;
  v3 = sub_1C22084(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_376;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  this->fields.isNoSkipAll = 0;
  Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_376;
  v12 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_18591/*"countIndex"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Component_object, 0LL);
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v13 = Component_object;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                Component_object,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  svtId = *(_DWORD *)(Component_object + 16);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v340 = *(_DWORD *)(Component_object + 20);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v14 = *(unsigned __int8 *)(Component_object + 24);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v15 = *(unsigned __int8 *)(Component_object + 25);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v16 = *(_DWORD *)(Component_object + 28);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v17 = *(_DWORD *)(Component_object + 32);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(Component_object + 36);
  Component_object = (int64_t)this->fields.SummonInfos;
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Component_object,
                                v13,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v18 = *(_BYTE *)(Component_object + 40);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v337 = *(_QWORD *)(Component_object + 48);
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v5);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v19;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._releaseAssetPath, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_12881/*"ServantId"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = svtId;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8581/*"LimitCount"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v340;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8218/*"IsRankUp"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v14;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8222/*"IsSkipStop"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v18;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  v26 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v26 )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                v26,
                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_QWORD *)(Component_object + 56) = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)(Component_object + 56), 0LL, v27, v28, v29, v30, v31, v32);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8205/*"IsNewCard"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v15 != 0 || v17 == 0;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_9764/*"NoticeRarity"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v16;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4481/*"CardType"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = *(_DWORD *)(v3 + 56);
  if ( v17 - 3 >= 3 )
    v33 = v17 ? 0 : 3;
  else
    v33 = dword_C37F74[v17 - 3];
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_11369/*"Rarity"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v33;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  v34 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  key = v17;
  if ( !v34 )
    goto LABEL_376;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v34,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0LL);
  v342 = v33;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v342, v36, v37, v38);
  Component_object = (int64_t)System_String__Concat((Il2CppObject *)StringLiteral_24102/*"summon_rarity_0"*/, v39, 0LL);
  if ( !FsmString )
    goto LABEL_376;
  FsmString->fields.value = (struct System_String_o *)Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)&FsmString->fields.value, Component_object, v40, v41, v42, v43, v44, v45);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13329/*"SummonEffect"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, 0LL);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effect, (int64_t)Value, v48, v49, v50, v51, v52, v53);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4475/*"CardNodeName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v54 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4477/*"CardScale"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v55 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_object, 0LL);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4469/*"CardFirstName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v56 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v3 + 24) = v56;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)v56, v57, v58, v59, v60, v61, v62);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4470/*"CardFirstPeelName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v63 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v3 + 32) = v63;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)v63, v64, v65, v66, v67, v68, v69);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4478/*"CardSecondName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v70 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v3 + 40) = v70;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)v70, v71, v72, v73, v74, v75, v76);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4476/*"CardRotName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v77 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v3 + 48) = v77;
  v78 = (System_String_o **)(v3 + 48);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 48), (int64_t)v77, v79, v80, v81, v82, v83, v84);
  Component_object = (int64_t)*p_effect;
  if ( !*p_effect )
    goto LABEL_376;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  Component_object = (int64_t)TransformHelper__getNodeFromName(transform, v54, 1, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  v86 = (UnityEngine_Component_o *)Component_object;
  Component_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
  Component_object = (int64_t)UnityEngine_Component__get_gameObject(v86, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  v87 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4BD6BB6 )
  {
    Component_object = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v87 )
    goto LABEL_376;
  UnityEngine_Transform__set_localScale(v87, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v5 = (System_String_c *)v17;
  Component_object = (int64_t)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_object )
    goto LABEL_376;
  Item = System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)Component_object,
           v17,
           (const MethodInfo_32E33E4 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Component_object,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_object )
    goto LABEL_376;
  v89 = v14 != 0 && Item != 0;
  GachaBehaviors = (System_Collections_Generic_List_object__o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                                  (GachaBehaviorMaster_o *)Component_object,
                                                                  this->fields.gachaId,
                                                                  svtId,
                                                                  0LL);
  v338 = Item;
  if ( !GachaBehaviors || (v91 = GachaBehaviors, GachaBehaviors->fields._size < 1) )
  {
    v331 = -1;
    v332 = -1;
    v330 = -1;
    v335 = -1;
    v333 = -1;
    goto LABEL_185;
  }
  v334 = v14 != 0 && Item != 0;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                GachaBehaviors,
                                0,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !*(_QWORD *)(Component_object + 24) )
  {
    v331 = -1;
    v332 = -1;
    v330 = -1;
    v335 = -1;
    v333 = -1;
    goto LABEL_184;
  }
  if ( v15 )
    this->fields.isNoSkipAll = 1;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v91,
                                0,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v92 = *(System_Collections_Generic_Dictionary_object__object__o **)(Component_object + 24);
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  if ( !v92 )
    goto LABEL_376;
  v93 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v92,
         (Il2CppObject *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v94 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v94 = GachaBehaviorMaster_TypeInfo;
    }
    v96 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v92,
            (Il2CppObject *)v94->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
            (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v93 = (__int64 *)v96;
    if ( v96 )
    {
      v5 = string_TypeInfo;
      if ( (System_String_c *)v96->klass != string_TypeInfo )
        goto LABEL_379;
    }
    Component_object = (int64_t)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v93,
            (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_object = (int64_t)this->fields.upAnimationNameList;
      if ( !Component_object )
        goto LABEL_376;
      v103 = *(_QWORD *)(Component_object + 16);
      v104 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v103 )
        goto LABEL_376;
      v105 = *(int *)(Component_object + 24);
      if ( (unsigned int)v105 >= *(_DWORD *)(v103 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v93,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
      }
      else
      {
        v106 = v103 + 8 * v105;
        *(_DWORD *)(Component_object + 24) = v105 + 1;
        *(_QWORD *)(v106 + 32) = v93;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v106 + 32), (int64_t)v93, v97, v98, v99, v100, v101, v102);
      }
    }
    Component_object = (int64_t)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    v107 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)Component_object,
             (Il2CppObject *)v93,
             (const MethodInfo_364FD54 *)Method_System_Collections_Generic_List_string__IndexOf__);
    v93 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
    v95 = v107;
  }
  else
  {
    v95 = -1;
  }
  v108 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v108 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v92,
         (Il2CppObject *)v108->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v109 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v109 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v92,
                                  (Il2CppObject *)v109->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v110 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v110 = -1;
  }
  v111 = GachaBehaviorMaster_TypeInfo;
  v335 = v110;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v111 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v92,
         (Il2CppObject *)v111->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v112 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v112 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v92,
                                  (Il2CppObject *)v112->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v113 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v113 = -1;
  }
  v114 = GachaBehaviorMaster_TypeInfo;
  v330 = v113;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v114 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v92,
         (Il2CppObject *)v114->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v115 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v115 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v92,
                                  (Il2CppObject *)v115->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v116 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v116 = -1;
  }
  v117 = GachaBehaviorMaster_TypeInfo;
  v332 = v116;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v117 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v92,
          (Il2CppObject *)v117->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v119 = -1;
    goto LABEL_142;
  }
  v118 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v118 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v92,
                                (Il2CppObject *)v118->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_377:
    sub_1C22354(Component_object);
    goto LABEL_378;
  }
  v119 = *(_DWORD *)j_il2cpp_object_unbox_0();
LABEL_142:
  v120 = GachaBehaviorMaster_TypeInfo;
  v121 = v14 != 0 && Item != 0;
  v331 = v119;
  if ( v95 != -1 )
    v121 = v335 != -1;
  v334 = v121;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v120 = GachaBehaviorMaster_TypeInfo;
  }
  v333 = v95;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v92,
         (Il2CppObject *)v120->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_9764/*"NoticeRarity"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    *(_DWORD *)(Component_object + 56) = 3;
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
    v122 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    if ( !v122 )
      goto LABEL_376;
    v123 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v122,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0LL);
    v124 = GachaBehaviorMaster_TypeInfo;
    v93 = (__int64 *)v123;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v124 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v92,
                                  (Il2CppObject *)v124->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v93 )
      goto LABEL_376;
    v131 = Component_object;
    if ( Component_object && *(System_String_c **)Component_object != string_TypeInfo )
      goto LABEL_378;
    v93[7] = Component_object;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v93 + 7), Component_object, v125, v126, v127, v128, v129, v130);
  }
  v132 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v132 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v92,
          (Il2CppObject *)v132->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_172:
    v142 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v142 = GachaBehaviorMaster_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v92,
           (Il2CppObject *)v142->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
      v143 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
      if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      if ( !v143 )
        goto LABEL_376;
      v144 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
               v143,
               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
               0LL);
      v145 = GachaBehaviorMaster_TypeInfo;
      v93 = (__int64 *)v144;
      if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
        v145 = GachaBehaviorMaster_TypeInfo;
      }
      v89 = v334;
      Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    v92,
                                    (Il2CppObject *)v145->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                    (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v93 )
        goto LABEL_376;
      v131 = Component_object;
      if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
      {
        v93[7] = Component_object;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v93 + 7), Component_object, v146, v147, v148, v149, v150, v151);
        goto LABEL_185;
      }
      goto LABEL_378;
    }
LABEL_184:
    v89 = v334;
LABEL_185:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v89 )
      v154 = 4;
    else
      v154 = 3;
    if ( this->fields.EditMode )
      v155 = 0;
    else
      v155 = v154;
    this->fields._counter = 0;
    this->fields._counterMax = v155;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(prevObject, 0LL, 0LL) )
    {
      v156 = (UnityEngine_Object_o *)*p_prevObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v156, 0LL);
      *p_prevObject = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.prevObject, 0LL, v157, v158, v159, v160, v161, v162);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v86, 0LL);
      v164 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v164,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0LL);
      Component_object = (int64_t)CharaGraphManager__CreateCommandTexturePrefab(gameObject, svtId, 0, v164, 0LL);
    }
    else
    {
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0LL;
      if ( !Component_object )
        goto LABEL_376;
      v165 = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               &entity,
               v337,
               (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v166 = UnityEngine_Component__get_gameObject(v86, 0LL);
      if ( v165 )
      {
        v167 = entity;
        v168 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v168,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0LL);
        Component_object = (int64_t)CharaGraphManager__CreateTexturePrefab_39152092(
                                      v166,
                                      (UserServantEntity_o *)v167,
                                      0,
                                      v168,
                                      0LL);
      }
      else
      {
        v169 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v169,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0LL);
        Component_object = (int64_t)CharaGraphManager__CreateTexturePrefab(v166, svtId, v340, 0, 1, 0, v169, 0, 0LL);
      }
    }
    v170 = (UnityEngine_Component_o *)Component_object;
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
    v171 = (UnityEngine_Transform_o *)Component_object;
    if ( !byte_4BD6BB1 )
    {
      Component_object = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    if ( !v171 )
      goto LABEL_376;
    UnityEngine_Transform__set_localPosition(v171, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Component_object = (int64_t)UnityEngine_Component__get_transform(v170, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    v345.fields.x = v55;
    v345.fields.y = v55;
    v345.fields.z = v55;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v345, 0LL);
    Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                  v86,
                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    v172 = UnityEngine_Component__get_gameObject(v170, 0LL);
    *p_prevObject = v172;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.prevObject,
      (int64_t)v172,
      v173,
      v174,
      v175,
      v176,
      v177,
      v178);
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4646/*"CodeCardRarity"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    v179 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4647/*"CodeCardRarity02"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_object,
                                  0LL);
    if ( !*p_effect )
      goto LABEL_376;
    v180 = (System_String_o *)Component_object;
    v181 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
    Component_object = (int64_t)TransformHelper__getNodeFromName(v181, v179, 1, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !*p_effect )
      goto LABEL_376;
    v182 = (UnityEngine_Component_o *)Component_object;
    v183 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
    Component_object = (int64_t)TransformHelper__getNodeFromName(v183, v180, 1, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !v182 )
      goto LABEL_376;
    v184 = (UnityEngine_Component_o *)Component_object;
    Component_object = (int64_t)UnityEngine_Component__get_gameObject(v182, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
    if ( !v184 )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__get_gameObject(v184, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
    if ( this->fields.EditMode )
    {
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11357/*"Rank"*/,
                                    0LL);
      if ( v89 )
      {
        v185 = v338;
        if ( !Component_object )
          goto LABEL_376;
        v186 = v338 == 2 ? 2 : 1;
        *(_DWORD *)(Component_object + 56) = v186;
        Component_object = (int64_t)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v187 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        NodeFromName = TransformHelper__getNodeFromName(v187, *(System_String_o **)(v3 + 24), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, v338 - 1, v189);
        Component_object = (int64_t)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v190 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v191 = TransformHelper__getNodeFromName(v190, *(System_String_o **)(v3 + 32), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, v191, v338 - 1, v192);
        Component_object = (int64_t)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v193 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v194 = TransformHelper__getNodeFromName(v193, *v78, 1, 0LL);
        v196 = this;
        v197 = v338 - 1;
      }
      else
      {
        v185 = v338;
        if ( !Component_object )
          goto LABEL_376;
        *(_DWORD *)(Component_object + 56) = 0;
        Component_object = (int64_t)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v214 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v194 = TransformHelper__getNodeFromName(v214, *v78, 1, 0LL);
        v196 = this;
        v197 = v338;
      }
      SummonEffectComponent__ChangeClassCardColor(v196, v194, v197, v195);
      Component_object = (int64_t)this->fields.effect;
      if ( Component_object )
      {
        v215 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v216 = TransformHelper__getNodeFromName(v215, *(System_String_o **)(v3 + 40), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, v216, v185, v217);
        SummonEffectComponent__CompleteCallback(this, v218);
        return;
      }
LABEL_376:
      sub_1C22094(Component_object, v5);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11357/*"Rank"*/,
                                    0LL);
      if ( !Component_object )
        goto LABEL_376;
      *(_DWORD *)(Component_object + 56) = 3;
      v343 = key;
      Component_object = (int64_t)UnityEngine_Component__get_gameObject(v182, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
      v198 = System_Int32__ToString((int32_t)&v343, 0LL);
      v199 = System_String__Concat_63126736(
               (System_String_o *)StringLiteral_23200/*"rarity"*/,
               v198,
               (System_String_o *)StringLiteral_16400/*"_0"*/,
               0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v182, v199, 0LL);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v182->klass[2]._1.typeMetadataHandle)(
        v182,
        v182->klass[2]._1.interopData);
      Component_object = (int64_t)UnityEngine_Component__get_gameObject(v184, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
      v200 = System_Int32__ToString((int32_t)&v343, 0LL);
      v201 = System_String__Concat_63126736(
               (System_String_o *)StringLiteral_23200/*"rarity"*/,
               v200,
               (System_String_o *)StringLiteral_16400/*"_0"*/,
               0LL);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v184, v201, 0LL);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v184->klass[2]._1.typeMetadataHandle)(
        v184,
        v184->klass[2]._1.interopData);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v182, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v346.fields.x = 0.0;
      v346.fields.z = 0.0;
      v346.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v346, 0LL);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v182, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v347.fields.x = v55;
      v347.fields.y = v55;
      v347.fields.z = v55;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v347, 0LL);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v184, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v348.fields.x = 0.0;
      v348.fields.z = 0.0;
      v348.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v348, 0LL);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v184, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v349.fields.x = v55;
      v349.fields.y = v55;
      v349.fields.z = v55;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v349, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    1,
                                    key,
                                    0LL);
      v208 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      items = v208->fields._items;
      v210 = Method_System_Collections_Generic_List_string__Add__;
      ++v208->fields._version;
      if ( !items )
        goto LABEL_376;
      size = v208->fields._size;
      v212 = (System_String_o *)Component_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v208,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
      }
      else
      {
        v213 = &items->obj.klass + size;
        v208->fields._size = size + 1;
        v213[4] = (Il2CppClass *)v212;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v213 + 4), (int64_t)v212, v202, v203, v204, v205, v206, v207);
      }
      v260 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v260,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v212, v260, 1, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    101,
                                    key,
                                    0LL);
      v267 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v268 = v267->fields._items;
      v269 = Method_System_Collections_Generic_List_string__Add__;
      ++v267->fields._version;
      if ( !v268 )
        goto LABEL_376;
      v270 = v267->fields._size;
      v271 = (System_String_o *)Component_object;
      if ( (unsigned int)v270 >= v268->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v267,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
      }
      else
      {
        v272 = &v268->obj.klass + v270;
        v267->fields._size = v270 + 1;
        v272[4] = (Il2CppClass *)v271;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v272 + 4), (int64_t)v271, v261, v262, v263, v264, v265, v266);
      }
      v273 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v273,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
        0LL);
    }
    else
    {
      v219 = sub_1C22084(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v219, 0LL);
      if ( !v219 )
        goto LABEL_376;
      *(_QWORD *)(v219 + 24) = v3;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v219 + 24), v3, v220, v221, v222, v223, v224, v225);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Component_object )
        goto LABEL_376;
      v226 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               svtId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Component_object )
        goto LABEL_376;
      ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Component_object, svtId, v340, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !v226 )
        goto LABEL_376;
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                                    (int32_t)v226[5].klass,
                                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Component_object )
        goto LABEL_376;
      v227 = *(_DWORD *)(Component_object + 40);
      if ( v332 != -1 )
        v227 = v332;
      *(_DWORD *)(v219 + 16) = v227;
      if ( v331 == -1 )
        v228 = key;
      else
        v228 = v331;
      if ( !v89 )
      {
        v240 = sub_1C22084(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v240, 0LL);
        if ( !v240 )
          goto LABEL_376;
        *(_QWORD *)(v240 + 24) = v219;
        v247 = (Il2CppObject **)(v240 + 24);
        sub_1C21DDC((PartyOrganizationUtility_o *)(v240 + 24), v219, v241, v242, v243, v244, v245, v246);
        Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
        if ( !Component_object )
          goto LABEL_376;
        Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11357/*"Rank"*/,
                                      0LL);
        if ( !Component_object )
          goto LABEL_376;
        v248 = v333;
        if ( v333 == -1 )
          v248 = 0;
        *(_DWORD *)(Component_object + 56) = v248;
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v247 || !Component_object )
          goto LABEL_376;
        DesignCardPath = DesignCardManager__GetDesignCardPath(
                           (DesignCardManager_o *)Component_object,
                           (int32_t)(*v247)[1].klass,
                           v228,
                           0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__isExistAssetStorage(DesignCardPath, 0LL);
        if ( (Component_object & 1) == 0 )
        {
          if ( !*v247 )
            goto LABEL_376;
          LODWORD((*v247)[1].klass) = 1;
          Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v247 || !Component_object )
            goto LABEL_376;
          v228 = 3;
          DesignCardPath = DesignCardManager__GetDesignCardPath(
                             (DesignCardManager_o *)Component_object,
                             (int32_t)(*v247)[1].klass,
                             3,
                             0LL);
        }
        Component_object = (int64_t)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v256 = *(_QWORD *)(Component_object + 16);
        v257 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v256 )
          goto LABEL_376;
        v258 = *(int *)(Component_object + 24);
        if ( (unsigned int)v258 >= *(_DWORD *)(v256 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)DesignCardPath,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v257[4] + 192LL) + 112LL));
        }
        else
        {
          v259 = v256 + 8 * v258;
          *(_DWORD *)(Component_object + 24) = v258 + 1;
          *(_QWORD *)(v259 + 32) = DesignCardPath;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)(v259 + 32),
            (int64_t)DesignCardPath,
            v250,
            v251,
            v252,
            v253,
            v254,
            v255);
        }
        v274 = *v247;
        v275 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v275,
          v274,
          Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__loadAssetStorage(DesignCardPath, v275, 1, 0LL);
        if ( !*v247 )
          goto LABEL_376;
        monitor = (*v247)[1].monitor;
        if ( !monitor )
          goto LABEL_376;
        v277 = (System_String_o **)(monitor[14] == 1 ? &StringLiteral_2830/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/ : &StringLiteral_2829/*"BACKSIDE_CLASS_IMAGE_ID"*/);
        *(_DWORD *)(v240 + 16) = ConstantMaster__getValue(*v277, 0LL);
        v278 = (int32_t *)(v240 + 16);
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v279 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v278, v228, 0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( !AssetManager__isExistAssetStorage(v279, 0LL) )
        {
          Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_376;
          v279 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v278, 3, 0LL);
        }
        Component_object = (int64_t)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v286 = *(_QWORD *)(Component_object + 16);
        v287 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v286 )
          goto LABEL_376;
        v288 = *(int *)(Component_object + 24);
        if ( (unsigned int)v288 >= *(_DWORD *)(v286 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v279,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v287[4] + 192LL) + 112LL));
        }
        else
        {
          v289 = v286 + 8 * v288;
          *(_DWORD *)(Component_object + 24) = v288 + 1;
          *(_QWORD *)(v289 + 32) = v279;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v289 + 32), (int64_t)v279, v280, v281, v282, v283, v284, v285);
        }
        v290 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v290,
          (Il2CppObject *)v240,
          Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v291 = v279;
        v292 = v290;
        goto LABEL_375;
      }
      v229 = sub_1C22084(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v229, 0LL);
      if ( !v229 )
        goto LABEL_376;
      *(_QWORD *)(v229 + 24) = v219;
      v236 = (Il2CppObject **)(v229 + 24);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v229 + 24), v219, v230, v231, v232, v233, v234, v235);
      if ( !*(_QWORD *)(v229 + 24) )
        goto LABEL_376;
      *(_DWORD *)(v229 + 16) = *(_DWORD *)(*(_QWORD *)(v229 + 24) + 16LL);
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      LowerColorRarity = Rarity__getLowerColorRarity(v228, 0LL);
      if ( v335 != -1 )
        *(_DWORD *)(v229 + 16) = v335;
      v238 = v330 == -1 ? LowerColorRarity : v330;
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11357/*"Rank"*/,
                                    0LL);
      if ( v333 == -1 )
      {
        if ( !Component_object )
          goto LABEL_376;
        v239 = v338 == 2 ? 2 : 1;
      }
      else
      {
        v239 = v333;
        if ( !Component_object )
          goto LABEL_376;
      }
      *(_DWORD *)(Component_object + 56) = v239;
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v293 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v229 + 16),
               v238,
               0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__isExistAssetStorage(v293, 0LL) )
      {
        *(_DWORD *)(v229 + 16) = 1;
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v238 = 3;
        v293 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v229 + 16),
                 3,
                 0LL);
      }
      Component_object = (int64_t)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v300 = *(_QWORD *)(Component_object + 16);
      v301 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v300 )
        goto LABEL_376;
      v302 = *(int *)(Component_object + 24);
      if ( (unsigned int)v302 >= *(_DWORD *)(v300 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v293,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v301[4] + 192LL) + 112LL));
      }
      else
      {
        v303 = v300 + 8 * v302;
        *(_DWORD *)(Component_object + 24) = v302 + 1;
        *(_QWORD *)(v303 + 32) = v293;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v303 + 32), (int64_t)v293, v294, v295, v296, v297, v298, v299);
      }
      v304 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v304,
        (Il2CppObject *)v229,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v293, v304, 1, 0LL);
      *(_DWORD *)(v229 + 20) = ConstantMaster__getValue((System_String_o *)StringLiteral_2829/*"BACKSIDE_CLASS_IMAGE_ID"*/, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v305 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v229 + 20),
               v238,
               0LL);
      if ( !AssetManager__isExistAssetStorage(v305, 0LL) )
      {
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v305 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v229 + 20),
                 3,
                 0LL);
      }
      Component_object = (int64_t)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v312 = *(_QWORD *)(Component_object + 16);
      v313 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v312 )
        goto LABEL_376;
      v314 = *(int *)(Component_object + 24);
      if ( (unsigned int)v314 >= *(_DWORD *)(v312 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v305,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v313[4] + 192LL) + 112LL));
      }
      else
      {
        v315 = v312 + 8 * v314;
        *(_DWORD *)(Component_object + 24) = v314 + 1;
        *(_QWORD *)(v315 + 32) = v305;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v315 + 32), (int64_t)v305, v306, v307, v308, v309, v310, v311);
      }
      v316 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v316,
        (Il2CppObject *)v229,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v305, v316, 1, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !*v236 || !Component_object )
        goto LABEL_376;
      v271 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               (int32_t)(*v236)[1].klass,
               v228,
               0LL);
      Component_object = AssetManager__isExistAssetStorage(v271, 0LL);
      if ( (Component_object & 1) == 0 )
      {
        if ( !*v236 )
          goto LABEL_376;
        LODWORD((*v236)[1].klass) = 1;
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v236 || !Component_object )
          goto LABEL_376;
        v271 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 (int32_t)(*v236)[1].klass,
                 3,
                 0LL);
      }
      Component_object = (int64_t)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v323 = *(_QWORD *)(Component_object + 16);
      v324 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v323 )
        goto LABEL_376;
      v325 = *(int *)(Component_object + 24);
      if ( (unsigned int)v325 >= *(_DWORD *)(v323 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v271,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v324[4] + 192LL) + 112LL));
      }
      else
      {
        v326 = v323 + 8 * v325;
        *(_DWORD *)(Component_object + 24) = v325 + 1;
        *(_QWORD *)(v326 + 32) = v271;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v326 + 32), (int64_t)v271, v317, v318, v319, v320, v321, v322);
      }
      v327 = *v236;
      v273 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v273,
        v327,
        Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    v291 = v271;
    v292 = v273;
LABEL_375:
    AssetManager__loadAssetStorage(v291, v292, 1, 0LL);
    return;
  }
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4481/*"CardType"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = 4;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v12, 0LL);
  v133 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v133 )
    goto LABEL_376;
  v134 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v133,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0LL);
  v135 = GachaBehaviorMaster_TypeInfo;
  v93 = (__int64 *)v134;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v135 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v92,
                                (Il2CppObject *)v135->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v93 )
    goto LABEL_376;
  v131 = Component_object;
  if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
  {
    v93[7] = Component_object;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v93 + 7), Component_object, v136, v137, v138, v139, v140, v141);
    goto LABEL_172;
  }
LABEL_378:
  sub_1C22354(v131);
LABEL_379:
  sub_1C22354(v93);
  SummonEffectComponent___c__DisplayClass45_0___ctor(v328, v329);
}


void __fastcall SummonEffectComponent___endAnimation_b__43_0(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Il2CppObject *Component_object; // x0
  __int64 v13; // x1

  if ( (byte_4BD8C62 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_5590/*"END_FADE"*/);
    byte_4BD8C62 = 1;
  }
  p_effect = &this->fields.effect;
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effect, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)*p_effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v5, 0LL);
    *p_effect = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effect, 0LL, v6, v7, v8, v9, v10, v11);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    sub_1C22094(0LL, v13);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5590/*"END_FADE"*/, 0LL);
}


void __fastcall SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4BD8C56 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonEffectComponent__endAnimation_b__43_0__);
    byte_4BD8C56 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0LL);
  if ( !v5 )
    sub_1C22094(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0LL);
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
  bool v17; // w26
  bool v18; // w27

  v17 = isRankup;
  v18 = isNewCard;
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
    sub_1C22094(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct SummonEffectComponent_o *v14; // x21
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct SummonEffectComponent_o *v23; // x8
  struct SummonEffectComponent_o *v24; // x8
  struct SummonEffectComponent_o *v25; // x8
  DesignCardManager_o *v26; // x21
  UnityEngine_Transform_o *v27; // x0

  v4 = this;
  if ( (byte_4BD8C63 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4BD8C63 = 1;
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&_4__this->fields.firstTr,
    (int64_t)NodeFromName,
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
  v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v16 = TransformHelper__getNodeFromName(v15, v4->fields.cardFirstPeelName, 1, 0LL);
  v14->fields.firstTPeelr = v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->fields.firstTPeelr, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v23 = v4->fields.__4__this;
  if ( !v23 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v23->fields.firstTr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v24 = v4->fields.__4__this;
  if ( !v24 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v24->fields.firstTPeelr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v25 = v4->fields.__4__this;
  if ( !v25
    || (v26 = (DesignCardManager_o *)this,
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v25->fields.effect) == 0LL)
    || (v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)TransformHelper__getNodeFromName(
                                                                  v27,
                                                                  v4->fields.cardSecondName,
                                                                  1,
                                                                  0LL),
        !v26)
    || (DesignCardManager__SetupCardImage(v26, d, (UnityEngine_Transform_o *)this, 1, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_1C22094(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
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
  Il2CppObject *Component_object; // x20
  UnityEngine_Shader_o *v9; // x22
  UnityEngine_Material_o *v10; // x21
  UnityEngine_Texture_o *v11; // x22

  v4 = this;
  if ( (byte_4BD8C64 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C21E38(&StringLiteral_5057/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4BD8C64 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0LL);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5057/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0LL);
  v10 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v10, v9, 0LL);
  if ( !Component_object
    || (v11 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[26].method)(
                                         Component_object,
                                         Component_object->klass->vtable[27].methodPtr),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_object->klass->vtable[25].method)(
                                                                  Component_object,
                                                                  v10,
                                                                  Component_object->klass->vtable[26].methodPtr),
        !v10)
    || (UnityEngine_Material__set_mainTexture(v10, v11, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1C22094(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
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
  const MethodInfo *v6; // x1
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v9; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v10; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8

  if ( (byte_4BD8C65 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4BD8C65 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C22094(Instance, v6);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v6);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct SummonEffectComponent___c__DisplayClass45_0_o *v15; // x8
  struct SummonEffectComponent_o *v16; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v17; // x8
  UnityEngine_Transform_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
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
  if ( (byte_4BD8C66 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4BD8C66 = 1;
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&_4__this->fields.firstTr,
    (int64_t)NodeFromName,
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
                                                            0LL);
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  v18 = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v17->fields.cardFirstPeelName, 1, 0LL);
  v16->fields.firstTPeelr = v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->fields.firstTPeelr, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v25 = v4->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_25;
  v26 = v25->fields.__4__this;
  if ( !v26 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v26->fields.firstTr, v4->fields.classCardId, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v27 = v4->fields.CS___8__locals1;
  if ( !v27 )
    goto LABEL_25;
  v28 = v27->fields.__4__this;
  if ( !v28 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage(
    (DesignCardManager_o *)this,
    d,
    v28->fields.firstTPeelr,
    v4->fields.classCardId,
    0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
                                                                  0LL),
        (v32 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)TransformHelper__getNodeFromName(
                                                                  (UnityEngine_Transform_o *)this,
                                                                  v32->fields.cardSecondName,
                                                                  1,
                                                                  0LL),
        !v31)
    || (DesignCardManager__SetupCardImage(v31, d, (UnityEngine_Transform_o *)this, v4->fields.classCardId, 0LL),
        (v33 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)v33->fields.__4__this) == 0LL )
  {
LABEL_25:
    sub_1C22094(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
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

  if ( (byte_4BD8C67 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4BD8C67 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C22094(Instance, v6);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v6);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_2___UpdateCardTexture_b__6(
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

  if ( (byte_4BD8C68 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4BD8C68 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C22094(Instance, v6);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v6);
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
  if ( (byte_4BD8C69 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C21E38(&StringLiteral_15392/*"Unlit/Transparent Colored"*/);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_1C21E38(&StringLiteral_5057/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4BD8C69 = 1;
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
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0LL);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v11 = v4->fields.CS___8__locals3;
  if ( !v11 )
    goto LABEL_22;
  v12 = v11->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_22;
  v13 = this;
  v14 = (System_String_o **)(v12->fields.cardType == 1 ? &StringLiteral_5057/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15392/*"Unlit/Transparent Colored"*/);
  v15 = UnityEngine_Shader__Find(*v14, 0LL);
  v16 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
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
    sub_1C22094(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
}