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

  if ( (byte_4CC3940 & 1) == 0 )
  {
    sub_1C713B0(&SummonEffectComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_23957/*"summon_up_04"*/);
    sub_1C713B0(&StringLiteral_23955/*"summon_up_02"*/);
    sub_1C713B0(&StringLiteral_7065/*"GetAnimationName"*/);
    sub_1C713B0(&StringLiteral_23956/*"summon_up_03"*/);
    sub_1C713B0(&StringLiteral_23954/*"summon_up_01"*/);
    sub_1C713B0(&StringLiteral_11195/*"RarityAnimationName"*/);
    sub_1C713B0(&StringLiteral_15173/*"UpAnimationName"*/);
    sub_1C713B0(&StringLiteral_7663/*"InitializeAnimationName"*/);
    byte_4CC3940 = 1;
  }
  SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION = (struct System_String_o *)StringLiteral_23954/*"summon_up_01"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)SummonEffectComponent_TypeInfo->static_fields,
    StringLiteral_23954/*"summon_up_01"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_23955/*"summon_up_02"*/;
  static_fields = SummonEffectComponent_TypeInfo->static_fields;
  static_fields->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_23955/*"summon_up_02"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&static_fields->RANKUP_TO_SILVER_ANIMATION,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_23956/*"summon_up_03"*/;
  v16 = SummonEffectComponent_TypeInfo->static_fields;
  v16->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_23956/*"summon_up_03"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->RANKUP_TO_GOLD_ANIMATION, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_23957/*"summon_up_04"*/;
  v24 = SummonEffectComponent_TypeInfo->static_fields;
  v24->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_23957/*"summon_up_04"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v24->RANKUP_COMMANDCODE_ANIMATION, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_15173/*"UpAnimationName"*/;
  v32 = SummonEffectComponent_TypeInfo->static_fields;
  v32->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15173/*"UpAnimationName"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v32->FSM_VARIABLE_UP_ANIMATION_NAME, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_7663/*"InitializeAnimationName"*/;
  v40 = SummonEffectComponent_TypeInfo->static_fields;
  v40->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7663/*"InitializeAnimationName"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v40->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
    v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = StringLiteral_11195/*"RarityAnimationName"*/;
  v48 = SummonEffectComponent_TypeInfo->static_fields;
  v48->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11195/*"RarityAnimationName"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v48->FSM_VARIABLE_RARITY_ANIMATION_NAME,
    v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = StringLiteral_7065/*"GetAnimationName"*/;
  v56 = SummonEffectComponent_TypeInfo->static_fields;
  v56->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7065/*"GetAnimationName"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v56->FSM_VARIABLE_GET_ANIMATION_NAME, v55, v57, v58, v59, v60, v61, v62);
  v63 = SummonEffectComponent_TypeInfo->static_fields;
  v63->rarityToColor = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v63->rarityToColor, 0, v64, v65, v66, v67, v68, v69);
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

  if ( (byte_4CC393F & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC393F = 1;
  }
  v3 = sub_1C71458(int___TypeInfo, 2);
  if ( !v3 )
    sub_1C71608(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 512, v11 == 1) )
    sub_1C71610(v3);
  *(_DWORD *)(v3 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.cardTextureSize, v3, v5, v6, v7, v8, v9, v10);
  v12 = StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.effAnimName, v12, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4CC392F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
    sub_1C713B0(&SummonEffectComponent_SummonInfo_TypeInfo);
    byte_4CC392F = 1;
  }
  SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  }
  v19 = sub_1C715FC(SummonEffectComponent_SummonInfo_TypeInfo);
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
    sub_1C71608(v20, v21);
  }
  size = SummonInfos->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      SummonInfos,
      (Il2CppObject *)v19,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    SummonInfos->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v19;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 4), v19, v22, v23, v24, v25, v26, v27);
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
  if ( (byte_4CC3938 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4CC3938 = 1;
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
                                             (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, void *))this->klass[1].vtable._3_ToString.method)(
                                            this,
                                            v8,
                                            this->klass[2]._1.image),
        (cardTextureSize = v6->fields.cardTextureSize) == 0) )
  {
LABEL_10:
    sub_1C71608(this, cardNode);
  }
  if ( LODWORD(cardTextureSize->max_length) <= 1 )
LABEL_11:
    sub_1C71610(this);
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

  if ( (byte_4CC3939 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&StringLiteral_12021/*"SETUP_DONE"*/);
    byte_4CC3939 = 1;
  }
  counterMax = this->fields._counterMax;
  v4 = this->fields._counter + 1;
  this->fields._counter = v4;
  if ( v4 >= counterMax )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C71608(0, v6);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_12021/*"SETUP_DONE"*/, 0);
  }
}


void SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4CC3931 & 1) == 0 )
  {
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC3931 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1C71608(Instance, v3);
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

  if ( (byte_4CC3932 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SummonEffectComponent_OnCharaGraphLoadDone__);
    sub_1C713B0(&SummonEffectComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_8056/*"IsNoSkip"*/);
    sub_1C713B0(&StringLiteral_18324/*"countMax"*/);
    sub_1C713B0(&StringLiteral_13179/*"SummonEffectAnimation"*/);
    byte_4CC3932 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_46;
  v5 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_18324/*"countMax"*/,
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
                              (System_String_o *)StringLiteral_8056/*"IsNoSkip"*/,
                              0);
  if ( !Component_object )
    goto LABEL_46;
  *((_BYTE *)Component_object + 56) = this->fields.isNoSkip;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_13179/*"SummonEffectAnimation"*/,
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
         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = (struct UnityEngine_Animation_o *)v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.effAnimation, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v14;
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  sub_1C71354(
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
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    upAnimationNameList->fields._size = size + 1;
    v32[4] = (Il2CppClass *)RANKUP_TO_SILVER_ANIMATION;
    sub_1C71354(
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
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = v39 + 8 * v41;
    Component_object[6] = v41 + 1;
    *(_QWORD *)(v42 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C71354(
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
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = v49 + 8 * v51;
    Component_object[6] = v51 + 1;
    *(_QWORD *)(v52 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C71354(
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
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = v59 + 8 * v61;
    Component_object[6] = v61 + 1;
    *(_QWORD *)(v62 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)(v62 + 32),
      (int32_t)RANKUP_TO_SILVER_ANIMATION,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  Component_object = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Component_object
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_object, 1, 0),
        (Component_object = (int *)this->fields.SummonInfos) == 0) )
  {
LABEL_46:
    sub_1C71608(Component_object, RANKUP_TO_SILVER_ANIMATION);
  }
  this->fields.DownloadCounter = Component_object[6];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)Component_object,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v71 = v70;
  while ( 1 )
  {
    v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v63 )
      break;
    if ( !v71.fields._current )
      sub_1C71608(v63, v64);
    klass = (int32_t)v71.fields._current[1].klass;
    if ( HIDWORD(v71.fields._current[2].klass) == 3 )
    {
      v66 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
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
      v69 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
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

  if ( (byte_4CC392E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
    byte_4CC392E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.SummonInfos, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  int32_t v4; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CC3933 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_7462/*"INIT_DONE"*/);
    byte_4CC3933 = 1;
  }
  v4 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v4;
  if ( !v4 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0),
          (Instance = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0) )
    {
      sub_1C71608(Instance, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7462/*"INIT_DONE"*/, 0);
  }
}


void SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1

  if ( (byte_4CC393E & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&StringLiteral_5708/*"EVENT_SKIP"*/);
    byte_4CC393E = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C71608(0, v4);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5708/*"EVENT_SKIP"*/, 0);
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

  if ( (byte_4CC3934 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4CC3934 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v7 = this->fields._releaseAssetPath;
    if ( !v7 )
      sub_1C71608(v5, v6);
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

  if ( (byte_4CC393A & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&SummonEffectComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_11181/*"Rank"*/);
    byte_4CC393A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object
    || (v5 = (PlayMakerFSM_o *)Component_object,
        (Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0)) == 0)
    || (Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                             (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                             (System_String_o *)StringLiteral_11181/*"Rank"*/,
                             0)) == 0 )
  {
LABEL_17:
    sub_1C71608(Component_object, v4);
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
           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.effAnimName = (struct System_String_o *)Item;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.effAnimName, (int32_t)Item, v9, v10, v11, v12, v13, v14);
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
  sub_1C71354(
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

  if ( (byte_4CC393B & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&SummonEffectComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_7455/*"INITIALIZE_ANIMATION"*/);
    byte_4CC393B = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
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
    sub_1C71608(Component_object, v4);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  if ( !System_String__IsNullOrEmpty(Value, 0) )
    PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_7455/*"INITIALIZE_ANIMATION"*/, 0);
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

  if ( (byte_4CC3930 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    sub_1C713B0(&SummonEffectComponent_TypeInfo);
    byte_4CC3930 = 1;
  }
  v2 = SummonEffectComponent_TypeInfo;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v2 = SummonEffectComponent_TypeInfo;
  }
  if ( !v2->static_fields->rarityToColor )
  {
    v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C715FC(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
      v3,
      (const MethodInfo_3491F1C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v3 )
      sub_1C71608(v4, v5);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      0,
      0,
      (const MethodInfo_34928E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      1,
      0,
      (const MethodInfo_34928E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      2,
      0,
      (const MethodInfo_34928E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      3,
      1,
      (const MethodInfo_34928E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      4,
      2,
      (const MethodInfo_34928E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      5,
      2,
      (const MethodInfo_34928E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      101,
      0,
      (const MethodInfo_34928E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      102,
      0,
      (const MethodInfo_34928E0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v12 = SummonEffectComponent_TypeInfo;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v12 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v3;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->rarityToColor, (int32_t)v3, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4CC393D & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&SummonEffectComponent_TypeInfo);
    byte_4CC393D = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
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
    sub_1C71608(Component_object, v4);
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

  if ( (byte_4CC393C & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____78659736);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC393C = 1;
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
    sub_1C71608(ComponentsInChildren_object, v4);
  }
LABEL_14:
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                             1,
                                                             (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____78659736);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  klass = ComponentsInChildren_object[1].klass;
  v9 = ComponentsInChildren_object;
  if ( (int)klass >= 1 )
  {
    for ( i = 0; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1C71610(ComponentsInChildren_object);
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

  if ( (byte_4CC3936 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&SummonEffectComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_8055/*"IsNewCard"*/);
    sub_1C713B0(&StringLiteral_18323/*"countIndex"*/);
    sub_1C713B0(&StringLiteral_8068/*"IsRankUp"*/);
    sub_1C713B0(&StringLiteral_8073/*"IsSkipStop"*/);
    sub_1C713B0(&StringLiteral_8430/*"LimitCount"*/);
    sub_1C713B0(&StringLiteral_9579/*"NoticeRarity"*/);
    sub_1C713B0(&StringLiteral_4335/*"CardType"*/);
    sub_1C713B0(&StringLiteral_11193/*"Rarity"*/);
    sub_1C713B0(&StringLiteral_12744/*"ServantId"*/);
    byte_4CC3936 = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_66;
  v5 = (PlayMakerFSM_o *)Component_object;
  Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_18323/*"countIndex"*/,
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
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v7 = *((_DWORD *)Component_object + 4);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v8 = *((_DWORD *)Component_object + 5);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v9 = *((_BYTE *)Component_object + 24);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v10 = *((unsigned __int8 *)Component_object + 25);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v11 = *((_DWORD *)Component_object + 7);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v12 = *((_DWORD *)Component_object + 8);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v13 = *((_DWORD *)Component_object + 9);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  v14 = *((_BYTE *)Component_object + 40);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_12744/*"ServantId"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v7;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8430/*"LimitCount"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v8;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8068/*"IsRankUp"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v9;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8073/*"IsSkipStop"*/,
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)((char *)Component_object + 56), 0, v16, v17, v18, v19, v20, v21);
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)((char *)Component_object + 56), 0, v22, v23, v24, v25, v26, v27);
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)((char *)Component_object + 56), 0, v28, v29, v30, v31, v32, v33);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8055/*"IsNewCard"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v10 != 0 || v12 == 0;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_9579/*"NoticeRarity"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v11;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_4335/*"CardType"*/,
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
                       (System_String_o *)StringLiteral_11193/*"Rarity"*/,
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
      sub_1C71608(Component_object, v4);
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
  int v14; // w28
  int v15; // w26
  int v16; // w22
  unsigned int v17; // w25
  char v18; // w27
  System_Collections_Generic_List_object__o *v19; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  HutongGames_PlayMaker_FsmVariables_o *v26; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int v33; // w22
  HutongGames_PlayMaker_FsmVariables_o *v34; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_String_o *v51; // x24
  float v52; // s8
  System_String_o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_String_o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  System_String_o *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  System_String_o *v74; // x0
  System_String_o **v75; // x19
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
  _BOOL4 v86; // w29
  System_Collections_Generic_List_object__o *GachaBehaviors; // x0
  System_Collections_Generic_List_object__o *v88; // x22
  System_Collections_Generic_Dictionary_object__object__o *v89; // x26
  __int64 *v90; // x22
  GachaBehaviorMaster_c *v91; // x0
  int v92; // w29
  Il2CppObject *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  __int64 v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x8
  int32_t v104; // w0
  GachaBehaviorMaster_c *v105; // x0
  GachaBehaviorMaster_c *v106; // x0
  int v107; // w8
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
  _BOOL4 v118; // w10
  HutongGames_PlayMaker_FsmVariables_o *v119; // x22
  HutongGames_PlayMaker_FsmString_o *v120; // x0
  GachaBehaviorMaster_c *v121; // x8
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  __int64 v128; // x8
  GachaBehaviorMaster_c *v129; // x0
  HutongGames_PlayMaker_FsmVariables_o *v130; // x22
  HutongGames_PlayMaker_FsmString_o *v131; // x0
  GachaBehaviorMaster_c *v132; // x8
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  GachaBehaviorMaster_c *v139; // x0
  HutongGames_PlayMaker_FsmVariables_o *v140; // x22
  HutongGames_PlayMaker_FsmString_o *v141; // x0
  GachaBehaviorMaster_c *v142; // x8
  int32_t v143; // w2
  int32_t v144; // w3
  System_String_o *v145; // x4
  int32_t v146; // w5
  int64_t v147; // x6
  System_String_o *v148; // x7
  UnityEngine_Object_o *prevObject; // x22
  struct UnityEngine_GameObject_o **p_prevObject; // x26
  int v151; // w9
  int32_t v152; // w8
  UnityEngine_Object_o *v153; // x22
  int32_t v154; // w2
  int32_t v155; // w3
  System_String_o *v156; // x4
  int32_t v157; // w5
  int64_t v158; // x6
  System_String_o *v159; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v161; // x28
  bool v162; // w28
  UnityEngine_GameObject_o *v163; // x22
  Il2CppObject *v164; // x28
  System_Action_o *v165; // x25
  System_Action_o *v166; // x25
  UnityEngine_Component_o *v167; // x22
  UnityEngine_Transform_o *v168; // x28
  UnityEngine_GameObject_o *v169; // x0
  int32_t v170; // w2
  int32_t v171; // w3
  System_String_o *v172; // x4
  int32_t v173; // w5
  int64_t v174; // x6
  System_String_o *v175; // x7
  System_String_o *v176; // x24
  System_String_o *v177; // x22
  UnityEngine_Transform_o *v178; // x0
  UnityEngine_Component_o *v179; // x26
  UnityEngine_Transform_o *v180; // x0
  UnityEngine_Component_o *v181; // x24
  int32_t v182; // w22
  int v183; // w8
  UnityEngine_Transform_o *v184; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v186; // x3
  UnityEngine_Transform_o *v187; // x0
  UnityEngine_Transform_o *v188; // x0
  const MethodInfo *v189; // x3
  UnityEngine_Transform_o *v190; // x0
  UnityEngine_Transform_o *v191; // x1
  const MethodInfo *v192; // x3
  SummonEffectComponent_o *v193; // x0
  int32_t v194; // w2
  System_String_o *v195; // x0
  System_String_o *v196; // x19
  System_String_o *v197; // x0
  System_String_o *v198; // x0
  int32_t v199; // w2
  int32_t v200; // w3
  System_String_o *v201; // x4
  int32_t v202; // w5
  int64_t v203; // x6
  System_String_o *v204; // x7
  System_Collections_Generic_List_object__o *v205; // x8
  struct System_Object_array *items; // x9
  _QWORD *v207; // x10
  __int64 size; // x11
  System_String_o *v209; // x19
  Il2CppClass **v210; // x0
  UnityEngine_Transform_o *v211; // x0
  UnityEngine_Transform_o *v212; // x0
  UnityEngine_Transform_o *v213; // x0
  const MethodInfo *v214; // x3
  const MethodInfo *v215; // x1
  __int64 v216; // x24
  int32_t v217; // w2
  int32_t v218; // w3
  System_String_o *v219; // x4
  int32_t v220; // w5
  int64_t v221; // x6
  System_String_o *v222; // x7
  Il2CppObject *v223; // x19
  int v224; // w8
  int32_t v225; // w19
  __int64 v226; // x21
  int32_t v227; // w2
  int32_t v228; // w3
  System_String_o *v229; // x4
  int32_t v230; // w5
  int64_t v231; // x6
  System_String_o *v232; // x7
  Il2CppObject **v233; // x20
  int32_t LowerColorRarity; // w0
  int32_t v235; // w22
  int v236; // w8
  __int64 v237; // x20
  int32_t v238; // w2
  int32_t v239; // w3
  System_String_o *v240; // x4
  int32_t v241; // w5
  int64_t v242; // x6
  System_String_o *v243; // x7
  Il2CppObject **v244; // x21
  int v245; // w8
  System_String_o *DesignCardPath; // x22
  int32_t v247; // w2
  int32_t v248; // w3
  System_String_o *v249; // x4
  int32_t v250; // w5
  int64_t v251; // x6
  System_String_o *v252; // x7
  __int64 v253; // x8
  _QWORD *v254; // x9
  __int64 v255; // x10
  __int64 v256; // x8
  AssetLoader_LoadEndDataHandler_o *v257; // x20
  int32_t v258; // w2
  int32_t v259; // w3
  System_String_o *v260; // x4
  int32_t v261; // w5
  int64_t v262; // x6
  System_String_o *v263; // x7
  System_Collections_Generic_List_object__o *v264; // x8
  struct System_Object_array *v265; // x9
  _QWORD *v266; // x10
  __int64 v267; // x11
  System_String_o *v268; // x19
  Il2CppClass **v269; // x0
  AssetLoader_LoadEndDataHandler_o *v270; // x20
  Il2CppObject *v271; // x24
  AssetLoader_LoadEndDataHandler_o *v272; // x23
  _DWORD *monitor; // x8
  System_String_o **v274; // x8
  int32_t *v275; // x21
  System_String_o *v276; // x19
  int32_t v277; // w2
  int32_t v278; // w3
  System_String_o *v279; // x4
  int32_t v280; // w5
  int64_t v281; // x6
  System_String_o *v282; // x7
  __int64 v283; // x8
  _QWORD *v284; // x9
  __int64 v285; // x10
  __int64 v286; // x8
  AssetLoader_LoadEndDataHandler_o *v287; // x21
  System_String_o *v288; // x0
  AssetLoader_LoadEndDataHandler_o *v289; // x1
  System_String_o *v290; // x23
  int32_t v291; // w2
  int32_t v292; // w3
  System_String_o *v293; // x4
  int32_t v294; // w5
  int64_t v295; // x6
  System_String_o *v296; // x7
  __int64 v297; // x8
  _QWORD *v298; // x9
  __int64 v299; // x10
  __int64 v300; // x8
  AssetLoader_LoadEndDataHandler_o *v301; // x24
  System_String_o *v302; // x22
  int32_t v303; // w2
  int32_t v304; // w3
  System_String_o *v305; // x4
  int32_t v306; // w5
  int64_t v307; // x6
  System_String_o *v308; // x7
  __int64 v309; // x8
  _QWORD *v310; // x9
  __int64 v311; // x10
  __int64 v312; // x8
  AssetLoader_LoadEndDataHandler_o *v313; // x23
  int32_t v314; // w2
  int32_t v315; // w3
  System_String_o *v316; // x4
  int32_t v317; // w5
  int64_t v318; // x6
  System_String_o *v319; // x7
  __int64 v320; // x8
  _QWORD *v321; // x9
  __int64 v322; // x10
  __int64 v323; // x8
  Il2CppObject *v324; // x21
  SummonEffectComponent___c__DisplayClass45_0_o *v325; // x0
  const MethodInfo *v326; // x1
  int v327; // [xsp+Ch] [xbp-D4h]
  int v328; // [xsp+10h] [xbp-D0h]
  int v329; // [xsp+14h] [xbp-CCh]
  int v330; // [xsp+18h] [xbp-C8h]
  _BOOL4 v331; // [xsp+1Ch] [xbp-C4h]
  int v332; // [xsp+34h] [xbp-ACh]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+38h] [xbp-A8h]
  int64_t v334; // [xsp+40h] [xbp-A0h]
  int32_t v335; // [xsp+50h] [xbp-90h]
  int32_t key; // [xsp+54h] [xbp-8Ch]
  int32_t v337; // [xsp+58h] [xbp-88h]
  int32_t svtId; // [xsp+5Ch] [xbp-84h]
  int v339; // [xsp+60h] [xbp-80h] BYREF
  int32_t v340; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v342; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v343; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v344; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v345; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v346; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC3937 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C713B0(&Method_DataManager_GetMasterData_GachaBehaviorMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
    sub_1C713B0(&GachaBehaviorMaster_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Rarity_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&SummonEffectComponent_TypeInfo);
    sub_1C713B0(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__);
    sub_1C713B0(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__);
    sub_1C713B0(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__);
    sub_1C713B0(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__);
    sub_1C713B0(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__);
    sub_1C713B0(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
    sub_1C713B0(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__);
    sub_1C713B0(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__);
    sub_1C713B0(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
    sub_1C713B0(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__);
    sub_1C713B0(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__);
    sub_1C713B0(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
    sub_1C713B0(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__);
    sub_1C713B0(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
    sub_1C713B0(&StringLiteral_4331/*"CardScale"*/);
    sub_1C713B0(&StringLiteral_4332/*"CardSecondName"*/);
    sub_1C713B0(&StringLiteral_4323/*"CardFirstName"*/);
    sub_1C713B0(&StringLiteral_8055/*"IsNewCard"*/);
    sub_1C713B0(&StringLiteral_4330/*"CardRotName"*/);
    sub_1C713B0(&StringLiteral_4517/*"CodeCardRarity02"*/);
    sub_1C713B0(&StringLiteral_2666/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/);
    sub_1C713B0(&StringLiteral_11181/*"Rank"*/);
    sub_1C713B0(&StringLiteral_18323/*"countIndex"*/);
    sub_1C713B0(&StringLiteral_13177/*"SummonEffect"*/);
    sub_1C713B0(&StringLiteral_23073/*"rarity"*/);
    sub_1C713B0(&StringLiteral_8068/*"IsRankUp"*/);
    sub_1C713B0(&StringLiteral_16110/*"_0"*/);
    sub_1C713B0(&StringLiteral_4516/*"CodeCardRarity"*/);
    sub_1C713B0(&StringLiteral_8073/*"IsSkipStop"*/);
    sub_1C713B0(&StringLiteral_8430/*"LimitCount"*/);
    sub_1C713B0(&StringLiteral_9579/*"NoticeRarity"*/);
    sub_1C713B0(&StringLiteral_2665/*"BACKSIDE_CLASS_IMAGE_ID"*/);
    sub_1C713B0(&StringLiteral_4335/*"CardType"*/);
    sub_1C713B0(&StringLiteral_4329/*"CardNodeName"*/);
    sub_1C713B0(&StringLiteral_4324/*"CardFirstPeelName"*/);
    sub_1C713B0(&StringLiteral_23948/*"summon_rarity_0"*/);
    sub_1C713B0(&StringLiteral_11193/*"Rarity"*/);
    sub_1C713B0(&StringLiteral_12744/*"ServantId"*/);
    byte_4CC3937 = 1;
  }
  entity = 0;
  v340 = 0;
  v3 = sub_1C715FC(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_376;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  this->fields.isNoSkipAll = 0;
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_376;
  v12 = (PlayMakerFSM_o *)Component_object;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_18323/*"countIndex"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Component_object, 0);
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v13 = Component_object;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                Component_object,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  svtId = *(_DWORD *)(Component_object + 16);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v337 = *(_DWORD *)(Component_object + 20);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v14 = *(unsigned __int8 *)(Component_object + 24);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v15 = *(unsigned __int8 *)(Component_object + 25);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v16 = *(_DWORD *)(Component_object + 28);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v17 = *(_DWORD *)(Component_object + 32);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(Component_object + 36);
  Component_object = (__int64)this->fields.SummonInfos;
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Component_object,
                                v13,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v18 = *(_BYTE *)(Component_object + 40);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v13,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v334 = *(_QWORD *)(Component_object + 48);
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v5);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v19;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._releaseAssetPath,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_12744/*"ServantId"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = svtId;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8430/*"LimitCount"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v337;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8068/*"IsRankUp"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v14;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8073/*"IsSkipStop"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v18;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  v26 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v26 )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                v26,
                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_QWORD *)(Component_object + 56) = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(Component_object + 56), 0, v27, v28, v29, v30, v31, v32);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8055/*"IsNewCard"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v15 != 0 || v17 == 0;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_9579/*"NoticeRarity"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v16;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4335/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = *(_DWORD *)(v3 + 56);
  if ( v17 - 3 >= 3 )
    v33 = v17 ? 0 : 3;
  else
    v33 = dword_D224BC[v17 - 3];
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_11193/*"Rarity"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v33;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  v34 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  key = v17;
  if ( !v34 )
    goto LABEL_376;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v34,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0);
  v339 = v33;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v339);
  Component_object = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_23948/*"summon_rarity_0"*/, v36, 0);
  if ( !FsmString )
    goto LABEL_376;
  FsmString->fields.value = (struct System_String_o *)Component_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&FsmString->fields.value, Component_object, v37, v38, v39, v40, v41, v42);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13177/*"SummonEffect"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, 0);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.effect, (int32_t)Value, v45, v46, v47, v48, v49, v50);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4329/*"CardNodeName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v51 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4331/*"CardScale"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v52 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4323/*"CardFirstName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v53 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 24) = v53;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v53, v54, v55, v56, v57, v58, v59);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4324/*"CardFirstPeelName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v60 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 32) = v60;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v60, v61, v62, v63, v64, v65, v66);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4332/*"CardSecondName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v67 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 40) = v67;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)v67, v68, v69, v70, v71, v72, v73);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4330/*"CardRotName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v74 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 48) = v74;
  v75 = (System_String_o **)(v3 + 48);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 48), (int32_t)v74, v76, v77, v78, v79, v80, v81);
  Component_object = (__int64)*p_effect;
  if ( !*p_effect )
    goto LABEL_376;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  Component_object = (__int64)TransformHelper__getNodeFromName(transform, v51, 1, 0);
  if ( !Component_object )
    goto LABEL_376;
  v83 = (UnityEngine_Component_o *)Component_object;
  Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_376;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v83, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  v84 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4CC0D0E )
  {
    Component_object = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  if ( !v84 )
    goto LABEL_376;
  UnityEngine_Transform__set_localScale(v84, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v5 = (System_String_c *)v17;
  Component_object = (__int64)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_object )
    goto LABEL_376;
  Item = System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)Component_object,
           v17,
           (const MethodInfo_3492844 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Component_object,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_object )
    goto LABEL_376;
  v86 = v14 != 0 && Item != 0;
  GachaBehaviors = (System_Collections_Generic_List_object__o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                                  (GachaBehaviorMaster_o *)Component_object,
                                                                  this->fields.gachaId,
                                                                  svtId,
                                                                  0);
  v335 = Item;
  if ( !GachaBehaviors || (v88 = GachaBehaviors, GachaBehaviors->fields._size < 1) )
  {
    v328 = -1;
    v329 = -1;
    v327 = -1;
    v332 = -1;
    v330 = -1;
    goto LABEL_185;
  }
  v331 = v14 != 0 && Item != 0;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                GachaBehaviors,
                                0,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !*(_QWORD *)(Component_object + 24) )
  {
    v328 = -1;
    v329 = -1;
    v327 = -1;
    v332 = -1;
    v330 = -1;
    goto LABEL_184;
  }
  if ( v15 )
    this->fields.isNoSkipAll = 1;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                v88,
                                0,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v89 = *(System_Collections_Generic_Dictionary_object__object__o **)(Component_object + 24);
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  if ( !v89 )
    goto LABEL_376;
  v90 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v89,
         (Il2CppObject *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v91 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v91 = GachaBehaviorMaster_TypeInfo;
    }
    v93 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v89,
            (Il2CppObject *)v91->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
            (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v90 = (__int64 *)v93;
    if ( v93 )
    {
      v5 = string_TypeInfo;
      if ( (System_String_c *)v93->klass != string_TypeInfo )
        goto LABEL_379;
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v90,
            (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_object = (__int64)this->fields.upAnimationNameList;
      if ( !Component_object )
        goto LABEL_376;
      v100 = *(_QWORD *)(Component_object + 16);
      v101 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v100 )
        goto LABEL_376;
      v102 = *(int *)(Component_object + 24);
      if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v90,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
      }
      else
      {
        v103 = v100 + 8 * v102;
        *(_DWORD *)(Component_object + 24) = v102 + 1;
        *(_QWORD *)(v103 + 32) = v90;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v103 + 32), (int32_t)v90, v94, v95, v96, v97, v98, v99);
      }
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    v104 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)Component_object,
             (Il2CppObject *)v90,
             (const MethodInfo_38113B8 *)Method_System_Collections_Generic_List_string__IndexOf__);
    v90 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
    v92 = v104;
  }
  else
  {
    v92 = -1;
  }
  v105 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v105 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v89,
         (Il2CppObject *)v105->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v106 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v106 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v89,
                                  (Il2CppObject *)v106->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                  (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v107 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v107 = -1;
  }
  v108 = GachaBehaviorMaster_TypeInfo;
  v332 = v107;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v108 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v89,
         (Il2CppObject *)v108->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v109 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v109 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v89,
                                  (Il2CppObject *)v109->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                  (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v327 = v110;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v111 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v89,
         (Il2CppObject *)v111->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v112 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v112 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v89,
                                  (Il2CppObject *)v112->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                  (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v329 = v113;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v114 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v89,
          (Il2CppObject *)v114->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v116 = -1;
    goto LABEL_142;
  }
  v115 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v115 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v89,
                                (Il2CppObject *)v115->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_377:
    sub_1C719A4(Component_object);
    goto LABEL_378;
  }
  v116 = *(_DWORD *)j_il2cpp_object_unbox_0();
LABEL_142:
  v117 = GachaBehaviorMaster_TypeInfo;
  v118 = v14 != 0 && Item != 0;
  v328 = v116;
  if ( v92 != -1 )
    v118 = v332 != -1;
  v331 = v118;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v117 = GachaBehaviorMaster_TypeInfo;
  }
  v330 = v92;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v89,
         (Il2CppObject *)v117->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_9579/*"NoticeRarity"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    *(_DWORD *)(Component_object + 56) = 3;
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
    v119 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    if ( !v119 )
      goto LABEL_376;
    v120 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v119,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0);
    v121 = GachaBehaviorMaster_TypeInfo;
    v90 = (__int64 *)v120;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v121 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v89,
                                  (Il2CppObject *)v121->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                  (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v90 )
      goto LABEL_376;
    v128 = Component_object;
    if ( Component_object && *(System_String_c **)Component_object != string_TypeInfo )
      goto LABEL_378;
    v90[7] = Component_object;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v90 + 7), Component_object, v122, v123, v124, v125, v126, v127);
  }
  v129 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v129 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v89,
          (Il2CppObject *)v129->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_172:
    v139 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v139 = GachaBehaviorMaster_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v89,
           (Il2CppObject *)v139->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
           (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
      v140 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
      if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      if ( !v140 )
        goto LABEL_376;
      v141 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
               v140,
               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
               0);
      v142 = GachaBehaviorMaster_TypeInfo;
      v90 = (__int64 *)v141;
      if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
        v142 = GachaBehaviorMaster_TypeInfo;
      }
      v86 = v331;
      Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    v89,
                                    (Il2CppObject *)v142->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                    (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v90 )
        goto LABEL_376;
      v128 = Component_object;
      if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
      {
        v90[7] = Component_object;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v90 + 7), Component_object, v143, v144, v145, v146, v147, v148);
        goto LABEL_185;
      }
      goto LABEL_378;
    }
LABEL_184:
    v86 = v331;
LABEL_185:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v86 )
      v151 = 4;
    else
      v151 = 3;
    if ( this->fields.EditMode )
      v152 = 0;
    else
      v152 = v151;
    this->fields._counter = 0;
    this->fields._counterMax = v152;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(prevObject, 0, 0) )
    {
      v153 = (UnityEngine_Object_o *)*p_prevObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(v153, 0);
      *p_prevObject = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.prevObject, 0, v154, v155, v156, v157, v158, v159);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v83, 0);
      v161 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        v161,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0);
      Component_object = (__int64)CharaGraphManager__CreateCommandTexturePrefab(gameObject, svtId, 0, v161, 0);
    }
    else
    {
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0;
      if ( !Component_object )
        goto LABEL_376;
      v162 = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               &entity,
               v334,
               (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v163 = UnityEngine_Component__get_gameObject(v83, 0);
      if ( v162 )
      {
        v164 = entity;
        v165 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          v165,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab_40933104(
                                      v163,
                                      (UserServantEntity_o *)v164,
                                      0,
                                      v165,
                                      0);
      }
      else
      {
        v166 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          v166,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab(v163, svtId, v337, 0, 1, 0, v166, 0, 0);
      }
    }
    v167 = (UnityEngine_Component_o *)Component_object;
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    v168 = (UnityEngine_Transform_o *)Component_object;
    if ( !byte_4CC0D09 )
    {
      Component_object = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    if ( !v168 )
      goto LABEL_376;
    UnityEngine_Transform__set_localPosition(v168, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    Component_object = (__int64)UnityEngine_Component__get_transform(v167, 0);
    if ( !Component_object )
      goto LABEL_376;
    v342.fields.x = v52;
    v342.fields.y = v52;
    v342.fields.z = v52;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v342, 0);
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v83,
                                  (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UITexture___);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    v169 = UnityEngine_Component__get_gameObject(v167, 0);
    *p_prevObject = v169;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.prevObject,
      (int32_t)v169,
      v170,
      v171,
      v172,
      v173,
      v174,
      v175);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4516/*"CodeCardRarity"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    v176 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4517/*"CodeCardRarity02"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_object,
                                  0);
    if ( !*p_effect )
      goto LABEL_376;
    v177 = (System_String_o *)Component_object;
    v178 = UnityEngine_GameObject__get_transform(*p_effect, 0);
    Component_object = (__int64)TransformHelper__getNodeFromName(v178, v176, 1, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !*p_effect )
      goto LABEL_376;
    v179 = (UnityEngine_Component_o *)Component_object;
    v180 = UnityEngine_GameObject__get_transform(*p_effect, 0);
    Component_object = (__int64)TransformHelper__getNodeFromName(v180, v177, 1, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !v179 )
      goto LABEL_376;
    v181 = (UnityEngine_Component_o *)Component_object;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v179, 0);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
    if ( !v181 )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v181, 0);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
    if ( this->fields.EditMode )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11181/*"Rank"*/,
                                    0);
      if ( v86 )
      {
        v182 = v335;
        if ( !Component_object )
          goto LABEL_376;
        v183 = v335 == 2 ? 2 : 1;
        *(_DWORD *)(Component_object + 56) = v183;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v184 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        NodeFromName = TransformHelper__getNodeFromName(v184, *(System_String_o **)(v3 + 24), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, v335 - 1, v186);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v187 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v188 = TransformHelper__getNodeFromName(v187, *(System_String_o **)(v3 + 32), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, v188, v335 - 1, v189);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v190 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v191 = TransformHelper__getNodeFromName(v190, *v75, 1, 0);
        v193 = this;
        v194 = v335 - 1;
      }
      else
      {
        v182 = v335;
        if ( !Component_object )
          goto LABEL_376;
        *(_DWORD *)(Component_object + 56) = 0;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v211 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v191 = TransformHelper__getNodeFromName(v211, *v75, 1, 0);
        v193 = this;
        v194 = v335;
      }
      SummonEffectComponent__ChangeClassCardColor(v193, v191, v194, v192);
      Component_object = (__int64)this->fields.effect;
      if ( Component_object )
      {
        v212 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v213 = TransformHelper__getNodeFromName(v212, *(System_String_o **)(v3 + 40), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, v213, v182, v214);
        SummonEffectComponent__CompleteCallback(this, v215);
        return;
      }
LABEL_376:
      sub_1C71608(Component_object, v5);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11181/*"Rank"*/,
                                    0);
      if ( !Component_object )
        goto LABEL_376;
      *(_DWORD *)(Component_object + 56) = 3;
      v340 = key;
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v179, 0);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
      v195 = System_Int32__ToString((int32_t)&v340, 0);
      v196 = System_String__Concat_64069988(
               (System_String_o *)StringLiteral_23073/*"rarity"*/,
               v195,
               (System_String_o *)StringLiteral_16110/*"_0"*/,
               0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v179, v196, 0);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v179->klass[2]._1.parent)(
        v179,
        v179->klass[2]._1.generic_class);
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v181, 0);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
      v197 = System_Int32__ToString((int32_t)&v340, 0);
      v198 = System_String__Concat_64069988(
               (System_String_o *)StringLiteral_23073/*"rarity"*/,
               v197,
               (System_String_o *)StringLiteral_16110/*"_0"*/,
               0);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v181, v198, 0);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v181->klass[2]._1.parent)(
        v181,
        v181->klass[2]._1.generic_class);
      Component_object = (__int64)UnityEngine_Component__get_transform(v179, 0);
      if ( !Component_object )
        goto LABEL_376;
      v343.fields.x = 0.0;
      v343.fields.z = 0.0;
      v343.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v343, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v179, 0);
      if ( !Component_object )
        goto LABEL_376;
      v344.fields.x = v52;
      v344.fields.y = v52;
      v344.fields.z = v52;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v344, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v181, 0);
      if ( !Component_object )
        goto LABEL_376;
      v345.fields.x = 0.0;
      v345.fields.z = 0.0;
      v345.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v345, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v181, 0);
      if ( !Component_object )
        goto LABEL_376;
      v346.fields.x = v52;
      v346.fields.y = v52;
      v346.fields.z = v52;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v346, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    1,
                                    key,
                                    0);
      v205 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      items = v205->fields._items;
      v207 = Method_System_Collections_Generic_List_string__Add__;
      ++v205->fields._version;
      if ( !items )
        goto LABEL_376;
      size = v205->fields._size;
      v209 = (System_String_o *)Component_object;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v205,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v207[4] + 192LL) + 112LL));
      }
      else
      {
        v210 = &items->obj.klass + size;
        v205->fields._size = size + 1;
        v210[4] = (Il2CppClass *)v209;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v210 + 4), (int32_t)v209, v199, v200, v201, v202, v203, v204);
      }
      v257 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v257,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v209, v257, 1, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    101,
                                    key,
                                    0);
      v264 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v265 = v264->fields._items;
      v266 = Method_System_Collections_Generic_List_string__Add__;
      ++v264->fields._version;
      if ( !v265 )
        goto LABEL_376;
      v267 = v264->fields._size;
      v268 = (System_String_o *)Component_object;
      if ( (unsigned int)v267 >= LODWORD(v265->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v264,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v266[4] + 192LL) + 112LL));
      }
      else
      {
        v269 = &v265->obj.klass + v267;
        v264->fields._size = v267 + 1;
        v269[4] = (Il2CppClass *)v268;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v269 + 4), (int32_t)v268, v258, v259, v260, v261, v262, v263);
      }
      v270 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v270,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
        0);
    }
    else
    {
      v216 = sub_1C715FC(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v216, 0);
      if ( !v216 )
        goto LABEL_376;
      *(_QWORD *)(v216 + 24) = v3;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v216 + 24), v3, v217, v218, v219, v220, v221, v222);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Component_object )
        goto LABEL_376;
      v223 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               svtId,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Component_object )
        goto LABEL_376;
      ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Component_object, svtId, v337, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !v223 )
        goto LABEL_376;
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                                    (int32_t)v223[5].klass,
                                    (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Component_object )
        goto LABEL_376;
      v224 = *(_DWORD *)(Component_object + 40);
      if ( v329 != -1 )
        v224 = v329;
      *(_DWORD *)(v216 + 16) = v224;
      if ( v328 == -1 )
        v225 = key;
      else
        v225 = v328;
      if ( !v86 )
      {
        v237 = sub_1C715FC(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v237, 0);
        if ( !v237 )
          goto LABEL_376;
        *(_QWORD *)(v237 + 24) = v216;
        v244 = (Il2CppObject **)(v237 + 24);
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v237 + 24), v216, v238, v239, v240, v241, v242, v243);
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
        if ( !Component_object )
          goto LABEL_376;
        Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11181/*"Rank"*/,
                                      0);
        if ( !Component_object )
          goto LABEL_376;
        v245 = v330;
        if ( v330 == -1 )
          v245 = 0;
        *(_DWORD *)(Component_object + 56) = v245;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v244 || !Component_object )
          goto LABEL_376;
        DesignCardPath = DesignCardManager__GetDesignCardPath(
                           (DesignCardManager_o *)Component_object,
                           (int32_t)(*v244)[1].klass,
                           v225,
                           0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__isExistAssetStorage(DesignCardPath, 0);
        if ( (Component_object & 1) == 0 )
        {
          if ( !*v244 )
            goto LABEL_376;
          LODWORD((*v244)[1].klass) = 1;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v244 || !Component_object )
            goto LABEL_376;
          v225 = 3;
          DesignCardPath = DesignCardManager__GetDesignCardPath(
                             (DesignCardManager_o *)Component_object,
                             (int32_t)(*v244)[1].klass,
                             3,
                             0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v253 = *(_QWORD *)(Component_object + 16);
        v254 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v253 )
          goto LABEL_376;
        v255 = *(int *)(Component_object + 24);
        if ( (unsigned int)v255 >= *(_DWORD *)(v253 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)DesignCardPath,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v254[4] + 192LL) + 112LL));
        }
        else
        {
          v256 = v253 + 8 * v255;
          *(_DWORD *)(Component_object + 24) = v255 + 1;
          *(_QWORD *)(v256 + 32) = DesignCardPath;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)(v256 + 32),
            (int32_t)DesignCardPath,
            v247,
            v248,
            v249,
            v250,
            v251,
            v252);
        }
        v271 = *v244;
        v272 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v272,
          v271,
          Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__loadAssetStorage(DesignCardPath, v272, 1, 0);
        if ( !*v244 )
          goto LABEL_376;
        monitor = (*v244)[1].monitor;
        if ( !monitor )
          goto LABEL_376;
        v274 = (System_String_o **)(monitor[14] == 1 ? &StringLiteral_2666/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/ : &StringLiteral_2665/*"BACKSIDE_CLASS_IMAGE_ID"*/);
        *(_DWORD *)(v237 + 16) = ConstantMaster__getValue(*v274, 0);
        v275 = (int32_t *)(v237 + 16);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v276 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v275, v225, 0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( !AssetManager__isExistAssetStorage(v276, 0) )
        {
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_376;
          v276 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v275, 3, 0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v283 = *(_QWORD *)(Component_object + 16);
        v284 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v283 )
          goto LABEL_376;
        v285 = *(int *)(Component_object + 24);
        if ( (unsigned int)v285 >= *(_DWORD *)(v283 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v276,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v284[4] + 192LL) + 112LL));
        }
        else
        {
          v286 = v283 + 8 * v285;
          *(_DWORD *)(Component_object + 24) = v285 + 1;
          *(_QWORD *)(v286 + 32) = v276;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v286 + 32), (int32_t)v276, v277, v278, v279, v280, v281, v282);
        }
        v287 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v287,
          (Il2CppObject *)v237,
          Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v288 = v276;
        v289 = v287;
        goto LABEL_375;
      }
      v226 = sub_1C715FC(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v226, 0);
      if ( !v226 )
        goto LABEL_376;
      *(_QWORD *)(v226 + 24) = v216;
      v233 = (Il2CppObject **)(v226 + 24);
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v226 + 24), v216, v227, v228, v229, v230, v231, v232);
      if ( !*(_QWORD *)(v226 + 24) )
        goto LABEL_376;
      *(_DWORD *)(v226 + 16) = *(_DWORD *)(*(_QWORD *)(v226 + 24) + 16LL);
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      LowerColorRarity = Rarity__getLowerColorRarity(v225, 0);
      if ( v332 != -1 )
        *(_DWORD *)(v226 + 16) = v332;
      v235 = v327 == -1 ? LowerColorRarity : v327;
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11181/*"Rank"*/,
                                    0);
      if ( v330 == -1 )
      {
        if ( !Component_object )
          goto LABEL_376;
        v236 = v335 == 2 ? 2 : 1;
      }
      else
      {
        v236 = v330;
        if ( !Component_object )
          goto LABEL_376;
      }
      *(_DWORD *)(Component_object + 56) = v236;
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v290 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v226 + 16),
               v235,
               0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__isExistAssetStorage(v290, 0) )
      {
        *(_DWORD *)(v226 + 16) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v235 = 3;
        v290 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v226 + 16),
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v297 = *(_QWORD *)(Component_object + 16);
      v298 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v297 )
        goto LABEL_376;
      v299 = *(int *)(Component_object + 24);
      if ( (unsigned int)v299 >= *(_DWORD *)(v297 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v290,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v298[4] + 192LL) + 112LL));
      }
      else
      {
        v300 = v297 + 8 * v299;
        *(_DWORD *)(Component_object + 24) = v299 + 1;
        *(_QWORD *)(v300 + 32) = v290;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v300 + 32), (int32_t)v290, v291, v292, v293, v294, v295, v296);
      }
      v301 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v301,
        (Il2CppObject *)v226,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v290, v301, 1, 0);
      *(_DWORD *)(v226 + 20) = ConstantMaster__getValue((System_String_o *)StringLiteral_2665/*"BACKSIDE_CLASS_IMAGE_ID"*/, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v302 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v226 + 20),
               v235,
               0);
      if ( !AssetManager__isExistAssetStorage(v302, 0) )
      {
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v302 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v226 + 20),
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v309 = *(_QWORD *)(Component_object + 16);
      v310 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v309 )
        goto LABEL_376;
      v311 = *(int *)(Component_object + 24);
      if ( (unsigned int)v311 >= *(_DWORD *)(v309 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v302,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v310[4] + 192LL) + 112LL));
      }
      else
      {
        v312 = v309 + 8 * v311;
        *(_DWORD *)(Component_object + 24) = v311 + 1;
        *(_QWORD *)(v312 + 32) = v302;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v312 + 32), (int32_t)v302, v303, v304, v305, v306, v307, v308);
      }
      v313 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v313,
        (Il2CppObject *)v226,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v302, v313, 1, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !*v233 || !Component_object )
        goto LABEL_376;
      v268 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               (int32_t)(*v233)[1].klass,
               v225,
               0);
      Component_object = AssetManager__isExistAssetStorage(v268, 0);
      if ( (Component_object & 1) == 0 )
      {
        if ( !*v233 )
          goto LABEL_376;
        LODWORD((*v233)[1].klass) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v233 || !Component_object )
          goto LABEL_376;
        v268 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 (int32_t)(*v233)[1].klass,
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v320 = *(_QWORD *)(Component_object + 16);
      v321 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v320 )
        goto LABEL_376;
      v322 = *(int *)(Component_object + 24);
      if ( (unsigned int)v322 >= *(_DWORD *)(v320 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v268,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v321[4] + 192LL) + 112LL));
      }
      else
      {
        v323 = v320 + 8 * v322;
        *(_DWORD *)(Component_object + 24) = v322 + 1;
        *(_QWORD *)(v323 + 32) = v268;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v323 + 32), (int32_t)v268, v314, v315, v316, v317, v318, v319);
      }
      v324 = *v233;
      v270 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v270,
        v324,
        Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    v288 = v268;
    v289 = v270;
LABEL_375:
    AssetManager__loadAssetStorage(v288, v289, 1, 0);
    return;
  }
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4335/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = 4;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v12, 0);
  v130 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v130 )
    goto LABEL_376;
  v131 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v130,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0);
  v132 = GachaBehaviorMaster_TypeInfo;
  v90 = (__int64 *)v131;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v132 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v89,
                                (Il2CppObject *)v132->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v90 )
    goto LABEL_376;
  v128 = Component_object;
  if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
  {
    v90[7] = Component_object;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v90 + 7), Component_object, v133, v134, v135, v136, v137, v138);
    goto LABEL_172;
  }
LABEL_378:
  sub_1C719A4(v128);
LABEL_379:
  sub_1C719A4(v90);
  SummonEffectComponent___c__DisplayClass45_0___ctor(v325, v326);
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

  if ( (byte_4CC3941 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_5435/*"END_FADE"*/);
    byte_4CC3941 = 1;
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
    UnityEngine_Object__Destroy_71724608(v5, 0);
    *p_effect = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.effect, 0, v6, v7, v8, v9, v10, v11);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    sub_1C71608(0, v13);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5435/*"END_FADE"*/, 0);
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

  if ( (byte_4CC3935 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SummonEffectComponent__endAnimation_b__43_0__);
    byte_4CC3935 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0);
  if ( !v5 )
    sub_1C71608(v8, v9);
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
    sub_1C71608(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
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
  if ( (byte_4CC3942 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4CC3942 = 1;
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
  sub_1C71354(
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->fields.firstTPeelr, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v23 = v4->fields.__4__this;
  if ( !v23 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v23->fields.firstTr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v24 = v4->fields.__4__this;
  if ( !v24 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v24->fields.firstTPeelr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C71608(this, d);
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
  if ( (byte_4CC3943 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C713B0(&StringLiteral_4909/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4CC3943 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4909/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0);
  v10 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
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
    sub_1C71608(this, d);
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

  if ( (byte_4CC3944 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4CC3944 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C71608(Instance, v6);
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
  if ( (byte_4CC3945 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4CC3945 = 1;
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
  sub_1C71354(
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->fields.firstTPeelr, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v25 = v4->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_25;
  v26 = v25->fields.__4__this;
  if ( !v26 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v26->fields.firstTr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v27 = v4->fields.CS___8__locals1;
  if ( !v27 )
    goto LABEL_25;
  v28 = v27->fields.__4__this;
  if ( !v28 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v28->fields.firstTPeelr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C71608(this, d);
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

  if ( (byte_4CC3946 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4CC3946 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C71608(Instance, v6);
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

  if ( (byte_4CC3947 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4CC3947 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C71608(Instance, v6);
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
  if ( (byte_4CC3948 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C713B0(&StringLiteral_15136/*"Unlit/Transparent Colored"*/);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_1C713B0(&StringLiteral_4909/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4CC3948 = 1;
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
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v11 = v4->fields.CS___8__locals3;
  if ( !v11 )
    goto LABEL_22;
  v12 = v11->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_22;
  v13 = this;
  v14 = (System_String_o **)(v12->fields.cardType == 1 ? &StringLiteral_4909/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15136/*"Unlit/Transparent Colored"*/);
  v15 = UnityEngine_Shader__Find(*v14, 0);
  v16 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
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
    sub_1C71608(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
}