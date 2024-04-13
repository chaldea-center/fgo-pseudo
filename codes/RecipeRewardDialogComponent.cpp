void __fastcall RecipeRewardDialogComponent___ctor(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct UnityEngine_Color_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EC4DE & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Color___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v11, v12, v13);
    byte_42EC4DE = 1;
  }
  this->fields.iconScale = 0.85;
  v14 = (struct UnityEngine_Color_array *)sub_B5D5DC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.teaEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.teaEffectObjList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  *(_QWORD *)&this->fields.itemDispTime = 0xC3A83126FLL;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__CheckIsSerializeFieldNotNull(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipeRewardDialogComponent__ClickSkip(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x19
  RecipeRewardDialogComponent___c_c *v18; // x0
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__47_0; // x20
  Il2CppObject *v21; // x21
  struct RecipeRewardDialogComponent___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EC4D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_GameObject__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_RecipeRewardDialogComponent___c__ClickSkip_b__47_0__, v11, v12, v13);
    sub_B5D5C4(&RecipeRewardDialogComponent___c_TypeInfo, v14, v15, v16);
    byte_42EC4D9 = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    this->fields.isSkip = 1;
    teaEffectObjList = this->fields.teaEffectObjList;
    v18 = RecipeRewardDialogComponent___c_TypeInfo;
    if ( (BYTE3(RecipeRewardDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecipeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecipeRewardDialogComponent___c_TypeInfo);
      v18 = RecipeRewardDialogComponent___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__47_0;
    if ( !_9__47_0 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_GameObject__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__47_0,
        v21,
        Method_RecipeRewardDialogComponent___c__ClickSkip_b__47_0__,
        (const MethodInfo_258B320 *)Method_System_Action_GameObject___ctor__);
      v22 = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      v22->__9__47_0 = (struct System_Action_GameObject__o *)_9__47_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v22->__9__47_0,
        (System_Int32_array **)_9__47_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    if ( !teaEffectObjList )
      sub_B5D69C(v18, method);
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)teaEffectObjList,
      (System_Action_T__o *)_9__47_0,
      (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
}


void __fastcall RecipeRewardDialogComponent__EndClose(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *closeCallbackFunc; // x20

  if ( (byte_42EC4DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42EC4DB = 1;
  }
  RecipeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall RecipeRewardDialogComponent__Init(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__OnClickCloseButton(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v32; // x20
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC4DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_RecipeRewardDialogComponent_EndClose__, v23, v24, v25);
    sub_B5D5C4(&SoundManager_TypeInfo, v26, v27, v28);
    byte_42EC4DA = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B5D69C(0LL, v29);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v33,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v33.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v33,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_RecipeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v32, 0LL);
  }
}


void __fastcall RecipeRewardDialogComponent__OnClickSwitchShowMode(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v29; // x8
  UISprite_o *v30; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v39; // x20
  int size; // w8
  __int64 v41; // x0
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EC4DC & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23098/*"treasurechest_btn"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_23100/*"treasurechest_btn_on"*/, v23, v24, v25);
    byte_42EC4DC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v29 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23098/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23100/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v29, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v30 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v30, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B5D69C(viewChangeButton, v26);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !viewChangeButton )
        goto LABEL_30;
      goto LABEL_22;
    }
LABEL_32:
    v41 = sub_B5D6C8(viewChangeButton);
    sub_B5D668(v41, 0LL);
  }
  if ( max_length <= 1 )
    goto LABEL_32;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButton )
    goto LABEL_30;
LABEL_22:
  v42.fields.b = *p_a;
  v42.fields.g = *p_b;
  v42.fields.r = *p_g;
  v42.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v42, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v39 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v39 >= size )
      break;
    if ( size <= (unsigned int)v39 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v39];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v39;
        if ( resultItemObjList )
          continue;
      }
    }
    goto LABEL_30;
  }
}


void __fastcall RecipeRewardDialogComponent__Open(
        RecipeRewardDialogComponent_o *this,
        System_Int32_array *giftIds,
        BattleDropItem_array *pointRewards,
        EventRecipeEntity_o *eventRecipeEntity,
        EventRecipeGiftEntity_o *eventRecipeGiftEntity,
        System_Action_o *closeCallback,
        RecipeRewardDialogComponent_GetEffect_o *getEffect,
        const MethodInfo *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  __int64 v107; // x23
  void *viewChangeButton; // x0
  __int64 v109; // x1
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  WebViewObject_o *Component_WebViewObject; // x27
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v123; // x26
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v130; // x26
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x0
  UILabel_o *titleLabel; // x26
  UISprite_o *totalEventPointIcon; // x26
  int32_t eventPointItemId; // w27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x26
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v145; // x27
  Il2CppObject *v146; // x0
  System_String_o *v147; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v150; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v152; // x27
  Il2CppObject *v153; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v154; // x26
  void **v155; // x25
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  GiftEntity_o *v162; // x26
  System_Action_int__o *v163; // x25
  __int64 v164; // x8
  bool v165; // w21
  UILabel_o *v166; // x22
  __int64 *v167; // x8
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Collections_Generic_List_GiftEntity__o *v174; // x21
  System_Action_o *v175; // x22
  const MethodInfo *v176; // x4
  __int64 v177; // x0
  struct System_Action_o *v179; // [xsp+8h] [xbp-68h]
  __int64 v180; // [xsp+10h] [xbp-60h] BYREF
  int v181; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42EC4D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)giftIds, (_DWORD)pointRewards, eventRecipeEntity);
    sub_B5D5C4(&System_Action_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Action_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&AtlasManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_BasicHelper_ForEach_int___, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68825840, v32, v33, v34);
    sub_B5D5C4(&GiftEntity_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&int_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&long_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v56, v57, v58);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v62, v63, v64);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__0__, v68, v69, v70);
    sub_B5D5C4(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__1__, v71, v72, v73);
    sub_B5D5C4(&RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_13618/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_11176/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_11180/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_699/*"+"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_11174/*"RECIPE_EVENT_GET_POINT_NUM"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_23098/*"treasurechest_btn"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_13617/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_23104/*"treasurechest_img_bg_reward"*/, v101, v102, v103);
    sub_B5D5C4(&StringLiteral_11181/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, v104, v105, v106);
    byte_42EC4D5 = 1;
  }
  v107 = sub_B5D694(RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo);
  RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
    (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v107,
    0LL);
  if ( !v107 )
    goto LABEL_58;
  *(_QWORD *)(v107 + 24) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v107 + 24),
    (System_Int32_array **)this,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_58;
  v179 = closeCallback;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_23098/*"treasurechest_btn"*/, 0LL);
  this->fields.getEffect = getEffect;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.getEffect,
    (System_Int32_array **)getEffect,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  this->fields.isShowPossessionNum = 0;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v123 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v123,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v123;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v123,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  v130 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v130,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v130;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultIconHideObjList,
    (System_Int32_array **)v130,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  teaEffectObjList = this->fields.teaEffectObjList;
  if ( teaEffectObjList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)teaEffectObjList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  viewChangeButton = this->fields.skipCollider;
  if ( !viewChangeButton )
    goto LABEL_58;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)viewChangeButton, 1, 0LL);
  if ( !giftIds )
    goto LABEL_58;
  viewChangeButton = this->fields.getPointRoot;
  this->fields.maxPlayCnt = *(_QWORD *)&giftIds->max_length;
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11176/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
  if ( !eventRecipeEntity )
    goto LABEL_58;
  viewChangeButton = System_String__Format(
                       (System_String_o *)viewChangeButton,
                       (Il2CppObject *)eventRecipeEntity->fields.name,
                       0LL);
  if ( !titleLabel )
    goto LABEL_58;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  eventPointItemId = eventRecipeEntity->fields.eventPointItemId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_58;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23098/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_58;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_59;
  viewChangeButton = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_58;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11181/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_58;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11174/*"RECIPE_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_58;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v145 = LocalizationManager__Get((System_String_o *)StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v181 = this->fields.maxPlayCnt * eventRecipeEntity->fields.eventPointNum;
  v146 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181);
  v147 = System_String__Format(v145, v146, 0LL);
  viewChangeButton = System_String__Concat_44577788((System_String_o *)StringLiteral_699/*"+"*/, v147, 0LL);
  if ( !getNumLabel )
    goto LABEL_58;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  if ( !eventRecipeGiftEntity )
    goto LABEL_58;
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventRecipeGiftEntity->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v150 = EventPointNoGroup;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11180/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_58;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v152 = LocalizationManager__Get((System_String_o *)StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v180 = v150;
  v153 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v180);
  viewChangeButton = System_String__Format(v152, v153, 0LL);
  if ( !totalNumLabel )
    goto LABEL_58;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v154 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v154,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v107 + 16) = v154;
  v155 = (void **)(v107 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v107 + 16),
    (System_Int32_array **)v154,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  v162 = (GiftEntity_o *)sub_B5D694(GiftEntity_TypeInfo);
  GiftEntity___ctor(v162, 0LL);
  if ( !v162 )
    goto LABEL_58;
  v162->fields.type = 2;
  v162->fields.objectId = eventRecipeEntity->fields.eventPointItemId;
  v162->fields.num = eventRecipeEntity->fields.eventPointNum * giftIds->max_length;
  viewChangeButton = *v155;
  if ( !*v155 )
    goto LABEL_58;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)viewChangeButton,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v162,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
  v163 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v163,
    (Il2CppObject *)v107,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__0__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)giftIds,
    (System_Action_T__o *)v163,
    (const MethodInfo_1AD7A44 *)Method_BasicHelper_ForEach_int___);
  v164 = *(_QWORD *)(v107 + 16);
  if ( !v164 )
    goto LABEL_58;
  viewChangeButton = this->fields.scrollBar;
  this->fields.maxPlayCnt = *(_DWORD *)(v164 + 24);
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__GetComponent_WebViewObject_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !viewChangeButton )
    goto LABEL_58;
  UIProgressBar__set_value((UIProgressBar_o *)viewChangeButton, 0.0, 0LL);
  viewChangeButton = this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxPlayCnt > this->fields.maxItemDrawNum,
    0LL);
  v165 = pointRewards && pointRewards->max_length != 0;
  viewChangeButton = this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       1,
                       (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68825840);
  if ( !viewChangeButton )
    goto LABEL_58;
  if ( !*((_DWORD *)viewChangeButton + 6) )
  {
LABEL_59:
    v177 = sub_B5D6C8(viewChangeButton);
    sub_B5D668(v177, 0LL);
  }
  v166 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( v165 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v167 = &StringLiteral_13618/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v167 = &StringLiteral_13617/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  }
  viewChangeButton = LocalizationManager__Get((System_String_o *)*v167, 0LL);
  if ( !v166
    || (UILabel__set_text(v166, (System_String_o *)viewChangeButton, 0LL),
        this->fields.closeCallbackFunc = v179,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
          (System_Int32_array **)v179,
          v168,
          v169,
          v170,
          v171,
          v172,
          v173),
        (viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_58:
    sub_B5D69C(viewChangeButton, v109);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v174 = *(System_Collections_Generic_List_GiftEntity__o **)(v107 + 16);
  v175 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v175,
    (Il2CppObject *)v107,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__1__,
    0LL);
  RecipeRewardDialogComponent__SetResultData(this, v174, eventRecipeEntity, v175, v176);
}


void __fastcall RecipeRewardDialogComponent__SetResultData(
        RecipeRewardDialogComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftList,
        EventRecipeEntity_o *eventRecipeEntity,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x23
  UnityEngine_Component_o *scrollView; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v42; // x22

  if ( (byte_42EC4D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_GiftEntity___ctor__, (_DWORD)giftList, (_DWORD)eventRecipeEntity, callBack);
    sub_B5D5C4(&System_Action_GiftEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__ForEach__, v18, v19, v20);
    sub_B5D5C4(&Method_RecipeRewardDialogComponent___c__DisplayClass44_0__SetResultData_b__0__, v21, v22, v23);
    sub_B5D5C4(&RecipeRewardDialogComponent___c__DisplayClass44_0_TypeInfo, v24, v25, v26);
    byte_42EC4D6 = 1;
  }
  v27 = sub_B5D694(RecipeRewardDialogComponent___c__DisplayClass44_0_TypeInfo);
  RecipeRewardDialogComponent___c__DisplayClass44_0___ctor(
    (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_12;
  *(_QWORD *)(v27 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = eventRecipeEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v27 + 24),
    (System_Int32_array **)eventRecipeEntity,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_GiftEntity__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v42,
    (Il2CppObject *)v27,
    Method_RecipeRewardDialogComponent___c__DisplayClass44_0__SetResultData_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_GiftEntity___ctor__);
  if ( !giftList )
    goto LABEL_12;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)giftList,
    (System_Action_T__o *)v42,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_GiftEntity__ForEach__);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIScrollView___)) == 0LL
    || (UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.listRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.castClass)(
          scrollView,
          scrollView->klass[1]._1.declaringType),
        (scrollView = (UnityEngine_Component_o *)this->fields.iconListRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_B5D69C(scrollView, v29);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.castClass)(
    scrollView,
    scrollView->klass[1]._1.declaringType);
  ActionExtensions__Call(callBack, 0LL);
}


System_Collections_IEnumerator_o *__fastcall RecipeRewardDialogComponent__StartDisp(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EC4D7 & 1) == 0 )
  {
    sub_B5D5C4(&RecipeRewardDialogComponent__StartDisp_d__45_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC4D7 = 1;
  }
  v5 = sub_B5D694(RecipeRewardDialogComponent__StartDisp_d__45_TypeInfo);
  RecipeRewardDialogComponent__StartDisp_d__45___ctor((RecipeRewardDialogComponent__StartDisp_d__45_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall RecipeRewardDialogComponent__StartRewardAction(
        RecipeRewardDialogComponent_o *this,
        RecipeRewardDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42EC4D8 & 1) == 0 )
  {
    sub_B5D5C4(&RecipeRewardDialogComponent__StartRewardAction_d__46_TypeInfo, (_DWORD)rewardAction, (_DWORD)method, v3);
    byte_42EC4D8 = 1;
  }
  v6 = sub_B5D694(RecipeRewardDialogComponent__StartRewardAction_d__46_TypeInfo);
  RecipeRewardDialogComponent__StartRewardAction_d__46___ctor(
    (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = rewardAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)rewardAction,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent__get_closeBtnObject(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EC4DD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC4DD = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent_GetEffect___ctor(
        RecipeRewardDialogComponent_GetEffect_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall RecipeRewardDialogComponent_GetEffect__BeginInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)parenTransform;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__EndInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)sub_B5D56C(result, 0LL, method);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__Invoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  RecipeRewardDialogComponent_GetEffect_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  UnityEngine_Transform_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  UnityEngine_GameObject_o *result; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 (__fastcall **v27)(UnityEngine_Transform_o *, _QWORD); // x0
  __int64 v28; // x0
  __int64 (__fastcall **v29)(__int64 *, UnityEngine_Transform_o *, _QWORD); // x0
  RecipeRewardDialogComponent_GetEffect_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  __int64 (__fastcall *v33)(UnityEngine_Transform_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  UnityEngine_Transform_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  RecipeRewardDialogComponent_GetEffect_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v52;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (RecipeRewardDialogComponent_GetEffect_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v30 = v7[v8];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(__int64 (__fastcall **)(UnityEngine_Transform_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v30->fields.extra_arg, parenTransform, method);
      v34 = sub_B5D5F4(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B5D5EC(v31);
            v45 = sub_B5D9F0(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = parenTransform->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&parenTransform->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&parenTransform->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AF54C0(parenTransform, v48, v49, v46);
                }
                v16 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&parenTransform->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))sub_B5D674(v16, v31);
              result = (UnityEngine_GameObject_o *)(*v27)(parenTransform, v27);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v12 = parenTransform->klass;
                if ( *(_WORD *)&parenTransform->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&parenTransform->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(parenTransform, class_0, v9, v11);
                }
                result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v15)(
                                                       parenTransform,
                                                       *(_QWORD *)(v15 + 8));
              }
              else
              {
                result = (UnityEngine_GameObject_o *)(*((__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))&parenTransform->klass->vtable._0_Equals.method
                                                      + 2 * *(unsigned __int16 *)(v31 + 72)))(
                                                       parenTransform,
                                                       *((_QWORD *)&parenTransform->klass->vtable._1_Finalize.methodPtr
                                                       + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            goto LABEL_59;
          }
LABEL_58:
          result = (UnityEngine_GameObject_o *)v33(parenTransform, v31);
          goto LABEL_59;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B5D5EC(v31);
          v37 = sub_B5D9F0(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AF54C0(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))sub_B5D674(v25, v31);
            result = (UnityEngine_GameObject_o *)(*v29)(v32, parenTransform, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AF54C0(v32, v19, v18, v20);
              }
              result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))v24)(
                                                     v32,
                                                     parenTransform,
                                                     *(_QWORD *)(v24 + 8));
            }
            else
            {
              result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 312))(
                                                     v32,
                                                     parenTransform,
                                                     *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          goto LABEL_59;
        }
      }
      result = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(__int64 *, UnityEngine_Transform_o *, __int64))v33)(
                                             v32,
                                             parenTransform,
                                             v31);
LABEL_59:
      if ( ++v8 == v6 )
        return result;
    }
  }
  return 0LL;
}


void __fastcall RecipeRewardDialogComponent_RewardAction___ctor(
        RecipeRewardDialogComponent_RewardAction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__StartDisp_d__45___ctor(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall RecipeRewardDialogComponent__StartDisp_d__45__MoveNext(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  RecipeRewardDialogComponent__StartDisp_d__45_o *v8; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  bool result; // w0
  BattleServantConfConponent_o *p_listRewardAction_5__2; // x21
  _DWORD *listRewardAction_5__2; // x25
  int _4__this_high; // w8
  int32_t maxPlayCnt; // w9
  int v67; // w21
  UIProgressBar_o *v68; // x20
  float value; // s0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int v77; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v78; // x22
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  int v85; // w23
  __int64 v86; // x22
  __int64 v87; // x23
  __int64 v88; // x24
  int v89; // w8
  __int64 v90; // x22
  System_Collections_IEnumerator_o *started; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  int v98; // w8
  __int64 v99; // x8
  int32_t playCnt; // w8
  BattleServantConfConponent_c *klass; // x22
  __int64 v102; // x19
  int namespaze; // w8
  __int64 v104; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v106; // x19
  int size; // w8
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v110; // x20
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Collections_Generic_List_Enumerator_T__o v117; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_42E7F3F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__, v27, v28, v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Count__,
      v30,
      v31,
      v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v36, v37, v38);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__,
      v39,
      v40,
      v41);
    sub_B5D5C4(&System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&RecipeRewardDialogComponent_RewardAction_TypeInfo, v48, v49, v50);
    this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)sub_B5D5C4(
                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                               v51,
                                                               v52,
                                                               v53);
    byte_42E7F3F = 1;
  }
  memset(&v117, 0, sizeof(v117));
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v55 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v55, 0.3, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v55;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields.__2__current,
        (System_Int32_array **)v55,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      result = 1;
      v8->fields.__1__state = 1;
      return result;
    case 1:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&v8->fields._listRewardAction_5__2;
      v8->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&v8->fields._listRewardAction_5__2;
      listRewardAction_5__2 = v8->fields._listRewardAction_5__2;
      v8->fields.__1__state = -1;
      if ( !listRewardAction_5__2 )
        goto LABEL_35;
      goto LABEL_36;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_35;
      _4__this_high = HIDWORD(this->fields.__4__this);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.scrollBar;
      v67 = maxPlayCnt % _4__this_high ? maxPlayCnt / _4__this_high + 1 : maxPlayCnt / _4__this_high;
      if ( !this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_35;
      v68 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v68, (float)(1.0 / (float)((float)((float)v67 * 0.5) + -1.0)) + value, 0LL);
      v8->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(p__2__current, 0LL, v71, v72, v73, v74, v75, v76);
      v77 = 4;
      goto LABEL_84;
    case 4:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&v8->fields._listRewardAction_5__2;
      v8->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    p_listRewardAction_5__2->klass = 0LL;
    sub_B5D560(p_listRewardAction_5__2, 0LL, v2, v3, v4, v5, v6, v7);
LABEL_18:
    v78 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v78,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    p_listRewardAction_5__2->klass = (BattleServantConfConponent_c *)v78;
    sub_B5D560(p_listRewardAction_5__2, (System_Int32_array **)v78, v79, v80, v81, v82, v83, v84);
    if ( !_4__this )
      goto LABEL_35;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v85 = 0;
      while ( v85 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
      {
        v86 = sub_B5D694(RecipeRewardDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v86, 0LL);
        if ( !v86 )
          goto LABEL_35;
        *(_DWORD *)(v86 + 16) = v85;
        *(_DWORD *)(v86 + 20) = v85 + _4__this->fields.playCnt;
        this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)p_listRewardAction_5__2->klass;
        if ( !p_listRewardAction_5__2->klass )
          goto LABEL_35;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__);
        if ( ++v85 >= _4__this->fields.maxItemDrawNum )
          break;
      }
    }
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_35;
    _4__this->fields.playCnt += LODWORD(p_listRewardAction_5__2->klass->_1.namespaze);
    listRewardAction_5__2 = p_listRewardAction_5__2->klass;
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_35;
    v87 = 0LL;
    v88 = 32LL;
    while ( 1 )
    {
      v89 = listRewardAction_5__2[6];
      if ( (int)v87 >= v89 )
        break;
      if ( v89 <= (unsigned int)v87 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v90 = *(_QWORD *)(*((_QWORD *)listRewardAction_5__2 + 2) + v88);
      if ( listRewardAction_5__2[6] <= (unsigned int)v87 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      started = RecipeRewardDialogComponent__StartRewardAction(
                  _4__this,
                  *(RecipeRewardDialogComponent_RewardAction_o **)(*((_QWORD *)listRewardAction_5__2 + 2) + 8 * v87 + 32),
                  0LL);
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                                 (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                 started,
                                                                 0LL);
      if ( v90 )
      {
        *(_QWORD *)(v90 + 32) = this;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v90 + 32),
          (System_Int32_array **)this,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97);
        listRewardAction_5__2 = p_listRewardAction_5__2->klass;
        ++v87;
        v88 += 8LL;
        if ( p_listRewardAction_5__2->klass )
          continue;
      }
      goto LABEL_35;
    }
LABEL_36:
    v98 = listRewardAction_5__2[6];
    if ( !v98 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v99 = *(_QWORD *)(*((_QWORD *)listRewardAction_5__2 + 2) + 8LL * (v98 - 1) + 32);
    if ( !v99 )
      goto LABEL_35;
    if ( *(_BYTE *)(v99 + 24) )
    {
      if ( !_4__this )
        goto LABEL_35;
    }
    else
    {
      if ( !_4__this )
        goto LABEL_35;
      if ( !_4__this->fields.isSkip )
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B5D560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v77 = 2;
        goto LABEL_84;
      }
    }
    if ( _4__this->fields.isSkip )
      break;
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_68;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v110 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v110, scrollWait, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v110;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(p__2__current, (System_Int32_array **)v110, v111, v112, v113, v114, v115, v116);
      v77 = 3;
LABEL_84:
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v77;
      return (unsigned __int8)&dword_0 + 1;
    }
  }
  klass = p_listRewardAction_5__2->klass;
  if ( !p_listRewardAction_5__2->klass )
    goto LABEL_35;
  v102 = 0LL;
  while ( 1 )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( (int)v102 >= namespaze )
      break;
    if ( namespaze <= (unsigned int)v102 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v104 = *(_QWORD *)&klass->_1.name[8 * v102 + 32];
    if ( v104 )
    {
      UnityEngine_MonoBehaviour__StopCoroutine_35615756(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        *(UnityEngine_Coroutine_o **)(v104 + 32),
        0LL);
      klass = p_listRewardAction_5__2->klass;
      ++v102;
      if ( p_listRewardAction_5__2->klass )
        continue;
    }
    goto LABEL_35;
  }
  resultItemObjList = _4__this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_35;
  v106 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v106 >= size )
      break;
    if ( size <= (unsigned int)v106 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)resultItemObjList->fields._items->m_Items[v106];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      resultItemObjList = _4__this->fields.resultItemObjList;
      ++v106;
      if ( resultItemObjList )
        continue;
    }
    goto LABEL_35;
  }
  this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.scrollBar;
  _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
  if ( !this )
    goto LABEL_35;
  this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             (UnityEngine_Component_o *)this,
                                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !this )
    goto LABEL_35;
  UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
LABEL_68:
  this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.skipCollider;
  if ( !this
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL),
        (this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.resultIconHideObjList) == 0LL) )
  {
LABEL_35:
    sub_B5D69C(this, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v117,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v117,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v117.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v117,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return 0;
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartDisp_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RecipeRewardDialogComponent__StartDisp_d__45__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_RecipeRewardDialogComponent__StartDisp_d__45_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartDisp_d__45__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall RecipeRewardDialogComponent__StartDisp_d__45__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipeRewardDialogComponent__StartRewardAction_d__46___ctor(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecipeRewardDialogComponent__StartRewardAction_d__46__MoveNext(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RecipeRewardDialogComponent__StartRewardAction_d__46_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  struct RecipeRewardDialogComponent_o *_4__this; // x22
  int32_t i_5__2; // w8
  struct RecipeRewardDialogComponent_RewardAction_o *rewardAction; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v16; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  bool result; // w0
  struct RecipeRewardDialogComponent_RewardAction_o **p_rewardAction; // x19
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 playCnt; // x23
  RecipeRewardDialogComponent_GetEffect_o *getEffect; // x20
  const MethodInfo *v29; // x2
  UnityEngine_GameObject_o *v30; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v31; // x8
  struct System_Collections_Generic_List_GameObject__o *v32; // x23
  __int64 v33; // x24
  UnityEngine_Transform_o *v34; // x21
  int v35; // s0
  float v38; // s8
  UnityEngine_WaitForSeconds_o *v39; // x20
  BattleServantConfConponent_o *v40; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_Collections_Generic_List_GameObject__o *resultIconHideObjList; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v48; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v49; // t1
  __int64 v50; // x21
  struct System_Collections_Generic_List_GameObject__o *v51; // x20
  __int64 v52; // x21
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E7F40 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5, v6, v7);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)sub_B5D5C4(
                                                                       &UnityEngine_WaitForSeconds_TypeInfo,
                                                                       v8,
                                                                       v9,
                                                                       v10);
    byte_42E7F40 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      i_5__2 = v4->fields._i_5__2;
      v4->fields.__1__state = -1;
      _1__state = i_5__2 + 1;
      v4->fields._i_5__2 = _1__state;
    }
    else
    {
      if ( _1__state )
        return 0;
      v4->fields.__1__state = -1;
      v4->fields._i_5__2 = 0;
    }
    rewardAction = v4->fields.rewardAction;
    if ( rewardAction && _4__this )
    {
      if ( _1__state < rewardAction->fields.index )
      {
        itemDispWaitTime = _4__this->fields.itemDispWaitTime;
        v16 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v16, itemDispWaitTime, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v16;
        p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(p__2__current, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      resultItemObjList = _4__this->fields.resultItemObjList;
      if ( resultItemObjList )
      {
        playCnt = rewardAction->fields.playCnt;
        getEffect = _4__this->fields.getEffect;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)GameObjectExtensions__GetParent(
                                                                           resultItemObjList->fields._items->m_Items[playCnt],
                                                                           0LL);
        if ( this )
        {
          this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
          if ( getEffect )
          {
            this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)RecipeRewardDialogComponent_GetEffect__Invoke(
                                                                               getEffect,
                                                                               (UnityEngine_Transform_o *)this,
                                                                               v29);
            if ( this )
            {
              v30 = (UnityEngine_GameObject_o *)this;
              this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                 (UnityEngine_GameObject_o *)this,
                                                                                 0LL);
              v31 = v4->fields.rewardAction;
              if ( v31 )
              {
                v32 = _4__this->fields.resultItemObjList;
                if ( v32 )
                {
                  v33 = v31->fields.playCnt;
                  v34 = (UnityEngine_Transform_o *)this;
                  if ( v32->fields._size <= (unsigned int)v33 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v32->fields._items->m_Items[v33];
                  if ( this )
                  {
                    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                       (UnityEngine_GameObject_o *)this,
                                                                                       0LL);
                    if ( this )
                    {
                      *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)this,
                                                         0LL);
                      if ( v34 )
                      {
                        UnityEngine_Transform__set_localPosition(v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
                        this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                           v30,
                                                                                           0LL);
                        if ( this )
                        {
                          v53.fields.x = 1.25;
                          v53.fields.y = 1.25;
                          v53.fields.z = 1.25;
                          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v53, 0LL);
                          this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)_4__this->fields.teaEffectObjList;
                          if ( this )
                          {
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
                              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
                            v38 = _4__this->fields.itemDispWaitTime;
                            v39 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
                            UnityEngine_WaitForSeconds___ctor(v39, v38, 0LL);
                            v4->fields.__2__current = (Il2CppObject *)v39;
                            v40 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
                            sub_B5D560(v40, (System_Int32_array **)v39, v41, v42, v43, v44, v45, v46);
                            *(_DWORD *)&v40[-1].fields.isOpenAfter = 2;
                            return 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_B5D69C(this, method);
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_45;
  if ( _4__this->fields.isSkip )
  {
    p_rewardAction = &v4->fields.rewardAction;
  }
  else
  {
    _4__this->fields.canSkip = 1;
    resultIconHideObjList = _4__this->fields.resultIconHideObjList;
    v49 = v4->fields.rewardAction;
    p_rewardAction = &v4->fields.rewardAction;
    v48 = v49;
    if ( !v49 || !resultIconHideObjList )
      goto LABEL_45;
    v50 = v48->fields.playCnt;
    if ( resultIconHideObjList->fields._size <= (unsigned int)v50 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)resultIconHideObjList->fields._items->m_Items[v50];
    if ( !this )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( !*p_rewardAction )
    goto LABEL_45;
  v51 = _4__this->fields.resultItemObjList;
  if ( !v51 )
    goto LABEL_45;
  v52 = (*p_rewardAction)->fields.playCnt;
  if ( v51->fields._size <= (unsigned int)v52 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v51->fields._items->m_Items[v52];
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !*p_rewardAction )
    goto LABEL_45;
  result = 0;
  (*p_rewardAction)->fields.isEnd = 1;
  return result;
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartRewardAction_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RecipeRewardDialogComponent__StartRewardAction_d__46__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_RecipeRewardDialogComponent__StartRewardAction_d__46_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartRewardAction_d__46__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall RecipeRewardDialogComponent__StartRewardAction_d__46__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipeRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F39 & 1) == 0 )
  {
    sub_B5D5C4(&RecipeRewardDialogComponent___c_TypeInfo, v1, v2, v3);
    byte_42E7F39 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(RecipeRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)RecipeRewardDialogComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall RecipeRewardDialogComponent___c___ctor(
        RecipeRewardDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c___ClickSkip_b__47_0(
        RecipeRewardDialogComponent___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E7F3A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7F3A = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)x, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__0(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *giftList; // x20
  DataManager_o *Instance; // x0
  __int64 v14; // x1

  if ( (byte_42E7F3B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E7F3B = 1;
  }
  giftList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.giftList;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL
    || (Instance = (DataManager_o *)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, id, 0LL), !giftList) )
  {
    sub_B5D69C(Instance, v14);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    giftList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__1(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  System_Action_o *_9__2; // x21
  BaseDialog_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  v4 = this;
  if ( (byte_42E7F3C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_B5D5C4(
                                                                    &Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__2__,
                                                                    v5,
                                                                    v6,
                                                                    v7);
    byte_42E7F3C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  _4__this->fields.state = 2;
  _9__2 = v4->fields.__9__2;
  v10 = (BaseDialog_o *)v4->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.__9__2,
      (System_Int32_array **)_9__2,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v10 )
LABEL_8:
    sub_B5D69C(this, method);
  BaseDialog__Open(v10, _9__2, 0, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__2(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_42E7F3D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13198/*"StartDisp"*/, (_DWORD)method, v2, v3);
    byte_42E7F3D = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13198/*"StartDisp"*/, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass44_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent___c__DisplayClass44_0___SetResultData_b__0(
        RecipeRewardDialogComponent___c__DisplayClass44_0_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  __int64 v3; // x3
  RecipeRewardDialogComponent___c__DisplayClass44_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x20
  UnityEngine_GameObject_o *v29; // x20
  struct RecipeRewardDialogComponent_o *v30; // x8
  UnityEngine_Transform_o *transform; // x22
  int v32; // s0
  struct RecipeRewardDialogComponent_o *v35; // x8
  ItemIconComponent_o *v36; // x22
  int32_t v37; // w3
  struct RecipeRewardDialogComponent_o *v38; // x8
  struct RecipeRewardDialogComponent_o *v39; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabTeaItem; // x21
  UnityEngine_GameObject_o *v41; // x21
  struct RecipeRewardDialogComponent_o *v42; // x8
  UnityEngine_Transform_o *v43; // x22
  int v44; // s0
  struct RecipeRewardDialogComponent_o *v47; // x8
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t eventId; // w22
  UISprite_o *v50; // x20
  Il2CppObject *v51; // x0
  System_String_o *v52; // x23
  struct RecipeRewardDialogComponent_o *v53; // x8
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E7F3E & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)gift, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)sub_B5D5C4(&StringLiteral_19623/*"icon_{0}"*/, v24, v25, v26);
    byte_42E7F3E = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)_4__this->fields.prefabResultItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                  prefabResultItem,
                                                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_38;
  v29 = (UnityEngine_GameObject_o *)this;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v30 = v5->fields.__4__this;
  if ( !v30 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v30->fields.listRoot, 0LL);
  transform = UnityEngine_GameObject__get_transform(v29, 0LL);
  *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v29, 0LL);
  v35 = v5->fields.__4__this;
  if ( !v35 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  v55.fields.x = v35->fields.iconScale;
  v55.fields.y = v55.fields.x;
  v55.fields.z = v55.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v55, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v29,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !gift )
    goto LABEL_38;
  v36 = (ItemIconComponent_o *)this;
  if ( !this )
    goto LABEL_38;
  v37 = gift->fields.num <= 1 ? -1 : gift->fields.num;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, gift->fields.type, gift->fields.objectId, v37, 0, 0LL);
  ItemIconComponent__CalcSetPossession(v36, gift->fields.type, gift->fields.objectId, 0LL);
  v38 = v5->fields.__4__this;
  if ( !v38 )
    goto LABEL_38;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v38->fields.resultItemObjList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  v39 = v5->fields.__4__this;
  if ( !v39 )
    goto LABEL_38;
  prefabTeaItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v39->fields.prefabTeaItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                  prefabTeaItem,
                                                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_38;
  v41 = (UnityEngine_GameObject_o *)this;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v42 = v5->fields.__4__this;
  if ( !v42 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v42->fields.iconListRoot, 0LL);
  v43 = UnityEngine_GameObject__get_transform(v41, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v29, 0LL);
  if ( !this )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v43 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v43, *(UnityEngine_Vector3_o *)&v44, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v41, 0LL);
  v47 = v5->fields.__4__this;
  if ( !v47 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  v56.fields.x = v47->fields.iconScale;
  v56.fields.y = v56.fields.x;
  v56.fields.z = v56.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v56, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v41,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  eventRecipeEntity = v5->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_38;
  eventId = eventRecipeEntity->fields.eventId;
  v50 = (UISprite_o *)this;
  iconId = eventRecipeEntity->fields.iconId;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v52 = System_String__Format((System_String_o *)StringLiteral_19623/*"icon_{0}"*/, v51, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, v50, v52, 0LL);
  UnityEngine_GameObject__SetActive(v41, 1, 0LL);
  v53 = v5->fields.__4__this;
  if ( !v53 || (this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v53->fields.resultIconHideObjList) == 0LL )
LABEL_38:
    sub_B5D69C(this, gift);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
}