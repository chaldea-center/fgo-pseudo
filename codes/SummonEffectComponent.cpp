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

  if ( (byte_4C23889 & 1) == 0 )
  {
    sub_1C2D490(&SummonEffectComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_23821/*"summon_up_04"*/);
    sub_1C2D490(&StringLiteral_23819/*"summon_up_02"*/);
    sub_1C2D490(&StringLiteral_7062/*"GetAnimationName"*/);
    sub_1C2D490(&StringLiteral_23820/*"summon_up_03"*/);
    sub_1C2D490(&StringLiteral_23818/*"summon_up_01"*/);
    sub_1C2D490(&StringLiteral_11184/*"RarityAnimationName"*/);
    sub_1C2D490(&StringLiteral_15167/*"UpAnimationName"*/);
    sub_1C2D490(&StringLiteral_7655/*"InitializeAnimationName"*/);
    byte_4C23889 = 1;
  }
  SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION = (struct System_String_o *)StringLiteral_23818/*"summon_up_01"*/;
  sub_1C2D434((CGThumbnailListItem_o *)SummonEffectComponent_TypeInfo->static_fields, StringLiteral_23818/*"summon_up_01"*/, v1, v2);
  v3 = StringLiteral_23819/*"summon_up_02"*/;
  static_fields = SummonEffectComponent_TypeInfo->static_fields;
  static_fields->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_23819/*"summon_up_02"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->RANKUP_TO_SILVER_ANIMATION, v3, v5, v6);
  v7 = StringLiteral_23820/*"summon_up_03"*/;
  v8 = SummonEffectComponent_TypeInfo->static_fields;
  v8->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_23820/*"summon_up_03"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->RANKUP_TO_GOLD_ANIMATION, v7, v9, v10);
  v11 = StringLiteral_23821/*"summon_up_04"*/;
  v12 = SummonEffectComponent_TypeInfo->static_fields;
  v12->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_23821/*"summon_up_04"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->RANKUP_COMMANDCODE_ANIMATION, v11, v13, v14);
  v15 = StringLiteral_15167/*"UpAnimationName"*/;
  v16 = SummonEffectComponent_TypeInfo->static_fields;
  v16->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15167/*"UpAnimationName"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v16->FSM_VARIABLE_UP_ANIMATION_NAME, v15, v17, v18);
  v19 = StringLiteral_7655/*"InitializeAnimationName"*/;
  v20 = SummonEffectComponent_TypeInfo->static_fields;
  v20->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7655/*"InitializeAnimationName"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME, v19, v21, v22);
  v23 = StringLiteral_11184/*"RarityAnimationName"*/;
  v24 = SummonEffectComponent_TypeInfo->static_fields;
  v24->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11184/*"RarityAnimationName"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v24->FSM_VARIABLE_RARITY_ANIMATION_NAME, v23, v25, v26);
  v27 = StringLiteral_7062/*"GetAnimationName"*/;
  v28 = SummonEffectComponent_TypeInfo->static_fields;
  v28->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7062/*"GetAnimationName"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->FSM_VARIABLE_GET_ANIMATION_NAME, v27, v29, v30);
  v31 = SummonEffectComponent_TypeInfo->static_fields;
  v31->rarityToColor = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v31->rarityToColor, 0, v32, v33);
}


void SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  int v7; // w8
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C23888 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23888 = 1;
  }
  v3 = sub_1C2D538(int___TypeInfo, 2);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v7 = *(_DWORD *)(v3 + 24);
  if ( !v7 || (*(_DWORD *)(v3 + 32) = 512, v7 == 1) )
    sub_1C2D6F4(v3, v3, v5);
  *(_DWORD *)(v3 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cardTextureSize, v3, v5, v6);
  v8 = StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effAnimName, v8, v9, v10);
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

  if ( (byte_4C23878 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
    sub_1C2D490(&SummonEffectComponent_SummonInfo_TypeInfo);
    byte_4C23878 = 1;
  }
  SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  }
  v19 = sub_1C2D6DC(SummonEffectComponent_SummonInfo_TypeInfo);
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
    sub_1C2D6EC(v20, v21);
  }
  size = SummonInfos->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      SummonInfos,
      (Il2CppObject *)v19,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    SummonInfos->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v19;
    sub_1C2D434((CGThumbnailListItem_o *)(v27 + 4), v19, v22, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4C23881 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4C23881 = 1;
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
                                             (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, void *))this->klass[1].vtable._3_ToString.method)(
                                            this,
                                            v8,
                                            this->klass[2]._1.image),
        (cardTextureSize = v6->fields.cardTextureSize) == 0) )
  {
LABEL_10:
    sub_1C2D6EC(this, cardNode);
  }
  if ( LODWORD(cardTextureSize->max_length) <= 1 )
LABEL_11:
    sub_1C2D6F4(this, cardNode, *(_QWORD *)&col);
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

  if ( (byte_4C23882 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&StringLiteral_12009/*"SETUP_DONE"*/);
    byte_4C23882 = 1;
  }
  counterMax = this->fields._counterMax;
  v4 = this->fields._counter + 1;
  this->fields._counter = v4;
  if ( v4 >= counterMax )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C2D6EC(0, v6);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_12009/*"SETUP_DONE"*/, 0);
  }
}


void SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4C2387A & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2387A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1C2D6EC(Instance, v3);
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

  if ( (byte_4C2387B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SummonEffectComponent_OnCharaGraphLoadDone__);
    sub_1C2D490(&SummonEffectComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_8047/*"IsNoSkip"*/);
    sub_1C2D490(&StringLiteral_18283/*"countMax"*/);
    sub_1C2D490(&StringLiteral_13168/*"SummonEffectAnimation"*/);
    byte_4C2387B = 1;
  }
  memset(&v47, 0, sizeof(v47));
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_46;
  v5 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_18283/*"countMax"*/,
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
                              (System_String_o *)StringLiteral_8047/*"IsNoSkip"*/,
                              0);
  if ( !Component_object )
    goto LABEL_46;
  *((_BYTE *)Component_object + 56) = this->fields.isNoSkip;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_13168/*"SummonEffectAnimation"*/,
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
         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = (struct UnityEngine_Animation_o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effAnimation, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v10;
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.upAnimationNameList, (int32_t)v10, v12, v13);
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
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    upAnimationNameList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)RANKUP_TO_SILVER_ANIMATION;
    sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)RANKUP_TO_SILVER_ANIMATION, v14, v15);
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
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = v23 + 8 * v25;
    Component_object[6] = v25 + 1;
    *(_QWORD *)(v26 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C2D434((CGThumbnailListItem_o *)(v26 + 32), (int32_t)RANKUP_TO_SILVER_ANIMATION, v21, v22);
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
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = v29 + 8 * v31;
    Component_object[6] = v31 + 1;
    *(_QWORD *)(v32 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C2D434((CGThumbnailListItem_o *)(v32 + 32), (int32_t)RANKUP_TO_SILVER_ANIMATION, v27, v28);
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
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = v35 + 8 * v37;
    Component_object[6] = v37 + 1;
    *(_QWORD *)(v38 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C2D434((CGThumbnailListItem_o *)(v38 + 32), (int32_t)RANKUP_TO_SILVER_ANIMATION, v33, v34);
  }
  Component_object = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Component_object
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_object, 1, 0),
        (Component_object = (int *)this->fields.SummonInfos) == 0) )
  {
LABEL_46:
    sub_1C2D6EC(Component_object, RANKUP_TO_SILVER_ANIMATION);
  }
  this->fields.DownloadCounter = Component_object[6];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)Component_object,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v39 )
      break;
    if ( !v47.fields._current )
      sub_1C2D6EC(v39, v40);
    klass = (int32_t)v47.fields._current[1].klass;
    if ( HIDWORD(v47.fields._current[2].klass) == 3 )
    {
      v42 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
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
      v45 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C23877 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
    byte_4C23877 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.SummonInfos, (int32_t)v3, v4, v5);
}


void SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  int32_t v4; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C2387C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_7458/*"INIT_DONE"*/);
    byte_4C2387C = 1;
  }
  v4 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v4;
  if ( !v4 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0),
          (Instance = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0) )
    {
      sub_1C2D6EC(Instance, v6);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7458/*"INIT_DONE"*/, 0);
  }
}


void SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1

  if ( (byte_4C23887 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&StringLiteral_5706/*"EVENT_SKIP"*/);
    byte_4C23887 = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C2D6EC(0, v4);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5706/*"EVENT_SKIP"*/, 0);
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

  if ( (byte_4C2387D & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4C2387D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v7 = this->fields._releaseAssetPath;
    if ( !v7 )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C23883 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&SummonEffectComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_11170/*"Rank"*/);
    byte_4C23883 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object
    || (v5 = (PlayMakerFSM_o *)Component_object,
        (Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0)) == 0)
    || (Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                             (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                             (System_String_o *)StringLiteral_11170/*"Rank"*/,
                             0)) == 0 )
  {
LABEL_17:
    sub_1C2D6EC(Component_object, v4);
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
           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.effAnimName = (struct System_String_o *)Item;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effAnimName, (int32_t)Item, v9, v10);
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
  sub_1C2D434((CGThumbnailListItem_o *)((char *)Component_object + 56), (int32_t)effAnimName, v12, v13);
}


void SummonEffectComponent__SetUpInitializeAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *Component_object; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x19
  HutongGames_PlayMaker_FsmVariables_o *v6; // x20
  System_String_o *Value; // x0

  if ( (byte_4C23884 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&SummonEffectComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_7451/*"INITIALIZE_ANIMATION"*/);
    byte_4C23884 = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
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
    sub_1C2D6EC(Component_object, v4);
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

  if ( (byte_4C23879 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    sub_1C2D490(&SummonEffectComponent_TypeInfo);
    byte_4C23879 = 1;
  }
  v2 = SummonEffectComponent_TypeInfo;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v2 = SummonEffectComponent_TypeInfo;
  }
  if ( !v2->static_fields->rarityToColor )
  {
    v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
      v3,
      (const MethodInfo_34109C4 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v3 )
      sub_1C2D6EC(v4, v5);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      0,
      0,
      (const MethodInfo_3411388 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      1,
      0,
      (const MethodInfo_3411388 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      2,
      0,
      (const MethodInfo_3411388 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      3,
      1,
      (const MethodInfo_3411388 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      4,
      2,
      (const MethodInfo_3411388 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      5,
      2,
      (const MethodInfo_3411388 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      101,
      0,
      (const MethodInfo_3411388 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      102,
      0,
      (const MethodInfo_3411388 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v8 = SummonEffectComponent_TypeInfo;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v8 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v3;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->rarityToColor, (int32_t)v3, v6, v7);
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

  if ( (byte_4C23886 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&SummonEffectComponent_TypeInfo);
    byte_4C23886 = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
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
    sub_1C2D6EC(Component_object, v4);
  }
}


void SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effAnimation; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *ComponentsInChildren_object; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  __int64 v8; // x2
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v10; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v12; // x20

  if ( (byte_4C23885 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____78016544);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23885 = 1;
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
    sub_1C2D6EC(ComponentsInChildren_object, v4);
  }
LABEL_14:
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                             1,
                                                             (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____78016544);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  klass = ComponentsInChildren_object[1].klass;
  v10 = ComponentsInChildren_object;
  if ( (int)klass >= 1 )
  {
    for ( i = 0; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1C2D6F4(ComponentsInChildren_object, v4, v8);
      v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
      if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)v12,
                                                                   0);
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object, 0, 0);
      }
      LODWORD(klass) = v10[1].klass;
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

  if ( (byte_4C2387F & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SummonEffectComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_8046/*"IsNewCard"*/);
    sub_1C2D490(&StringLiteral_18282/*"countIndex"*/);
    sub_1C2D490(&StringLiteral_8059/*"IsRankUp"*/);
    sub_1C2D490(&StringLiteral_8064/*"IsSkipStop"*/);
    sub_1C2D490(&StringLiteral_8422/*"LimitCount"*/);
    sub_1C2D490(&StringLiteral_9572/*"NoticeRarity"*/);
    sub_1C2D490(&StringLiteral_4335/*"CardType"*/);
    sub_1C2D490(&StringLiteral_11182/*"Rarity"*/);
    sub_1C2D490(&StringLiteral_12729/*"ServantId"*/);
    byte_4C2387F = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_66;
  v5 = (PlayMakerFSM_o *)Component_object;
  Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_18282/*"countIndex"*/,
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
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v7 = *((_DWORD *)Component_object + 4);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v8 = *((_DWORD *)Component_object + 5);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v9 = *((_BYTE *)Component_object + 24);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v10 = *((unsigned __int8 *)Component_object + 25);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v11 = *((_DWORD *)Component_object + 7);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v12 = *((_DWORD *)Component_object + 8);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v13 = *((_DWORD *)Component_object + 9);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v6,
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  v14 = *((_BYTE *)Component_object + 40);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_12729/*"ServantId"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v7;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8422/*"LimitCount"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v8;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8059/*"IsRankUp"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v9;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8064/*"IsSkipStop"*/,
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
  sub_1C2D434((CGThumbnailListItem_o *)((char *)Component_object + 56), 0, v16, v17);
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
  sub_1C2D434((CGThumbnailListItem_o *)((char *)Component_object + 56), 0, v18, v19);
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
  sub_1C2D434((CGThumbnailListItem_o *)((char *)Component_object + 56), 0, v20, v21);
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8046/*"IsNewCard"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v10 != 0 || v12 == 0;
  Component_object = PlayMakerFSM__get_FsmVariables(v5, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_9572/*"NoticeRarity"*/,
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
                       (System_String_o *)StringLiteral_11182/*"Rarity"*/,
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
      sub_1C2D6EC(Component_object, v4);
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
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_String_o *v34; // x24
  float v35; // s8
  System_String_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_String_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_String_o *v45; // x0
  System_String_o **v46; // x19
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v50; // x24
  UnityEngine_Transform_o *v51; // x22
  int32_t Item; // w25
  _BOOL4 v53; // w29
  System_Collections_Generic_List_object__o *GachaBehaviors; // x0
  System_Collections_Generic_List_object__o *v55; // x22
  System_Collections_Generic_Dictionary_object__object__o *v56; // x26
  __int64 *v57; // x22
  GachaBehaviorMaster_c *v58; // x0
  int v59; // w29
  Il2CppObject *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  intptr_t v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  intptr_t v66; // x8
  int32_t v67; // w0
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
  GachaBehaviorMaster_c *v78; // x0
  int v79; // w8
  GachaBehaviorMaster_c *v80; // x0
  _BOOL4 v81; // w10
  HutongGames_PlayMaker_FsmVariables_o *v82; // x22
  HutongGames_PlayMaker_FsmString_o *v83; // x0
  GachaBehaviorMaster_c *v84; // x8
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  __int64 v87; // x8
  GachaBehaviorMaster_c *v88; // x0
  HutongGames_PlayMaker_FsmVariables_o *v89; // x22
  HutongGames_PlayMaker_FsmString_o *v90; // x0
  GachaBehaviorMaster_c *v91; // x8
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  GachaBehaviorMaster_c *v94; // x0
  HutongGames_PlayMaker_FsmVariables_o *v95; // x22
  HutongGames_PlayMaker_FsmString_o *v96; // x0
  GachaBehaviorMaster_c *v97; // x8
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  UnityEngine_Object_o *prevObject; // x22
  struct UnityEngine_GameObject_o **p_prevObject; // x26
  int v102; // w9
  int32_t v103; // w8
  UnityEngine_Object_o *v104; // x22
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v108; // x28
  bool v109; // w28
  UnityEngine_GameObject_o *v110; // x22
  Il2CppObject *v111; // x28
  System_Action_o *v112; // x25
  System_Action_o *v113; // x25
  UnityEngine_Component_o *v114; // x22
  UnityEngine_Transform_o *v115; // x28
  UnityEngine_GameObject_o *v116; // x0
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  System_String_o *v119; // x24
  System_String_o *v120; // x22
  UnityEngine_Transform_o *v121; // x0
  UnityEngine_Component_o *v122; // x26
  UnityEngine_Transform_o *v123; // x0
  UnityEngine_Component_o *v124; // x24
  int32_t v125; // w22
  int v126; // w8
  UnityEngine_Transform_o *v127; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v129; // x3
  UnityEngine_Transform_o *v130; // x0
  UnityEngine_Transform_o *v131; // x0
  const MethodInfo *v132; // x3
  UnityEngine_Transform_o *v133; // x0
  UnityEngine_Transform_o *v134; // x1
  const MethodInfo *v135; // x3
  SummonEffectComponent_o *v136; // x0
  int32_t v137; // w2
  System_String_o *v138; // x0
  System_String_o *v139; // x19
  System_String_o *v140; // x0
  System_String_o *v141; // x0
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  System_Collections_Generic_List_object__o *v144; // x8
  struct System_Object_array *items; // x9
  _QWORD *v146; // x10
  __int64 size; // x11
  System_String_o *v148; // x19
  Il2CppClass **v149; // x0
  UnityEngine_Transform_o *v150; // x0
  UnityEngine_Transform_o *v151; // x0
  UnityEngine_Transform_o *v152; // x0
  const MethodInfo *v153; // x3
  const MethodInfo *v154; // x1
  __int64 v155; // x24
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  Il2CppObject *v158; // x19
  int v159; // w8
  int32_t v160; // w19
  __int64 v161; // x21
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  Il2CppObject **v164; // x20
  int32_t LowerColorRarity; // w0
  int32_t v166; // w22
  int v167; // w8
  __int64 v168; // x20
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  Il2CppObject **v171; // x21
  int v172; // w8
  System_String_o *DesignCardPath; // x22
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  intptr_t v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  intptr_t v179; // x8
  AssetLoader_LoadEndDataHandler_o *v180; // x20
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  System_Collections_Generic_List_object__o *v183; // x8
  struct System_Object_array *v184; // x9
  _QWORD *v185; // x10
  __int64 v186; // x11
  System_String_o *v187; // x19
  Il2CppClass **v188; // x0
  AssetLoader_LoadEndDataHandler_o *v189; // x20
  Il2CppObject *v190; // x24
  AssetLoader_LoadEndDataHandler_o *v191; // x23
  _DWORD *monitor; // x8
  System_String_o **v193; // x8
  int32_t *v194; // x21
  System_String_o *v195; // x19
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  intptr_t v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  intptr_t v201; // x8
  AssetLoader_LoadEndDataHandler_o *v202; // x21
  System_String_o *v203; // x0
  AssetLoader_LoadEndDataHandler_o *v204; // x1
  System_String_o *v205; // x23
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  intptr_t v208; // x8
  _QWORD *v209; // x9
  __int64 v210; // x10
  intptr_t v211; // x8
  AssetLoader_LoadEndDataHandler_o *v212; // x24
  System_String_o *v213; // x22
  int32_t v214; // w2
  const MethodInfo *v215; // x3
  intptr_t v216; // x8
  _QWORD *v217; // x9
  __int64 v218; // x10
  intptr_t v219; // x8
  AssetLoader_LoadEndDataHandler_o *v220; // x23
  int32_t v221; // w2
  const MethodInfo *v222; // x3
  intptr_t v223; // x8
  _QWORD *v224; // x9
  __int64 v225; // x10
  intptr_t v226; // x8
  Il2CppObject *v227; // x21
  SummonEffectComponent___c__DisplayClass45_0_o *v228; // x0
  const MethodInfo *v229; // x1
  int v230; // [xsp+Ch] [xbp-D4h]
  int v231; // [xsp+10h] [xbp-D0h]
  int v232; // [xsp+14h] [xbp-CCh]
  int v233; // [xsp+18h] [xbp-C8h]
  _BOOL4 v234; // [xsp+1Ch] [xbp-C4h]
  int v235; // [xsp+34h] [xbp-ACh]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+38h] [xbp-A8h]
  int64_t v237; // [xsp+40h] [xbp-A0h]
  int32_t v238; // [xsp+50h] [xbp-90h]
  int32_t key; // [xsp+54h] [xbp-8Ch]
  int32_t v240; // [xsp+58h] [xbp-88h]
  int32_t svtId; // [xsp+5Ch] [xbp-84h]
  int v242; // [xsp+60h] [xbp-80h] BYREF
  int32_t v243; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v245; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v246; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v247; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v248; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v249; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23880 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GachaBehaviorMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
    sub_1C2D490(&GachaBehaviorMaster_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&SummonEffectComponent_TypeInfo);
    sub_1C2D490(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__);
    sub_1C2D490(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__);
    sub_1C2D490(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__);
    sub_1C2D490(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__);
    sub_1C2D490(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__);
    sub_1C2D490(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
    sub_1C2D490(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__);
    sub_1C2D490(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__);
    sub_1C2D490(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
    sub_1C2D490(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__);
    sub_1C2D490(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__);
    sub_1C2D490(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
    sub_1C2D490(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__);
    sub_1C2D490(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
    sub_1C2D490(&StringLiteral_4331/*"CardScale"*/);
    sub_1C2D490(&StringLiteral_4332/*"CardSecondName"*/);
    sub_1C2D490(&StringLiteral_4323/*"CardFirstName"*/);
    sub_1C2D490(&StringLiteral_8046/*"IsNewCard"*/);
    sub_1C2D490(&StringLiteral_4330/*"CardRotName"*/);
    sub_1C2D490(&StringLiteral_4516/*"CodeCardRarity02"*/);
    sub_1C2D490(&StringLiteral_2669/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/);
    sub_1C2D490(&StringLiteral_11170/*"Rank"*/);
    sub_1C2D490(&StringLiteral_18282/*"countIndex"*/);
    sub_1C2D490(&StringLiteral_13166/*"SummonEffect"*/);
    sub_1C2D490(&StringLiteral_22941/*"rarity"*/);
    sub_1C2D490(&StringLiteral_8059/*"IsRankUp"*/);
    sub_1C2D490(&StringLiteral_16106/*"_0"*/);
    sub_1C2D490(&StringLiteral_4515/*"CodeCardRarity"*/);
    sub_1C2D490(&StringLiteral_8064/*"IsSkipStop"*/);
    sub_1C2D490(&StringLiteral_8422/*"LimitCount"*/);
    sub_1C2D490(&StringLiteral_9572/*"NoticeRarity"*/);
    sub_1C2D490(&StringLiteral_2668/*"BACKSIDE_CLASS_IMAGE_ID"*/);
    sub_1C2D490(&StringLiteral_4335/*"CardType"*/);
    sub_1C2D490(&StringLiteral_4329/*"CardNodeName"*/);
    sub_1C2D490(&StringLiteral_4324/*"CardFirstPeelName"*/);
    sub_1C2D490(&StringLiteral_23812/*"summon_rarity_0"*/);
    sub_1C2D490(&StringLiteral_11182/*"Rarity"*/);
    sub_1C2D490(&StringLiteral_12729/*"ServantId"*/);
    byte_4C23880 = 1;
  }
  entity = 0;
  v243 = 0;
  v3 = sub_1C2D6DC(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_376;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  this->fields.isNoSkipAll = 0;
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_376;
  v8 = (PlayMakerFSM_o *)Component_object;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_18282/*"countIndex"*/,
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
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  svtId = *(_DWORD *)(Component_object + 16);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v240 = *(_DWORD *)(Component_object + 20);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v10 = *(unsigned __int8 *)(Component_object + 24);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v11 = *(unsigned __int8 *)(Component_object + 25);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v12 = *(_DWORD *)(Component_object + 28);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v13 = *(_DWORD *)(Component_object + 32);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(Component_object + 36);
  Component_object = (__int64)this->fields.SummonInfos;
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Component_object,
                                v9,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v14 = *(_BYTE *)(Component_object + 40);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v9,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v237 = *(_QWORD *)(Component_object + 48);
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v5);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._releaseAssetPath, (int32_t)v15, v16, v17);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_12729/*"ServantId"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = svtId;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8422/*"LimitCount"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v240;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8059/*"IsRankUp"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v10;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8064/*"IsSkipStop"*/,
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
  sub_1C2D434((CGThumbnailListItem_o *)(Component_object + 56), 0, v19, v20);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8046/*"IsNewCard"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v11 != 0 || v13 == 0;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_9572/*"NoticeRarity"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v12;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4335/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = *(_DWORD *)(v3 + 56);
  if ( v13 - 3 >= 3 )
    v21 = v13 ? 0 : 3;
  else
    v21 = dword_C42004[v13 - 3];
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_11182/*"Rarity"*/,
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
  v242 = v21;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v242, v24, v25, v26);
  Component_object = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_23812/*"summon_rarity_0"*/, v27, 0);
  if ( !FsmString )
    goto LABEL_376;
  FsmString->fields.value = (struct System_String_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&FsmString->fields.value, Component_object, v28, v29);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13166/*"SummonEffect"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, 0);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effect, (int32_t)Value, v32, v33);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4329/*"CardNodeName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v34 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4331/*"CardScale"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v35 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4323/*"CardFirstName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v36 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 24) = v36;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v36, v37, v38);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4324/*"CardFirstPeelName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v39 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 32) = v39;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v39, v40, v41);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4332/*"CardSecondName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v42 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 40) = v42;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 40), (int32_t)v42, v43, v44);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4330/*"CardRotName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v45 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 48) = v45;
  v46 = (System_String_o **)(v3 + 48);
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 48), (int32_t)v45, v47, v48);
  Component_object = (__int64)*p_effect;
  if ( !*p_effect )
    goto LABEL_376;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  Component_object = (__int64)TransformHelper__getNodeFromName(transform, v34, 1, 0);
  if ( !Component_object )
    goto LABEL_376;
  v50 = (UnityEngine_Component_o *)Component_object;
  Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_376;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v50, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  v51 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C20DA6 )
  {
    Component_object = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v51 )
    goto LABEL_376;
  UnityEngine_Transform__set_localScale(v51, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v5 = (System_String_c *)v13;
  Component_object = (__int64)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_object )
    goto LABEL_376;
  Item = System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)Component_object,
           v13,
           (const MethodInfo_34112EC *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Component_object,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_object )
    goto LABEL_376;
  v53 = v10 != 0 && Item != 0;
  GachaBehaviors = (System_Collections_Generic_List_object__o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                                  (GachaBehaviorMaster_o *)Component_object,
                                                                  this->fields.gachaId,
                                                                  svtId,
                                                                  0);
  v238 = Item;
  if ( !GachaBehaviors || (v55 = GachaBehaviors, GachaBehaviors->fields._size < 1) )
  {
    v231 = -1;
    v232 = -1;
    v230 = -1;
    v235 = -1;
    v233 = -1;
    goto LABEL_185;
  }
  v234 = v10 != 0 && Item != 0;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                GachaBehaviors,
                                0,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !*(_QWORD *)(Component_object + 24) )
  {
    v231 = -1;
    v232 = -1;
    v230 = -1;
    v235 = -1;
    v233 = -1;
    goto LABEL_184;
  }
  if ( v11 )
    this->fields.isNoSkipAll = 1;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                v55,
                                0,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v56 = *(System_Collections_Generic_Dictionary_object__object__o **)(Component_object + 24);
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  if ( !v56 )
    goto LABEL_376;
  v57 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v56,
         (Il2CppObject *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v58 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v58 = GachaBehaviorMaster_TypeInfo;
    }
    v60 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v56,
            (Il2CppObject *)v58->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v57 = (__int64 *)v60;
    if ( v60 )
    {
      v5 = string_TypeInfo;
      if ( (System_String_c *)v60->klass != string_TypeInfo )
        goto LABEL_379;
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v57,
            (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_object = (__int64)this->fields.upAnimationNameList;
      if ( !Component_object )
        goto LABEL_376;
      v63 = *(_QWORD *)(Component_object + 16);
      v64 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v63 )
        goto LABEL_376;
      v65 = *(int *)(Component_object + 24);
      if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v57,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = v63 + 8 * v65;
        *(_DWORD *)(Component_object + 24) = v65 + 1;
        *(_QWORD *)(v66 + 32) = v57;
        sub_1C2D434((CGThumbnailListItem_o *)(v66 + 32), (int32_t)v57, v61, v62);
      }
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    v67 = System_Collections_Generic_List_object___IndexOf(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v57,
            (const MethodInfo_378A824 *)Method_System_Collections_Generic_List_string__IndexOf__);
    v57 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
    v59 = v67;
  }
  else
  {
    v59 = -1;
  }
  v68 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v68 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v56,
         (Il2CppObject *)v68->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v69 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v69 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v56,
                                  (Il2CppObject *)v69->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                  (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v235 = v70;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v71 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v56,
         (Il2CppObject *)v71->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v72 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v72 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v56,
                                  (Il2CppObject *)v72->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                  (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v230 = v73;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v74 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v56,
         (Il2CppObject *)v74->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v75 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v75 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v56,
                                  (Il2CppObject *)v75->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                  (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v76 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v76 = -1;
  }
  v77 = GachaBehaviorMaster_TypeInfo;
  v232 = v76;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v77 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v56,
          (Il2CppObject *)v77->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v79 = -1;
    goto LABEL_142;
  }
  v78 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v78 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v56,
                                (Il2CppObject *)v78->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_377:
    sub_1C2D9AC(Component_object);
    goto LABEL_378;
  }
  v79 = *(_DWORD *)j_il2cpp_object_unbox_0();
LABEL_142:
  v80 = GachaBehaviorMaster_TypeInfo;
  v81 = v10 != 0 && Item != 0;
  v231 = v79;
  if ( v59 != -1 )
    v81 = v235 != -1;
  v234 = v81;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v80 = GachaBehaviorMaster_TypeInfo;
  }
  v233 = v59;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v56,
         (Il2CppObject *)v80->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_9572/*"NoticeRarity"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    *(_DWORD *)(Component_object + 56) = 3;
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
    v82 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    if ( !v82 )
      goto LABEL_376;
    v83 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
            v82,
            SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
            0);
    v84 = GachaBehaviorMaster_TypeInfo;
    v57 = (__int64 *)v83;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v84 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v56,
                                  (Il2CppObject *)v84->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                  (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v57 )
      goto LABEL_376;
    v87 = Component_object;
    if ( Component_object && *(System_String_c **)Component_object != string_TypeInfo )
      goto LABEL_378;
    v57[7] = Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)(v57 + 7), Component_object, v85, v86);
  }
  v88 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v88 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v56,
          (Il2CppObject *)v88->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_172:
    v94 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v94 = GachaBehaviorMaster_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v56,
           (Il2CppObject *)v94->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
           (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
      v95 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
      if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      if ( !v95 )
        goto LABEL_376;
      v96 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
              v95,
              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
              0);
      v97 = GachaBehaviorMaster_TypeInfo;
      v57 = (__int64 *)v96;
      if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
        v97 = GachaBehaviorMaster_TypeInfo;
      }
      v53 = v234;
      Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    v56,
                                    (Il2CppObject *)v97->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                    (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v57 )
        goto LABEL_376;
      v87 = Component_object;
      if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
      {
        v57[7] = Component_object;
        sub_1C2D434((CGThumbnailListItem_o *)(v57 + 7), Component_object, v98, v99);
        goto LABEL_185;
      }
      goto LABEL_378;
    }
LABEL_184:
    v53 = v234;
LABEL_185:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v53 )
      v102 = 4;
    else
      v102 = 3;
    if ( this->fields.EditMode )
      v103 = 0;
    else
      v103 = v102;
    this->fields._counter = 0;
    this->fields._counterMax = v103;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(prevObject, 0, 0) )
    {
      v104 = (UnityEngine_Object_o *)*p_prevObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v104, 0);
      *p_prevObject = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.prevObject, 0, v105, v106);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v50, 0);
      v108 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v108,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0);
      Component_object = (__int64)CharaGraphManager__CreateCommandTexturePrefab(gameObject, svtId, 0, v108, 0);
    }
    else
    {
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0;
      if ( !Component_object )
        goto LABEL_376;
      v109 = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               &entity,
               v237,
               (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v110 = UnityEngine_Component__get_gameObject(v50, 0);
      if ( v109 )
      {
        v111 = entity;
        v112 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v112,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab_40438132(
                                      v110,
                                      (UserServantEntity_o *)v111,
                                      0,
                                      v112,
                                      0);
      }
      else
      {
        v113 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v113,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab(v110, svtId, v240, 0, 1, 0, v113, 0, 0);
      }
    }
    v114 = (UnityEngine_Component_o *)Component_object;
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    v115 = (UnityEngine_Transform_o *)Component_object;
    if ( !byte_4C20DA1 )
    {
      Component_object = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    if ( !v115 )
      goto LABEL_376;
    UnityEngine_Transform__set_localPosition(v115, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    Component_object = (__int64)UnityEngine_Component__get_transform(v114, 0);
    if ( !Component_object )
      goto LABEL_376;
    v245.fields.x = v35;
    v245.fields.y = v35;
    v245.fields.z = v35;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v245, 0);
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v50,
                                  (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    v116 = UnityEngine_Component__get_gameObject(v114, 0);
    *p_prevObject = v116;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.prevObject, (int32_t)v116, v117, v118);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4515/*"CodeCardRarity"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    v119 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4516/*"CodeCardRarity02"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_object,
                                  0);
    if ( !*p_effect )
      goto LABEL_376;
    v120 = (System_String_o *)Component_object;
    v121 = UnityEngine_GameObject__get_transform(*p_effect, 0);
    Component_object = (__int64)TransformHelper__getNodeFromName(v121, v119, 1, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !*p_effect )
      goto LABEL_376;
    v122 = (UnityEngine_Component_o *)Component_object;
    v123 = UnityEngine_GameObject__get_transform(*p_effect, 0);
    Component_object = (__int64)TransformHelper__getNodeFromName(v123, v120, 1, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !v122 )
      goto LABEL_376;
    v124 = (UnityEngine_Component_o *)Component_object;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v122, 0);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
    if ( !v124 )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v124, 0);
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
                                    (System_String_o *)StringLiteral_11170/*"Rank"*/,
                                    0);
      if ( v53 )
      {
        v125 = v238;
        if ( !Component_object )
          goto LABEL_376;
        v126 = v238 == 2 ? 2 : 1;
        *(_DWORD *)(Component_object + 56) = v126;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v127 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        NodeFromName = TransformHelper__getNodeFromName(v127, *(System_String_o **)(v3 + 24), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, v238 - 1, v129);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v130 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v131 = TransformHelper__getNodeFromName(v130, *(System_String_o **)(v3 + 32), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, v131, v238 - 1, v132);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v133 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v134 = TransformHelper__getNodeFromName(v133, *v46, 1, 0);
        v136 = this;
        v137 = v238 - 1;
      }
      else
      {
        v125 = v238;
        if ( !Component_object )
          goto LABEL_376;
        *(_DWORD *)(Component_object + 56) = 0;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v150 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v134 = TransformHelper__getNodeFromName(v150, *v46, 1, 0);
        v136 = this;
        v137 = v238;
      }
      SummonEffectComponent__ChangeClassCardColor(v136, v134, v137, v135);
      Component_object = (__int64)this->fields.effect;
      if ( Component_object )
      {
        v151 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v152 = TransformHelper__getNodeFromName(v151, *(System_String_o **)(v3 + 40), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, v152, v125, v153);
        SummonEffectComponent__CompleteCallback(this, v154);
        return;
      }
LABEL_376:
      sub_1C2D6EC(Component_object, v5);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11170/*"Rank"*/,
                                    0);
      if ( !Component_object )
        goto LABEL_376;
      *(_DWORD *)(Component_object + 56) = 3;
      v243 = key;
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v122, 0);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
      v138 = System_Int32__ToString((int32_t)&v243, 0);
      v139 = System_String__Concat_63496112(
               (System_String_o *)StringLiteral_22941/*"rarity"*/,
               v138,
               (System_String_o *)StringLiteral_16106/*"_0"*/,
               0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v122, v139, 0);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v122->klass[2]._1.parent)(
        v122,
        v122->klass[2]._1.generic_class);
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v124, 0);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
      v140 = System_Int32__ToString((int32_t)&v243, 0);
      v141 = System_String__Concat_63496112(
               (System_String_o *)StringLiteral_22941/*"rarity"*/,
               v140,
               (System_String_o *)StringLiteral_16106/*"_0"*/,
               0);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v124, v141, 0);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v124->klass[2]._1.parent)(
        v124,
        v124->klass[2]._1.generic_class);
      Component_object = (__int64)UnityEngine_Component__get_transform(v122, 0);
      if ( !Component_object )
        goto LABEL_376;
      v246.fields.x = 0.0;
      v246.fields.z = 0.0;
      v246.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v246, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v122, 0);
      if ( !Component_object )
        goto LABEL_376;
      v247.fields.x = v35;
      v247.fields.y = v35;
      v247.fields.z = v35;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v247, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v124, 0);
      if ( !Component_object )
        goto LABEL_376;
      v248.fields.x = 0.0;
      v248.fields.z = 0.0;
      v248.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v248, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v124, 0);
      if ( !Component_object )
        goto LABEL_376;
      v249.fields.x = v35;
      v249.fields.y = v35;
      v249.fields.z = v35;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v249, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    1,
                                    key,
                                    0);
      v144 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      items = v144->fields._items;
      v146 = Method_System_Collections_Generic_List_string__Add__;
      ++v144->fields._version;
      if ( !items )
        goto LABEL_376;
      size = v144->fields._size;
      v148 = (System_String_o *)Component_object;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v144,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
      }
      else
      {
        v149 = &items->obj.klass + size;
        v144->fields._size = size + 1;
        v149[4] = (Il2CppClass *)v148;
        sub_1C2D434((CGThumbnailListItem_o *)(v149 + 4), (int32_t)v148, v142, v143);
      }
      v180 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v180,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v148, v180, 1, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    101,
                                    key,
                                    0);
      v183 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v184 = v183->fields._items;
      v185 = Method_System_Collections_Generic_List_string__Add__;
      ++v183->fields._version;
      if ( !v184 )
        goto LABEL_376;
      v186 = v183->fields._size;
      v187 = (System_String_o *)Component_object;
      if ( (unsigned int)v186 >= LODWORD(v184->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v183,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
      }
      else
      {
        v188 = &v184->obj.klass + v186;
        v183->fields._size = v186 + 1;
        v188[4] = (Il2CppClass *)v187;
        sub_1C2D434((CGThumbnailListItem_o *)(v188 + 4), (int32_t)v187, v181, v182);
      }
      v189 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v189,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
        0);
    }
    else
    {
      v155 = sub_1C2D6DC(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v155, 0);
      if ( !v155 )
        goto LABEL_376;
      *(_QWORD *)(v155 + 24) = v3;
      sub_1C2D434((CGThumbnailListItem_o *)(v155 + 24), v3, v156, v157);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Component_object )
        goto LABEL_376;
      v158 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               svtId,
               (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Component_object )
        goto LABEL_376;
      ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Component_object, svtId, v240, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !v158 )
        goto LABEL_376;
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                                    (int32_t)v158[5].klass,
                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Component_object )
        goto LABEL_376;
      v159 = *(_DWORD *)(Component_object + 40);
      if ( v232 != -1 )
        v159 = v232;
      *(_DWORD *)(v155 + 16) = v159;
      if ( v231 == -1 )
        v160 = key;
      else
        v160 = v231;
      if ( !v53 )
      {
        v168 = sub_1C2D6DC(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v168, 0);
        if ( !v168 )
          goto LABEL_376;
        *(_QWORD *)(v168 + 24) = v155;
        v171 = (Il2CppObject **)(v168 + 24);
        sub_1C2D434((CGThumbnailListItem_o *)(v168 + 24), v155, v169, v170);
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
        if ( !Component_object )
          goto LABEL_376;
        Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11170/*"Rank"*/,
                                      0);
        if ( !Component_object )
          goto LABEL_376;
        v172 = v233;
        if ( v233 == -1 )
          v172 = 0;
        *(_DWORD *)(Component_object + 56) = v172;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v171 || !Component_object )
          goto LABEL_376;
        DesignCardPath = DesignCardManager__GetDesignCardPath(
                           (DesignCardManager_o *)Component_object,
                           (int32_t)(*v171)[1].klass,
                           v160,
                           0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__isExistAssetStorage(DesignCardPath, 0);
        if ( (Component_object & 1) == 0 )
        {
          if ( !*v171 )
            goto LABEL_376;
          LODWORD((*v171)[1].klass) = 1;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v171 || !Component_object )
            goto LABEL_376;
          v160 = 3;
          DesignCardPath = DesignCardManager__GetDesignCardPath(
                             (DesignCardManager_o *)Component_object,
                             (int32_t)(*v171)[1].klass,
                             3,
                             0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v176 = *(_QWORD *)(Component_object + 16);
        v177 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v176 )
          goto LABEL_376;
        v178 = *(int *)(Component_object + 24);
        if ( (unsigned int)v178 >= *(_DWORD *)(v176 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)DesignCardPath,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
        }
        else
        {
          v179 = v176 + 8 * v178;
          *(_DWORD *)(Component_object + 24) = v178 + 1;
          *(_QWORD *)(v179 + 32) = DesignCardPath;
          sub_1C2D434((CGThumbnailListItem_o *)(v179 + 32), (int32_t)DesignCardPath, v174, v175);
        }
        v190 = *v171;
        v191 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v191,
          v190,
          Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__loadAssetStorage(DesignCardPath, v191, 1, 0);
        if ( !*v171 )
          goto LABEL_376;
        monitor = (*v171)[1].monitor;
        if ( !monitor )
          goto LABEL_376;
        v193 = (System_String_o **)(monitor[14] == 1 ? &StringLiteral_2669/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/ : &StringLiteral_2668/*"BACKSIDE_CLASS_IMAGE_ID"*/);
        *(_DWORD *)(v168 + 16) = ConstantMaster__getValue(*v193, 0);
        v194 = (int32_t *)(v168 + 16);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v195 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v194, v160, 0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( !AssetManager__isExistAssetStorage(v195, 0) )
        {
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_376;
          v195 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v194, 3, 0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v198 = *(_QWORD *)(Component_object + 16);
        v199 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v198 )
          goto LABEL_376;
        v200 = *(int *)(Component_object + 24);
        if ( (unsigned int)v200 >= *(_DWORD *)(v198 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v195,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
        }
        else
        {
          v201 = v198 + 8 * v200;
          *(_DWORD *)(Component_object + 24) = v200 + 1;
          *(_QWORD *)(v201 + 32) = v195;
          sub_1C2D434((CGThumbnailListItem_o *)(v201 + 32), (int32_t)v195, v196, v197);
        }
        v202 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v202,
          (Il2CppObject *)v168,
          Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v203 = v195;
        v204 = v202;
        goto LABEL_375;
      }
      v161 = sub_1C2D6DC(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v161, 0);
      if ( !v161 )
        goto LABEL_376;
      *(_QWORD *)(v161 + 24) = v155;
      v164 = (Il2CppObject **)(v161 + 24);
      sub_1C2D434((CGThumbnailListItem_o *)(v161 + 24), v155, v162, v163);
      if ( !*(_QWORD *)(v161 + 24) )
        goto LABEL_376;
      *(_DWORD *)(v161 + 16) = *(_DWORD *)(*(_QWORD *)(v161 + 24) + 16LL);
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      LowerColorRarity = Rarity__getLowerColorRarity(v160, 0);
      if ( v235 != -1 )
        *(_DWORD *)(v161 + 16) = v235;
      v166 = v230 == -1 ? LowerColorRarity : v230;
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11170/*"Rank"*/,
                                    0);
      if ( v233 == -1 )
      {
        if ( !Component_object )
          goto LABEL_376;
        v167 = v238 == 2 ? 2 : 1;
      }
      else
      {
        v167 = v233;
        if ( !Component_object )
          goto LABEL_376;
      }
      *(_DWORD *)(Component_object + 56) = v167;
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v205 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v161 + 16),
               v166,
               0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__isExistAssetStorage(v205, 0) )
      {
        *(_DWORD *)(v161 + 16) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v166 = 3;
        v205 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v161 + 16),
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v208 = *(_QWORD *)(Component_object + 16);
      v209 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v208 )
        goto LABEL_376;
      v210 = *(int *)(Component_object + 24);
      if ( (unsigned int)v210 >= *(_DWORD *)(v208 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v205,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
      }
      else
      {
        v211 = v208 + 8 * v210;
        *(_DWORD *)(Component_object + 24) = v210 + 1;
        *(_QWORD *)(v211 + 32) = v205;
        sub_1C2D434((CGThumbnailListItem_o *)(v211 + 32), (int32_t)v205, v206, v207);
      }
      v212 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v212,
        (Il2CppObject *)v161,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v205, v212, 1, 0);
      *(_DWORD *)(v161 + 20) = ConstantMaster__getValue((System_String_o *)StringLiteral_2668/*"BACKSIDE_CLASS_IMAGE_ID"*/, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v213 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v161 + 20),
               v166,
               0);
      if ( !AssetManager__isExistAssetStorage(v213, 0) )
      {
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v213 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v161 + 20),
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v216 = *(_QWORD *)(Component_object + 16);
      v217 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v216 )
        goto LABEL_376;
      v218 = *(int *)(Component_object + 24);
      if ( (unsigned int)v218 >= *(_DWORD *)(v216 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v213,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v217[4] + 192LL) + 112LL));
      }
      else
      {
        v219 = v216 + 8 * v218;
        *(_DWORD *)(Component_object + 24) = v218 + 1;
        *(_QWORD *)(v219 + 32) = v213;
        sub_1C2D434((CGThumbnailListItem_o *)(v219 + 32), (int32_t)v213, v214, v215);
      }
      v220 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v220,
        (Il2CppObject *)v161,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v213, v220, 1, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !*v164 || !Component_object )
        goto LABEL_376;
      v187 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               (int32_t)(*v164)[1].klass,
               v160,
               0);
      Component_object = AssetManager__isExistAssetStorage(v187, 0);
      if ( (Component_object & 1) == 0 )
      {
        if ( !*v164 )
          goto LABEL_376;
        LODWORD((*v164)[1].klass) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v164 || !Component_object )
          goto LABEL_376;
        v187 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 (int32_t)(*v164)[1].klass,
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v223 = *(_QWORD *)(Component_object + 16);
      v224 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v223 )
        goto LABEL_376;
      v225 = *(int *)(Component_object + 24);
      if ( (unsigned int)v225 >= *(_DWORD *)(v223 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v187,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v224[4] + 192LL) + 112LL));
      }
      else
      {
        v226 = v223 + 8 * v225;
        *(_DWORD *)(Component_object + 24) = v225 + 1;
        *(_QWORD *)(v226 + 32) = v187;
        sub_1C2D434((CGThumbnailListItem_o *)(v226 + 32), (int32_t)v187, v221, v222);
      }
      v227 = *v164;
      v189 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v189,
        v227,
        Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    v203 = v187;
    v204 = v189;
LABEL_375:
    AssetManager__loadAssetStorage(v203, v204, 1, 0);
    return;
  }
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4335/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = 4;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v8, 0);
  v89 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v89 )
    goto LABEL_376;
  v90 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
          v89,
          SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
          0);
  v91 = GachaBehaviorMaster_TypeInfo;
  v57 = (__int64 *)v90;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v91 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v56,
                                (Il2CppObject *)v91->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v57 )
    goto LABEL_376;
  v87 = Component_object;
  if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
  {
    v57[7] = Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)(v57 + 7), Component_object, v92, v93);
    goto LABEL_172;
  }
LABEL_378:
  sub_1C2D9AC(v87);
LABEL_379:
  sub_1C2D9AC(v57);
  SummonEffectComponent___c__DisplayClass45_0___ctor(v228, v229);
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

  if ( (byte_4C2388A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_5433/*"END_FADE"*/);
    byte_4C2388A = 1;
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
    UnityEngine_Object__Destroy_71163704(v5, 0);
    *p_effect = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effect, 0, v6, v7);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    sub_1C2D6EC(0, v9);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5433/*"END_FADE"*/, 0);
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

  if ( (byte_4C2387E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SummonEffectComponent__endAnimation_b__43_0__);
    byte_4C2387E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0);
  if ( !v5 )
    sub_1C2D6EC(v8, v9);
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
    sub_1C2D6EC(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
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
  if ( (byte_4C2388B & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C2388B = 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.firstTr, (int32_t)NodeFromName, v8, v9);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)v10->fields.effect;
  if ( !this )
    goto LABEL_16;
  v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v12 = TransformHelper__getNodeFromName(v11, v4->fields.cardFirstPeelName, 1, 0);
  v10->fields.firstTPeelr = v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.firstTPeelr, (int32_t)v12, v13, v14);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v15->fields.firstTr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v16 = v4->fields.__4__this;
  if ( !v16 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v16->fields.firstTPeelr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C2D6EC(this, d);
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
  if ( (byte_4C2388C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C2D490(&StringLiteral_4908/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4C2388C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4908/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0);
  v10 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
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
    sub_1C2D6EC(this, d);
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

  if ( (byte_4C2388D & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C2388D = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C2D6EC(Instance, v6);
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
  if ( (byte_4C2388E & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C2388E = 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.firstTr, (int32_t)NodeFromName, v9, v10);
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
  sub_1C2D434((CGThumbnailListItem_o *)&v12->fields.firstTPeelr, (int32_t)v14, v15, v16);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  v18 = v17->fields.__4__this;
  if ( !v18 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v18->fields.firstTr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v19 = v4->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_25;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v20->fields.firstTPeelr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C2D6EC(this, d);
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

  if ( (byte_4C2388F & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C2388F = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C2D6EC(Instance, v6);
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

  if ( (byte_4C23890 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C23890 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C2D6EC(Instance, v6);
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
  if ( (byte_4C23891 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C2D490(&StringLiteral_15128/*"Unlit/Transparent Colored"*/);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_1C2D490(&StringLiteral_4908/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4C23891 = 1;
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
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v11 = v4->fields.CS___8__locals3;
  if ( !v11 )
    goto LABEL_22;
  v12 = v11->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_22;
  v13 = this;
  v14 = (System_String_o **)(v12->fields.cardType == 1 ? &StringLiteral_4908/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15128/*"Unlit/Transparent Colored"*/);
  v15 = UnityEngine_Shader__Find(*v14, 0);
  v16 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
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
    sub_1C2D6EC(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, (const MethodInfo *)d);
}