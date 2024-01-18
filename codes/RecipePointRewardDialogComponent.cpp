void __fastcall RecipePointRewardDialogComponent___ctor(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4186129 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Color___TypeInfo, v3);
    byte_4186129 = 1;
  }
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_B2C374(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecipePointRewardDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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
    sub_B2C434(0LL, v4);
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
  __int64 v10; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v13; // x20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4186126 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_RecipePointRewardDialogComponent_EndClose__, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    byte_4186126 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B2C434(0LL, v10);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v14.fields.current;
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
        UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_RecipePointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
  __int64 v10; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v13; // x8
  UISprite_o *v14; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v23; // x20
  int size; // w8
  __int64 v25; // x0
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4186127 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_22793/*"treasurechest_btn"*/, v8);
    sub_B2C35C(&StringLiteral_22795/*"treasurechest_btn_on"*/, v9);
    byte_4186127 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v13 = isShowPossessionNum ? (System_String_o **)&StringLiteral_22793/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_22795/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v13, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v14 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v14, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B2C434(viewChangeButton, v10);
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
    v25 = sub_B2C460(viewChangeButton);
    sub_B2C400(v25, 0LL);
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
  v26.fields.b = *p_a;
  v26.fields.g = *p_b;
  v26.fields.r = *p_g;
  v26.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v26, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v23 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v23 >= size )
      break;
    if ( size <= (unsigned int)v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v23];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v23;
        if ( resultItemObjList )
          continue;
      }
    }
    goto LABEL_30;
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
  WebViewObject_o *Component_WebViewObject; // x24
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x24
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  Il2CppObject *v42; // x24
  UILabel_o *v43; // x25
  UILabel_o *ComponentInChildren_UILabel; // x26
  UILabel_o *titleLabel; // x25
  System_String_o *v46; // x0
  UILabel_o *titleNextItemLabel; // x25
  UILabel_o *titleAtLabel; // x25
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *v50; // x23
  const MethodInfo *v51; // x3
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Action_o *v58; // x21
  const MethodInfo *v59; // x3
  __int64 v60; // x0

  v10 = this;
  if ( (byte_4186123 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, eventRecipeEntity);
    sub_B2C35C(&AtlasManager_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664, v12);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, v13);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardMaster___, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&Method_RecipePointRewardDialogComponent__Open_b__26_0__, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&StringLiteral_22793/*"treasurechest_btn"*/, v21);
    sub_B2C35C(&StringLiteral_22799/*"treasurechest_img_bg_reward"*/, v22);
    sub_B2C35C(&StringLiteral_11038/*"RECIPE_DIALOG_CANCEL"*/, v23);
    sub_B2C35C(&StringLiteral_11048/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, v24);
    sub_B2C35C(&StringLiteral_2473/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v25);
    sub_B2C35C(&StringLiteral_11027/*"RECIPE_BOX_EVENT_POINT_REWARD_TITLE"*/, v26);
    sub_B2C35C(&StringLiteral_11044/*"RECIPE_EVENT_POINT"*/, v27);
    this = (RecipePointRewardDialogComponent_o *)sub_B2C35C(&StringLiteral_11045/*"RECIPE_EVENT_POINT_REWARD"*/, v28);
    byte_4186123 = 1;
  }
  v10->fields.state = 1;
  if ( !RecipeRewards )
    goto LABEL_36;
  this = (RecipePointRewardDialogComponent_o *)v10->fields.listRoot;
  if ( !this )
    goto LABEL_36;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_36;
  v29 = this;
  this = (RecipePointRewardDialogComponent_o *)v10->fields.scrollBar;
  if ( !this )
    goto LABEL_36;
  basePanelList_high = HIDWORD(v29->fields.basePanelList);
  max_length = RecipeRewards->max_length;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 2 * basePanelList_high < max_length, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButton;
  if ( !this )
    goto LABEL_36;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22793/*"treasurechest_btn"*/, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButton;
  v10->fields.isShowPossessionNum = 0;
  if ( !this )
    goto LABEL_36;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_22793/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = v10->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_36;
  if ( !viewChangeButtonLabelEffectColors->max_length )
  {
    v60 = sub_B2C460(this);
    sub_B2C400(v60, 0LL);
  }
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButtonLabel;
  if ( !this )
    goto LABEL_36;
  UILabel__set_effectColor(
    (UILabel_o *)this,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = v10->fields.viewChangeButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11048/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_36;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)this, 0LL);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v10->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v10->fields.resultItemObjList,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11044/*"RECIPE_EVENT_POINT"*/, 0LL);
  if ( !v10->fields.viewChangeButton )
    goto LABEL_36;
  v42 = (Il2CppObject *)this;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)v10->fields.viewChangeButton,
                                                 0LL);
  if ( !this )
    goto LABEL_36;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                                 (UnityEngine_Component_o *)this,
                                                 1,
                                                 (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  if ( !v10->fields.closeButton )
    goto LABEL_36;
  v43 = (UILabel_o *)this;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)v10->fields.closeButton,
                                                 0LL);
  if ( !this )
    goto LABEL_36;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11048/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v43 )
    goto LABEL_36;
  UILabel__set_text(v43, (System_String_o *)this, 0LL);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11038/*"RECIPE_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_36;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)this, 0LL);
  titleLabel = v10->fields.titleLabel;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11027/*"RECIPE_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  this = (RecipePointRewardDialogComponent_o *)System_String__Format(v46, v42, 0LL);
  if ( !titleLabel )
    goto LABEL_36;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  titleNextItemLabel = v10->fields.titleNextItemLabel;
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2473/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_36;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)this, 0LL);
  titleAtLabel = v10->fields.titleAtLabel;
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11045/*"RECIPE_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_36;
  UILabel__set_text(titleAtLabel, (System_String_o *)this, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.atNameLabel;
  if ( !this )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v42, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.pointRewardRoot;
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  AtlasManager__SetEventUI(v10->fields.eventPointBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(v10->fields.eventPointRewardBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  this = (RecipePointRewardDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  this = (RecipePointRewardDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardMaster___);
  if ( !this
    || (this = (RecipePointRewardDialogComponent_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                       (EventRewardMaster_o *)this,
                                                       eventId,
                                                       EventPointNoGroup,
                                                       0LL),
        !eventRecipeEntity)
    || (v50 = (EventRewardEntity_o *)this,
        AtlasManager__SetItem(v10->fields.eventPointSprite, eventRecipeEntity->fields.eventPointItemId, 0LL),
        RecipePointRewardDialogComponent__SetNextItemLabel(v10, EventPointNoGroup, v50, v51),
        v10->fields.closeCallbackFunc = closeCallback,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v10->fields.closeCallbackFunc,
          (System_Int32_array **)closeCallback,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57),
        (this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)v10,
                                                        0LL)) == 0LL) )
  {
LABEL_36:
    sub_B2C434(this, eventRecipeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v58 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)v10, Method_RecipePointRewardDialogComponent__Open_b__26_0__, 0LL);
  RecipePointRewardDialogComponent__SetResultData(v10, RecipeRewards, v58, v59);
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
  Il2CppObject *v14; // x0
  System_String_o *isQp; // x0
  __int64 v16; // x1
  UILabel_o *nextItemLabel; // x19
  System_String_o *v18; // x1
  UILabel_o *atLabel; // x20
  int64_t v20; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4186125 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, userEventPoint);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_80/*" "*/, v8);
    sub_B2C35C(&StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v9);
    sub_B2C35C(&StringLiteral_2476/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v10);
    sub_B2C35C(&StringLiteral_2474/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v11);
    byte_4186125 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2476/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, isQp, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2474/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
        goto LABEL_16;
    }
LABEL_19:
    sub_B2C434(isQp, v16);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v12 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v20 = eventRewardEnt->fields.point - userEventPoint;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20);
  isQp = System_String__Format(v13, v14, 0LL);
  if ( !v12 )
    goto LABEL_19;
  UILabel__set_text(v12, isQp, 0LL);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_44307816(nameText, (System_String_o *)StringLiteral_80/*" "*/, countText, 0LL);
    if ( !nextItemLabel )
      goto LABEL_19;
LABEL_16:
    v18 = isQp;
    goto LABEL_17;
  }
  if ( !nextItemLabel )
    goto LABEL_19;
  v18 = countText;
LABEL_17:
  UILabel__set_text(nextItemLabel, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x26
  BattleDropItem_o *v13; // x8
  int originalNum; // w19
  int32_t objectId; // w22
  int32_t type; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x24
  UnityEngine_GameObject_o *v18; // x24
  UnityEngine_Transform_o *transform; // x25
  int v20; // s0
  int32_t v23; // w3
  ItemIconComponent_o *v24; // x25
  __int64 v25; // x0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4186124 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    this = (RecipePointRewardDialogComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4186124 = 1;
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
        {
          v25 = sub_B2C460(this);
          sub_B2C400(v25, 0LL);
        }
        v13 = rewards->m_Items[v12];
        if ( !v13 )
          break;
        originalNum = v13->fields.originalNum;
        if ( originalNum <= 0 )
          originalNum = v13->fields.num;
        type = v13->fields.type;
        objectId = v13->fields.objectId;
        prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                       prefabResultItem,
                                                       (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          break;
        v18 = (UnityEngine_GameObject_o *)this;
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
        if ( !this )
          break;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v18, 0LL);
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          break;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
        if ( !this )
          break;
        v27.fields.x = v5->fields.iconScale;
        v27.fields.y = v27.fields.x;
        v27.fields.z = v27.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v27, 0LL);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v18,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v23 = originalNum <= 1 ? -1 : originalNum;
        v24 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v23, 0, 0LL);
        ItemIconComponent__CalcSetPossession(v24, type, objectId, 0LL);
        UnityEngine_GameObject__SetActive(v18, 1, 0LL);
        this = (RecipePointRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
        this = (RecipePointRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this )
          break;
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !this )
          break;
        this = (RecipePointRewardDialogComponent_o *)((__int64 (__fastcall *)(RecipePointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                       this,
                                                       this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        if ( (int)++v12 >= max_length )
          goto LABEL_25;
      }
LABEL_28:
      sub_B2C434(this, rewards);
    }
  }
LABEL_25:
  this = (RecipePointRewardDialogComponent_o *)v5->fields.scrollView;
  if ( !this )
    goto LABEL_28;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( !this )
    goto LABEL_28;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall RecipePointRewardDialogComponent___Open_b__26_0(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_418612A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_RecipePointRewardDialogComponent__Open_b__26_1__, v3);
    byte_418612A = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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

  if ( (byte_4186128 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186128 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}