void __fastcall SummonEffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x1
  struct SummonEffectComponent_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct SummonEffectComponent_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  struct SummonEffectComponent_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  struct SummonEffectComponent_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  struct SummonEffectComponent_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x1
  struct SummonEffectComponent_StaticFields *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x1
  struct SummonEffectComponent_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct SummonEffectComponent_StaticFields *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7

  if ( (byte_4B12999 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonEffectComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_23930/*"summon_up_04"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_23928/*"summon_up_02"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_7116/*"GetAnimationName"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_23929/*"summon_up_03"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_23927/*"summon_up_01"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_11293/*"RarityAnimationName"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_15332/*"UpAnimationName"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_7729/*"InitializeAnimationName"*/, v22, v23);
    byte_4B12999 = 1;
  }
  SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION = (struct System_String_o *)StringLiteral_23927/*"summon_up_01"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SummonEffectComponent_TypeInfo->static_fields,
    StringLiteral_23927/*"summon_up_01"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v24 = StringLiteral_23928/*"summon_up_02"*/;
  static_fields = SummonEffectComponent_TypeInfo->static_fields;
  static_fields->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_23928/*"summon_up_02"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->RANKUP_TO_SILVER_ANIMATION,
    v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = StringLiteral_23929/*"summon_up_03"*/;
  v33 = SummonEffectComponent_TypeInfo->static_fields;
  v33->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_23929/*"summon_up_03"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->RANKUP_TO_GOLD_ANIMATION, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_23930/*"summon_up_04"*/;
  v41 = SummonEffectComponent_TypeInfo->static_fields;
  v41->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_23930/*"summon_up_04"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v41->RANKUP_COMMANDCODE_ANIMATION, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_15332/*"UpAnimationName"*/;
  v49 = SummonEffectComponent_TypeInfo->static_fields;
  v49->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15332/*"UpAnimationName"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->FSM_VARIABLE_UP_ANIMATION_NAME, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_7729/*"InitializeAnimationName"*/;
  v57 = SummonEffectComponent_TypeInfo->static_fields;
  v57->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7729/*"InitializeAnimationName"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v57->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = StringLiteral_11293/*"RarityAnimationName"*/;
  v65 = SummonEffectComponent_TypeInfo->static_fields;
  v65->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11293/*"RarityAnimationName"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->FSM_VARIABLE_RARITY_ANIMATION_NAME, v64, v66, v67, v68, v69, v70, v71);
  v72 = StringLiteral_7116/*"GetAnimationName"*/;
  v73 = SummonEffectComponent_TypeInfo->static_fields;
  v73->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7116/*"GetAnimationName"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v73->FSM_VARIABLE_GET_ANIMATION_NAME, v72, v74, v75, v76, v77, v78, v79);
  v80 = SummonEffectComponent_TypeInfo->static_fields;
  v80->rarityToColor = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v80->rarityToColor, 0LL, v81, v82, v83, v84, v85, v86);
}


void __fastcall SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  il2cpp_array_size_t max_length; // w8
  void *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B12998 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B12998 = 1;
  }
  v6 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v6 )
    sub_1BCAA3C(0LL, v7);
  max_length = v6->max_length;
  if ( !max_length || (v6->m_Items[1] = 512, max_length == 1) )
    sub_1BCAA44(v6, v6);
  v6->m_Items[2] = 875;
  this->fields.cardTextureSize = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cardTextureSize, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  v15 = StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effAnimName, (int64_t)v15, v16, v17, v18, v19, v20, v21);
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
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *SummonInfos; // x20
  SummonEffectComponent_SummonInfo_o *v21; // x24
  __int64 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B12988 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__,
      *(_QWORD *)&servantId,
      *(_QWORD *)&limitCount);
    sub_1BCA7E0(&SummonEffectComponent_SummonInfo_TypeInfo, v18, v19);
    byte_4B12988 = 1;
  }
  SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  }
  v21 = (SummonEffectComponent_SummonInfo_o *)sub_1BCAA2C(
                                                SummonEffectComponent_SummonInfo_TypeInfo,
                                                *(_QWORD *)&servantId,
                                                *(_QWORD *)&limitCount,
                                                isRankup);
  SummonEffectComponent_SummonInfo___ctor(
    v21,
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
  if ( !SummonInfos
    || (items = SummonInfos->fields._items,
        v31 = Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__,
        ++SummonInfos->fields._version,
        !items) )
  {
    sub_1BCAA3C(v22, v23);
  }
  size = SummonInfos->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      SummonInfos,
      (Il2CppObject *)v21,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    SummonInfos->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v21;
    sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v21, v24, v25, v26, v27, v28, v29);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B12991 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_1BCA7E0(
                                        &Method_UnityEngine_Component_GetComponent_UITexture___,
                                        cardNode,
                                        *(_QWORD *)&col);
    byte_4B12991 = 1;
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
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, const char *))this->klass[2]._1.gc_desc)(
                                            this,
                                            v8,
                                            this->klass[2]._1.name),
        (cardTextureSize = v6->fields.cardTextureSize) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(this, cardNode);
  }
  if ( cardTextureSize->max_length <= 1 )
LABEL_11:
    sub_1BCAA44(this, cardNode);
  v11.fields.m_Height = (float)cardTextureSize->m_Items[2] * 0.00097656;
  v11.fields.m_XMin = 0.0;
  v11.fields.m_YMin = 1.0 - v11.fields.m_Height;
  v11.fields.m_Width = 0.5;
  UITexture__set_uvRect(v9, v11, 0LL);
}


void __fastcall SummonEffectComponent__CompleteCallback(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t counterMax; // w9
  int32_t v7; // w8
  Il2CppObject *Component_object; // x0
  __int64 v9; // x1

  if ( (byte_4B12992 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&StringLiteral_12096/*"SETUP_DONE"*/, v4, v5);
    byte_4B12992 = 1;
  }
  counterMax = this->fields._counterMax;
  v7 = this->fields._counter + 1;
  this->fields._counter = v7;
  if ( v7 >= counterMax )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1BCAA3C(0LL, v9);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_12096/*"SETUP_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4B1298A & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B1298A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6);
  if ( !v7 )
    sub_1BCAA3C(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


int32_t __fastcall SummonEffectComponent__GetGachaId(SummonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.gachaId;
}


void __fastcall SummonEffectComponent__InitSummonEffect(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  int *Component_object; // x0
  Il2CppObject *RANKUP_TO_SILVER_ANIMATION; // x1
  PlayMakerFSM_o *v40; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x8
  Il2CppObject *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_object__o *v52; // x21
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Collections_Generic_List_object__o *upAnimationNameList; // x21
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  __int64 v80; // x8
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x8
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  __int64 v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  __int64 v100; // x8
  _BOOL8 v101; // x0
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v106; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  AssetLoader_LoadEndDataHandler_o *v112; // x22
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v114; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1298B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__, v6, v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v10, v11);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v22, v23);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_SummonEffectComponent_OnCharaGraphLoadDone__, v28, v29);
    sub_1BCA7E0(&SummonEffectComponent_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_8154/*"IsNoSkip"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_18467/*"countMax"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_13238/*"SummonEffectAnimation"*/, v36, v37);
    byte_4B1298B = 1;
  }
  memset(&v114, 0, sizeof(v114));
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_46;
  v40 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_18467/*"countMax"*/,
                              0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_46;
  if ( !Component_object )
    goto LABEL_46;
  Component_object[14] = SummonInfos->fields._size;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v40, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_8154/*"IsNoSkip"*/,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  *((_BYTE *)Component_object + 56) = this->fields.isNoSkip;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v40, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_13238/*"SummonEffectAnimation"*/,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                              (HutongGames_PlayMaker_FsmGameObject_o *)Component_object,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  v42 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)Component_object,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = (struct UnityEngine_Animation_o *)v42;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effAnimation, (int64_t)v42, v43, v44, v45, v46, v47, v48);
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v49,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v52;
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.upAnimationNameList,
    (int64_t)v52,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Component_object = (int *)SummonEffectComponent_TypeInfo;
  upAnimationNameList = (System_Collections_Generic_List_object__o *)this->fields.upAnimationNameList;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, RANKUP_TO_SILVER_ANIMATION);
    Component_object = (int *)SummonEffectComponent_TypeInfo;
  }
  if ( !upAnimationNameList )
    goto LABEL_46;
  items = upAnimationNameList->fields._items;
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)**((_QWORD **)Component_object + 23);
  v68 = Method_System_Collections_Generic_List_string__Add__;
  ++upAnimationNameList->fields._version;
  if ( !items )
    goto LABEL_46;
  size = upAnimationNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      upAnimationNameList,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = &items->obj.klass + size;
    upAnimationNameList->fields._size = size + 1;
    v70[4] = (Il2CppClass *)RANKUP_TO_SILVER_ANIMATION;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v70 + 4),
      (int64_t)RANKUP_TO_SILVER_ANIMATION,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v77 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION;
  v78 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v77 )
    goto LABEL_46;
  v79 = Component_object[6];
  if ( (unsigned int)v79 >= *(_DWORD *)(v77 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v80 = v77 + 8 * v79;
    Component_object[6] = v79 + 1;
    *(_QWORD *)(v80 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v80 + 32),
      (int64_t)RANKUP_TO_SILVER_ANIMATION,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v87 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION;
  v88 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v87 )
    goto LABEL_46;
  v89 = Component_object[6];
  if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
  }
  else
  {
    v90 = v87 + 8 * v89;
    Component_object[6] = v89 + 1;
    *(_QWORD *)(v90 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v90 + 32),
      (int64_t)RANKUP_TO_SILVER_ANIMATION,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v97 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION;
  v98 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v97 )
    goto LABEL_46;
  v99 = Component_object[6];
  if ( (unsigned int)v99 >= *(_DWORD *)(v97 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
  }
  else
  {
    v100 = v97 + 8 * v99;
    Component_object[6] = v99 + 1;
    *(_QWORD *)(v100 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v100 + 32),
      (int64_t)RANKUP_TO_SILVER_ANIMATION,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
  }
  Component_object = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Component_object
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_object, 1, 0LL),
        (Component_object = (int *)this->fields.SummonInfos) == 0LL) )
  {
LABEL_46:
    sub_1BCAA3C(Component_object, RANKUP_TO_SILVER_ANIMATION);
  }
  this->fields.DownloadCounter = Component_object[6];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v113,
    (System_Collections_Generic_List_object__o *)Component_object,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v114 = v113;
  while ( 1 )
  {
    v101 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v114,
             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v101 )
      break;
    if ( !v114.fields._current )
      sub_1BCAA3C(v101, v102);
    klass = (int32_t)v114.fields._current[1].klass;
    if ( HIDWORD(v114.fields._current[2].klass) == 3 )
    {
      v106 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v102, v103, v104);
      AssetLoader_LoadEndDataHandler___ctor(
        v106,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadCommandAsset(klass, v106, 0LL);
    }
    else
    {
      klass_high = HIDWORD(v114.fields._current[1].klass);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v102);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0LL);
      v112 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v109, v110, v111);
      AssetLoader_LoadEndDataHandler___ctor(
        v112,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v112, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v114,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void __fastcall SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B12987 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo, v5, v6);
    byte_4B12987 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.SummonInfos, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w8
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B1298C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, loadData, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_7500/*"INIT_DONE"*/, v6, v7);
    byte_4B1298C = 1;
  }
  v8 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v8;
  if ( !v8 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL),
          (Instance = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0LL) )
    {
      sub_1BCAA3C(Instance, v10);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7500/*"INIT_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1

  if ( (byte_4B12997 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&StringLiteral_5794/*"EVENT_SKIP"*/, v4, v5);
    byte_4B12997 = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1BCAA3C(0LL, v7);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5794/*"EVENT_SKIP"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__ReleasePrevAsset(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_List_string__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1298D & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12, v13);
    byte_4B1298D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v22.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v19 = this->fields._releaseAssetPath;
    if ( !v19 )
      sub_1BCAA3C(v17, v18);
    size = v19->fields._size;
    v21 = v19->fields._version + 1;
    v19->fields._size = 0;
    v19->fields._version = v21;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0LL);
  }
}


void __fastcall SummonEffectComponent__SetGachaId(SummonEffectComponent_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.gachaId = id;
}


void __fastcall SummonEffectComponent__SetUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  void *Component_object; // x0
  __int64 v13; // x1
  PlayMakerFSM_o *v14; // x20
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x8
  int32_t v16; // w1
  Il2CppObject *Item; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  HutongGames_PlayMaker_FsmVariables_o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_String_o *effAnimName; // x1

  if ( (byte_4B12993 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v6, v7);
    sub_1BCA7E0(&SummonEffectComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_11279/*"Rank"*/, v10, v11);
    byte_4B12993 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object
    || (v14 = (PlayMakerFSM_o *)Component_object,
        (Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL)) == 0LL)
    || (Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                             (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                             (System_String_o *)StringLiteral_11279/*"Rank"*/,
                             0LL)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(Component_object, v13);
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
  v16 = (int)Component_object;
  if ( (int)Component_object >= upAnimationNameList->fields._size )
LABEL_11:
    v16 = 0;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.upAnimationNameList,
           v16,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.effAnimName = (struct System_String_o *)Item;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effAnimName, (int64_t)Item, v18, v19, v20, v21, v22, v23);
  Component_object = PlayMakerFSM__get_FsmVariables(v14, 0LL);
  v24 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v13);
  if ( !v24 )
    goto LABEL_17;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v24,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_17;
  effAnimName = this->fields.effAnimName;
  *((_QWORD *)Component_object + 7) = effAnimName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)((char *)Component_object + 56),
    (int64_t)effAnimName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void __fastcall SummonEffectComponent__SetUpInitializeAnimation(
        SummonEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PlayMakerFSM_o *Component_object; // x0
  __int64 v9; // x1
  PlayMakerFSM_o *v10; // x19
  HutongGames_PlayMaker_FsmVariables_o *v11; // x20
  System_String_o *Value; // x0

  if ( (byte_4B12994 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&SummonEffectComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_7493/*"INITIALIZE_ANIMATION"*/, v6, v7);
    byte_4B12994 = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_10;
  v10 = Component_object;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0LL);
  v11 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v9);
  if ( !v11
    || (Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                               v11,
                                               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                               0LL)) == 0LL )
  {
LABEL_10:
    sub_1BCAA3C(Component_object, v9);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) )
    PlayMakerFSM__SendEvent(v10, (System_String_o *)StringLiteral_7493/*"INITIALIZE_ANIMATION"*/, 0LL);
}


void __fastcall SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  SummonEffectComponent_c *v10; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  SummonEffectComponent_c *v21; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_4B12989 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__,
      v4,
      v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo, v6, v7);
    sub_1BCA7E0(&SummonEffectComponent_TypeInfo, v8, v9);
    byte_4B12989 = 1;
  }
  v10 = SummonEffectComponent_TypeInfo;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, method);
    v10 = SummonEffectComponent_TypeInfo;
  }
  if ( !v10->static_fields->rarityToColor )
  {
    v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo,
                                                                     method,
                                                                     v2,
                                                                     v3);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
      v11,
      (const MethodInfo_323183C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v11 )
      sub_1BCAA3C(v12, v13);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v11,
      0,
      0,
      (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v11,
      1,
      0,
      (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v11,
      2,
      0,
      (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v11,
      3,
      1,
      (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v11,
      4,
      2,
      (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v11,
      5,
      2,
      (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v11,
      101,
      0,
      (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v11,
      102,
      0,
      (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v21 = SummonEffectComponent_TypeInfo;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v14);
      v21 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v21->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v11;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->rarityToColor, (int64_t)v11, v15, v16, v17, v18, v19, v20);
  }
}


void __fastcall SummonEffectComponent__StopRarityAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  PlayMakerFSM_o *Component_object; // x0
  __int64 v11; // x1
  HutongGames_PlayMaker_FsmVariables_o *v12; // x20
  System_String_o *Value; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v16; // x20
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  __int64 v19; // x1

  if ( (byte_4B12996 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&SoundManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&SummonEffectComponent_TypeInfo, v8, v9);
    byte_4B12996 = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0LL);
  v12 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v11);
  if ( !v12 )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                         v12,
                                         SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                                         0LL);
  if ( !Component_object )
    goto LABEL_22;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v16 = Value;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0LL, 0LL) && !System_String__IsNullOrEmpty(v16, 0LL) )
  {
    Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
    if ( Component_object )
    {
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)Component_object, v16, 0LL) )
        return;
      Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
      if ( Component_object )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)Component_object,
                                                   v16,
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
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v19);
            SoundManager__stopSe(0.0, 0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(Component_object, v11);
  }
}


void __fastcall SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *effAnimation; // x20
  __int64 v7; // x1
  UnityEngine_Animation_o *ComponentsInChildren_object; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v12; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v14; // x20

  if ( (byte_4B12995 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76859104, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12995 = 1;
  }
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(ComponentsInChildren_object, v7);
  }
LABEL_14:
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                             1,
                                                             (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76859104);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  klass = ComponentsInChildren_object[1].klass;
  v12 = ComponentsInChildren_object;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1BCAA44(ComponentsInChildren_object, v7);
      v14 = (UnityEngine_Object_o *)*((_QWORD *)&v12[1].monitor + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)v14,
                                                                   0LL);
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object, 0, 0LL);
      }
      LODWORD(klass) = v12[1].klass;
    }
  }
}


void __fastcall SummonEffectComponent__UpdateCardParam(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  void *Component_object; // x0
  __int64 v29; // x1
  PlayMakerFSM_o *v30; // x20
  int32_t v31; // w21
  int v32; // w28
  int v33; // w27
  char v34; // w26
  int v35; // w25
  int v36; // w23
  int v37; // w22
  int v38; // w24
  char v39; // w21
  HutongGames_PlayMaker_FsmVariables_o *v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int v59; // w9
  int v60; // w22
  UnityEngine_Object_o *firstTr; // x20
  __int64 v62; // x1
  UnityEngine_Object_o *firstTPeelr; // x20

  if ( (byte_4B1298F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&SummonEffectComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_8153/*"IsNewCard"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_18466/*"countIndex"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_8166/*"IsRankUp"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_8170/*"IsSkipStop"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_8528/*"LimitCount"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_9700/*"NoticeRarity"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_4455/*"CardType"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_11291/*"Rarity"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_12792/*"ServantId"*/, v26, v27);
    byte_4B1298F = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_66;
  v30 = (PlayMakerFSM_o *)Component_object;
  Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_18466/*"countIndex"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = (void *)HutongGames_PlayMaker_FsmInt__get_Value(
                               (HutongGames_PlayMaker_FsmInt_o *)Component_object,
                               0LL);
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v31 = (int)Component_object;
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       (int32_t)Component_object,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v32 = *((_DWORD *)Component_object + 4);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v31,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v33 = *((_DWORD *)Component_object + 5);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v31,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v34 = *((_BYTE *)Component_object + 24);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v31,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v35 = *((unsigned __int8 *)Component_object + 25);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v31,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v36 = *((_DWORD *)Component_object + 7);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v31,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v37 = *((_DWORD *)Component_object + 8);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v31,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v38 = *((_DWORD *)Component_object + 9);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v31,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  v39 = *((_BYTE *)Component_object + 40);
  Component_object = PlayMakerFSM__get_FsmVariables(v30, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_12792/*"ServantId"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v32;
  Component_object = PlayMakerFSM__get_FsmVariables(v30, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8528/*"LimitCount"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v33;
  Component_object = PlayMakerFSM__get_FsmVariables(v30, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8166/*"IsRankUp"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v34;
  Component_object = PlayMakerFSM__get_FsmVariables(v30, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8170/*"IsSkipStop"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v39;
  Component_object = PlayMakerFSM__get_FsmVariables(v30, 0LL);
  v40 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v29);
  if ( !v40 )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v40,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)((char *)Component_object + 56), 0LL, v41, v42, v43, v44, v45, v46);
  Component_object = PlayMakerFSM__get_FsmVariables(v30, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)((char *)Component_object + 56), 0LL, v47, v48, v49, v50, v51, v52);
  Component_object = PlayMakerFSM__get_FsmVariables(v30, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)((char *)Component_object + 56), 0LL, v53, v54, v55, v56, v57, v58);
  Component_object = PlayMakerFSM__get_FsmVariables(v30, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8153/*"IsNewCard"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v35 != 0 || v37 == 0;
  Component_object = PlayMakerFSM__get_FsmVariables(v30, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_9700/*"NoticeRarity"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v36;
  Component_object = PlayMakerFSM__get_FsmVariables(v30, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_4455/*"CardType"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  if ( v37 )
    v59 = 0;
  else
    v59 = 3;
  *((_DWORD *)Component_object + 14) = v38;
  if ( v37 == 3 )
    v59 = 1;
  v60 = (v37 & 0xFFFFFFFE) == 4 ? 2 : v59;
  Component_object = PlayMakerFSM__get_FsmVariables(v30, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_11291/*"Rarity"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v60;
  firstTr = (UnityEngine_Object_o *)this->fields.firstTr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(firstTr, 0LL, 0LL) )
  {
    firstTPeelr = (UnityEngine_Object_o *)this->fields.firstTPeelr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
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
      sub_1BCAA3C(Component_object, v29);
    }
  }
}


void __fastcall SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x1
  __int64 v148; // x2
  int64_t v149; // x21
  int64_t Component_object; // x0
  System_String_c *v151; // x1
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  PlayMakerFSM_o *v158; // x23
  int32_t v159; // w19
  int v160; // w28
  int v161; // w26
  int v162; // w22
  unsigned int v163; // w25
  char v164; // w27
  __int64 v165; // x1
  __int64 v166; // x2
  __int64 v167; // x3
  System_Collections_Generic_List_object__o *v168; // x19
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  HutongGames_PlayMaker_FsmVariables_o *v175; // x19
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  int v182; // w22
  HutongGames_PlayMaker_FsmVariables_o *v183; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  Il2CppObject *v185; // x0
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  System_String_o *v200; // x24
  float v201; // s8
  System_String_o *v202; // x0
  int64_t v203; // x2
  int32_t v204; // w3
  System_String_o *v205; // x4
  BattleSetupInfo_o *v206; // x5
  FollowerInfo_o *v207; // x6
  PartyListViewItem_o *v208; // x7
  System_String_o *v209; // x0
  int64_t v210; // x2
  int32_t v211; // w3
  System_String_o *v212; // x4
  BattleSetupInfo_o *v213; // x5
  FollowerInfo_o *v214; // x6
  PartyListViewItem_o *v215; // x7
  System_String_o *v216; // x0
  int64_t v217; // x2
  int32_t v218; // w3
  System_String_o *v219; // x4
  BattleSetupInfo_o *v220; // x5
  FollowerInfo_o *v221; // x6
  PartyListViewItem_o *v222; // x7
  System_String_o *v223; // x0
  System_String_o **v224; // x19
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v232; // x24
  __int64 v233; // x2
  UnityEngine_Transform_o *v234; // x22
  int32_t Item; // w25
  _BOOL4 v236; // w29
  System_Collections_Generic_List_object__o *GachaBehaviors; // x0
  System_Collections_Generic_List_object__o *v238; // x22
  System_Collections_Generic_Dictionary_object__object__o *v239; // x26
  __int64 *v240; // x22
  __int64 v241; // x1
  GachaBehaviorMaster_c *v242; // x0
  int v243; // w29
  Il2CppObject *v244; // x0
  int64_t v245; // x2
  int32_t v246; // w3
  System_String_o *v247; // x4
  BattleSetupInfo_o *v248; // x5
  FollowerInfo_o *v249; // x6
  PartyListViewItem_o *v250; // x7
  __int64 v251; // x8
  _QWORD *v252; // x9
  __int64 v253; // x10
  __int64 v254; // x8
  int32_t v255; // w0
  GachaBehaviorMaster_c *v256; // x0
  __int64 v257; // x1
  GachaBehaviorMaster_c *v258; // x0
  int v259; // w8
  GachaBehaviorMaster_c *v260; // x0
  __int64 v261; // x1
  GachaBehaviorMaster_c *v262; // x0
  int v263; // w8
  GachaBehaviorMaster_c *v264; // x0
  __int64 v265; // x1
  GachaBehaviorMaster_c *v266; // x0
  int v267; // w8
  GachaBehaviorMaster_c *v268; // x0
  __int64 v269; // x1
  GachaBehaviorMaster_c *v270; // x0
  int v271; // w8
  GachaBehaviorMaster_c *v272; // x0
  _BOOL4 v273; // w10
  __int64 v274; // x1
  HutongGames_PlayMaker_FsmVariables_o *v275; // x22
  HutongGames_PlayMaker_FsmString_o *v276; // x0
  __int64 v277; // x1
  GachaBehaviorMaster_c *v278; // x8
  int64_t v279; // x2
  int32_t v280; // w3
  System_String_o *v281; // x4
  BattleSetupInfo_o *v282; // x5
  FollowerInfo_o *v283; // x6
  PartyListViewItem_o *v284; // x7
  int64_t v285; // x8
  GachaBehaviorMaster_c *v286; // x0
  __int64 v287; // x1
  HutongGames_PlayMaker_FsmVariables_o *v288; // x22
  HutongGames_PlayMaker_FsmString_o *v289; // x0
  __int64 v290; // x1
  GachaBehaviorMaster_c *v291; // x8
  int64_t v292; // x2
  int32_t v293; // w3
  System_String_o *v294; // x4
  BattleSetupInfo_o *v295; // x5
  FollowerInfo_o *v296; // x6
  PartyListViewItem_o *v297; // x7
  GachaBehaviorMaster_c *v298; // x0
  HutongGames_PlayMaker_FsmVariables_o *v299; // x22
  HutongGames_PlayMaker_FsmString_o *v300; // x0
  __int64 v301; // x1
  GachaBehaviorMaster_c *v302; // x8
  int64_t v303; // x2
  int32_t v304; // w3
  System_String_o *v305; // x4
  BattleSetupInfo_o *v306; // x5
  FollowerInfo_o *v307; // x6
  PartyListViewItem_o *v308; // x7
  UnityEngine_Object_o *prevObject; // x22
  struct UnityEngine_GameObject_o **p_prevObject; // x26
  int v311; // w9
  int32_t v312; // w8
  __int64 v313; // x1
  UnityEngine_Object_o *v314; // x22
  int64_t v315; // x2
  int32_t v316; // w3
  System_String_o *v317; // x4
  BattleSetupInfo_o *v318; // x5
  FollowerInfo_o *v319; // x6
  PartyListViewItem_o *v320; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v322; // x1
  __int64 v323; // x2
  __int64 v324; // x3
  System_Action_o *v325; // x28
  bool v326; // w28
  __int64 v327; // x1
  __int64 v328; // x2
  __int64 v329; // x3
  UnityEngine_GameObject_o *v330; // x22
  Il2CppObject *v331; // x28
  System_Action_o *v332; // x25
  System_Action_o *v333; // x25
  UnityEngine_Component_o *v334; // x22
  __int64 v335; // x2
  UnityEngine_Transform_o *v336; // x28
  UnityEngine_GameObject_o *v337; // x0
  int64_t v338; // x2
  int32_t v339; // w3
  System_String_o *v340; // x4
  BattleSetupInfo_o *v341; // x5
  FollowerInfo_o *v342; // x6
  PartyListViewItem_o *v343; // x7
  System_String_o *v344; // x24
  System_String_o *v345; // x22
  UnityEngine_Transform_o *v346; // x0
  UnityEngine_Component_o *v347; // x26
  UnityEngine_Transform_o *v348; // x0
  UnityEngine_Component_o *v349; // x24
  __int64 v350; // x1
  __int64 v351; // x2
  __int64 v352; // x3
  int32_t v353; // w22
  int v354; // w8
  UnityEngine_Transform_o *v355; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v357; // x3
  UnityEngine_Transform_o *v358; // x0
  UnityEngine_Transform_o *v359; // x0
  const MethodInfo *v360; // x3
  UnityEngine_Transform_o *v361; // x0
  UnityEngine_Transform_o *v362; // x1
  const MethodInfo *v363; // x3
  SummonEffectComponent_o *v364; // x0
  int32_t v365; // w2
  System_String_o *v366; // x0
  __int64 v367; // x1
  System_String_o *v368; // x19
  System_String_o *v369; // x0
  System_String_o *v370; // x0
  int64_t v371; // x2
  int32_t v372; // w3
  System_String_o *v373; // x4
  BattleSetupInfo_o *v374; // x5
  FollowerInfo_o *v375; // x6
  PartyListViewItem_o *v376; // x7
  System_Collections_Generic_List_object__o *v377; // x8
  struct System_Object_array *items; // x9
  _QWORD *v379; // x10
  __int64 size; // x11
  System_String_o *v381; // x19
  Il2CppClass **v382; // x0
  __int64 v383; // x1
  __int64 v384; // x2
  __int64 v385; // x3
  UnityEngine_Transform_o *v386; // x0
  UnityEngine_Transform_o *v387; // x0
  UnityEngine_Transform_o *v388; // x0
  const MethodInfo *v389; // x3
  const MethodInfo *v390; // x1
  int64_t v391; // x24
  int64_t v392; // x2
  int32_t v393; // w3
  System_String_o *v394; // x4
  BattleSetupInfo_o *v395; // x5
  FollowerInfo_o *v396; // x6
  PartyListViewItem_o *v397; // x7
  Il2CppObject *v398; // x19
  __int64 v399; // x2
  __int64 v400; // x3
  int v401; // w8
  int32_t v402; // w19
  __int64 v403; // x21
  int64_t v404; // x2
  int32_t v405; // w3
  System_String_o *v406; // x4
  BattleSetupInfo_o *v407; // x5
  FollowerInfo_o *v408; // x6
  PartyListViewItem_o *v409; // x7
  Il2CppObject **v410; // x20
  int32_t LowerColorRarity; // w0
  int32_t v412; // w22
  int v413; // w8
  __int64 v414; // x20
  int64_t v415; // x2
  int32_t v416; // w3
  System_String_o *v417; // x4
  BattleSetupInfo_o *v418; // x5
  FollowerInfo_o *v419; // x6
  PartyListViewItem_o *v420; // x7
  Il2CppObject **v421; // x21
  int v422; // w8
  __int64 v423; // x1
  System_String_o *DesignCardPath; // x22
  int64_t v425; // x2
  int32_t v426; // w3
  System_String_o *v427; // x4
  BattleSetupInfo_o *v428; // x5
  FollowerInfo_o *v429; // x6
  PartyListViewItem_o *v430; // x7
  __int64 v431; // x8
  _QWORD *v432; // x9
  __int64 v433; // x10
  __int64 v434; // x8
  __int64 v435; // x1
  __int64 v436; // x2
  __int64 v437; // x3
  AssetLoader_LoadEndDataHandler_o *v438; // x20
  __int64 v439; // x1
  int64_t v440; // x2
  int32_t v441; // w3
  System_String_o *v442; // x4
  BattleSetupInfo_o *v443; // x5
  FollowerInfo_o *v444; // x6
  PartyListViewItem_o *v445; // x7
  System_Collections_Generic_List_object__o *v446; // x8
  struct System_Object_array *v447; // x9
  _QWORD *v448; // x10
  __int64 v449; // x11
  System_String_o *v450; // x19
  Il2CppClass **v451; // x0
  __int64 v452; // x1
  __int64 v453; // x2
  __int64 v454; // x3
  AssetLoader_LoadEndDataHandler_o *v455; // x20
  Il2CppObject *v456; // x24
  AssetLoader_LoadEndDataHandler_o *v457; // x23
  __int64 v458; // x1
  _DWORD *monitor; // x8
  System_String_o **v460; // x8
  int32_t *v461; // x21
  __int64 v462; // x1
  System_String_o *v463; // x19
  int64_t v464; // x2
  int32_t v465; // w3
  System_String_o *v466; // x4
  BattleSetupInfo_o *v467; // x5
  FollowerInfo_o *v468; // x6
  PartyListViewItem_o *v469; // x7
  __int64 v470; // x8
  _QWORD *v471; // x9
  __int64 v472; // x10
  __int64 v473; // x8
  __int64 v474; // x1
  __int64 v475; // x2
  __int64 v476; // x3
  AssetLoader_LoadEndDataHandler_o *v477; // x21
  __int64 v478; // x1
  System_String_o *v479; // x0
  AssetLoader_LoadEndDataHandler_o *v480; // x1
  __int64 v481; // x1
  System_String_o *v482; // x23
  int64_t v483; // x2
  int32_t v484; // w3
  System_String_o *v485; // x4
  BattleSetupInfo_o *v486; // x5
  FollowerInfo_o *v487; // x6
  PartyListViewItem_o *v488; // x7
  __int64 v489; // x8
  _QWORD *v490; // x9
  __int64 v491; // x10
  __int64 v492; // x8
  __int64 v493; // x1
  __int64 v494; // x2
  __int64 v495; // x3
  AssetLoader_LoadEndDataHandler_o *v496; // x24
  __int64 v497; // x1
  System_String_o *v498; // x22
  int64_t v499; // x2
  int32_t v500; // w3
  System_String_o *v501; // x4
  BattleSetupInfo_o *v502; // x5
  FollowerInfo_o *v503; // x6
  PartyListViewItem_o *v504; // x7
  __int64 v505; // x8
  _QWORD *v506; // x9
  __int64 v507; // x10
  __int64 v508; // x8
  __int64 v509; // x1
  __int64 v510; // x2
  __int64 v511; // x3
  AssetLoader_LoadEndDataHandler_o *v512; // x23
  __int64 v513; // x1
  int64_t v514; // x2
  int32_t v515; // w3
  System_String_o *v516; // x4
  BattleSetupInfo_o *v517; // x5
  FollowerInfo_o *v518; // x6
  PartyListViewItem_o *v519; // x7
  __int64 v520; // x8
  _QWORD *v521; // x9
  __int64 v522; // x10
  __int64 v523; // x8
  __int64 v524; // x1
  __int64 v525; // x2
  __int64 v526; // x3
  Il2CppObject *v527; // x21
  __int64 v528; // x1
  SummonEffectComponent_o *v529; // x0
  UnityEngine_Transform_o *v530; // x1
  int32_t v531; // w2
  const MethodInfo *v532; // x3
  int v533; // [xsp+Ch] [xbp-D4h]
  int v534; // [xsp+10h] [xbp-D0h]
  int v535; // [xsp+14h] [xbp-CCh]
  int v536; // [xsp+18h] [xbp-C8h]
  _BOOL4 v537; // [xsp+1Ch] [xbp-C4h]
  int v538; // [xsp+34h] [xbp-ACh]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+38h] [xbp-A8h]
  int64_t v540; // [xsp+40h] [xbp-A0h]
  int32_t v541; // [xsp+50h] [xbp-90h]
  int key; // [xsp+54h] [xbp-8Ch]
  int32_t v543; // [xsp+58h] [xbp-88h]
  int32_t svtId; // [xsp+5Ch] [xbp-84h]
  int v545; // [xsp+60h] [xbp-80h] BYREF
  int v546; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v548; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v549; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v550; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v551; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v552; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12990 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITexture___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaBehaviorMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v33, v34);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__,
      v35,
      v36);
    sub_1BCA7E0(&GachaBehaviorMaster_TypeInfo, v37, v38);
    sub_1BCA7E0(&int_TypeInfo, v39, v40);
    sub_1BCA7E0(&long_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__IndexOf__, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__, v55, v56);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v57, v58);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v59, v60);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v61, v62);
    sub_1BCA7E0(&Rarity_TypeInfo, v63, v64);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v65, v66);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v67, v68);
    sub_1BCA7E0(&string_TypeInfo, v69, v70);
    sub_1BCA7E0(&SummonEffectComponent_TypeInfo, v71, v72);
    sub_1BCA7E0(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__, v73, v74);
    sub_1BCA7E0(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__, v75, v76);
    sub_1BCA7E0(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__, v77, v78);
    sub_1BCA7E0(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__, v79, v80);
    sub_1BCA7E0(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__, v81, v82);
    sub_1BCA7E0(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo, v83, v84);
    sub_1BCA7E0(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__, v85, v86);
    sub_1BCA7E0(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__, v87, v88);
    sub_1BCA7E0(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo, v89, v90);
    sub_1BCA7E0(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__, v91, v92);
    sub_1BCA7E0(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__, v93, v94);
    sub_1BCA7E0(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo, v95, v96);
    sub_1BCA7E0(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__, v97, v98);
    sub_1BCA7E0(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo, v99, v100);
    sub_1BCA7E0(&StringLiteral_4451/*"CardScale"*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_4452/*"CardSecondName"*/, v103, v104);
    sub_1BCA7E0(&StringLiteral_4443/*"CardFirstName"*/, v105, v106);
    sub_1BCA7E0(&StringLiteral_8153/*"IsNewCard"*/, v107, v108);
    sub_1BCA7E0(&StringLiteral_4450/*"CardRotName"*/, v109, v110);
    sub_1BCA7E0(&StringLiteral_4621/*"CodeCardRarity02"*/, v111, v112);
    sub_1BCA7E0(&StringLiteral_2811/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v113, v114);
    sub_1BCA7E0(&StringLiteral_11279/*"Rank"*/, v115, v116);
    sub_1BCA7E0(&StringLiteral_18466/*"countIndex"*/, v117, v118);
    sub_1BCA7E0(&StringLiteral_13236/*"SummonEffect"*/, v119, v120);
    sub_1BCA7E0(&StringLiteral_23030/*"rarity"*/, v121, v122);
    sub_1BCA7E0(&StringLiteral_8166/*"IsRankUp"*/, v123, v124);
    sub_1BCA7E0(&StringLiteral_16291/*"_0"*/, v125, v126);
    sub_1BCA7E0(&StringLiteral_4620/*"CodeCardRarity"*/, v127, v128);
    sub_1BCA7E0(&StringLiteral_8170/*"IsSkipStop"*/, v129, v130);
    sub_1BCA7E0(&StringLiteral_8528/*"LimitCount"*/, v131, v132);
    sub_1BCA7E0(&StringLiteral_9700/*"NoticeRarity"*/, v133, v134);
    sub_1BCA7E0(&StringLiteral_2810/*"BACKSIDE_CLASS_IMAGE_ID"*/, v135, v136);
    sub_1BCA7E0(&StringLiteral_4455/*"CardType"*/, v137, v138);
    sub_1BCA7E0(&StringLiteral_4449/*"CardNodeName"*/, v139, v140);
    sub_1BCA7E0(&StringLiteral_4444/*"CardFirstPeelName"*/, v141, v142);
    sub_1BCA7E0(&StringLiteral_23921/*"summon_rarity_0"*/, v143, v144);
    sub_1BCA7E0(&StringLiteral_11291/*"Rarity"*/, v145, v146);
    sub_1BCA7E0(&StringLiteral_12792/*"ServantId"*/, v147, v148);
    byte_4B12990 = 1;
  }
  entity = 0LL;
  v546 = 0;
  v149 = sub_1BCAA2C(SummonEffectComponent___c__DisplayClass45_0_TypeInfo, method, v2, v3);
  SummonEffectComponent___c__DisplayClass45_0___ctor((SummonEffectComponent___c__DisplayClass45_0_o *)v149, 0LL);
  if ( !v149 )
    goto LABEL_376;
  *(_QWORD *)(v149 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v149 + 16), (int64_t)this, v152, v153, v154, v155, v156, v157);
  this->fields.isNoSkipAll = 0;
  Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_376;
  v158 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_18466/*"countIndex"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Component_object, 0LL);
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v159 = Component_object;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                Component_object,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  svtId = *(_DWORD *)(Component_object + 16);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v159,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v543 = *(_DWORD *)(Component_object + 20);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v159,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v160 = *(unsigned __int8 *)(Component_object + 24);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v159,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v161 = *(unsigned __int8 *)(Component_object + 25);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v159,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v162 = *(_DWORD *)(Component_object + 28);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v159,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v163 = *(_DWORD *)(Component_object + 32);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v159,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(v149 + 56) = *(_DWORD *)(Component_object + 36);
  Component_object = (int64_t)this->fields.SummonInfos;
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Component_object,
                                v159,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v164 = *(_BYTE *)(Component_object + 40);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v159,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v540 = *(_QWORD *)(Component_object + 48);
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v151);
  v168 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v165,
                                                        v166,
                                                        v167);
  System_Collections_Generic_List_object____ctor(
    v168,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v168;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._releaseAssetPath,
    (int64_t)v168,
    v169,
    v170,
    v171,
    v172,
    v173,
    v174);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_12792/*"ServantId"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = svtId;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8528/*"LimitCount"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v543;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8166/*"IsRankUp"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v160;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8170/*"IsSkipStop"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v164;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  v175 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v151);
  if ( !v175 )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                v175,
                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_QWORD *)(Component_object + 56) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)(Component_object + 56), 0LL, v176, v177, v178, v179, v180, v181);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8153/*"IsNewCard"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v161 != 0 || v163 == 0;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_9700/*"NoticeRarity"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v162;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4455/*"CardType"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = *(_DWORD *)(v149 + 56);
  if ( v163 - 3 >= 3 )
    v182 = v163 ? 0 : 3;
  else
    v182 = dword_C0C0A0[v163 - 3];
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_11291/*"Rarity"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v182;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  v183 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v151);
  key = v163;
  if ( !v183 )
    goto LABEL_376;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v183,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0LL);
  v545 = v182;
  v185 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v545);
  Component_object = (int64_t)System_String__Concat((Il2CppObject *)StringLiteral_23921/*"summon_rarity_0"*/, v185, 0LL);
  if ( !FsmString )
    goto LABEL_376;
  FsmString->fields.value = (struct System_String_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&FsmString->fields.value,
    Component_object,
    v186,
    v187,
    v188,
    v189,
    v190,
    v191);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13236/*"SummonEffect"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, 0LL);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effect, (int64_t)Value, v194, v195, v196, v197, v198, v199);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4449/*"CardNodeName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v200 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4451/*"CardScale"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v201 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_object, 0LL);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4443/*"CardFirstName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v202 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v149 + 24) = v202;
  sub_1BCA784((PartyOrganizationUtility_o *)(v149 + 24), (int64_t)v202, v203, v204, v205, v206, v207, v208);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4444/*"CardFirstPeelName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v209 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v149 + 32) = v209;
  sub_1BCA784((PartyOrganizationUtility_o *)(v149 + 32), (int64_t)v209, v210, v211, v212, v213, v214, v215);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4452/*"CardSecondName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v216 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v149 + 40) = v216;
  sub_1BCA784((PartyOrganizationUtility_o *)(v149 + 40), (int64_t)v216, v217, v218, v219, v220, v221, v222);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4450/*"CardRotName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v223 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v149 + 48) = v223;
  v224 = (System_String_o **)(v149 + 48);
  sub_1BCA784((PartyOrganizationUtility_o *)(v149 + 48), (int64_t)v223, v225, v226, v227, v228, v229, v230);
  Component_object = (int64_t)*p_effect;
  if ( !*p_effect )
    goto LABEL_376;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  Component_object = (int64_t)TransformHelper__getNodeFromName(transform, v200, 1, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  v232 = (UnityEngine_Component_o *)Component_object;
  Component_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
  Component_object = (int64_t)UnityEngine_Component__get_gameObject(v232, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  v234 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v151, v233);
    byte_4B109C6 = 1;
  }
  if ( !v234 )
    goto LABEL_376;
  UnityEngine_Transform__set_localScale(v234, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v151 = (System_String_c *)v163;
  Component_object = (int64_t)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_object )
    goto LABEL_376;
  Item = System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)Component_object,
           v163,
           (const MethodInfo_3232164 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Component_object,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_object )
    goto LABEL_376;
  v236 = v160 != 0 && Item != 0;
  GachaBehaviors = (System_Collections_Generic_List_object__o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                                  (GachaBehaviorMaster_o *)Component_object,
                                                                  this->fields.gachaId,
                                                                  svtId,
                                                                  0LL);
  v541 = Item;
  if ( !GachaBehaviors || (v238 = GachaBehaviors, GachaBehaviors->fields._size < 1) )
  {
    v534 = -1;
    v535 = -1;
    v533 = -1;
    v538 = -1;
    v536 = -1;
    goto LABEL_185;
  }
  v537 = v160 != 0 && Item != 0;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                GachaBehaviors,
                                0,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !*(_QWORD *)(Component_object + 24) )
  {
    v534 = -1;
    v535 = -1;
    v533 = -1;
    v538 = -1;
    v536 = -1;
    goto LABEL_184;
  }
  if ( v161 )
    this->fields.isNoSkipAll = 1;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v238,
                                0,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v239 = *(System_Collections_Generic_Dictionary_object__object__o **)(Component_object + 24);
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v151);
  if ( !v239 )
    goto LABEL_376;
  v240 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v239,
         (Il2CppObject *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v242 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v241);
      v242 = GachaBehaviorMaster_TypeInfo;
    }
    v244 = System_Collections_Generic_Dictionary_object__object___get_Item(
             v239,
             (Il2CppObject *)v242->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v240 = (__int64 *)v244;
    if ( v244 )
    {
      v151 = string_TypeInfo;
      if ( (System_String_c *)v244->klass != string_TypeInfo )
        goto LABEL_379;
    }
    Component_object = (int64_t)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v240,
            (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_object = (int64_t)this->fields.upAnimationNameList;
      if ( !Component_object )
        goto LABEL_376;
      v251 = *(_QWORD *)(Component_object + 16);
      v252 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v251 )
        goto LABEL_376;
      v253 = *(int *)(Component_object + 24);
      if ( (unsigned int)v253 >= *(_DWORD *)(v251 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v240,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
      }
      else
      {
        v254 = v251 + 8 * v253;
        *(_DWORD *)(Component_object + 24) = v253 + 1;
        *(_QWORD *)(v254 + 32) = v240;
        sub_1BCA784((PartyOrganizationUtility_o *)(v254 + 32), (int64_t)v240, v245, v246, v247, v248, v249, v250);
      }
    }
    Component_object = (int64_t)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    v255 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)Component_object,
             (Il2CppObject *)v240,
             (const MethodInfo_35A28FC *)Method_System_Collections_Generic_List_string__IndexOf__);
    v240 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
    v243 = v255;
  }
  else
  {
    v243 = -1;
  }
  v256 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v241);
    v256 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v239,
         (Il2CppObject *)v256->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v258 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v257);
      v258 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v239,
                                  (Il2CppObject *)v258->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v259 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v259 = -1;
  }
  v260 = GachaBehaviorMaster_TypeInfo;
  v538 = v259;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v257);
    v260 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v239,
         (Il2CppObject *)v260->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v262 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v261);
      v262 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v239,
                                  (Il2CppObject *)v262->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v263 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v263 = -1;
  }
  v264 = GachaBehaviorMaster_TypeInfo;
  v533 = v263;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v261);
    v264 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v239,
         (Il2CppObject *)v264->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v266 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v265);
      v266 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v239,
                                  (Il2CppObject *)v266->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v267 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v267 = -1;
  }
  v268 = GachaBehaviorMaster_TypeInfo;
  v535 = v267;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v265);
    v268 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v239,
          (Il2CppObject *)v268->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v271 = -1;
    goto LABEL_142;
  }
  v270 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v269);
    v270 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v239,
                                (Il2CppObject *)v270->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_377:
    sub_1BCACFC(Component_object);
    goto LABEL_378;
  }
  v271 = *(_DWORD *)j_il2cpp_object_unbox_0();
LABEL_142:
  v272 = GachaBehaviorMaster_TypeInfo;
  v273 = v160 != 0 && Item != 0;
  v534 = v271;
  if ( v243 != -1 )
    v273 = v538 != -1;
  v537 = v273;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v269);
    v272 = GachaBehaviorMaster_TypeInfo;
  }
  v536 = v243;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v239,
         (Il2CppObject *)v272->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_9700/*"NoticeRarity"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    *(_DWORD *)(Component_object + 56) = 3;
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
    v275 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v151);
    if ( !v275 )
      goto LABEL_376;
    v276 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v275,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0LL);
    v278 = GachaBehaviorMaster_TypeInfo;
    v240 = (__int64 *)v276;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v277);
      v278 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v239,
                                  (Il2CppObject *)v278->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v240 )
      goto LABEL_376;
    v285 = Component_object;
    if ( Component_object && *(System_String_c **)Component_object != string_TypeInfo )
      goto LABEL_378;
    v240[7] = Component_object;
    sub_1BCA784((PartyOrganizationUtility_o *)(v240 + 7), Component_object, v279, v280, v281, v282, v283, v284);
  }
  v286 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v274);
    v286 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v239,
          (Il2CppObject *)v286->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_172:
    v298 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v287);
      v298 = GachaBehaviorMaster_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v239,
           (Il2CppObject *)v298->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
      v299 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
      if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v151);
      if ( !v299 )
        goto LABEL_376;
      v300 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
               v299,
               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
               0LL);
      v302 = GachaBehaviorMaster_TypeInfo;
      v240 = (__int64 *)v300;
      if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v301);
        v302 = GachaBehaviorMaster_TypeInfo;
      }
      v236 = v537;
      Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    v239,
                                    (Il2CppObject *)v302->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v240 )
        goto LABEL_376;
      v285 = Component_object;
      if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
      {
        v240[7] = Component_object;
        sub_1BCA784((PartyOrganizationUtility_o *)(v240 + 7), Component_object, v303, v304, v305, v306, v307, v308);
        goto LABEL_185;
      }
      goto LABEL_378;
    }
LABEL_184:
    v236 = v537;
LABEL_185:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v236 )
      v311 = 4;
    else
      v311 = 3;
    if ( this->fields.EditMode )
      v312 = 0;
    else
      v312 = v311;
    this->fields._counter = 0;
    this->fields._counterMax = v312;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v151);
    if ( UnityEngine_Object__op_Inequality(prevObject, 0LL, 0LL) )
    {
      v314 = (UnityEngine_Object_o *)*p_prevObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v313);
      UnityEngine_Object__Destroy_70154244(v314, 0LL);
      *p_prevObject = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.prevObject, 0LL, v315, v316, v317, v318, v319, v320);
    }
    if ( *(_DWORD *)(v149 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v232, 0LL);
      v325 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v322, v323, v324);
      System_Action___ctor(
        v325,
        (Il2CppObject *)v149,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0LL);
      Component_object = (int64_t)CharaGraphManager__CreateCommandTexturePrefab(gameObject, svtId, 0, v325, 0LL);
    }
    else
    {
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0LL;
      if ( !Component_object )
        goto LABEL_376;
      v326 = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               &entity,
               v540,
               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v330 = UnityEngine_Component__get_gameObject(v232, 0LL);
      if ( v326 )
      {
        v331 = entity;
        v332 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v327, v328, v329);
        System_Action___ctor(
          v332,
          (Il2CppObject *)v149,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0LL);
        Component_object = (int64_t)CharaGraphManager__CreateTexturePrefab_38621504(
                                      v330,
                                      (UserServantEntity_o *)v331,
                                      0,
                                      v332,
                                      0LL);
      }
      else
      {
        v333 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v327, v328, v329);
        System_Action___ctor(
          v333,
          (Il2CppObject *)v149,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0LL);
        Component_object = (int64_t)CharaGraphManager__CreateTexturePrefab(v330, svtId, v543, 0, 1, 0, v333, 0, 0LL);
      }
    }
    v334 = (UnityEngine_Component_o *)Component_object;
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
    v336 = (UnityEngine_Transform_o *)Component_object;
    if ( !byte_4B109C1 )
    {
      Component_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v151, v335);
      byte_4B109C1 = 1;
    }
    if ( !v336 )
      goto LABEL_376;
    UnityEngine_Transform__set_localPosition(v336, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Component_object = (int64_t)UnityEngine_Component__get_transform(v334, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    v548.fields.x = v201;
    v548.fields.y = v201;
    v548.fields.z = v201;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v548, 0LL);
    Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                  v232,
                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    v337 = UnityEngine_Component__get_gameObject(v334, 0LL);
    *p_prevObject = v337;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.prevObject,
      (int64_t)v337,
      v338,
      v339,
      v340,
      v341,
      v342,
      v343);
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4620/*"CodeCardRarity"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    v344 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4621/*"CodeCardRarity02"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_object,
                                  0LL);
    if ( !*p_effect )
      goto LABEL_376;
    v345 = (System_String_o *)Component_object;
    v346 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
    Component_object = (int64_t)TransformHelper__getNodeFromName(v346, v344, 1, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !*p_effect )
      goto LABEL_376;
    v347 = (UnityEngine_Component_o *)Component_object;
    v348 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
    Component_object = (int64_t)TransformHelper__getNodeFromName(v348, v345, 1, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !v347 )
      goto LABEL_376;
    v349 = (UnityEngine_Component_o *)Component_object;
    Component_object = (int64_t)UnityEngine_Component__get_gameObject(v347, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
    if ( !v349 )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__get_gameObject(v349, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
    if ( this->fields.EditMode )
    {
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11279/*"Rank"*/,
                                    0LL);
      if ( v236 )
      {
        v353 = v541;
        if ( !Component_object )
          goto LABEL_376;
        v354 = v541 == 2 ? 2 : 1;
        *(_DWORD *)(Component_object + 56) = v354;
        Component_object = (int64_t)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v355 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        NodeFromName = TransformHelper__getNodeFromName(v355, *(System_String_o **)(v149 + 24), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, v541 - 1, v357);
        Component_object = (int64_t)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v358 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v359 = TransformHelper__getNodeFromName(v358, *(System_String_o **)(v149 + 32), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, v359, v541 - 1, v360);
        Component_object = (int64_t)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v361 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v362 = TransformHelper__getNodeFromName(v361, *v224, 1, 0LL);
        v364 = this;
        v365 = v541 - 1;
      }
      else
      {
        v353 = v541;
        if ( !Component_object )
          goto LABEL_376;
        *(_DWORD *)(Component_object + 56) = 0;
        Component_object = (int64_t)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v386 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v362 = TransformHelper__getNodeFromName(v386, *v224, 1, 0LL);
        v364 = this;
        v365 = v541;
      }
      SummonEffectComponent__ChangeClassCardColor(v364, v362, v365, v363);
      Component_object = (int64_t)this->fields.effect;
      if ( Component_object )
      {
        v387 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v388 = TransformHelper__getNodeFromName(v387, *(System_String_o **)(v149 + 40), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, v388, v353, v389);
        SummonEffectComponent__CompleteCallback(this, v390);
        return;
      }
LABEL_376:
      sub_1BCAA3C(Component_object, v151);
    }
    if ( *(_DWORD *)(v149 + 56) == 3 )
    {
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11279/*"Rank"*/,
                                    0LL);
      if ( !Component_object )
        goto LABEL_376;
      *(_DWORD *)(Component_object + 56) = 3;
      v546 = key;
      Component_object = (int64_t)UnityEngine_Component__get_gameObject(v347, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
      v366 = System_Int32__ToString((int32_t)&v546, 0LL);
      v368 = System_String__Concat_62412480(
               (System_String_o *)StringLiteral_23030/*"rarity"*/,
               v366,
               (System_String_o *)StringLiteral_16291/*"_0"*/,
               0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v367);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v347, v368, 0LL);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v347->klass[2]._1.typeMetadataHandle)(
        v347,
        v347->klass[2]._1.interopData);
      Component_object = (int64_t)UnityEngine_Component__get_gameObject(v349, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
      v369 = System_Int32__ToString((int32_t)&v546, 0LL);
      v370 = System_String__Concat_62412480(
               (System_String_o *)StringLiteral_23030/*"rarity"*/,
               v369,
               (System_String_o *)StringLiteral_16291/*"_0"*/,
               0LL);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v349, v370, 0LL);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v349->klass[2]._1.typeMetadataHandle)(
        v349,
        v349->klass[2]._1.interopData);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v347, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v549.fields.x = 0.0;
      v549.fields.z = 0.0;
      v549.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v549, 0LL);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v347, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v550.fields.x = v201;
      v550.fields.y = v201;
      v550.fields.z = v201;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v550, 0LL);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v349, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v551.fields.x = 0.0;
      v551.fields.z = 0.0;
      v551.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v551, 0LL);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v349, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v552.fields.x = v201;
      v552.fields.y = v201;
      v552.fields.z = v201;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v552, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    1,
                                    key,
                                    0LL);
      v377 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      items = v377->fields._items;
      v379 = Method_System_Collections_Generic_List_string__Add__;
      ++v377->fields._version;
      if ( !items )
        goto LABEL_376;
      size = v377->fields._size;
      v381 = (System_String_o *)Component_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v377,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v379[4] + 192LL) + 112LL));
      }
      else
      {
        v382 = &items->obj.klass + size;
        v377->fields._size = size + 1;
        v382[4] = (Il2CppClass *)v381;
        sub_1BCA784((PartyOrganizationUtility_o *)(v382 + 4), (int64_t)v381, v371, v372, v373, v374, v375, v376);
      }
      v438 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v383, v384, v385);
      AssetLoader_LoadEndDataHandler___ctor(
        v438,
        (Il2CppObject *)v149,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v439);
      AssetManager__loadAssetStorage(v381, v438, 1, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    101,
                                    key,
                                    0LL);
      v446 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v447 = v446->fields._items;
      v448 = Method_System_Collections_Generic_List_string__Add__;
      ++v446->fields._version;
      if ( !v447 )
        goto LABEL_376;
      v449 = v446->fields._size;
      v450 = (System_String_o *)Component_object;
      if ( (unsigned int)v449 >= v447->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v446,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v448[4] + 192LL) + 112LL));
      }
      else
      {
        v451 = &v447->obj.klass + v449;
        v446->fields._size = v449 + 1;
        v451[4] = (Il2CppClass *)v450;
        sub_1BCA784((PartyOrganizationUtility_o *)(v451 + 4), (int64_t)v450, v440, v441, v442, v443, v444, v445);
      }
      v455 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v452, v453, v454);
      AssetLoader_LoadEndDataHandler___ctor(
        v455,
        (Il2CppObject *)v149,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
        0LL);
    }
    else
    {
      v391 = sub_1BCAA2C(SummonEffectComponent___c__DisplayClass45_1_TypeInfo, v350, v351, v352);
      SummonEffectComponent___c__DisplayClass45_1___ctor((SummonEffectComponent___c__DisplayClass45_1_o *)v391, 0LL);
      if ( !v391 )
        goto LABEL_376;
      *(_QWORD *)(v391 + 24) = v149;
      sub_1BCA784((PartyOrganizationUtility_o *)(v391 + 24), v149, v392, v393, v394, v395, v396, v397);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Component_object )
        goto LABEL_376;
      v398 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               svtId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Component_object )
        goto LABEL_376;
      ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Component_object, svtId, v543, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !v398 )
        goto LABEL_376;
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                                    (int32_t)v398[5].klass,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Component_object )
        goto LABEL_376;
      v401 = *(_DWORD *)(Component_object + 40);
      if ( v535 != -1 )
        v401 = v535;
      *(_DWORD *)(v391 + 16) = v401;
      if ( v534 == -1 )
        v402 = key;
      else
        v402 = v534;
      if ( !v236 )
      {
        v414 = sub_1BCAA2C(SummonEffectComponent___c__DisplayClass45_3_TypeInfo, v151, v399, v400);
        SummonEffectComponent___c__DisplayClass45_3___ctor((SummonEffectComponent___c__DisplayClass45_3_o *)v414, 0LL);
        if ( !v414 )
          goto LABEL_376;
        *(_QWORD *)(v414 + 24) = v391;
        v421 = (Il2CppObject **)(v414 + 24);
        sub_1BCA784((PartyOrganizationUtility_o *)(v414 + 24), v391, v415, v416, v417, v418, v419, v420);
        Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
        if ( !Component_object )
          goto LABEL_376;
        Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11279/*"Rank"*/,
                                      0LL);
        if ( !Component_object )
          goto LABEL_376;
        v422 = v536;
        if ( v536 == -1 )
          v422 = 0;
        *(_DWORD *)(Component_object + 56) = v422;
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v421 || !Component_object )
          goto LABEL_376;
        DesignCardPath = DesignCardManager__GetDesignCardPath(
                           (DesignCardManager_o *)Component_object,
                           (int32_t)(*v421)[1].klass,
                           v402,
                           0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v423);
        Component_object = AssetManager__isExistAssetStorage(DesignCardPath, 0LL);
        if ( (Component_object & 1) == 0 )
        {
          if ( !*v421 )
            goto LABEL_376;
          LODWORD((*v421)[1].klass) = 1;
          Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v421 || !Component_object )
            goto LABEL_376;
          v402 = 3;
          DesignCardPath = DesignCardManager__GetDesignCardPath(
                             (DesignCardManager_o *)Component_object,
                             (int32_t)(*v421)[1].klass,
                             3,
                             0LL);
        }
        Component_object = (int64_t)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v431 = *(_QWORD *)(Component_object + 16);
        v432 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v431 )
          goto LABEL_376;
        v433 = *(int *)(Component_object + 24);
        if ( (unsigned int)v433 >= *(_DWORD *)(v431 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)DesignCardPath,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v432[4] + 192LL) + 112LL));
        }
        else
        {
          v434 = v431 + 8 * v433;
          *(_DWORD *)(Component_object + 24) = v433 + 1;
          *(_QWORD *)(v434 + 32) = DesignCardPath;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)(v434 + 32),
            (int64_t)DesignCardPath,
            v425,
            v426,
            v427,
            v428,
            v429,
            v430);
        }
        v456 = *v421;
        v457 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(
                                                     AssetLoader_LoadEndDataHandler_TypeInfo,
                                                     v435,
                                                     v436,
                                                     v437);
        AssetLoader_LoadEndDataHandler___ctor(
          v457,
          v456,
          Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v458);
        Component_object = AssetManager__loadAssetStorage(DesignCardPath, v457, 1, 0LL);
        if ( !*v421 )
          goto LABEL_376;
        monitor = (*v421)[1].monitor;
        if ( !monitor )
          goto LABEL_376;
        v460 = (System_String_o **)(monitor[14] == 1 ? &StringLiteral_2811/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/ : &StringLiteral_2810/*"BACKSIDE_CLASS_IMAGE_ID"*/);
        *(_DWORD *)(v414 + 16) = ConstantMaster__getValue(*v460, 0LL);
        v461 = (int32_t *)(v414 + 16);
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v463 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v461, v402, 0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v462);
        if ( !AssetManager__isExistAssetStorage(v463, 0LL) )
        {
          Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_376;
          v463 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v461, 3, 0LL);
        }
        Component_object = (int64_t)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v470 = *(_QWORD *)(Component_object + 16);
        v471 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v470 )
          goto LABEL_376;
        v472 = *(int *)(Component_object + 24);
        if ( (unsigned int)v472 >= *(_DWORD *)(v470 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v463,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v471[4] + 192LL) + 112LL));
        }
        else
        {
          v473 = v470 + 8 * v472;
          *(_DWORD *)(Component_object + 24) = v472 + 1;
          *(_QWORD *)(v473 + 32) = v463;
          sub_1BCA784((PartyOrganizationUtility_o *)(v473 + 32), (int64_t)v463, v464, v465, v466, v467, v468, v469);
        }
        v477 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(
                                                     AssetLoader_LoadEndDataHandler_TypeInfo,
                                                     v474,
                                                     v475,
                                                     v476);
        AssetLoader_LoadEndDataHandler___ctor(
          v477,
          (Il2CppObject *)v414,
          Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v478);
        v479 = v463;
        v480 = v477;
        goto LABEL_375;
      }
      v403 = sub_1BCAA2C(SummonEffectComponent___c__DisplayClass45_2_TypeInfo, v151, v399, v400);
      SummonEffectComponent___c__DisplayClass45_2___ctor((SummonEffectComponent___c__DisplayClass45_2_o *)v403, 0LL);
      if ( !v403 )
        goto LABEL_376;
      *(_QWORD *)(v403 + 24) = v391;
      v410 = (Il2CppObject **)(v403 + 24);
      sub_1BCA784((PartyOrganizationUtility_o *)(v403 + 24), v391, v404, v405, v406, v407, v408, v409);
      if ( !*(_QWORD *)(v403 + 24) )
        goto LABEL_376;
      *(_DWORD *)(v403 + 16) = *(_DWORD *)(*(_QWORD *)(v403 + 24) + 16LL);
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v151);
      LowerColorRarity = Rarity__getLowerColorRarity(v402, 0LL);
      if ( v538 != -1 )
        *(_DWORD *)(v403 + 16) = v538;
      v412 = v533 == -1 ? LowerColorRarity : v533;
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11279/*"Rank"*/,
                                    0LL);
      if ( v536 == -1 )
      {
        if ( !Component_object )
          goto LABEL_376;
        v413 = v541 == 2 ? 2 : 1;
      }
      else
      {
        v413 = v536;
        if ( !Component_object )
          goto LABEL_376;
      }
      *(_DWORD *)(Component_object + 56) = v413;
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v482 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v403 + 16),
               v412,
               0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v481);
      if ( !AssetManager__isExistAssetStorage(v482, 0LL) )
      {
        *(_DWORD *)(v403 + 16) = 1;
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v412 = 3;
        v482 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v403 + 16),
                 3,
                 0LL);
      }
      Component_object = (int64_t)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v489 = *(_QWORD *)(Component_object + 16);
      v490 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v489 )
        goto LABEL_376;
      v491 = *(int *)(Component_object + 24);
      if ( (unsigned int)v491 >= *(_DWORD *)(v489 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v482,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v490[4] + 192LL) + 112LL));
      }
      else
      {
        v492 = v489 + 8 * v491;
        *(_DWORD *)(Component_object + 24) = v491 + 1;
        *(_QWORD *)(v492 + 32) = v482;
        sub_1BCA784((PartyOrganizationUtility_o *)(v492 + 32), (int64_t)v482, v483, v484, v485, v486, v487, v488);
      }
      v496 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v493, v494, v495);
      AssetLoader_LoadEndDataHandler___ctor(
        v496,
        (Il2CppObject *)v403,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v497);
      AssetManager__loadAssetStorage(v482, v496, 1, 0LL);
      *(_DWORD *)(v403 + 20) = ConstantMaster__getValue((System_String_o *)StringLiteral_2810/*"BACKSIDE_CLASS_IMAGE_ID"*/, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v498 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v403 + 20),
               v412,
               0LL);
      if ( !AssetManager__isExistAssetStorage(v498, 0LL) )
      {
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v498 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v403 + 20),
                 3,
                 0LL);
      }
      Component_object = (int64_t)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v505 = *(_QWORD *)(Component_object + 16);
      v506 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v505 )
        goto LABEL_376;
      v507 = *(int *)(Component_object + 24);
      if ( (unsigned int)v507 >= *(_DWORD *)(v505 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v498,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v506[4] + 192LL) + 112LL));
      }
      else
      {
        v508 = v505 + 8 * v507;
        *(_DWORD *)(Component_object + 24) = v507 + 1;
        *(_QWORD *)(v508 + 32) = v498;
        sub_1BCA784((PartyOrganizationUtility_o *)(v508 + 32), (int64_t)v498, v499, v500, v501, v502, v503, v504);
      }
      v512 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v509, v510, v511);
      AssetLoader_LoadEndDataHandler___ctor(
        v512,
        (Il2CppObject *)v403,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v513);
      AssetManager__loadAssetStorage(v498, v512, 1, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !*v410 || !Component_object )
        goto LABEL_376;
      v450 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               (int32_t)(*v410)[1].klass,
               v402,
               0LL);
      Component_object = AssetManager__isExistAssetStorage(v450, 0LL);
      if ( (Component_object & 1) == 0 )
      {
        if ( !*v410 )
          goto LABEL_376;
        LODWORD((*v410)[1].klass) = 1;
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v410 || !Component_object )
          goto LABEL_376;
        v450 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 (int32_t)(*v410)[1].klass,
                 3,
                 0LL);
      }
      Component_object = (int64_t)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v520 = *(_QWORD *)(Component_object + 16);
      v521 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v520 )
        goto LABEL_376;
      v522 = *(int *)(Component_object + 24);
      if ( (unsigned int)v522 >= *(_DWORD *)(v520 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v450,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v521[4] + 192LL) + 112LL));
      }
      else
      {
        v523 = v520 + 8 * v522;
        *(_DWORD *)(Component_object + 24) = v522 + 1;
        *(_QWORD *)(v523 + 32) = v450;
        sub_1BCA784((PartyOrganizationUtility_o *)(v523 + 32), (int64_t)v450, v514, v515, v516, v517, v518, v519);
      }
      v527 = *v410;
      v455 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v524, v525, v526);
      AssetLoader_LoadEndDataHandler___ctor(
        v455,
        v527,
        Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v528);
    }
    v479 = v450;
    v480 = v455;
LABEL_375:
    AssetManager__loadAssetStorage(v479, v480, 1, 0LL);
    return;
  }
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4455/*"CardType"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = 4;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v158, 0LL);
  v288 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo, v151);
  if ( !v288 )
    goto LABEL_376;
  v289 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v288,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0LL);
  v291 = GachaBehaviorMaster_TypeInfo;
  v240 = (__int64 *)v289;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo, v290);
    v291 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v239,
                                (Il2CppObject *)v291->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v240 )
    goto LABEL_376;
  v285 = Component_object;
  if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
  {
    v240[7] = Component_object;
    sub_1BCA784((PartyOrganizationUtility_o *)(v240 + 7), Component_object, v292, v293, v294, v295, v296, v297);
    goto LABEL_172;
  }
LABEL_378:
  sub_1BCACFC(v285);
LABEL_379:
  sub_1BCACFC(v240);
  SummonEffectComponent__ChangeClassCardColor(v529, v530, v531, v532);
}


void __fastcall SummonEffectComponent___endAnimation_b__43_0(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *Component_object; // x0
  __int64 v19; // x1

  if ( (byte_4B1299A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5551/*"END_FADE"*/, v6, v7);
    byte_4B1299A = 1;
  }
  p_effect = &this->fields.effect;
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(effect, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Object_o *)*p_effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    UnityEngine_Object__Destroy_70154244(v11, 0LL);
    *p_effect = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effect, 0LL, v12, v13, v14, v15, v16, v17);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    sub_1BCAA3C(0LL, v19);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5551/*"END_FADE"*/, 0LL);
}


void __fastcall SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1298E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonEffectComponent__endAnimation_b__43_0__, v8, v9);
    byte_4B1298E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
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
    sub_1BCAA3C(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
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
  if ( (byte_4B129A1 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1BCA7E0(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d,
                                                              method);
    byte_4B129A1 = 1;
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&v14->fields.firstTPeelr, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v23 = v4->fields.__4__this;
  if ( !v23 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v23->fields.firstTr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v24 = v4->fields.__4__this;
  if ( !v24 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v24->fields.firstTPeelr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1BCAA3C(this, d);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct SummonEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_Shader_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  UnityEngine_Material_o *v19; // x21
  UnityEngine_Texture_o *v20; // x22

  v4 = this;
  if ( (byte_4B129A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITexture___, d, method);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v7, v8);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1BCA7E0(&StringLiteral_5024/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v9, v10);
    byte_4B129A2 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0LL);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5024/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0LL);
  v19 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v16, v17, v18);
  UnityEngine_Material___ctor(v19, v15, 0LL);
  if ( !Component_object
    || (v20 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[26].method)(
                                         Component_object,
                                         Component_object->klass->vtable[27].methodPtr),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_object->klass->vtable[25].method)(
                                                                  Component_object,
                                                                  v19,
                                                                  Component_object->klass->vtable[26].methodPtr),
        !v19)
    || (UnityEngine_Material__set_mainTexture(v19, v20, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, d);
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

  if ( (byte_4B129A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d, method);
    byte_4B129A3 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1BCAA3C(Instance, v6);
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
  if ( (byte_4B129A4 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_1BCA7E0(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d,
                                                              method);
    byte_4B129A4 = 1;
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&v16->fields.firstTPeelr, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v25 = v4->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_25;
  v26 = v25->fields.__4__this;
  if ( !v26 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v26->fields.firstTr, v4->fields.classCardId, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1BCAA3C(this, d);
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

  if ( (byte_4B129A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d, method);
    byte_4B129A5 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1BCAA3C(Instance, v6);
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

  if ( (byte_4B129A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d, method);
    byte_4B129A6 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1BCAA3C(Instance, v6);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals3; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v16; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v17; // x8
  UnityEngine_Transform_o *NodeFromName; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v19; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v20; // x8
  SummonEffectComponent___c__DisplayClass45_3_o *v21; // x20
  System_String_o **v22; // x8
  UnityEngine_Shader_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  UnityEngine_Material_o *v27; // x21
  UnityEngine_Texture_o *v28; // x22
  struct SummonEffectComponent___c__DisplayClass45_1_o *v29; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v30; // x8

  v4 = this;
  if ( (byte_4B129A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITexture___, d, method);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_15295/*"Unlit/Transparent Colored"*/, v9, v10);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_1BCA7E0(&StringLiteral_5024/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v11, v12);
    byte_4B129A7 = 1;
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
  v16 = v4->fields.CS___8__locals3;
  if ( !v16 )
    goto LABEL_22;
  v17 = v16->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_22;
  NodeFromName = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v17->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0LL);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v19 = v4->fields.CS___8__locals3;
  if ( !v19 )
    goto LABEL_22;
  v20 = v19->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_22;
  v21 = this;
  v22 = (System_String_o **)(v20->fields.cardType == 1 ? &StringLiteral_5024/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15295/*"Unlit/Transparent Colored"*/);
  v23 = UnityEngine_Shader__Find(*v22, 0LL);
  v27 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v24, v25, v26);
  UnityEngine_Material___ctor(v27, v23, 0LL);
  if ( !v21
    || (v28 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, void *))v21->klass[1].vtable._3_ToString.method)(
                                         v21,
                                         v21->klass[2]._1.image),
        this = (SummonEffectComponent___c__DisplayClass45_3_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v21->klass[1].vtable._2_GetHashCode.method)(
                                                                  v21,
                                                                  v27,
                                                                  v21->klass[1].vtable._3_ToString.methodPtr),
        !v27)
    || (UnityEngine_Material__set_mainTexture(v27, v28, 0LL), (v29 = v4->fields.CS___8__locals3) == 0LL)
    || (v30 = v29->fields.CS___8__locals1) == 0LL
    || (this = (SummonEffectComponent___c__DisplayClass45_3_o *)v30->fields.__4__this) == 0LL )
  {
LABEL_22:
    sub_1BCAA3C(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}