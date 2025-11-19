void SummonEffectComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct SummonEffectComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct SummonEffectComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct SummonEffectComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct SummonEffectComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct SummonEffectComponent_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct SummonEffectComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct SummonEffectComponent_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct SummonEffectComponent_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4CB282E & 1) == 0 )
  {
    sub_1C6BA08(&SummonEffectComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_23937/*"summon_up_04"*/);
    sub_1C6BA08(&StringLiteral_23935/*"summon_up_02"*/);
    sub_1C6BA08(&StringLiteral_7061/*"GetAnimationName"*/);
    sub_1C6BA08(&StringLiteral_23936/*"summon_up_03"*/);
    sub_1C6BA08(&StringLiteral_23934/*"summon_up_01"*/);
    sub_1C6BA08(&StringLiteral_11189/*"RarityAnimationName"*/);
    sub_1C6BA08(&StringLiteral_15167/*"UpAnimationName"*/);
    sub_1C6BA08(&StringLiteral_7659/*"InitializeAnimationName"*/);
    byte_4CB282E = 1;
  }
  SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION = (struct System_String_o *)StringLiteral_23934/*"summon_up_01"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)SummonEffectComponent_TypeInfo->static_fields, StringLiteral_23934/*"summon_up_01"*/, v1, v2);
  v3 = StringLiteral_23935/*"summon_up_02"*/;
  static_fields = SummonEffectComponent_TypeInfo->static_fields;
  static_fields->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_23935/*"summon_up_02"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->RANKUP_TO_SILVER_ANIMATION, v3, v5, v6);
  v7 = StringLiteral_23936/*"summon_up_03"*/;
  v8 = SummonEffectComponent_TypeInfo->static_fields;
  v8->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_23936/*"summon_up_03"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->RANKUP_TO_GOLD_ANIMATION, v7, v9, v10);
  v11 = StringLiteral_23937/*"summon_up_04"*/;
  v12 = SummonEffectComponent_TypeInfo->static_fields;
  v12->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_23937/*"summon_up_04"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->RANKUP_COMMANDCODE_ANIMATION, v11, v13, v14);
  v15 = StringLiteral_15167/*"UpAnimationName"*/;
  v16 = SummonEffectComponent_TypeInfo->static_fields;
  v16->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15167/*"UpAnimationName"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->FSM_VARIABLE_UP_ANIMATION_NAME, v15, v17, v18);
  v19 = StringLiteral_7659/*"InitializeAnimationName"*/;
  v20 = SummonEffectComponent_TypeInfo->static_fields;
  v20->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7659/*"InitializeAnimationName"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME, v19, v21, v22);
  v23 = StringLiteral_11189/*"RarityAnimationName"*/;
  v24 = SummonEffectComponent_TypeInfo->static_fields;
  v24->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11189/*"RarityAnimationName"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v24->FSM_VARIABLE_RARITY_ANIMATION_NAME, v23, v25, v26);
  v27 = StringLiteral_7061/*"GetAnimationName"*/;
  v28 = SummonEffectComponent_TypeInfo->static_fields;
  v28->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7061/*"GetAnimationName"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v28->FSM_VARIABLE_GET_ANIMATION_NAME, v27, v29, v30);
  v31 = SummonEffectComponent_TypeInfo->static_fields;
  v31->rarityToColor = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v31->rarityToColor, 0, v32, v33);
}


void SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int v7; // w8
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB282D & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB282D = 1;
  }
  v3 = sub_1C6BAB0(int___TypeInfo, 2);
  if ( !v3 )
    sub_1C6BC60(0, v4);
  v7 = *(_DWORD *)(v3 + 24);
  if ( !v7 || (*(_DWORD *)(v3 + 32) = 512, v7 == 1) )
    sub_1C6BC68(v3);
  *(_DWORD *)(v3 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cardTextureSize, v3, v5, v6);
  v8 = StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effAnimName, v8, v9, v10);
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
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4CB281D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
    sub_1C6BA08(&SummonEffectComponent_SummonInfo_TypeInfo);
    byte_4CB281D = 1;
  }
  SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  }
  v19 = sub_1C6BC54(SummonEffectComponent_SummonInfo_TypeInfo);
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
        v25 = Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__,
        ++SummonInfos->fields._version,
        !items) )
  {
    sub_1C6BC60(v20, v21);
  }
  size = SummonInfos->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      SummonInfos,
      (Il2CppObject *)v19,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    SummonInfos->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v19;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 4), v19, v22, v23);
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
  if ( (byte_4CB2826 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4CB2826 = 1;
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
                                             (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, void *))this->klass[1].vtable._3_ToString.method)(
                                            this,
                                            v8,
                                            this->klass[2]._1.image),
        (cardTextureSize = v6->fields.cardTextureSize) == 0) )
  {
LABEL_10:
    sub_1C6BC60(this, cardNode);
  }
  if ( LODWORD(cardTextureSize->max_length) <= 1 )
LABEL_11:
    sub_1C6BC68(this);
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

  if ( (byte_4CB2827 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C6BA08(&StringLiteral_12015/*"SETUP_DONE"*/);
    byte_4CB2827 = 1;
  }
  counterMax = this->fields._counterMax;
  v4 = this->fields._counter + 1;
  this->fields._counter = v4;
  if ( v4 >= counterMax )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C6BC60(0, v6);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_12015/*"SETUP_DONE"*/, 0);
  }
}


void SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4CB281F & 1) == 0 )
  {
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB281F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1C6BC60(Instance, v3);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x21
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *upAnimationNameList; // x21
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  _BOOL8 v39; // x0
  __int64 v40; // x1
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v42; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  AssetLoader_LoadEndDataHandler_o *v45; // x22
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CB2820 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SummonEffectComponent_OnCharaGraphLoadDone__);
    sub_1C6BA08(&SummonEffectComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_8052/*"IsNoSkip"*/);
    sub_1C6BA08(&StringLiteral_18314/*"countMax"*/);
    sub_1C6BA08(&StringLiteral_13173/*"SummonEffectAnimation"*/);
    byte_4CB2820 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_46;
  v5 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_18314/*"countMax"*/,
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
                              (System_String_o *)StringLiteral_8052/*"IsNoSkip"*/,
                              0);
  if ( !Component_object )
    goto LABEL_46;
  *((_BYTE *)Component_object + 56) = this->fields.isNoSkip;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_13173/*"SummonEffectAnimation"*/,
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
         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = (struct UnityEngine_Animation_o *)v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effAnimation, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v10;
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.upAnimationNameList, (int32_t)v10, v12, v13);
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
  v18 = Method_System_Collections_Generic_List_string__Add__;
  ++upAnimationNameList->fields._version;
  if ( !items )
    goto LABEL_46;
  size = upAnimationNameList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      upAnimationNameList,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    upAnimationNameList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)RANKUP_TO_SILVER_ANIMATION;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)RANKUP_TO_SILVER_ANIMATION, v14, v15);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v23 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION;
  v24 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v23 )
    goto LABEL_46;
  v25 = Component_object[6];
  if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = v23 + 8 * v25;
    Component_object[6] = v25 + 1;
    *(_QWORD *)(v26 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 32), (int32_t)RANKUP_TO_SILVER_ANIMATION, v21, v22);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v29 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION;
  v30 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v29 )
    goto LABEL_46;
  v31 = Component_object[6];
  if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = v29 + 8 * v31;
    Component_object[6] = v31 + 1;
    *(_QWORD *)(v32 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 32), (int32_t)RANKUP_TO_SILVER_ANIMATION, v27, v28);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v35 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION;
  v36 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v35 )
    goto LABEL_46;
  v37 = Component_object[6];
  if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = v35 + 8 * v37;
    Component_object[6] = v37 + 1;
    *(_QWORD *)(v38 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v38 + 32), (int32_t)RANKUP_TO_SILVER_ANIMATION, v33, v34);
  }
  Component_object = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Component_object
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_object, 1, 0),
        (Component_object = (int *)this->fields.SummonInfos) == 0) )
  {
LABEL_46:
    sub_1C6BC60(Component_object, RANKUP_TO_SILVER_ANIMATION);
  }
  this->fields.DownloadCounter = Component_object[6];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)Component_object,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v39 )
      break;
    if ( !v47.fields._current )
      sub_1C6BC60(v39, v40);
    klass = (int32_t)v47.fields._current[1].klass;
    if ( HIDWORD(v47.fields._current[2].klass) == 3 )
    {
      v42 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v42,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0);
      CharaGraphManager__DownloadCommandAsset(klass, v42, 0);
    }
    else
    {
      klass_high = HIDWORD(v47.fields._current[1].klass);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0);
      v45 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v45,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v45, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB281C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
    byte_4CB281C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.SummonInfos, (int32_t)v3, v4, v5);
}


void SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  int32_t v4; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CB2821 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_7458/*"INIT_DONE"*/);
    byte_4CB2821 = 1;
  }
  v4 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v4;
  if ( !v4 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0),
          (Instance = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0) )
    {
      sub_1C6BC60(Instance, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7458/*"INIT_DONE"*/, 0);
  }
}


void SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1

  if ( (byte_4CB282C & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C6BA08(&StringLiteral_5705/*"EVENT_SKIP"*/);
    byte_4CB282C = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C6BC60(0, v4);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5705/*"EVENT_SKIP"*/, 0);
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

  if ( (byte_4CB2822 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4CB2822 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v7 = this->fields._releaseAssetPath;
    if ( !v7 )
      sub_1C6BC60(v5, v6);
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
  const MethodInfo *v10; // x3
  HutongGames_PlayMaker_FsmVariables_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_String_o *effAnimName; // x1

  if ( (byte_4CB2828 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&SummonEffectComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_11175/*"Rank"*/);
    byte_4CB2828 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object
    || (v5 = (PlayMakerFSM_o *)Component_object,
        (Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0)) == 0)
    || (Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                             (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                             (System_String_o *)StringLiteral_11175/*"Rank"*/,
                             0)) == 0 )
  {
LABEL_17:
    sub_1C6BC60(Component_object, v4);
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
           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.effAnimName = (struct System_String_o *)Item;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effAnimName, (int32_t)Item, v9, v10);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  v11 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v11 )
    goto LABEL_17;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v11,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_17;
  effAnimName = this->fields.effAnimName;
  *((_QWORD *)Component_object + 7) = effAnimName;
  sub_1C6B9AC((CGThumbnailListItem_o *)((char *)Component_object + 56), (int32_t)effAnimName, v12, v13);
}


void SummonEffectComponent__SetUpInitializeAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *Component_object; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x19
  HutongGames_PlayMaker_FsmVariables_o *v6; // x20
  System_String_o *Value; // x0

  if ( (byte_4CB2829 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C6BA08(&SummonEffectComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_7451/*"INITIALIZE_ANIMATION"*/);
    byte_4CB2829 = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
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
    sub_1C6BC60(Component_object, v4);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  if ( !System_String__IsNullOrEmpty(Value, 0) )
    PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_7451/*"INITIALIZE_ANIMATION"*/, 0);
}


void SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  SummonEffectComponent_c *v2; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  SummonEffectComponent_c *v8; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_4CB281E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    sub_1C6BA08(&SummonEffectComponent_TypeInfo);
    byte_4CB281E = 1;
  }
  v2 = SummonEffectComponent_TypeInfo;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v2 = SummonEffectComponent_TypeInfo;
  }
  if ( !v2->static_fields->rarityToColor )
  {
    v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
      v3,
      (const MethodInfo_3482178 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v3 )
      sub_1C6BC60(v4, v5);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      0,
      0,
      (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      1,
      0,
      (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      2,
      0,
      (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      3,
      1,
      (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      4,
      2,
      (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      5,
      2,
      (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      101,
      0,
      (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      102,
      0,
      (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v8 = SummonEffectComponent_TypeInfo;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v8 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->rarityToColor, (int32_t)v3, v6, v7);
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

  if ( (byte_4CB282B & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&SummonEffectComponent_TypeInfo);
    byte_4CB282B = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
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
    sub_1C6BC60(Component_object, v4);
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

  if ( (byte_4CB282A & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____78590880);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB282A = 1;
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
    sub_1C6BC60(ComponentsInChildren_object, v4);
  }
LABEL_14:
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                             1,
                                                             (const MethodInfo_313285C *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____78590880);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  klass = ComponentsInChildren_object[1].klass;
  v9 = ComponentsInChildren_object;
  if ( (int)klass >= 1 )
  {
    for ( i = 0; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1C6BC68(ComponentsInChildren_object);
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
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int v22; // w9
  int v23; // w22
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20

  if ( (byte_4CB2824 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SummonEffectComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_8051/*"IsNewCard"*/);
    sub_1C6BA08(&StringLiteral_18313/*"countIndex"*/);
    sub_1C6BA08(&StringLiteral_8064/*"IsRankUp"*/);
    sub_1C6BA08(&StringLiteral_8069/*"IsSkipStop"*/);
    sub_1C6BA08(&StringLiteral_8426/*"LimitCount"*/);
    sub_1C6BA08(&StringLiteral_9574/*"NoticeRarity"*/);
    sub_1C6BA08(&StringLiteral_4332/*"CardType"*/);
    sub_1C6BA08(&StringLiteral_11187/*"Rarity"*/);
    sub_1C6BA08(&StringLiteral_12738/*"ServantId"*/);
    byte_4CB2824 = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_66;
  v5 = (PlayMakerFSM_o *)Component_object;
  Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_18313/*"countIndex"*/,
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
                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v7 = *((_DWORD *)Component_object + 4);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v8 = *((_DWORD *)Component_object + 5);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v9 = *((_BYTE *)Component_object + 24);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v10 = *((unsigned __int8 *)Component_object + 25);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v11 = *((_DWORD *)Component_object + 7);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v12 = *((_DWORD *)Component_object + 8);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v13 = *((_DWORD *)Component_object + 9);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  v14 = *((_BYTE *)Component_object + 40);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_12738/*"ServantId"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v7;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8426/*"LimitCount"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v8;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8064/*"IsRankUp"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v9;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8069/*"IsSkipStop"*/,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)((char *)Component_object + 56), 0, v16, v17);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)((char *)Component_object + 56), 0, v18, v19);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)((char *)Component_object + 56), 0, v20, v21);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8051/*"IsNewCard"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v10 != 0 || v12 == 0;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_9574/*"NoticeRarity"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v11;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_4332/*"CardType"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  if ( v12 )
    v22 = 0;
  else
    v22 = 3;
  *((_DWORD *)Component_object + 14) = v13;
  if ( v12 == 3 )
    v22 = 1;
  v23 = (v12 & 0xFFFFFFFE) == 4 ? 2 : v22;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_11187/*"Rarity"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v23;
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
      sub_1C6BC60(Component_object, v4);
    }
  }
}


void SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  __int64 Component_object; // x0
  System_String_c *v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  PlayMakerFSM_o *v8; // x23
  int32_t v9; // w19
  int v10; // w28
  int v11; // w26
  int v12; // w22
  unsigned int v13; // w25
  char v14; // w27
  System_Collections_Generic_List_object__o *v15; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  HutongGames_PlayMaker_FsmVariables_o *v18; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int v21; // w22
  HutongGames_PlayMaker_FsmVariables_o *v22; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_String_o *v31; // x24
  float v32; // s8
  System_String_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_String_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_String_o *v42; // x0
  System_String_o **v43; // x19
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v47; // x24
  UnityEngine_Transform_o *v48; // x22
  int32_t Item; // w25
  _BOOL4 v50; // w29
  System_Collections_Generic_List_object__o *GachaBehaviors; // x0
  System_Collections_Generic_List_object__o *v52; // x22
  System_Collections_Generic_Dictionary_object__object__o *v53; // x26
  __int64 *v54; // x22
  GachaBehaviorMaster_c *v55; // x0
  int v56; // w29
  Il2CppObject *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x8
  int32_t v64; // w0
  GachaBehaviorMaster_c *v65; // x0
  GachaBehaviorMaster_c *v66; // x0
  int v67; // w8
  GachaBehaviorMaster_c *v68; // x0
  GachaBehaviorMaster_c *v69; // x0
  int v70; // w8
  GachaBehaviorMaster_c *v71; // x0
  GachaBehaviorMaster_c *v72; // x0
  int v73; // w8
  GachaBehaviorMaster_c *v74; // x0
  GachaBehaviorMaster_c *v75; // x0
  int v76; // w8
  GachaBehaviorMaster_c *v77; // x0
  _BOOL4 v78; // w10
  HutongGames_PlayMaker_FsmVariables_o *v79; // x22
  HutongGames_PlayMaker_FsmString_o *v80; // x0
  GachaBehaviorMaster_c *v81; // x8
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x8
  GachaBehaviorMaster_c *v85; // x0
  HutongGames_PlayMaker_FsmVariables_o *v86; // x22
  HutongGames_PlayMaker_FsmString_o *v87; // x0
  GachaBehaviorMaster_c *v88; // x8
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  GachaBehaviorMaster_c *v91; // x0
  HutongGames_PlayMaker_FsmVariables_o *v92; // x22
  HutongGames_PlayMaker_FsmString_o *v93; // x0
  GachaBehaviorMaster_c *v94; // x8
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  UnityEngine_Object_o *prevObject; // x22
  struct UnityEngine_GameObject_o **p_prevObject; // x26
  int v99; // w9
  int32_t v100; // w8
  UnityEngine_Object_o *v101; // x22
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v105; // x28
  bool v106; // w28
  UnityEngine_GameObject_o *v107; // x22
  Il2CppObject *v108; // x28
  System_Action_o *v109; // x25
  System_Action_o *v110; // x25
  UnityEngine_Component_o *v111; // x22
  UnityEngine_Transform_o *v112; // x28
  UnityEngine_GameObject_o *v113; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  System_String_o *v116; // x24
  System_String_o *v117; // x22
  UnityEngine_Transform_o *v118; // x0
  UnityEngine_Component_o *v119; // x26
  UnityEngine_Transform_o *v120; // x0
  UnityEngine_Component_o *v121; // x24
  int32_t v122; // w22
  int v123; // w8
  UnityEngine_Transform_o *v124; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v126; // x3
  UnityEngine_Transform_o *v127; // x0
  UnityEngine_Transform_o *v128; // x0
  const MethodInfo *v129; // x3
  UnityEngine_Transform_o *v130; // x0
  UnityEngine_Transform_o *v131; // x1
  const MethodInfo *v132; // x3
  SummonEffectComponent_o *v133; // x0
  int32_t v134; // w2
  System_String_o *v135; // x0
  System_String_o *v136; // x19
  System_String_o *v137; // x0
  System_String_o *v138; // x0
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  System_Collections_Generic_List_object__o *v141; // x8
  struct System_Object_array *items; // x9
  _QWORD *v143; // x10
  __int64 size; // x11
  System_String_o *v145; // x19
  Il2CppClass **v146; // x0
  UnityEngine_Transform_o *v147; // x0
  UnityEngine_Transform_o *v148; // x0
  UnityEngine_Transform_o *v149; // x0
  const MethodInfo *v150; // x3
  const MethodInfo *v151; // x1
  __int64 v152; // x24
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  Il2CppObject *v155; // x19
  int v156; // w8
  int32_t v157; // w19
  __int64 v158; // x21
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  Il2CppObject **v161; // x20
  int32_t LowerColorRarity; // w0
  int32_t v163; // w22
  int v164; // w8
  __int64 v165; // x20
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  Il2CppObject **v168; // x21
  int v169; // w8
  System_String_o *DesignCardPath; // x22
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  __int64 v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  __int64 v176; // x8
  AssetLoader_LoadEndDataHandler_o *v177; // x20
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  System_Collections_Generic_List_object__o *v180; // x8
  struct System_Object_array *v181; // x9
  _QWORD *v182; // x10
  __int64 v183; // x11
  System_String_o *v184; // x19
  Il2CppClass **v185; // x0
  AssetLoader_LoadEndDataHandler_o *v186; // x20
  Il2CppObject *v187; // x24
  AssetLoader_LoadEndDataHandler_o *v188; // x23
  _DWORD *monitor; // x8
  System_String_o **v190; // x8
  int32_t *v191; // x21
  System_String_o *v192; // x19
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  __int64 v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  __int64 v198; // x8
  AssetLoader_LoadEndDataHandler_o *v199; // x21
  System_String_o *v200; // x0
  AssetLoader_LoadEndDataHandler_o *v201; // x1
  System_String_o *v202; // x23
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  __int64 v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  __int64 v208; // x8
  AssetLoader_LoadEndDataHandler_o *v209; // x24
  System_String_o *v210; // x22
  int32_t v211; // w2
  const MethodInfo *v212; // x3
  __int64 v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  __int64 v216; // x8
  AssetLoader_LoadEndDataHandler_o *v217; // x23
  int32_t v218; // w2
  const MethodInfo *v219; // x3
  __int64 v220; // x8
  _QWORD *v221; // x9
  __int64 v222; // x10
  __int64 v223; // x8
  Il2CppObject *v224; // x21
  SummonEffectComponent___c__DisplayClass45_0_o *v225; // x0
  const MethodInfo *v226; // x1
  int v227; // [xsp+Ch] [xbp-D4h]
  int v228; // [xsp+10h] [xbp-D0h]
  int v229; // [xsp+14h] [xbp-CCh]
  int v230; // [xsp+18h] [xbp-C8h]
  _BOOL4 v231; // [xsp+1Ch] [xbp-C4h]
  int v232; // [xsp+34h] [xbp-ACh]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+38h] [xbp-A8h]
  int64_t v234; // [xsp+40h] [xbp-A0h]
  int32_t v235; // [xsp+50h] [xbp-90h]
  int32_t key; // [xsp+54h] [xbp-8Ch]
  int32_t v237; // [xsp+58h] [xbp-88h]
  int32_t svtId; // [xsp+5Ch] [xbp-84h]
  int v239; // [xsp+60h] [xbp-80h] BYREF
  int32_t v240; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v242; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v243; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v244; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v245; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v246; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2825 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_GachaBehaviorMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
    sub_1C6BA08(&GachaBehaviorMaster_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Rarity_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&SummonEffectComponent_TypeInfo);
    sub_1C6BA08(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__);
    sub_1C6BA08(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__);
    sub_1C6BA08(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__);
    sub_1C6BA08(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__);
    sub_1C6BA08(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__);
    sub_1C6BA08(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
    sub_1C6BA08(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__);
    sub_1C6BA08(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__);
    sub_1C6BA08(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
    sub_1C6BA08(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__);
    sub_1C6BA08(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__);
    sub_1C6BA08(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
    sub_1C6BA08(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__);
    sub_1C6BA08(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
    sub_1C6BA08(&StringLiteral_4328/*"CardScale"*/);
    sub_1C6BA08(&StringLiteral_4329/*"CardSecondName"*/);
    sub_1C6BA08(&StringLiteral_4320/*"CardFirstName"*/);
    sub_1C6BA08(&StringLiteral_8051/*"IsNewCard"*/);
    sub_1C6BA08(&StringLiteral_4327/*"CardRotName"*/);
    sub_1C6BA08(&StringLiteral_4514/*"CodeCardRarity02"*/);
    sub_1C6BA08(&StringLiteral_2664/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/);
    sub_1C6BA08(&StringLiteral_11175/*"Rank"*/);
    sub_1C6BA08(&StringLiteral_18313/*"countIndex"*/);
    sub_1C6BA08(&StringLiteral_13171/*"SummonEffect"*/);
    sub_1C6BA08(&StringLiteral_23055/*"rarity"*/);
    sub_1C6BA08(&StringLiteral_8064/*"IsRankUp"*/);
    sub_1C6BA08(&StringLiteral_16103/*"_0"*/);
    sub_1C6BA08(&StringLiteral_4513/*"CodeCardRarity"*/);
    sub_1C6BA08(&StringLiteral_8069/*"IsSkipStop"*/);
    sub_1C6BA08(&StringLiteral_8426/*"LimitCount"*/);
    sub_1C6BA08(&StringLiteral_9574/*"NoticeRarity"*/);
    sub_1C6BA08(&StringLiteral_2663/*"BACKSIDE_CLASS_IMAGE_ID"*/);
    sub_1C6BA08(&StringLiteral_4332/*"CardType"*/);
    sub_1C6BA08(&StringLiteral_4326/*"CardNodeName"*/);
    sub_1C6BA08(&StringLiteral_4321/*"CardFirstPeelName"*/);
    sub_1C6BA08(&StringLiteral_23928/*"summon_rarity_0"*/);
    sub_1C6BA08(&StringLiteral_11187/*"Rarity"*/);
    sub_1C6BA08(&StringLiteral_12738/*"ServantId"*/);
    byte_4CB2825 = 1;
  }
  entity = 0;
  v240 = 0;
  v3 = sub_1C6BC54(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_376;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  this->fields.isNoSkipAll = 0;
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_376;
  v8 = (PlayMakerFSM_o *)Component_object;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_18313/*"countIndex"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Component_object, 0);
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v9 = Component_object;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                Component_object,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  svtId = *(_DWORD *)(Component_object + 16);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v237 = *(_DWORD *)(Component_object + 20);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v10 = *(unsigned __int8 *)(Component_object + 24);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v11 = *(unsigned __int8 *)(Component_object + 25);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v12 = *(_DWORD *)(Component_object + 28);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v13 = *(_DWORD *)(Component_object + 32);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(Component_object + 36);
  Component_object = (__int64)this->fields.SummonInfos;
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Component_object,
                                v9,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v14 = *(_BYTE *)(Component_object + 40);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v234 = *(_QWORD *)(Component_object + 48);
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v5);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._releaseAssetPath, (int32_t)v15, v16, v17);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_12738/*"ServantId"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = svtId;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8426/*"LimitCount"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v237;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8064/*"IsRankUp"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v10;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8069/*"IsSkipStop"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v14;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  v18 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v18 )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                v18,
                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_QWORD *)(Component_object + 56) = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)(Component_object + 56), 0, v19, v20);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8051/*"IsNewCard"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v11 != 0 || v13 == 0;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_9574/*"NoticeRarity"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v12;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4332/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = *(_DWORD *)(v3 + 56);
  if ( v13 - 3 >= 3 )
    v21 = v13 ? 0 : 3;
  else
    v21 = dword_D1F87C[v13 - 3];
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_11187/*"Rarity"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v21;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  v22 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  key = v13;
  if ( !v22 )
    goto LABEL_376;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v22,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0);
  v239 = v21;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v239);
  Component_object = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_23928/*"summon_rarity_0"*/, v24, 0);
  if ( !FsmString )
    goto LABEL_376;
  FsmString->fields.value = (struct System_String_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&FsmString->fields.value, Component_object, v25, v26);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13171/*"SummonEffect"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, 0);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effect, (int32_t)Value, v29, v30);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4326/*"CardNodeName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v31 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4328/*"CardScale"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v32 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4320/*"CardFirstName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v33 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 24) = v33;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v33, v34, v35);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4321/*"CardFirstPeelName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v36 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 32) = v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v36, v37, v38);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4329/*"CardSecondName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v39 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 40) = v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)v39, v40, v41);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4327/*"CardRotName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v42 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 48) = v42;
  v43 = (System_String_o **)(v3 + 48);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 48), (int32_t)v42, v44, v45);
  Component_object = (__int64)*p_effect;
  if ( !*p_effect )
    goto LABEL_376;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  Component_object = (__int64)TransformHelper__getNodeFromName(transform, v31, 1, 0);
  if ( !Component_object )
    goto LABEL_376;
  v47 = (UnityEngine_Component_o *)Component_object;
  Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_376;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v47, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  v48 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4CAFC0E )
  {
    Component_object = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  if ( !v48 )
    goto LABEL_376;
  UnityEngine_Transform__set_localScale(v48, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v5 = (System_String_c *)v13;
  Component_object = (__int64)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_object )
    goto LABEL_376;
  Item = System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)Component_object,
           v13,
           (const MethodInfo_3482AA0 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Component_object,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_object )
    goto LABEL_376;
  v50 = v10 != 0 && Item != 0;
  GachaBehaviors = (System_Collections_Generic_List_object__o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                                  (GachaBehaviorMaster_o *)Component_object,
                                                                  this->fields.gachaId,
                                                                  svtId,
                                                                  0);
  v235 = Item;
  if ( !GachaBehaviors || (v52 = GachaBehaviors, GachaBehaviors->fields._size < 1) )
  {
    v228 = -1;
    v229 = -1;
    v227 = -1;
    v232 = -1;
    v230 = -1;
    goto LABEL_185;
  }
  v231 = v10 != 0 && Item != 0;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                GachaBehaviors,
                                0,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !*(_QWORD *)(Component_object + 24) )
  {
    v228 = -1;
    v229 = -1;
    v227 = -1;
    v232 = -1;
    v230 = -1;
    goto LABEL_184;
  }
  if ( v11 )
    this->fields.isNoSkipAll = 1;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                v52,
                                0,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v53 = *(System_Collections_Generic_Dictionary_object__object__o **)(Component_object + 24);
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  if ( !v53 )
    goto LABEL_376;
  v54 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v53,
         (Il2CppObject *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v55 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v55 = GachaBehaviorMaster_TypeInfo;
    }
    v57 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v53,
            (Il2CppObject *)v55->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
            (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v54 = (__int64 *)v57;
    if ( v57 )
    {
      v5 = string_TypeInfo;
      if ( (System_String_c *)v57->klass != string_TypeInfo )
        goto LABEL_379;
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v54,
            (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_object = (__int64)this->fields.upAnimationNameList;
      if ( !Component_object )
        goto LABEL_376;
      v60 = *(_QWORD *)(Component_object + 16);
      v61 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v60 )
        goto LABEL_376;
      v62 = *(int *)(Component_object + 24);
      if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v54,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = v60 + 8 * v62;
        *(_DWORD *)(Component_object + 24) = v62 + 1;
        *(_QWORD *)(v63 + 32) = v54;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v63 + 32), (int32_t)v54, v58, v59);
      }
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    v64 = System_Collections_Generic_List_object___IndexOf(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v54,
            (const MethodInfo_3801614 *)Method_System_Collections_Generic_List_string__IndexOf__);
    v54 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
    v56 = v64;
  }
  else
  {
    v56 = -1;
  }
  v65 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v65 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v53,
         (Il2CppObject *)v65->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v66 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v66 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v53,
                                  (Il2CppObject *)v66->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                  (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v67 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v67 = -1;
  }
  v68 = GachaBehaviorMaster_TypeInfo;
  v232 = v67;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v68 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v53,
         (Il2CppObject *)v68->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v69 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v69 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v53,
                                  (Il2CppObject *)v69->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                  (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v70 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v70 = -1;
  }
  v71 = GachaBehaviorMaster_TypeInfo;
  v227 = v70;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v71 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v53,
         (Il2CppObject *)v71->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v72 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v72 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v53,
                                  (Il2CppObject *)v72->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                  (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v73 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v73 = -1;
  }
  v74 = GachaBehaviorMaster_TypeInfo;
  v229 = v73;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v74 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v53,
          (Il2CppObject *)v74->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v76 = -1;
    goto LABEL_142;
  }
  v75 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v75 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v53,
                                (Il2CppObject *)v75->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_377:
    sub_1C6BFFC(Component_object);
    goto LABEL_378;
  }
  v76 = *(_DWORD *)j_il2cpp_object_unbox_0();
LABEL_142:
  v77 = GachaBehaviorMaster_TypeInfo;
  v78 = v10 != 0 && Item != 0;
  v228 = v76;
  if ( v56 != -1 )
    v78 = v232 != -1;
  v231 = v78;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v77 = GachaBehaviorMaster_TypeInfo;
  }
  v230 = v56;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v53,
         (Il2CppObject *)v77->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_9574/*"NoticeRarity"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    *(_DWORD *)(Component_object + 56) = 3;
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
    v79 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    if ( !v79 )
      goto LABEL_376;
    v80 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
            v79,
            SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
            0);
    v81 = GachaBehaviorMaster_TypeInfo;
    v54 = (__int64 *)v80;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v81 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v53,
                                  (Il2CppObject *)v81->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                  (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v54 )
      goto LABEL_376;
    v84 = Component_object;
    if ( Component_object && *(System_String_c **)Component_object != string_TypeInfo )
      goto LABEL_378;
    v54[7] = Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v54 + 7), Component_object, v82, v83);
  }
  v85 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v85 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v53,
          (Il2CppObject *)v85->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_172:
    v91 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v91 = GachaBehaviorMaster_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v53,
           (Il2CppObject *)v91->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
      v92 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
      if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      if ( !v92 )
        goto LABEL_376;
      v93 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
              v92,
              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
              0);
      v94 = GachaBehaviorMaster_TypeInfo;
      v54 = (__int64 *)v93;
      if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
        v94 = GachaBehaviorMaster_TypeInfo;
      }
      v50 = v231;
      Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    v53,
                                    (Il2CppObject *)v94->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                    (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v54 )
        goto LABEL_376;
      v84 = Component_object;
      if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
      {
        v54[7] = Component_object;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v54 + 7), Component_object, v95, v96);
        goto LABEL_185;
      }
      goto LABEL_378;
    }
LABEL_184:
    v50 = v231;
LABEL_185:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v50 )
      v99 = 4;
    else
      v99 = 3;
    if ( this->fields.EditMode )
      v100 = 0;
    else
      v100 = v99;
    this->fields._counter = 0;
    this->fields._counterMax = v100;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(prevObject, 0, 0) )
    {
      v101 = (UnityEngine_Object_o *)*p_prevObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(v101, 0);
      *p_prevObject = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.prevObject, 0, v102, v103);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v47, 0);
      v105 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v105,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0);
      Component_object = (__int64)CharaGraphManager__CreateCommandTexturePrefab(gameObject, svtId, 0, v105, 0);
    }
    else
    {
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0;
      if ( !Component_object )
        goto LABEL_376;
      v106 = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               &entity,
               v234,
               (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v107 = UnityEngine_Component__get_gameObject(v47, 0);
      if ( v106 )
      {
        v108 = entity;
        v109 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(
          v109,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab_40890564(
                                      v107,
                                      (UserServantEntity_o *)v108,
                                      0,
                                      v109,
                                      0);
      }
      else
      {
        v110 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(
          v110,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab(v107, svtId, v237, 0, 1, 0, v110, 0, 0);
      }
    }
    v111 = (UnityEngine_Component_o *)Component_object;
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    v112 = (UnityEngine_Transform_o *)Component_object;
    if ( !byte_4CAFC09 )
    {
      Component_object = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
    }
    if ( !v112 )
      goto LABEL_376;
    UnityEngine_Transform__set_localPosition(v112, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    Component_object = (__int64)UnityEngine_Component__get_transform(v111, 0);
    if ( !Component_object )
      goto LABEL_376;
    v242.fields.x = v32;
    v242.fields.y = v32;
    v242.fields.z = v32;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v242, 0);
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v47,
                                  (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    v113 = UnityEngine_Component__get_gameObject(v111, 0);
    *p_prevObject = v113;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.prevObject, (int32_t)v113, v114, v115);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4513/*"CodeCardRarity"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    v116 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4514/*"CodeCardRarity02"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_object,
                                  0);
    if ( !*p_effect )
      goto LABEL_376;
    v117 = (System_String_o *)Component_object;
    v118 = UnityEngine_GameObject__get_transform(*p_effect, 0);
    Component_object = (__int64)TransformHelper__getNodeFromName(v118, v116, 1, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !*p_effect )
      goto LABEL_376;
    v119 = (UnityEngine_Component_o *)Component_object;
    v120 = UnityEngine_GameObject__get_transform(*p_effect, 0);
    Component_object = (__int64)TransformHelper__getNodeFromName(v120, v117, 1, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !v119 )
      goto LABEL_376;
    v121 = (UnityEngine_Component_o *)Component_object;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v119, 0);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
    if ( !v121 )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v121, 0);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
    if ( this->fields.EditMode )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11175/*"Rank"*/,
                                    0);
      if ( v50 )
      {
        v122 = v235;
        if ( !Component_object )
          goto LABEL_376;
        v123 = v235 == 2 ? 2 : 1;
        *(_DWORD *)(Component_object + 56) = v123;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v124 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        NodeFromName = TransformHelper__getNodeFromName(v124, *(System_String_o **)(v3 + 24), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, v235 - 1, v126);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v127 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v128 = TransformHelper__getNodeFromName(v127, *(System_String_o **)(v3 + 32), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, v128, v235 - 1, v129);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v130 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v131 = TransformHelper__getNodeFromName(v130, *v43, 1, 0);
        v133 = this;
        v134 = v235 - 1;
      }
      else
      {
        v122 = v235;
        if ( !Component_object )
          goto LABEL_376;
        *(_DWORD *)(Component_object + 56) = 0;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v147 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v131 = TransformHelper__getNodeFromName(v147, *v43, 1, 0);
        v133 = this;
        v134 = v235;
      }
      SummonEffectComponent__ChangeClassCardColor(v133, v131, v134, v132);
      Component_object = (__int64)this->fields.effect;
      if ( Component_object )
      {
        v148 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v149 = TransformHelper__getNodeFromName(v148, *(System_String_o **)(v3 + 40), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, v149, v122, v150);
        SummonEffectComponent__CompleteCallback(this, v151);
        return;
      }
LABEL_376:
      sub_1C6BC60(Component_object, v5);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11175/*"Rank"*/,
                                    0);
      if ( !Component_object )
        goto LABEL_376;
      *(_DWORD *)(Component_object + 56) = 3;
      v240 = key;
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v119, 0);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
      v135 = System_Int32__ToString((int32_t)&v240, 0);
      v136 = System_String__Concat_64005056(
               (System_String_o *)StringLiteral_23055/*"rarity"*/,
               v135,
               (System_String_o *)StringLiteral_16103/*"_0"*/,
               0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v119, v136, 0);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v119->klass[2]._1.parent)(
        v119,
        v119->klass[2]._1.generic_class);
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v121, 0);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
      v137 = System_Int32__ToString((int32_t)&v240, 0);
      v138 = System_String__Concat_64005056(
               (System_String_o *)StringLiteral_23055/*"rarity"*/,
               v137,
               (System_String_o *)StringLiteral_16103/*"_0"*/,
               0);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v121, v138, 0);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v121->klass[2]._1.parent)(
        v121,
        v121->klass[2]._1.generic_class);
      Component_object = (__int64)UnityEngine_Component__get_transform(v119, 0);
      if ( !Component_object )
        goto LABEL_376;
      v243.fields.x = 0.0;
      v243.fields.z = 0.0;
      v243.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v243, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v119, 0);
      if ( !Component_object )
        goto LABEL_376;
      v244.fields.x = v32;
      v244.fields.y = v32;
      v244.fields.z = v32;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v244, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v121, 0);
      if ( !Component_object )
        goto LABEL_376;
      v245.fields.x = 0.0;
      v245.fields.z = 0.0;
      v245.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v245, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v121, 0);
      if ( !Component_object )
        goto LABEL_376;
      v246.fields.x = v32;
      v246.fields.y = v32;
      v246.fields.z = v32;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v246, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    1,
                                    key,
                                    0);
      v141 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      items = v141->fields._items;
      v143 = Method_System_Collections_Generic_List_string__Add__;
      ++v141->fields._version;
      if ( !items )
        goto LABEL_376;
      size = v141->fields._size;
      v145 = (System_String_o *)Component_object;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v141,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
      }
      else
      {
        v146 = &items->obj.klass + size;
        v141->fields._size = size + 1;
        v146[4] = (Il2CppClass *)v145;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v146 + 4), (int32_t)v145, v139, v140);
      }
      v177 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v177,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v145, v177, 1, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    101,
                                    key,
                                    0);
      v180 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v181 = v180->fields._items;
      v182 = Method_System_Collections_Generic_List_string__Add__;
      ++v180->fields._version;
      if ( !v181 )
        goto LABEL_376;
      v183 = v180->fields._size;
      v184 = (System_String_o *)Component_object;
      if ( (unsigned int)v183 >= LODWORD(v181->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v180,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
      }
      else
      {
        v185 = &v181->obj.klass + v183;
        v180->fields._size = v183 + 1;
        v185[4] = (Il2CppClass *)v184;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v185 + 4), (int32_t)v184, v178, v179);
      }
      v186 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v186,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
        0);
    }
    else
    {
      v152 = sub_1C6BC54(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v152, 0);
      if ( !v152 )
        goto LABEL_376;
      *(_QWORD *)(v152 + 24) = v3;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v152 + 24), v3, v153, v154);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Component_object )
        goto LABEL_376;
      v155 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               svtId,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Component_object )
        goto LABEL_376;
      ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Component_object, svtId, v237, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !v155 )
        goto LABEL_376;
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                                    (int32_t)v155[5].klass,
                                    (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Component_object )
        goto LABEL_376;
      v156 = *(_DWORD *)(Component_object + 40);
      if ( v229 != -1 )
        v156 = v229;
      *(_DWORD *)(v152 + 16) = v156;
      if ( v228 == -1 )
        v157 = key;
      else
        v157 = v228;
      if ( !v50 )
      {
        v165 = sub_1C6BC54(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v165, 0);
        if ( !v165 )
          goto LABEL_376;
        *(_QWORD *)(v165 + 24) = v152;
        v168 = (Il2CppObject **)(v165 + 24);
        sub_1C6B9AC((CGThumbnailListItem_o *)(v165 + 24), v152, v166, v167);
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
        if ( !Component_object )
          goto LABEL_376;
        Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11175/*"Rank"*/,
                                      0);
        if ( !Component_object )
          goto LABEL_376;
        v169 = v230;
        if ( v230 == -1 )
          v169 = 0;
        *(_DWORD *)(Component_object + 56) = v169;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v168 || !Component_object )
          goto LABEL_376;
        DesignCardPath = DesignCardManager__GetDesignCardPath(
                           (DesignCardManager_o *)Component_object,
                           (int32_t)(*v168)[1].klass,
                           v157,
                           0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__isExistAssetStorage(DesignCardPath, 0);
        if ( (Component_object & 1) == 0 )
        {
          if ( !*v168 )
            goto LABEL_376;
          LODWORD((*v168)[1].klass) = 1;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v168 || !Component_object )
            goto LABEL_376;
          v157 = 3;
          DesignCardPath = DesignCardManager__GetDesignCardPath(
                             (DesignCardManager_o *)Component_object,
                             (int32_t)(*v168)[1].klass,
                             3,
                             0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v173 = *(_QWORD *)(Component_object + 16);
        v174 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v173 )
          goto LABEL_376;
        v175 = *(int *)(Component_object + 24);
        if ( (unsigned int)v175 >= *(_DWORD *)(v173 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)DesignCardPath,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
        }
        else
        {
          v176 = v173 + 8 * v175;
          *(_DWORD *)(Component_object + 24) = v175 + 1;
          *(_QWORD *)(v176 + 32) = DesignCardPath;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v176 + 32), (int32_t)DesignCardPath, v171, v172);
        }
        v187 = *v168;
        v188 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v188,
          v187,
          Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__loadAssetStorage(DesignCardPath, v188, 1, 0);
        if ( !*v168 )
          goto LABEL_376;
        monitor = (*v168)[1].monitor;
        if ( !monitor )
          goto LABEL_376;
        v190 = (System_String_o **)(monitor[14] == 1 ? &StringLiteral_2664/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/ : &StringLiteral_2663/*"BACKSIDE_CLASS_IMAGE_ID"*/);
        *(_DWORD *)(v165 + 16) = ConstantMaster__getValue(*v190, 0);
        v191 = (int32_t *)(v165 + 16);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v192 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v191, v157, 0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( !AssetManager__isExistAssetStorage(v192, 0) )
        {
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_376;
          v192 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v191, 3, 0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v195 = *(_QWORD *)(Component_object + 16);
        v196 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v195 )
          goto LABEL_376;
        v197 = *(int *)(Component_object + 24);
        if ( (unsigned int)v197 >= *(_DWORD *)(v195 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v192,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
        }
        else
        {
          v198 = v195 + 8 * v197;
          *(_DWORD *)(Component_object + 24) = v197 + 1;
          *(_QWORD *)(v198 + 32) = v192;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v198 + 32), (int32_t)v192, v193, v194);
        }
        v199 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v199,
          (Il2CppObject *)v165,
          Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v200 = v192;
        v201 = v199;
        goto LABEL_375;
      }
      v158 = sub_1C6BC54(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v158, 0);
      if ( !v158 )
        goto LABEL_376;
      *(_QWORD *)(v158 + 24) = v152;
      v161 = (Il2CppObject **)(v158 + 24);
      sub_1C6B9AC((CGThumbnailListItem_o *)(v158 + 24), v152, v159, v160);
      if ( !*(_QWORD *)(v158 + 24) )
        goto LABEL_376;
      *(_DWORD *)(v158 + 16) = *(_DWORD *)(*(_QWORD *)(v158 + 24) + 16LL);
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      LowerColorRarity = Rarity__getLowerColorRarity(v157, 0);
      if ( v232 != -1 )
        *(_DWORD *)(v158 + 16) = v232;
      v163 = v227 == -1 ? LowerColorRarity : v227;
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11175/*"Rank"*/,
                                    0);
      if ( v230 == -1 )
      {
        if ( !Component_object )
          goto LABEL_376;
        v164 = v235 == 2 ? 2 : 1;
      }
      else
      {
        v164 = v230;
        if ( !Component_object )
          goto LABEL_376;
      }
      *(_DWORD *)(Component_object + 56) = v164;
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v202 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v158 + 16),
               v163,
               0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__isExistAssetStorage(v202, 0) )
      {
        *(_DWORD *)(v158 + 16) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v163 = 3;
        v202 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v158 + 16),
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v205 = *(_QWORD *)(Component_object + 16);
      v206 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v205 )
        goto LABEL_376;
      v207 = *(int *)(Component_object + 24);
      if ( (unsigned int)v207 >= *(_DWORD *)(v205 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v202,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
      }
      else
      {
        v208 = v205 + 8 * v207;
        *(_DWORD *)(Component_object + 24) = v207 + 1;
        *(_QWORD *)(v208 + 32) = v202;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v208 + 32), (int32_t)v202, v203, v204);
      }
      v209 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v209,
        (Il2CppObject *)v158,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v202, v209, 1, 0);
      *(_DWORD *)(v158 + 20) = ConstantMaster__getValue((System_String_o *)StringLiteral_2663/*"BACKSIDE_CLASS_IMAGE_ID"*/, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v210 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v158 + 20),
               v163,
               0);
      if ( !AssetManager__isExistAssetStorage(v210, 0) )
      {
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v210 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v158 + 20),
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v213 = *(_QWORD *)(Component_object + 16);
      v214 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v213 )
        goto LABEL_376;
      v215 = *(int *)(Component_object + 24);
      if ( (unsigned int)v215 >= *(_DWORD *)(v213 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v210,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
      }
      else
      {
        v216 = v213 + 8 * v215;
        *(_DWORD *)(Component_object + 24) = v215 + 1;
        *(_QWORD *)(v216 + 32) = v210;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v216 + 32), (int32_t)v210, v211, v212);
      }
      v217 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v217,
        (Il2CppObject *)v158,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v210, v217, 1, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !*v161 || !Component_object )
        goto LABEL_376;
      v184 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               (int32_t)(*v161)[1].klass,
               v157,
               0);
      Component_object = AssetManager__isExistAssetStorage(v184, 0);
      if ( (Component_object & 1) == 0 )
      {
        if ( !*v161 )
          goto LABEL_376;
        LODWORD((*v161)[1].klass) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v161 || !Component_object )
          goto LABEL_376;
        v184 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 (int32_t)(*v161)[1].klass,
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v220 = *(_QWORD *)(Component_object + 16);
      v221 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v220 )
        goto LABEL_376;
      v222 = *(int *)(Component_object + 24);
      if ( (unsigned int)v222 >= *(_DWORD *)(v220 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v184,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v221[4] + 192LL) + 112LL));
      }
      else
      {
        v223 = v220 + 8 * v222;
        *(_DWORD *)(Component_object + 24) = v222 + 1;
        *(_QWORD *)(v223 + 32) = v184;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v223 + 32), (int32_t)v184, v218, v219);
      }
      v224 = *v161;
      v186 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v186,
        v224,
        Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    v200 = v184;
    v201 = v186;
LABEL_375:
    AssetManager__loadAssetStorage(v200, v201, 1, 0);
    return;
  }
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4332/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = 4;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  v86 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v86 )
    goto LABEL_376;
  v87 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
          v86,
          SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
          0);
  v88 = GachaBehaviorMaster_TypeInfo;
  v54 = (__int64 *)v87;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v88 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v53,
                                (Il2CppObject *)v88->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v54 )
    goto LABEL_376;
  v84 = Component_object;
  if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
  {
    v54[7] = Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v54 + 7), Component_object, v89, v90);
    goto LABEL_172;
  }
LABEL_378:
  sub_1C6BFFC(v84);
LABEL_379:
  sub_1C6BFFC(v54);
  SummonEffectComponent___c__DisplayClass45_0___ctor(v225, v226);
}


void SummonEffectComponent___endAnimation_b__43_0(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *Component_object; // x0
  __int64 v9; // x1

  if ( (byte_4CB282F & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_5432/*"END_FADE"*/);
    byte_4CB282F = 1;
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
    UnityEngine_Object__Destroy_71659676(v5, 0);
    *p_effect = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effect, 0, v6, v7);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    sub_1C6BC60(0, v9);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5432/*"END_FADE"*/, 0);
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

  if ( (byte_4CB2823 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SummonEffectComponent__endAnimation_b__43_0__);
    byte_4CB2823 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0);
  if ( !v5 )
    sub_1C6BC60(v8, v9);
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
    sub_1C6BC60(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(0, method);
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
  const MethodInfo *v9; // x3
  struct SummonEffectComponent_o *v10; // x21
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Transform_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct SummonEffectComponent_o *v15; // x8
  struct SummonEffectComponent_o *v16; // x8
  struct SummonEffectComponent_o *v17; // x8
  DesignCardManager_o *v18; // x21
  UnityEngine_Transform_o *v19; // x0

  v4 = this;
  if ( (byte_4CB2830 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4CB2830 = 1;
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.firstTr, (int32_t)NodeFromName, v8, v9);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)v10->fields.effect;
  if ( !this )
    goto LABEL_16;
  v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v12 = TransformHelper__getNodeFromName(v11, v4->fields.cardFirstPeelName, 1, 0);
  v10->fields.firstTPeelr = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.firstTPeelr, (int32_t)v12, v13, v14);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v15->fields.firstTr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v16 = v4->fields.__4__this;
  if ( !v16 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v16->fields.firstTPeelr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v17 = v4->fields.__4__this;
  if ( !v17
    || (v18 = (DesignCardManager_o *)this,
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v17->fields.effect) == 0)
    || (v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)TransformHelper__getNodeFromName(
                                                                  v19,
                                                                  v4->fields.cardSecondName,
                                                                  1,
                                                                  0),
        !v18)
    || (DesignCardManager__SetupCardImage(v18, d, (UnityEngine_Transform_o *)this, 1, 0),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_16:
    sub_1C6BC60(this, d);
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
  if ( (byte_4CB2831 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C6BA08(&StringLiteral_4906/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4CB2831 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4906/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0);
  v10 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
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
    sub_1C6BC60(this, d);
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

  if ( (byte_4CB2832 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4CB2832 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C6BC60(Instance, v6);
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
  const MethodInfo *v10; // x3
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8
  struct SummonEffectComponent_o *v12; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  UnityEngine_Transform_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct SummonEffectComponent___c__DisplayClass45_0_o *v17; // x8
  struct SummonEffectComponent_o *v18; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v19; // x8
  struct SummonEffectComponent_o *v20; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v21; // x8
  struct SummonEffectComponent_o *v22; // x8
  DesignCardManager_o *v23; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v24; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v25; // x8

  v4 = this;
  if ( (byte_4CB2833 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4CB2833 = 1;
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.firstTr, (int32_t)NodeFromName, v9, v10);
  v11 = v4->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_25;
  v12 = v11->fields.__4__this;
  if ( !v12 )
    goto LABEL_25;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)v12->fields.effect;
  if ( !this )
    goto LABEL_25;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
  v13 = v4->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_25;
  v14 = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v13->fields.cardFirstPeelName, 1, 0);
  v12->fields.firstTPeelr = v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->fields.firstTPeelr, (int32_t)v14, v15, v16);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  v18 = v17->fields.__4__this;
  if ( !v18 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v18->fields.firstTr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v19 = v4->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_25;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v20->fields.firstTPeelr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v21 = v4->fields.CS___8__locals1;
  if ( !v21 )
    goto LABEL_25;
  v22 = v21->fields.__4__this;
  if ( !v22 )
    goto LABEL_25;
  v23 = (DesignCardManager_o *)this;
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)v22->fields.effect;
  if ( !this
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0),
        (v24 = v4->fields.CS___8__locals1) == 0)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)TransformHelper__getNodeFromName(
                                                                  (UnityEngine_Transform_o *)this,
                                                                  v24->fields.cardSecondName,
                                                                  1,
                                                                  0),
        !v23)
    || (DesignCardManager__SetupCardImage(v23, d, (UnityEngine_Transform_o *)this, v4->fields.classCardId, 0),
        (v25 = v4->fields.CS___8__locals1) == 0)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)v25->fields.__4__this) == 0 )
  {
LABEL_25:
    sub_1C6BC60(this, d);
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

  if ( (byte_4CB2834 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4CB2834 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C6BC60(Instance, v6);
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

  if ( (byte_4CB2835 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4CB2835 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C6BC60(Instance, v6);
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
  if ( (byte_4CB2836 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_15130/*"Unlit/Transparent Colored"*/);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_1C6BA08(&StringLiteral_4906/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4CB2836 = 1;
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
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v11 = v4->fields.CS___8__locals3;
  if ( !v11 )
    goto LABEL_22;
  v12 = v11->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_22;
  v13 = this;
  v14 = (System_String_o **)(v12->fields.cardType == 1 ? &StringLiteral_4906/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15130/*"Unlit/Transparent Colored"*/);
  v15 = UnityEngine_Shader__Find(*v14, 0);
  v16 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
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
    sub_1C6BC60(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
}