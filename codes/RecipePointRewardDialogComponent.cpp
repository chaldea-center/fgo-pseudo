void __fastcall RecipePointRewardDialogComponent___ctor(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A02AB6 & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Color___TypeInfo, v3);
    byte_4A02AB6 = 1;
  }
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_1B64AA8(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.viewChangeButtonLabelEffectColors, (int32_t)v4, v5, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecipePointRewardDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B649A4(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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
    sub_1B64C5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipePointRewardDialogComponent__OnClickCloseButton(
        RecipePointRewardDialogComponent_o *this,
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
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v15; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A02AB3 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&Method_RecipePointRewardDialogComponent_EndClose__, v8);
    sub_1B64A00(&Method_RecipePointRewardDialogComponent_OnClickCloseButton__, v9);
    byte_4A02AB3 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v10 = Method_RecipePointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_RecipePointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B64A18(Method_RecipePointRewardDialogComponent_OnClickCloseButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B649E4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1B64C5C(0LL, v12);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v16.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69137476((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v15 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_RecipePointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
  }
}


void __fastcall RecipePointRewardDialogComponent__OnClickSwitchShowMode(
        RecipePointRewardDialogComponent_o *this,
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

  if ( (byte_4A02AB4 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, method);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B64A00(&Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__, v7);
    sub_1B64A00(&StringLiteral_23970/*"treasurechest_btn"*/, v8);
    sub_1B64A00(&StringLiteral_23972/*"treasurechest_btn_on"*/, v9);
    byte_4A02AB4 = 1;
  }
  v10 = Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B64A18(Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B649E4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23970/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23972/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_1B64C5C(viewChangeButton, v12);
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
    sub_1B64C64(viewChangeButton, v12);
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
                                       (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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
  RecipePointRewardDialogComponent_o *v29; // x8
  int basePanelList_high; // w25
  signed int max_length; // w24
  Il2CppObject *Component_object; // x24
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x24
  System_Collections_Generic_List_object__o *v35; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x24
  UILabel_o *v39; // x25
  Il2CppObject *ComponentInChildren_object; // x26
  UILabel_o *titleLabel; // x25
  System_String_o *v42; // x0
  UILabel_o *titleNextItemLabel; // x25
  UILabel_o *titleAtLabel; // x25
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *v46; // x23
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  int32_t v49; // w3
  System_Action_o *v50; // x21
  const MethodInfo *v51; // x3

  v10 = this;
  if ( (byte_4A02AB0 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, eventRecipeEntity);
    sub_1B64A00(&AtlasManager_TypeInfo, v11);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____75737760, v12);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UIGrid___, v13);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UISprite___, v14);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventRewardMaster___, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject___ctor__, v16);
    sub_1B64A00(&System_Collections_Generic_List_GameObject__TypeInfo, v17);
    sub_1B64A00(&LocalizationManager_TypeInfo, v18);
    sub_1B64A00(&Method_RecipePointRewardDialogComponent__Open_b__26_0__, v19);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B64A00(&StringLiteral_23970/*"treasurechest_btn"*/, v21);
    sub_1B64A00(&StringLiteral_23976/*"treasurechest_img_bg_reward"*/, v22);
    sub_1B64A00(&StringLiteral_10928/*"RECIPE_DIALOG_CANCEL"*/, v23);
    sub_1B64A00(&StringLiteral_10938/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, v24);
    sub_1B64A00(&StringLiteral_2918/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v25);
    sub_1B64A00(&StringLiteral_10917/*"RECIPE_BOX_EVENT_POINT_REWARD_TITLE"*/, v26);
    sub_1B64A00(&StringLiteral_10934/*"RECIPE_EVENT_POINT"*/, v27);
    this = (RecipePointRewardDialogComponent_o *)sub_1B64A00(&StringLiteral_10935/*"RECIPE_EVENT_POINT_REWARD"*/, v28);
    byte_4A02AB0 = 1;
  }
  v10->fields.state = 1;
  if ( !RecipeRewards )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)v10->fields.listRoot;
  if ( !this )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_34;
  v29 = this;
  this = (RecipePointRewardDialogComponent_o *)v10->fields.scrollBar;
  if ( !this )
    goto LABEL_34;
  basePanelList_high = HIDWORD(v29->fields.basePanelList);
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
                       (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23970/*"treasurechest_btn"*/, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButton;
  v10->fields.isShowPossessionNum = 0;
  if ( !this )
    goto LABEL_34;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_23970/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = v10->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_34;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    sub_1B64C64(this, eventRecipeEntity);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButtonLabel;
  if ( !this )
    goto LABEL_34;
  UILabel__set_effectColor(
    (UILabel_o *)this,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = v10->fields.viewChangeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10938/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_34;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)this, 0LL);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v10->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v35;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v10->fields.resultItemObjList, (int32_t)v35, v36, v37);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10934/*"RECIPE_EVENT_POINT"*/, 0LL);
  if ( !v10->fields.viewChangeButton )
    goto LABEL_34;
  v38 = (Il2CppObject *)this;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)v10->fields.viewChangeButton,
                                                 0LL);
  if ( !this )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 1,
                                                 (const MethodInfo_2E32C08 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75737760);
  if ( !v10->fields.closeButton )
    goto LABEL_34;
  v39 = (UILabel_o *)this;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)v10->fields.closeButton,
                                                 0LL);
  if ( !this )
    goto LABEL_34;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)this,
                                 1,
                                 (const MethodInfo_2E32C08 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75737760);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10938/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v39 )
    goto LABEL_34;
  UILabel__set_text(v39, (System_String_o *)this, 0LL);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10928/*"RECIPE_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)this, 0LL);
  titleLabel = v10->fields.titleLabel;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_10917/*"RECIPE_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  this = (RecipePointRewardDialogComponent_o *)System_String__Format(v42, v38, 0LL);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  titleNextItemLabel = v10->fields.titleNextItemLabel;
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2918/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_34;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)this, 0LL);
  titleAtLabel = v10->fields.titleAtLabel;
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10935/*"RECIPE_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_34;
  UILabel__set_text(titleAtLabel, (System_String_o *)this, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.atNameLabel;
  if ( !this )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v38, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.pointRewardRoot;
  if ( !this )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  AtlasManager__SetEventUI(v10->fields.eventPointBg, (System_String_o *)StringLiteral_23976/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(v10->fields.eventPointRewardBg, (System_String_o *)StringLiteral_23976/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  this = (RecipePointRewardDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  if ( !this
    || (this = (RecipePointRewardDialogComponent_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                       (EventRewardMaster_o *)this,
                                                       eventId,
                                                       EventPointNoGroup,
                                                       0LL),
        !eventRecipeEntity)
    || (v46 = (EventRewardEntity_o *)this,
        AtlasManager__SetItem(v10->fields.eventPointSprite, eventRecipeEntity->fields.eventPointItemId, 0LL),
        RecipePointRewardDialogComponent__SetNextItemLabel(v10, EventPointNoGroup, v46, v47),
        v10->fields.closeCallbackFunc = closeCallback,
        sub_1B649A4(
          (ServantStatusBattleListViewItem_o *)&v10->fields.closeCallbackFunc,
          (int32_t)closeCallback,
          v48,
          v49),
        (this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)v10,
                                                        0LL)) == 0LL) )
  {
LABEL_34:
    sub_1B64C5C(this, eventRecipeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v50 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)v10, Method_RecipePointRewardDialogComponent__Open_b__26_0__, 0LL);
  RecipePointRewardDialogComponent__SetResultData(v10, RecipeRewards, v50, v51);
}


void __fastcall RecipePointRewardDialogComponent__SetNextItemLabel(
        RecipePointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *v12; // x22
  System_String_o *v13; // x23
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *isQp; // x0
  __int64 v19; // x1
  UILabel_o *nextItemLabel; // x19
  System_String_o *v21; // x1
  UILabel_o *atLabel; // x20
  int64_t v23; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A02AB2 & 1) == 0 )
  {
    sub_1B64A00(&long_TypeInfo, userEventPoint);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_117/*" "*/, v8);
    sub_1B64A00(&StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v9);
    sub_1B64A00(&StringLiteral_2921/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v10);
    sub_1B64A00(&StringLiteral_2919/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v11);
    byte_4A02AB2 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2921/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, isQp, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2919/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
        goto LABEL_14;
    }
LABEL_17:
    sub_1B64C5C(isQp, v19);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v12 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v23 = eventRewardEnt->fields.point - userEventPoint;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23, v14, v15, v16);
  isQp = System_String__Format(v13, v17, 0LL);
  if ( !v12 )
    goto LABEL_17;
  UILabel__set_text(v12, isQp, 0LL);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_61396396(nameText, (System_String_o *)StringLiteral_117/*" "*/, countText, 0LL);
    if ( !nextItemLabel )
      goto LABEL_17;
LABEL_14:
    v21 = isQp;
    goto LABEL_15;
  }
  if ( !nextItemLabel )
    goto LABEL_17;
  v21 = countText;
LABEL_15:
  UILabel__set_text(nextItemLabel, v21, 0LL);
}


void __fastcall RecipePointRewardDialogComponent__SetResultData(
        RecipePointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  RecipePointRewardDialogComponent_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  signed int max_length; // w8
  __int64 v12; // x27
  BattleDropItem_o *v13; // x8
  int32_t objectId; // w24
  int32_t type; // w25
  __int64 v16; // x10
  int v17; // w19
  Il2CppObject *prefabResultItem; // x23
  RecipePointRewardDialogComponent_o *v19; // x23
  RecipePointRewardDialogComponent_o *v20; // x26
  int32_t v21; // w3
  ItemIconComponent_o *v22; // x26
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v28; // x8
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4A02AB1 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v6);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    this = (RecipePointRewardDialogComponent_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    byte_4A02AB1 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_1B64C64(this, rewards);
        v13 = rewards->m_Items[v12];
        if ( !v13 )
          break;
        type = v13->fields.type;
        objectId = v13->fields.objectId;
        v16 = 44LL;
        if ( v13->fields.originalNum > 0 )
          v16 = 52LL;
        v17 = *(_DWORD *)((char *)&v13->klass + v16);
        prefabResultItem = (Il2CppObject *)v5->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                       prefabResultItem,
                                                       (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          break;
        v19 = this;
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
        if ( !this )
          break;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.listRoot, 0LL);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)v19,
                                                       0LL);
        v20 = this;
        if ( !byte_49F9821 )
        {
          this = (RecipePointRewardDialogComponent_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, rewards);
          byte_49F9821 = 1;
        }
        if ( !v20 )
          break;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v20,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)v19,
                                                       0LL);
        if ( !this )
          break;
        v30.fields.x = v5->fields.iconScale;
        v30.fields.y = v30.fields.x;
        v30.fields.z = v30.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v30, 0LL);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)v19,
                                                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v21 = v17 <= 1 ? -1 : v17;
        v22 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_37834024((ItemIconComponent_o *)this, type, objectId, v21, 0, 0LL);
        ItemIconComponent__CalcSetPossession(v22, type, objectId, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v19, 1, 0LL);
        this = (RecipePointRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          break;
        v25 = *(_QWORD *)&this->fields.m_CachedPtr;
        v26 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v25 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v25 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v19,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = v25 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v28 + 32) = v19;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)v19, v23, v24);
        }
        this = (RecipePointRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this )
          break;
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !this )
          break;
        this = (RecipePointRewardDialogComponent_o *)((__int64 (__fastcall *)(RecipePointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                       this,
                                                       this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        if ( (int)++v12 >= max_length )
          goto LABEL_30;
      }
LABEL_33:
      sub_1B64C5C(this, rewards);
    }
  }
LABEL_30:
  this = (RecipePointRewardDialogComponent_o *)v5->fields.scrollView;
  if ( !this )
    goto LABEL_33;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( !this )
    goto LABEL_33;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall RecipePointRewardDialogComponent___Open_b__26_0(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4A02AB7 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_RecipePointRewardDialogComponent__Open_b__26_1__, v3);
    byte_4A02AB7 = 1;
  }
  v4 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_RecipePointRewardDialogComponent__Open_b__26_1__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0LL);
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
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A02AB5 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A02AB5 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B64C5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}