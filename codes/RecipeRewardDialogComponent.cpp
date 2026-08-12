void RecipeRewardDialogComponent___ctor(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct UnityEngine_Color_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x2
  BaseDialog_c *v20; // x0
  int v21; // w8

  if ( (byte_596A9ED & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&UnityEngine_Color___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_596A9ED = 1;
  }
  v3 = UnityEngine_Color___TypeInfo;
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_2213B20(v3, 2);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.teaEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.teaEffectObjList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v20 = BaseDialog_TypeInfo;
  this->fields.maxItemDrawNum = 12;
  v21 = *(&v20->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  if ( !v21 )
    j_il2cpp_runtime_class_init_0(v20, v18, v19);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecipeRewardDialogComponent__CheckIsSerializeFieldNotNull(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void RecipeRewardDialogComponent__ClickSkip(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x19
  RecipeRewardDialogComponent___c_c *v5; // x0
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__45_0; // x20
  Il2CppObject *v8; // x21
  struct RecipeRewardDialogComponent___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596A9E9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_2213A60(&Method_RecipeRewardDialogComponent___c__ClickSkip_b__45_0__);
    sub_2213A60(&RecipeRewardDialogComponent___c_TypeInfo);
    byte_596A9E9 = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    teaEffectObjList = this->fields.teaEffectObjList;
    this->fields.isSkip = 1;
    v5 = RecipeRewardDialogComponent___c_TypeInfo;
    if ( !*(&RecipeRewardDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(RecipeRewardDialogComponent___c_TypeInfo, method, v2);
      v5 = RecipeRewardDialogComponent___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__45_0 = (System_Action_object__o *)static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v5, method, v2);
        static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__45_0 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(_9__45_0, v8, Method_RecipeRewardDialogComponent___c__ClickSkip_b__45_0__, 0);
      v9 = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      v9->__9__45_0 = (struct System_Action_GameObject__o *)_9__45_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__45_0, (int32_t)_9__45_0, v10, v11, v12, v13, v14, v15);
    }
    if ( !teaEffectObjList )
      sub_2213CDC(v5, method);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)teaEffectObjList,
      (System_Action_T__o *)_9__45_0,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
}


void RecipeRewardDialogComponent__EndClose(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  RecipeRewardDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void RecipeRewardDialogComponent__Init(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RecipeRewardDialogComponent__OnClickCloseButton(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *current; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596A9EA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_RecipeRewardDialogComponent_EndClose__);
    sub_2213A60(&Method_RecipeRewardDialogComponent_OnClickCloseButton__);
    byte_596A9EA = 1;
  }
  state = this->fields.state;
  memset(&v14, 0, sizeof(v14));
  if ( state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_RecipeRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_RecipeRewardDialogComponent_OnClickCloseButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_2213CDC(0, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v14.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_RecipeRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0);
  }
}


void RecipeRewardDialogComponent__OnClickSwitchShowMode(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v8; // x8
  UISprite_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v18; // w20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A9EB & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__);
    sub_2213A60(&StringLiteral_25511/*"treasurechest_btn"*/);
    sub_2213A60(&StringLiteral_25513/*"treasurechest_btn_on"*/);
    byte_596A9EB = 1;
  }
  v3 = Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton
    || (isShowPossessionNum
      ? (v8 = (System_String_o **)&StringLiteral_25511/*"treasurechest_btn"*/)
      : (v8 = (System_String_o **)&StringLiteral_25513/*"treasurechest_btn_on"*/),
        (UIButton__set_normalSprite(viewChangeButton, *v8, 0), (viewChangeButton = this->fields.viewChangeButton) == 0)
     || (viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)viewChangeButton,
                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___),
         !this->fields.viewChangeButton)) )
  {
LABEL_27:
    sub_2213CDC(viewChangeButton, v5);
  }
  v9 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
  AtlasManager__SetEventUI(v9, normalSprite, 0);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !viewChangeButtonLabelEffectColors )
      goto LABEL_27;
    if ( LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    {
      p_r = &viewChangeButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !viewChangeButton )
        goto LABEL_27;
      goto LABEL_21;
    }
LABEL_29:
    sub_2213CE4(viewChangeButton);
  }
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_27;
  if ( (viewChangeButtonLabelEffectColors->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_29;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !viewChangeButton )
    goto LABEL_27;
LABEL_21:
  v19.fields.a = *p_a;
  v19.fields.b = *p_b;
  v19.fields.g = *p_g;
  v19.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v19, 0);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_27;
  v18 = 0;
  while ( v18 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v18,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession((ItemIconComponent_o *)viewChangeButton, this->fields.isShowPossessionNum, 0);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v18;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_27;
  }
}


void RecipeRewardDialogComponent__Open(
        RecipeRewardDialogComponent_o *this,
        System_Int32_array *giftIds,
        BattleDropItem_array *pointRewards,
        EventRecipeEntity_o *eventRecipeEntity,
        EventRecipeGiftEntity_o *eventRecipeGiftEntity,
        System_Action_o *closeCallback,
        RecipeRewardDialogComponent_GetEffect_o *getEffect,
        const MethodInfo *method)
{
  __int64 v14; // x23
  int *viewChangeButton; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *Component_object; // x27
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_GameObject__c *v32; // x0
  System_Collections_Generic_List_object__o *v33; // x26
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_List_object__o *v40; // x26
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x8
  int32_t size; // w2
  int v49; // w9
  __int64 v50; // x2
  UILabel_o *titleLabel; // x26
  int32_t eventId; // w27
  __int64 v53; // x1
  __int64 v54; // x2
  UISprite_o *totalEventPointIcon; // x26
  int32_t eventPointItemId; // w27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x26
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v61; // x27
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  int64_t v66; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v68; // x27
  Il2CppObject *v69; // x0
  System_Collections_Generic_List_object__o *v70; // x25
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  GiftEntity_o *v77; // x25
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  int32_t v84; // w10
  int v85; // w8
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  System_Action_int__o *v90; // x25
  __int64 v91; // x8
  System_String_o **v92; // x24
  __int64 v93; // x2
  UILabel_o *v94; // x22
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  System_Collections_Generic_List_GiftEntity__o *v101; // x21
  System_Action_o *v102; // x22
  const MethodInfo *v103; // x4
  int64_t v105; // [xsp+10h] [xbp-70h] BYREF
  int v106; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_596A9E5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_int___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollBar___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
    sub_2213A60(&GiftEntity_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_RecipeRewardDialogComponent___c__DisplayClass41_0__Open_b__0__);
    sub_2213A60(&Method_RecipeRewardDialogComponent___c__DisplayClass41_0__Open_b__1__);
    sub_2213A60(&RecipeRewardDialogComponent___c__DisplayClass41_0_TypeInfo);
    sub_2213A60(&StringLiteral_14097/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_2213A60(&StringLiteral_11468/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_11472/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/);
    sub_2213A60(&StringLiteral_861/*"+"*/);
    sub_2213A60(&StringLiteral_11466/*"RECIPE_EVENT_GET_POINT_NUM"*/);
    sub_2213A60(&StringLiteral_25511/*"treasurechest_btn"*/);
    sub_2213A60(&StringLiteral_14096/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/);
    sub_2213A60(&StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_2213A60(&StringLiteral_25517/*"treasurechest_img_bg_reward"*/);
    sub_2213A60(&StringLiteral_11473/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A9E5 = 1;
  }
  v14 = sub_2213CCC(RecipeRewardDialogComponent___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  if ( !v14 )
    goto LABEL_53;
  *(_QWORD *)(v14 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 24), (int32_t)this, v17, v18, v19, v20, v21, v22);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_53;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23, v24);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_25511/*"treasurechest_btn"*/, 0);
  this->fields.getEffect = getEffect;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.getEffect,
    (int32_t)getEffect,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = System_Collections_Generic_List_GameObject__TypeInfo;
  this->fields.isShowPossessionNum = 0;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultItemObjList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v40;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultIconHideObjList,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  teaEffectObjList = this->fields.teaEffectObjList;
  if ( teaEffectObjList )
  {
    size = teaEffectObjList->fields._size;
    v49 = teaEffectObjList->fields._version + 1;
    teaEffectObjList->fields._size = 0;
    teaEffectObjList->fields._version = v49;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)teaEffectObjList->fields._items, 0, size, 0);
  }
  viewChangeButton = (int *)this->fields.skipCollider;
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)viewChangeButton, 1, 0);
  if ( !giftIds )
    goto LABEL_53;
  viewChangeButton = (int *)this->fields.getPointRoot;
  this->fields.maxPlayCnt = giftIds->max_length;
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  if ( !eventRecipeGiftEntity )
    goto LABEL_53;
  titleLabel = this->fields.titleLabel;
  eventId = eventRecipeGiftEntity->fields.eventId;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v50);
  viewChangeButton = (int *)LocalizationManager__GetTextWithSuffix(
                              (System_String_o *)StringLiteral_11468/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/,
                              eventId,
                              (System_String_o *)StringLiteral_1/*""*/,
                              1,
                              0);
  if ( !eventRecipeEntity )
    goto LABEL_53;
  viewChangeButton = (int *)System_String__Format(
                              (System_String_o *)viewChangeButton,
                              (Il2CppObject *)eventRecipeEntity->fields.name,
                              0);
  if ( !titleLabel )
    goto LABEL_53;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  eventPointItemId = eventRecipeEntity->fields.eventPointItemId;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v53, v54);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventRecipeEntity->fields.eventPointItemId, 0);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_25517/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_25517/*"treasurechest_img_bg_reward"*/, 0);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_53;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_25511/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_53;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    goto LABEL_54;
  viewChangeButton = (int *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_53;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11473/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !viewChangeButtonLabel )
    goto LABEL_53;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11466/*"RECIPE_EVENT_GET_POINT_NUM"*/, 0);
  if ( !getTitleLabel )
    goto LABEL_53;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0);
  getNumLabel = this->fields.getNumLabel;
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v106 = this->fields.maxPlayCnt * eventRecipeEntity->fields.eventPointNum;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v106);
  v63 = System_String__Format(v61, v62, 0);
  viewChangeButton = (int *)System_String__Concat_75651716((System_String_o *)StringLiteral_861/*"+"*/, v63, 0);
  if ( !getNumLabel )
    goto LABEL_53;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventRecipeGiftEntity->fields.eventId, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v66 = EventPointNoGroup;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11472/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, 0);
  if ( !totalTitleLabel )
    goto LABEL_53;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v105 = v66;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v105);
  viewChangeButton = (int *)System_String__Format(v68, v69, 0);
  if ( !totalNumLabel )
    goto LABEL_53;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0);
  v70 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v70,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v14 + 16) = v70;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 16), (int32_t)v70, v71, v72, v73, v74, v75, v76);
  v77 = (GiftEntity_o *)sub_2213CCC(GiftEntity_TypeInfo);
  GiftEntity___ctor(v77, 0);
  if ( !v77 )
    goto LABEL_53;
  v84 = eventRecipeEntity->fields.eventPointItemId;
  viewChangeButton = *(int **)(v14 + 16);
  v85 = eventRecipeEntity->fields.eventPointNum * LODWORD(giftIds->max_length);
  v77->fields.type = 2;
  v77->fields.objectId = v84;
  v77->fields.num = v85;
  if ( !viewChangeButton )
    goto LABEL_53;
  v86 = *((_QWORD *)viewChangeButton + 2);
  v87 = Method_System_Collections_Generic_List_GiftEntity__Add__;
  ++viewChangeButton[7];
  if ( !v86 )
    goto LABEL_53;
  v88 = viewChangeButton[6];
  if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)viewChangeButton,
      (Il2CppObject *)v77,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v89 = v86 + 8 * v88;
    viewChangeButton[6] = v88 + 1;
    *(_QWORD *)(v89 + 32) = v77;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v89 + 32), (int32_t)v77, v78, v79, v80, v81, v82, v83);
  }
  v90 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v90,
    (Il2CppObject *)v14,
    Method_RecipeRewardDialogComponent___c__DisplayClass41_0__Open_b__0__,
    0);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)giftIds,
    (System_Action_T__o *)v90,
    (const MethodInfo_3811CEC *)Method_BasicHelper_ForEach_int___);
  v91 = *(_QWORD *)(v14 + 16);
  if ( !v91 )
    goto LABEL_53;
  viewChangeButton = (int *)this->fields.scrollBar;
  this->fields.maxPlayCnt = *(_DWORD *)(v91 + 24);
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !viewChangeButton )
    goto LABEL_53;
  UIProgressBar__set_value((UIProgressBar_o *)viewChangeButton, 0.0, 0);
  viewChangeButton = (int *)this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxPlayCnt > this->fields.maxItemDrawNum,
    0);
  v92 = (System_String_o **)&StringLiteral_14096/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  if ( pointRewards && LODWORD(pointRewards->max_length) )
    v92 = (System_String_o **)&StringLiteral_14097/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  viewChangeButton = (int *)this->fields.closeButton;
  if ( !viewChangeButton
    || (viewChangeButton = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0)) == 0
    || (viewChangeButton = (int *)UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)viewChangeButton,
                                    1,
                                    (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968)) == 0 )
  {
LABEL_53:
    sub_2213CDC(viewChangeButton, v16);
  }
  if ( !viewChangeButton[6] )
LABEL_54:
    sub_2213CE4(viewChangeButton);
  v94 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v93);
  viewChangeButton = (int *)LocalizationManager__Get(*v92, 0);
  if ( !v94 )
    goto LABEL_53;
  UILabel__set_text(v94, (System_String_o *)viewChangeButton, 0);
  this->fields.closeCallbackFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeCallback,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  viewChangeButton = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  v101 = *(System_Collections_Generic_List_GiftEntity__o **)(v14 + 16);
  v102 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v102,
    (Il2CppObject *)v14,
    Method_RecipeRewardDialogComponent___c__DisplayClass41_0__Open_b__1__,
    0);
  RecipeRewardDialogComponent__SetResultData(this, v101, eventRecipeEntity, v102, v103);
}


void RecipeRewardDialogComponent__SetResultData(
        RecipeRewardDialogComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftList,
        EventRecipeEntity_o *eventRecipeEntity,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x23
  UnityEngine_Component_o *scrollView; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Action_object__o *v24; // x22

  if ( (byte_596A9E6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GiftEntity__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__ForEach__);
    sub_2213A60(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__SetResultData_b__0__);
    sub_2213A60(&RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo);
    byte_596A9E6 = 1;
  }
  v9 = sub_2213CCC(RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = eventRecipeEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)eventRecipeEntity, v18, v19, v20, v21, v22, v23);
  v24 = (System_Action_object__o *)sub_2213CCC(System_Action_GiftEntity__TypeInfo);
  System_Action_object____ctor(
    v24,
    (Il2CppObject *)v9,
    Method_RecipeRewardDialogComponent___c__DisplayClass42_0__SetResultData_b__0__,
    0);
  if ( !giftList )
    goto LABEL_12;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Action_T__o *)v24,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_GiftEntity__ForEach__);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___)) == 0
    || (UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0),
        (scrollView = (UnityEngine_Component_o *)this->fields.listRoot) == 0)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.element_class)(
          scrollView,
          scrollView->klass[1]._1.castClass),
        (scrollView = (UnityEngine_Component_o *)this->fields.iconListRoot) == 0)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
  {
LABEL_12:
    sub_2213CDC(scrollView, v11);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.element_class)(
    scrollView,
    scrollView->klass[1]._1.castClass);
  ActionExtensions__Call(callBack, 0);
}


System_Collections_IEnumerator_o *RecipeRewardDialogComponent__StartDisp(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596A9E7 & 1) == 0 )
  {
    sub_2213A60(&RecipeRewardDialogComponent__StartDisp_d__43_TypeInfo);
    byte_596A9E7 = 1;
  }
  v3 = sub_2213CCC(RecipeRewardDialogComponent__StartDisp_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *RecipeRewardDialogComponent__StartRewardAction(
        RecipeRewardDialogComponent_o *this,
        RecipeRewardDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596A9E8 & 1) == 0 )
  {
    sub_2213A60(&RecipeRewardDialogComponent__StartRewardAction_d__44_TypeInfo);
    byte_596A9E8 = 1;
  }
  v5 = sub_2213CCC(RecipeRewardDialogComponent__StartRewardAction_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)rewardAction, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *RecipeRewardDialogComponent__get_closeBtnObject(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596A9EC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A9EC = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void RecipeRewardDialogComponent_GetEffect___ctor(
        RecipeRewardDialogComponent_GetEffect_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_20002A4;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_2213B30(method);
        v16 = sub_22140B4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_200039C;
          else
            v13 = sub_2000360;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_20002DC;
        }
        else
        {
          v13 = sub_20002B4;
        }
      }
      else
      {
        v13 = sub_2000288;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)&loc_2000238;
}


System_IAsyncResult_o *RecipeRewardDialogComponent_GetEffect__BeginInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = parenTransform;
  return sub_2213A14(this, &v6, callback, object);
}


UnityEngine_GameObject_o *RecipeRewardDialogComponent_GetEffect__EndInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)sub_2213A18(result, 0, method);
}


UnityEngine_GameObject_o *RecipeRewardDialogComponent_GetEffect__Invoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        const MethodInfo *method)
{
  return ((UnityEngine_GameObject_o *(__fastcall *)(intptr_t, UnityEngine_Transform_o *, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           parenTransform,
           this->fields.method);
}


void RecipeRewardDialogComponent_RewardAction___ctor(
        RecipeRewardDialogComponent_RewardAction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecipeRewardDialogComponent__StartDisp_d__43___ctor(
        RecipeRewardDialogComponent__StartDisp_d__43_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool RecipeRewardDialogComponent__StartDisp_d__43__MoveNext(
        RecipeRewardDialogComponent__StartDisp_d__43_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  System_Collections_Generic_List_object__o *listRewardAction_5__2; // x0
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  int32_t playCnt; // w8
  System_Collections_Generic_List_object__o *v13; // x22
  System_Collections_Generic_List_object__o **p_listRewardAction_5__2; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int v21; // w23
  __int64 v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int v29; // w8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  int32_t v34; // w22
  System_Collections_Generic_List_object__o *v35; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v37; // x2
  System_Collections_IEnumerator_o *started; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int klass_high; // w8
  int32_t maxPlayCnt; // w9
  unsigned int v47; // w21
  UIProgressBar_o *v48; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int v57; // w8
  UnityEngine_WaitForSeconds_o *v58; // x20
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  int32_t v65; // w21
  int32_t v66; // w19
  __int64 v67; // x1
  __int64 v68; // x2
  Il2CppObject *current; // x19
  __int64 v70; // x1
  __int64 v71; // x2
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v73; // x20
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_596A9F4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollBar___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&RecipeRewardDialogComponent_RewardAction_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_596A9F4 = 1;
  }
  _1__state = this->fields.__1__state;
  listRewardAction_5__2 = 0;
  _4__this = this->fields.__4__this;
  memset(&v81, 0, sizeof(v81));
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state == 1 )
      {
        this->fields.__1__state = -1;
        goto LABEL_20;
      }
    }
    else
    {
      this->fields.__1__state = -1;
      v58 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v58, 0.3, 0);
      this->fields.__2__current = (Il2CppObject *)v58;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      this->fields.__1__state = 1;
      LOBYTE(listRewardAction_5__2) = 1;
    }
  }
  else
  {
    if ( _1__state == 2 )
    {
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)this->fields._listRewardAction_5__2;
      this->fields.__1__state = -1;
      if ( listRewardAction_5__2 )
        goto LABEL_12;
      goto LABEL_37;
    }
    if ( _1__state == 3 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.iconListRoot;
        if ( listRewardAction_5__2 )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                                 (UnityEngine_Component_o *)listRewardAction_5__2,
                                                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
          if ( listRewardAction_5__2 )
          {
            klass_high = HIDWORD(listRewardAction_5__2[1].klass);
            maxPlayCnt = _4__this->fields.maxPlayCnt;
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.scrollBar;
            v47 = maxPlayCnt % klass_high ? maxPlayCnt / klass_high + 1 : maxPlayCnt / klass_high;
            if ( listRewardAction_5__2 )
            {
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                                     (UnityEngine_Component_o *)listRewardAction_5__2,
                                                                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
              if ( listRewardAction_5__2 )
              {
                v48 = (UIProgressBar_o *)listRewardAction_5__2;
                value = UIProgressBar__get_value((UIProgressBar_o *)listRewardAction_5__2, 0);
                UIProgressBar__set_value(v48, (float)(1.0 / (float)(vcvts_n_f32_s32(v47, 1u) + -1.0)) + value, 0);
                this->fields.__2__current = 0;
                p__2__current = &this->fields.__2__current;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v51, v52, v53, v54, v55, v56);
                v57 = 4;
                goto LABEL_78;
              }
            }
          }
        }
      }
      goto LABEL_37;
    }
    if ( _1__state != 4 )
      return (char)listRewardAction_5__2;
    this->fields.__1__state = -1;
    while ( 1 )
    {
      this->fields._listRewardAction_5__2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._listRewardAction_5__2, 0, v2, v3, v4, v5, v6, v7);
LABEL_20:
      v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v13,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
      this->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__o *)v13;
      p_listRewardAction_5__2 = (System_Collections_Generic_List_object__o **)&this->fields._listRewardAction_5__2;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._listRewardAction_5__2,
        (int32_t)v13,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      if ( !_4__this )
        goto LABEL_37;
      if ( _4__this->fields.maxItemDrawNum >= 1 )
      {
        v21 = 0;
        do
        {
          if ( v21 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
            break;
          v22 = sub_2213CCC(RecipeRewardDialogComponent_RewardAction_TypeInfo);
          System_Object___ctor((Il2CppObject *)v22, 0);
          if ( !v22 )
            goto LABEL_37;
          listRewardAction_5__2 = *p_listRewardAction_5__2;
          v29 = v21 + _4__this->fields.playCnt;
          *(_DWORD *)(v22 + 16) = v21;
          *(_DWORD *)(v22 + 20) = v29;
          if ( !listRewardAction_5__2 )
            goto LABEL_37;
          items = listRewardAction_5__2->fields._items;
          v31 = Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__;
          ++listRewardAction_5__2->fields._version;
          if ( !items )
            goto LABEL_37;
          size = listRewardAction_5__2->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              listRewardAction_5__2,
              (Il2CppObject *)v22,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            listRewardAction_5__2->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v22;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), v22, v23, v24, v25, v26, v27, v28);
          }
          ++v21;
        }
        while ( v21 < _4__this->fields.maxItemDrawNum );
      }
      listRewardAction_5__2 = *p_listRewardAction_5__2;
      if ( !*p_listRewardAction_5__2 )
        goto LABEL_37;
      v34 = 0;
      _4__this->fields.playCnt += listRewardAction_5__2->fields._size;
      while ( v34 < listRewardAction_5__2->fields._size )
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               listRewardAction_5__2,
                                                                               v34,
                                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
        if ( *p_listRewardAction_5__2 )
        {
          v35 = listRewardAction_5__2;
          Item = System_Collections_Generic_List_object___get_Item(
                   *p_listRewardAction_5__2,
                   v34,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
          started = RecipeRewardDialogComponent__StartRewardAction(
                      _4__this,
                      (RecipeRewardDialogComponent_RewardAction_o *)Item,
                      v37);
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                                                                                 (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                                 started,
                                                                                 0);
          if ( v35 )
          {
            v35->fields._syncRoot = (Il2CppObject *)listRewardAction_5__2;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v35->fields._syncRoot,
              (int32_t)listRewardAction_5__2,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
            listRewardAction_5__2 = *p_listRewardAction_5__2;
            ++v34;
            if ( *p_listRewardAction_5__2 )
              continue;
          }
        }
        goto LABEL_37;
      }
LABEL_12:
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                             listRewardAction_5__2,
                                                                             listRewardAction_5__2->fields._size - 1,
                                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
      if ( !listRewardAction_5__2 )
        goto LABEL_37;
      if ( !LOBYTE(listRewardAction_5__2->fields._size) )
        break;
      if ( !_4__this )
        goto LABEL_37;
      if ( _4__this->fields.isSkip )
        goto LABEL_50;
      playCnt = _4__this->fields.playCnt;
      if ( playCnt >= _4__this->fields.maxPlayCnt )
        goto LABEL_65;
      if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
      {
        scrollWait = _4__this->fields.scrollWait;
        v73 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v73, scrollWait, 0);
        this->fields.__2__current = (Il2CppObject *)v73;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v73, v74, v75, v76, v77, v78, v79);
        v57 = 3;
        goto LABEL_78;
      }
    }
    if ( !_4__this )
LABEL_37:
      sub_2213CDC(listRewardAction_5__2, method);
    if ( _4__this->fields.isSkip )
    {
LABEL_50:
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)this->fields._listRewardAction_5__2;
      if ( listRewardAction_5__2 )
      {
        v65 = 0;
        while ( v65 < listRewardAction_5__2->fields._size )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 listRewardAction_5__2,
                                                                                 v65,
                                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
          if ( listRewardAction_5__2 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_83445360(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)listRewardAction_5__2->fields._syncRoot,
              0);
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)this->fields._listRewardAction_5__2;
            ++v65;
            if ( listRewardAction_5__2 )
              continue;
          }
          goto LABEL_37;
        }
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
        if ( listRewardAction_5__2 )
        {
          v66 = 0;
          while ( v66 < listRewardAction_5__2->fields._size )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   listRewardAction_5__2,
                                                                                   v66,
                                                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( listRewardAction_5__2 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRewardAction_5__2, 1, 0);
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
              ++v66;
              if ( listRewardAction_5__2 )
                continue;
            }
            goto LABEL_37;
          }
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.scrollBar;
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          if ( listRewardAction_5__2 )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                                   (UnityEngine_Component_o *)listRewardAction_5__2,
                                                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
            if ( listRewardAction_5__2 )
            {
              UIProgressBar__set_value((UIProgressBar_o *)listRewardAction_5__2, 1.0, 0);
LABEL_65:
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.skipCollider;
              if ( listRewardAction_5__2 )
              {
                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)listRewardAction_5__2, 0, 0);
                listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultIconHideObjList;
                if ( listRewardAction_5__2 )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
                    listRewardAction_5__2,
                    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v81,
                            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v81.fields._current;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67, v68);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
                    {
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70, v71);
                      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v81,
                    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  LOBYTE(listRewardAction_5__2) = 0;
                  return (char)listRewardAction_5__2;
                }
              }
            }
          }
        }
      }
      goto LABEL_37;
    }
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
    v57 = 2;
LABEL_78:
    *((_DWORD *)p__2__current - 2) = v57;
    LOBYTE(listRewardAction_5__2) = 1;
  }
  return (char)listRewardAction_5__2;
}


Il2CppObject *RecipeRewardDialogComponent__StartDisp_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartDisp_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn RecipeRewardDialogComponent__StartDisp_d__43__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartDisp_d__43_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_RecipeRewardDialogComponent__StartDisp_d__43_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *RecipeRewardDialogComponent__StartDisp_d__43__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartDisp_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void RecipeRewardDialogComponent__StartDisp_d__43__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartDisp_d__43_o *this,
        const MethodInfo *method)
{
  ;
}


void RecipeRewardDialogComponent__StartRewardAction_d__44___ctor(
        RecipeRewardDialogComponent__StartRewardAction_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool RecipeRewardDialogComponent__StartRewardAction_d__44__MoveNext(
        RecipeRewardDialogComponent__StartRewardAction_d__44_o *this,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent__StartRewardAction_d__44_o *v2; // x19
  int32_t _1__state; // w8
  struct RecipeRewardDialogComponent_o *_4__this; // x22
  int32_t v5; // w9
  int32_t i_5__2; // w8
  struct RecipeRewardDialogComponent_RewardAction_o *v7; // x8
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct RecipeRewardDialogComponent_RewardAction_o *rewardAction; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v19; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v20; // x8
  struct RecipeRewardDialogComponent_GetEffect_o *getEffect; // x20
  Il2CppObject *Item; // x0
  RecipeRewardDialogComponent__StartRewardAction_d__44_o *v23; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v24; // x8
  RecipeRewardDialogComponent__StartRewardAction_d__44_o *v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 _2__current_low; // x10
  __int64 v35; // x8
  float v36; // s8
  UnityEngine_WaitForSeconds_o *v37; // x20
  MissionNaviTransitionBoardItem_o *v38; // x19
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_596A9F5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_596A9F5 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_41;
    if ( !_4__this->fields.isSkip )
    {
      rewardAction = v2->fields.rewardAction;
      _4__this->fields.canSkip = 1;
      if ( !rewardAction )
        goto LABEL_41;
      this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)_4__this->fields.resultIconHideObjList;
      if ( !this )
        goto LABEL_41;
      this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)this,
                                                                         rewardAction->fields.playCnt,
                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    v19 = v2->fields.rewardAction;
    if ( !v19 )
      goto LABEL_41;
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)_4__this->fields.resultItemObjList;
    if ( !this )
      goto LABEL_41;
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v19->fields.playCnt,
                                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !this )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v20 = v2->fields.rewardAction;
    if ( !v20 )
      goto LABEL_41;
    v20->fields.isEnd = 1;
    return 0;
  }
  else
  {
    if ( _1__state == 1 )
    {
      i_5__2 = v2->fields._i_5__2;
      v2->fields.__1__state = -1;
      v5 = i_5__2 + 1;
      v2->fields._i_5__2 = i_5__2 + 1;
    }
    else
    {
      if ( _1__state )
        return 0;
      v5 = 0;
      v2->fields._i_5__2 = 0;
      v2->fields.__1__state = -1;
    }
    v7 = v2->fields.rewardAction;
    if ( !v7 )
      goto LABEL_41;
    if ( v5 < v7->fields.index )
    {
      if ( _4__this )
      {
        itemDispWaitTime = _4__this->fields.itemDispWaitTime;
        v9 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v9, itemDispWaitTime, 0);
        v2->fields.__2__current = (Il2CppObject *)v9;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v9, v11, v12, v13, v14, v15, v16);
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return 1;
      }
LABEL_41:
      sub_2213CDC(this, method);
    }
    if ( !_4__this )
      goto LABEL_41;
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)_4__this->fields.resultItemObjList;
    if ( !this )
      goto LABEL_41;
    getEffect = _4__this->fields.getEffect;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v7->fields.playCnt,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)GameObjectExtensions__GetParent(
                                                                       (UnityEngine_GameObject_o *)Item,
                                                                       0);
    if ( !this )
      goto LABEL_41;
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0);
    if ( !getEffect )
      goto LABEL_41;
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)((__int64 (__fastcall *)(intptr_t, RecipeRewardDialogComponent__StartRewardAction_d__44_o *, intptr_t))getEffect->fields.invoke_impl)(
                                                                       getEffect->fields.method_code,
                                                                       this,
                                                                       getEffect->fields.method);
    if ( !this )
      goto LABEL_41;
    v23 = this;
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       0);
    v24 = v2->fields.rewardAction;
    if ( !v24 )
      goto LABEL_41;
    v25 = this;
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)_4__this->fields.resultItemObjList;
    if ( !this )
      goto LABEL_41;
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v24->fields.playCnt,
                                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !this )
      goto LABEL_41;
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       0);
    if ( !this )
      goto LABEL_41;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    if ( !v25 )
      goto LABEL_41;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v25, localPosition, 0);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)v23,
                                                                       0);
    if ( !this )
      goto LABEL_41;
    v45.fields.x = 1.25;
    v45.fields.y = 1.25;
    v45.fields.z = 1.25;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v45, 0);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__44_o *)_4__this->fields.teaEffectObjList;
    if ( !this )
      goto LABEL_41;
    v32 = *(_QWORD *)&this->fields.__1__state;
    v33 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v32 )
      goto LABEL_41;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v32 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v23,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = v32 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v35 + 32) = v23;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 32), (int32_t)v23, v26, v27, v28, v29, v30, v31);
    }
    v36 = _4__this->fields.itemDispWaitTime;
    v37 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v37, v36, 0);
    v2->fields.__2__current = (Il2CppObject *)v37;
    v38 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_2213A04(v38, (int32_t)v37, v39, v40, v41, v42, v43, v44);
    v38[-1].fields._BoardType_k__BackingField = 2;
    return 1;
  }
}


Il2CppObject *RecipeRewardDialogComponent__StartRewardAction_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn RecipeRewardDialogComponent__StartRewardAction_d__44__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartRewardAction_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_RecipeRewardDialogComponent__StartRewardAction_d__44_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *RecipeRewardDialogComponent__StartRewardAction_d__44__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void RecipeRewardDialogComponent__StartRewardAction_d__44__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartRewardAction_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void RecipeRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A9EE & 1) == 0 )
  {
    sub_2213A60(&RecipeRewardDialogComponent___c_TypeInfo);
    byte_596A9EE = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecipeRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecipeRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct RecipeRewardDialogComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecipeRewardDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecipeRewardDialogComponent___c___ctor(RecipeRewardDialogComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecipeRewardDialogComponent___c___ClickSkip_b__45_0(
        RecipeRewardDialogComponent___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_596A9EF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A9EF = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x, method);
  UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)x, 0);
}


void RecipeRewardDialogComponent___c__DisplayClass41_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecipeRewardDialogComponent___c__DisplayClass41_0___Open_b__0(
        RecipeRewardDialogComponent___c__DisplayClass41_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x20
  GiftEntity_array *Instance; // x0
  __int64 v7; // x1

  if ( (byte_596A9F0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A9F0 = 1;
  }
  giftList = this->fields.giftList;
  Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (GiftEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___)) == 0
    || (Instance = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, id, 0), !giftList) )
  {
    sub_2213CDC(Instance, v7);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
}


void RecipeRewardDialogComponent___c__DisplayClass41_0___Open_b__1(
        RecipeRewardDialogComponent___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent___c__DisplayClass41_0_o *v2; // x19
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v2 = this;
  if ( (byte_596A9F1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (RecipeRewardDialogComponent___c__DisplayClass41_0_o *)sub_2213A60(&Method_RecipeRewardDialogComponent___c__DisplayClass41_0__Open_b__2__);
    byte_596A9F1 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  _9__2 = v2->fields.__9__2;
  _4__this->fields.state = 2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_RecipeRewardDialogComponent___c__DisplayClass41_0__Open_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v5, v6, v7, v8, v9, v10);
  }
  BaseDialog__Open((BaseDialog_o *)_4__this, _9__2, 0, 0, 0);
}


void RecipeRewardDialogComponent___c__DisplayClass41_0___Open_b__2(
        RecipeRewardDialogComponent___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_596A9F2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13600/*"StartDisp"*/);
    byte_596A9F2 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13600/*"StartDisp"*/, 0);
}


void RecipeRewardDialogComponent___c__DisplayClass42_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecipeRewardDialogComponent___c__DisplayClass42_0___SetResultData_b__0(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent___c__DisplayClass42_0_o *v4; // x19
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  Il2CppObject *prefabResultItem; // x20
  RecipeRewardDialogComponent___c__DisplayClass42_0_o *v7; // x20
  struct RecipeRewardDialogComponent_o *v8; // x8
  RecipeRewardDialogComponent___c__DisplayClass42_0_o *v9; // x22
  struct RecipeRewardDialogComponent_o *v10; // x8
  ItemIconComponent_o *v11; // x22
  int64_t v12; // x3
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct RecipeRewardDialogComponent_o *v19; // x8
  struct RecipeRewardDialogComponent_o *v20; // x8
  _QWORD *v21; // x9
  __int64 eventRecipeEntity_low; // x10
  RecipeRewardDialogComponent_c **v23; // x8
  __int64 v24; // x2
  struct RecipeRewardDialogComponent_o *v25; // x8
  Il2CppObject *prefabTeaItem; // x21
  RecipeRewardDialogComponent___c__DisplayClass42_0_o *v27; // x21
  struct RecipeRewardDialogComponent_o *v28; // x8
  UnityEngine_Transform_o *transform; // x22
  struct RecipeRewardDialogComponent_o *v30; // x8
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UISprite_o *v32; // x20
  int32_t eventId; // w22
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  System_String_o *v37; // x23
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct RecipeRewardDialogComponent_o *v44; // x8
  struct RecipeRewardDialogComponent_o *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  RecipeRewardDialogComponent_c **v48; // x8
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596A9F3 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)sub_2213A60(&StringLiteral_21230/*"icon_{0}"*/);
    byte_596A9F3 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  prefabResultItem = (Il2CppObject *)_4__this->fields.prefabResultItem;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gift, method);
  this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabResultItem,
                                                                  (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_45;
  v7 = this;
  this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0);
  v8 = v4->fields.__4__this;
  if ( !v8 || !this )
    goto LABEL_45;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v8->fields.listRoot, 0);
  this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v7,
                                                                  0);
  v9 = this;
  if ( !byte_5969AE0 )
  {
    this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v9 )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v7,
                                                                  0);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v50.fields.x = v10->fields.iconScale;
  v50.fields.y = v50.fields.x;
  v50.fields.z = v50.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v50, 0);
  this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v7,
                                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !gift )
    goto LABEL_45;
  v11 = (ItemIconComponent_o *)this;
  if ( !this )
    goto LABEL_45;
  v12 = gift->fields.num <= 1 ? -1LL : (unsigned int)gift->fields.num;
  ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)this, gift->fields.type, gift->fields.objectId, v12, 0, 0);
  ItemIconComponent__CalcSetPossession(v11, gift->fields.type, gift->fields.objectId, 0);
  v19 = v4->fields.__4__this;
  if ( !v19 )
    goto LABEL_45;
  this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)v19->fields.resultItemObjList;
  if ( !this )
    goto LABEL_45;
  v20 = this->fields.__4__this;
  v21 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.eventRecipeEntity);
  if ( !v20 )
    goto LABEL_45;
  eventRecipeEntity_low = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)eventRecipeEntity_low >= LODWORD(v20->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->klass + eventRecipeEntity_low;
    LODWORD(this->fields.eventRecipeEntity) = eventRecipeEntity_low + 1;
    v23[4] = (RecipeRewardDialogComponent_c *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v7, v13, v14, v15, v16, v17, v18);
  }
  v25 = v4->fields.__4__this;
  if ( !v25 )
    goto LABEL_45;
  prefabTeaItem = (Il2CppObject *)v25->fields.prefabTeaItem;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gift, v24);
  this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabTeaItem,
                                                                  (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_45;
  v27 = this;
  this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0);
  v28 = v4->fields.__4__this;
  if ( !v28 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v28->fields.iconListRoot, 0);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v27, 0);
  this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v7,
                                                                  0);
  if ( !this )
    goto LABEL_45;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  if ( !transform )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(transform, localPosition, 0);
  this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v27,
                                                                  0);
  v30 = v4->fields.__4__this;
  if ( !v30 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v51.fields.x = v30->fields.iconScale;
  v51.fields.y = v51.fields.x;
  v51.fields.z = v51.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v51, 0);
  this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v27,
                                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  eventRecipeEntity = v4->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_45;
  v32 = (UISprite_o *)this;
  eventId = eventRecipeEntity->fields.eventId;
  iconId = eventRecipeEntity->fields.iconId;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &iconId);
  v37 = System_String__Format((System_String_o *)StringLiteral_21230/*"icon_{0}"*/, v34, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35, v36);
  AtlasManager__SetEventUI_47569484(eventId, v32, v37, 0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v27, 1, 0);
  v44 = v4->fields.__4__this;
  if ( !v44
    || (this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)v44->fields.resultIconHideObjList) == 0
    || (v45 = this->fields.__4__this,
        v46 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.eventRecipeEntity),
        !v45) )
  {
LABEL_45:
    sub_2213CDC(this, gift);
  }
  v47 = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v27,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->klass + v47;
    LODWORD(this->fields.eventRecipeEntity) = v47 + 1;
    v48[4] = (RecipeRewardDialogComponent_c *)v27;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 4), (int32_t)v27, v38, v39, v40, v41, v42, v43);
  }
}