void __fastcall RecipePointRewardDialogComponent___ctor(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_Color_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1

  if ( (byte_4B1A371 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, v4, v5);
    byte_4B1A371 = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v13);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipePointRewardDialogComponent__CheckIsSerializeFieldNotNull(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipePointRewardDialogComponent__EndClose(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecipePointRewardDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall RecipePointRewardDialogComponent__Init(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipePointRewardDialogComponent__OnClickCloseButton(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x20
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x20
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1A36E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_RecipePointRewardDialogComponent_EndClose__, v14, v15);
    sub_1BCA7E0(&Method_RecipePointRewardDialogComponent_OnClickCloseButton__, v16, v17);
    byte_4B1A36E = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v18 = Method_RecipePointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_RecipePointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1BCA7F8(Method_RecipePointRewardDialogComponent_OnClickCloseButton__);
    v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1BCAA3C(0LL, v20);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v29.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
        UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_RecipePointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v28, 0LL);
  }
}


void __fastcall RecipePointRewardDialogComponent__OnClickSwitchShowMode(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v23; // x8
  UISprite_o *v24; // x20
  __int64 v25; // x1
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v33; // w20
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1A36F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__, v12, v13);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24319/*"treasurechest_btn_on"*/, v16, v17);
    byte_4B1A36F = 1;
  }
  v18 = Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v23 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24317/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24319/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v23, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v24 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v24, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1BCAA3C(viewChangeButton, v20);
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
    sub_1BCAA44(viewChangeButton, v20);
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
  v34.fields.a = *p_r;
  v34.fields.b = *p_a;
  v34.fields.g = *p_b;
  v34.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v34, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v33 = 0;
  while ( v33 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v33,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v33;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
  }
}


void __fastcall RecipePointRewardDialogComponent__Open(
        RecipePointRewardDialogComponent_o *this,
        EventRecipeEntity_o *eventRecipeEntity,
        BattleDropItem_array *RecipeRewards,
        int32_t eventId,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  RecipePointRewardDialogComponent_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  RecipePointRewardDialogComponent_o *v47; // x8
  int basePanelList_high; // w25
  signed int max_length; // w24
  __int64 v50; // x1
  Il2CppObject *Component_object; // x24
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v53; // x1
  UILabel_o *viewChangeButtonLabel; // x24
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_List_object__o *v58; // x24
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  Il2CppObject *v65; // x24
  UILabel_o *v66; // x25
  Il2CppObject *ComponentInChildren_object; // x26
  UILabel_o *titleLabel; // x25
  System_String_o *v69; // x0
  UILabel_o *titleNextItemLabel; // x25
  UILabel_o *titleAtLabel; // x25
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *v73; // x23
  const MethodInfo *v74; // x3
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  System_Action_o *v84; // x21
  const MethodInfo *v85; // x3

  v10 = this;
  if ( (byte_4B1A36B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, eventRecipeEntity, RecipeRewards);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRewardMaster___, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_RecipePointRewardDialogComponent__Open_b__26_0__, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_24323/*"treasurechest_img_bg_reward"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_11114/*"RECIPE_DIALOG_CANCEL"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_11124/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_2959/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_11103/*"RECIPE_BOX_EVENT_POINT_REWARD_TITLE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_11120/*"RECIPE_EVENT_POINT"*/, v43, v44);
    this = (RecipePointRewardDialogComponent_o *)sub_1BCA7E0(&StringLiteral_11121/*"RECIPE_EVENT_POINT_REWARD"*/, v45, v46);
    byte_4B1A36B = 1;
  }
  v10->fields.state = 1;
  if ( !RecipeRewards )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)v10->fields.listRoot;
  if ( !this )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_34;
  v47 = this;
  this = (RecipePointRewardDialogComponent_o *)v10->fields.scrollBar;
  if ( !this )
    goto LABEL_34;
  basePanelList_high = HIDWORD(v47->fields.basePanelList);
  max_length = RecipeRewards->max_length;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
  if ( !this )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 2 * basePanelList_high < max_length, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButton;
  if ( !this )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v50);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButton;
  v10->fields.isShowPossessionNum = 0;
  if ( !this )
    goto LABEL_34;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = v10->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_34;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    sub_1BCAA44(this, eventRecipeEntity);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButtonLabel;
  if ( !this )
    goto LABEL_34;
  UILabel__set_effectColor(
    (UILabel_o *)this,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = v10->fields.viewChangeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11124/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_34;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)this, 0LL);
  v58 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v55,
                                                       v56,
                                                       v57);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v10->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v58;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.resultItemObjList, (int64_t)v58, v59, v60, v61, v62, v63, v64);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11120/*"RECIPE_EVENT_POINT"*/, 0LL);
  if ( !v10->fields.viewChangeButton )
    goto LABEL_34;
  v65 = (Il2CppObject *)this;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)v10->fields.viewChangeButton,
                                                 0LL);
  if ( !this )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 1,
                                                 (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !v10->fields.closeButton )
    goto LABEL_34;
  v66 = (UILabel_o *)this;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)v10->fields.closeButton,
                                                 0LL);
  if ( !this )
    goto LABEL_34;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)this,
                                 1,
                                 (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11124/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v66 )
    goto LABEL_34;
  UILabel__set_text(v66, (System_String_o *)this, 0LL);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11114/*"RECIPE_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)this, 0LL);
  titleLabel = v10->fields.titleLabel;
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11103/*"RECIPE_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  this = (RecipePointRewardDialogComponent_o *)System_String__Format(v69, v65, 0LL);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  titleNextItemLabel = v10->fields.titleNextItemLabel;
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2959/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_34;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)this, 0LL);
  titleAtLabel = v10->fields.titleAtLabel;
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11121/*"RECIPE_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_34;
  UILabel__set_text(titleAtLabel, (System_String_o *)this, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.atNameLabel;
  if ( !this )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v65, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.pointRewardRoot;
  if ( !this )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  AtlasManager__SetEventUI(v10->fields.eventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(v10->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  this = (RecipePointRewardDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  if ( !this
    || (this = (RecipePointRewardDialogComponent_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                       (EventRewardMaster_o *)this,
                                                       eventId,
                                                       EventPointNoGroup,
                                                       0LL),
        !eventRecipeEntity)
    || (v73 = (EventRewardEntity_o *)this,
        AtlasManager__SetItem(v10->fields.eventPointSprite, eventRecipeEntity->fields.eventPointItemId, 0LL),
        RecipePointRewardDialogComponent__SetNextItemLabel(v10, EventPointNoGroup, v73, v74),
        v10->fields.closeCallbackFunc = closeCallback,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v10->fields.closeCallbackFunc,
          (int64_t)closeCallback,
          v75,
          v76,
          v77,
          v78,
          v79,
          v80),
        (this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)v10,
                                                        0LL)) == 0LL) )
  {
LABEL_34:
    sub_1BCAA3C(this, eventRecipeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v84 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v81, v82, v83);
  System_Action___ctor(v84, (Il2CppObject *)v10, Method_RecipePointRewardDialogComponent__Open_b__26_0__, 0LL);
  RecipePointRewardDialogComponent__SetResultData(v10, RecipeRewards, v84, v85);
}


void __fastcall RecipePointRewardDialogComponent__SetNextItemLabel(
        RecipePointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  UILabel_o *v18; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  System_String_o *isQp; // x0
  __int64 v22; // x1
  UILabel_o *nextItemLabel; // x19
  System_String_o *v24; // x1
  UILabel_o *atLabel; // x20
  int64_t v26; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B1A36D & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, userEventPoint, eventRewardEnt);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_2962/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_2960/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v15, v16);
    byte_4B1A36D = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, userEventPoint);
    isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2962/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, isQp, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2960/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
        goto LABEL_14;
    }
LABEL_17:
    sub_1BCAA3C(isQp, v22);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v18 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v26 = eventRewardEnt->fields.point - userEventPoint;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v26);
  isQp = System_String__Format(v19, v20, 0LL);
  if ( !v18 )
    goto LABEL_17;
  UILabel__set_text(v18, isQp, 0LL);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_62412480(nameText, (System_String_o *)StringLiteral_116/*" "*/, countText, 0LL);
    if ( !nextItemLabel )
      goto LABEL_17;
LABEL_14:
    v24 = isQp;
    goto LABEL_15;
  }
  if ( !nextItemLabel )
    goto LABEL_17;
  v24 = countText;
LABEL_15:
  UILabel__set_text(nextItemLabel, v24, 0LL);
}


void __fastcall RecipePointRewardDialogComponent__SetResultData(
        RecipePointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  RecipePointRewardDialogComponent_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  signed int max_length; // w8
  __int64 v17; // x27
  BattleDropItem_o *v18; // x8
  int32_t objectId; // w24
  int32_t type; // w25
  __int64 v21; // x10
  int v22; // w19
  Il2CppObject *prefabResultItem; // x23
  RecipePointRewardDialogComponent_o *v24; // x23
  __int64 v25; // x2
  RecipePointRewardDialogComponent_o *v26; // x26
  int32_t v27; // w3
  ItemIconComponent_o *v28; // x26
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v38; // x8
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4B1A36C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards, callBack);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13);
    this = (RecipePointRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B1A36C = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= max_length )
          sub_1BCAA44(this, rewards);
        v18 = rewards->m_Items[v17];
        if ( !v18 )
          break;
        type = v18->fields.type;
        objectId = v18->fields.objectId;
        v21 = 44LL;
        if ( v18->fields.originalNum > 0 )
          v21 = 52LL;
        v22 = *(_DWORD *)((char *)&v18->klass + v21);
        prefabResultItem = (Il2CppObject *)v5->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewards);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                       prefabResultItem,
                                                       (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          break;
        v24 = this;
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
        if ( !this )
          break;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.listRoot, 0LL);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)v24,
                                                       0LL);
        v26 = this;
        if ( !byte_4B109C1 )
        {
          this = (RecipePointRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, rewards, v25);
          byte_4B109C1 = 1;
        }
        if ( !v26 )
          break;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v26,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)v24,
                                                       0LL);
        if ( !this )
          break;
        v40.fields.x = v5->fields.iconScale;
        v40.fields.y = v40.fields.x;
        v40.fields.z = v40.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v40, 0LL);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)v24,
                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v27 = v22 <= 1 ? -1 : v22;
        v28 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)this, type, objectId, v27, 0, 0LL);
        ItemIconComponent__CalcSetPossession(v28, type, objectId, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v24, 1, 0LL);
        this = (RecipePointRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          break;
        v35 = *(_QWORD *)&this->fields.m_CachedPtr;
        v36 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v35 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v35 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v24,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = v35 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v38 + 32) = v24;
          sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 32), (int64_t)v24, v29, v30, v31, v32, v33, v34);
        }
        this = (RecipePointRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this )
          break;
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !this )
          break;
        this = (RecipePointRewardDialogComponent_o *)((__int64 (__fastcall *)(RecipePointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                       this,
                                                       this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        if ( (int)++v17 >= max_length )
          goto LABEL_30;
      }
LABEL_33:
      sub_1BCAA3C(this, rewards);
    }
  }
LABEL_30:
  this = (RecipePointRewardDialogComponent_o *)v5->fields.scrollView;
  if ( !this )
    goto LABEL_33;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( !this )
    goto LABEL_33;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall RecipePointRewardDialogComponent___Open_b__26_0(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B1A372 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecipePointRewardDialogComponent__Open_b__26_1__, v5, v6);
    byte_4B1A372 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_RecipePointRewardDialogComponent__Open_b__26_1__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v7, 0, 0LL);
}


void __fastcall RecipePointRewardDialogComponent___Open_b__26_1(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall RecipePointRewardDialogComponent__get_closeBtnObject(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A370 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A370 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}