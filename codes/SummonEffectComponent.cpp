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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x1
  struct SummonEffectComponent_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct SummonEffectComponent_StaticFields *v25; // x0
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
  struct SummonEffectComponent_StaticFields *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7

  if ( (byte_4BC41D2 & 1) == 0 )
  {
    sub_1C1ABD4(&SummonEffectComponent_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_24091/*"summon_up_04"*/, v8);
    sub_1C1ABD4(&StringLiteral_24089/*"summon_up_02"*/, v9);
    sub_1C1ABD4(&StringLiteral_7159/*"GetAnimationName"*/, v10);
    sub_1C1ABD4(&StringLiteral_24090/*"summon_up_03"*/, v11);
    sub_1C1ABD4(&StringLiteral_24088/*"summon_up_01"*/, v12);
    sub_1C1ABD4(&StringLiteral_11361/*"RarityAnimationName"*/, v13);
    sub_1C1ABD4(&StringLiteral_15420/*"UpAnimationName"*/, v14);
    sub_1C1ABD4(&StringLiteral_7771/*"InitializeAnimationName"*/, v15);
    byte_4BC41D2 = 1;
  }
  SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION = (struct System_String_o *)StringLiteral_24088/*"summon_up_01"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)SummonEffectComponent_TypeInfo->static_fields,
    StringLiteral_24088/*"summon_up_01"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_24089/*"summon_up_02"*/;
  static_fields = SummonEffectComponent_TypeInfo->static_fields;
  static_fields->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_24089/*"summon_up_02"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&static_fields->RANKUP_TO_SILVER_ANIMATION,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_24090/*"summon_up_03"*/;
  v25 = SummonEffectComponent_TypeInfo->static_fields;
  v25->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_24090/*"summon_up_03"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->RANKUP_TO_GOLD_ANIMATION, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_24091/*"summon_up_04"*/;
  v33 = SummonEffectComponent_TypeInfo->static_fields;
  v33->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_24091/*"summon_up_04"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v33->RANKUP_COMMANDCODE_ANIMATION, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_15420/*"UpAnimationName"*/;
  v41 = SummonEffectComponent_TypeInfo->static_fields;
  v41->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15420/*"UpAnimationName"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v41->FSM_VARIABLE_UP_ANIMATION_NAME, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_7771/*"InitializeAnimationName"*/;
  v49 = SummonEffectComponent_TypeInfo->static_fields;
  v49->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7771/*"InitializeAnimationName"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v49->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = StringLiteral_11361/*"RarityAnimationName"*/;
  v57 = SummonEffectComponent_TypeInfo->static_fields;
  v57->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11361/*"RarityAnimationName"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v57->FSM_VARIABLE_RARITY_ANIMATION_NAME, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_7159/*"GetAnimationName"*/;
  v65 = SummonEffectComponent_TypeInfo->static_fields;
  v65->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7159/*"GetAnimationName"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v65->FSM_VARIABLE_GET_ANIMATION_NAME, v64, v66, v67, v68, v69, v70, v71);
  v72 = SummonEffectComponent_TypeInfo->static_fields;
  v72->rarityToColor = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v72->rarityToColor, 0LL, v73, v74, v75, v76, v77, v78);
}


void __fastcall SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  il2cpp_array_size_t max_length; // w8
  void *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BC41D1 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v3);
    byte_4BC41D1 = 1;
  }
  v4 = (struct System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 2LL);
  if ( !v4 )
    sub_1C1AE30(0LL, v5);
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = 512, max_length == 1) )
    sub_1C1AE38(v4, v4);
  v4->m_Items[2] = 875;
  this->fields.cardTextureSize = v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.cardTextureSize, (int64_t)v4, v6, v7, v8, v9, v10, v11);
  v13 = StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.effAnimName, (int64_t)v13, v14, v15, v16, v17, v18, v19);
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
  System_Collections_Generic_List_object__o *SummonInfos; // x20
  int64_t v20; // x24
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4BC41C1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__, *(_QWORD *)&servantId);
    sub_1C1ABD4(&SummonEffectComponent_SummonInfo_TypeInfo, v18);
    byte_4BC41C1 = 1;
  }
  SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  }
  v20 = sub_1C1AE20(SummonEffectComponent_SummonInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  *(_DWORD *)(v20 + 16) = servantId;
  *(_DWORD *)(v20 + 20) = limitCount;
  *(_BYTE *)(v20 + 24) = isRankup;
  *(_BYTE *)(v20 + 25) = isNewCard;
  *(_DWORD *)(v20 + 28) = noticeRarity;
  *(_DWORD *)(v20 + 32) = rarity;
  *(_DWORD *)(v20 + 36) = cardType;
  *(_BYTE *)(v20 + 40) = isSkipStop;
  *(_QWORD *)(v20 + 48) = userSvtId;
  if ( !SummonInfos
    || (items = SummonInfos->fields._items,
        v30 = Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__,
        ++SummonInfos->fields._version,
        !items) )
  {
    sub_1C1AE30(v21, v22);
  }
  size = SummonInfos->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      SummonInfos,
      (Il2CppObject *)v20,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    SummonInfos->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v20;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v32 + 4), v20, v23, v24, v25, v26, v27, v28);
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
  if ( (byte_4BC41CA & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UITexture___, cardNode);
    byte_4BC41CA = 1;
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
                                             (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, const char *))this->klass[2]._1.gc_desc)(
                                            this,
                                            v8,
                                            this->klass[2]._1.name),
        (cardTextureSize = v6->fields.cardTextureSize) == 0LL) )
  {
LABEL_10:
    sub_1C1AE30(this, cardNode);
  }
  if ( cardTextureSize->max_length <= 1 )
LABEL_11:
    sub_1C1AE38(this, cardNode);
  v11.fields.m_Height = (float)cardTextureSize->m_Items[2] * 0.00097656;
  v11.fields.m_XMin = 0.0;
  v11.fields.m_YMin = 1.0 - v11.fields.m_Height;
  v11.fields.m_Width = 0.5;
  UITexture__set_uvRect(v9, v11, 0LL);
}


void __fastcall SummonEffectComponent__CompleteCallback(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t counterMax; // w9
  int32_t v5; // w8
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1

  if ( (byte_4BC41CB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1C1ABD4(&StringLiteral_12167/*"SETUP_DONE"*/, v3);
    byte_4BC41CB = 1;
  }
  counterMax = this->fields._counterMax;
  v5 = this->fields._counter + 1;
  this->fields._counter = v5;
  if ( v5 >= counterMax )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C1AE30(0LL, v7);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_12167/*"SETUP_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19

  if ( (byte_4BC41C3 & 1) == 0 )
  {
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4BC41C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1C1AE30(Instance, v4);
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
  int *Component_object; // x0
  Il2CppObject *RANKUP_TO_SILVER_ANIMATION; // x1
  PlayMakerFSM_o *v22; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x8
  Il2CppObject *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x21
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_List_object__o *upAnimationNameList; // x21
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x8
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  __int64 v79; // x8
  _BOOL8 v80; // x0
  __int64 v81; // x1
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v83; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  AssetLoader_LoadEndDataHandler_o *v86; // x22
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BC41C4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__, v5);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1C1ABD4(&Method_SummonEffectComponent_OnCharaGraphLoadDone__, v15);
    sub_1C1ABD4(&SummonEffectComponent_TypeInfo, v16);
    sub_1C1ABD4(&StringLiteral_8196/*"IsNoSkip"*/, v17);
    sub_1C1ABD4(&StringLiteral_18578/*"countMax"*/, v18);
    sub_1C1ABD4(&StringLiteral_13320/*"SummonEffectAnimation"*/, v19);
    byte_4BC41C4 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_46;
  v22 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_18578/*"countMax"*/,
                              0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_46;
  if ( !Component_object )
    goto LABEL_46;
  Component_object[14] = SummonInfos->fields._size;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v22, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_8196/*"IsNoSkip"*/,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  *((_BYTE *)Component_object + 56) = this->fields.isNoSkip;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v22, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_13320/*"SummonEffectAnimation"*/,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                              (HutongGames_PlayMaker_FsmGameObject_o *)Component_object,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  v24 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)Component_object,
          (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = (struct UnityEngine_Animation_o *)v24;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.effAnimation, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v31;
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.upAnimationNameList,
    (int64_t)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
  v47 = Method_System_Collections_Generic_List_string__Add__;
  ++upAnimationNameList->fields._version;
  if ( !items )
    goto LABEL_46;
  size = upAnimationNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      upAnimationNameList,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    upAnimationNameList->fields._size = size + 1;
    v49[4] = (Il2CppClass *)RANKUP_TO_SILVER_ANIMATION;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)(v49 + 4),
      (int64_t)RANKUP_TO_SILVER_ANIMATION,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v56 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION;
  v57 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v56 )
    goto LABEL_46;
  v58 = Component_object[6];
  if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = v56 + 8 * v58;
    Component_object[6] = v58 + 1;
    *(_QWORD *)(v59 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)(v59 + 32),
      (int64_t)RANKUP_TO_SILVER_ANIMATION,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v66 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION;
  v67 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v66 )
    goto LABEL_46;
  v68 = Component_object[6];
  if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
  }
  else
  {
    v69 = v66 + 8 * v68;
    Component_object[6] = v68 + 1;
    *(_QWORD *)(v69 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)(v69 + 32),
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
  v76 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION;
  v77 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v76 )
    goto LABEL_46;
  v78 = Component_object[6];
  if ( (unsigned int)v78 >= *(_DWORD *)(v76 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
  }
  else
  {
    v79 = v76 + 8 * v78;
    Component_object[6] = v78 + 1;
    *(_QWORD *)(v79 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)(v79 + 32),
      (int64_t)RANKUP_TO_SILVER_ANIMATION,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  Component_object = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Component_object
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_object, 1, 0LL),
        (Component_object = (int *)this->fields.SummonInfos) == 0LL) )
  {
LABEL_46:
    sub_1C1AE30(Component_object, RANKUP_TO_SILVER_ANIMATION);
  }
  this->fields.DownloadCounter = Component_object[6];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    (System_Collections_Generic_List_object__o *)Component_object,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v88 = v87;
  while ( 1 )
  {
    v80 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v80 )
      break;
    if ( !v88.fields._current )
      sub_1C1AE30(v80, v81);
    klass = (int32_t)v88.fields._current[1].klass;
    if ( HIDWORD(v88.fields._current[2].klass) == 3 )
    {
      v83 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v83,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadCommandAsset(klass, v83, 0LL);
    }
    else
    {
      klass_high = HIDWORD(v88.fields._current[1].klass);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0LL);
      v86 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v86,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v86, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void __fastcall SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BC41C0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo, v3);
    byte_4BC41C0 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.SummonInfos, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4BC41C5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, loadData);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C1ABD4(&StringLiteral_7542/*"INIT_DONE"*/, v5);
    byte_4BC41C5 = 1;
  }
  v6 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v6;
  if ( !v6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL),
          (Instance = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0LL) )
    {
      sub_1C1AE30(Instance, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7542/*"INIT_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1

  if ( (byte_4BC41D0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1C1ABD4(&StringLiteral_5827/*"EVENT_SKIP"*/, v3);
    byte_4BC41D0 = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C1AE30(0LL, v5);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5827/*"EVENT_SKIP"*/, 0LL);
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
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_string__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BC41C6 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_4BC41C6 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v15.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v12 = this->fields._releaseAssetPath;
    if ( !v12 )
      sub_1C1AE30(v10, v11);
    size = v12->fields._size;
    v14 = v12->fields._version + 1;
    v12->fields._size = 0;
    v12->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
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
  void *Component_object; // x0
  __int64 v8; // x1
  PlayMakerFSM_o *v9; // x20
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x8
  int32_t v11; // w1
  Il2CppObject *Item; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  HutongGames_PlayMaker_FsmVariables_o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_String_o *effAnimName; // x1

  if ( (byte_4BC41CC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v4);
    sub_1C1ABD4(&SummonEffectComponent_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_11347/*"Rank"*/, v6);
    byte_4BC41CC = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object
    || (v9 = (PlayMakerFSM_o *)Component_object,
        (Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL)) == 0LL)
    || (Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                             (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                             (System_String_o *)StringLiteral_11347/*"Rank"*/,
                             0LL)) == 0LL )
  {
LABEL_17:
    sub_1C1AE30(Component_object, v8);
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
  v11 = (int)Component_object;
  if ( (int)Component_object >= upAnimationNameList->fields._size )
LABEL_11:
    v11 = 0;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.upAnimationNameList,
           v11,
           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.effAnimName = (struct System_String_o *)Item;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.effAnimName, (int64_t)Item, v13, v14, v15, v16, v17, v18);
  Component_object = PlayMakerFSM__get_FsmVariables(v9, 0LL);
  v19 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v19 )
    goto LABEL_17;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v19,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_17;
  effAnimName = this->fields.effAnimName;
  *((_QWORD *)Component_object + 7) = effAnimName;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)((char *)Component_object + 56),
    (int64_t)effAnimName,
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
  PlayMakerFSM_o *Component_object; // x0
  __int64 v6; // x1
  PlayMakerFSM_o *v7; // x19
  HutongGames_PlayMaker_FsmVariables_o *v8; // x20
  System_String_o *Value; // x0

  if ( (byte_4BC41CD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1C1ABD4(&SummonEffectComponent_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_7535/*"INITIALIZE_ANIMATION"*/, v4);
    byte_4BC41CD = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_10;
  v7 = Component_object;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0LL);
  v8 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v8
    || (Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                               v8,
                                               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                               0LL)) == 0LL )
  {
LABEL_10:
    sub_1C1AE30(Component_object, v6);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) )
    PlayMakerFSM__SendEvent(v7, (System_String_o *)StringLiteral_7535/*"INITIALIZE_ANIMATION"*/, 0LL);
}


void __fastcall SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  SummonEffectComponent_c *v5; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  SummonEffectComponent_c *v15; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_4BC41C2 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__,
      method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__, v2);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo, v3);
    sub_1C1ABD4(&SummonEffectComponent_TypeInfo, v4);
    byte_4BC41C2 = 1;
  }
  v5 = SummonEffectComponent_TypeInfo;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v5 = SummonEffectComponent_TypeInfo;
  }
  if ( !v5->static_fields->rarityToColor )
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
      v6,
      (const MethodInfo_32CF12C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v6 )
      sub_1C1AE30(v7, v8);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      0,
      0,
      (const MethodInfo_32CFAF0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      1,
      0,
      (const MethodInfo_32CFAF0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      2,
      0,
      (const MethodInfo_32CFAF0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      3,
      1,
      (const MethodInfo_32CFAF0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      4,
      2,
      (const MethodInfo_32CFAF0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      5,
      2,
      (const MethodInfo_32CFAF0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      101,
      0,
      (const MethodInfo_32CFAF0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      102,
      0,
      (const MethodInfo_32CFAF0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v15 = SummonEffectComponent_TypeInfo;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v15 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v15->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v6;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->rarityToColor, (int64_t)v6, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall SummonEffectComponent__StopRarityAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *Component_object; // x0
  __int64 v7; // x1
  HutongGames_PlayMaker_FsmVariables_o *v8; // x20
  System_String_o *Value; // x0
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v11; // x20
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0

  if ( (byte_4BC41CF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    sub_1C1ABD4(&SoundManager_TypeInfo, v4);
    sub_1C1ABD4(&SummonEffectComponent_TypeInfo, v5);
    byte_4BC41CF = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0LL);
  v8 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v8 )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                         v8,
                                         SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                                         0LL);
  if ( !Component_object )
    goto LABEL_22;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v11 = Value;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0LL, 0LL) && !System_String__IsNullOrEmpty(v11, 0LL) )
  {
    Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
    if ( Component_object )
    {
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)Component_object, v11, 0LL) )
        return;
      Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
      if ( Component_object )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)Component_object,
                                                   v11,
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
    sub_1C1AE30(Component_object, v7);
  }
}


void __fastcall SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *effAnimation; // x20
  __int64 v5; // x1
  UnityEngine_Animation_o *ComponentsInChildren_object; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v10; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v12; // x20

  if ( (byte_4BC41CE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____77566368, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BC41CE = 1;
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
    sub_1C1AE30(ComponentsInChildren_object, v5);
  }
LABEL_14:
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                             1,
                                                             (const MethodInfo_2F96A20 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____77566368);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  klass = ComponentsInChildren_object[1].klass;
  v10 = ComponentsInChildren_object;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1C1AE38(ComponentsInChildren_object, v5);
      v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
      if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)v12,
                                                                   0LL);
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object, 0, 0LL);
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
  void *Component_object; // x0
  __int64 v16; // x1
  PlayMakerFSM_o *v17; // x20
  int32_t v18; // w21
  int v19; // w28
  int v20; // w27
  char v21; // w26
  int v22; // w25
  int v23; // w23
  int v24; // w22
  int v25; // w24
  char v26; // w21
  HutongGames_PlayMaker_FsmVariables_o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int v46; // w9
  int v47; // w22
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20

  if ( (byte_4BC41C8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&SummonEffectComponent_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_8195/*"IsNewCard"*/, v6);
    sub_1C1ABD4(&StringLiteral_18577/*"countIndex"*/, v7);
    sub_1C1ABD4(&StringLiteral_8208/*"IsRankUp"*/, v8);
    sub_1C1ABD4(&StringLiteral_8212/*"IsSkipStop"*/, v9);
    sub_1C1ABD4(&StringLiteral_8571/*"LimitCount"*/, v10);
    sub_1C1ABD4(&StringLiteral_9754/*"NoticeRarity"*/, v11);
    sub_1C1ABD4(&StringLiteral_4472/*"CardType"*/, v12);
    sub_1C1ABD4(&StringLiteral_11359/*"Rarity"*/, v13);
    sub_1C1ABD4(&StringLiteral_12871/*"ServantId"*/, v14);
    byte_4BC41C8 = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_66;
  v17 = (PlayMakerFSM_o *)Component_object;
  Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_18577/*"countIndex"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = (void *)HutongGames_PlayMaker_FsmInt__get_Value(
                               (HutongGames_PlayMaker_FsmInt_o *)Component_object,
                               0LL);
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v18 = (int)Component_object;
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       (int32_t)Component_object,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v19 = *((_DWORD *)Component_object + 4);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v20 = *((_DWORD *)Component_object + 5);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v21 = *((_BYTE *)Component_object + 24);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v22 = *((unsigned __int8 *)Component_object + 25);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v23 = *((_DWORD *)Component_object + 7);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v24 = *((_DWORD *)Component_object + 8);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v25 = *((_DWORD *)Component_object + 9);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  v26 = *((_BYTE *)Component_object + 40);
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_12871/*"ServantId"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v19;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8571/*"LimitCount"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v20;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8208/*"IsRankUp"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v21;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8212/*"IsSkipStop"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v26;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  v27 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v27 )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v27,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)((char *)Component_object + 56), 0LL, v28, v29, v30, v31, v32, v33);
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)((char *)Component_object + 56), 0LL, v34, v35, v36, v37, v38, v39);
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)((char *)Component_object + 56), 0LL, v40, v41, v42, v43, v44, v45);
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8195/*"IsNewCard"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v22 != 0 || v24 == 0;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_9754/*"NoticeRarity"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v23;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_4472/*"CardType"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  if ( v24 )
    v46 = 0;
  else
    v46 = 3;
  *((_DWORD *)Component_object + 14) = v25;
  if ( v24 == 3 )
    v46 = 1;
  v47 = (v24 & 0xFFFFFFFE) == 4 ? 2 : v46;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_11359/*"Rarity"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v47;
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
      sub_1C1AE30(Component_object, v16);
    }
  }
}


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
  int64_t v75; // x21
  int64_t Component_object; // x0
  System_String_c *v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  PlayMakerFSM_o *v84; // x23
  int32_t v85; // w19
  int v86; // w28
  int v87; // w26
  int v88; // w22
  unsigned int v89; // w25
  char v90; // w27
  System_Collections_Generic_List_object__o *v91; // x19
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  HutongGames_PlayMaker_FsmVariables_o *v98; // x19
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int v105; // w22
  HutongGames_PlayMaker_FsmVariables_o *v106; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  Il2CppObject *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  System_String_o *v126; // x24
  float v127; // s8
  System_String_o *v128; // x0
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  System_String_o *v135; // x0
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  System_String_o *v142; // x0
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  System_String_o *v149; // x0
  System_String_o **v150; // x19
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v158; // x24
  UnityEngine_Transform_o *v159; // x22
  int32_t Item; // w25
  _BOOL4 v161; // w29
  System_Collections_Generic_List_object__o *GachaBehaviors; // x0
  System_Collections_Generic_List_object__o *v163; // x22
  System_Collections_Generic_Dictionary_object__object__o *v164; // x26
  __int64 *v165; // x22
  GachaBehaviorMaster_c *v166; // x0
  int v167; // w29
  Il2CppObject *v168; // x0
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  __int64 v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  __int64 v178; // x8
  int32_t v179; // w0
  GachaBehaviorMaster_c *v180; // x0
  GachaBehaviorMaster_c *v181; // x0
  int v182; // w8
  GachaBehaviorMaster_c *v183; // x0
  GachaBehaviorMaster_c *v184; // x0
  int v185; // w8
  GachaBehaviorMaster_c *v186; // x0
  GachaBehaviorMaster_c *v187; // x0
  int v188; // w8
  GachaBehaviorMaster_c *v189; // x0
  GachaBehaviorMaster_c *v190; // x0
  int v191; // w8
  GachaBehaviorMaster_c *v192; // x0
  _BOOL4 v193; // w10
  HutongGames_PlayMaker_FsmVariables_o *v194; // x22
  HutongGames_PlayMaker_FsmString_o *v195; // x0
  GachaBehaviorMaster_c *v196; // x8
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7
  int64_t v203; // x8
  GachaBehaviorMaster_c *v204; // x0
  HutongGames_PlayMaker_FsmVariables_o *v205; // x22
  HutongGames_PlayMaker_FsmString_o *v206; // x0
  GachaBehaviorMaster_c *v207; // x8
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  GachaBehaviorMaster_c *v214; // x0
  HutongGames_PlayMaker_FsmVariables_o *v215; // x22
  HutongGames_PlayMaker_FsmString_o *v216; // x0
  GachaBehaviorMaster_c *v217; // x8
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  UnityEngine_Object_o *prevObject; // x22
  struct UnityEngine_GameObject_o **p_prevObject; // x26
  int v226; // w9
  int32_t v227; // w8
  UnityEngine_Object_o *v228; // x22
  int64_t v229; // x2
  int32_t v230; // w3
  System_String_o *v231; // x4
  BattleSetupInfo_o *v232; // x5
  FollowerInfo_o *v233; // x6
  PartyListViewItem_o *v234; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v236; // x28
  bool v237; // w28
  UnityEngine_GameObject_o *v238; // x22
  Il2CppObject *v239; // x28
  System_Action_o *v240; // x25
  System_Action_o *v241; // x25
  UnityEngine_Component_o *v242; // x22
  UnityEngine_Transform_o *v243; // x28
  UnityEngine_GameObject_o *v244; // x0
  int64_t v245; // x2
  int32_t v246; // w3
  System_String_o *v247; // x4
  BattleSetupInfo_o *v248; // x5
  FollowerInfo_o *v249; // x6
  PartyListViewItem_o *v250; // x7
  System_String_o *v251; // x24
  System_String_o *v252; // x22
  UnityEngine_Transform_o *v253; // x0
  UnityEngine_Component_o *v254; // x26
  UnityEngine_Transform_o *v255; // x0
  UnityEngine_Component_o *v256; // x24
  int32_t v257; // w22
  int v258; // w8
  UnityEngine_Transform_o *v259; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v261; // x3
  UnityEngine_Transform_o *v262; // x0
  UnityEngine_Transform_o *v263; // x0
  const MethodInfo *v264; // x3
  UnityEngine_Transform_o *v265; // x0
  UnityEngine_Transform_o *v266; // x1
  const MethodInfo *v267; // x3
  SummonEffectComponent_o *v268; // x0
  int32_t v269; // w2
  System_String_o *v270; // x0
  System_String_o *v271; // x19
  System_String_o *v272; // x0
  System_String_o *v273; // x0
  int64_t v274; // x2
  int32_t v275; // w3
  System_String_o *v276; // x4
  BattleSetupInfo_o *v277; // x5
  FollowerInfo_o *v278; // x6
  PartyListViewItem_o *v279; // x7
  System_Collections_Generic_List_object__o *v280; // x8
  struct System_Object_array *items; // x9
  _QWORD *v282; // x10
  __int64 size; // x11
  System_String_o *v284; // x19
  Il2CppClass **v285; // x0
  UnityEngine_Transform_o *v286; // x0
  UnityEngine_Transform_o *v287; // x0
  UnityEngine_Transform_o *v288; // x0
  const MethodInfo *v289; // x3
  const MethodInfo *v290; // x1
  int64_t v291; // x24
  int64_t v292; // x2
  int32_t v293; // w3
  System_String_o *v294; // x4
  BattleSetupInfo_o *v295; // x5
  FollowerInfo_o *v296; // x6
  PartyListViewItem_o *v297; // x7
  Il2CppObject *v298; // x19
  int v299; // w8
  int32_t v300; // w19
  __int64 v301; // x21
  int64_t v302; // x2
  int32_t v303; // w3
  System_String_o *v304; // x4
  BattleSetupInfo_o *v305; // x5
  FollowerInfo_o *v306; // x6
  PartyListViewItem_o *v307; // x7
  Il2CppObject **v308; // x20
  int32_t LowerColorRarity; // w0
  int32_t v310; // w22
  int v311; // w8
  __int64 v312; // x20
  int64_t v313; // x2
  int32_t v314; // w3
  System_String_o *v315; // x4
  BattleSetupInfo_o *v316; // x5
  FollowerInfo_o *v317; // x6
  PartyListViewItem_o *v318; // x7
  Il2CppObject **v319; // x21
  int v320; // w8
  System_String_o *DesignCardPath; // x22
  int64_t v322; // x2
  int32_t v323; // w3
  System_String_o *v324; // x4
  BattleSetupInfo_o *v325; // x5
  FollowerInfo_o *v326; // x6
  PartyListViewItem_o *v327; // x7
  __int64 v328; // x8
  _QWORD *v329; // x9
  __int64 v330; // x10
  __int64 v331; // x8
  AssetLoader_LoadEndDataHandler_o *v332; // x20
  int64_t v333; // x2
  int32_t v334; // w3
  System_String_o *v335; // x4
  BattleSetupInfo_o *v336; // x5
  FollowerInfo_o *v337; // x6
  PartyListViewItem_o *v338; // x7
  System_Collections_Generic_List_object__o *v339; // x8
  struct System_Object_array *v340; // x9
  _QWORD *v341; // x10
  __int64 v342; // x11
  System_String_o *v343; // x19
  Il2CppClass **v344; // x0
  AssetLoader_LoadEndDataHandler_o *v345; // x20
  Il2CppObject *v346; // x24
  AssetLoader_LoadEndDataHandler_o *v347; // x23
  _DWORD *monitor; // x8
  System_String_o **v349; // x8
  int32_t *v350; // x21
  System_String_o *v351; // x19
  int64_t v352; // x2
  int32_t v353; // w3
  System_String_o *v354; // x4
  BattleSetupInfo_o *v355; // x5
  FollowerInfo_o *v356; // x6
  PartyListViewItem_o *v357; // x7
  __int64 v358; // x8
  _QWORD *v359; // x9
  __int64 v360; // x10
  __int64 v361; // x8
  AssetLoader_LoadEndDataHandler_o *v362; // x21
  System_String_o *v363; // x0
  AssetLoader_LoadEndDataHandler_o *v364; // x1
  System_String_o *v365; // x23
  int64_t v366; // x2
  int32_t v367; // w3
  System_String_o *v368; // x4
  BattleSetupInfo_o *v369; // x5
  FollowerInfo_o *v370; // x6
  PartyListViewItem_o *v371; // x7
  __int64 v372; // x8
  _QWORD *v373; // x9
  __int64 v374; // x10
  __int64 v375; // x8
  AssetLoader_LoadEndDataHandler_o *v376; // x24
  System_String_o *v377; // x22
  int64_t v378; // x2
  int32_t v379; // w3
  System_String_o *v380; // x4
  BattleSetupInfo_o *v381; // x5
  FollowerInfo_o *v382; // x6
  PartyListViewItem_o *v383; // x7
  __int64 v384; // x8
  _QWORD *v385; // x9
  __int64 v386; // x10
  __int64 v387; // x8
  AssetLoader_LoadEndDataHandler_o *v388; // x23
  int64_t v389; // x2
  int32_t v390; // w3
  System_String_o *v391; // x4
  BattleSetupInfo_o *v392; // x5
  FollowerInfo_o *v393; // x6
  PartyListViewItem_o *v394; // x7
  __int64 v395; // x8
  _QWORD *v396; // x9
  __int64 v397; // x10
  __int64 v398; // x8
  Il2CppObject *v399; // x21
  SummonEffectComponent___c__DisplayClass45_0_o *v400; // x0
  const MethodInfo *v401; // x1
  int v402; // [xsp+Ch] [xbp-D4h]
  int v403; // [xsp+10h] [xbp-D0h]
  int v404; // [xsp+14h] [xbp-CCh]
  int v405; // [xsp+18h] [xbp-C8h]
  _BOOL4 v406; // [xsp+1Ch] [xbp-C4h]
  int v407; // [xsp+34h] [xbp-ACh]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+38h] [xbp-A8h]
  int64_t v409; // [xsp+40h] [xbp-A0h]
  int32_t v410; // [xsp+50h] [xbp-90h]
  int key; // [xsp+54h] [xbp-8Ch]
  int32_t v412; // [xsp+58h] [xbp-88h]
  int32_t svtId; // [xsp+5Ch] [xbp-84h]
  int v414; // [xsp+60h] [xbp-80h] BYREF
  int v415; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v417; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v418; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v419; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v420; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v421; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC41C9 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AssetManager_TypeInfo, v3);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v5);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UISprite___, v6);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UITexture___, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_GachaBehaviorMaster___, v8);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantClassMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1C1ABD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v14);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v17);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__,
      v18);
    sub_1C1ABD4(&GachaBehaviorMaster_TypeInfo, v19);
    sub_1C1ABD4(&int_TypeInfo, v20);
    sub_1C1ABD4(&long_TypeInfo, v21);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v22);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Contains__, v23);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__IndexOf__, v24);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v25);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__, v26);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v27);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__, v28);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v29);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v30);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v31);
    sub_1C1ABD4(&Rarity_TypeInfo, v32);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v34);
    sub_1C1ABD4(&string_TypeInfo, v35);
    sub_1C1ABD4(&SummonEffectComponent_TypeInfo, v36);
    sub_1C1ABD4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__, v37);
    sub_1C1ABD4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__, v38);
    sub_1C1ABD4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__, v39);
    sub_1C1ABD4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__, v40);
    sub_1C1ABD4(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__, v41);
    sub_1C1ABD4(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo, v42);
    sub_1C1ABD4(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__, v43);
    sub_1C1ABD4(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__, v44);
    sub_1C1ABD4(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo, v45);
    sub_1C1ABD4(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__, v46);
    sub_1C1ABD4(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__, v47);
    sub_1C1ABD4(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo, v48);
    sub_1C1ABD4(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__, v49);
    sub_1C1ABD4(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo, v50);
    sub_1C1ABD4(&StringLiteral_4468/*"CardScale"*/, v51);
    sub_1C1ABD4(&StringLiteral_4469/*"CardSecondName"*/, v52);
    sub_1C1ABD4(&StringLiteral_4460/*"CardFirstName"*/, v53);
    sub_1C1ABD4(&StringLiteral_8195/*"IsNewCard"*/, v54);
    sub_1C1ABD4(&StringLiteral_4467/*"CardRotName"*/, v55);
    sub_1C1ABD4(&StringLiteral_4638/*"CodeCardRarity02"*/, v56);
    sub_1C1ABD4(&StringLiteral_2821/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v57);
    sub_1C1ABD4(&StringLiteral_11347/*"Rank"*/, v58);
    sub_1C1ABD4(&StringLiteral_18577/*"countIndex"*/, v59);
    sub_1C1ABD4(&StringLiteral_13318/*"SummonEffect"*/, v60);
    sub_1C1ABD4(&StringLiteral_23180/*"rarity"*/, v61);
    sub_1C1ABD4(&StringLiteral_8208/*"IsRankUp"*/, v62);
    sub_1C1ABD4(&StringLiteral_16389/*"_0"*/, v63);
    sub_1C1ABD4(&StringLiteral_4637/*"CodeCardRarity"*/, v64);
    sub_1C1ABD4(&StringLiteral_8212/*"IsSkipStop"*/, v65);
    sub_1C1ABD4(&StringLiteral_8571/*"LimitCount"*/, v66);
    sub_1C1ABD4(&StringLiteral_9754/*"NoticeRarity"*/, v67);
    sub_1C1ABD4(&StringLiteral_2820/*"BACKSIDE_CLASS_IMAGE_ID"*/, v68);
    sub_1C1ABD4(&StringLiteral_4472/*"CardType"*/, v69);
    sub_1C1ABD4(&StringLiteral_4466/*"CardNodeName"*/, v70);
    sub_1C1ABD4(&StringLiteral_4461/*"CardFirstPeelName"*/, v71);
    sub_1C1ABD4(&StringLiteral_24082/*"summon_rarity_0"*/, v72);
    sub_1C1ABD4(&StringLiteral_11359/*"Rarity"*/, v73);
    sub_1C1ABD4(&StringLiteral_12871/*"ServantId"*/, v74);
    byte_4BC41C9 = 1;
  }
  entity = 0LL;
  v415 = 0;
  v75 = sub_1C1AE20(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v75, 0LL);
  if ( !v75 )
    goto LABEL_376;
  *(_QWORD *)(v75 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v75 + 16), (int64_t)this, v78, v79, v80, v81, v82, v83);
  this->fields.isNoSkipAll = 0;
  Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_376;
  v84 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_18577/*"countIndex"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Component_object, 0LL);
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v85 = Component_object;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                Component_object,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  svtId = *(_DWORD *)(Component_object + 16);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v85,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v412 = *(_DWORD *)(Component_object + 20);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v85,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v86 = *(unsigned __int8 *)(Component_object + 24);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v85,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v87 = *(unsigned __int8 *)(Component_object + 25);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v85,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v88 = *(_DWORD *)(Component_object + 28);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v85,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v89 = *(_DWORD *)(Component_object + 32);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v85,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(v75 + 56) = *(_DWORD *)(Component_object + 36);
  Component_object = (int64_t)this->fields.SummonInfos;
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Component_object,
                                v85,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v90 = *(_BYTE *)(Component_object + 40);
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v85,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v409 = *(_QWORD *)(Component_object + 48);
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v77);
  v91 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v91,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v91;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields._releaseAssetPath, (int64_t)v91, v92, v93, v94, v95, v96, v97);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_12871/*"ServantId"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = svtId;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8571/*"LimitCount"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v412;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8208/*"IsRankUp"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v86;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8212/*"IsSkipStop"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v90;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  v98 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v98 )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                v98,
                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_QWORD *)(Component_object + 56) = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)(Component_object + 56), 0LL, v99, v100, v101, v102, v103, v104);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8195/*"IsNewCard"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v87 != 0 || v89 == 0;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_9754/*"NoticeRarity"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v88;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4472/*"CardType"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = *(_DWORD *)(v75 + 56);
  if ( v89 - 3 >= 3 )
    v105 = v89 ? 0 : 3;
  else
    v105 = dword_C3403C[v89 - 3];
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_11359/*"Rarity"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v105;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  v106 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  key = v89;
  if ( !v106 )
    goto LABEL_376;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v106,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0LL);
  v414 = v105;
  v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v414, v108, v109, v110);
  Component_object = (int64_t)System_String__Concat((Il2CppObject *)StringLiteral_24082/*"summon_rarity_0"*/, v111, 0LL);
  if ( !FsmString )
    goto LABEL_376;
  FsmString->fields.value = (struct System_String_o *)Component_object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&FsmString->fields.value,
    Component_object,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13318/*"SummonEffect"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, 0LL);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.effect, (int64_t)Value, v120, v121, v122, v123, v124, v125);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4466/*"CardNodeName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v126 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4468/*"CardScale"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v127 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_object, 0LL);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4460/*"CardFirstName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v128 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v75 + 24) = v128;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v75 + 24), (int64_t)v128, v129, v130, v131, v132, v133, v134);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4461/*"CardFirstPeelName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v135 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v75 + 32) = v135;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v75 + 32), (int64_t)v135, v136, v137, v138, v139, v140, v141);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4469/*"CardSecondName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v142 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v75 + 40) = v142;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v75 + 40), (int64_t)v142, v143, v144, v145, v146, v147, v148);
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4467/*"CardRotName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v149 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v75 + 48) = v149;
  v150 = (System_String_o **)(v75 + 48);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v75 + 48), (int64_t)v149, v151, v152, v153, v154, v155, v156);
  Component_object = (int64_t)*p_effect;
  if ( !*p_effect )
    goto LABEL_376;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  Component_object = (int64_t)TransformHelper__getNodeFromName(transform, v126, 1, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  v158 = (UnityEngine_Component_o *)Component_object;
  Component_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
  Component_object = (int64_t)UnityEngine_Component__get_gameObject(v158, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  v159 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4BC2146 )
  {
    Component_object = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v77);
    byte_4BC2146 = 1;
  }
  if ( !v159 )
    goto LABEL_376;
  UnityEngine_Transform__set_localScale(v159, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v77 = (System_String_c *)v89;
  Component_object = (int64_t)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_object )
    goto LABEL_376;
  Item = System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)Component_object,
           v89,
           (const MethodInfo_32CFA54 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Component_object,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_object )
    goto LABEL_376;
  v161 = v86 != 0 && Item != 0;
  GachaBehaviors = (System_Collections_Generic_List_object__o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                                  (GachaBehaviorMaster_o *)Component_object,
                                                                  this->fields.gachaId,
                                                                  svtId,
                                                                  0LL);
  v410 = Item;
  if ( !GachaBehaviors || (v163 = GachaBehaviors, GachaBehaviors->fields._size < 1) )
  {
    v403 = -1;
    v404 = -1;
    v402 = -1;
    v407 = -1;
    v405 = -1;
    goto LABEL_185;
  }
  v406 = v86 != 0 && Item != 0;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                GachaBehaviors,
                                0,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !*(_QWORD *)(Component_object + 24) )
  {
    v403 = -1;
    v404 = -1;
    v402 = -1;
    v407 = -1;
    v405 = -1;
    goto LABEL_184;
  }
  if ( v87 )
    this->fields.isNoSkipAll = 1;
  Component_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v163,
                                0,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v164 = *(System_Collections_Generic_Dictionary_object__object__o **)(Component_object + 24);
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  if ( !v164 )
    goto LABEL_376;
  v165 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v164,
         (Il2CppObject *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v166 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v166 = GachaBehaviorMaster_TypeInfo;
    }
    v168 = System_Collections_Generic_Dictionary_object__object___get_Item(
             v164,
             (Il2CppObject *)v166->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
             (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v165 = (__int64 *)v168;
    if ( v168 )
    {
      v77 = string_TypeInfo;
      if ( (System_String_c *)v168->klass != string_TypeInfo )
        goto LABEL_379;
    }
    Component_object = (int64_t)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v165,
            (const MethodInfo_363CC20 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_object = (int64_t)this->fields.upAnimationNameList;
      if ( !Component_object )
        goto LABEL_376;
      v175 = *(_QWORD *)(Component_object + 16);
      v176 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v175 )
        goto LABEL_376;
      v177 = *(int *)(Component_object + 24);
      if ( (unsigned int)v177 >= *(_DWORD *)(v175 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v165,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
      }
      else
      {
        v178 = v175 + 8 * v177;
        *(_DWORD *)(Component_object + 24) = v177 + 1;
        *(_QWORD *)(v178 + 32) = v165;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v178 + 32), (int64_t)v165, v169, v170, v171, v172, v173, v174);
      }
    }
    Component_object = (int64_t)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    v179 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)Component_object,
             (Il2CppObject *)v165,
             (const MethodInfo_363D530 *)Method_System_Collections_Generic_List_string__IndexOf__);
    v165 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
    v167 = v179;
  }
  else
  {
    v167 = -1;
  }
  v180 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v180 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v164,
         (Il2CppObject *)v180->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v181 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v181 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v164,
                                  (Il2CppObject *)v181->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                  (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v182 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v182 = -1;
  }
  v183 = GachaBehaviorMaster_TypeInfo;
  v407 = v182;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v183 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v164,
         (Il2CppObject *)v183->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v184 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v184 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v164,
                                  (Il2CppObject *)v184->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                  (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v185 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v185 = -1;
  }
  v186 = GachaBehaviorMaster_TypeInfo;
  v402 = v185;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v186 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v164,
         (Il2CppObject *)v186->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v187 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v187 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v164,
                                  (Il2CppObject *)v187->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                  (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v188 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v188 = -1;
  }
  v189 = GachaBehaviorMaster_TypeInfo;
  v404 = v188;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v189 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v164,
          (Il2CppObject *)v189->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v191 = -1;
    goto LABEL_142;
  }
  v190 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v190 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v164,
                                (Il2CppObject *)v190->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_377:
    sub_1C1B0F0(Component_object);
    goto LABEL_378;
  }
  v191 = *(_DWORD *)j_il2cpp_object_unbox_0();
LABEL_142:
  v192 = GachaBehaviorMaster_TypeInfo;
  v193 = v86 != 0 && Item != 0;
  v403 = v191;
  if ( v167 != -1 )
    v193 = v407 != -1;
  v406 = v193;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v192 = GachaBehaviorMaster_TypeInfo;
  }
  v405 = v167;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v164,
         (Il2CppObject *)v192->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_9754/*"NoticeRarity"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    *(_DWORD *)(Component_object + 56) = 3;
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
    v194 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    if ( !v194 )
      goto LABEL_376;
    v195 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v194,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0LL);
    v196 = GachaBehaviorMaster_TypeInfo;
    v165 = (__int64 *)v195;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v196 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v164,
                                  (Il2CppObject *)v196->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                  (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v165 )
      goto LABEL_376;
    v203 = Component_object;
    if ( Component_object && *(System_String_c **)Component_object != string_TypeInfo )
      goto LABEL_378;
    v165[7] = Component_object;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v165 + 7), Component_object, v197, v198, v199, v200, v201, v202);
  }
  v204 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v204 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v164,
          (Il2CppObject *)v204->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_172:
    v214 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v214 = GachaBehaviorMaster_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v164,
           (Il2CppObject *)v214->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
           (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
      v215 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
      if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      if ( !v215 )
        goto LABEL_376;
      v216 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
               v215,
               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
               0LL);
      v217 = GachaBehaviorMaster_TypeInfo;
      v165 = (__int64 *)v216;
      if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
        v217 = GachaBehaviorMaster_TypeInfo;
      }
      v161 = v406;
      Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    v164,
                                    (Il2CppObject *)v217->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                    (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v165 )
        goto LABEL_376;
      v203 = Component_object;
      if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
      {
        v165[7] = Component_object;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v165 + 7), Component_object, v218, v219, v220, v221, v222, v223);
        goto LABEL_185;
      }
      goto LABEL_378;
    }
LABEL_184:
    v161 = v406;
LABEL_185:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v161 )
      v226 = 4;
    else
      v226 = 3;
    if ( this->fields.EditMode )
      v227 = 0;
    else
      v227 = v226;
    this->fields._counter = 0;
    this->fields._counterMax = v227;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(prevObject, 0LL, 0LL) )
    {
      v228 = (UnityEngine_Object_o *)*p_prevObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70794412(v228, 0LL);
      *p_prevObject = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.prevObject, 0LL, v229, v230, v231, v232, v233, v234);
    }
    if ( *(_DWORD *)(v75 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v158, 0LL);
      v236 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v236,
        (Il2CppObject *)v75,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0LL);
      Component_object = (int64_t)CharaGraphManager__CreateCommandTexturePrefab(gameObject, svtId, 0, v236, 0LL);
    }
    else
    {
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0LL;
      if ( !Component_object )
        goto LABEL_376;
      v237 = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               &entity,
               v409,
               (const MethodInfo_324AC20 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v238 = UnityEngine_Component__get_gameObject(v158, 0LL);
      if ( v237 )
      {
        v239 = entity;
        v240 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
        System_Action___ctor(
          v240,
          (Il2CppObject *)v75,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0LL);
        Component_object = (int64_t)CharaGraphManager__CreateTexturePrefab_39105696(
                                      v238,
                                      (UserServantEntity_o *)v239,
                                      0,
                                      v240,
                                      0LL);
      }
      else
      {
        v241 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
        System_Action___ctor(
          v241,
          (Il2CppObject *)v75,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0LL);
        Component_object = (int64_t)CharaGraphManager__CreateTexturePrefab(v238, svtId, v412, 0, 1, 0, v241, 0, 0LL);
      }
    }
    v242 = (UnityEngine_Component_o *)Component_object;
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
    v243 = (UnityEngine_Transform_o *)Component_object;
    if ( !byte_4BC2141 )
    {
      Component_object = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v77);
      byte_4BC2141 = 1;
    }
    if ( !v243 )
      goto LABEL_376;
    UnityEngine_Transform__set_localPosition(v243, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Component_object = (int64_t)UnityEngine_Component__get_transform(v242, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    v417.fields.x = v127;
    v417.fields.y = v127;
    v417.fields.z = v127;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v417, 0LL);
    Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                  v158,
                                  (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    v244 = UnityEngine_Component__get_gameObject(v242, 0LL);
    *p_prevObject = v244;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.prevObject,
      (int64_t)v244,
      v245,
      v246,
      v247,
      v248,
      v249,
      v250);
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4637/*"CodeCardRarity"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    v251 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
    Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4638/*"CodeCardRarity02"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_object,
                                  0LL);
    if ( !*p_effect )
      goto LABEL_376;
    v252 = (System_String_o *)Component_object;
    v253 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
    Component_object = (int64_t)TransformHelper__getNodeFromName(v253, v251, 1, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !*p_effect )
      goto LABEL_376;
    v254 = (UnityEngine_Component_o *)Component_object;
    v255 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
    Component_object = (int64_t)TransformHelper__getNodeFromName(v255, v252, 1, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !v254 )
      goto LABEL_376;
    v256 = (UnityEngine_Component_o *)Component_object;
    Component_object = (int64_t)UnityEngine_Component__get_gameObject(v254, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
    if ( !v256 )
      goto LABEL_376;
    Component_object = (int64_t)UnityEngine_Component__get_gameObject(v256, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
    if ( this->fields.EditMode )
    {
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11347/*"Rank"*/,
                                    0LL);
      if ( v161 )
      {
        v257 = v410;
        if ( !Component_object )
          goto LABEL_376;
        v258 = v410 == 2 ? 2 : 1;
        *(_DWORD *)(Component_object + 56) = v258;
        Component_object = (int64_t)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v259 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        NodeFromName = TransformHelper__getNodeFromName(v259, *(System_String_o **)(v75 + 24), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, v410 - 1, v261);
        Component_object = (int64_t)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v262 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v263 = TransformHelper__getNodeFromName(v262, *(System_String_o **)(v75 + 32), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, v263, v410 - 1, v264);
        Component_object = (int64_t)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v265 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v266 = TransformHelper__getNodeFromName(v265, *v150, 1, 0LL);
        v268 = this;
        v269 = v410 - 1;
      }
      else
      {
        v257 = v410;
        if ( !Component_object )
          goto LABEL_376;
        *(_DWORD *)(Component_object + 56) = 0;
        Component_object = (int64_t)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v286 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v266 = TransformHelper__getNodeFromName(v286, *v150, 1, 0LL);
        v268 = this;
        v269 = v410;
      }
      SummonEffectComponent__ChangeClassCardColor(v268, v266, v269, v267);
      Component_object = (int64_t)this->fields.effect;
      if ( Component_object )
      {
        v287 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v288 = TransformHelper__getNodeFromName(v287, *(System_String_o **)(v75 + 40), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, v288, v257, v289);
        SummonEffectComponent__CompleteCallback(this, v290);
        return;
      }
LABEL_376:
      sub_1C1AE30(Component_object, v77);
    }
    if ( *(_DWORD *)(v75 + 56) == 3 )
    {
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11347/*"Rank"*/,
                                    0LL);
      if ( !Component_object )
        goto LABEL_376;
      *(_DWORD *)(Component_object + 56) = 3;
      v415 = key;
      Component_object = (int64_t)UnityEngine_Component__get_gameObject(v254, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
      v270 = System_Int32__ToString((int32_t)&v415, 0LL);
      v271 = System_String__Concat_63051628(
               (System_String_o *)StringLiteral_23180/*"rarity"*/,
               v270,
               (System_String_o *)StringLiteral_16389/*"_0"*/,
               0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v254, v271, 0LL);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v254->klass[2]._1.typeMetadataHandle)(
        v254,
        v254->klass[2]._1.interopData);
      Component_object = (int64_t)UnityEngine_Component__get_gameObject(v256, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
      v272 = System_Int32__ToString((int32_t)&v415, 0LL);
      v273 = System_String__Concat_63051628(
               (System_String_o *)StringLiteral_23180/*"rarity"*/,
               v272,
               (System_String_o *)StringLiteral_16389/*"_0"*/,
               0LL);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v256, v273, 0LL);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v256->klass[2]._1.typeMetadataHandle)(
        v256,
        v256->klass[2]._1.interopData);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v254, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v418.fields.x = 0.0;
      v418.fields.z = 0.0;
      v418.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v418, 0LL);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v254, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v419.fields.x = v127;
      v419.fields.y = v127;
      v419.fields.z = v127;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v419, 0LL);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v256, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v420.fields.x = 0.0;
      v420.fields.z = 0.0;
      v420.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v420, 0LL);
      Component_object = (int64_t)UnityEngine_Component__get_transform(v256, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v421.fields.x = v127;
      v421.fields.y = v127;
      v421.fields.z = v127;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v421, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    1,
                                    key,
                                    0LL);
      v280 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      items = v280->fields._items;
      v282 = Method_System_Collections_Generic_List_string__Add__;
      ++v280->fields._version;
      if ( !items )
        goto LABEL_376;
      size = v280->fields._size;
      v284 = (System_String_o *)Component_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v280,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v282[4] + 192LL) + 112LL));
      }
      else
      {
        v285 = &items->obj.klass + size;
        v280->fields._size = size + 1;
        v285[4] = (Il2CppClass *)v284;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v285 + 4), (int64_t)v284, v274, v275, v276, v277, v278, v279);
      }
      v332 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v332,
        (Il2CppObject *)v75,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v284, v332, 1, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    101,
                                    key,
                                    0LL);
      v339 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v340 = v339->fields._items;
      v341 = Method_System_Collections_Generic_List_string__Add__;
      ++v339->fields._version;
      if ( !v340 )
        goto LABEL_376;
      v342 = v339->fields._size;
      v343 = (System_String_o *)Component_object;
      if ( (unsigned int)v342 >= v340->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v339,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v341[4] + 192LL) + 112LL));
      }
      else
      {
        v344 = &v340->obj.klass + v342;
        v339->fields._size = v342 + 1;
        v344[4] = (Il2CppClass *)v343;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v344 + 4), (int64_t)v343, v333, v334, v335, v336, v337, v338);
      }
      v345 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v345,
        (Il2CppObject *)v75,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
        0LL);
    }
    else
    {
      v291 = sub_1C1AE20(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v291, 0LL);
      if ( !v291 )
        goto LABEL_376;
      *(_QWORD *)(v291 + 24) = v75;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v291 + 24), v75, v292, v293, v294, v295, v296, v297);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Component_object )
        goto LABEL_376;
      v298 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               svtId,
               (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Component_object )
        goto LABEL_376;
      ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Component_object, svtId, v412, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !v298 )
        goto LABEL_376;
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                                    (int32_t)v298[5].klass,
                                    (const MethodInfo_3248678 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Component_object )
        goto LABEL_376;
      v299 = *(_DWORD *)(Component_object + 40);
      if ( v404 != -1 )
        v299 = v404;
      *(_DWORD *)(v291 + 16) = v299;
      if ( v403 == -1 )
        v300 = key;
      else
        v300 = v403;
      if ( !v161 )
      {
        v312 = sub_1C1AE20(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v312, 0LL);
        if ( !v312 )
          goto LABEL_376;
        *(_QWORD *)(v312 + 24) = v291;
        v319 = (Il2CppObject **)(v312 + 24);
        sub_1C1AB78((PartyOrganizationUtility_o *)(v312 + 24), v291, v313, v314, v315, v316, v317, v318);
        Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
        if ( !Component_object )
          goto LABEL_376;
        Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11347/*"Rank"*/,
                                      0LL);
        if ( !Component_object )
          goto LABEL_376;
        v320 = v405;
        if ( v405 == -1 )
          v320 = 0;
        *(_DWORD *)(Component_object + 56) = v320;
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v319 || !Component_object )
          goto LABEL_376;
        DesignCardPath = DesignCardManager__GetDesignCardPath(
                           (DesignCardManager_o *)Component_object,
                           (int32_t)(*v319)[1].klass,
                           v300,
                           0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__isExistAssetStorage(DesignCardPath, 0LL);
        if ( (Component_object & 1) == 0 )
        {
          if ( !*v319 )
            goto LABEL_376;
          LODWORD((*v319)[1].klass) = 1;
          Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v319 || !Component_object )
            goto LABEL_376;
          v300 = 3;
          DesignCardPath = DesignCardManager__GetDesignCardPath(
                             (DesignCardManager_o *)Component_object,
                             (int32_t)(*v319)[1].klass,
                             3,
                             0LL);
        }
        Component_object = (int64_t)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v328 = *(_QWORD *)(Component_object + 16);
        v329 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v328 )
          goto LABEL_376;
        v330 = *(int *)(Component_object + 24);
        if ( (unsigned int)v330 >= *(_DWORD *)(v328 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)DesignCardPath,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v329[4] + 192LL) + 112LL));
        }
        else
        {
          v331 = v328 + 8 * v330;
          *(_DWORD *)(Component_object + 24) = v330 + 1;
          *(_QWORD *)(v331 + 32) = DesignCardPath;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)(v331 + 32),
            (int64_t)DesignCardPath,
            v322,
            v323,
            v324,
            v325,
            v326,
            v327);
        }
        v346 = *v319;
        v347 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v347,
          v346,
          Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__loadAssetStorage(DesignCardPath, v347, 1, 0LL);
        if ( !*v319 )
          goto LABEL_376;
        monitor = (*v319)[1].monitor;
        if ( !monitor )
          goto LABEL_376;
        v349 = (System_String_o **)(monitor[14] == 1 ? &StringLiteral_2821/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/ : &StringLiteral_2820/*"BACKSIDE_CLASS_IMAGE_ID"*/);
        *(_DWORD *)(v312 + 16) = ConstantMaster__getValue(*v349, 0LL);
        v350 = (int32_t *)(v312 + 16);
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v351 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v350, v300, 0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( !AssetManager__isExistAssetStorage(v351, 0LL) )
        {
          Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_376;
          v351 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v350, 3, 0LL);
        }
        Component_object = (int64_t)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v358 = *(_QWORD *)(Component_object + 16);
        v359 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v358 )
          goto LABEL_376;
        v360 = *(int *)(Component_object + 24);
        if ( (unsigned int)v360 >= *(_DWORD *)(v358 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v351,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v359[4] + 192LL) + 112LL));
        }
        else
        {
          v361 = v358 + 8 * v360;
          *(_DWORD *)(Component_object + 24) = v360 + 1;
          *(_QWORD *)(v361 + 32) = v351;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v361 + 32), (int64_t)v351, v352, v353, v354, v355, v356, v357);
        }
        v362 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v362,
          (Il2CppObject *)v312,
          Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v363 = v351;
        v364 = v362;
        goto LABEL_375;
      }
      v301 = sub_1C1AE20(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v301, 0LL);
      if ( !v301 )
        goto LABEL_376;
      *(_QWORD *)(v301 + 24) = v291;
      v308 = (Il2CppObject **)(v301 + 24);
      sub_1C1AB78((PartyOrganizationUtility_o *)(v301 + 24), v291, v302, v303, v304, v305, v306, v307);
      if ( !*(_QWORD *)(v301 + 24) )
        goto LABEL_376;
      *(_DWORD *)(v301 + 16) = *(_DWORD *)(*(_QWORD *)(v301 + 24) + 16LL);
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      LowerColorRarity = Rarity__getLowerColorRarity(v300, 0LL);
      if ( v407 != -1 )
        *(_DWORD *)(v301 + 16) = v407;
      v310 = v402 == -1 ? LowerColorRarity : v402;
      Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11347/*"Rank"*/,
                                    0LL);
      if ( v405 == -1 )
      {
        if ( !Component_object )
          goto LABEL_376;
        v311 = v410 == 2 ? 2 : 1;
      }
      else
      {
        v311 = v405;
        if ( !Component_object )
          goto LABEL_376;
      }
      *(_DWORD *)(Component_object + 56) = v311;
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v365 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v301 + 16),
               v310,
               0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__isExistAssetStorage(v365, 0LL) )
      {
        *(_DWORD *)(v301 + 16) = 1;
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v310 = 3;
        v365 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v301 + 16),
                 3,
                 0LL);
      }
      Component_object = (int64_t)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v372 = *(_QWORD *)(Component_object + 16);
      v373 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v372 )
        goto LABEL_376;
      v374 = *(int *)(Component_object + 24);
      if ( (unsigned int)v374 >= *(_DWORD *)(v372 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v365,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v373[4] + 192LL) + 112LL));
      }
      else
      {
        v375 = v372 + 8 * v374;
        *(_DWORD *)(Component_object + 24) = v374 + 1;
        *(_QWORD *)(v375 + 32) = v365;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v375 + 32), (int64_t)v365, v366, v367, v368, v369, v370, v371);
      }
      v376 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v376,
        (Il2CppObject *)v301,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v365, v376, 1, 0LL);
      *(_DWORD *)(v301 + 20) = ConstantMaster__getValue((System_String_o *)StringLiteral_2820/*"BACKSIDE_CLASS_IMAGE_ID"*/, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v377 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v301 + 20),
               v310,
               0LL);
      if ( !AssetManager__isExistAssetStorage(v377, 0LL) )
      {
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v377 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v301 + 20),
                 3,
                 0LL);
      }
      Component_object = (int64_t)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v384 = *(_QWORD *)(Component_object + 16);
      v385 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v384 )
        goto LABEL_376;
      v386 = *(int *)(Component_object + 24);
      if ( (unsigned int)v386 >= *(_DWORD *)(v384 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v377,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v385[4] + 192LL) + 112LL));
      }
      else
      {
        v387 = v384 + 8 * v386;
        *(_DWORD *)(Component_object + 24) = v386 + 1;
        *(_QWORD *)(v387 + 32) = v377;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v387 + 32), (int64_t)v377, v378, v379, v380, v381, v382, v383);
      }
      v388 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v388,
        (Il2CppObject *)v301,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v377, v388, 1, 0LL);
      Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !*v308 || !Component_object )
        goto LABEL_376;
      v343 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               (int32_t)(*v308)[1].klass,
               v300,
               0LL);
      Component_object = AssetManager__isExistAssetStorage(v343, 0LL);
      if ( (Component_object & 1) == 0 )
      {
        if ( !*v308 )
          goto LABEL_376;
        LODWORD((*v308)[1].klass) = 1;
        Component_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v308 || !Component_object )
          goto LABEL_376;
        v343 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 (int32_t)(*v308)[1].klass,
                 3,
                 0LL);
      }
      Component_object = (int64_t)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v395 = *(_QWORD *)(Component_object + 16);
      v396 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v395 )
        goto LABEL_376;
      v397 = *(int *)(Component_object + 24);
      if ( (unsigned int)v397 >= *(_DWORD *)(v395 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v343,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v396[4] + 192LL) + 112LL));
      }
      else
      {
        v398 = v395 + 8 * v397;
        *(_DWORD *)(Component_object + 24) = v397 + 1;
        *(_QWORD *)(v398 + 32) = v343;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v398 + 32), (int64_t)v343, v389, v390, v391, v392, v393, v394);
      }
      v399 = *v308;
      v345 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v345,
        v399,
        Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    v363 = v343;
    v364 = v345;
LABEL_375:
    AssetManager__loadAssetStorage(v363, v364, 1, 0LL);
    return;
  }
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (int64_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4472/*"CardType"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = 4;
  Component_object = (int64_t)PlayMakerFSM__get_FsmVariables(v84, 0LL);
  v205 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v205 )
    goto LABEL_376;
  v206 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v205,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0LL);
  v207 = GachaBehaviorMaster_TypeInfo;
  v165 = (__int64 *)v206;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v207 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v164,
                                (Il2CppObject *)v207->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v165 )
    goto LABEL_376;
  v203 = Component_object;
  if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
  {
    v165[7] = Component_object;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v165 + 7), Component_object, v208, v209, v210, v211, v212, v213);
    goto LABEL_172;
  }
LABEL_378:
  sub_1C1B0F0(v203);
LABEL_379:
  sub_1C1B0F0(v165);
  SummonEffectComponent___c__DisplayClass45_0___ctor(v400, v401);
}


void __fastcall SummonEffectComponent___endAnimation_b__43_0(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Component_object; // x0
  __int64 v15; // x1

  if ( (byte_4BC41D3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_5580/*"END_FADE"*/, v4);
    byte_4BC41D3 = 1;
  }
  p_effect = &this->fields.effect;
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effect, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(v7, 0LL);
    *p_effect = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.effect, 0LL, v8, v9, v10, v11, v12, v13);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    sub_1C1AE30(0LL, v15);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5580/*"END_FADE"*/, 0LL);
}


void __fastcall SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4BC41C7 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C1ABD4(&Method_SummonEffectComponent__endAnimation_b__43_0__, v5);
    byte_4BC41C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0LL);
  if ( !v8 )
    sub_1C1AE30(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
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
    sub_1C1AE30(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C1AE30(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C1AE30(0LL, method);
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
  if ( (byte_4BC41D4 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C1ABD4(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d);
    byte_4BC41D4 = 1;
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
  sub_1C1AB78(
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
  sub_1C1AB78((PartyOrganizationUtility_o *)&v14->fields.firstTPeelr, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v23 = v4->fields.__4__this;
  if ( !v23 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v23->fields.firstTr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v24 = v4->fields.__4__this;
  if ( !v24 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v24->fields.firstTPeelr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C1AE30(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
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
  Il2CppObject *Component_object; // x20
  UnityEngine_Shader_o *v12; // x22
  UnityEngine_Material_o *v13; // x21
  UnityEngine_Texture_o *v14; // x22

  v4 = this;
  if ( (byte_4BC41D5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_1C1ABD4(&UnityEngine_Material_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C1ABD4(&StringLiteral_5047/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v7);
    byte_4BC41D5 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0LL);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5047/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_1C1AE20(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v13, v12, 0LL);
  if ( !Component_object
    || (v14 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[26].method)(
                                         Component_object,
                                         Component_object->klass->vtable[27].methodPtr),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_object->klass->vtable[25].method)(
                                                                  Component_object,
                                                                  v13,
                                                                  Component_object->klass->vtable[26].methodPtr),
        !v13)
    || (UnityEngine_Material__set_mainTexture(v13, v14, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1C1AE30(this, d);
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

  if ( (byte_4BC41D6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_4BC41D6 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C1AE30(Instance, v6);
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
  if ( (byte_4BC41D7 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_1C1ABD4(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d);
    byte_4BC41D7 = 1;
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
  sub_1C1AB78(
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
  sub_1C1AB78((PartyOrganizationUtility_o *)&v16->fields.firstTPeelr, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v25 = v4->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_25;
  v26 = v25->fields.__4__this;
  if ( !v26 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v26->fields.firstTr, v4->fields.classCardId, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C1AE30(this, d);
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

  if ( (byte_4BC41D8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_4BC41D8 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C1AE30(Instance, v6);
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

  if ( (byte_4BC41D9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_4BC41D9 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C1AE30(Instance, v6);
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
  if ( (byte_4BC41DA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_1C1ABD4(&UnityEngine_Material_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    sub_1C1ABD4(&StringLiteral_15381/*"Unlit/Transparent Colored"*/, v7);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_1C1ABD4(&StringLiteral_5047/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v8);
    byte_4BC41DA = 1;
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
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0LL);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v15 = v4->fields.CS___8__locals3;
  if ( !v15 )
    goto LABEL_22;
  v16 = v15->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_22;
  v17 = this;
  v18 = (System_String_o **)(v16->fields.cardType == 1 ? &StringLiteral_5047/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15381/*"Unlit/Transparent Colored"*/);
  v19 = UnityEngine_Shader__Find(*v18, 0LL);
  v20 = (UnityEngine_Material_o *)sub_1C1AE20(UnityEngine_Material_TypeInfo);
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
    sub_1C1AE30(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
}