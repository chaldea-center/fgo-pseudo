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

  if ( (byte_49F8D41 & 1) == 0 )
  {
    sub_1B640C8(&SummonEffectComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_23585/*"summon_up_04"*/, v4);
    sub_1B640C8(&StringLiteral_23583/*"summon_up_02"*/, v5);
    sub_1B640C8(&StringLiteral_6965/*"GetAnimationName"*/, v6);
    sub_1B640C8(&StringLiteral_23584/*"summon_up_03"*/, v7);
    sub_1B640C8(&StringLiteral_23582/*"summon_up_01"*/, v8);
    sub_1B640C8(&StringLiteral_11103/*"RarityAnimationName"*/, v9);
    sub_1B640C8(&StringLiteral_15097/*"UpAnimationName"*/, v10);
    sub_1B640C8(&StringLiteral_7570/*"InitializeAnimationName"*/, v11);
    byte_49F8D41 = 1;
  }
  SummonEffectComponent_TypeInfo->static_fields->RANKUP_NONE_ANIMATION = (struct System_String_o *)StringLiteral_23582/*"summon_up_01"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SummonEffectComponent_TypeInfo->static_fields,
    StringLiteral_23582/*"summon_up_01"*/,
    v2,
    v3);
  v12 = StringLiteral_23583/*"summon_up_02"*/;
  static_fields = SummonEffectComponent_TypeInfo->static_fields;
  static_fields->RANKUP_TO_SILVER_ANIMATION = (struct System_String_o *)StringLiteral_23583/*"summon_up_02"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->RANKUP_TO_SILVER_ANIMATION, v12, v14, v15);
  v16 = StringLiteral_23584/*"summon_up_03"*/;
  v17 = SummonEffectComponent_TypeInfo->static_fields;
  v17->RANKUP_TO_GOLD_ANIMATION = (struct System_String_o *)StringLiteral_23584/*"summon_up_03"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->RANKUP_TO_GOLD_ANIMATION, v16, v18, v19);
  v20 = StringLiteral_23585/*"summon_up_04"*/;
  v21 = SummonEffectComponent_TypeInfo->static_fields;
  v21->RANKUP_COMMANDCODE_ANIMATION = (struct System_String_o *)StringLiteral_23585/*"summon_up_04"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->RANKUP_COMMANDCODE_ANIMATION, v20, v22, v23);
  v24 = StringLiteral_15097/*"UpAnimationName"*/;
  v25 = SummonEffectComponent_TypeInfo->static_fields;
  v25->FSM_VARIABLE_UP_ANIMATION_NAME = (struct System_String_o *)StringLiteral_15097/*"UpAnimationName"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->FSM_VARIABLE_UP_ANIMATION_NAME, v24, v26, v27);
  v28 = StringLiteral_7570/*"InitializeAnimationName"*/;
  v29 = SummonEffectComponent_TypeInfo->static_fields;
  v29->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME = (struct System_String_o *)StringLiteral_7570/*"InitializeAnimationName"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME, v28, v30, v31);
  v32 = StringLiteral_11103/*"RarityAnimationName"*/;
  v33 = SummonEffectComponent_TypeInfo->static_fields;
  v33->FSM_VARIABLE_RARITY_ANIMATION_NAME = (struct System_String_o *)StringLiteral_11103/*"RarityAnimationName"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->FSM_VARIABLE_RARITY_ANIMATION_NAME, v32, v34, v35);
  v36 = StringLiteral_6965/*"GetAnimationName"*/;
  v37 = SummonEffectComponent_TypeInfo->static_fields;
  v37->FSM_VARIABLE_GET_ANIMATION_NAME = (struct System_String_o *)StringLiteral_6965/*"GetAnimationName"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->FSM_VARIABLE_GET_ANIMATION_NAME, v36, v38, v39);
  v40 = SummonEffectComponent_TypeInfo->static_fields;
  v40->rarityToColor = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->rarityToColor, 0, v41, v42);
}


void __fastcall SummonEffectComponent___ctor(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  il2cpp_array_size_t max_length; // w8
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49F8D40 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49F8D40 = 1;
  }
  v4 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 2LL);
  if ( !v4 )
    sub_1B64324(0LL);
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = 512, max_length == 1) )
    sub_1B6432C(v4, v4);
  v4->m_Items[2] = 875;
  this->fields.cardTextureSize = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cardTextureSize, (int32_t)v4, v5, v6);
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.effAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effAnimName, v8, v9, v10);
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
  __int64 v20; // x24
  __int64 v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_49F8D30 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__, *(_QWORD *)&servantId);
    sub_1B640C8(&SummonEffectComponent_SummonInfo_TypeInfo, v18);
    byte_49F8D30 = 1;
  }
  SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  if ( !SummonInfos )
  {
    SummonEffectComponent__Initialize(this, *(const MethodInfo **)&servantId);
    SummonInfos = (System_Collections_Generic_List_object__o *)this->fields.SummonInfos;
  }
  v20 = sub_1B64314(SummonEffectComponent_SummonInfo_TypeInfo, *(_QWORD *)&servantId, *(_QWORD *)&limitCount);
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
        v25 = Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__Add__,
        ++SummonInfos->fields._version,
        !items) )
  {
    sub_1B64324(v21);
  }
  size = SummonInfos->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      SummonInfos,
      (Il2CppObject *)v20,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    SummonInfos->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), v20, v22, v23);
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
  if ( (byte_49F8D39 & 1) == 0 )
  {
    this = (SummonEffectComponent_o *)sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITexture___, cardNode);
    byte_49F8D39 = 1;
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
                                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL)
    || (v9 = (UITexture_o *)this,
        this = (SummonEffectComponent_o *)((__int64 (__fastcall *)(SummonEffectComponent_o *, UnityEngine_Texture2D_o *, const char *))this->klass[2]._1.gc_desc)(
                                            this,
                                            v8,
                                            this->klass[2]._1.name),
        (cardTextureSize = v6->fields.cardTextureSize) == 0LL) )
  {
LABEL_10:
    sub_1B64324(this);
  }
  if ( cardTextureSize->max_length <= 1 )
LABEL_11:
    sub_1B6432C(this, cardNode);
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

  if ( (byte_49F8D3A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1B640C8(&StringLiteral_11903/*"SETUP_DONE"*/, v3);
    byte_49F8D3A = 1;
  }
  counterMax = this->fields._counterMax;
  v5 = this->fields._counter + 1;
  this->fields._counter = v5;
  if ( v5 >= counterMax )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1B64324(0LL);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_11903/*"SETUP_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__FadeIn(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  CommonUI_o *v4; // x19

  if ( (byte_49F8D32 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_49F8D32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1B64324(Instance);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  PlayMakerFSM_o *v21; // x20
  struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *SummonInfos; // x8
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x21
  struct System_Collections_Generic_List_string__o **p_upAnimationNameList; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_object__o *upAnimationNameList; // x21
  struct System_Object_array *items; // x8
  Il2CppObject *v36; // x1
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x8
  Il2CppObject *RANKUP_TO_SILVER_ANIMATION; // x1
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x8
  Il2CppObject *RANKUP_TO_GOLD_ANIMATION; // x1
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x8
  Il2CppObject *RANKUP_COMMANDCODE_ANIMATION; // x1
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  _BOOL8 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  int32_t klass; // w20
  AssetLoader_LoadEndDataHandler_o *v65; // x21
  int32_t klass_high; // w21
  int32_t ImageLimitCount; // w21
  __int64 v68; // x1
  __int64 v69; // x2
  AssetLoader_LoadEndDataHandler_o *v70; // x22
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F8D33 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Count__, v11);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B640C8(&Method_SummonEffectComponent_OnCharaGraphLoadDone__, v15);
    sub_1B640C8(&SummonEffectComponent_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_7993/*"IsNoSkip"*/, v17);
    sub_1B640C8(&StringLiteral_18212/*"countMax"*/, v18);
    sub_1B640C8(&StringLiteral_13013/*"SummonEffectAnimation"*/, v19);
    byte_49F8D33 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_46;
  v21 = (PlayMakerFSM_o *)Component_object;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_18212/*"countMax"*/,
                              0LL);
  SummonInfos = this->fields.SummonInfos;
  if ( !SummonInfos )
    goto LABEL_46;
  if ( !Component_object )
    goto LABEL_46;
  Component_object[14] = SummonInfos->fields._size;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v21, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_7993/*"IsNoSkip"*/,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  *((_BYTE *)Component_object + 56) = this->fields.isNoSkip;
  Component_object = (int *)PlayMakerFSM__get_FsmVariables(v21, 0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                              (System_String_o *)StringLiteral_13013/*"SummonEffectAnimation"*/,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  Component_object = (int *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                              (HutongGames_PlayMaker_FsmGameObject_o *)Component_object,
                              0LL);
  if ( !Component_object )
    goto LABEL_46;
  v23 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)Component_object,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.effAnimation = (struct UnityEngine_Animation_o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effAnimation, (int32_t)v23, v24, v25);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.upAnimationNameList = (struct System_Collections_Generic_List_string__o *)v28;
  p_upAnimationNameList = &this->fields.upAnimationNameList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.upAnimationNameList, (int32_t)v28, v30, v31);
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
  v36 = (Il2CppObject *)**((_QWORD **)Component_object + 23);
  v37 = Method_System_Collections_Generic_List_string__Add__;
  ++upAnimationNameList->fields._version;
  if ( !items )
    goto LABEL_46;
  size = upAnimationNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      upAnimationNameList,
      v36,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    upAnimationNameList->fields._size = size + 1;
    v39[4] = (Il2CppClass *)v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v36, v32, v33);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v42 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_SILVER_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_SILVER_ANIMATION;
  v44 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v42 )
    goto LABEL_46;
  v45 = Component_object[6];
  if ( (unsigned int)v45 >= *(_DWORD *)(v42 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_SILVER_ANIMATION,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = v42 + 8 * v45;
    Component_object[6] = v45 + 1;
    *(_QWORD *)(v46 + 32) = RANKUP_TO_SILVER_ANIMATION;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 32), (int32_t)RANKUP_TO_SILVER_ANIMATION, v40, v41);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v49 = *((_QWORD *)Component_object + 2);
  RANKUP_TO_GOLD_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_TO_GOLD_ANIMATION;
  v51 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v49 )
    goto LABEL_46;
  v52 = Component_object[6];
  if ( (unsigned int)v52 >= *(_DWORD *)(v49 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_TO_GOLD_ANIMATION,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = v49 + 8 * v52;
    Component_object[6] = v52 + 1;
    *(_QWORD *)(v53 + 32) = RANKUP_TO_GOLD_ANIMATION;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 32), (int32_t)RANKUP_TO_GOLD_ANIMATION, v47, v48);
  }
  Component_object = (int *)*p_upAnimationNameList;
  if ( !*p_upAnimationNameList )
    goto LABEL_46;
  v56 = *((_QWORD *)Component_object + 2);
  RANKUP_COMMANDCODE_ANIMATION = (Il2CppObject *)SummonEffectComponent_TypeInfo->static_fields->RANKUP_COMMANDCODE_ANIMATION;
  v58 = Method_System_Collections_Generic_List_string__Add__;
  ++Component_object[7];
  if ( !v56 )
    goto LABEL_46;
  v59 = Component_object[6];
  if ( (unsigned int)v59 >= *(_DWORD *)(v56 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      RANKUP_COMMANDCODE_ANIMATION,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = v56 + 8 * v59;
    Component_object[6] = v59 + 1;
    *(_QWORD *)(v60 + 32) = RANKUP_COMMANDCODE_ANIMATION;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 32), (int32_t)RANKUP_COMMANDCODE_ANIMATION, v54, v55);
  }
  Component_object = (int *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Component_object
    || (CommonUI__SetLoadMode((CommonUI_o *)Component_object, 1, 0LL),
        (Component_object = (int *)this->fields.SummonInfos) == 0LL) )
  {
LABEL_46:
    sub_1B64324(Component_object);
  }
  this->fields.DownloadCounter = Component_object[6];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)Component_object,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__GetEnumerator__);
  v72 = v71;
  while ( 1 )
  {
    v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__MoveNext__);
    if ( !v61 )
      break;
    if ( !v72.fields._current )
      sub_1B64324(v61);
    klass = (int32_t)v72.fields._current[1].klass;
    if ( HIDWORD(v72.fields._current[2].klass) == 3 )
    {
      v65 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v62, v63);
      AssetLoader_LoadEndDataHandler___ctor(
        v65,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadCommandAsset(klass, v65, 0LL);
    }
    else
    {
      klass_high = HIDWORD(v72.fields._current[1].klass);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(klass, klass_high, 0LL);
      v70 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v68, v69);
      AssetLoader_LoadEndDataHandler___ctor(
        v70,
        (Il2CppObject *)this,
        Method_SummonEffectComponent_OnCharaGraphLoadDone__,
        0LL);
      CharaGraphManager__DownloadAsset(klass, ImageLimitCount, v70, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SummonEffectComponent_SummonInfo__Dispose__);
}


void __fastcall SummonEffectComponent__Initialize(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F8D2F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo, v4);
    byte_49F8D2F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_SummonEffectComponent_SummonInfo__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo___ctor__);
  this->fields.SummonInfos = (struct System_Collections_Generic_List_SummonEffectComponent_SummonInfo__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SummonInfos, (int32_t)v5, v6, v7);
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

  if ( (byte_49F8D34 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, loadData);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_7345/*"INIT_DONE"*/, v5);
    byte_49F8D34 = 1;
  }
  v6 = this->fields.DownloadCounter - 1;
  this->fields.DownloadCounter = v6;
  if ( !v6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL),
          (Instance = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0LL) )
    {
      sub_1B64324(Instance);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7345/*"INIT_DONE"*/, 0LL);
  }
}


void __fastcall SummonEffectComponent__OnClickSkipEvent(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0

  if ( (byte_49F8D3F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1B640C8(&StringLiteral_5684/*"EVENT_SKIP"*/, v3);
    byte_49F8D3F = 1;
  }
  if ( !this->fields.isNoSkipAll )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    if ( !Component_object )
      sub_1B64324(0LL);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5684/*"EVENT_SKIP"*/, 0LL);
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
  struct System_Collections_Generic_List_string__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F8D35 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_49F8D35 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  releaseAssetPath = this->fields._releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v14.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v11 = this->fields._releaseAssetPath;
    if ( !v11 )
      sub_1B64324(v10);
    size = v11->fields._size;
    v13 = v11->fields._version + 1;
    v11->fields._size = 0;
    v11->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
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
  PlayMakerFSM_o *v8; // x20
  struct System_Collections_Generic_List_string__o *upAnimationNameList; // x8
  int32_t v10; // w1
  Il2CppObject *Item; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  HutongGames_PlayMaker_FsmVariables_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_o *effAnimName; // x1

  if ( (byte_49F8D3B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v4);
    sub_1B640C8(&SummonEffectComponent_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_11089/*"Rank"*/, v6);
    byte_49F8D3B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object
    || (v8 = (PlayMakerFSM_o *)Component_object,
        (Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL)) == 0LL)
    || (Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                             (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                             (System_String_o *)StringLiteral_11089/*"Rank"*/,
                             0LL)) == 0LL )
  {
LABEL_17:
    sub_1B64324(Component_object);
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
  v10 = (int)Component_object;
  if ( (int)Component_object >= upAnimationNameList->fields._size )
LABEL_11:
    v10 = 0;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.upAnimationNameList,
           v10,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.effAnimName = (struct System_String_o *)Item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effAnimName, (int32_t)Item, v12, v13);
  Component_object = PlayMakerFSM__get_FsmVariables(v8, 0LL);
  v14 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v14 )
    goto LABEL_17;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v14,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_UP_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_17;
  effAnimName = this->fields.effAnimName;
  *((_QWORD *)Component_object + 7) = effAnimName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)Component_object + 56), (int32_t)effAnimName, v15, v16);
}


void __fastcall SummonEffectComponent__SetUpInitializeAnimation(
        SummonEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *Component_object; // x0
  PlayMakerFSM_o *v6; // x19
  HutongGames_PlayMaker_FsmVariables_o *v7; // x20
  System_String_o *Value; // x0

  if ( (byte_49F8D3C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1B640C8(&SummonEffectComponent_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_7338/*"INITIALIZE_ANIMATION"*/, v4);
    byte_49F8D3C = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_10;
  v6 = Component_object;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0LL);
  v7 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v7
    || (Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                               v7,
                                               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                               0LL)) == 0LL )
  {
LABEL_10:
    sub_1B64324(Component_object);
  }
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) )
    PlayMakerFSM__SendEvent(v6, (System_String_o *)StringLiteral_7338/*"INITIALIZE_ANIMATION"*/, 0LL);
}


void __fastcall SummonEffectComponent__Start(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SummonEffectComponent_c *v6; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x19
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  SummonEffectComponent_c *v11; // x0
  struct SummonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_49F8D31 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__,
      method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo, v4);
    sub_1B640C8(&SummonEffectComponent_TypeInfo, v5);
    byte_49F8D31 = 1;
  }
  v6 = SummonEffectComponent_TypeInfo;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    v6 = SummonEffectComponent_TypeInfo;
  }
  if ( !v6->static_fields->rarityToColor )
  {
    v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__TypeInfo,
                                                                    method,
                                                                    v2);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
      v7,
      (const MethodInfo_313A8F4 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor___ctor__);
    if ( !v7 )
      sub_1B64324(v8);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v7,
      0,
      0,
      (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v7,
      1,
      0,
      (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v7,
      2,
      0,
      (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v7,
      3,
      1,
      (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v7,
      4,
      2,
      (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v7,
      5,
      2,
      (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v7,
      101,
      0,
      (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
      v7,
      102,
      0,
      (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__Add__);
    v11 = SummonEffectComponent_TypeInfo;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      v11 = SummonEffectComponent_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->rarityToColor = (struct System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__o *)v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->rarityToColor, (int32_t)v7, v9, v10);
  }
}


void __fastcall SummonEffectComponent__StopRarityAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *Component_object; // x0
  HutongGames_PlayMaker_FsmVariables_o *v7; // x20
  System_String_o *Value; // x0
  UnityEngine_Object_o *effAnimation; // x21
  System_String_o *v10; // x20
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0

  if ( (byte_49F8D3E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&SoundManager_TypeInfo, v4);
    sub_1B640C8(&SummonEffectComponent_TypeInfo, v5);
    byte_49F8D3E = 1;
  }
  Component_object = (PlayMakerFSM_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(Component_object, 0LL);
  v7 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v7 )
    goto LABEL_22;
  Component_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                         v7,
                                         SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                                         0LL);
  if ( !Component_object )
    goto LABEL_22;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  effAnimation = (UnityEngine_Object_o *)this->fields.effAnimation;
  v10 = Value;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effAnimation, 0LL, 0LL) && !System_String__IsNullOrEmpty(v10, 0LL) )
  {
    Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
    if ( Component_object )
    {
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)Component_object, v10, 0LL) )
        return;
      Component_object = (PlayMakerFSM_o *)this->fields.effAnimation;
      if ( Component_object )
      {
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)Component_object,
                                                   v10,
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
    sub_1B64324(Component_object);
  }
}


void __fastcall SummonEffectComponent__StopUpAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *effAnimation; // x20
  UnityEngine_Animation_o *ComponentsInChildren_object; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  float length; // s0
  __int64 v8; // x1
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v10; // x19
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v12; // x20

  if ( (byte_49F8D3D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____75728096, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F8D3D = 1;
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
    sub_1B64324(ComponentsInChildren_object);
  }
LABEL_14:
  ComponentsInChildren_object = this->fields.effAnimation;
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  ComponentsInChildren_object = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                             1,
                                                             (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____75728096);
  if ( !ComponentsInChildren_object )
    goto LABEL_27;
  klass = ComponentsInChildren_object[1].klass;
  v10 = ComponentsInChildren_object;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1B6432C(ComponentsInChildren_object, v8);
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
  PlayMakerFSM_o *v16; // x20
  int32_t v17; // w21
  int v18; // w28
  int v19; // w27
  char v20; // w26
  int v21; // w25
  int v22; // w23
  int v23; // w22
  int v24; // w24
  char v25; // w21
  HutongGames_PlayMaker_FsmVariables_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int v33; // w9
  int v34; // w22
  UnityEngine_Object_o *firstTr; // x20
  UnityEngine_Object_o *firstTPeelr; // x20

  if ( (byte_49F8D37 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&SummonEffectComponent_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_7992/*"IsNewCard"*/, v6);
    sub_1B640C8(&StringLiteral_18211/*"countIndex"*/, v7);
    sub_1B640C8(&StringLiteral_8005/*"IsRankUp"*/, v8);
    sub_1B640C8(&StringLiteral_8009/*"IsSkipStop"*/, v9);
    sub_1B640C8(&StringLiteral_8364/*"LimitCount"*/, v10);
    sub_1B640C8(&StringLiteral_9525/*"NoticeRarity"*/, v11);
    sub_1B640C8(&StringLiteral_4366/*"CardType"*/, v12);
    sub_1B640C8(&StringLiteral_11101/*"Rarity"*/, v13);
    sub_1B640C8(&StringLiteral_12573/*"ServantId"*/, v14);
    byte_49F8D37 = 1;
  }
  this->fields.isNoSkipAll = 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_66;
  v16 = (PlayMakerFSM_o *)Component_object;
  Component_object = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_18211/*"countIndex"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = (void *)HutongGames_PlayMaker_FsmInt__get_Value(
                               (HutongGames_PlayMaker_FsmInt_o *)Component_object,
                               0LL);
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v17 = (int)Component_object;
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       (int32_t)Component_object,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v18 = *((_DWORD *)Component_object + 4);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v17,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v19 = *((_DWORD *)Component_object + 5);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v17,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v20 = *((_BYTE *)Component_object + 24);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v17,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v21 = *((unsigned __int8 *)Component_object + 25);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v17,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v22 = *((_DWORD *)Component_object + 7);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v17,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v23 = *((_DWORD *)Component_object + 8);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v17,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  if ( !this->fields.SummonInfos )
    goto LABEL_66;
  v24 = *((_DWORD *)Component_object + 9);
  Component_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                       v17,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_66;
  v25 = *((_BYTE *)Component_object + 40);
  Component_object = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_12573/*"ServantId"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v18;
  Component_object = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8364/*"LimitCount"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v19;
  Component_object = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8005/*"IsRankUp"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v20;
  Component_object = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_8009/*"IsSkipStop"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v25;
  Component_object = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  v26 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v26 )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       v26,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)Component_object + 56), 0, v27, v28);
  Component_object = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)Component_object + 56), 0, v29, v30);
  Component_object = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_QWORD *)Component_object + 7) = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)Component_object + 56), 0, v31, v32);
  Component_object = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_7992/*"IsNewCard"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_BYTE *)Component_object + 56) = v21 != 0 || v23 == 0;
  Component_object = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_9525/*"NoticeRarity"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v22;
  Component_object = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_4366/*"CardType"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  if ( v23 )
    v33 = 0;
  else
    v33 = 3;
  *((_DWORD *)Component_object + 14) = v24;
  if ( v23 == 3 )
    v33 = 1;
  v34 = (v23 & 0xFFFFFFFE) == 4 ? 2 : v33;
  Component_object = PlayMakerFSM__get_FsmVariables(v16, 0LL);
  if ( !Component_object )
    goto LABEL_66;
  Component_object = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                       (System_String_o *)StringLiteral_11101/*"Rarity"*/,
                       0LL);
  if ( !Component_object )
    goto LABEL_66;
  *((_DWORD *)Component_object + 14) = v34;
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
      sub_1B64324(Component_object);
    }
  }
}


void __fastcall SummonEffectComponent__UpdateCardTexture(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v75; // x1
  __int64 v76; // x21
  __int64 Component_object; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  PlayMakerFSM_o *v80; // x23
  int32_t v81; // w19
  int v82; // w28
  int v83; // w26
  int v84; // w22
  int32_t v85; // w25
  char v86; // w27
  const MethodInfo *v87; // x1
  __int64 v88; // x1
  __int64 v89; // x2
  System_Collections_Generic_List_object__o *v90; // x19
  int32_t v91; // w2
  int32_t v92; // w3
  HutongGames_PlayMaker_FsmVariables_o *v93; // x19
  int32_t v94; // w2
  int32_t v95; // w3
  int v96; // w22
  HutongGames_PlayMaker_FsmVariables_o *v97; // x19
  HutongGames_PlayMaker_FsmString_o *FsmString; // x19
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
  __int64 v123; // x1
  UnityEngine_Transform_o *v124; // x22
  int32_t Item; // w25
  _BOOL4 v126; // w29
  System_Collections_Generic_List_object__o *GachaBehaviors; // x0
  System_Collections_Generic_List_object__o *v128; // x22
  System_Collections_Generic_Dictionary_object__object__o *v129; // x26
  __int64 *v130; // x22
  GachaBehaviorMaster_c *v131; // x0
  int v132; // w29
  Il2CppObject *v133; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  __int64 v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  __int64 v139; // x8
  int32_t v140; // w0
  GachaBehaviorMaster_c *v141; // x0
  GachaBehaviorMaster_c *v142; // x0
  int v143; // w8
  GachaBehaviorMaster_c *v144; // x0
  GachaBehaviorMaster_c *v145; // x0
  int v146; // w8
  GachaBehaviorMaster_c *v147; // x0
  GachaBehaviorMaster_c *v148; // x0
  int v149; // w8
  GachaBehaviorMaster_c *v150; // x0
  GachaBehaviorMaster_c *v151; // x0
  int v152; // w8
  GachaBehaviorMaster_c *v153; // x0
  _BOOL4 v154; // w10
  HutongGames_PlayMaker_FsmVariables_o *v155; // x22
  HutongGames_PlayMaker_FsmString_o *v156; // x0
  GachaBehaviorMaster_c *v157; // x8
  int32_t v158; // w2
  int32_t v159; // w3
  __int64 v160; // x8
  GachaBehaviorMaster_c *v161; // x0
  HutongGames_PlayMaker_FsmVariables_o *v162; // x22
  HutongGames_PlayMaker_FsmString_o *v163; // x0
  GachaBehaviorMaster_c *v164; // x8
  int32_t v165; // w2
  int32_t v166; // w3
  GachaBehaviorMaster_c *v167; // x0
  HutongGames_PlayMaker_FsmVariables_o *v168; // x22
  HutongGames_PlayMaker_FsmString_o *v169; // x0
  GachaBehaviorMaster_c *v170; // x8
  int32_t v171; // w2
  int32_t v172; // w3
  UnityEngine_Object_o *prevObject; // x22
  struct UnityEngine_GameObject_o **p_prevObject; // x26
  int v175; // w9
  int32_t v176; // w8
  UnityEngine_Object_o *v177; // x22
  int32_t v178; // w2
  int32_t v179; // w3
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v181; // x1
  __int64 v182; // x2
  System_Action_o *v183; // x28
  bool v184; // w28
  __int64 v185; // x1
  __int64 v186; // x2
  UnityEngine_GameObject_o *v187; // x22
  Il2CppObject *v188; // x28
  System_Action_o *v189; // x25
  System_Action_o *v190; // x25
  UnityEngine_Component_o *v191; // x22
  __int64 v192; // x1
  UnityEngine_Transform_o *v193; // x28
  UnityEngine_GameObject_o *v194; // x0
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *v197; // x24
  System_String_o *v198; // x22
  UnityEngine_Transform_o *v199; // x0
  UnityEngine_Component_o *v200; // x26
  UnityEngine_Transform_o *v201; // x0
  UnityEngine_Component_o *v202; // x24
  __int64 v203; // x1
  __int64 v204; // x2
  int32_t v205; // w22
  int v206; // w8
  UnityEngine_Transform_o *v207; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  const MethodInfo *v209; // x3
  UnityEngine_Transform_o *v210; // x0
  UnityEngine_Transform_o *v211; // x0
  const MethodInfo *v212; // x3
  UnityEngine_Transform_o *v213; // x0
  UnityEngine_Transform_o *v214; // x1
  const MethodInfo *v215; // x3
  SummonEffectComponent_o *v216; // x0
  int32_t v217; // w2
  System_String_o *v218; // x0
  System_String_o *v219; // x19
  System_String_o *v220; // x0
  System_String_o *v221; // x0
  int32_t v222; // w2
  int32_t v223; // w3
  System_Collections_Generic_List_object__o *v224; // x8
  struct System_Object_array *items; // x9
  _QWORD *v226; // x10
  __int64 size; // x11
  System_String_o *v228; // x19
  Il2CppClass **v229; // x0
  __int64 v230; // x1
  __int64 v231; // x2
  UnityEngine_Transform_o *v232; // x0
  UnityEngine_Transform_o *v233; // x0
  UnityEngine_Transform_o *v234; // x0
  const MethodInfo *v235; // x3
  const MethodInfo *v236; // x1
  __int64 v237; // x24
  int32_t v238; // w2
  int32_t v239; // w3
  Il2CppObject *v240; // x19
  __int64 v241; // x1
  __int64 v242; // x2
  int v243; // w8
  int32_t v244; // w19
  __int64 v245; // x21
  int32_t v246; // w2
  int32_t v247; // w3
  Il2CppObject **v248; // x20
  int32_t LowerColorRarity; // w0
  int32_t v250; // w22
  int v251; // w8
  __int64 v252; // x20
  int32_t v253; // w2
  int32_t v254; // w3
  Il2CppObject **v255; // x21
  int v256; // w8
  System_String_o *DesignCardPath; // x22
  int32_t v258; // w2
  int32_t v259; // w3
  __int64 v260; // x8
  _QWORD *v261; // x9
  __int64 v262; // x10
  __int64 v263; // x8
  __int64 v264; // x1
  __int64 v265; // x2
  AssetLoader_LoadEndDataHandler_o *v266; // x20
  int32_t v267; // w2
  int32_t v268; // w3
  System_Collections_Generic_List_object__o *v269; // x8
  struct System_Object_array *v270; // x9
  _QWORD *v271; // x10
  __int64 v272; // x11
  System_String_o *v273; // x19
  Il2CppClass **v274; // x0
  __int64 v275; // x1
  __int64 v276; // x2
  AssetLoader_LoadEndDataHandler_o *v277; // x20
  Il2CppObject *v278; // x24
  AssetLoader_LoadEndDataHandler_o *v279; // x23
  _DWORD *monitor; // x8
  System_String_o **v281; // x8
  int32_t *v282; // x21
  System_String_o *v283; // x19
  int32_t v284; // w2
  int32_t v285; // w3
  __int64 v286; // x8
  _QWORD *v287; // x9
  __int64 v288; // x10
  __int64 v289; // x8
  __int64 v290; // x1
  __int64 v291; // x2
  AssetLoader_LoadEndDataHandler_o *v292; // x21
  System_String_o *v293; // x0
  AssetLoader_LoadEndDataHandler_o *v294; // x1
  System_String_o *v295; // x23
  int32_t v296; // w2
  int32_t v297; // w3
  __int64 v298; // x8
  _QWORD *v299; // x9
  __int64 v300; // x10
  __int64 v301; // x8
  __int64 v302; // x1
  __int64 v303; // x2
  AssetLoader_LoadEndDataHandler_o *v304; // x24
  System_String_o *v305; // x22
  int32_t v306; // w2
  int32_t v307; // w3
  __int64 v308; // x8
  _QWORD *v309; // x9
  __int64 v310; // x10
  __int64 v311; // x8
  __int64 v312; // x1
  __int64 v313; // x2
  AssetLoader_LoadEndDataHandler_o *v314; // x23
  int32_t v315; // w2
  int32_t v316; // w3
  __int64 v317; // x8
  _QWORD *v318; // x9
  __int64 v319; // x10
  __int64 v320; // x8
  __int64 v321; // x1
  __int64 v322; // x2
  Il2CppObject *v323; // x21
  SummonEffectComponent___c__DisplayClass45_0_o *v324; // x0
  const MethodInfo *v325; // x1
  int v326; // [xsp+Ch] [xbp-D4h]
  int v327; // [xsp+10h] [xbp-D0h]
  int v328; // [xsp+14h] [xbp-CCh]
  int v329; // [xsp+18h] [xbp-C8h]
  _BOOL4 v330; // [xsp+1Ch] [xbp-C4h]
  int v331; // [xsp+34h] [xbp-ACh]
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // [xsp+38h] [xbp-A8h]
  int64_t v333; // [xsp+40h] [xbp-A0h]
  int32_t v334; // [xsp+50h] [xbp-90h]
  int key; // [xsp+54h] [xbp-8Ch]
  int32_t v336; // [xsp+58h] [xbp-88h]
  int32_t svtId; // [xsp+5Ch] [xbp-84h]
  int v338; // [xsp+60h] [xbp-80h] BYREF
  int v339; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v341; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v342; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v343; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v344; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v345; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8D38 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AssetManager_TypeInfo, v4);
    sub_1B640C8(&AtlasManager_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v6);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v7);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITexture___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaBehaviorMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v15);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v18);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__,
      v19);
    sub_1B640C8(&GachaBehaviorMaster_TypeInfo, v20);
    sub_1B640C8(&int_TypeInfo, v21);
    sub_1B640C8(&long_TypeInfo, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__IndexOf__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Count__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__, v29);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v30);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v31);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v32);
    sub_1B640C8(&Rarity_TypeInfo, v33);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v35);
    sub_1B640C8(&string_TypeInfo, v36);
    sub_1B640C8(&SummonEffectComponent_TypeInfo, v37);
    sub_1B640C8(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__, v38);
    sub_1B640C8(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__, v39);
    sub_1B640C8(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__, v40);
    sub_1B640C8(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__, v41);
    sub_1B640C8(&Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__, v42);
    sub_1B640C8(&SummonEffectComponent___c__DisplayClass45_0_TypeInfo, v43);
    sub_1B640C8(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__, v44);
    sub_1B640C8(&Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__, v45);
    sub_1B640C8(&SummonEffectComponent___c__DisplayClass45_1_TypeInfo, v46);
    sub_1B640C8(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__, v47);
    sub_1B640C8(&Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__, v48);
    sub_1B640C8(&SummonEffectComponent___c__DisplayClass45_2_TypeInfo, v49);
    sub_1B640C8(&Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__, v50);
    sub_1B640C8(&SummonEffectComponent___c__DisplayClass45_3_TypeInfo, v51);
    sub_1B640C8(&StringLiteral_4362/*"CardScale"*/, v52);
    sub_1B640C8(&StringLiteral_4363/*"CardSecondName"*/, v53);
    sub_1B640C8(&StringLiteral_4354/*"CardFirstName"*/, v54);
    sub_1B640C8(&StringLiteral_7992/*"IsNewCard"*/, v55);
    sub_1B640C8(&StringLiteral_4361/*"CardRotName"*/, v56);
    sub_1B640C8(&StringLiteral_4530/*"CodeCardRarity02"*/, v57);
    sub_1B640C8(&StringLiteral_2773/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v58);
    sub_1B640C8(&StringLiteral_11089/*"Rank"*/, v59);
    sub_1B640C8(&StringLiteral_18211/*"countIndex"*/, v60);
    sub_1B640C8(&StringLiteral_13011/*"SummonEffect"*/, v61);
    sub_1B640C8(&StringLiteral_22693/*"rarity"*/, v62);
    sub_1B640C8(&StringLiteral_8005/*"IsRankUp"*/, v63);
    sub_1B640C8(&StringLiteral_16055/*"_0"*/, v64);
    sub_1B640C8(&StringLiteral_4529/*"CodeCardRarity"*/, v65);
    sub_1B640C8(&StringLiteral_8009/*"IsSkipStop"*/, v66);
    sub_1B640C8(&StringLiteral_8364/*"LimitCount"*/, v67);
    sub_1B640C8(&StringLiteral_9525/*"NoticeRarity"*/, v68);
    sub_1B640C8(&StringLiteral_2772/*"BACKSIDE_CLASS_IMAGE_ID"*/, v69);
    sub_1B640C8(&StringLiteral_4366/*"CardType"*/, v70);
    sub_1B640C8(&StringLiteral_4360/*"CardNodeName"*/, v71);
    sub_1B640C8(&StringLiteral_4355/*"CardFirstPeelName"*/, v72);
    sub_1B640C8(&StringLiteral_23576/*"summon_rarity_0"*/, v73);
    sub_1B640C8(&StringLiteral_11101/*"Rarity"*/, v74);
    sub_1B640C8(&StringLiteral_12573/*"ServantId"*/, v75);
    byte_49F8D38 = 1;
  }
  entity = 0LL;
  v339 = 0;
  v76 = sub_1B64314(SummonEffectComponent___c__DisplayClass45_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v76, 0LL);
  if ( !v76 )
    goto LABEL_376;
  *(_QWORD *)(v76 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 16), (int32_t)this, v78, v79);
  this->fields.isNoSkipAll = 0;
  Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    goto LABEL_376;
  v80 = (PlayMakerFSM_o *)Component_object;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_18211/*"countIndex"*/,
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
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  svtId = *(_DWORD *)(Component_object + 16);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v336 = *(_DWORD *)(Component_object + 20);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v82 = *(unsigned __int8 *)(Component_object + 24);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v83 = *(unsigned __int8 *)(Component_object + 25);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v84 = *(_DWORD *)(Component_object + 28);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v85 = *(_DWORD *)(Component_object + 32);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(v76 + 56) = *(_DWORD *)(Component_object + 36);
  Component_object = (__int64)this->fields.SummonInfos;
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Component_object,
                                v81,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !this->fields.SummonInfos )
    goto LABEL_376;
  v86 = *(_BYTE *)(Component_object + 40);
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)this->fields.SummonInfos,
                                v81,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonEffectComponent_SummonInfo__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v333 = *(_QWORD *)(Component_object + 48);
  SummonEffectComponent__ReleasePrevAsset(this, v87);
  v90 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v88,
                                                       v89);
  System_Collections_Generic_List_object____ctor(
    v90,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v90;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._releaseAssetPath, (int32_t)v90, v91, v92);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_12573/*"ServantId"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = svtId;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8364/*"LimitCount"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v336;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8005/*"IsRankUp"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v82;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_8009/*"IsSkipStop"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v86;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  v93 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v93 )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                v93,
                                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_QWORD *)(Component_object + 56) = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(Component_object + 56), 0, v94, v95);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_7992/*"IsNewCard"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_BYTE *)(Component_object + 56) = v83 != 0 || v85 == 0;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_9525/*"NoticeRarity"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v84;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4366/*"CardType"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = *(_DWORD *)(v76 + 56);
  if ( (unsigned int)(v85 - 3) >= 3 )
    v96 = v85 ? 0 : 3;
  else
    v96 = dword_BDBEEC[v85 - 3];
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_11101/*"Rarity"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = v96;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  v97 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  key = v85;
  if ( !v97 )
    goto LABEL_376;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                v97,
                SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
                0LL);
  v338 = v96;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v338);
  Component_object = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_23576/*"summon_rarity_0"*/, v99, 0LL);
  if ( !FsmString )
    goto LABEL_376;
  FsmString->fields.value = (struct System_String_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&FsmString->fields.value, Component_object, v100, v101);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_13011/*"SummonEffect"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, 0LL);
  this->fields.effect = Value;
  p_effect = &this->fields.effect;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effect, (int32_t)Value, v104, v105);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4360/*"CardNodeName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v106 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4362/*"CardScale"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v107 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)Component_object, 0LL);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4354/*"CardFirstName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v108 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v76 + 24) = v108;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 24), (int32_t)v108, v109, v110);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4355/*"CardFirstPeelName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v111 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v76 + 32) = v111;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 32), (int32_t)v111, v112, v113);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  p_releaseAssetPath = &this->fields._releaseAssetPath;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4363/*"CardSecondName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v114 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v76 + 40) = v114;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 40), (int32_t)v114, v115, v116);
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4361/*"CardRotName"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  v117 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
  *(_QWORD *)(v76 + 48) = v117;
  v118 = (System_String_o **)(v76 + 48);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 48), (int32_t)v117, v119, v120);
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
  v124 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7116 )
  {
    Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v123);
    byte_49F7116 = 1;
  }
  if ( !v124 )
    goto LABEL_376;
  UnityEngine_Transform__set_localScale(v124, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Component_object = (__int64)SummonEffectComponent_TypeInfo->static_fields->rarityToColor;
  if ( !Component_object )
    goto LABEL_376;
  Item = System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)Component_object,
           v85,
           (const MethodInfo_313B21C *)Method_System_Collections_Generic_Dictionary_Rarity_TYPE__SummonEffectComponent_CardColor__get_Item__);
  Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Component_object,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaBehaviorMaster___);
  if ( !Component_object )
    goto LABEL_376;
  v126 = v82 != 0 && Item != 0;
  GachaBehaviors = (System_Collections_Generic_List_object__o *)GachaBehaviorMaster__GetGachaBehaviors(
                                                                  (GachaBehaviorMaster_o *)Component_object,
                                                                  this->fields.gachaId,
                                                                  svtId,
                                                                  0LL);
  v334 = Item;
  if ( !GachaBehaviors || (v128 = GachaBehaviors, GachaBehaviors->fields._size < 1) )
  {
    v327 = -1;
    v328 = -1;
    v326 = -1;
    v331 = -1;
    v329 = -1;
    goto LABEL_185;
  }
  v330 = v82 != 0 && Item != 0;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                GachaBehaviors,
                                0,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( !*(_QWORD *)(Component_object + 24) )
  {
    v327 = -1;
    v328 = -1;
    v326 = -1;
    v331 = -1;
    v329 = -1;
    goto LABEL_184;
  }
  if ( v83 )
    this->fields.isNoSkipAll = 1;
  Component_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                v128,
                                0,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  v129 = *(System_Collections_Generic_Dictionary_object__object__o **)(Component_object + 24);
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
  if ( !v129 )
    goto LABEL_376;
  v130 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v129,
         (Il2CppObject *)GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v131 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v131 = GachaBehaviorMaster_TypeInfo;
    }
    v133 = System_Collections_Generic_Dictionary_object__object___get_Item(
             v129,
             (Il2CppObject *)v131->static_fields->SCRIPT_KEY_RANKUP_ANIMATION,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v130 = (__int64 *)v133;
    if ( v133 && (System_String_c *)v133->klass != string_TypeInfo )
      goto LABEL_379;
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)v130,
            (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      Component_object = (__int64)this->fields.upAnimationNameList;
      if ( !Component_object )
        goto LABEL_376;
      v136 = *(_QWORD *)(Component_object + 16);
      v137 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v136 )
        goto LABEL_376;
      v138 = *(int *)(Component_object + 24);
      if ( (unsigned int)v138 >= *(_DWORD *)(v136 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v130,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
      }
      else
      {
        v139 = v136 + 8 * v138;
        *(_DWORD *)(Component_object + 24) = v138 + 1;
        *(_QWORD *)(v139 + 32) = v130;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v139 + 32), (int32_t)v130, v134, v135);
      }
    }
    Component_object = (__int64)this->fields.upAnimationNameList;
    if ( !Component_object )
      goto LABEL_376;
    v140 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)Component_object,
             (Il2CppObject *)v130,
             (const MethodInfo_34AE414 *)Method_System_Collections_Generic_List_string__IndexOf__);
    v130 = &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
    v132 = v140;
  }
  else
  {
    v132 = -1;
  }
  v141 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v141 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v129,
         (Il2CppObject *)v141->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v142 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v142 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v129,
                                  (Il2CppObject *)v142->static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v143 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v143 = -1;
  }
  v144 = GachaBehaviorMaster_TypeInfo;
  v331 = v143;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v144 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v129,
         (Il2CppObject *)v144->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v145 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v145 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v129,
                                  (Il2CppObject *)v145->static_fields->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v146 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v146 = -1;
  }
  v147 = GachaBehaviorMaster_TypeInfo;
  v326 = v146;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v147 = GachaBehaviorMaster_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v129,
         (Il2CppObject *)v147->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v148 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v148 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v129,
                                  (Il2CppObject *)v148->static_fields->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Component_object )
      goto LABEL_376;
    if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
      goto LABEL_377;
    v149 = *(_DWORD *)j_il2cpp_object_unbox_0();
  }
  else
  {
    v149 = -1;
  }
  v150 = GachaBehaviorMaster_TypeInfo;
  v328 = v149;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v150 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v129,
          (Il2CppObject *)v150->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v152 = -1;
    goto LABEL_142;
  }
  v151 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v151 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v129,
                                (Il2CppObject *)v151->static_fields->SCRIPT_KEY_RANKUP_AFTER_RARITY,
                                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Component_object )
    goto LABEL_376;
  if ( *(Il2CppClass **)(*(_QWORD *)Component_object + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_377:
    sub_1B645E4(Component_object);
    goto LABEL_378;
  }
  v152 = *(_DWORD *)j_il2cpp_object_unbox_0();
LABEL_142:
  v153 = GachaBehaviorMaster_TypeInfo;
  v154 = v82 != 0 && Item != 0;
  v327 = v152;
  if ( v132 != -1 )
    v154 = v331 != -1;
  v330 = v154;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v153 = GachaBehaviorMaster_TypeInfo;
  }
  v329 = v132;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v129,
         (Il2CppObject *)v153->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_9525/*"NoticeRarity"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    *(_DWORD *)(Component_object + 56) = 3;
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
    v155 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
    if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
    if ( !v155 )
      goto LABEL_376;
    v156 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
             v155,
             SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_RARITY_ANIMATION_NAME,
             0LL);
    v157 = GachaBehaviorMaster_TypeInfo;
    v130 = (__int64 *)v156;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v157 = GachaBehaviorMaster_TypeInfo;
    }
    Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v129,
                                  (Il2CppObject *)v157->static_fields->SCRIPT_KEY_RARITY_ANIMATION,
                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v130 )
      goto LABEL_376;
    v160 = Component_object;
    if ( Component_object && *(System_String_c **)Component_object != string_TypeInfo )
      goto LABEL_378;
    v130[7] = Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v130 + 7), Component_object, v158, v159);
  }
  v161 = GachaBehaviorMaster_TypeInfo;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v161 = GachaBehaviorMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v129,
          (Il2CppObject *)v161->static_fields->SCRIPT_KEY_GET_ANIMATION,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_172:
    v167 = GachaBehaviorMaster_TypeInfo;
    if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
      v167 = GachaBehaviorMaster_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v129,
           (Il2CppObject *)v167->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
      v168 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
      if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
      if ( !v168 )
        goto LABEL_376;
      v169 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
               v168,
               SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_INITIALIZE_ANIMATION_NAME,
               0LL);
      v170 = GachaBehaviorMaster_TypeInfo;
      v130 = (__int64 *)v169;
      if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
        v170 = GachaBehaviorMaster_TypeInfo;
      }
      v126 = v330;
      Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    v129,
                                    (Il2CppObject *)v170->static_fields->SCRIPT_KEY_INITIALIZE_ANIMATION,
                                    (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v130 )
        goto LABEL_376;
      v160 = Component_object;
      if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
      {
        v130[7] = Component_object;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v130 + 7), Component_object, v171, v172);
        goto LABEL_185;
      }
      goto LABEL_378;
    }
LABEL_184:
    v126 = v330;
LABEL_185:
    p_prevObject = &this->fields.prevObject;
    prevObject = (UnityEngine_Object_o *)this->fields.prevObject;
    if ( v126 )
      v175 = 4;
    else
      v175 = 3;
    if ( this->fields.EditMode )
      v176 = 0;
    else
      v176 = v175;
    this->fields._counter = 0;
    this->fields._counterMax = v176;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(prevObject, 0LL, 0LL) )
    {
      v177 = (UnityEngine_Object_o *)*p_prevObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v177, 0LL);
      *p_prevObject = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.prevObject, 0, v178, v179);
    }
    if ( *(_DWORD *)(v76 + 56) == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v122, 0LL);
      v183 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v181, v182);
      System_Action___ctor(
        v183,
        (Il2CppObject *)v76,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__0__,
        0LL);
      Component_object = (__int64)CharaGraphManager__CreateCommandTexturePrefab(gameObject, svtId, 0, v183, 0LL);
    }
    else
    {
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      entity = 0LL;
      if ( !Component_object )
        goto LABEL_376;
      v184 = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               &entity,
               v333,
               (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      v187 = UnityEngine_Component__get_gameObject(v122, 0LL);
      if ( v184 )
      {
        v188 = entity;
        v189 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v185, v186);
        System_Action___ctor(
          v189,
          (Il2CppObject *)v76,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__1__,
          0LL);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab_37591480(
                                      v187,
                                      (UserServantEntity_o *)v188,
                                      0,
                                      v189,
                                      0LL);
      }
      else
      {
        v190 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v185, v186);
        System_Action___ctor(
          v190,
          (Il2CppObject *)v76,
          Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__2__,
          0LL);
        Component_object = (__int64)CharaGraphManager__CreateTexturePrefab(v187, svtId, v336, 0, 1, 0, v190, 0, 0LL);
      }
    }
    v191 = (UnityEngine_Component_o *)Component_object;
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
    v193 = (UnityEngine_Transform_o *)Component_object;
    if ( !byte_49F7111 )
    {
      Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v192);
      byte_49F7111 = 1;
    }
    if ( !v193 )
      goto LABEL_376;
    UnityEngine_Transform__set_localPosition(v193, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Component_object = (__int64)UnityEngine_Component__get_transform(v191, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    v341.fields.x = v107;
    v341.fields.y = v107;
    v341.fields.z = v107;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v341, 0LL);
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v122,
                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    v194 = UnityEngine_Component__get_gameObject(v191, 0LL);
    *p_prevObject = v194;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.prevObject, (int32_t)v194, v195, v196);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4529/*"CodeCardRarity"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    v197 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Component_object, 0LL);
    Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                  (System_String_o *)StringLiteral_4530/*"CodeCardRarity02"*/,
                                  0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)Component_object,
                                  0LL);
    if ( !*p_effect )
      goto LABEL_376;
    v198 = (System_String_o *)Component_object;
    v199 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
    Component_object = (__int64)TransformHelper__getNodeFromName(v199, v197, 1, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !*p_effect )
      goto LABEL_376;
    v200 = (UnityEngine_Component_o *)Component_object;
    v201 = UnityEngine_GameObject__get_transform(*p_effect, 0LL);
    Component_object = (__int64)TransformHelper__getNodeFromName(v201, v198, 1, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)Component_object,
                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !v200 )
      goto LABEL_376;
    v202 = (UnityEngine_Component_o *)Component_object;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v200, 0LL);
    if ( !Component_object )
      goto LABEL_376;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
    if ( !v202 )
      goto LABEL_376;
    Component_object = (__int64)UnityEngine_Component__get_gameObject(v202, 0LL);
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
                                    (System_String_o *)StringLiteral_11089/*"Rank"*/,
                                    0LL);
      if ( v126 )
      {
        v205 = v334;
        if ( !Component_object )
          goto LABEL_376;
        v206 = v334 == 2 ? 2 : 1;
        *(_DWORD *)(Component_object + 56) = v206;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v207 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        NodeFromName = TransformHelper__getNodeFromName(v207, *(System_String_o **)(v76 + 24), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, NodeFromName, v334 - 1, v209);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v210 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v211 = TransformHelper__getNodeFromName(v210, *(System_String_o **)(v76 + 32), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, v211, v334 - 1, v212);
        Component_object = (__int64)this->fields.effect;
        if ( !Component_object )
          goto LABEL_376;
        v213 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v214 = TransformHelper__getNodeFromName(v213, *v118, 1, 0LL);
        v216 = this;
        v217 = v334 - 1;
      }
      else
      {
        v205 = v334;
        if ( !Component_object )
          goto LABEL_376;
        *(_DWORD *)(Component_object + 56) = 0;
        Component_object = (__int64)*p_effect;
        if ( !*p_effect )
          goto LABEL_376;
        v232 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v214 = TransformHelper__getNodeFromName(v232, *v118, 1, 0LL);
        v216 = this;
        v217 = v334;
      }
      SummonEffectComponent__ChangeClassCardColor(v216, v214, v217, v215);
      Component_object = (__int64)this->fields.effect;
      if ( Component_object )
      {
        v233 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Component_object, 0LL);
        v234 = TransformHelper__getNodeFromName(v233, *(System_String_o **)(v76 + 40), 1, 0LL);
        SummonEffectComponent__ChangeClassCardColor(this, v234, v205, v235);
        SummonEffectComponent__CompleteCallback(this, v236);
        return;
      }
LABEL_376:
      sub_1B64324(Component_object);
    }
    if ( *(_DWORD *)(v76 + 56) == 3 )
    {
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11089/*"Rank"*/,
                                    0LL);
      if ( !Component_object )
        goto LABEL_376;
      *(_DWORD *)(Component_object + 56) = 3;
      v339 = key;
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v200, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
      v218 = System_Int32__ToString((int32_t)&v339, 0LL);
      v219 = System_String__Concat_61386656(
               (System_String_o *)StringLiteral_22693/*"rarity"*/,
               v218,
               (System_String_o *)StringLiteral_16055/*"_0"*/,
               0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v200, v219, 0LL);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v200->klass[2]._1.typeMetadataHandle)(
        v200,
        v200->klass[2]._1.interopData);
      Component_object = (__int64)UnityEngine_Component__get_gameObject(v202, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
      v220 = System_Int32__ToString((int32_t)&v339, 0LL);
      v221 = System_String__Concat_61386656(
               (System_String_o *)StringLiteral_22693/*"rarity"*/,
               v220,
               (System_String_o *)StringLiteral_16055/*"_0"*/,
               0LL);
      AtlasManager__SetCharaGraphaOption((UISprite_o *)v202, v221, 0LL);
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))v202->klass[2]._1.typeMetadataHandle)(
        v202,
        v202->klass[2]._1.interopData);
      Component_object = (__int64)UnityEngine_Component__get_transform(v200, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v342.fields.x = 0.0;
      v342.fields.z = 0.0;
      v342.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v342, 0LL);
      Component_object = (__int64)UnityEngine_Component__get_transform(v200, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v343.fields.x = v107;
      v343.fields.y = v107;
      v343.fields.z = v107;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v343, 0LL);
      Component_object = (__int64)UnityEngine_Component__get_transform(v202, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v344.fields.x = 0.0;
      v344.fields.z = 0.0;
      v344.fields.y = 216.81;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v344, 0LL);
      Component_object = (__int64)UnityEngine_Component__get_transform(v202, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      v345.fields.x = v107;
      v345.fields.y = v107;
      v345.fields.z = v107;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Component_object, v345, 0LL);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    1,
                                    key,
                                    0LL);
      v224 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      items = v224->fields._items;
      v226 = Method_System_Collections_Generic_List_string__Add__;
      ++v224->fields._version;
      if ( !items )
        goto LABEL_376;
      size = v224->fields._size;
      v228 = (System_String_o *)Component_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v224,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v226[4] + 192LL) + 112LL));
      }
      else
      {
        v229 = &items->obj.klass + size;
        v224->fields._size = size + 1;
        v229[4] = (Il2CppClass *)v228;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v229 + 4), (int32_t)v228, v222, v223);
      }
      v266 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v230, v231);
      AssetLoader_LoadEndDataHandler___ctor(
        v266,
        (Il2CppObject *)v76,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__3__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v228, v266, 1, 0LL);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DesignCardManager__GetCommanCodeCardPath(
                                    (DesignCardManager_o *)Component_object,
                                    101,
                                    key,
                                    0LL);
      v269 = (System_Collections_Generic_List_object__o *)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v270 = v269->fields._items;
      v271 = Method_System_Collections_Generic_List_string__Add__;
      ++v269->fields._version;
      if ( !v270 )
        goto LABEL_376;
      v272 = v269->fields._size;
      v273 = (System_String_o *)Component_object;
      if ( (unsigned int)v272 >= v270->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v269,
          (Il2CppObject *)Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v271[4] + 192LL) + 112LL));
      }
      else
      {
        v274 = &v270->obj.klass + v272;
        v269->fields._size = v272 + 1;
        v274[4] = (Il2CppClass *)v273;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v274 + 4), (int32_t)v273, v267, v268);
      }
      v277 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v275, v276);
      AssetLoader_LoadEndDataHandler___ctor(
        v277,
        (Il2CppObject *)v76,
        Method_SummonEffectComponent___c__DisplayClass45_0__UpdateCardTexture_b__4__,
        0LL);
    }
    else
    {
      v237 = sub_1B64314(SummonEffectComponent___c__DisplayClass45_1_TypeInfo, v203, v204);
      System_Object___ctor((Il2CppObject *)v237, 0LL);
      if ( !v237 )
        goto LABEL_376;
      *(_QWORD *)(v237 + 24) = v76;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v237 + 24), v76, v238, v239);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Component_object )
        goto LABEL_376;
      v240 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
               svtId,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Component_object )
        goto LABEL_376;
      ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Component_object, svtId, v336, 0LL);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Component_object,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( !v240 )
        goto LABEL_376;
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Component_object,
                                    (int32_t)v240[5].klass,
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !Component_object )
        goto LABEL_376;
      v243 = *(_DWORD *)(Component_object + 40);
      if ( v328 != -1 )
        v243 = v328;
      *(_DWORD *)(v237 + 16) = v243;
      if ( v327 == -1 )
        v244 = key;
      else
        v244 = v327;
      if ( !v126 )
      {
        v252 = sub_1B64314(SummonEffectComponent___c__DisplayClass45_3_TypeInfo, v241, v242);
        System_Object___ctor((Il2CppObject *)v252, 0LL);
        if ( !v252 )
          goto LABEL_376;
        *(_QWORD *)(v252 + 24) = v237;
        v255 = (Il2CppObject **)(v252 + 24);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v252 + 24), v237, v253, v254);
        Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
        if ( !Component_object )
          goto LABEL_376;
        Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                      (System_String_o *)StringLiteral_11089/*"Rank"*/,
                                      0LL);
        if ( !Component_object )
          goto LABEL_376;
        v256 = v329;
        if ( v329 == -1 )
          v256 = 0;
        *(_DWORD *)(Component_object + 56) = v256;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v255 || !Component_object )
          goto LABEL_376;
        DesignCardPath = DesignCardManager__GetDesignCardPath(
                           (DesignCardManager_o *)Component_object,
                           (int32_t)(*v255)[1].klass,
                           v244,
                           0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__isExistAssetStorage(DesignCardPath, 0LL);
        if ( (Component_object & 1) == 0 )
        {
          if ( !*v255 )
            goto LABEL_376;
          LODWORD((*v255)[1].klass) = 1;
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !*v255 || !Component_object )
            goto LABEL_376;
          v244 = 3;
          DesignCardPath = DesignCardManager__GetDesignCardPath(
                             (DesignCardManager_o *)Component_object,
                             (int32_t)(*v255)[1].klass,
                             3,
                             0LL);
        }
        Component_object = (__int64)*p_releaseAssetPath;
        if ( !*p_releaseAssetPath )
          goto LABEL_376;
        v260 = *(_QWORD *)(Component_object + 16);
        v261 = Method_System_Collections_Generic_List_string__Add__;
        ++*(_DWORD *)(Component_object + 28);
        if ( !v260 )
          goto LABEL_376;
        v262 = *(int *)(Component_object + 24);
        if ( (unsigned int)v262 >= *(_DWORD *)(v260 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Component_object,
            (Il2CppObject *)DesignCardPath,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
        }
        else
        {
          v263 = v260 + 8 * v262;
          *(_DWORD *)(Component_object + 24) = v262 + 1;
          *(_QWORD *)(v263 + 32) = DesignCardPath;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v263 + 32), (int32_t)DesignCardPath, v258, v259);
        }
        v278 = *v255;
        v279 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v264, v265);
        AssetLoader_LoadEndDataHandler___ctor(
          v279,
          v278,
          Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__8__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        Component_object = AssetManager__loadAssetStorage(DesignCardPath, v279, 1, 0LL);
        if ( !*v255 )
          goto LABEL_376;
        monitor = (*v255)[1].monitor;
        if ( !monitor )
          goto LABEL_376;
        v281 = (System_String_o **)(monitor[14] == 1 ? &StringLiteral_2773/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/ : &StringLiteral_2772/*"BACKSIDE_CLASS_IMAGE_ID"*/);
        *(_DWORD *)(v252 + 16) = ConstantMaster__getValue(*v281, 0LL);
        v282 = (int32_t *)(v252 + 16);
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v283 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v282, v244, 0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( !AssetManager__isExistAssetStorage(v283, 0LL) )
        {
          Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
          if ( !Component_object )
            goto LABEL_376;
          v283 = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)Component_object, *v282, 3, 0LL);
        }
        Component_object = (__int64)*p_releaseAssetPath;
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
            (Il2CppObject *)v283,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v287[4] + 192LL) + 112LL));
        }
        else
        {
          v289 = v286 + 8 * v288;
          *(_DWORD *)(Component_object + 24) = v288 + 1;
          *(_QWORD *)(v289 + 32) = v283;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v289 + 32), (int32_t)v283, v284, v285);
        }
        v292 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v290, v291);
        AssetLoader_LoadEndDataHandler___ctor(
          v292,
          (Il2CppObject *)v252,
          Method_SummonEffectComponent___c__DisplayClass45_3__UpdateCardTexture_b__9__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v293 = v283;
        v294 = v292;
        goto LABEL_375;
      }
      v245 = sub_1B64314(SummonEffectComponent___c__DisplayClass45_2_TypeInfo, v241, v242);
      System_Object___ctor((Il2CppObject *)v245, 0LL);
      if ( !v245 )
        goto LABEL_376;
      *(_QWORD *)(v245 + 24) = v237;
      v248 = (Il2CppObject **)(v245 + 24);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v245 + 24), v237, v246, v247);
      if ( !*(_QWORD *)(v245 + 24) )
        goto LABEL_376;
      *(_DWORD *)(v245 + 16) = *(_DWORD *)(*(_QWORD *)(v245 + 24) + 16LL);
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      LowerColorRarity = Rarity__getLowerColorRarity(v244, 0LL);
      if ( v331 != -1 )
        *(_DWORD *)(v245 + 16) = v331;
      v250 = v326 == -1 ? LowerColorRarity : v326;
      Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
      if ( !Component_object )
        goto LABEL_376;
      Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                    (System_String_o *)StringLiteral_11089/*"Rank"*/,
                                    0LL);
      if ( v329 == -1 )
      {
        if ( !Component_object )
          goto LABEL_376;
        v251 = v334 == 2 ? 2 : 1;
      }
      else
      {
        v251 = v329;
        if ( !Component_object )
          goto LABEL_376;
      }
      *(_DWORD *)(Component_object + 56) = v251;
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v295 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v245 + 16),
               v250,
               0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__isExistAssetStorage(v295, 0LL) )
      {
        *(_DWORD *)(v245 + 16) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v250 = 3;
        v295 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v245 + 16),
                 3,
                 0LL);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v298 = *(_QWORD *)(Component_object + 16);
      v299 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v298 )
        goto LABEL_376;
      v300 = *(int *)(Component_object + 24);
      if ( (unsigned int)v300 >= *(_DWORD *)(v298 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v295,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v299[4] + 192LL) + 112LL));
      }
      else
      {
        v301 = v298 + 8 * v300;
        *(_DWORD *)(Component_object + 24) = v300 + 1;
        *(_QWORD *)(v301 + 32) = v295;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v301 + 32), (int32_t)v295, v296, v297);
      }
      v304 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v302, v303);
      AssetLoader_LoadEndDataHandler___ctor(
        v304,
        (Il2CppObject *)v245,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__5__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v295, v304, 1, 0LL);
      *(_DWORD *)(v245 + 20) = ConstantMaster__getValue((System_String_o *)StringLiteral_2772/*"BACKSIDE_CLASS_IMAGE_ID"*/, 0LL);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Component_object )
        goto LABEL_376;
      v305 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               *(_DWORD *)(v245 + 20),
               v250,
               0LL);
      if ( !AssetManager__isExistAssetStorage(v305, 0LL) )
      {
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Component_object )
          goto LABEL_376;
        v305 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 *(_DWORD *)(v245 + 20),
                 3,
                 0LL);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v308 = *(_QWORD *)(Component_object + 16);
      v309 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v308 )
        goto LABEL_376;
      v310 = *(int *)(Component_object + 24);
      if ( (unsigned int)v310 >= *(_DWORD *)(v308 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v305,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v309[4] + 192LL) + 112LL));
      }
      else
      {
        v311 = v308 + 8 * v310;
        *(_DWORD *)(Component_object + 24) = v310 + 1;
        *(_QWORD *)(v311 + 32) = v305;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v311 + 32), (int32_t)v305, v306, v307);
      }
      v314 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v312, v313);
      AssetLoader_LoadEndDataHandler___ctor(
        v314,
        (Il2CppObject *)v245,
        Method_SummonEffectComponent___c__DisplayClass45_2__UpdateCardTexture_b__6__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v305, v314, 1, 0LL);
      Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !*v248 || !Component_object )
        goto LABEL_376;
      v273 = DesignCardManager__GetDesignCardPath(
               (DesignCardManager_o *)Component_object,
               (int32_t)(*v248)[1].klass,
               v244,
               0LL);
      Component_object = AssetManager__isExistAssetStorage(v273, 0LL);
      if ( (Component_object & 1) == 0 )
      {
        if ( !*v248 )
          goto LABEL_376;
        LODWORD((*v248)[1].klass) = 1;
        Component_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !*v248 || !Component_object )
          goto LABEL_376;
        v273 = DesignCardManager__GetDesignCardPath(
                 (DesignCardManager_o *)Component_object,
                 (int32_t)(*v248)[1].klass,
                 3,
                 0LL);
      }
      Component_object = (__int64)*p_releaseAssetPath;
      if ( !*p_releaseAssetPath )
        goto LABEL_376;
      v317 = *(_QWORD *)(Component_object + 16);
      v318 = Method_System_Collections_Generic_List_string__Add__;
      ++*(_DWORD *)(Component_object + 28);
      if ( !v317 )
        goto LABEL_376;
      v319 = *(int *)(Component_object + 24);
      if ( (unsigned int)v319 >= *(_DWORD *)(v317 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v273,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v318[4] + 192LL) + 112LL));
      }
      else
      {
        v320 = v317 + 8 * v319;
        *(_DWORD *)(Component_object + 24) = v319 + 1;
        *(_QWORD *)(v320 + 32) = v273;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v320 + 32), (int32_t)v273, v315, v316);
      }
      v323 = *v248;
      v277 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v321, v322);
      AssetLoader_LoadEndDataHandler___ctor(
        v277,
        v323,
        Method_SummonEffectComponent___c__DisplayClass45_1__UpdateCardTexture_b__7__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    v293 = v273;
    v294 = v277;
LABEL_375:
    AssetManager__loadAssetStorage(v293, v294, 1, 0LL);
    return;
  }
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  if ( !Component_object )
    goto LABEL_376;
  Component_object = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                (System_String_o *)StringLiteral_4366/*"CardType"*/,
                                0LL);
  if ( !Component_object )
    goto LABEL_376;
  *(_DWORD *)(Component_object + 56) = 4;
  Component_object = (__int64)PlayMakerFSM__get_FsmVariables(v80, 0LL);
  v162 = (HutongGames_PlayMaker_FsmVariables_o *)Component_object;
  if ( !SummonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonEffectComponent_TypeInfo);
  if ( !v162 )
    goto LABEL_376;
  v163 = HutongGames_PlayMaker_FsmVariables__GetFsmString(
           v162,
           SummonEffectComponent_TypeInfo->static_fields->FSM_VARIABLE_GET_ANIMATION_NAME,
           0LL);
  v164 = GachaBehaviorMaster_TypeInfo;
  v130 = (__int64 *)v163;
  if ( !GachaBehaviorMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBehaviorMaster_TypeInfo);
    v164 = GachaBehaviorMaster_TypeInfo;
  }
  Component_object = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                v129,
                                (Il2CppObject *)v164->static_fields->SCRIPT_KEY_GET_ANIMATION,
                                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v130 )
    goto LABEL_376;
  v160 = Component_object;
  if ( !Component_object || *(System_String_c **)Component_object == string_TypeInfo )
  {
    v130[7] = Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v130 + 7), Component_object, v165, v166);
    goto LABEL_172;
  }
LABEL_378:
  sub_1B645E4(v160);
LABEL_379:
  sub_1B645E4(v130);
  SummonEffectComponent___c__DisplayClass45_0___ctor(v324, v325);
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

  if ( (byte_49F8D42 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_5449/*"END_FADE"*/, v4);
    byte_49F8D42 = 1;
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
    UnityEngine_Object__Destroy_69127736(v7, 0LL);
    *p_effect = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effect, 0, v8, v9);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  if ( !Component_object )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Component_object, (System_String_o *)StringLiteral_5449/*"END_FADE"*/, 0LL);
}


void __fastcall SummonEffectComponent__endAnimation(SummonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_49F8D36 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SummonEffectComponent__endAnimation_b__43_0__, v5);
    byte_49F8D36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonEffectComponent__endAnimation_b__43_0__, 0LL);
  if ( !v10 )
    sub_1B64324(v13);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, v12, 0LL);
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
    sub_1B64324(0LL);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__1(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  SummonEffectComponent__CompleteCallback(_4__this, method);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_0___UpdateCardTexture_b__2(
        SummonEffectComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  SummonEffectComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
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
  const MethodInfo *v20; // x1

  v4 = this;
  if ( (byte_49F8D43 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1B640C8(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d);
    byte_49F8D43 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.firstTr, (int32_t)NodeFromName, v8, v9);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)v10->fields.effect;
  if ( !this )
    goto LABEL_16;
  v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v12 = TransformHelper__getNodeFromName(v11, v4->fields.cardFirstPeelName, 1, 0LL);
  v10->fields.firstTPeelr = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.firstTPeelr, (int32_t)v12, v13, v14);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v15->fields.firstTr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v16 = v4->fields.__4__this;
  if ( !v16 )
    goto LABEL_16;
  if ( !this )
    goto LABEL_16;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v16->fields.firstTPeelr, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1B64324(this);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, v20);
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
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Material_o *v15; // x21
  UnityEngine_Texture_o *v16; // x22
  const MethodInfo *v17; // x1

  v4 = this;
  if ( (byte_49F8D44 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    this = (SummonEffectComponent___c__DisplayClass45_0_o *)sub_1B640C8(&StringLiteral_4932/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v7);
    byte_49F8D44 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)_4__this->fields.effect;
  if ( !this )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v4->fields.cardRotName, 1, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_11;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, 101, 0LL);
  if ( !NodeFromName )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4932/*"Custom/Sprite-MasterFigure (SoftClip)"*/, 0LL);
  v15 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v13, v14);
  UnityEngine_Material___ctor(v15, v12, 0LL);
  if ( !Component_object
    || (v16 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[26].method)(
                                         Component_object,
                                         Component_object->klass->vtable[27].methodPtr),
        this = (SummonEffectComponent___c__DisplayClass45_0_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_object->klass->vtable[25].method)(
                                                                  Component_object,
                                                                  v15,
                                                                  Component_object->klass->vtable[26].methodPtr),
        !v15)
    || (UnityEngine_Material__set_mainTexture(v15, v16, 0LL),
        (this = (SummonEffectComponent___c__DisplayClass45_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B64324(this);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, v17);
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
  struct SummonEffectComponent___c__DisplayClass45_0_o *CS___8__locals1; // x8
  struct SummonEffectComponent_o *_4__this; // x8
  DesignCardManager_o *v8; // x21
  struct SummonEffectComponent___c__DisplayClass45_0_o *v9; // x8
  const MethodInfo *v10; // x1
  struct SummonEffectComponent___c__DisplayClass45_0_o *v11; // x8

  if ( (byte_49F8D45 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_49F8D45 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v8 = (DesignCardManager_o *)Instance;
  Instance = _4__this->fields.effect;
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL),
        (v9 = this->fields.CS___8__locals1) == 0LL)
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v9->fields.cardSecondName,
                                                 1,
                                                 0LL),
        !v8)
    || (DesignCardManager__SetupCardImage(v8, d, (UnityEngine_Transform_o *)Instance, this->fields.classCardId, 0LL),
        (v11 = this->fields.CS___8__locals1) == 0LL)
    || (Instance = (UnityEngine_GameObject_o *)v11->fields.__4__this) == 0LL )
  {
LABEL_11:
    sub_1B64324(Instance);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v10);
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
  const MethodInfo *v25; // x1
  struct SummonEffectComponent___c__DisplayClass45_0_o *v26; // x8

  v4 = this;
  if ( (byte_49F8D46 & 1) == 0 )
  {
    this = (SummonEffectComponent___c__DisplayClass45_1_o *)sub_1B640C8(
                                                              &Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__,
                                                              d);
    byte_49F8D46 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.firstTr, (int32_t)NodeFromName, v9, v10);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->fields.firstTPeelr, (int32_t)v14, v15, v16);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  v18 = v17->fields.__4__this;
  if ( !v18 )
    goto LABEL_25;
  if ( !this )
    goto LABEL_25;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, v18->fields.firstTr, v4->fields.classCardId, 0LL);
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  this = (SummonEffectComponent___c__DisplayClass45_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
        (v26 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (SummonEffectComponent___c__DisplayClass45_1_o *)v26->fields.__4__this) == 0LL )
  {
LABEL_25:
    sub_1B64324(this);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, v25);
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

  if ( (byte_49F8D47 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_49F8D47 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
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
                                           0LL);
  if ( !v9 )
    goto LABEL_21;
  DesignCardManager__SetupCardImage(v9, d, (UnityEngine_Transform_o *)Instance, this->fields.beforeClassCardId, 0LL);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  v16 = this->fields.CS___8__locals2;
  if ( !v16
    || (v17 = v16->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v17->fields.cardFirstPeelName,
                                                 1,
                                                 0LL),
        !v15)
    || (DesignCardManager__SetupCardImage(
          v15,
          d,
          (UnityEngine_Transform_o *)Instance,
          this->fields.beforeClassCardId,
          0LL),
        (v19 = this->fields.CS___8__locals2) == 0LL)
    || (v20 = v19->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)v20->fields.__4__this) == 0LL )
  {
LABEL_21:
    sub_1B64324(Instance);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v18);
}


void __fastcall SummonEffectComponent___c__DisplayClass45_2___UpdateCardTexture_b__6(
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

  if ( (byte_49F8D48 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_49F8D48 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  v10 = this->fields.CS___8__locals2;
  if ( !v10
    || (v11 = v10->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(
                                                 (UnityEngine_Transform_o *)Instance,
                                                 v11->fields.cardRotName,
                                                 1,
                                                 0LL),
        !v9)
    || (DesignCardManager__SetupCardImage(v9, d, (UnityEngine_Transform_o *)Instance, this->fields.classBackId, 0LL),
        (v13 = this->fields.CS___8__locals2) == 0LL)
    || (v14 = v13->fields.CS___8__locals1) == 0LL
    || (Instance = (UnityEngine_GameObject_o *)v14->fields.__4__this) == 0LL )
  {
LABEL_14:
    sub_1B64324(Instance);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)Instance, v12);
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
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Material_o *v22; // x21
  UnityEngine_Texture_o *v23; // x22
  const MethodInfo *v24; // x1
  struct SummonEffectComponent___c__DisplayClass45_1_o *v25; // x8
  struct SummonEffectComponent___c__DisplayClass45_0_o *v26; // x8

  v4 = this;
  if ( (byte_49F8D49 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITexture___, d);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_15058/*"Unlit/Transparent Colored"*/, v7);
    this = (SummonEffectComponent___c__DisplayClass45_3_o *)sub_1B640C8(&StringLiteral_4932/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v8);
    byte_49F8D49 = 1;
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
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  DesignCardManager__SetupCardImage((DesignCardManager_o *)this, d, NodeFromName, v4->fields.backImageId, 0LL);
  if ( !NodeFromName )
    goto LABEL_22;
  this = (SummonEffectComponent___c__DisplayClass45_3_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)NodeFromName,
                                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v15 = v4->fields.CS___8__locals3;
  if ( !v15 )
    goto LABEL_22;
  v16 = v15->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_22;
  v17 = this;
  v18 = (System_String_o **)(v16->fields.cardType == 1 ? &StringLiteral_4932/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15058/*"Unlit/Transparent Colored"*/);
  v19 = UnityEngine_Shader__Find(*v18, 0LL);
  v22 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v20, v21);
  UnityEngine_Material___ctor(v22, v19, 0LL);
  if ( !v17
    || (v23 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, void *))v17->klass[1].vtable._3_ToString.method)(
                                         v17,
                                         v17->klass[2]._1.image),
        this = (SummonEffectComponent___c__DisplayClass45_3_o *)((__int64 (__fastcall *)(SummonEffectComponent___c__DisplayClass45_3_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v17->klass[1].vtable._2_GetHashCode.method)(
                                                                  v17,
                                                                  v22,
                                                                  v17->klass[1].vtable._3_ToString.methodPtr),
        !v22)
    || (UnityEngine_Material__set_mainTexture(v22, v23, 0LL), (v25 = v4->fields.CS___8__locals3) == 0LL)
    || (v26 = v25->fields.CS___8__locals1) == 0LL
    || (this = (SummonEffectComponent___c__DisplayClass45_3_o *)v26->fields.__4__this) == 0LL )
  {
LABEL_22:
    sub_1B64324(this);
  }
  SummonEffectComponent__CompleteCallback((SummonEffectComponent_o *)this, v24);
}