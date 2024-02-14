void __fastcall RecipeRewardDialogComponent___ctor(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_Color_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4212F3F & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Color___TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4212F3F = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_B0D8BC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.teaEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.teaEffectObjList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x19
  RecipeRewardDialogComponent___c_c *v9; // x0
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__47_0; // x20
  Il2CppObject *v12; // x21
  struct RecipeRewardDialogComponent___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4212F3A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_GameObject___ctor__, method);
    sub_B0D8A4(&System_Action_GameObject__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__ForEach__, v5);
    sub_B0D8A4(&Method_RecipeRewardDialogComponent___c__ClickSkip_b__47_0__, v6);
    sub_B0D8A4(&RecipeRewardDialogComponent___c_TypeInfo, v7);
    byte_4212F3A = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    this->fields.isSkip = 1;
    teaEffectObjList = this->fields.teaEffectObjList;
    v9 = RecipeRewardDialogComponent___c_TypeInfo;
    if ( (BYTE3(RecipeRewardDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecipeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecipeRewardDialogComponent___c_TypeInfo);
      v9 = RecipeRewardDialogComponent___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__47_0;
    if ( !_9__47_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                        System_Action_GameObject__TypeInfo,
                                                                                        method,
                                                                                        v2);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__47_0,
        v12,
        Method_RecipeRewardDialogComponent___c__ClickSkip_b__47_0__,
        (const MethodInfo_246EA3C *)Method_System_Action_GameObject___ctor__);
      v13 = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      v13->__9__47_0 = (struct System_Action_GameObject__o *)_9__47_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v13->__9__47_0,
        (System_Int32_array **)_9__47_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( !teaEffectObjList )
      sub_B0D97C(v9);
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)teaEffectObjList,
      (System_Action_T__o *)_9__47_0,
      (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
}


void __fastcall RecipeRewardDialogComponent__EndClose(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4212F3C & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, method);
    byte_4212F3C = 1;
  }
  RecipeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall RecipeRewardDialogComponent__Init(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__OnClickCloseButton(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4212F3B & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, method);
    sub_B0D8A4(&System_Action_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_RecipeRewardDialogComponent_EndClose__, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    byte_4212F3B = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v16,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v16.fields.current;
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
        UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v16,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_RecipeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
  }
}


void __fastcall RecipeRewardDialogComponent__OnClickSwitchShowMode(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v12; // x8
  UISprite_o *v13; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v22; // x20
  int size; // w8
  __int64 v24; // x0
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4212F3D & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_22869/*"treasurechest_btn"*/, v8);
    sub_B0D8A4(&StringLiteral_22871/*"treasurechest_btn_on"*/, v9);
    byte_4212F3D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v12 = isShowPossessionNum ? (System_String_o **)&StringLiteral_22869/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_22871/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v12, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v13 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v13, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B0D97C(viewChangeButton);
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
    v24 = sub_B0D9A8(viewChangeButton);
    sub_B0D948(v24, 0LL);
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
  v25.fields.b = *p_a;
  v25.fields.g = *p_b;
  v25.fields.r = *p_g;
  v25.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v25, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v22 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v22 >= size )
      break;
    if ( size <= (unsigned int)v22 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v22];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v22;
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
  __int64 v45; // x23
  void *viewChangeButton; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  WebViewObject_o *Component_WebViewObject; // x27
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x26
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x1
  __int64 v70; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x26
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x0
  UILabel_o *titleLabel; // x26
  UISprite_o *totalEventPointIcon; // x26
  int32_t eventPointItemId; // w27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x26
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v86; // x27
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v91; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v93; // x27
  Il2CppObject *v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v97; // x26
  void **v98; // x25
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  __int64 v105; // x1
  __int64 v106; // x2
  GiftEntity_o *v107; // x26
  __int64 v108; // x1
  __int64 v109; // x2
  System_Action_int__o *v110; // x25
  __int64 v111; // x8
  bool v112; // w21
  UILabel_o *v113; // x22
  __int64 *v114; // x8
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Collections_Generic_List_GiftEntity__o *v121; // x21
  __int64 v122; // x1
  __int64 v123; // x2
  System_Action_o *v124; // x22
  const MethodInfo *v125; // x4
  __int64 v126; // x0
  struct System_Action_o *v128; // [xsp+8h] [xbp-68h]
  __int64 v129; // [xsp+10h] [xbp-60h] BYREF
  int v130; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4212F36 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, giftIds);
    sub_B0D8A4(&System_Action_int__TypeInfo, v14);
    sub_B0D8A4(&System_Action_TypeInfo, v15);
    sub_B0D8A4(&AtlasManager_TypeInfo, v16);
    sub_B0D8A4(&Method_BasicHelper_ForEach_int___, v17);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v18);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v19);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67969368, v20);
    sub_B0D8A4(&GiftEntity_TypeInfo, v21);
    sub_B0D8A4(&int_TypeInfo, v22);
    sub_B0D8A4(&long_TypeInfo, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v28);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v29);
    sub_B0D8A4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v30);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v31);
    sub_B0D8A4(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__0__, v32);
    sub_B0D8A4(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__1__, v33);
    sub_B0D8A4(&RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo, v34);
    sub_B0D8A4(&StringLiteral_13506/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v35);
    sub_B0D8A4(&StringLiteral_11070/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, v36);
    sub_B0D8A4(&StringLiteral_11074/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, v37);
    sub_B0D8A4(&StringLiteral_697/*"+"*/, v38);
    sub_B0D8A4(&StringLiteral_11068/*"RECIPE_EVENT_GET_POINT_NUM"*/, v39);
    sub_B0D8A4(&StringLiteral_22869/*"treasurechest_btn"*/, v40);
    sub_B0D8A4(&StringLiteral_13505/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v41);
    sub_B0D8A4(&StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v42);
    sub_B0D8A4(&StringLiteral_22875/*"treasurechest_img_bg_reward"*/, v43);
    sub_B0D8A4(&StringLiteral_11075/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, v44);
    byte_4212F36 = 1;
  }
  v45 = sub_B0D974(RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo, giftIds, pointRewards);
  RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
    (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_58;
  *(_QWORD *)(v45 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v45 + 24), (System_Int32_array **)this, v47, v48, v49, v50, v51, v52);
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_58;
  v128 = closeCallback;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22869/*"treasurechest_btn"*/, 0LL);
  this->fields.getEffect = getEffect;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.getEffect,
    (System_Int32_array **)getEffect,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.isShowPossessionNum = 0;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v60,
                                                                                                  v61);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v62;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v69,
                                                                                                  v70);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v71;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resultIconHideObjList,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  teaEffectObjList = this->fields.teaEffectObjList;
  if ( teaEffectObjList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)teaEffectObjList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11070/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
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
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_22875/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_22875/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_58;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_22869/*"treasurechest_btn"*/, 0LL);
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
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_58;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11068/*"RECIPE_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_58;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v130 = this->fields.maxPlayCnt * eventRecipeEntity->fields.eventPointNum;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130);
  v88 = System_String__Format(v86, v87, 0LL);
  viewChangeButton = System_String__Concat_43849904((System_String_o *)StringLiteral_697/*"+"*/, v88, 0LL);
  if ( !getNumLabel )
    goto LABEL_58;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  if ( !eventRecipeGiftEntity )
    goto LABEL_58;
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventRecipeGiftEntity->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v91 = EventPointNoGroup;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11074/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_58;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v129 = v91;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v129);
  viewChangeButton = System_String__Format(v93, v94, 0LL);
  if ( !totalNumLabel )
    goto LABEL_58;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v97 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                  v95,
                                                                                                  v96);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v97,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v45 + 16) = v97;
  v98 = (void **)(v45 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v45 + 16), (System_Int32_array **)v97, v99, v100, v101, v102, v103, v104);
  v107 = (GiftEntity_o *)sub_B0D974(GiftEntity_TypeInfo, v105, v106);
  GiftEntity___ctor(v107, 0LL);
  if ( !v107 )
    goto LABEL_58;
  v107->fields.type = 2;
  v107->fields.objectId = eventRecipeEntity->fields.eventPointItemId;
  v107->fields.num = eventRecipeEntity->fields.eventPointNum * giftIds->max_length;
  viewChangeButton = *v98;
  if ( !*v98 )
    goto LABEL_58;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)viewChangeButton,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v107,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
  v110 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v108, v109);
  System_Action_int____ctor(
    v110,
    (Il2CppObject *)v45,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__0__,
    (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)giftIds,
    (System_Action_T__o *)v110,
    (const MethodInfo_1707E48 *)Method_BasicHelper_ForEach_int___);
  v111 = *(_QWORD *)(v45 + 16);
  if ( !v111 )
    goto LABEL_58;
  viewChangeButton = this->fields.scrollBar;
  this->fields.maxPlayCnt = *(_DWORD *)(v111 + 24);
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__GetComponent_WebViewObject_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
  v112 = pointRewards && pointRewards->max_length != 0;
  viewChangeButton = this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       1,
                       (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67969368);
  if ( !viewChangeButton )
    goto LABEL_58;
  if ( !*((_DWORD *)viewChangeButton + 6) )
  {
LABEL_59:
    v126 = sub_B0D9A8(viewChangeButton);
    sub_B0D948(v126, 0LL);
  }
  v113 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( v112 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v114 = &StringLiteral_13506/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v114 = &StringLiteral_13505/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  }
  viewChangeButton = LocalizationManager__Get((System_String_o *)*v114, 0LL);
  if ( !v113
    || (UILabel__set_text(v113, (System_String_o *)viewChangeButton, 0LL),
        this->fields.closeCallbackFunc = v128,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
          (System_Int32_array **)v128,
          v115,
          v116,
          v117,
          v118,
          v119,
          v120),
        (viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_58:
    sub_B0D97C(viewChangeButton);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v121 = *(System_Collections_Generic_List_GiftEntity__o **)(v45 + 16);
  v124 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v122, v123);
  System_Action___ctor(
    v124,
    (Il2CppObject *)v45,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__1__,
    0LL);
  RecipeRewardDialogComponent__SetResultData(this, v121, eventRecipeEntity, v124, v125);
}


void __fastcall RecipeRewardDialogComponent__SetResultData(
        RecipeRewardDialogComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftList,
        EventRecipeEntity_o *eventRecipeEntity,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x23
  UnityEngine_Component_o *scrollView; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x22

  if ( (byte_4212F37 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_GiftEntity___ctor__, giftList);
    sub_B0D8A4(&System_Action_GiftEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIGrid___, v10);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__ForEach__, v12);
    sub_B0D8A4(&Method_RecipeRewardDialogComponent___c__DisplayClass44_0__SetResultData_b__0__, v13);
    sub_B0D8A4(&RecipeRewardDialogComponent___c__DisplayClass44_0_TypeInfo, v14);
    byte_4212F37 = 1;
  }
  v15 = sub_B0D974(RecipeRewardDialogComponent___c__DisplayClass44_0_TypeInfo, giftList, eventRecipeEntity);
  RecipeRewardDialogComponent___c__DisplayClass44_0___ctor(
    (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v15 + 24) = eventRecipeEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v15 + 24),
    (System_Int32_array **)eventRecipeEntity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_GiftEntity__TypeInfo,
                                                                               v29,
                                                                               v30);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v31,
    (Il2CppObject *)v15,
    Method_RecipeRewardDialogComponent___c__DisplayClass44_0__SetResultData_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_GiftEntity___ctor__);
  if ( !giftList )
    goto LABEL_12;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)giftList,
    (System_Action_T__o *)v31,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_GiftEntity__ForEach__);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIScrollView___)) == 0LL
    || (UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.listRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.castClass)(
          scrollView,
          scrollView->klass[1]._1.declaringType),
        (scrollView = (UnityEngine_Component_o *)this->fields.iconListRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_B0D97C(scrollView);
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
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4212F38 & 1) == 0 )
  {
    sub_B0D8A4(&RecipeRewardDialogComponent__StartDisp_d__45_TypeInfo, method);
    byte_4212F38 = 1;
  }
  v4 = sub_B0D974(RecipeRewardDialogComponent__StartDisp_d__45_TypeInfo, method, v2);
  RecipeRewardDialogComponent__StartDisp_d__45___ctor((RecipeRewardDialogComponent__StartDisp_d__45_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall RecipeRewardDialogComponent__StartRewardAction(
        RecipeRewardDialogComponent_o *this,
        RecipeRewardDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4212F39 & 1) == 0 )
  {
    sub_B0D8A4(&RecipeRewardDialogComponent__StartRewardAction_d__46_TypeInfo, rewardAction);
    byte_4212F39 = 1;
  }
  v5 = sub_B0D974(RecipeRewardDialogComponent__StartRewardAction_d__46_TypeInfo, rewardAction, method);
  RecipeRewardDialogComponent__StartRewardAction_d__46___ctor(
    (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)rewardAction,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent__get_closeBtnObject(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4212F3E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212F3E = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B0D97C(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent_GetEffect___ctor(
        RecipeRewardDialogComponent_GetEffect_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__EndInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)sub_B0D84C(result, 0LL, method);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__Invoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  RecipeRewardDialogComponent_GetEffect_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  UnityEngine_Transform_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  UnityEngine_GameObject_o *result; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 (__fastcall **v26)(UnityEngine_Transform_o *, _QWORD); // x0
  __int64 v27; // x0
  __int64 (__fastcall **v28)(__int64 *, UnityEngine_Transform_o *, _QWORD); // x0
  RecipeRewardDialogComponent_GetEffect_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  __int64 (__fastcall *v32)(UnityEngine_Transform_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  unsigned __int64 v40; // x10
  _DWORD *v41; // x11
  char v42; // w22
  char v43; // w0
  UnityEngine_Transform_c *klass; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  RecipeRewardDialogComponent_GetEffect_o *v49; // [xsp+8h] [xbp-48h] BYREF

  v49 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v49;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (RecipeRewardDialogComponent_GetEffect_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v29 = v8[v9];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(__int64 (__fastcall **)(UnityEngine_Transform_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v29->fields.extra_arg, parenTransform, method, v3);
      v33 = sub_B0D8D4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v42 = sub_B0D8CC(v30);
            v43 = sub_B0DCD0(v30);
            if ( (v42 & 1) != 0 )
            {
              if ( (v43 & 1) != 0 )
              {
                klass = parenTransform->klass;
                v45 = *(_QWORD *)(v30 + 24);
                v46 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&parenTransform->klass->_2.bitflags1 )
                {
                  v47 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v45 )
                  {
                    ++v47;
                    p_offset += 4;
                    if ( v47 >= *(unsigned __int16 *)&parenTransform->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v46);
                }
                else
                {
LABEL_57:
                  v25 = sub_AA67A0(parenTransform, v45, v46);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&parenTransform->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))sub_B0D954(v16, v30);
              result = (UnityEngine_GameObject_o *)(*v26)(parenTransform, v26);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v30 + 72);
              if ( (v43 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(parenTransform, class_0, v10);
                }
                result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v15)(
                                                       parenTransform,
                                                       *(_QWORD *)(v15 + 8));
              }
              else
              {
                result = (UnityEngine_GameObject_o *)(*((__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))&parenTransform->klass->vtable._0_Equals.method
                                                      + 2 * *(unsigned __int16 *)(v30 + 72)))(
                                                       parenTransform,
                                                       *((_QWORD *)&parenTransform->klass->vtable._1_Finalize.methodPtr
                                                       + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            goto LABEL_59;
          }
LABEL_58:
          result = (UnityEngine_GameObject_o *)v32(parenTransform, v30);
          goto LABEL_59;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B0D8CC(v30);
          v36 = sub_B0DCD0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v37 = *v31;
              v38 = *(_QWORD *)(v30 + 24);
              v39 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v40 = 0LL;
                v41 = (_DWORD *)(*(_QWORD *)(v37 + 176) + 8LL);
                while ( *((_QWORD *)v41 - 1) != v38 )
                {
                  ++v40;
                  v41 += 4;
                  if ( v40 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v37 + 16LL * (*v41 + (int)v39) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AA67A0(v31, v38, v39);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))sub_B0D954(v24, v30);
            result = (UnityEngine_GameObject_o *)(*v28)(v31, parenTransform, v28);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v19 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v18) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AA67A0(v31, v19, v18);
              }
              result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))v23)(
                                                     v31,
                                                     parenTransform,
                                                     *(_QWORD *)(v23 + 8));
            }
            else
            {
              result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 312))(
                                                     v31,
                                                     parenTransform,
                                                     *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          goto LABEL_59;
        }
      }
      result = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(__int64 *, UnityEngine_Transform_o *, __int64))v32)(
                                             v31,
                                             parenTransform,
                                             v30);
LABEL_59:
      if ( ++v9 == v7 )
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
  __int64 v2; // x2
  RecipeRewardDialogComponent__StartDisp_d__45_o *v3; // x19
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
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v20; // x20
  bool result; // w0
  RecipeRewardDialogComponent__StartDisp_d__45_o **p_listRewardAction_5__2; // x21
  RecipeRewardDialogComponent__StartDisp_d__45_o *listRewardAction_5__2; // x25
  int _4__this_high; // w8
  int32_t maxPlayCnt; // w9
  int v26; // w21
  UIProgressBar_o *v27; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  int v30; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  int v32; // w23
  __int64 v33; // x22
  __int64 v34; // x23
  __int64 v35; // x24
  int _2__current; // w8
  __int64 v37; // x22
  System_Collections_IEnumerator_o *started; // x0
  int v39; // w8
  __int64 v40; // x8
  int32_t playCnt; // w8
  RecipeRewardDialogComponent__StartDisp_d__45_o *v42; // x22
  __int64 v43; // x19
  int v44; // w8
  __int64 v45; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v47; // x19
  int size; // w8
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v51; // x20
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-68h] BYREF

  v3 = this;
  if ( (byte_421251B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&RecipeRewardDialogComponent_RewardAction_TypeInfo, v17);
    this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v18);
    byte_421251B = 1;
  }
  memset(&v52, 0, sizeof(v52));
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v20 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v20, 0.3, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v20;
      sub_B0D840(&v3->fields.__2__current, v20);
      result = 1;
      v3->fields.__1__state = 1;
      return result;
    case 1:
      p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__45_o **)&v3->fields._listRewardAction_5__2;
      v3->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__45_o **)&v3->fields._listRewardAction_5__2;
      listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__45_o *)v3->fields._listRewardAction_5__2;
      v3->fields.__1__state = -1;
      if ( !listRewardAction_5__2 )
        goto LABEL_35;
      goto LABEL_36;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_35;
      _4__this_high = HIDWORD(this->fields.__4__this);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.scrollBar;
      v26 = maxPlayCnt % _4__this_high ? maxPlayCnt / _4__this_high + 1 : maxPlayCnt / _4__this_high;
      if ( !this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_35;
      v27 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v27, (float)(1.0 / (float)((float)((float)v26 * 0.5) + -1.0)) + value, 0LL);
      v3->fields.__2__current = 0LL;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, 0LL);
      v30 = 4;
      goto LABEL_84;
    case 4:
      p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__45_o **)&v3->fields._listRewardAction_5__2;
      v3->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    *p_listRewardAction_5__2 = 0LL;
    sub_B0D840(p_listRewardAction_5__2, 0LL);
LABEL_18:
    v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo,
                                                                                                    method,
                                                                                                    v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v31,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    *p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__45_o *)v31;
    sub_B0D840(p_listRewardAction_5__2, v31);
    if ( !_4__this )
      goto LABEL_35;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v32 = 0;
      while ( v32 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
      {
        v33 = sub_B0D974(RecipeRewardDialogComponent_RewardAction_TypeInfo, method, v2);
        System_Object___ctor((Il2CppObject *)v33, 0LL);
        if ( !v33 )
          goto LABEL_35;
        *(_DWORD *)(v33 + 16) = v32;
        *(_DWORD *)(v33 + 20) = v32 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_35;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__);
        if ( ++v32 >= _4__this->fields.maxItemDrawNum )
          break;
      }
    }
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    _4__this->fields.playCnt += LODWORD((*p_listRewardAction_5__2)->fields.__2__current);
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    v34 = 0LL;
    v35 = 32LL;
    while ( 1 )
    {
      _2__current = (int)listRewardAction_5__2->fields.__2__current;
      if ( (int)v34 >= _2__current )
        break;
      if ( _2__current <= (unsigned int)v34 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v37 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + v35);
      if ( LODWORD(listRewardAction_5__2->fields.__2__current) <= (unsigned int)v34 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      started = RecipeRewardDialogComponent__StartRewardAction(
                  _4__this,
                  *(RecipeRewardDialogComponent_RewardAction_o **)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state
                                                                 + 8 * v34
                                                                 + 32),
                  0LL);
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_MonoBehaviour__StartCoroutine_34930128(
                                                                 (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                 started,
                                                                 0LL);
      if ( v37 )
      {
        *(_QWORD *)(v37 + 32) = this;
        sub_B0D840(v37 + 32, this);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        ++v34;
        v35 += 8LL;
        if ( *p_listRewardAction_5__2 )
          continue;
      }
      goto LABEL_35;
    }
LABEL_36:
    v39 = (int)listRewardAction_5__2->fields.__2__current;
    if ( !v39 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v40 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + 8LL * (v39 - 1) + 32);
    if ( !v40 )
      goto LABEL_35;
    if ( *(_BYTE *)(v40 + 24) )
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
        v3->fields.__2__current = 0LL;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, 0LL);
        v30 = 2;
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
      v51 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v51, scrollWait, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v51;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, v51);
      v30 = 3;
LABEL_84:
      *((_DWORD *)p__2__current - 2) = v30;
      return (unsigned __int8)&dword_0 + 1;
    }
  }
  v42 = *p_listRewardAction_5__2;
  if ( !*p_listRewardAction_5__2 )
    goto LABEL_35;
  v43 = 0LL;
  while ( 1 )
  {
    v44 = (int)v42->fields.__2__current;
    if ( (int)v43 >= v44 )
      break;
    if ( v44 <= (unsigned int)v43 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v45 = *(_QWORD *)(*(_QWORD *)&v42->fields.__1__state + 8 * v43 + 32);
    if ( v45 )
    {
      UnityEngine_MonoBehaviour__StopCoroutine_34930796(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        *(UnityEngine_Coroutine_o **)(v45 + 32),
        0LL);
      v42 = *p_listRewardAction_5__2;
      ++v43;
      if ( *p_listRewardAction_5__2 )
        continue;
    }
    goto LABEL_35;
  }
  resultItemObjList = _4__this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_35;
  v47 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v47 >= size )
      break;
    if ( size <= (unsigned int)v47 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)resultItemObjList->fields._items->m_Items[v47];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      resultItemObjList = _4__this->fields.resultItemObjList;
      ++v47;
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
                                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v52,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v52.fields.current;
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
      UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_RecipeRewardDialogComponent__StartDisp_d__45_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  RecipeRewardDialogComponent__StartRewardAction_d__46_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct RecipeRewardDialogComponent_o *_4__this; // x22
  int32_t i_5__2; // w8
  struct RecipeRewardDialogComponent_RewardAction_o *rewardAction; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v11; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct RecipeRewardDialogComponent_RewardAction_o **p_rewardAction; // x19
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 playCnt; // x23
  RecipeRewardDialogComponent_GetEffect_o *getEffect; // x20
  const MethodInfo *v18; // x2
  UnityEngine_GameObject_o *v19; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v20; // x8
  struct System_Collections_Generic_List_GameObject__o *v21; // x23
  __int64 v22; // x24
  UnityEngine_Transform_o *v23; // x21
  int v24; // s0
  float v27; // s8
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_WaitForSeconds_o *v30; // x20
  Il2CppObject **v31; // x19
  struct System_Collections_Generic_List_GameObject__o *resultIconHideObjList; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v33; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v34; // t1
  __int64 v35; // x21
  struct System_Collections_Generic_List_GameObject__o *v36; // x20
  __int64 v37; // x21
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_421251C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)sub_B0D8A4(
                                                                       &UnityEngine_WaitForSeconds_TypeInfo,
                                                                       v5);
    byte_421251C = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      i_5__2 = v3->fields._i_5__2;
      v3->fields.__1__state = -1;
      _1__state = i_5__2 + 1;
      v3->fields._i_5__2 = _1__state;
    }
    else
    {
      if ( _1__state )
        return 0;
      v3->fields.__1__state = -1;
      v3->fields._i_5__2 = 0;
    }
    rewardAction = v3->fields.rewardAction;
    if ( rewardAction && _4__this )
    {
      if ( _1__state < rewardAction->fields.index )
      {
        itemDispWaitTime = _4__this->fields.itemDispWaitTime;
        v11 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
        UnityEngine_WaitForSeconds___ctor(v11, itemDispWaitTime, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v11;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, v11);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      resultItemObjList = _4__this->fields.resultItemObjList;
      if ( resultItemObjList )
      {
        playCnt = rewardAction->fields.playCnt;
        getEffect = _4__this->fields.getEffect;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
                                                                               v18);
            if ( this )
            {
              v19 = (UnityEngine_GameObject_o *)this;
              this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                 (UnityEngine_GameObject_o *)this,
                                                                                 0LL);
              v20 = v3->fields.rewardAction;
              if ( v20 )
              {
                v21 = _4__this->fields.resultItemObjList;
                if ( v21 )
                {
                  v22 = v20->fields.playCnt;
                  v23 = (UnityEngine_Transform_o *)this;
                  if ( v21->fields._size <= (unsigned int)v22 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                  this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v21->fields._items->m_Items[v22];
                  if ( this )
                  {
                    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                       (UnityEngine_GameObject_o *)this,
                                                                                       0LL);
                    if ( this )
                    {
                      *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)this,
                                                         0LL);
                      if ( v23 )
                      {
                        UnityEngine_Transform__set_localPosition(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
                        this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                           v19,
                                                                                           0LL);
                        if ( this )
                        {
                          v38.fields.x = 1.25;
                          v38.fields.y = 1.25;
                          v38.fields.z = 1.25;
                          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v38, 0LL);
                          this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)_4__this->fields.teaEffectObjList;
                          if ( this )
                          {
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
                              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
                            v27 = _4__this->fields.itemDispWaitTime;
                            v30 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(
                                                                    UnityEngine_WaitForSeconds_TypeInfo,
                                                                    v28,
                                                                    v29);
                            UnityEngine_WaitForSeconds___ctor(v30, v27, 0LL);
                            v3->fields.__2__current = (Il2CppObject *)v30;
                            v31 = &v3->fields.__2__current;
                            sub_B0D840(v31, v30);
                            *((_DWORD *)v31 - 2) = 2;
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
    sub_B0D97C(this);
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_45;
  if ( _4__this->fields.isSkip )
  {
    p_rewardAction = &v3->fields.rewardAction;
  }
  else
  {
    _4__this->fields.canSkip = 1;
    resultIconHideObjList = _4__this->fields.resultIconHideObjList;
    v34 = v3->fields.rewardAction;
    p_rewardAction = &v3->fields.rewardAction;
    v33 = v34;
    if ( !v34 || !resultIconHideObjList )
      goto LABEL_45;
    v35 = v33->fields.playCnt;
    if ( resultIconHideObjList->fields._size <= (unsigned int)v35 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)resultIconHideObjList->fields._items->m_Items[v35];
    if ( !this )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( !*p_rewardAction )
    goto LABEL_45;
  v36 = _4__this->fields.resultItemObjList;
  if ( !v36 )
    goto LABEL_45;
  v37 = (*p_rewardAction)->fields.playCnt;
  if ( v36->fields._size <= (unsigned int)v37 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v36->fields._items->m_Items[v37];
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_RecipeRewardDialogComponent__StartRewardAction_d__46_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4212515 & 1) == 0 )
  {
    sub_B0D8A4(&RecipeRewardDialogComponent___c_TypeInfo, v1);
    byte_4212515 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(RecipeRewardDialogComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RecipeRewardDialogComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  if ( (byte_4212516 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, x);
    byte_4212516 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)x, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__0(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *giftList; // x20
  DataManager_o *Instance; // x0

  if ( (byte_4212517 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&id);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4212517 = 1;
  }
  giftList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.giftList;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL
    || (Instance = (DataManager_o *)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, id, 0LL), !giftList) )
  {
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    giftList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__1(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  _DWORD *monitor; // x8
  System_Action_o *klass; // x21
  BaseDialog_o *v7; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4212518 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_B0D8A4(
                                                                    &Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__2__,
                                                                    v4);
    byte_4212518 = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  monitor[85] = 2;
  klass = (System_Action_o *)v3[2].klass;
  v7 = (BaseDialog_o *)v3[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(klass, v3, Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__2__, 0LL);
    v3[2].klass = (Il2CppClass *)klass;
    sub_B0D840(&v3[2], klass);
  }
  if ( !v7 )
LABEL_8:
    sub_B0D97C(this);
  BaseDialog__Open(v7, klass, 0, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__2(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_4212519 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13086/*"StartDisp"*/, method);
    byte_4212519 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13086/*"StartDisp"*/, 0LL);
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
  RecipeRewardDialogComponent___c__DisplayClass44_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x20
  UnityEngine_GameObject_o *v14; // x20
  struct RecipeRewardDialogComponent_o *v15; // x8
  UnityEngine_Transform_o *transform; // x22
  int v17; // s0
  struct RecipeRewardDialogComponent_o *v20; // x8
  ItemIconComponent_o *v21; // x22
  int32_t v22; // w3
  struct RecipeRewardDialogComponent_o *v23; // x8
  struct RecipeRewardDialogComponent_o *v24; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabTeaItem; // x21
  UnityEngine_GameObject_o *v26; // x21
  struct RecipeRewardDialogComponent_o *v27; // x8
  UnityEngine_Transform_o *v28; // x22
  int v29; // s0
  struct RecipeRewardDialogComponent_o *v32; // x8
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t eventId; // w22
  UISprite_o *v35; // x20
  Il2CppObject *v36; // x0
  System_String_o *v37; // x23
  struct RecipeRewardDialogComponent_o *v38; // x8
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_421251A & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, gift);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)sub_B0D8A4(&StringLiteral_19440/*"icon_{0}"*/, v11);
    byte_421251A = 1;
  }
  _4__this = v4->fields.__4__this;
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
                                                                  (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_38;
  v14 = (UnityEngine_GameObject_o *)this;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v15->fields.listRoot, 0LL);
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v20 = v4->fields.__4__this;
  if ( !v20 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  v40.fields.x = v20->fields.iconScale;
  v40.fields.y = v40.fields.x;
  v40.fields.z = v40.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v40, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v14,
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !gift )
    goto LABEL_38;
  v21 = (ItemIconComponent_o *)this;
  if ( !this )
    goto LABEL_38;
  v22 = gift->fields.num <= 1 ? -1 : gift->fields.num;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, gift->fields.type, gift->fields.objectId, v22, 0, 0LL);
  ItemIconComponent__CalcSetPossession(v21, gift->fields.type, gift->fields.objectId, 0LL);
  v23 = v4->fields.__4__this;
  if ( !v23 )
    goto LABEL_38;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v23->fields.resultItemObjList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  v24 = v4->fields.__4__this;
  if ( !v24 )
    goto LABEL_38;
  prefabTeaItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v24->fields.prefabTeaItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                  prefabTeaItem,
                                                                  (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_38;
  v26 = (UnityEngine_GameObject_o *)this;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v27 = v4->fields.__4__this;
  if ( !v27 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v27->fields.iconListRoot, 0LL);
  v28 = UnityEngine_GameObject__get_transform(v26, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !this )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v28 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v26, 0LL);
  v32 = v4->fields.__4__this;
  if ( !v32 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  v41.fields.x = v32->fields.iconScale;
  v41.fields.y = v41.fields.x;
  v41.fields.z = v41.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v41, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v26,
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  eventRecipeEntity = v4->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_38;
  eventId = eventRecipeEntity->fields.eventId;
  v35 = (UISprite_o *)this;
  iconId = eventRecipeEntity->fields.iconId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v37 = System_String__Format((System_String_o *)StringLiteral_19440/*"icon_{0}"*/, v36, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_27921852(eventId, v35, v37, 0LL);
  UnityEngine_GameObject__SetActive(v26, 1, 0LL);
  v38 = v4->fields.__4__this;
  if ( !v38 || (this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v38->fields.resultIconHideObjList) == 0LL )
LABEL_38:
    sub_B0D97C(this);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}