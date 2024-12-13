void __fastcall RecipeRewardDialogComponent___ctor(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_Color_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B3B37A & 1) == 0 )
  {
    sub_1BD3458(&BaseDialog_TypeInfo, method);
    sub_1BD3458(&UnityEngine_Color___TypeInfo, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1BD3458(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4B3B37A = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_1BD3500(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.teaEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.teaEffectObjList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  this->fields.maxItemDrawNum = 12;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x19
  RecipeRewardDialogComponent___c_c *v7; // x0
  System_Action_object__o *_9__46_0; // x20
  Il2CppObject *v9; // x21
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B3B375 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_GameObject__TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1BD3458(&Method_RecipeRewardDialogComponent___c__ClickSkip_b__46_0__, v4);
    sub_1BD3458(&RecipeRewardDialogComponent___c_TypeInfo, v5);
    byte_4B3B375 = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    this->fields.isSkip = 1;
    teaEffectObjList = this->fields.teaEffectObjList;
    v7 = RecipeRewardDialogComponent___c_TypeInfo;
    if ( !RecipeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecipeRewardDialogComponent___c_TypeInfo);
      v7 = RecipeRewardDialogComponent___c_TypeInfo;
    }
    _9__46_0 = (System_Action_object__o *)v7->static_fields->__9__46_0;
    if ( !_9__46_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = RecipeRewardDialogComponent___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__46_0 = (System_Action_object__o *)sub_1BD36A4(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(_9__46_0, v9, Method_RecipeRewardDialogComponent___c__ClickSkip_b__46_0__, 0LL);
      static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_0 = (struct System_Action_GameObject__o *)_9__46_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__46_0,
        (int64_t)_9__46_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    if ( !teaEffectObjList )
      sub_1BD36B4(v7, method);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)teaEffectObjList,
      (System_Action_T__o *)_9__46_0,
      (const MethodInfo_35C17D0 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
}


void __fastcall RecipeRewardDialogComponent__EndClose(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4B3B377 & 1) == 0 )
  {
    sub_1BD3458(&Method_ActionExtensions_Call_bool___, method);
    byte_4B3B377 = 1;
  }
  RecipeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2E83DA0 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall RecipeRewardDialogComponent__Init(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BD36B4(0LL, v4);
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B3B376 & 1) == 0 )
  {
    sub_1BD3458(&Method_ActionExtensions_Call_bool___, method);
    sub_1BD3458(&System_Action_TypeInfo, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v8);
    sub_1BD3458(&Method_RecipeRewardDialogComponent_EndClose__, v9);
    sub_1BD3458(&Method_RecipeRewardDialogComponent_OnClickCloseButton__, v10);
    byte_4B3B376 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2E83DA0 *)Method_ActionExtensions_Call_bool___);
    v11 = Method_RecipeRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BD3470(Method_RecipeRewardDialogComponent_OnClickCloseButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BD343C(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1BD36B4(0LL, v13);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70278272((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v16 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_RecipeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v15; // x8
  UISprite_o *v16; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v24; // w20
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B3B378 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, method);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BD3458(&Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__, v7);
    sub_1BD3458(&StringLiteral_24352/*"treasurechest_btn"*/, v8);
    sub_1BD3458(&StringLiteral_24354/*"treasurechest_btn_on"*/, v9);
    byte_4B3B378 = 1;
  }
  v10 = Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BD3470(Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BD343C(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24352/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24354/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v16 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v16, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1BD36B4(viewChangeButton, v12);
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
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_28:
    sub_1BD36BC(viewChangeButton, v12);
  }
  if ( max_length <= 1 )
    goto LABEL_28;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButton )
    goto LABEL_26;
LABEL_20:
  v25.fields.a = *p_r;
  v25.fields.b = *p_a;
  v25.fields.g = *p_b;
  v25.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v25, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v24 = 0;
  while ( v24 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v24,
                                       (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v24;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
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
  __int64 v44; // x23
  int *viewChangeButton; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  Il2CppObject *Component_object; // x27
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_object__o *v60; // x26
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_List_object__o *v67; // x26
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x8
  int32_t size; // w2
  int v76; // w9
  UILabel_o *titleLabel; // x26
  UISprite_o *totalEventPointIcon; // x26
  int32_t eventPointItemId; // w27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x26
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v84; // x27
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  Il2CppObject *v88; // x0
  System_String_o *v89; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v92; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v94; // x27
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x0
  System_Collections_Generic_List_object__o *v99; // x25
  void **v100; // x26
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  GiftEntity_o *v107; // x25
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  __int64 v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x8
  System_Action_int__o *v118; // x25
  __int64 v119; // x8
  __int64 *v120; // x24
  UILabel_o *v121; // x22
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  System_Collections_Generic_List_GiftEntity__o *v128; // x21
  System_Action_o *v129; // x22
  const MethodInfo *v130; // x4
  __int64 v132; // [xsp+10h] [xbp-70h] BYREF
  int v133; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B3B371 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_int__TypeInfo, giftIds);
    sub_1BD3458(&System_Action_TypeInfo, v14);
    sub_1BD3458(&AtlasManager_TypeInfo, v15);
    sub_1BD3458(&Method_BasicHelper_ForEach_int___, v16);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v17);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UISprite___, v18);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76991584, v19);
    sub_1BD3458(&GiftEntity_TypeInfo, v20);
    sub_1BD3458(&int_TypeInfo, v21);
    sub_1BD3458(&long_TypeInfo, v22);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity__Add__, v23);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Clear__, v24);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v25);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject___ctor__, v26);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v27);
    sub_1BD3458(&System_Collections_Generic_List_GameObject__TypeInfo, v28);
    sub_1BD3458(&System_Collections_Generic_List_GiftEntity__TypeInfo, v29);
    sub_1BD3458(&LocalizationManager_TypeInfo, v30);
    sub_1BD3458(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__0__, v31);
    sub_1BD3458(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__1__, v32);
    sub_1BD3458(&RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo, v33);
    sub_1BD3458(&StringLiteral_13629/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v34);
    sub_1BD3458(&StringLiteral_11136/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, v35);
    sub_1BD3458(&StringLiteral_11140/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, v36);
    sub_1BD3458(&StringLiteral_855/*"+"*/, v37);
    sub_1BD3458(&StringLiteral_11134/*"RECIPE_EVENT_GET_POINT_NUM"*/, v38);
    sub_1BD3458(&StringLiteral_24352/*"treasurechest_btn"*/, v39);
    sub_1BD3458(&StringLiteral_13628/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v40);
    sub_1BD3458(&StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v41);
    sub_1BD3458(&StringLiteral_24358/*"treasurechest_img_bg_reward"*/, v42);
    sub_1BD3458(&StringLiteral_11141/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, v43);
    byte_4B3B371 = 1;
  }
  v44 = sub_1BD36A4(RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_53;
  *(_QWORD *)(v44 + 24) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v44 + 24), (int64_t)this, v47, v48, v49, v50, v51, v52);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_53;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24352/*"treasurechest_btn"*/, 0LL);
  this->fields.getEffect = getEffect;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.getEffect, (int64_t)getEffect, v54, v55, v56, v57, v58, v59);
  this->fields.isShowPossessionNum = 0;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v60 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v60;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.resultItemObjList, (int64_t)v60, v61, v62, v63, v64, v65, v66);
  v67 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v67,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v67;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.resultIconHideObjList,
    (int64_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  teaEffectObjList = this->fields.teaEffectObjList;
  if ( teaEffectObjList )
  {
    size = teaEffectObjList->fields._size;
    v76 = teaEffectObjList->fields._version + 1;
    teaEffectObjList->fields._size = 0;
    teaEffectObjList->fields._version = v76;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)teaEffectObjList->fields._items, 0, size, 0LL);
  }
  viewChangeButton = (int *)this->fields.skipCollider;
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)viewChangeButton, 1, 0LL);
  if ( !giftIds )
    goto LABEL_53;
  viewChangeButton = (int *)this->fields.getPointRoot;
  this->fields.maxPlayCnt = *(_QWORD *)&giftIds->max_length;
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11136/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
  if ( !eventRecipeEntity )
    goto LABEL_53;
  viewChangeButton = (int *)System_String__Format(
                              (System_String_o *)viewChangeButton,
                              (Il2CppObject *)eventRecipeEntity->fields.name,
                              0LL);
  if ( !titleLabel )
    goto LABEL_53;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  eventPointItemId = eventRecipeEntity->fields.eventPointItemId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24358/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24358/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_53;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24352/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_53;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_54;
  viewChangeButton = (int *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_53;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11141/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_53;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11134/*"RECIPE_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_53;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v133 = this->fields.maxPlayCnt * eventRecipeEntity->fields.eventPointNum;
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133, v85, v86, v87);
  v89 = System_String__Format(v84, v88, 0LL);
  viewChangeButton = (int *)System_String__Concat_62525248((System_String_o *)StringLiteral_855/*"+"*/, v89, 0LL);
  if ( !getNumLabel )
    goto LABEL_53;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  if ( !eventRecipeGiftEntity )
    goto LABEL_53;
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventRecipeGiftEntity->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v92 = EventPointNoGroup;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11140/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_53;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v132 = v92;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v132, v95, v96, v97);
  viewChangeButton = (int *)System_String__Format(v94, v98, 0LL);
  if ( !totalNumLabel )
    goto LABEL_53;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v99 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v99,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v44 + 16) = v99;
  v100 = (void **)(v44 + 16);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v44 + 16), (int64_t)v99, v101, v102, v103, v104, v105, v106);
  v107 = (GiftEntity_o *)sub_1BD36A4(GiftEntity_TypeInfo);
  GiftEntity___ctor(v107, 0LL);
  if ( !v107 )
    goto LABEL_53;
  v107->fields.type = 2;
  v107->fields.objectId = eventRecipeEntity->fields.eventPointItemId;
  v107->fields.num = eventRecipeEntity->fields.eventPointNum * giftIds->max_length;
  viewChangeButton = (int *)*v100;
  if ( !*v100 )
    goto LABEL_53;
  v114 = *((_QWORD *)viewChangeButton + 2);
  v115 = Method_System_Collections_Generic_List_GiftEntity__Add__;
  ++viewChangeButton[7];
  if ( !v114 )
    goto LABEL_53;
  v116 = viewChangeButton[6];
  if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)viewChangeButton,
      (Il2CppObject *)v107,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
  }
  else
  {
    v117 = v114 + 8 * v116;
    viewChangeButton[6] = v116 + 1;
    *(_QWORD *)(v117 + 32) = v107;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v117 + 32), (int64_t)v107, v108, v109, v110, v111, v112, v113);
  }
  v118 = (System_Action_int__o *)sub_1BD36A4(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v118,
    (Il2CppObject *)v44,
    Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__0__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)giftIds,
    (System_Action_T__o *)v118,
    (const MethodInfo_2F1DCC8 *)Method_BasicHelper_ForEach_int___);
  v119 = *(_QWORD *)(v44 + 16);
  if ( !v119 )
    goto LABEL_53;
  viewChangeButton = (int *)this->fields.scrollBar;
  this->fields.maxPlayCnt = *(_DWORD *)(v119 + 24);
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !viewChangeButton )
    goto LABEL_53;
  UIProgressBar__set_value((UIProgressBar_o *)viewChangeButton, 0.0, 0LL);
  viewChangeButton = (int *)this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxPlayCnt > this->fields.maxItemDrawNum,
    0LL);
  v120 = &StringLiteral_13628/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  if ( pointRewards && pointRewards->max_length )
    v120 = &StringLiteral_13629/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  viewChangeButton = (int *)this->fields.closeButton;
  if ( !viewChangeButton
    || (viewChangeButton = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL)) == 0LL
    || (viewChangeButton = (int *)UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)viewChangeButton,
                                    1,
                                    (const MethodInfo_2F28C14 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76991584)) == 0LL )
  {
LABEL_53:
    sub_1BD36B4(viewChangeButton, v46);
  }
  if ( !viewChangeButton[6] )
LABEL_54:
    sub_1BD36BC(viewChangeButton, v46);
  v121 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)*v120, 0LL);
  if ( !v121 )
    goto LABEL_53;
  UILabel__set_text(v121, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeCallback,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  viewChangeButton = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v128 = *(System_Collections_Generic_List_GiftEntity__o **)(v44 + 16);
  v129 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v129,
    (Il2CppObject *)v44,
    Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__1__,
    0LL);
  RecipeRewardDialogComponent__SetResultData(this, v128, eventRecipeEntity, v129, v130);
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
  __int64 v14; // x23
  UnityEngine_Component_o *scrollView; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Action_object__o *v29; // x22

  if ( (byte_4B3B372 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_GiftEntity__TypeInfo, giftList);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UIGrid___, v9);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity__ForEach__, v11);
    sub_1BD3458(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__SetResultData_b__0__, v12);
    sub_1BD3458(&RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo, v13);
    byte_4B3B372 = 1;
  }
  v14 = sub_1BD36A4(RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = eventRecipeEntity;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)eventRecipeEntity, v23, v24, v25, v26, v27, v28);
  v29 = (System_Action_object__o *)sub_1BD36A4(System_Action_GiftEntity__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)v14,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__SetResultData_b__0__,
    0LL);
  if ( !giftList )
    goto LABEL_12;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Action_T__o *)v29,
    (const MethodInfo_35C17D0 *)Method_System_Collections_Generic_List_GiftEntity__ForEach__);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIScrollView___)) == 0LL
    || (UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.listRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.castClass)(
          scrollView,
          scrollView->klass[1]._1.declaringType),
        (scrollView = (UnityEngine_Component_o *)this->fields.iconListRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_1BD36B4(scrollView, v16);
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
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B3B373 & 1) == 0 )
  {
    sub_1BD3458(&RecipeRewardDialogComponent__StartDisp_d__44_TypeInfo, method);
    byte_4B3B373 = 1;
  }
  v3 = sub_1BD36A4(RecipeRewardDialogComponent__StartDisp_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall RecipeRewardDialogComponent__StartRewardAction(
        RecipeRewardDialogComponent_o *this,
        RecipeRewardDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B3B374 & 1) == 0 )
  {
    sub_1BD3458(&RecipeRewardDialogComponent__StartRewardAction_d__45_TypeInfo, rewardAction);
    byte_4B3B374 = 1;
  }
  v5 = sub_1BD36A4(RecipeRewardDialogComponent__StartRewardAction_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)rewardAction, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent__get_closeBtnObject(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B3B379 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B3B379 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BD36B4(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent_GetEffect___ctor(
        RecipeRewardDialogComponent_GetEffect_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BD3518(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A1A9E4;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1BD3510(v10);
        v16 = sub_1BD39CC(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A1AAE0;
          else
            v13 = (Il2CppObject *)sub_1A1AAA4;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A1AA20;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A1A9F4;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A1A9C4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BD36D0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BD3580(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1A974;
}


System_IAsyncResult_o *__fastcall RecipeRewardDialogComponent_GetEffect__BeginInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = parenTransform;
  return (System_IAsyncResult_o *)sub_1BD340C(this, &v6, callback, object);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__EndInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)sub_1BD3410(result, 0LL, method);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__Invoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_Transform_o *, _QWORD))this->fields.m_target)(
                                       this->fields.original_method_info,
                                       parenTransform,
                                       *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall RecipeRewardDialogComponent_RewardAction___ctor(
        RecipeRewardDialogComponent_RewardAction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__StartDisp_d__44___ctor(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall RecipeRewardDialogComponent__StartDisp_d__44__MoveNext(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  RecipeRewardDialogComponent__StartDisp_d__44_o *v8; // x19
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
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  bool result; // w0
  int listRewardAction_5__2_high; // w8
  int32_t maxPlayCnt; // w9
  int v35; // w21
  UIProgressBar_o *v36; // x20
  float value; // s0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int v45; // w8
  System_Collections_Generic_List_object__o *v46; // x22
  RecipeRewardDialogComponent__StartDisp_d__44_o **p_listRewardAction_5__2; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int v54; // w23
  int64_t v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 _2__current_low; // x10
  __int64 v65; // x8
  int _2__current; // w9
  int32_t v67; // w22
  RecipeRewardDialogComponent__StartDisp_d__44_o *v68; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v70; // x2
  System_Collections_IEnumerator_o *started; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int32_t playCnt; // w8
  int32_t v79; // w21
  int32_t v80; // w19
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v83; // x20
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4B3B381 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Count__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Count__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Item__, v19);
    sub_1BD3458(&System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo, v20);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v21);
    sub_1BD3458(&RecipeRewardDialogComponent_RewardAction_TypeInfo, v22);
    this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)sub_1BD3458(&UnityEngine_WaitForSeconds_TypeInfo, v23);
    byte_4B3B381 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v25 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v25, 0.3, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v25;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v8->fields.__2__current, (int64_t)v25, v26, v27, v28, v29, v30, v31);
      result = 1;
      v8->fields.__1__state = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_19;
    case 2:
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v8->fields._listRewardAction_5__2;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_59;
      goto LABEL_37;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_59;
      listRewardAction_5__2_high = HIDWORD(this->fields._listRewardAction_5__2);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.scrollBar;
      v35 = maxPlayCnt % listRewardAction_5__2_high
          ? maxPlayCnt / listRewardAction_5__2_high + 1
          : maxPlayCnt / listRewardAction_5__2_high;
      if ( !this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_59;
      v36 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v36, (float)(1.0 / (float)((float)((float)v35 * 0.5) + -1.0)) + value, 0LL);
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BD33FC(p__2__current, 0LL, v39, v40, v41, v42, v43, v44);
      v45 = 4;
      goto LABEL_76;
    case 4:
      v8->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    v8->fields._listRewardAction_5__2 = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v8->fields._listRewardAction_5__2, 0LL, v2, v3, v4, v5, v6, v7);
LABEL_19:
    v46 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v46,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    v8->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__o *)v46;
    p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__44_o **)&v8->fields._listRewardAction_5__2;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&v8->fields._listRewardAction_5__2,
      (int64_t)v46,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    if ( !_4__this )
      goto LABEL_59;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v54 = 0;
      do
      {
        if ( v54 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
          break;
        v55 = sub_1BD36A4(RecipeRewardDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v55, 0LL);
        if ( !v55 )
          goto LABEL_59;
        *(_DWORD *)(v55 + 16) = v54;
        *(_DWORD *)(v55 + 20) = v54 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v62 = *(_QWORD *)&this->fields.__1__state;
        v63 = Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v62 )
          goto LABEL_59;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v62 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v55,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = v62 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v65 + 32) = v55;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v65 + 32), v55, v56, v57, v58, v59, v60, v61);
        }
        ++v54;
      }
      while ( v54 < _4__this->fields.maxItemDrawNum );
    }
    this = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_59;
    _2__current = (int)this->fields.__2__current;
    _4__this->fields.playCnt += _2__current;
    if ( _2__current >= 1 )
    {
      v67 = 0;
      do
      {
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   v67,
                                                                   (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v68 = this;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)*p_listRewardAction_5__2,
                 v67,
                 (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
        started = RecipeRewardDialogComponent__StartRewardAction(
                    _4__this,
                    (RecipeRewardDialogComponent_RewardAction_o *)Item,
                    v70);
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_MonoBehaviour__StartCoroutine_70263544(
                                                                   (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                   started,
                                                                   0LL);
        if ( !v68 )
          goto LABEL_59;
        v68->fields.__4__this = (struct RecipeRewardDialogComponent_o *)this;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v68->fields.__4__this, (int64_t)this, v72, v73, v74, v75, v76, v77);
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
      }
      while ( ++v67 < SLODWORD(this->fields.__2__current) );
    }
LABEL_37:
    this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)this,
                                                               LODWORD(this->fields.__2__current) - 1,
                                                               (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
    if ( !this )
      goto LABEL_59;
    if ( LOBYTE(this->fields.__2__current) )
    {
      if ( !_4__this )
        goto LABEL_59;
      goto LABEL_43;
    }
    if ( !_4__this )
      goto LABEL_59;
    if ( !_4__this->fields.isSkip )
      break;
LABEL_43:
    if ( _4__this->fields.isSkip )
    {
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v8->fields._listRewardAction_5__2;
      if ( this )
      {
        v79 = 0;
        while ( v79 < SLODWORD(this->fields.__2__current) )
        {
          this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     v79,
                                                                     (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
          if ( this )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_70264164(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)this->fields.__4__this,
              0LL);
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v8->fields._listRewardAction_5__2;
            ++v79;
            if ( this )
              continue;
          }
          goto LABEL_59;
        }
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultItemObjList;
        if ( this )
        {
          v80 = 0;
          while ( v80 < SLODWORD(this->fields.__2__current) )
          {
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v80,
                                                                       (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultItemObjList;
              ++v80;
              if ( this )
                continue;
            }
            goto LABEL_59;
          }
          this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.scrollBar;
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          if ( this )
          {
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)this,
                                                                       (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
            if ( this )
            {
              UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
LABEL_63:
              this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.skipCollider;
              if ( this )
              {
                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
                this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultIconHideObjList;
                if ( this )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v90,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v90,
                            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v90.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
                    {
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      UnityEngine_Object__Destroy_70278272((UnityEngine_Object_o *)current, 0LL);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v90,
                    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  return 0;
                }
              }
            }
          }
        }
      }
LABEL_59:
      sub_1BD36B4(this, method);
    }
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_63;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v83 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v83, scrollWait, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v83;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BD33FC(p__2__current, (int64_t)v83, v84, v85, v86, v87, v88, v89);
      v45 = 3;
      goto LABEL_76;
    }
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BD33FC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  v45 = 2;
LABEL_76:
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v45;
  return 1;
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartDisp_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RecipeRewardDialogComponent__StartDisp_d__44__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_RecipeRewardDialogComponent__StartDisp_d__44_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartDisp_d__44__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall RecipeRewardDialogComponent__StartDisp_d__44__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipeRewardDialogComponent__StartRewardAction_d__45___ctor(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecipeRewardDialogComponent__StartRewardAction_d__45__MoveNext(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct RecipeRewardDialogComponent_o *_4__this; // x22
  struct RecipeRewardDialogComponent_RewardAction_o *rewardAction; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v8; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v9; // x8
  bool result; // w0
  int32_t i_5__2; // w8
  struct RecipeRewardDialogComponent_RewardAction_o *v12; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v14; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct RecipeRewardDialogComponent_GetEffect_o *getEffect; // x20
  Il2CppObject *Item; // x0
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v24; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v25; // x8
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v26; // x21
  int v27; // s0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 _2__current_low; // x10
  __int64 v39; // x8
  float v40; // s8
  UnityEngine_WaitForSeconds_o *v41; // x20
  PartyOrganizationUtility_o *v42; // x19
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B3B382 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)sub_1BD3458(
                                                                       &UnityEngine_WaitForSeconds_TypeInfo,
                                                                       v4);
    byte_4B3B382 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_40;
    if ( !_4__this->fields.isSkip )
    {
      _4__this->fields.canSkip = 1;
      rewardAction = v2->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_40;
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultIconHideObjList;
      if ( !this )
        goto LABEL_40;
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)this,
                                                                         rewardAction->fields.playCnt,
                                                                         (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    v8 = v2->fields.rewardAction;
    if ( v8 )
    {
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
      if ( this )
      {
        this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           v8->fields.playCnt,
                                                                           (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v9 = v2->fields.rewardAction;
          if ( v9 )
          {
            result = 0;
            v9->fields.isEnd = 1;
            return result;
          }
        }
      }
    }
LABEL_40:
    sub_1BD36B4(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v2->fields._i_5__2;
    v2->fields.__1__state = -1;
    _1__state = i_5__2 + 1;
    v2->fields._i_5__2 = _1__state;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v2->fields._i_5__2 = 0;
  }
  v12 = v2->fields.rewardAction;
  if ( !v12 || !_4__this )
    goto LABEL_40;
  if ( _1__state < v12->fields.index )
  {
    itemDispWaitTime = _4__this->fields.itemDispWaitTime;
    v14 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v14, itemDispWaitTime, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v14;
    p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
    sub_1BD33FC(p__2__current, (int64_t)v14, v16, v17, v18, v19, v20, v21);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_40;
  getEffect = _4__this->fields.getEffect;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this,
           v12->fields.playCnt,
           (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)GameObjectExtensions__GetParent(
                                                                     (UnityEngine_GameObject_o *)Item,
                                                                     0LL);
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  if ( !getEffect )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, RecipeRewardDialogComponent__StartRewardAction_d__45_o *, _QWORD))getEffect->fields.m_target)(
                                                                     getEffect->fields.original_method_info,
                                                                     this,
                                                                     *(_QWORD *)&getEffect->fields.extra_arg);
  if ( !this )
    goto LABEL_40;
  v24 = this;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0LL);
  v25 = v2->fields.rewardAction;
  if ( !v25 )
    goto LABEL_40;
  v26 = this;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     v25->fields.playCnt,
                                                                     (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0LL);
  if ( !this )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v26 )
    goto LABEL_40;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)v24,
                                                                     0LL);
  if ( !this )
    goto LABEL_40;
  v49.fields.x = 1.25;
  v49.fields.y = 1.25;
  v49.fields.z = 1.25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v49, 0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.teaEffectObjList;
  if ( !this )
    goto LABEL_40;
  v36 = *(_QWORD *)&this->fields.__1__state;
  v37 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v36 )
    goto LABEL_40;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v24,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = v36 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v39 + 32) = v24;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)v24, v30, v31, v32, v33, v34, v35);
  }
  v40 = _4__this->fields.itemDispWaitTime;
  v41 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v41, v40, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v41;
  v42 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1BD33FC(v42, (int64_t)v41, v43, v44, v45, v46, v47, v48);
  *(_DWORD *)&v42[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
  return 1;
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartRewardAction_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RecipeRewardDialogComponent__StartRewardAction_d__45__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_RecipeRewardDialogComponent__StartRewardAction_d__45_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartRewardAction_d__45__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall RecipeRewardDialogComponent__StartRewardAction_d__45__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipeRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3B37B & 1) == 0 )
  {
    sub_1BD3458(&RecipeRewardDialogComponent___c_TypeInfo, v1);
    byte_4B3B37B = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(RecipeRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecipeRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct RecipeRewardDialogComponent___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)RecipeRewardDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall RecipeRewardDialogComponent___c___ctor(
        RecipeRewardDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c___ClickSkip_b__46_0(
        RecipeRewardDialogComponent___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4B3B37C & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, x);
    byte_4B3B37C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70278272((UnityEngine_Object_o *)x, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__0(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x20
  GiftEntity_array *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B3B37D & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&id);
    sub_1BD3458(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B3B37D = 1;
  }
  giftList = this->fields.giftList;
  Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (GiftEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL
    || (Instance = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, id, 0LL), !giftList) )
  {
    sub_1BD36B4(Instance, v9);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__1(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent___c__DisplayClass42_0_o *v2; // x19
  __int64 v3; // x1
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v2 = this;
  if ( (byte_4B3B37E & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)sub_1BD3458(
                                                                    &Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__2__,
                                                                    v3);
    byte_4B3B37E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1BD36B4(this, method);
  _4__this->fields.state = 2;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.__9__2, (int64_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  BaseDialog__Open((BaseDialog_o *)_4__this, _9__2, 0, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__2(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_4B3B37F & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_13135/*"StartDisp"*/, method);
    byte_4B3B37F = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1BD36B4(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13135/*"StartDisp"*/, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___SetResultData_b__0(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  Il2CppObject *prefabResultItem; // x20
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v14; // x20
  struct RecipeRewardDialogComponent_o *v15; // x8
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v16; // x22
  struct RecipeRewardDialogComponent_o *v17; // x8
  ItemIconComponent_o *v18; // x22
  int32_t v19; // w3
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct RecipeRewardDialogComponent_o *v26; // x8
  struct RecipeRewardDialogComponent_o *v27; // x8
  _QWORD *v28; // x9
  __int64 eventRecipeEntity_low; // x10
  RecipeRewardDialogComponent_c **v30; // x8
  struct RecipeRewardDialogComponent_o *v31; // x8
  Il2CppObject *prefabTeaItem; // x21
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v33; // x21
  struct RecipeRewardDialogComponent_o *v34; // x8
  UnityEngine_Transform_o *transform; // x22
  int v36; // s0
  struct RecipeRewardDialogComponent_o *v39; // x8
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UISprite_o *v44; // x20
  int32_t eventId; // w22
  Il2CppObject *v46; // x0
  System_String_o *v47; // x23
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct RecipeRewardDialogComponent_o *v54; // x8
  struct RecipeRewardDialogComponent_o *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  RecipeRewardDialogComponent_c **v58; // x8
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B3B380 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, gift);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_1BD3458(&int_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_1BD3458(&StringLiteral_20442/*"icon_{0}"*/, v11);
    byte_4B3B380 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  prefabResultItem = (Il2CppObject *)_4__this->fields.prefabResultItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabResultItem,
                                                                  (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_45;
  v14 = this;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 || !this )
    goto LABEL_45;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v15->fields.listRoot, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v14,
                                                                  0LL);
  v16 = this;
  if ( !byte_4B31941 )
  {
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_1BD3458(&UnityEngine_Vector3_TypeInfo, gift);
    byte_4B31941 = 1;
  }
  if ( !v16 )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v14,
                                                                  0LL);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v60.fields.x = v17->fields.iconScale;
  v60.fields.y = v60.fields.x;
  v60.fields.z = v60.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v60, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v14,
                                                                  (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !gift )
    goto LABEL_45;
  v18 = (ItemIconComponent_o *)this;
  if ( !this )
    goto LABEL_45;
  v19 = gift->fields.num <= 1 ? -1 : gift->fields.num;
  ItemIconComponent__SetGift_38924152(
    (ItemIconComponent_o *)this,
    gift->fields.type,
    gift->fields.objectId,
    v19,
    0,
    0LL);
  ItemIconComponent__CalcSetPossession(v18, gift->fields.type, gift->fields.objectId, 0LL);
  v26 = v4->fields.__4__this;
  if ( !v26 )
    goto LABEL_45;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v26->fields.resultItemObjList;
  if ( !this )
    goto LABEL_45;
  v27 = this->fields.__4__this;
  v28 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.eventRecipeEntity);
  if ( !v27 )
    goto LABEL_45;
  eventRecipeEntity_low = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)eventRecipeEntity_low >= LODWORD(v27->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v14,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &v27->klass + eventRecipeEntity_low;
    LODWORD(this->fields.eventRecipeEntity) = eventRecipeEntity_low + 1;
    v30[4] = (RecipeRewardDialogComponent_c *)v14;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v14, v20, v21, v22, v23, v24, v25);
  }
  v31 = v4->fields.__4__this;
  if ( !v31 )
    goto LABEL_45;
  prefabTeaItem = (Il2CppObject *)v31->fields.prefabTeaItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabTeaItem,
                                                                  (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_45;
  v33 = this;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v34 = v4->fields.__4__this;
  if ( !v34 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v34->fields.iconListRoot, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v33, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v14,
                                                                  0LL);
  if ( !this )
    goto LABEL_45;
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v36, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v33,
                                                                  0LL);
  v39 = v4->fields.__4__this;
  if ( !v39 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v61.fields.x = v39->fields.iconScale;
  v61.fields.y = v61.fields.x;
  v61.fields.z = v61.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v61, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v33,
                                                                  (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  eventRecipeEntity = v4->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_45;
  v44 = (UISprite_o *)this;
  eventId = eventRecipeEntity->fields.eventId;
  iconId = eventRecipeEntity->fields.iconId;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v40, v41, v42);
  v47 = System_String__Format((System_String_o *)StringLiteral_20442/*"icon_{0}"*/, v46, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_38642884(eventId, v44, v47, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v33, 1, 0LL);
  v54 = v4->fields.__4__this;
  if ( !v54
    || (this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v54->fields.resultIconHideObjList) == 0LL
    || (v55 = this->fields.__4__this,
        v56 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.eventRecipeEntity),
        !v55) )
  {
LABEL_45:
    sub_1BD36B4(this, gift);
  }
  v57 = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)v57 >= LODWORD(v55->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v33,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v55->klass + v57;
    LODWORD(this->fields.eventRecipeEntity) = v57 + 1;
    v58[4] = (RecipeRewardDialogComponent_c *)v33;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v33, v48, v49, v50, v51, v52, v53);
  }
}