void __fastcall SummonEffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w1
  struct SummonEffectComponent_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  struct SummonEffectComponent_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  struct SummonEffectComponent_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  struct SummonEffectComponent_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  struct SummonEffectComponent_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  struct SummonEffectComponent_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  struct SummonEffectComponent_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct SummonEffectComponent_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3

  if ( (byte_4AB252D & 1) == 0 )
  {
    sub_1BAB41C(&SummonEffectComponent_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_23721/*"summon_up_04"*/, v4);
    sub_1BAB41C(&StringLiteral_23719/*"summon_up_02"*/, v5);
    sub_1BAB41C(&StringLiteral_6996/*"GetAnimationName"*/, v6);
    sub_1BAB41C(&StringLiteral_23720/*"summon_up_03"*/, v7);
    sub_1BAB41C(&StringLiteral_23718/*"summon_up_01"*/, v8);
    sub_1BAB41C(&StringLiteral_11165/*"RarityAnimationName"*/, v9);
    sub_1BAB41C(&StringLiteral_15197/*"UpAnimationName"*/, v10);
    sub_1BAB41C(&StringLiteral_7608/*"InitializeAnimationName"*/, v11);
    byte_4AB252D = 1;
  }
  SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION = (struct System_String_o *)StringLiteral_23718/*"summon_up_01"*/;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)SummonEffectComponent_TypeInfo->static_fields,
    StringLiteral_23718/*"summon_up_01"*/,
    v2,
    v3);
  v12 = StringLiteral_23719/*"summon_up_02"*/;
  static_fields = SummonEffectComponent_TypeInfo->static_fields;
  static_fields->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_23719/*"summon_up_02"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->RANKUP_TO_SILVER_ANIMATION, v12, v14, v15);
  v16 = StringLiteral_23720/*"summon_up_03"*/;
  v17 = SummonEffectComponent_TypeInfo->static_fields;
  v17->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_23720/*"summon_up_03"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v17->RANKUP_TO_GOLD_ANIMATION, v16, v18, v19);
  v20 = StringLiteral_23721/*"summon_up_04"*/;
  v21 = SummonEffectComponent_TypeInfo->static_fields;
  v21->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_23721/*"summon_up_04"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v21->RANKUP_COMMANDCODE_ANIMATION, v20, v22, v23);
  v24 = StringLiteral_15197/*"UpAnimationName"*/;
  v25 = SummonEffectComponent_TypeInfo->static_fields;
  v25->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15197/*"UpAnimationName"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v25->FSM_VARIABLE_UP_ANIMATION_NAME, v24, v26, v27);
  v28 = StringLiteral_7608/*"InitializeAnimationName"*/;
  v29 = SummonEffectComponent_TypeInfo->static_fields;
  v29->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7608/*"InitializeAnimationName"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v29->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME, v28, v30, v31);
  v32 = StringLiteral_11165/*"RarityAnimationName"*/;
  v33 = SummonEffectComponent_TypeInfo->static_fields;
  v33->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11165/*"RarityAnimationName"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v33->FSM_VARIABLE_RARITY_ANIMATION_NAME, v32, v34, v35);
  v36 = StringLiteral_6996/*"GetAnimationName"*/;
  v37 = SummonEffectComponent_TypeInfo->static_fields;
  v37->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_6996/*"GetAnimationName"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v37->FSM_VARIABLE_GET_ANIMATION_NAME, v36, v38, v39);
  v40 = SummonEffectComponent_TypeInfo->static_fields;
  v40->rarityToColor = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v40->rarityToColor, 0, v41, v42);
}


void __fastcall SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  il2cpp_array_size_t max_length; // w8
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4AB252C & 1) == 0 )
  {
    sub_1BAB41C(&int___TypeInfo, method);
    sub_1BAB41C(&StringLiteral_1/*""*/, v3);
    byte_4AB252C = 1;
  }
  v4 = (struct System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 2LL);
  if ( !v4 )
    sub_1BAB678(0LL, v5);
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = 512, max_length == 1) )
    sub_1BAB680(v4, v4);
  v4->m_Items[2] = 875;
  this->fields.cardTextureSize = v4;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.cardTextureSize, (int32_t)v4, v6, v7);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.effAnimName, v9, v10, v11);
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
  SummonEffectComponent_SummonInfo_o *v20; // x24
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4AB251C & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__, *(_QWORD *)&servantId);
    sub_1BAB41C(&SummonEffectComponent_SummonInfo_TypeInfo, v18);
    byte_4AB251C = 1;
  }
  SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  }
  v20 = (SummonEffectComponent_SummonInfo_o *)sub_1BAB668(SummonEffectComponent_SummonInfo_TypeInfo);
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
  if ( !SummonInfos
    || (items = SummonInfos->fields._items,
        v26 = Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__,
        ++SummonInfos->fields._version,
        !items) )
  {
    sub_1BAB678(v21, v22);
  }
  size = SummonInfos->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      SummonInfos,
      (Il2CppObject *)v20,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    SummonInfos->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v20;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v20, v23, v24);
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
  if ( (byte_4AB2525 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UITexture___, cardNode);
    byte_4AB2525 = 1;
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
                                             (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, const char *))this->klass[2]._1.gc_desc)(
                                            this,
                                            v8,
                                            this->klass[2]._1.name),
        (cardTextureSize = v6->fields.cardTextureSize) == 0LL) )
  {
LABEL_10:
    sub_1BAB678(this, cardNode);
  }
  if ( cardTextureSize->max_length <= 1 )
LABEL_11:
    sub_1BAB680(this, cardNode);
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

  if ( (byte_4AB2526 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1BAB41C(&StringLiteral_11967/*"SETUP_DONE"*/, v3);
    byte_4AB2526 = 1;
  }
  counterMax = this->fields._counterMax;
  v5 = this->fields._counter + 1;
  this->fields._counter = v5;
  if ( v5 >= counterMax )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1BAB678(0LL, v7);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_11967/*"SETUP_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19

  if ( (byte_4AB251E & 1) == 0 )
  {
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4AB251E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1BAB678(Instance, v4);
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
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_object__o *v27; // x21
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_List_object__o *upAnimationNameList; // x21
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  _BOOL8 v56; // x0
  __int64 v57; // x1
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v59; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  AssetLoader_LoadEndDataHandler_o *v62; // x22
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AB251F & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__, v5);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__, v11);
    sub_1BAB41C(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BAB41C(&Method_SummonEffectComponent_OnCharaGraphLoadDone__, v15);
    sub_1BAB41C(&SummonEffectComponent_TypeInfo, v16);
    sub_1BAB41C(&StringLiteral_8033/*"IsNoSkip"*/, v17);
    sub_1BAB41C(&StringLiteral_18313/*"countMax"*/, v18);
    sub_1BAB41C(&StringLiteral_13107/*"SummonEffectAnimation"*/, v19);
    byte_4AB251F = 1;
  }
  memset(&v64, 0, sizeof(v64));
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_46;
  v22 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_18313/*"countMax"*/,
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
                              (System_String_o *)StringLiteral_8033/*"IsNoSkip"*/,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  *((_BYTE *)Component_object + 56) = this->fields.isNoSkip;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v22, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_13107/*"SummonEffectAnimation"*/,
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
          (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = (struct UnityEngine_Animation_o *)v24;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.effAnimation, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v27;
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.upAnimationNameList, (int32_t)v27, v29, v30);
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
  v35 = Method_System_Collections_Generic_List_string__Add__;
  ++upAnimationNameList->fields._version;
  if ( !items )
    goto LABEL_46;
  size = upAnimationNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      upAnimationNameList,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + size;
    upAnimationNameList->fields._size = size + 1;
    v37[4] = (Il2CppClass *)RANKUP_TO_SILVER_ANIMATION;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)RANKUP_TO_SILVER_ANIMATION, v31, v32);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v40 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION;
  v41 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v40 )
    goto LABEL_46;
  v42 = Component_object[6];
  if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = v40 + 8 * v42;
    Component_object[6] = v42 + 1;
    *(_QWORD *)(v43 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v43 + 32), (int32_t)RANKUP_TO_SILVER_ANIMATION, v38, v39);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v46 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION;
  v47 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v46 )
    goto LABEL_46;
  v48 = Component_object[6];
  if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = v46 + 8 * v48;
    Component_object[6] = v48 + 1;
    *(_QWORD *)(v49 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v49 + 32), (int32_t)RANKUP_TO_SILVER_ANIMATION, v44, v45);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v52 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION;
  v53 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v52 )
    goto LABEL_46;
  v54 = Component_object[6];
  if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = v52 + 8 * v54;
    Component_object[6] = v54 + 1;
    *(_QWORD *)(v55 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v55 + 32), (int32_t)RANKUP_TO_SILVER_ANIMATION, v50, v51);
  }
  Component_object = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Component_object
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_object, 1, 0LL),
        (Component_object = (int *)this->fields.SummonInfos) == 0LL) )
  {
LABEL_46:
    sub_1BAB678(Component_object, RANKUP_TO_SILVER_ANIMATION);
  }
  this->fields.DownloadCounter = Component_object[6];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (System_Collections_Generic_List_object__o *)Component_object,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v64 = v63;
  while ( 1 )
  {
    v56 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v56 )
      break;
    if ( !v64.fields._current )
      sub_1BAB678(v56, v57);
    klass = (int32_t)v64.fields._current[1].klass;
    if ( HIDWORD(v64.fields._current[2].klass) == 3 )
    {
      v59 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v59,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadCommandAsset(klass, v59, 0LL);
    }
    else
    {
      klass_high = HIDWORD(v64.fields._current[1].klass);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0LL);
      v62 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v62,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v62, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void __fastcall SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4AB251B & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__, method);
    sub_1BAB41C(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo, v3);
    byte_4AB251B = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v4;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.SummonInfos, (int32_t)v4, v5, v6);
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

  if ( (byte_4AB2520 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, loadData);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BAB41C(&StringLiteral_7379/*"INIT_DONE"*/, v5);
    byte_4AB2520 = 1;
  }
  v6 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v6;
  if ( !v6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL),
          (Instance = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0LL) )
    {
      sub_1BAB678(Instance, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7379/*"INIT_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1

  if ( (byte_4AB252B & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1BAB41C(&StringLiteral_5712/*"EVENT_SKIP"*/, v3);
    byte_4AB252B = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1BAB678(0LL, v5);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5712/*"EVENT_SKIP"*/, 0LL);
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

  if ( (byte_4AB2521 & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_4AB2521 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v15.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v12 = this->fields._releaseAssetPath;
    if ( !v12 )
      sub_1BAB678(v10, v11);
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
  int32_t v13; // w2
  int32_t v14; // w3
  HutongGames_PlayMaker_FsmVariables_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_String_o *effAnimName; // x1

  if ( (byte_4AB2527 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Item__, v4);
    sub_1BAB41C(&SummonEffectComponent_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_11151/*"Rank"*/, v6);
    byte_4AB2527 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object
    || (v9 = (PlayMakerFSM_o *)Component_object,
        (Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL)) == 0LL)
    || (Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                             (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                             (System_String_o *)StringLiteral_11151/*"Rank"*/,
                             0LL)) == 0LL )
  {
LABEL_17:
    sub_1BAB678(Component_object, v8);
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
           (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.effAnimName = (struct System_String_o *)Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.effAnimName, (int32_t)Item, v13, v14);
  Component_object = PlayMakerFSM__get_FsmVariables(v9, 0LL);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)((char *)Component_object + 56), (int32_t)effAnimName, v16, v17);
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

  if ( (byte_4AB2528 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1BAB41C(&SummonEffectComponent_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_7372/*"INITIALIZE_ANIMATION"*/, v4);
    byte_4AB2528 = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
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
    sub_1BAB678(Component_object, v6);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) )
    PlayMakerFSM__SendEvent(v7, (System_String_o *)StringLiteral_7372/*"INITIALIZE_ANIMATION"*/, 0LL);
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
  int32_t v9; // w2
  int32_t v10; // w3
  SummonEffectComponent_c *v11; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_4AB251D & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__,
      method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__, v2);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo, v3);
    sub_1BAB41C(&SummonEffectComponent_TypeInfo, v4);
    byte_4AB251D = 1;
  }
  v5 = SummonEffectComponent_TypeInfo;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v5 = SummonEffectComponent_TypeInfo;
  }
  if ( !v5->static_fields->rarityToColor )
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BAB668(System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
      v6,
      (const MethodInfo_31E2E90 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v6 )
      sub_1BAB678(v7, v8);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      0,
      0,
      (const MethodInfo_31E3854 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      1,
      0,
      (const MethodInfo_31E3854 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      2,
      0,
      (const MethodInfo_31E3854 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      3,
      1,
      (const MethodInfo_31E3854 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      4,
      2,
      (const MethodInfo_31E3854 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      5,
      2,
      (const MethodInfo_31E3854 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      101,
      0,
      (const MethodInfo_31E3854 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v6,
      102,
      0,
      (const MethodInfo_31E3854 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v11 = SummonEffectComponent_TypeInfo;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v11 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v6;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->rarityToColor, (int32_t)v6, v9, v10);
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

  if ( (byte_4AB252A & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&SoundManager_TypeInfo, v4);
    sub_1BAB41C(&SummonEffectComponent_TypeInfo, v5);
    byte_4AB252A = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
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
    sub_1BAB678(Component_object, v7);
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

  if ( (byte_4AB2529 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76473168, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB2529 = 1;
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
    sub_1BAB678(ComponentsInChildren_object, v5);
  }
LABEL_14:
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                             1,
                                                             (const MethodInfo_2EBB904 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76473168);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  klass = ComponentsInChildren_object[1].klass;
  v10 = ComponentsInChildren_object;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1BAB680(ComponentsInChildren_object, v5);
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
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int v34; // w9
  int v35; // w22
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20

  if ( (byte_4AB2523 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v3);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v4);
    sub_1BAB41C(&SummonEffectComponent_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_8032/*"IsNewCard"*/, v6);
    sub_1BAB41C(&StringLiteral_18312/*"countIndex"*/, v7);
    sub_1BAB41C(&StringLiteral_8045/*"IsRankUp"*/, v8);
    sub_1BAB41C(&StringLiteral_8049/*"IsSkipStop"*/, v9);
    sub_1BAB41C(&StringLiteral_8407/*"LimitCount"*/, v10);
    sub_1BAB41C(&StringLiteral_9573/*"NoticeRarity"*/, v11);
    sub_1BAB41C(&StringLiteral_4386/*"CardType"*/, v12);
    sub_1BAB41C(&StringLiteral_11163/*"Rarity"*/, v13);
    sub_1BAB41C(&StringLiteral_12661/*"ServantId"*/, v14);
    byte_4AB2523 = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_66;
  v17 = (PlayMakerFSM_o *)Component_object;
  Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_18312/*"countIndex"*/,
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
                       (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v19 = *((_DWORD *)Component_object + 4);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v20 = *((_DWORD *)Component_object + 5);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v21 = *((_BYTE *)Component_object + 24);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v22 = *((unsigned __int8 *)Component_object + 25);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v23 = *((_DWORD *)Component_object + 7);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v24 = *((_DWORD *)Component_object + 8);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v25 = *((_DWORD *)Component_object + 9);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v18,
                       (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  v26 = *((_BYTE *)Component_object + 40);
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_12661/*"ServantId"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v19;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8407/*"LimitCount"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v20;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8045/*"IsRankUp"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v21;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8049/*"IsSkipStop"*/,
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)((char *)Component_object + 56), 0, v28, v29);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)((char *)Component_object + 56), 0, v30, v31);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)((char *)Component_object + 56), 0, v32, v33);
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8032/*"IsNewCard"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v22 != 0 || v24 == 0;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_9573/*"NoticeRarity"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v23;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_4386/*"CardType"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  if ( v24 )
    v34 = 0;
  else
    v34 = 3;
  *((_DWORD *)Component_object + 14) = v25;
  if ( v24 == 3 )
    v34 = 1;
  v35 = (v24 & 0xFFFFFFFE) == 4 ? 2 : v34;
  Component_object = PlayMakerFSM__get_FsmVariables(v17, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_11163/*"Rarity"*/,
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
      sub_1BAB678(Component_object, v16);
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
  __int64 v75; // x21
  __int64 Component_object; // x0
  System_String_c *v77; // x1
  int32_t v78; // w2
  int32_t v79; // w3
  PlayMakerFSM_o *v80; // x23
  int32_t v81; // w19
  int v82; // w28
  int v83; // w26
  int v84; // w22
  unsigned int v85; // w25
  char v86; // w27
  System_Collections_Generic_List_object__o *v87; // x19
  int32_t v88; // w2
  int32_t v89; // w3
  HutongGames_PlayMaker_FsmVariables_o *v90; // x19
  int32_t v91; // w2
  int32_t v92; // w3
  int v93; // w22
  HutongGames_PlayMaker_FsmVariables_o *v94; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  Il2CppObject *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_GameObject_o **p_effect; // x27
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x24
  float v107; // s8
  System_String_o *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x0
  System_String_o **v118; // x19
  int32_t v119; // w2
  int32_t v120; // w3
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v122; // x24
  UnityEngine_Transform_o *v123; // x22
  int32_t Item; // w25
  _BOOL4 v125; // w29
  System_Collections_Generic_List_object__o *GachaBehaviors; // x0
  System_Collections_Generic_List_object__o *v127; // x22
  System_Collections_Generic_Dictionary_object__object__o *v128; // x26
  __int64 *v129; // x22
  GachaBehaviorMaster_c *v130; // x0
  int v131; // w29
  Il2CppObject *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  int32_t v139; // w0
  GachaBehaviorMaster_c *v140; // x0
  GachaBehaviorMaster_c *v141; // x0
  int v142; // w8
  GachaBehaviorMaster_c *v143; // x0
  GachaBehaviorMaster_c *v144; // x0
  int v145; // w8
  GachaBehaviorMaster_c *v146; // x0
  GachaBehaviorMaster_c *v147; // x0
  int v148; // w8
  GachaBehaviorMaster_c *v149; // x0
  GachaBehaviorMaster_c *v150; // x0
  int v151; // w8
  GachaBehaviorMaster_c *v152; // x0
  _BOOL4 v153; // w10
  HutongGames_PlayMaker_FsmVariables_o *v154; // x22
  HutongGames_PlayMaker_FsmString_o *v155; // x0
  GachaBehaviorMaster_c *v156; // x8
  int32_t v157; // w2
  int32_t v158; // w3
  __int64 v159; // x8
  GachaBehaviorMaster_c *v160; // x0
  HutongGames_PlayMaker_FsmVariables_o *v161; // x22
  HutongGames_PlayMaker_FsmString_o *v162; // x0
  GachaBehaviorMaster_c *v163; // x8
  int32_t v164; // w2
  int32_t v165; // w3
  GachaBehaviorMaster_c *v166; // x0
  HutongGames_PlayMaker_FsmVariables_o *v167; // x22
  HutongGames_PlayMaker_FsmString_o *v168; // x0
  GachaBehaviorMaster_c *v169; // x8
  int32_t v170; // w2
  int32_t v171; // w3
  UnityEngine_Object_o *prevObject; // x22
  struct UnityEngine_GameObject_o **p_prevObject; // x26
  int v174; // w9
  int32_t v175; // w8
  UnityEngine_Object_o *v176; // x22
  int32_t v177; // w2
  int32_t v178; // w3
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v180; // x28
  bool v181; // w28
  UnityEngine_GameObject_o *v182; // x22
  Il2CppObject *v183; // x28
  System_Action_o *v184; // x25
  System_Action_o *v185; // x25
  UnityEngine_Component_o *v186; // x22
  UnityEngine_Transform_o *v187; // x28
  UnityEngine_GameObject_o *v188; // x0
  int32_t v189; // w2
  int32_t v190; // w3
  System_String_o *v191; // x24
  System_String_o *v192; // x22
  UnityEngine_Transform_o *v193; // x0
  UnityEngine_Component_o *v194; // x26
  UnityEngine_Transform_o *v195; // x0
  UnityEngine_Component_o *v196; // x24
  int32_t v197; // w22
  int v198; // w8
  UnityEngine_Transform_o *v199; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v201; // x3
  UnityEngine_Transform_o *v202; // x0
  UnityEngine_Transform_o *v203; // x0
  const MethodInfo *v204; // x3
  UnityEngine_Transform_o *v205; // x0
  UnityEngine_Transform_o *v206; // x1
  const MethodInfo *v207; // x3
  SummonEffectComponent_o *v208; // x0
  int32_t v209; // w2
  System_String_o *v210; // x0
  System_String_o *v211; // x19
  System_String_o *v212; // x0
  System_String_o *v213; // x0
  int32_t v214; // w2
  int32_t v215; // w3
  System_Collections_Generic_List_object__o *v216; // x8
  struct System_Object_array *items; // x9
  _QWORD *v218; // x10
  __int64 size; // x11
  System_String_o *v220; // x19
  Il2CppClass **v221; // x0
  UnityEngine_Transform_o *v222; // x0
  UnityEngine_Transform_o *v223; // x0
  UnityEngine_Transform_o *v224; // x0
  const MethodInfo *v225; // x3
  const MethodInfo *v226; // x1
  __int64 v227; // x24
  int32_t v228; // w2
  int32_t v229; // w3
  Il2CppObject *v230; // x19
  int v231; // w8
  int32_t v232; // w19
  __int64 v233; // x21
  int32_t v234; // w2
  int32_t v235; // w3
  Il2CppObject **v236; // x20
  int32_t LowerColorRarity; // w0
  int32_t v238; // w22
  int v239; // w8
  __int64 v240; // x20
  int32_t v241; // w2
  int32_t v242; // w3
  Il2CppObject **v243; // x21
  int v244; // w8
  System_String_o *DesignCardPath; // x22
  int32_t v246; // w2
  int32_t v247; // w3
  __int64 v248; // x8
  _QWORD *v249; // x9
  __int64 v250; // x10
  __int64 v251; // x8
  AssetLoader_LoadEndDataHandler_o *v252; // x20
  int32_t v253; // w2
  int32_t v254; // w3
  System_Collections_Generic_List_object__o *v255; // x8
  struct System_Object_array *v256; // x9
  _QWORD *v257; // x10
  __int64 v258; // x11
  System_String_o *v259; // x19
  Il2CppClass **v260; // x0
  AssetLoader_LoadEndDataHandler_o *v261; // x20
  Il2CppObject *v262; // x24
  AssetLoader_LoadEndDataHandler_o *v263; // x23
  _DWORD *monitor; // x8
  System_String_o **v265; // x8
  int32_t *v266; // x21
  System_String_o *v267; // x19
  int32_t v268; // w2
  int32_t v269; // w3
  __int64 v270; // x8
  _QWORD *v271; // x9
  __int64 v272; // x10
  __int64 v273; // x8
  AssetLoader_LoadEndDataHandler_o *v274; // x21
  System_String_o *v275; // x0
  AssetLoader_LoadEndDataHandler_o *v276; // x1
  System_String_o *v277; // x23
  int32_t v278; // w2
  int32_t v279; // w3
  __int64 v280; // x8
  _QWORD *v281; // x9
  __int64 v282; // x10
  __int64 v283; // x8
  AssetLoader_LoadEndDataHandler_o *v284; // x24
  System_String_o *v285; // x22
  int32_t v286; // w2
  int32_t v287; // w3
  __int64 v288; // x8
  _QWORD *v289; // x9
  __int64 v290; // x10
  __int64 v291; // x8
  AssetLoader_LoadEndDataHandler_o *v292; // x23
  int32_t v293; // w2
  int32_t v294; // w3
  __int64 v295; // x8
  _QWORD *v296; // x9
  __int64 v297; // x10
  __int64 v298; // x8
  Il2CppObject *v299; // x21
  SummonEffectComponent_o *v300; // x0
  UnityEngine_Transform_o *v301; // x1
  int32_t v302; // w2
  const MethodInfo *v303; // x3
  int v304; // [xsp+Ch] [xbp-D4h]
  int v305; // [xsp+10h] [xbp-D0h]
  int v306; // [xsp+14h] [xbp-CCh]
  int v307; // [xsp+18h] [xbp-C8h]
  _BOOL4 v308; // [xsp+1Ch] [xbp-C4h]
  int v309; // [xsp+34h] [xbp-ACh]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+38h] [xbp-A8h]
  int64_t v311; // [xsp+40h] [xbp-A0h]
  int32_t v312; // [xsp+50h] [xbp-90h]
  int key; // [xsp+54h] [xbp-8Ch]
  int32_t v314; // [xsp+58h] [xbp-88h]
  int32_t svtId; // [xsp+5Ch] [xbp-84h]
  int v316; // [xsp+60h] [xbp-80h] BYREF
  int v317; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v319; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v320; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v321; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v322; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v323; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB2524 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AssetManager_TypeInfo, v3);
    sub_1BAB41C(&AtlasManager_TypeInfo, v4);
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v5);
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UISprite___, v6);
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UITexture___, v7);
    sub_1BAB41C(&Method_DataManager_GetMasterData_GachaBehaviorMaster___, v8);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantClassMaster___, v9);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1BAB41C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v14);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v17);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__,
      v18);
    sub_1BAB41C(&GachaBehaviorMaster_TypeInfo, v19);
    sub_1BAB41C(&int_TypeInfo, v20);
    sub_1BAB41C(&long_TypeInfo, v21);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Add__, v22);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Contains__, v23);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__IndexOf__, v24);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string___ctor__, v25);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__, v26);
    sub_1BAB41C(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v27);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__, v28);
    sub_1BAB41C(&System_Collections_Generic_List_string__TypeInfo, v29);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v30);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v31);
    sub_1BAB41C(&Rarity_TypeInfo, v32);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v34);
    sub_1BAB41C(&string_TypeInfo, v35);
    sub_1BAB41C(&SummonEffectComponent_TypeInfo, v36);
    sub_1BAB41C(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__, v37);
    sub_1BAB41C(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__, v38);
    sub_1BAB41C(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__, v39);
    sub_1BAB41C(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__, v40);
    sub_1BAB41C(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__, v41);
    sub_1BAB41C(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo, v42);
    sub_1BAB41C(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__, v43);
    sub_1BAB41C(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__, v44);
    sub_1BAB41C(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo, v45);
    sub_1BAB41C(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__, v46);
    sub_1BAB41C(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__, v47);
    sub_1BAB41C(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo, v48);
    sub_1BAB41C(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__, v49);
    sub_1BAB41C(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo, v50);
    sub_1BAB41C(&StringLiteral_4382/*"CardScale"*/, v51);
    sub_1BAB41C(&StringLiteral_4383/*"CardSecondName"*/, v52);
    sub_1BAB41C(&StringLiteral_4374/*"CardFirstName"*/, v53);
    sub_1BAB41C(&StringLiteral_8032/*"IsNewCard"*/, v54);
    sub_1BAB41C(&StringLiteral_4381/*"CardRotName"*/, v55);
    sub_1BAB41C(&StringLiteral_4552/*"CodeCardRarity02"*/, v56);
    sub_1BAB41C(&StringLiteral_2786/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v57);
    sub_1BAB41C(&StringLiteral_11151/*"Rank"*/, v58);
    sub_1BAB41C(&StringLiteral_18312/*"countIndex"*/, v59);
    sub_1BAB41C(&StringLiteral_13105/*"SummonEffect"*/, v60);
    sub_1BAB41C(&StringLiteral_22824/*"rarity"*/, v61);
    sub_1BAB41C(&StringLiteral_8045/*"IsRankUp"*/, v62);
    sub_1BAB41C(&StringLiteral_16154/*"_0"*/, v63);
    sub_1BAB41C(&StringLiteral_4551/*"CodeCardRarity"*/, v64);
    sub_1BAB41C(&StringLiteral_8049/*"IsSkipStop"*/, v65);
    sub_1BAB41C(&StringLiteral_8407/*"LimitCount"*/, v66);
    sub_1BAB41C(&StringLiteral_9573/*"NoticeRarity"*/, v67);
    sub_1BAB41C(&StringLiteral_2785/*"BACKSIDE_CLASS_IMAGE_ID"*/, v68);
    sub_1BAB41C(&StringLiteral_4386/*"CardType"*/, v69);
    sub_1BAB41C(&StringLiteral_4380/*"CardNodeName"*/, v70);
    sub_1BAB41C(&StringLiteral_4375/*"CardFirstPeelName"*/, v71);
    sub_1BAB41C(&StringLiteral_23712/*"summon_rarity_0"*/, v72);
    sub_1BAB41C(&StringLiteral_11163/*"Rarity"*/, v73);
    sub_1BAB41C(&StringLiteral_12661/*"ServantId"*/, v74);
    byte_4AB2524 = 1;
  }
  entity = 0LL;
  v317 = 0;
  v75 = sub_1BAB668(SummonEffectComponent___c__DisplayClass45_0_TypeInfo);
  SummonEffectComponent___c__DisplayClass45_0___ctor((SummonEffectComponent___c__DisplayClass45_0_o *)v75, 0LL);
  if ( !v75 )
    goto LABEL_376;
  *(_QWORD *)(v75 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 16), (int32_t)this, v78, v79);
  this->fields.isNoSkipAll = 0;
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_376;
  v80 = (PlayMakerFSM_o *)Component_object;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_18312/*"countIndex"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Component_object, 0LL);
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v81 = Component_object;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                Component_object,
                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  svtId = *(_DWORD *)(Component_object + 16);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v314 = *(_DWORD *)(Component_object + 20);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v82 = *(unsigned __int8 *)(Component_object + 24);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v83 = *(unsigned __int8 *)(Component_object + 25);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v84 = *(_DWORD *)(Component_object + 28);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v85 = *(_DWORD *)(Component_object + 32);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(v75 + 56) = *(_DWORD *)(Component_object + 36);
  Component_object = (__int64)this->fields.SummonInfos;
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Component_object,
                                v81,
                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v86 = *(_BYTE *)(Component_object + 40);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v311 = *(_QWORD *)(Component_object + 48);
  SummonEffectComponent__ReleasePrevAsset(this, (const MethodInfo *)v77);
  v87 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v87,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v87;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._releaseAssetPath, (int32_t)v87, v88, v89);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_12661/*"ServantId"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = svtId;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8407/*"LimitCount"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v314;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8045/*"IsRankUp"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v82;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8049/*"IsSkipStop"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v86;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  v90 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v90 )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                v90,
                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_QWORD *)(Component_object + 56) = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(Component_object + 56), 0, v91, v92);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8032/*"IsNewCard"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v83 != 0 || v85 == 0;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_9573/*"NoticeRarity"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v84;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4386/*"CardType"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = *(_DWORD *)(v75 + 56);
  if ( v85 - 3 >= 3 )
    v93 = v85 ? 0 : 3;
  else
    v93 = dword_BFC960[v85 - 3];
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_11163/*"Rarity"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v93;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  v94 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  key = v85;
  if ( !v94 )
    goto LABEL_376;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v94,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0LL);
  v316 = v93;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v316, v96, v97, v98);
  Component_object = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_23712/*"summon_rarity_0"*/, v99, 0LL);
  if ( !FsmString )
    goto LABEL_376;
  FsmString->fields.value = (struct System_String_o *)Component_object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&FsmString->fields.value, Component_object, v100, v101);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13105/*"SummonEffect"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, 0LL);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.effect, (int32_t)Value, v104, v105);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4380/*"CardNodeName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v106 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4382/*"CardScale"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v107 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_object, 0LL);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4374/*"CardFirstName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v108 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v75 + 24) = v108;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 24), (int32_t)v108, v109, v110);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4375/*"CardFirstPeelName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v111 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v75 + 32) = v111;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 32), (int32_t)v111, v112, v113);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4383/*"CardSecondName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v114 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v75 + 40) = v114;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 40), (int32_t)v114, v115, v116);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4381/*"CardRotName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v117 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v75 + 48) = v117;
  v118 = (System_String_o **)(v75 + 48);
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 48), (int32_t)v117, v119, v120);
  Component_object = (__int64)*p_effect;
  if ( !*p_effect )
    goto LABEL_376;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  Component_object = (__int64)TransformHelper__getNodeFromName(transform, v106, 1, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  v122 = (UnityEngine_Component_o *)Component_object;
  Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_gameObject(v122, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
  v123 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4AB0696 )
  {
    Component_object = sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v77);
    byte_4AB0696 = 1;
  }
  if ( !v123 )
    goto LABEL_376;
  UnityEngine_Transform__set_localScale(v123, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v77 = (System_String_c *)v85;
  Component_object = (__int64)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_object )
    goto LABEL_376;
  Item = System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)Component_object,
           v85,
           (const MethodInfo_31E37B8 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Component_object,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_object )
    goto LABEL_376;
  v125 = v82 != 0 && Item != 0;
  GachaBehaviors = (System_Collections_Generic_List_object__o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                                  (GachaBehaviorMaster_o *)Component_object,
                                                                  this->fields.gachaId,
                                                                  svtId,
                                                                  0LL);
  v312 = Item;
  if ( !GachaBehaviors || (v127 = GachaBehaviors, GachaBehaviors->fields._size < 1) )
  {
    v305 = -1;
    v306 = -1;
    v304 = -1;
    v309 = -1;
    v307 = -1;
    goto LABEL_185;
  }
  v308 = v82 != 0 && Item != 0;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                GachaBehaviors,
                                0,
                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !*(_QWORD *)(Component_object + 24) )
  {
    v305 = -1;
    v306 = -1;
    v304 = -1;
    v309 = -1;
    v307 = -1;
    goto LABEL_184;
  }
  if ( v83 )
    this->fields.isNoSkipAll = 1;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                v127,
                                0,
                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v128 = *(System_Collections_Generic_Dictionary_object__object__o **)(Component_object + 24);
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  if ( !v128 )
    goto LABEL_376;
  v129 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v128,
         (Il2CppObject *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v130 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v130 = GachaBehaviorMaster_TypeInfo;
    }
    v132 = System_Collections_Generic_Dictionary_object__object___get_Item(
             v128,
             (Il2CppObject *)v130->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
             (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v129 = (__int64 *)v132;
    if ( v132 )
    {
      v77 = string_TypeInfo;
      if ( (System_String_c *)v132->klass != string_TypeInfo )
        goto LABEL_379;
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v129,
            (const MethodInfo_354DC4C *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_object = (__int64)this->fields.upAnimationNameList;
      if ( !Component_object )
        goto LABEL_376;
      v135 = *(_QWORD *)(Component_object + 16);
      v136 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v135 )
        goto LABEL_376;
      v137 = *(int *)(Component_object + 24);
      if ( (unsigned int)v137 >= *(_DWORD *)(v135 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v129,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
      }
      else
      {
        v138 = v135 + 8 * v137;
        *(_DWORD *)(Component_object + 24) = v137 + 1;
        *(_QWORD *)(v138 + 32) = v129;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v138 + 32), (int32_t)v129, v133, v134);
      }
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    v139 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)Component_object,
             (Il2CppObject *)v129,
             (const MethodInfo_354E55C *)Method_System_Collections_Generic_List_string__IndexOf__);
    v129 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
    v131 = v139;
  }
  else
  {
    v131 = -1;
  }
  v140 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v140 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v128,
         (Il2CppObject *)v140->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v141 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v141 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v128,
                                  (Il2CppObject *)v141->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                  (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v142 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v142 = -1;
  }
  v143 = GachaBehaviorMaster_TypeInfo;
  v309 = v142;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v143 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v128,
         (Il2CppObject *)v143->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v144 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v144 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v128,
                                  (Il2CppObject *)v144->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                  (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v145 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v145 = -1;
  }
  v146 = GachaBehaviorMaster_TypeInfo;
  v304 = v145;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v146 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v128,
         (Il2CppObject *)v146->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v147 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v147 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v128,
                                  (Il2CppObject *)v147->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                  (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v148 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v148 = -1;
  }
  v149 = GachaBehaviorMaster_TypeInfo;
  v306 = v148;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v149 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v128,
          (Il2CppObject *)v149->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v151 = -1;
    goto LABEL_142;
  }
  v150 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v150 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v128,
                                (Il2CppObject *)v150->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_377:
    sub_1BAB938(Component_object);
    goto LABEL_378;
  }
  v151 = *(_DWORD *)j_il2cpp_object_unbox_0();
LABEL_142:
  v152 = GachaBehaviorMaster_TypeInfo;
  v153 = v82 != 0 && Item != 0;
  v305 = v151;
  if ( v131 != -1 )
    v153 = v309 != -1;
  v308 = v153;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v152 = GachaBehaviorMaster_TypeInfo;
  }
  v307 = v131;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v128,
         (Il2CppObject *)v152->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_9573/*"NoticeRarity"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    *(_DWORD *)(Component_object + 56) = 3;
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
    v154 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    if ( !v154 )
      goto LABEL_376;
    v155 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v154,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0LL);
    v156 = GachaBehaviorMaster_TypeInfo;
    v129 = (__int64 *)v155;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v156 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v128,
                                  (Il2CppObject *)v156->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                  (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v129 )
      goto LABEL_376;
    v159 = Component_object;
    if ( Component_object && *(System_String_c **)Component_object != string_TypeInfo )
      goto LABEL_378;
    v129[7] = Component_object;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v129 + 7), Component_object, v157, v158);
  }
  v160 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v160 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v128,
          (Il2CppObject *)v160->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_172:
    v166 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v166 = GachaBehaviorMaster_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v128,
           (Il2CppObject *)v166->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
           (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
      v167 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
      if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      if ( !v167 )
        goto LABEL_376;
      v168 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
               v167,
               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
               0LL);
      v169 = GachaBehaviorMaster_TypeInfo;
      v129 = (__int64 *)v168;
      if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
        v169 = GachaBehaviorMaster_TypeInfo;
      }
      v125 = v308;
      Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    v128,
                                    (Il2CppObject *)v169->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                    (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v129 )
        goto LABEL_376;
      v159 = Component_object;
      if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
      {
        v129[7] = Component_object;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v129 + 7), Component_object, v170, v171);
        goto LABEL_185;
      }
      goto LABEL_378;
    }
LABEL_184:
    v125 = v308;
LABEL_185:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v125 )
      v174 = 4;
    else
      v174 = 3;
    if ( this->fields.EditMode )
      v175 = 0;
    else
      v175 = v174;
    this->fields._counter = 0;
    this->fields._counterMax = v175;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(prevObject, 0LL, 0LL) )
    {
      v176 = (UnityEngine_Object_o *)*p_prevObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69800620(v176, 0LL);
      *p_prevObject = 0LL;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.prevObject, 0, v177, v178);
    }
    if ( *(_DWORD *)(v75 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v122, 0LL);
      v180 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(
        v180,
        (Il2CppObject *)v75,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0LL);
      Component_object = (__int64)CharaGraphManager__CreateCommandTexturePrefab(gameObject, svtId, 0, v180, 0LL);
    }
    else
    {
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0LL;
      if ( !Component_object )
        goto LABEL_376;
      v181 = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               &entity,
               v311,
               (const MethodInfo_3163F90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v182 = UnityEngine_Component__get_gameObject(v122, 0LL);
      if ( v181 )
      {
        v183 = entity;
        v184 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
        System_Action___ctor(
          v184,
          (Il2CppObject *)v75,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0LL);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab_38291664(
                                      v182,
                                      (UserServantEntity_o *)v183,
                                      0,
                                      v184,
                                      0LL);
      }
      else
      {
        v185 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
        System_Action___ctor(
          v185,
          (Il2CppObject *)v75,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0LL);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab(v182, svtId, v314, 0, 1, 0, v185, 0, 0LL);
      }
    }
    v186 = (UnityEngine_Component_o *)Component_object;
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
    v187 = (UnityEngine_Transform_o *)Component_object;
    if ( !byte_4AB0691 )
    {
      Component_object = sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v77);
      byte_4AB0691 = 1;
    }
    if ( !v187 )
      goto LABEL_376;
    UnityEngine_Transform__set_localPosition(v187, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Component_object = (__int64)UnityEngine_Component__get_transform(v186, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    v319.fields.x = v107;
    v319.fields.y = v107;
    v319.fields.z = v107;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v319, 0LL);
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v122,
                                  (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    v188 = UnityEngine_Component__get_gameObject(v186, 0LL);
    *p_prevObject = v188;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.prevObject, (int32_t)v188, v189, v190);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4551/*"CodeCardRarity"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    v191 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4552/*"CodeCardRarity02"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_object,
                                  0LL);
    if ( !*p_effect )
      goto LABEL_376;
    v192 = (System_String_o *)Component_object;
    v193 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
    Component_object = (__int64)TransformHelper__getNodeFromName(v193, v191, 1, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !*p_effect )
      goto LABEL_376;
    v194 = (UnityEngine_Component_o *)Component_object;
    v195 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
    Component_object = (__int64)TransformHelper__getNodeFromName(v195, v192, 1, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !v194 )
      goto LABEL_376;
    v196 = (UnityEngine_Component_o *)Component_object;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v194, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
    if ( !v196 )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v196, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
    if ( this->fields.EditMode )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11151/*"Rank"*/,
                                    0LL);
      if ( v125 )
      {
        v197 = v312;
        if ( !Component_object )
          goto LABEL_376;
        v198 = v312 == 2 ? 2 : 1;
        *(_DWORD *)(Component_object + 56) = v198;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v199 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        NodeFromName = TransformHelper__getNodeFromName(v199, *(System_String_o **)(v75 + 24), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, v312 - 1, v201);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v202 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v203 = TransformHelper__getNodeFromName(v202, *(System_String_o **)(v75 + 32), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, v203, v312 - 1, v204);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v205 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v206 = TransformHelper__getNodeFromName(v205, *v118, 1, 0LL);
        v208 = this;
        v209 = v312 - 1;
      }
      else
      {
        v197 = v312;
        if ( !Component_object )
          goto LABEL_376;
        *(_DWORD *)(Component_object + 56) = 0;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v222 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v206 = TransformHelper__getNodeFromName(v222, *v118, 1, 0LL);
        v208 = this;
        v209 = v312;
      }
      SummonEffectComponent__ChangeClassCardColor(v208, v206, v209, v207);
      Component_object = (__int64)this->fields.effect;
      if ( Component_object )
      {
        v223 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v224 = TransformHelper__getNodeFromName(v223, *(System_String_o **)(v75 + 40), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, v224, v197, v225);
        SummonEffectComponent__CompleteCallback(this, v226);
        return;
      }
LABEL_376:
      sub_1BAB678(Component_object, v77);
    }
    if ( *(_DWORD *)(v75 + 56) == 3 )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11151/*"Rank"*/,
                                    0LL);
      if ( !Component_object )
        goto LABEL_376;
      *(_DWORD *)(Component_object + 56) = 3;
      v317 = key;
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v194, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
      v210 = System_Int32__ToString((int32_t)&v317, 0LL);
      v211 = System_String__Concat_62059388(
               (System_String_o *)StringLiteral_22824/*"rarity"*/,
               v210,
               (System_String_o *)StringLiteral_16154/*"_0"*/,
               0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v194, v211, 0LL);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v194->klass[2]._1.typeMetadataHandle)(
        v194,
        v194->klass[2]._1.interopData);
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v196, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
      v212 = System_Int32__ToString((int32_t)&v317, 0LL);
      v213 = System_String__Concat_62059388(
               (System_String_o *)StringLiteral_22824/*"rarity"*/,
               v212,
               (System_String_o *)StringLiteral_16154/*"_0"*/,
               0LL);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v196, v213, 0LL);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v196->klass[2]._1.typeMetadataHandle)(
        v196,
        v196->klass[2]._1.interopData);
      Component_object = (__int64)UnityEngine_Component__get_transform(v194, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v320.fields.x = 0.0;
      v320.fields.z = 0.0;
      v320.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v320, 0LL);
      Component_object = (__int64)UnityEngine_Component__get_transform(v194, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v321.fields.x = v107;
      v321.fields.y = v107;
      v321.fields.z = v107;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v321, 0LL);
      Component_object = (__int64)UnityEngine_Component__get_transform(v196, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v322.fields.x = 0.0;
      v322.fields.z = 0.0;
      v322.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v322, 0LL);
      Component_object = (__int64)UnityEngine_Component__get_transform(v196, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v323.fields.x = v107;
      v323.fields.y = v107;
      v323.fields.z = v107;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v323, 0LL);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    1,
                                    key,
                                    0LL);
      v216 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      items = v216->fields._items;
      v218 = Method_System_Collections_Generic_List_string__Add__;
      ++v216->fields._version;
      if ( !items )
        goto LABEL_376;
      size = v216->fields._size;
      v220 = (System_String_o *)Component_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v216,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
      }
      else
      {
        v221 = &items->obj.klass + size;
        v216->fields._size = size + 1;
        v221[4] = (Il2CppClass *)v220;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v221 + 4), (int32_t)v220, v214, v215);
      }
      v252 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v252,
        (Il2CppObject *)v75,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v220, v252, 1, 0LL);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    101,
                                    key,
                                    0LL);
      v255 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v256 = v255->fields._items;
      v257 = Method_System_Collections_Generic_List_string__Add__;
      ++v255->fields._version;
      if ( !v256 )
        goto LABEL_376;
      v258 = v255->fields._size;
      v259 = (System_String_o *)Component_object;
      if ( (unsigned int)v258 >= v256->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v255,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v257[4] + 192LL) + 112LL));
      }
      else
      {
        v260 = &v256->obj.klass + v258;
        v255->fields._size = v258 + 1;
        v260[4] = (Il2CppClass *)v259;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v260 + 4), (int32_t)v259, v253, v254);
      }
      v261 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v261,
        (Il2CppObject *)v75,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
        0LL);
    }
    else
    {
      v227 = sub_1BAB668(SummonEffectComponent___c__DisplayClass45_1_TypeInfo);
      SummonEffectComponent___c__DisplayClass45_1___ctor((SummonEffectComponent___c__DisplayClass45_1_o *)v227, 0LL);
      if ( !v227 )
        goto LABEL_376;
      *(_QWORD *)(v227 + 24) = v75;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v227 + 24), v75, v228, v229);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Component_object )
        goto LABEL_376;
      v230 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               svtId,
               (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Component_object )
        goto LABEL_376;
      ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Component_object, svtId, v314, 0LL);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !v230 )
        goto LABEL_376;
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                                    (int32_t)v230[5].klass,
                                    (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Component_object )
        goto LABEL_376;
      v231 = *(_DWORD *)(Component_object + 40);
      if ( v306 != -1 )
        v231 = v306;
      *(_DWORD *)(v227 + 16) = v231;
      if ( v305 == -1 )
        v232 = key;
      else
        v232 = v305;
      if ( !v125 )
      {
        v240 = sub_1BAB668(SummonEffectComponent___c__DisplayClass45_3_TypeInfo);
        SummonEffectComponent___c__DisplayClass45_3___ctor((SummonEffectComponent___c__DisplayClass45_3_o *)v240, 0LL);
        if ( !v240 )
          goto LABEL_376;
        *(_QWORD *)(v240 + 24) = v227;
        v243 = (Il2CppObject **)(v240 + 24);
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v240 + 24), v227, v241, v242);
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
        if ( !Component_object )
          goto LABEL_376;
        Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11151/*"Rank"*/,
                                      0LL);
        if ( !Component_object )
          goto LABEL_376;
        v244 = v307;
        if ( v307 == -1 )
          v244 = 0;
        *(_DWORD *)(Component_object + 56) = v244;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v243 || !Component_object )
          goto LABEL_376;
        DesignCardPath = DesignCardManager__GetDesignCardPath(
                           (DesignCardManager_o *)Component_object,
                           (int32_t)(*v243)[1].klass,
                           v232,
                           0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__isExistAssetStorage(DesignCardPath, 0LL);
        if ( (Component_object & 1) == 0 )
        {
          if ( !*v243 )
            goto LABEL_376;
          LODWORD((*v243)[1].klass) = 1;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v243 || !Component_object )
            goto LABEL_376;
          v232 = 3;
          DesignCardPath = DesignCardManager__GetDesignCardPath(
                             (DesignCardManager_o *)Component_object,
                             (int32_t)(*v243)[1].klass,
                             3,
                             0LL);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v248 = *(_QWORD *)(Component_object + 16);
        v249 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v248 )
          goto LABEL_376;
        v250 = *(int *)(Component_object + 24);
        if ( (unsigned int)v250 >= *(_DWORD *)(v248 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)DesignCardPath,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
        }
        else
        {
          v251 = v248 + 8 * v250;
          *(_DWORD *)(Component_object + 24) = v250 + 1;
          *(_QWORD *)(v251 + 32) = DesignCardPath;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v251 + 32), (int32_t)DesignCardPath, v246, v247);
        }
        v262 = *v243;
        v263 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v263,
          v262,
          Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__loadAssetStorage(DesignCardPath, v263, 1, 0LL);
        if ( !*v243 )
          goto LABEL_376;
        monitor = (*v243)[1].monitor;
        if ( !monitor )
          goto LABEL_376;
        v265 = (System_String_o **)(monitor[14] == 1 ? &StringLiteral_2786/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/ : &StringLiteral_2785/*"BACKSIDE_CLASS_IMAGE_ID"*/);
        *(_DWORD *)(v240 + 16) = ConstantMaster__getValue(*v265, 0LL);
        v266 = (int32_t *)(v240 + 16);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v267 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v266, v232, 0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( !AssetManager__isExistAssetStorage(v267, 0LL) )
        {
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_376;
          v267 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v266, 3, 0LL);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v270 = *(_QWORD *)(Component_object + 16);
        v271 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v270 )
          goto LABEL_376;
        v272 = *(int *)(Component_object + 24);
        if ( (unsigned int)v272 >= *(_DWORD *)(v270 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v267,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v271[4] + 192LL) + 112LL));
        }
        else
        {
          v273 = v270 + 8 * v272;
          *(_DWORD *)(Component_object + 24) = v272 + 1;
          *(_QWORD *)(v273 + 32) = v267;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v273 + 32), (int32_t)v267, v268, v269);
        }
        v274 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v274,
          (Il2CppObject *)v240,
          Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v275 = v267;
        v276 = v274;
        goto LABEL_375;
      }
      v233 = sub_1BAB668(SummonEffectComponent___c__DisplayClass45_2_TypeInfo);
      SummonEffectComponent___c__DisplayClass45_2___ctor((SummonEffectComponent___c__DisplayClass45_2_o *)v233, 0LL);
      if ( !v233 )
        goto LABEL_376;
      *(_QWORD *)(v233 + 24) = v227;
      v236 = (Il2CppObject **)(v233 + 24);
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v233 + 24), v227, v234, v235);
      if ( !*(_QWORD *)(v233 + 24) )
        goto LABEL_376;
      *(_DWORD *)(v233 + 16) = *(_DWORD *)(*(_QWORD *)(v233 + 24) + 16LL);
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      LowerColorRarity = Rarity__getLowerColorRarity(v232, 0LL);
      if ( v309 != -1 )
        *(_DWORD *)(v233 + 16) = v309;
      v238 = v304 == -1 ? LowerColorRarity : v304;
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11151/*"Rank"*/,
                                    0LL);
      if ( v307 == -1 )
      {
        if ( !Component_object )
          goto LABEL_376;
        v239 = v312 == 2 ? 2 : 1;
      }
      else
      {
        v239 = v307;
        if ( !Component_object )
          goto LABEL_376;
      }
      *(_DWORD *)(Component_object + 56) = v239;
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v277 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v233 + 16),
               v238,
               0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__isExistAssetStorage(v277, 0LL) )
      {
        *(_DWORD *)(v233 + 16) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v238 = 3;
        v277 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v233 + 16),
                 3,
                 0LL);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v280 = *(_QWORD *)(Component_object + 16);
      v281 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v280 )
        goto LABEL_376;
      v282 = *(int *)(Component_object + 24);
      if ( (unsigned int)v282 >= *(_DWORD *)(v280 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v277,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v281[4] + 192LL) + 112LL));
      }
      else
      {
        v283 = v280 + 8 * v282;
        *(_DWORD *)(Component_object + 24) = v282 + 1;
        *(_QWORD *)(v283 + 32) = v277;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v283 + 32), (int32_t)v277, v278, v279);
      }
      v284 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v284,
        (Il2CppObject *)v233,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v277, v284, 1, 0LL);
      *(_DWORD *)(v233 + 20) = ConstantMaster__getValue((System_String_o *)StringLiteral_2785/*"BACKSIDE_CLASS_IMAGE_ID"*/, 0LL);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v285 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v233 + 20),
               v238,
               0LL);
      if ( !AssetManager__isExistAssetStorage(v285, 0LL) )
      {
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v285 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v233 + 20),
                 3,
                 0LL);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v288 = *(_QWORD *)(Component_object + 16);
      v289 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v288 )
        goto LABEL_376;
      v290 = *(int *)(Component_object + 24);
      if ( (unsigned int)v290 >= *(_DWORD *)(v288 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v285,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v289[4] + 192LL) + 112LL));
      }
      else
      {
        v291 = v288 + 8 * v290;
        *(_DWORD *)(Component_object + 24) = v290 + 1;
        *(_QWORD *)(v291 + 32) = v285;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v291 + 32), (int32_t)v285, v286, v287);
      }
      v292 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v292,
        (Il2CppObject *)v233,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v285, v292, 1, 0LL);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !*v236 || !Component_object )
        goto LABEL_376;
      v259 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               (int32_t)(*v236)[1].klass,
               v232,
               0LL);
      Component_object = AssetManager__isExistAssetStorage(v259, 0LL);
      if ( (Component_object & 1) == 0 )
      {
        if ( !*v236 )
          goto LABEL_376;
        LODWORD((*v236)[1].klass) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v236 || !Component_object )
          goto LABEL_376;
        v259 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 (int32_t)(*v236)[1].klass,
                 3,
                 0LL);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v295 = *(_QWORD *)(Component_object + 16);
      v296 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v295 )
        goto LABEL_376;
      v297 = *(int *)(Component_object + 24);
      if ( (unsigned int)v297 >= *(_DWORD *)(v295 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v259,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v296[4] + 192LL) + 112LL));
      }
      else
      {
        v298 = v295 + 8 * v297;
        *(_DWORD *)(Component_object + 24) = v297 + 1;
        *(_QWORD *)(v298 + 32) = v259;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v298 + 32), (int32_t)v259, v293, v294);
      }
      v299 = *v236;
      v261 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v261,
        v299,
        Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    v275 = v259;
    v276 = v261;
LABEL_375:
    AssetManager__loadAssetStorage(v275, v276, 1, 0LL);
    return;
  }
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4386/*"CardType"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = 4;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  v161 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v161 )
    goto LABEL_376;
  v162 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v161,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0LL);
  v163 = GachaBehaviorMaster_TypeInfo;
  v129 = (__int64 *)v162;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v163 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v128,
                                (Il2CppObject *)v163->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v129 )
    goto LABEL_376;
  v159 = Component_object;
  if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
  {
    v129[7] = Component_object;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v129 + 7), Component_object, v164, v165);
    goto LABEL_172;
  }
LABEL_378:
  sub_1BAB938(v159);
LABEL_379:
  sub_1BAB938(v129);
  SummonEffectComponent__ChangeClassCardColor(v300, v301, v302, v303);
}


void __fastcall SummonEffectComponent___endAnimation_b__43_0(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  UnityEngine_Object_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Component_object; // x0
  __int64 v11; // x1

  if ( (byte_4AB252E & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_5477/*"END_FADE"*/, v4);
    byte_4AB252E = 1;
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
    UnityEngine_Object__Destroy_69800620(v7, 0LL);
    *p_effect = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.effect, 0, v8, v9);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    sub_1BAB678(0LL, v11);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5477/*"END_FADE"*/, 0LL);
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

  if ( (byte_4AB2522 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BAB41C(&Method_SummonEffectComponent__endAnimation_b__43_0__, v5);
    byte_4AB2522 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0LL);
  if ( !v8 )
    sub_1BAB678(v11, v12);
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
    sub_1BAB678(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BAB678(0LL, method);
  SummonEffectComponent__CompleteCallback(_4__this, 0LL);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BAB678(0LL, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct SummonEffectComponent_o *v10; // x21
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Transform_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct SummonEffectComponent_o *v15; // x8
  struct SummonEffectComponent_o *v16; // x8
  struct SummonEffectComponent_o *v17; // x8
  DesignCardManager_o *v18; // x21
  UnityEngine_Transform_o *v19; // x0

  v4 = this;
  if ( (byte_4AB2535 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1BAB41C(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d);
    byte_4AB2535 = 1;
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&_4__this->fields.firstTr, (int32_t)NodeFromName, v8, v9);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)v10->fields.effect;
  if ( !this )
    goto LABEL_16;
  v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v12 = TransformHelper__getNodeFromName(v11, v4->fields.cardFirstPeelName, 1, 0LL);
  v10->fields.firstTPeelr = v12;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v10->fields.firstTPeelr, (int32_t)v12, v13, v14);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v15->fields.firstTr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v16 = v4->fields.__4__this;
  if ( !v16 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v16->fields.firstTPeelr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v17 = v4->fields.__4__this;
  if ( !v17
    || (v18 = (DesignCardManager_o *)this,
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v17->fields.effect) == 0LL)
    || (v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)TransformHelper__getNodeFromName(
                                                                  v19,
                                                                  v4->fields.cardSecondName,
                                                                  1,
                                                                  0LL),
        !v18)
    || (DesignCardManager__SetupCardImage(v18, d, (UnityEngine_Transform_o *)this, 1, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_1BAB678(this, d);
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
  if ( (byte_4AB2536 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_1BAB41C(&UnityEngine_Material_TypeInfo, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1BAB41C(&StringLiteral_4952/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v7);
    byte_4AB2536 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0LL);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_1BAB668(UnityEngine_Material_TypeInfo);
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
    sub_1BAB678(this, d);
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

  if ( (byte_4AB2537 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_4AB2537 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1BAB678(Instance, v6);
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8
  struct SummonEffectComponent_o *v12; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v13; // x8
  UnityEngine_Transform_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
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
  if ( (byte_4AB2538 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_1BAB41C(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d);
    byte_4AB2538 = 1;
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&_4__this->fields.firstTr, (int32_t)NodeFromName, v9, v10);
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
                                                            0LL);
  v13 = v4->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_25;
  v14 = TransformHelper__getNodeFromName((UnityEngine_Transform_o *)this, v13->fields.cardFirstPeelName, 1, 0LL);
  v12->fields.firstTPeelr = v14;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v12->fields.firstTPeelr, (int32_t)v14, v15, v16);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  v18 = v17->fields.__4__this;
  if ( !v18 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v18->fields.firstTr, v4->fields.classCardId, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v19 = v4->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_25;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage(
    (DesignCardManager_o *)this,
    d,
    v20->fields.firstTPeelr,
    v4->fields.classCardId,
    0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
                                                                  0LL),
        (v24 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)TransformHelper__getNodeFromName(
                                                                  (UnityEngine_Transform_o *)this,
                                                                  v24->fields.cardSecondName,
                                                                  1,
                                                                  0LL),
        !v23)
    || (DesignCardManager__SetupCardImage(v23, d, (UnityEngine_Transform_o *)this, v4->fields.classCardId, 0LL),
        (v25 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)v25->fields.__4__this) == 0LL )
  {
LABEL_25:
    sub_1BAB678(this, d);
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

  if ( (byte_4AB2539 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_4AB2539 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1BAB678(Instance, v6);
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

  if ( (byte_4AB253A & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_4AB253A = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1BAB678(Instance, v6);
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
  if ( (byte_4AB253B & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_1BAB41C(&UnityEngine_Material_TypeInfo, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    sub_1BAB41C(&StringLiteral_15160/*"Unlit/Transparent Colored"*/, v7);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_1BAB41C(&StringLiteral_4952/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v8);
    byte_4AB253B = 1;
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
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0LL);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v15 = v4->fields.CS___8__locals3;
  if ( !v15 )
    goto LABEL_22;
  v16 = v15->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_22;
  v17 = this;
  v18 = (System_String_o **)(v16->fields.cardType == 1 ? &StringLiteral_4952/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15160/*"Unlit/Transparent Colored"*/);
  v19 = UnityEngine_Shader__Find(*v18, 0LL);
  v20 = (UnityEngine_Material_o *)sub_1BAB668(UnityEngine_Material_TypeInfo);
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
    sub_1BAB678(this, d);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, 0LL);
}