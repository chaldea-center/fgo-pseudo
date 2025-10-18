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

  if ( (byte_4C3F544 & 1) == 0 )
  {
    sub_1C37058(&SummonEffectComponent_TypeInfo);
    sub_1C37058(&StringLiteral_23843/*"summon_up_04"*/);
    sub_1C37058(&StringLiteral_23841/*"summon_up_02"*/);
    sub_1C37058(&StringLiteral_7068/*"GetAnimationName"*/);
    sub_1C37058(&StringLiteral_23842/*"summon_up_03"*/);
    sub_1C37058(&StringLiteral_23840/*"summon_up_01"*/);
    sub_1C37058(&StringLiteral_11191/*"RarityAnimationName"*/);
    sub_1C37058(&StringLiteral_15170/*"UpAnimationName"*/);
    sub_1C37058(&StringLiteral_7662/*"InitializeAnimationName"*/);
    byte_4C3F544 = 1;
  }
  SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION = (struct System_String_o *)StringLiteral_23840/*"summon_up_01"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)SummonEffectComponent_TypeInfo->static_fields, StringLiteral_23840/*"summon_up_01"*/, v1, v2);
  v3 = StringLiteral_23841/*"summon_up_02"*/;
  static_fields = SummonEffectComponent_TypeInfo->static_fields;
  static_fields->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_23841/*"summon_up_02"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->RANKUP_TO_SILVER_ANIMATION, v3, v5, v6);
  v7 = StringLiteral_23842/*"summon_up_03"*/;
  v8 = SummonEffectComponent_TypeInfo->static_fields;
  v8->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_23842/*"summon_up_03"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->RANKUP_TO_GOLD_ANIMATION, v7, v9, v10);
  v11 = StringLiteral_23843/*"summon_up_04"*/;
  v12 = SummonEffectComponent_TypeInfo->static_fields;
  v12->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_23843/*"summon_up_04"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->RANKUP_COMMANDCODE_ANIMATION, v11, v13, v14);
  v15 = StringLiteral_15170/*"UpAnimationName"*/;
  v16 = SummonEffectComponent_TypeInfo->static_fields;
  v16->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15170/*"UpAnimationName"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->FSM_VARIABLE_UP_ANIMATION_NAME, v15, v17, v18);
  v19 = StringLiteral_7662/*"InitializeAnimationName"*/;
  v20 = SummonEffectComponent_TypeInfo->static_fields;
  v20->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7662/*"InitializeAnimationName"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v20->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME, v19, v21, v22);
  v23 = StringLiteral_11191/*"RarityAnimationName"*/;
  v24 = SummonEffectComponent_TypeInfo->static_fields;
  v24->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11191/*"RarityAnimationName"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->FSM_VARIABLE_RARITY_ANIMATION_NAME, v23, v25, v26);
  v27 = StringLiteral_7068/*"GetAnimationName"*/;
  v28 = SummonEffectComponent_TypeInfo->static_fields;
  v28->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7068/*"GetAnimationName"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v28->FSM_VARIABLE_GET_ANIMATION_NAME, v27, v29, v30);
  v31 = SummonEffectComponent_TypeInfo->static_fields;
  v31->rarityToColor = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v31->rarityToColor, 0, v32, v33);
}


void SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int v6; // w8
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3F543 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F543 = 1;
  }
  v3 = sub_1C37100(int___TypeInfo, 2);
  if ( !v3 )
    sub_1C372B4(0);
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v6 || (*(_DWORD *)(v3 + 32) = 512, v6 == 1) )
    sub_1C372BC(v3);
  *(_DWORD *)(v3 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cardTextureSize, v3, v4, v5);
  v7 = StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effAnimName, v7, v8, v9);
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C3F533 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__);
    sub_1C37058(&SummonEffectComponent_SummonInfo_TypeInfo);
    byte_4C3F533 = 1;
  }
  SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  }
  v19 = sub_1C372A4(SummonEffectComponent_SummonInfo_TypeInfo);
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
        v24 = Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__,
        ++SummonInfos->fields._version,
        !items) )
  {
    sub_1C372B4(v20);
  }
  size = SummonInfos->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      SummonInfos,
      (Il2CppObject *)v19,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    SummonInfos->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v19;
    sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 4), v19, v21, v22);
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
  if ( (byte_4C3F53C & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4C3F53C = 1;
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
                                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, void *))this->klass[1].vtable._3_ToString.method)(
                                            this,
                                            v8,
                                            this->klass[2]._1.image),
        (cardTextureSize = v6->fields.cardTextureSize) == 0) )
  {
LABEL_10:
    sub_1C372B4(this);
  }
  if ( LODWORD(cardTextureSize->max_length) <= 1 )
LABEL_11:
    sub_1C372BC(this);
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

  if ( (byte_4C3F53D & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&StringLiteral_12016/*"SETUP_DONE"*/);
    byte_4C3F53D = 1;
  }
  counterMax = this->fields._counterMax;
  v4 = this->fields._counter + 1;
  this->fields._counter = v4;
  if ( v4 >= counterMax )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C372B4(0);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_12016/*"SETUP_DONE"*/, 0);
  }
}


void SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v3; // x19

  if ( (byte_4C3F535 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F535 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v3 )
    sub_1C372B4(Instance);
  CommonUI__maskFadein(v3, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


int32_t SummonEffectComponent__GetGachaId(SummonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.gachaId;
}


void SummonEffectComponent__InitSummonEffect(SummonEffectComponent_o *this, const MethodInfo *method)
{
  int *Component_object; // x0
  PlayMakerFSM_o *v4; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x8
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x21
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *upAnimationNameList; // x21
  struct System_Object_array *items; // x8
  Il2CppObject *v17; // x1
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  Il2CppObject *RANKUP_TO_SILVER_ANIMATION; // x1
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  Il2CppObject *RANKUP_TO_GOLD_ANIMATION; // x1
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x8
  Il2CppObject *RANKUP_COMMANDCODE_ANIMATION; // x1
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  _BOOL8 v42; // x0
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v44; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  AssetLoader_LoadEndDataHandler_o *v47; // x22
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3F536 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonEffectComponent_OnCharaGraphLoadDone__);
    sub_1C37058(&SummonEffectComponent_TypeInfo);
    sub_1C37058(&StringLiteral_8054/*"IsNoSkip"*/);
    sub_1C37058(&StringLiteral_18290/*"countMax"*/);
    sub_1C37058(&StringLiteral_13172/*"SummonEffectAnimation"*/);
    byte_4C3F536 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_46;
  v4 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_18290/*"countMax"*/,
                              0);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_46;
  if ( !Component_object )
    goto LABEL_46;
  Component_object[14] = SummonInfos->fields._size;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_8054/*"IsNoSkip"*/,
                              0);
  if ( !Component_object )
    goto LABEL_46;
  *((_BYTE *)Component_object + 56) = this->fields.isNoSkip;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_13172/*"SummonEffectAnimation"*/,
                              0);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                              (HutongGames_PlayMaker_FsmGameObject_o *)Component_object,
                              0);
  if ( !Component_object )
    goto LABEL_46;
  v6 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)Component_object,
         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = (struct UnityEngine_Animation_o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effAnimation, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v9;
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.upAnimationNameList, (int32_t)v9, v11, v12);
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
  v17 = (Il2CppObject *)**((_QWORD **)Component_object + 23);
  v18 = Method_System_Collections_Generic_List_string__Add__;
  ++upAnimationNameList->fields._version;
  if ( !items )
    goto LABEL_46;
  size = upAnimationNameList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      upAnimationNameList,
      v17,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    upAnimationNameList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v17;
    sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v17, v13, v14);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v23 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION;
  v25 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v23 )
    goto LABEL_46;
  v26 = Component_object[6];
  if ( (unsigned int)v26 >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = v23 + 8 * v26;
    Component_object[6] = v26 + 1;
    *(_QWORD *)(v27 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 32), (int32_t)RANKUP_TO_SILVER_ANIMATION, v21, v22);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v30 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_GOLD_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION;
  v32 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v30 )
    goto LABEL_46;
  v33 = Component_object[6];
  if ( (unsigned int)v33 >= *(_DWORD *)(v30 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_GOLD_ANIMATION,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = v30 + 8 * v33;
    Component_object[6] = v33 + 1;
    *(_QWORD *)(v34 + 32) = RANKUP_TO_GOLD_ANIMATION;
    sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 32), (int32_t)RANKUP_TO_GOLD_ANIMATION, v28, v29);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v37 = *((_QWORD *)Component_object + 2);
  RANKUP_COMMANDCODE_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION;
  v39 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v37 )
    goto LABEL_46;
  v40 = Component_object[6];
  if ( (unsigned int)v40 >= *(_DWORD *)(v37 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_COMMANDCODE_ANIMATION,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = v37 + 8 * v40;
    Component_object[6] = v40 + 1;
    *(_QWORD *)(v41 + 32) = RANKUP_COMMANDCODE_ANIMATION;
    sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 32), (int32_t)RANKUP_COMMANDCODE_ANIMATION, v35, v36);
  }
  Component_object = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Component_object
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_object, 1, 0),
        (Component_object = (int *)this->fields.SummonInfos) == 0) )
  {
LABEL_46:
    sub_1C372B4(Component_object);
  }
  this->fields.DownloadCounter = Component_object[6];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    (System_Collections_Generic_List_object__o *)Component_object,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v42 )
      break;
    if ( !v49.fields._current )
      sub_1C372B4(v42);
    klass = (int32_t)v49.fields._current[1].klass;
    if ( HIDWORD(v49.fields._current[2].klass) == 3 )
    {
      v44 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v44,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0);
      CharaGraphManager__DownloadCommandAsset(klass, v44, 0);
    }
    else
    {
      klass_high = HIDWORD(v49.fields._current[1].klass);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0);
      v47 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v47,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v47, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3F532 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
    byte_4C3F532 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SummonInfos, (int32_t)v3, v4, v5);
}


void SummonEffectComponent__OnCharaGraphLoadDone(
        SummonEffectComponent_o *this,
        AssetData_o *loadData,
        const MethodInfo *method)
{
  int32_t v4; // w8
  Il2CppObject *Instance; // x0

  if ( (byte_4C3F537 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_7464/*"INIT_DONE"*/);
    byte_4C3F537 = 1;
  }
  v4 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v4;
  if ( !v4 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0),
          (Instance = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0) )
    {
      sub_1C372B4(Instance);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7464/*"INIT_DONE"*/, 0);
  }
}


void SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0

  if ( (byte_4C3F542 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&StringLiteral_5715/*"EVENT_SKIP"*/);
    byte_4C3F542 = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1C372B4(0);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5715/*"EVENT_SKIP"*/, 0);
  }
}


void SummonEffectComponent__ReleasePrevAsset(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x0
  struct System_Collections_Generic_List_string__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3F538 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4C3F538 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v6 = this->fields._releaseAssetPath;
    if ( !v6 )
      sub_1C372B4(v5);
    size = v6->fields._size;
    v8 = v6->fields._version + 1;
    v6->fields._size = 0;
    v6->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
  }
}


void SummonEffectComponent__SetGachaId(SummonEffectComponent_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.gachaId = id;
}


void SummonEffectComponent__SetUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  void *Component_object; // x0
  PlayMakerFSM_o *v4; // x20
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x8
  int32_t v6; // w1
  Il2CppObject *Item; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  HutongGames_PlayMaker_FsmVariables_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_String_o *effAnimName; // x1

  if ( (byte_4C3F53E & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&SummonEffectComponent_TypeInfo);
    sub_1C37058(&StringLiteral_11177/*"Rank"*/);
    byte_4C3F53E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object
    || (v4 = (PlayMakerFSM_o *)Component_object,
        (Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0)) == 0)
    || (Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                             (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                             (System_String_o *)StringLiteral_11177/*"Rank"*/,
                             0)) == 0 )
  {
LABEL_17:
    sub_1C372B4(Component_object);
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
  v6 = (int)Component_object;
  if ( (int)Component_object >= upAnimationNameList->fields._size )
LABEL_11:
    v6 = 0;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.upAnimationNameList,
           v6,
           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.effAnimName = (struct System_String_o *)Item;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effAnimName, (int32_t)Item, v8, v9);
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  v10 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v10 )
    goto LABEL_17;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v10,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_17;
  effAnimName = this->fields.effAnimName;
  *((_QWORD *)Component_object + 7) = effAnimName;
  sub_1C36FFC((CGThumbnailListItem_o *)((char *)Component_object + 56), (int32_t)effAnimName, v11, v12);
}


void SummonEffectComponent__SetUpInitializeAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *Component_object; // x0
  PlayMakerFSM_o *v4; // x19
  HutongGames_PlayMaker_FsmVariables_o *v5; // x20
  System_String_o *Value; // x0

  if ( (byte_4C3F53F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&SummonEffectComponent_TypeInfo);
    sub_1C37058(&StringLiteral_7457/*"INITIALIZE_ANIMATION"*/);
    byte_4C3F53F = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_10;
  v4 = Component_object;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0);
  v5 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v5
    || (Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                               v5,
                                               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                               0)) == 0 )
  {
LABEL_10:
    sub_1C372B4(Component_object);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  if ( !System_String__IsNullOrEmpty(Value, 0) )
    PlayMakerFSM__SendEvent(v4, (System_String_o *)StringLiteral_7457/*"INITIALIZE_ANIMATION"*/, 0);
}


void SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  SummonEffectComponent_c *v2; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x19
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  SummonEffectComponent_c *v7; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_4C3F534 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    sub_1C37058(&SummonEffectComponent_TypeInfo);
    byte_4C3F534 = 1;
  }
  v2 = SummonEffectComponent_TypeInfo;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v2 = SummonEffectComponent_TypeInfo;
  }
  if ( !v2->static_fields->rarityToColor )
  {
    v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
      v3,
      (const MethodInfo_3429CCC *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v3 )
      sub_1C372B4(v4);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      0,
      0,
      (const MethodInfo_342A690 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      1,
      0,
      (const MethodInfo_342A690 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      2,
      0,
      (const MethodInfo_342A690 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      3,
      1,
      (const MethodInfo_342A690 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      4,
      2,
      (const MethodInfo_342A690 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      5,
      2,
      (const MethodInfo_342A690 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      101,
      0,
      (const MethodInfo_342A690 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v3,
      102,
      0,
      (const MethodInfo_342A690 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v7 = SummonEffectComponent_TypeInfo;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v7 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v3;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->rarityToColor, (int32_t)v3, v5, v6);
  }
}


void SummonEffectComponent__StopRarityAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *Component_object; // x0
  HutongGames_PlayMaker_FsmVariables_o *v4; // x20
  System_String_o *Value; // x0
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v7; // x20
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0

  if ( (byte_4C3F541 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&SummonEffectComponent_TypeInfo);
    byte_4C3F541 = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0);
  v4 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v4 )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                         v4,
                                         SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                                         0);
  if ( !Component_object )
    goto LABEL_22;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v7 = Value;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0, 0) && !System_String__IsNullOrEmpty(v7, 0) )
  {
    Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
    if ( Component_object )
    {
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)Component_object, v7, 0) )
        return;
      Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
      if ( Component_object )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)Component_object,
                                                   v7,
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
    sub_1C372B4(Component_object);
  }
}


void SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effAnimation; // x20
  UnityEngine_Animation_o *ComponentsInChildren_object; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v8; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4C3F540 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____78127672);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F540 = 1;
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
    sub_1C372B4(ComponentsInChildren_object);
  }
LABEL_14:
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                             1,
                                                             (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____78127672);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  klass = ComponentsInChildren_object[1].klass;
  v8 = ComponentsInChildren_object;
  if ( (int)klass >= 1 )
  {
    for ( i = 0; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1C372BC(ComponentsInChildren_object);
      v10 = (UnityEngine_Object_o *)*((_QWORD *)&v8[1].monitor + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
      if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)v10,
                                                                   0);
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object, 0, 0);
      }
      LODWORD(klass) = v8[1].klass;
    }
  }
}


void SummonEffectComponent__UpdateCardParam(SummonEffectComponent_o *this, const MethodInfo *method)
{
  void *Component_object; // x0
  PlayMakerFSM_o *v4; // x20
  int32_t v5; // w21
  int v6; // w28
  int v7; // w27
  char v8; // w26
  int v9; // w25
  int v10; // w23
  int v11; // w22
  int v12; // w24
  char v13; // w21
  HutongGames_PlayMaker_FsmVariables_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int v21; // w9
  int v22; // w22
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20

  if ( (byte_4C3F53A & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SummonEffectComponent_TypeInfo);
    sub_1C37058(&StringLiteral_8053/*"IsNewCard"*/);
    sub_1C37058(&StringLiteral_18289/*"countIndex"*/);
    sub_1C37058(&StringLiteral_8066/*"IsRankUp"*/);
    sub_1C37058(&StringLiteral_8071/*"IsSkipStop"*/);
    sub_1C37058(&StringLiteral_8429/*"LimitCount"*/);
    sub_1C37058(&StringLiteral_9578/*"NoticeRarity"*/);
    sub_1C37058(&StringLiteral_4342/*"CardType"*/);
    sub_1C37058(&StringLiteral_11189/*"Rarity"*/);
    sub_1C37058(&StringLiteral_12734/*"ServantId"*/);
    byte_4C3F53A = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_66;
  v4 = (PlayMakerFSM_o *)Component_object;
  Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_18289/*"countIndex"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = (void *)HutongGames_PlayMaker_FsmInt__get_Value(
                               (HutongGames_PlayMaker_FsmInt_o *)Component_object,
                               0);
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v5 = (int)Component_object;
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       (int32_t)Component_object,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v6 = *((_DWORD *)Component_object + 4);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v5,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v7 = *((_DWORD *)Component_object + 5);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v5,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v8 = *((_BYTE *)Component_object + 24);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v5,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v9 = *((unsigned __int8 *)Component_object + 25);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v5,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v10 = *((_DWORD *)Component_object + 7);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v5,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v11 = *((_DWORD *)Component_object + 8);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v5,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v12 = *((_DWORD *)Component_object + 9);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v5,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  v13 = *((_BYTE *)Component_object + 40);
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_12734/*"ServantId"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v6;
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8429/*"LimitCount"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v7;
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8066/*"IsRankUp"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v8;
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8071/*"IsSkipStop"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v13;
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  v14 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v14 )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v14,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)((char *)Component_object + 56), 0, v15, v16);
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)((char *)Component_object + 56), 0, v17, v18);
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)((char *)Component_object + 56), 0, v19, v20);
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8053/*"IsNewCard"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v9 != 0 || v11 == 0;
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_9578/*"NoticeRarity"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v10;
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_4342/*"CardType"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  if ( v11 )
    v21 = 0;
  else
    v21 = 3;
  *((_DWORD *)Component_object + 14) = v12;
  if ( v11 == 3 )
    v21 = 1;
  v22 = (v11 & 0xFFFFFFFE) == 4 ? 2 : v21;
  Component_object = PlayMakerFSM__get_FsmVariables(v4, 0);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_11189/*"Rarity"*/,
                       0);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v22;
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
      sub_1C372B4(Component_object);
    }
  }
}


void SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  __int64 Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  PlayMakerFSM_o *v7; // x23
  int32_t v8; // w19
  int v9; // w28
  int v10; // w26
  int v11; // w22
  int32_t v12; // w25
  char v13; // w27
  const MethodInfo *v14; // x1
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
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_String_o *v37; // x24
  float v38; // s8
  System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_String_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_String_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_String_o *v48; // x0
  System_String_o **v49; // x19
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v53; // x24
  UnityEngine_Transform_o *v54; // x22
  int32_t Item; // w25
  _BOOL4 v56; // w29
  System_Collections_Generic_List_object__o *GachaBehaviors; // x0
  System_Collections_Generic_List_object__o *v58; // x22
  System_Collections_Generic_Dictionary_object__object__o *v59; // x26
  __int64 *v60; // x22
  GachaBehaviorMaster_c *v61; // x0
  int v62; // w29
  Il2CppObject *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  intptr_t v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  intptr_t v69; // x8
  int32_t v70; // w0
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
  GachaBehaviorMaster_c *v81; // x0
  int v82; // w8
  GachaBehaviorMaster_c *v83; // x0
  _BOOL4 v84; // w10
  HutongGames_PlayMaker_FsmVariables_o *v85; // x22
  HutongGames_PlayMaker_FsmString_o *v86; // x0
  GachaBehaviorMaster_c *v87; // x8
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  __int64 v90; // x8
  GachaBehaviorMaster_c *v91; // x0
  HutongGames_PlayMaker_FsmVariables_o *v92; // x22
  HutongGames_PlayMaker_FsmString_o *v93; // x0
  GachaBehaviorMaster_c *v94; // x8
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  GachaBehaviorMaster_c *v97; // x0
  HutongGames_PlayMaker_FsmVariables_o *v98; // x22
  HutongGames_PlayMaker_FsmString_o *v99; // x0
  GachaBehaviorMaster_c *v100; // x8
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  UnityEngine_Object_o *prevObject; // x22
  struct UnityEngine_GameObject_o **p_prevObject; // x26
  int v105; // w9
  int32_t v106; // w8
  UnityEngine_Object_o *v107; // x22
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v111; // x28
  bool v112; // w28
  UnityEngine_GameObject_o *v113; // x22
  Il2CppObject *v114; // x28
  System_Action_o *v115; // x25
  System_Action_o *v116; // x25
  UnityEngine_Component_o *v117; // x22
  UnityEngine_Transform_o *v118; // x28
  UnityEngine_GameObject_o *v119; // x0
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  System_String_o *v122; // x24
  System_String_o *v123; // x22
  UnityEngine_Transform_o *v124; // x0
  UnityEngine_Component_o *v125; // x26
  UnityEngine_Transform_o *v126; // x0
  UnityEngine_Component_o *v127; // x24
  int32_t v128; // w22
  int v129; // w8
  UnityEngine_Transform_o *v130; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v132; // x3
  UnityEngine_Transform_o *v133; // x0
  UnityEngine_Transform_o *v134; // x0
  const MethodInfo *v135; // x3
  UnityEngine_Transform_o *v136; // x0
  UnityEngine_Transform_o *v137; // x1
  const MethodInfo *v138; // x3
  SummonEffectComponent_o *v139; // x0
  int32_t v140; // w2
  System_String_o *v141; // x0
  System_String_o *v142; // x19
  System_String_o *v143; // x0
  System_String_o *v144; // x0
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  System_Collections_Generic_List_object__o *v147; // x8
  struct System_Object_array *items; // x9
  _QWORD *v149; // x10
  __int64 size; // x11
  System_String_o *v151; // x19
  Il2CppClass **v152; // x0
  UnityEngine_Transform_o *v153; // x0
  UnityEngine_Transform_o *v154; // x0
  UnityEngine_Transform_o *v155; // x0
  const MethodInfo *v156; // x3
  const MethodInfo *v157; // x1
  __int64 v158; // x24
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  Il2CppObject *v161; // x19
  int v162; // w8
  int32_t v163; // w19
  __int64 v164; // x21
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  Il2CppObject **v167; // x20
  int32_t LowerColorRarity; // w0
  int32_t v169; // w22
  int v170; // w8
  __int64 v171; // x20
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  Il2CppObject **v174; // x21
  int v175; // w8
  System_String_o *DesignCardPath; // x22
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  intptr_t v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  intptr_t v182; // x8
  AssetLoader_LoadEndDataHandler_o *v183; // x20
  int32_t v184; // w2
  const MethodInfo *v185; // x3
  System_Collections_Generic_List_object__o *v186; // x8
  struct System_Object_array *v187; // x9
  _QWORD *v188; // x10
  __int64 v189; // x11
  System_String_o *v190; // x19
  Il2CppClass **v191; // x0
  AssetLoader_LoadEndDataHandler_o *v192; // x20
  Il2CppObject *v193; // x24
  AssetLoader_LoadEndDataHandler_o *v194; // x23
  _DWORD *monitor; // x8
  System_String_o **v196; // x8
  int32_t *v197; // x21
  System_String_o *v198; // x19
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  intptr_t v201; // x8
  _QWORD *v202; // x9
  __int64 v203; // x10
  intptr_t v204; // x8
  AssetLoader_LoadEndDataHandler_o *v205; // x21
  System_String_o *v206; // x0
  AssetLoader_LoadEndDataHandler_o *v207; // x1
  System_String_o *v208; // x23
  int32_t v209; // w2
  const MethodInfo *v210; // x3
  intptr_t v211; // x8
  _QWORD *v212; // x9
  __int64 v213; // x10
  intptr_t v214; // x8
  AssetLoader_LoadEndDataHandler_o *v215; // x24
  System_String_o *v216; // x22
  int32_t v217; // w2
  const MethodInfo *v218; // x3
  intptr_t v219; // x8
  _QWORD *v220; // x9
  __int64 v221; // x10
  intptr_t v222; // x8
  AssetLoader_LoadEndDataHandler_o *v223; // x23
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  intptr_t v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  intptr_t v229; // x8
  Il2CppObject *v230; // x21
  SummonEffectComponent___c__DisplayClass45_0_o *v231; // x0
  const MethodInfo *v232; // x1
  int v233; // [xsp+Ch] [xbp-D4h]
  int v234; // [xsp+10h] [xbp-D0h]
  int v235; // [xsp+14h] [xbp-CCh]
  int v236; // [xsp+18h] [xbp-C8h]
  _BOOL4 v237; // [xsp+1Ch] [xbp-C4h]
  int v238; // [xsp+34h] [xbp-ACh]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+38h] [xbp-A8h]
  int64_t v240; // [xsp+40h] [xbp-A0h]
  int32_t v241; // [xsp+50h] [xbp-90h]
  int32_t key; // [xsp+54h] [xbp-8Ch]
  int32_t v243; // [xsp+58h] [xbp-88h]
  int32_t svtId; // [xsp+5Ch] [xbp-84h]
  int v245; // [xsp+60h] [xbp-80h] BYREF
  int32_t v246; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v248; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v249; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v250; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v251; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v252; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3F53B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C37058(&Method_DataManager_GetMasterData_GachaBehaviorMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
    sub_1C37058(&GachaBehaviorMaster_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Rarity_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&SummonEffectComponent_TypeInfo);
    sub_1C37058(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__);
    sub_1C37058(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__);
    sub_1C37058(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__);
    sub_1C37058(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__);
    sub_1C37058(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__);
    sub_1C37058(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
    sub_1C37058(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__);
    sub_1C37058(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__);
    sub_1C37058(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
    sub_1C37058(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__);
    sub_1C37058(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__);
    sub_1C37058(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
    sub_1C37058(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__);
    sub_1C37058(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
    sub_1C37058(&StringLiteral_4338/*"CardScale"*/);
    sub_1C37058(&StringLiteral_4339/*"CardSecondName"*/);
    sub_1C37058(&StringLiteral_4330/*"CardFirstName"*/);
    sub_1C37058(&StringLiteral_8053/*"IsNewCard"*/);
    sub_1C37058(&StringLiteral_4337/*"CardRotName"*/);
    sub_1C37058(&StringLiteral_4524/*"CodeCardRarity02"*/);
    sub_1C37058(&StringLiteral_2672/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/);
    sub_1C37058(&StringLiteral_11177/*"Rank"*/);
    sub_1C37058(&StringLiteral_18289/*"countIndex"*/);
    sub_1C37058(&StringLiteral_13170/*"SummonEffect"*/);
    sub_1C37058(&StringLiteral_22962/*"rarity"*/);
    sub_1C37058(&StringLiteral_8066/*"IsRankUp"*/);
    sub_1C37058(&StringLiteral_16110/*"_0"*/);
    sub_1C37058(&StringLiteral_4523/*"CodeCardRarity"*/);
    sub_1C37058(&StringLiteral_8071/*"IsSkipStop"*/);
    sub_1C37058(&StringLiteral_8429/*"LimitCount"*/);
    sub_1C37058(&StringLiteral_9578/*"NoticeRarity"*/);
    sub_1C37058(&StringLiteral_2671/*"BACKSIDE_CLASS_IMAGE_ID"*/);
    sub_1C37058(&StringLiteral_4342/*"CardType"*/);
    sub_1C37058(&StringLiteral_4336/*"CardNodeName"*/);
    sub_1C37058(&StringLiteral_4331/*"CardFirstPeelName"*/);
    sub_1C37058(&StringLiteral_23834/*"summon_rarity_0"*/);
    sub_1C37058(&StringLiteral_11189/*"Rarity"*/);
    sub_1C37058(&StringLiteral_12734/*"ServantId"*/);
    byte_4C3F53B = 1;
  }
  entity = 0;
  v246 = 0;
  v3 = sub_1C372A4(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_376;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  this->fields.isNoSkipAll = 0;
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_376;
  v7 = (PlayMakerFSM_o *)Component_object;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_18289/*"countIndex"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Component_object, 0);
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v8 = Component_object;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                Component_object,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  svtId = *(_DWORD *)(Component_object + 16);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v8,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v243 = *(_DWORD *)(Component_object + 20);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v8,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v9 = *(unsigned __int8 *)(Component_object + 24);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v8,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v10 = *(unsigned __int8 *)(Component_object + 25);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v8,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v11 = *(_DWORD *)(Component_object + 28);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v8,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v12 = *(_DWORD *)(Component_object + 32);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v8,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(Component_object + 36);
  Component_object = (__int64)this->fields.SummonInfos;
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Component_object,
                                v8,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v13 = *(_BYTE *)(Component_object + 40);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v8,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v240 = *(_QWORD *)(Component_object + 48);
  SummonEffectComponent__ReleasePrevAsset(this, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._releaseAssetPath, (int32_t)v15, v16, v17);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_12734/*"ServantId"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = svtId;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8429/*"LimitCount"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v243;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8066/*"IsRankUp"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v9;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8071/*"IsSkipStop"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v13;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)(Component_object + 56), 0, v19, v20);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8053/*"IsNewCard"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v10 != 0 || v12 == 0;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_9578/*"NoticeRarity"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v11;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4342/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = *(_DWORD *)(v3 + 56);
  if ( (unsigned int)(v12 - 3) >= 3 )
    v21 = v12 ? 0 : 3;
  else
    v21 = dword_C47414[v12 - 3];
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_11189/*"Rarity"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v21;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  v22 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  key = v12;
  if ( !v22 )
    goto LABEL_376;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v22,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0);
  v245 = v21;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v245, v24, v25, v26, v27, v28, v29);
  Component_object = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_23834/*"summon_rarity_0"*/, v30, 0);
  if ( !FsmString )
    goto LABEL_376;
  FsmString->fields.value = (struct System_String_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&FsmString->fields.value, Component_object, v31, v32);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13170/*"SummonEffect"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, 0);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effect, (int32_t)Value, v35, v36);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4336/*"CardNodeName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v37 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4338/*"CardScale"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v38 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_object, 0);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4330/*"CardFirstName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v39 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 24) = v39;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v39, v40, v41);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4331/*"CardFirstPeelName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v42 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 32) = v42;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v42, v43, v44);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4339/*"CardSecondName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v45 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 40) = v45;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)v45, v46, v47);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4337/*"CardRotName"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  v48 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
  *(_QWORD *)(v3 + 48) = v48;
  v49 = (System_String_o **)(v3 + 48);
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 48), (int32_t)v48, v50, v51);
  Component_object = (__int64)*p_effect;
  if ( !*p_effect )
    goto LABEL_376;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  Component_object = (__int64)TransformHelper__getNodeFromName(transform, v37, 1, 0);
  if ( !Component_object )
    goto LABEL_376;
  v53 = (UnityEngine_Component_o *)Component_object;
  Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_376;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v53, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
  v54 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C3C926 )
  {
    Component_object = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v54 )
    goto LABEL_376;
  UnityEngine_Transform__set_localScale(v54, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Component_object = (__int64)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_object )
    goto LABEL_376;
  Item = System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)Component_object,
           v12,
           (const MethodInfo_342A5F4 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Component_object,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_object )
    goto LABEL_376;
  v56 = v9 != 0 && Item != 0;
  GachaBehaviors = (System_Collections_Generic_List_object__o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                                  (GachaBehaviorMaster_o *)Component_object,
                                                                  this->fields.gachaId,
                                                                  svtId,
                                                                  0);
  v241 = Item;
  if ( !GachaBehaviors || (v58 = GachaBehaviors, GachaBehaviors->fields._size < 1) )
  {
    v234 = -1;
    v235 = -1;
    v233 = -1;
    v238 = -1;
    v236 = -1;
    goto LABEL_185;
  }
  v237 = v9 != 0 && Item != 0;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                GachaBehaviors,
                                0,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !*(_QWORD *)(Component_object + 24) )
  {
    v234 = -1;
    v235 = -1;
    v233 = -1;
    v238 = -1;
    v236 = -1;
    goto LABEL_184;
  }
  if ( v10 )
    this->fields.isNoSkipAll = 1;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                v58,
                                0,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v59 = *(System_Collections_Generic_Dictionary_object__object__o **)(Component_object + 24);
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  if ( !v59 )
    goto LABEL_376;
  v60 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v59,
         (Il2CppObject *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v61 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v61 = GachaBehaviorMaster_TypeInfo;
    }
    v63 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v59,
            (Il2CppObject *)v61->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
            (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v60 = (__int64 *)v63;
    if ( v63 && (System_String_c *)v63->klass != string_TypeInfo )
      goto LABEL_379;
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v60,
            (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_object = (__int64)this->fields.upAnimationNameList;
      if ( !Component_object )
        goto LABEL_376;
      v66 = *(_QWORD *)(Component_object + 16);
      v67 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v66 )
        goto LABEL_376;
      v68 = *(int *)(Component_object + 24);
      if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v60,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = v66 + 8 * v68;
        *(_DWORD *)(Component_object + 24) = v68 + 1;
        *(_QWORD *)(v69 + 32) = v60;
        sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 32), (int32_t)v60, v64, v65);
      }
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    v70 = System_Collections_Generic_List_object___IndexOf(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v60,
            (const MethodInfo_37A3CC4 *)Method_System_Collections_Generic_List_string__IndexOf__);
    v60 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
    v62 = v70;
  }
  else
  {
    v62 = -1;
  }
  v71 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v71 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v59,
         (Il2CppObject *)v71->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v72 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v72 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v59,
                                  (Il2CppObject *)v72->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v238 = v73;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v74 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v59,
         (Il2CppObject *)v74->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v75 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v75 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v59,
                                  (Il2CppObject *)v75->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v233 = v76;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v77 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v59,
         (Il2CppObject *)v77->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v78 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v78 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v59,
                                  (Il2CppObject *)v78->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v79 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v79 = -1;
  }
  v80 = GachaBehaviorMaster_TypeInfo;
  v235 = v79;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v80 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v59,
          (Il2CppObject *)v80->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v82 = -1;
    goto LABEL_142;
  }
  v81 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v81 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v59,
                                (Il2CppObject *)v81->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_377:
    sub_1C37574(Component_object);
    goto LABEL_378;
  }
  v82 = *(_DWORD *)j_il2cpp_object_unbox_0();
LABEL_142:
  v83 = GachaBehaviorMaster_TypeInfo;
  v84 = v9 != 0 && Item != 0;
  v234 = v82;
  if ( v62 != -1 )
    v84 = v238 != -1;
  v237 = v84;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v83 = GachaBehaviorMaster_TypeInfo;
  }
  v236 = v62;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v59,
         (Il2CppObject *)v83->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_9578/*"NoticeRarity"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    *(_DWORD *)(Component_object + 56) = 3;
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
    v85 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    if ( !v85 )
      goto LABEL_376;
    v86 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
            v85,
            SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
            0);
    v87 = GachaBehaviorMaster_TypeInfo;
    v60 = (__int64 *)v86;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v87 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v59,
                                  (Il2CppObject *)v87->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v60 )
      goto LABEL_376;
    v90 = Component_object;
    if ( Component_object && *(System_String_c **)Component_object != string_TypeInfo )
      goto LABEL_378;
    v60[7] = Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)(v60 + 7), Component_object, v88, v89);
  }
  v91 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v91 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v59,
          (Il2CppObject *)v91->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_172:
    v97 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v97 = GachaBehaviorMaster_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v59,
           (Il2CppObject *)v97->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
      v98 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
      if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      if ( !v98 )
        goto LABEL_376;
      v99 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
              v98,
              SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
              0);
      v100 = GachaBehaviorMaster_TypeInfo;
      v60 = (__int64 *)v99;
      if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
        v100 = GachaBehaviorMaster_TypeInfo;
      }
      v56 = v237;
      Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    v59,
                                    (Il2CppObject *)v100->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                    (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v60 )
        goto LABEL_376;
      v90 = Component_object;
      if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
      {
        v60[7] = Component_object;
        sub_1C36FFC((CGThumbnailListItem_o *)(v60 + 7), Component_object, v101, v102);
        goto LABEL_185;
      }
      goto LABEL_378;
    }
LABEL_184:
    v56 = v237;
LABEL_185:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v56 )
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
      UnityEngine_Object__Destroy_71266752(v107, 0);
      *p_prevObject = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.prevObject, 0, v108, v109);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v53, 0);
      v111 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v111,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0);
      Component_object = (__int64)CharaGraphManager__CreateCommandTexturePrefab(gameObject, svtId, 0, v111, 0);
    }
    else
    {
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0;
      if ( !Component_object )
        goto LABEL_376;
      v112 = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               &entity,
               v240,
               (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v113 = UnityEngine_Component__get_gameObject(v53, 0);
      if ( v112 )
      {
        v114 = entity;
        v115 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v115,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab_40659744(
                                      v113,
                                      (UserServantEntity_o *)v114,
                                      0,
                                      v115,
                                      0);
      }
      else
      {
        v116 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v116,
          (Il2CppObject *)v3,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab(v113, svtId, v243, 0, 1, 0, v116, 0, 0);
      }
    }
    v117 = (UnityEngine_Component_o *)Component_object;
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    v118 = (UnityEngine_Transform_o *)Component_object;
    if ( !byte_4C3C921 )
    {
      Component_object = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    if ( !v118 )
      goto LABEL_376;
    UnityEngine_Transform__set_localPosition(v118, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    Component_object = (__int64)UnityEngine_Component__get_transform(v117, 0);
    if ( !Component_object )
      goto LABEL_376;
    v248.fields.x = v38;
    v248.fields.y = v38;
    v248.fields.z = v38;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v248, 0);
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v53,
                                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    v119 = UnityEngine_Component__get_gameObject(v117, 0);
    *p_prevObject = v119;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.prevObject, (int32_t)v119, v120, v121);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4523/*"CodeCardRarity"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    v122 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4524/*"CodeCardRarity02"*/,
                                  0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_object,
                                  0);
    if ( !*p_effect )
      goto LABEL_376;
    v123 = (System_String_o *)Component_object;
    v124 = UnityEngine_GameObject__get_transform(*p_effect, 0);
    Component_object = (__int64)TransformHelper__getNodeFromName(v124, v122, 1, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !*p_effect )
      goto LABEL_376;
    v125 = (UnityEngine_Component_o *)Component_object;
    v126 = UnityEngine_GameObject__get_transform(*p_effect, 0);
    Component_object = (__int64)TransformHelper__getNodeFromName(v126, v123, 1, 0);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !v125 )
      goto LABEL_376;
    v127 = (UnityEngine_Component_o *)Component_object;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v125, 0);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
    if ( !v127 )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v127, 0);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
    if ( this->fields.EditMode )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11177/*"Rank"*/,
                                    0);
      if ( v56 )
      {
        v128 = v241;
        if ( !Component_object )
          goto LABEL_376;
        v129 = v241 == 2 ? 2 : 1;
        *(_DWORD *)(Component_object + 56) = v129;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v130 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        NodeFromName = TransformHelper__getNodeFromName(v130, *(System_String_o **)(v3 + 24), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, v241 - 1, v132);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v133 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v134 = TransformHelper__getNodeFromName(v133, *(System_String_o **)(v3 + 32), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, v134, v241 - 1, v135);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v136 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v137 = TransformHelper__getNodeFromName(v136, *v49, 1, 0);
        v139 = this;
        v140 = v241 - 1;
      }
      else
      {
        v128 = v241;
        if ( !Component_object )
          goto LABEL_376;
        *(_DWORD *)(Component_object + 56) = 0;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v153 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v137 = TransformHelper__getNodeFromName(v153, *v49, 1, 0);
        v139 = this;
        v140 = v241;
      }
      SummonEffectComponent__ChangeClassCardColor(v139, v137, v140, v138);
      Component_object = (__int64)this->fields.effect;
      if ( Component_object )
      {
        v154 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0);
        v155 = TransformHelper__getNodeFromName(v154, *(System_String_o **)(v3 + 40), 1, 0);
        SummonEffectComponent__ChangeClassCardColor(this, v155, v128, v156);
        SummonEffectComponent__CompleteCallback(this, v157);
        return;
      }
LABEL_376:
      sub_1C372B4(Component_object);
    }
    if ( *(_DWORD *)(v3 + 56) == 3 )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11177/*"Rank"*/,
                                    0);
      if ( !Component_object )
        goto LABEL_376;
      *(_DWORD *)(Component_object + 56) = 3;
      v246 = key;
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v125, 0);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
      v141 = System_Int32__ToString((int32_t)&v246, 0);
      v142 = System_String__Concat_63599904(
               (System_String_o *)StringLiteral_22962/*"rarity"*/,
               v141,
               (System_String_o *)StringLiteral_16110/*"_0"*/,
               0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v125, v142, 0);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v125->klass[2]._1.parent)(
        v125,
        v125->klass[2]._1.generic_class);
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v127, 0);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
      v143 = System_Int32__ToString((int32_t)&v246, 0);
      v144 = System_String__Concat_63599904(
               (System_String_o *)StringLiteral_22962/*"rarity"*/,
               v143,
               (System_String_o *)StringLiteral_16110/*"_0"*/,
               0);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v127, v144, 0);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v127->klass[2]._1.parent)(
        v127,
        v127->klass[2]._1.generic_class);
      Component_object = (__int64)UnityEngine_Component__get_transform(v125, 0);
      if ( !Component_object )
        goto LABEL_376;
      v249.fields.x = 0.0;
      v249.fields.z = 0.0;
      v249.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v249, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v125, 0);
      if ( !Component_object )
        goto LABEL_376;
      v250.fields.x = v38;
      v250.fields.y = v38;
      v250.fields.z = v38;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v250, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v127, 0);
      if ( !Component_object )
        goto LABEL_376;
      v251.fields.x = 0.0;
      v251.fields.z = 0.0;
      v251.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v251, 0);
      Component_object = (__int64)UnityEngine_Component__get_transform(v127, 0);
      if ( !Component_object )
        goto LABEL_376;
      v252.fields.x = v38;
      v252.fields.y = v38;
      v252.fields.z = v38;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v252, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    1,
                                    key,
                                    0);
      v147 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      items = v147->fields._items;
      v149 = Method_System_Collections_Generic_List_string__Add__;
      ++v147->fields._version;
      if ( !items )
        goto LABEL_376;
      size = v147->fields._size;
      v151 = (System_String_o *)Component_object;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v147,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
      }
      else
      {
        v152 = &items->obj.klass + size;
        v147->fields._size = size + 1;
        v152[4] = (Il2CppClass *)v151;
        sub_1C36FFC((CGThumbnailListItem_o *)(v152 + 4), (int32_t)v151, v145, v146);
      }
      v183 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v183,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v151, v183, 1, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    101,
                                    key,
                                    0);
      v186 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v187 = v186->fields._items;
      v188 = Method_System_Collections_Generic_List_string__Add__;
      ++v186->fields._version;
      if ( !v187 )
        goto LABEL_376;
      v189 = v186->fields._size;
      v190 = (System_String_o *)Component_object;
      if ( (unsigned int)v189 >= LODWORD(v187->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v186,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
      }
      else
      {
        v191 = &v187->obj.klass + v189;
        v186->fields._size = v189 + 1;
        v191[4] = (Il2CppClass *)v190;
        sub_1C36FFC((CGThumbnailListItem_o *)(v191 + 4), (int32_t)v190, v184, v185);
      }
      v192 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v192,
        (Il2CppObject *)v3,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
        0);
    }
    else
    {
      v158 = sub_1C372A4(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v158, 0);
      if ( !v158 )
        goto LABEL_376;
      *(_QWORD *)(v158 + 24) = v3;
      sub_1C36FFC((CGThumbnailListItem_o *)(v158 + 24), v3, v159, v160);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Component_object )
        goto LABEL_376;
      v161 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               svtId,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Component_object )
        goto LABEL_376;
      ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Component_object, svtId, v243, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !v161 )
        goto LABEL_376;
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                                    (int32_t)v161[5].klass,
                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Component_object )
        goto LABEL_376;
      v162 = *(_DWORD *)(Component_object + 40);
      if ( v235 != -1 )
        v162 = v235;
      *(_DWORD *)(v158 + 16) = v162;
      if ( v234 == -1 )
        v163 = key;
      else
        v163 = v234;
      if ( !v56 )
      {
        v171 = sub_1C372A4(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v171, 0);
        if ( !v171 )
          goto LABEL_376;
        *(_QWORD *)(v171 + 24) = v158;
        v174 = (Il2CppObject **)(v171 + 24);
        sub_1C36FFC((CGThumbnailListItem_o *)(v171 + 24), v158, v172, v173);
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
        if ( !Component_object )
          goto LABEL_376;
        Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11177/*"Rank"*/,
                                      0);
        if ( !Component_object )
          goto LABEL_376;
        v175 = v236;
        if ( v236 == -1 )
          v175 = 0;
        *(_DWORD *)(Component_object + 56) = v175;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v174 || !Component_object )
          goto LABEL_376;
        DesignCardPath = DesignCardManager__GetDesignCardPath(
                           (DesignCardManager_o *)Component_object,
                           (int32_t)(*v174)[1].klass,
                           v163,
                           0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__isExistAssetStorage(DesignCardPath, 0);
        if ( (Component_object & 1) == 0 )
        {
          if ( !*v174 )
            goto LABEL_376;
          LODWORD((*v174)[1].klass) = 1;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v174 || !Component_object )
            goto LABEL_376;
          v163 = 3;
          DesignCardPath = DesignCardManager__GetDesignCardPath(
                             (DesignCardManager_o *)Component_object,
                             (int32_t)(*v174)[1].klass,
                             3,
                             0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v179 = *(_QWORD *)(Component_object + 16);
        v180 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v179 )
          goto LABEL_376;
        v181 = *(int *)(Component_object + 24);
        if ( (unsigned int)v181 >= *(_DWORD *)(v179 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)DesignCardPath,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
        }
        else
        {
          v182 = v179 + 8 * v181;
          *(_DWORD *)(Component_object + 24) = v181 + 1;
          *(_QWORD *)(v182 + 32) = DesignCardPath;
          sub_1C36FFC((CGThumbnailListItem_o *)(v182 + 32), (int32_t)DesignCardPath, v177, v178);
        }
        v193 = *v174;
        v194 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v194,
          v193,
          Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__loadAssetStorage(DesignCardPath, v194, 1, 0);
        if ( !*v174 )
          goto LABEL_376;
        monitor = (*v174)[1].monitor;
        if ( !monitor )
          goto LABEL_376;
        v196 = (System_String_o **)(monitor[14] == 1 ? &StringLiteral_2672/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/ : &StringLiteral_2671/*"BACKSIDE_CLASS_IMAGE_ID"*/);
        *(_DWORD *)(v171 + 16) = ConstantMaster__getValue(*v196, 0);
        v197 = (int32_t *)(v171 + 16);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v198 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v197, v163, 0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( !AssetManager__isExistAssetStorage(v198, 0) )
        {
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_376;
          v198 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v197, 3, 0);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v201 = *(_QWORD *)(Component_object + 16);
        v202 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v201 )
          goto LABEL_376;
        v203 = *(int *)(Component_object + 24);
        if ( (unsigned int)v203 >= *(_DWORD *)(v201 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v198,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
        }
        else
        {
          v204 = v201 + 8 * v203;
          *(_DWORD *)(Component_object + 24) = v203 + 1;
          *(_QWORD *)(v204 + 32) = v198;
          sub_1C36FFC((CGThumbnailListItem_o *)(v204 + 32), (int32_t)v198, v199, v200);
        }
        v205 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v205,
          (Il2CppObject *)v171,
          Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v206 = v198;
        v207 = v205;
        goto LABEL_375;
      }
      v164 = sub_1C372A4(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v164, 0);
      if ( !v164 )
        goto LABEL_376;
      *(_QWORD *)(v164 + 24) = v158;
      v167 = (Il2CppObject **)(v164 + 24);
      sub_1C36FFC((CGThumbnailListItem_o *)(v164 + 24), v158, v165, v166);
      if ( !*(_QWORD *)(v164 + 24) )
        goto LABEL_376;
      *(_DWORD *)(v164 + 16) = *(_DWORD *)(*(_QWORD *)(v164 + 24) + 16LL);
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      LowerColorRarity = Rarity__getLowerColorRarity(v163, 0);
      if ( v238 != -1 )
        *(_DWORD *)(v164 + 16) = v238;
      v169 = v233 == -1 ? LowerColorRarity : v233;
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11177/*"Rank"*/,
                                    0);
      if ( v236 == -1 )
      {
        if ( !Component_object )
          goto LABEL_376;
        v170 = v241 == 2 ? 2 : 1;
      }
      else
      {
        v170 = v236;
        if ( !Component_object )
          goto LABEL_376;
      }
      *(_DWORD *)(Component_object + 56) = v170;
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v208 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v164 + 16),
               v169,
               0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__isExistAssetStorage(v208, 0) )
      {
        *(_DWORD *)(v164 + 16) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v169 = 3;
        v208 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v164 + 16),
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v211 = *(_QWORD *)(Component_object + 16);
      v212 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v211 )
        goto LABEL_376;
      v213 = *(int *)(Component_object + 24);
      if ( (unsigned int)v213 >= *(_DWORD *)(v211 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v208,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v212[4] + 192LL) + 112LL));
      }
      else
      {
        v214 = v211 + 8 * v213;
        *(_DWORD *)(Component_object + 24) = v213 + 1;
        *(_QWORD *)(v214 + 32) = v208;
        sub_1C36FFC((CGThumbnailListItem_o *)(v214 + 32), (int32_t)v208, v209, v210);
      }
      v215 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v215,
        (Il2CppObject *)v164,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v208, v215, 1, 0);
      *(_DWORD *)(v164 + 20) = ConstantMaster__getValue((System_String_o *)StringLiteral_2671/*"BACKSIDE_CLASS_IMAGE_ID"*/, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v216 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v164 + 20),
               v169,
               0);
      if ( !AssetManager__isExistAssetStorage(v216, 0) )
      {
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v216 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v164 + 20),
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v219 = *(_QWORD *)(Component_object + 16);
      v220 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v219 )
        goto LABEL_376;
      v221 = *(int *)(Component_object + 24);
      if ( (unsigned int)v221 >= *(_DWORD *)(v219 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v216,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
      }
      else
      {
        v222 = v219 + 8 * v221;
        *(_DWORD *)(Component_object + 24) = v221 + 1;
        *(_QWORD *)(v222 + 32) = v216;
        sub_1C36FFC((CGThumbnailListItem_o *)(v222 + 32), (int32_t)v216, v217, v218);
      }
      v223 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v223,
        (Il2CppObject *)v164,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v216, v223, 1, 0);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !*v167 || !Component_object )
        goto LABEL_376;
      v190 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               (int32_t)(*v167)[1].klass,
               v163,
               0);
      Component_object = AssetManager__isExistAssetStorage(v190, 0);
      if ( (Component_object & 1) == 0 )
      {
        if ( !*v167 )
          goto LABEL_376;
        LODWORD((*v167)[1].klass) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v167 || !Component_object )
          goto LABEL_376;
        v190 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 (int32_t)(*v167)[1].klass,
                 3,
                 0);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v226 = *(_QWORD *)(Component_object + 16);
      v227 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v226 )
        goto LABEL_376;
      v228 = *(int *)(Component_object + 24);
      if ( (unsigned int)v228 >= *(_DWORD *)(v226 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v190,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
      }
      else
      {
        v229 = v226 + 8 * v228;
        *(_DWORD *)(Component_object + 24) = v228 + 1;
        *(_QWORD *)(v229 + 32) = v190;
        sub_1C36FFC((CGThumbnailListItem_o *)(v229 + 32), (int32_t)v190, v224, v225);
      }
      v230 = *v167;
      v192 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v192,
        v230,
        Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    v206 = v190;
    v207 = v192;
LABEL_375:
    AssetManager__loadAssetStorage(v206, v207, 1, 0);
    return;
  }
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4342/*"CardType"*/,
                                0);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = 4;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v7, 0);
  v92 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v92 )
    goto LABEL_376;
  v93 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
          v92,
          SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
          0);
  v94 = GachaBehaviorMaster_TypeInfo;
  v60 = (__int64 *)v93;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v94 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v59,
                                (Il2CppObject *)v94->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v60 )
    goto LABEL_376;
  v90 = Component_object;
  if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
  {
    v60[7] = Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)(v60 + 7), Component_object, v95, v96);
    goto LABEL_172;
  }
LABEL_378:
  sub_1C37574(v90);
LABEL_379:
  sub_1C37574(v60);
  SummonEffectComponent___c__DisplayClass45_0___ctor(v231, v232);
}


void SummonEffectComponent___endAnimation_b__43_0(SummonEffectComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *Component_object; // x0

  if ( (byte_4C3F545 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5442/*"END_FADE"*/);
    byte_4C3F545 = 1;
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
    UnityEngine_Object__Destroy_71266752(v5, 0);
    *p_effect = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effect, 0, v6, v7);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5442/*"END_FADE"*/, 0);
}


void SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4C3F539 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonEffectComponent__endAnimation_b__43_0__);
    byte_4C3F539 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0);
  if ( !v5 )
    sub_1C372B4(v8);
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
    sub_1C372B4(0);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
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
  const MethodInfo *v20; // x1

  v4 = this;
  if ( (byte_4C3F546 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C3F546 = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.firstTr, (int32_t)NodeFromName, v8, v9);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)v10->fields.effect;
  if ( !this )
    goto LABEL_16;
  v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v12 = TransformHelper__getNodeFromName(v11, v4->fields.cardFirstPeelName, 1, 0);
  v10->fields.firstTPeelr = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->fields.firstTPeelr, (int32_t)v12, v13, v14);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v15->fields.firstTr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v16 = v4->fields.__4__this;
  if ( !v16 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v16->fields.firstTPeelr, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1C372B4(this);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, v20);
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
  const MethodInfo *v12; // x1

  v4 = this;
  if ( (byte_4C3F547 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1C37058(&StringLiteral_4916/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4C3F547 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4916/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0);
  v10 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
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
    sub_1C372B4(this);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, v12);
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
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v8; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v9; // x8
  const MethodInfo *v10; // x1
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8

  if ( (byte_4C3F548 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C3F548 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v8 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0),
        (v9 = this->fields.CS___8__locals1) == 0)
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v9->fields.cardSecondName,
                                                 1,
                                                 0),
        !v8)
    || (DesignCardManager__SetupCardImage(v8, d, (UnityEngine_Transform_o *)Instance, this->fields.classCardId, 0),
        (v11 = this->fields.CS___8__locals1) == 0)
    || (Instance = (UnityEngine_GameObject_o *)v11->fields.__4__this) == 0 )
  {
LABEL_11:
    sub_1C372B4(Instance);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v10);
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
  const MethodInfo *v25; // x1
  struct SummonEffectComponent___c__DisplayClass45_0_o *v26; // x8

  v4 = this;
  if ( (byte_4C3F549 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C3F549 = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.firstTr, (int32_t)NodeFromName, v9, v10);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields.firstTPeelr, (int32_t)v14, v15, v16);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  v18 = v17->fields.__4__this;
  if ( !v18 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v18->fields.firstTr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v19 = v4->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_25;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v20->fields.firstTPeelr, v4->fields.classCardId, 0);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
        (v26 = v4->fields.CS___8__locals1) == 0)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)v26->fields.__4__this) == 0 )
  {
LABEL_25:
    sub_1C372B4(this);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, v25);
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
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals2; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v9; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v10; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8
  struct SummonEffectComponent___c__DisplayClass45_1_o *v12; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  struct SummonEffectComponent_o *v14; // x8
  DesignCardManager_o *v15; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v16; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v17; // x8
  const MethodInfo *v18; // x1
  struct SummonEffectComponent___c__DisplayClass45_1_o *v19; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v20; // x8

  if ( (byte_4C3F54A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C3F54A = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = _4__this->fields.effect;
  if ( !Instance )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0);
  v10 = this->fields.CS___8__locals2;
  if ( !v10 )
    goto LABEL_21;
  v11 = v10->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                           (UnityEngine_Transform_o *)Instance,
                                           v11->fields.cardFirstName,
                                           1,
                                           0);
  if ( !v9 )
    goto LABEL_21;
  DesignCardManager__SetupCardImage(v9, d, (UnityEngine_Transform_o *)Instance, this->fields.beforeClassCardId, 0);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v12 = this->fields.CS___8__locals2;
  if ( !v12 )
    goto LABEL_21;
  v13 = v12->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_21;
  v14 = v13->fields.__4__this;
  if ( !v14 )
    goto LABEL_21;
  v15 = (DesignCardManager_o *)Instance;
  Instance = v14->fields.effect;
  if ( !Instance )
    goto LABEL_21;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0);
  v16 = this->fields.CS___8__locals2;
  if ( !v16
    || (v17 = v16->fields.CS___8__locals1) == 0
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v17->fields.cardFirstPeelName,
                                                 1,
                                                 0),
        !v15)
    || (DesignCardManager__SetupCardImage(
          v15,
          d,
          (UnityEngine_Transform_o *)Instance,
          this->fields.beforeClassCardId,
          0),
        (v19 = this->fields.CS___8__locals2) == 0)
    || (v20 = v19->fields.CS___8__locals1) == 0
    || (Instance = (UnityEngine_GameObject_o *)v20->fields.__4__this) == 0 )
  {
LABEL_21:
    sub_1C372B4(Instance);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v18);
}


void SummonEffectComponent___c__DisplayClass45_2___UpdateCardTexture_b__6(
        SummonEffectComponent___c__DisplayClass45_2_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  struct SummonEffectComponent___c__DisplayClass45_1_o *CS___8__locals2; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v9; // x21
  struct SummonEffectComponent___c__DisplayClass45_1_o *v10; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8
  const MethodInfo *v12; // x1
  struct SummonEffectComponent___c__DisplayClass45_1_o *v13; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v14; // x8

  if ( (byte_4C3F54B & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C3F54B = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = _4__this->fields.effect;
  if ( !Instance )
    goto LABEL_14;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0);
  v10 = this->fields.CS___8__locals2;
  if ( !v10
    || (v11 = v10->fields.CS___8__locals1) == 0
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v11->fields.cardRotName,
                                                 1,
                                                 0),
        !v9)
    || (DesignCardManager__SetupCardImage(v9, d, (UnityEngine_Transform_o *)Instance, this->fields.classBackId, 0),
        (v13 = this->fields.CS___8__locals2) == 0)
    || (v14 = v13->fields.CS___8__locals1) == 0
    || (Instance = (UnityEngine_GameObject_o *)v14->fields.__4__this) == 0 )
  {
LABEL_14:
    sub_1C372B4(Instance);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v12);
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
  const MethodInfo *v18; // x1
  struct SummonEffectComponent___c__DisplayClass45_1_o *v19; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v20; // x8

  v4 = this;
  if ( (byte_4C3F54C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C37058(&StringLiteral_15133/*"Unlit/Transparent Colored"*/);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_1C37058(&StringLiteral_4916/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4C3F54C = 1;
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
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v11 = v4->fields.CS___8__locals3;
  if ( !v11 )
    goto LABEL_22;
  v12 = v11->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_22;
  v13 = this;
  v14 = (System_String_o **)(v12->fields.cardType == 1 ? &StringLiteral_4916/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15133/*"Unlit/Transparent Colored"*/);
  v15 = UnityEngine_Shader__Find(*v14, 0);
  v16 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
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
    || (UnityEngine_Material__set_mainTexture(v16, v17, 0), (v19 = v4->fields.CS___8__locals3) == 0)
    || (v20 = v19->fields.CS___8__locals1) == 0
    || (this = (SummonEffectComponent___c__DisplayClass45_3_o *)v20->fields.__4__this) == 0 )
  {
LABEL_22:
    sub_1C372B4(this);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, v18);
}