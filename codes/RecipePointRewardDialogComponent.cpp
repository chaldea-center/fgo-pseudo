void __fastcall RecipePointRewardDialogComponent___ctor(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B39E3 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&UnityEngine_Color___TypeInfo);
    byte_42B39E3 = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_B5299C(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipePointRewardDialogComponent__OnClickCloseButton(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v6; // x20
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B39E0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_RecipePointRewardDialogComponent_EndClose__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B39E0 = 1;
  }
  memset(&v7, 0, sizeof(v7));
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
      sub_B52A5C(0LL, v3);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v7.fields.current;
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
        UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_RecipePointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
  }
}


void __fastcall RecipePointRewardDialogComponent__OnClickSwitchShowMode(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v6; // x8
  UISprite_o *v7; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v16; // x20
  int size; // w8
  __int64 v18; // x0
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B39E1 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_22983/*"treasurechest_btn"*/);
    sub_B52984(&StringLiteral_22985/*"treasurechest_btn_on"*/);
    byte_42B39E1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v6 = isShowPossessionNum ? (System_String_o **)&StringLiteral_22983/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_22985/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v6, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v7 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v7, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B52A5C(viewChangeButton, v3);
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
    v18 = sub_B52A88(viewChangeButton);
    sub_B52A28(v18, 0LL);
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
  v19.fields.b = *p_a;
  v19.fields.g = *p_b;
  v19.fields.r = *p_g;
  v19.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v19, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v16 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v16 >= size )
      break;
    if ( size <= (unsigned int)v16 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v16];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v16;
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
  RecipePointRewardDialogComponent_o *v11; // x8
  int basePanelList_high; // w25
  signed int max_length; // w24
  WebViewObject_o *Component_WebViewObject; // x24
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x24
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  Il2CppObject *v24; // x24
  UILabel_o *v25; // x25
  UILabel_o *ComponentInChildren_UILabel; // x26
  UILabel_o *titleLabel; // x25
  System_String_o *v28; // x0
  UILabel_o *titleNextItemLabel; // x25
  UILabel_o *titleAtLabel; // x25
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *v32; // x23
  const MethodInfo *v33; // x3
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x3
  __int64 v42; // x0

  v10 = this;
  if ( (byte_42B39DD & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_RecipePointRewardDialogComponent__Open_b__26_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_22983/*"treasurechest_btn"*/);
    sub_B52984(&StringLiteral_22989/*"treasurechest_img_bg_reward"*/);
    sub_B52984(&StringLiteral_11125/*"RECIPE_DIALOG_CANCEL"*/);
    sub_B52984(&StringLiteral_11135/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_B52984(&StringLiteral_2505/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    sub_B52984(&StringLiteral_11114/*"RECIPE_BOX_EVENT_POINT_REWARD_TITLE"*/);
    sub_B52984(&StringLiteral_11131/*"RECIPE_EVENT_POINT"*/);
    this = (RecipePointRewardDialogComponent_o *)sub_B52984(&StringLiteral_11132/*"RECIPE_EVENT_POINT_REWARD"*/);
    byte_42B39DD = 1;
  }
  v10->fields.state = 1;
  if ( !RecipeRewards )
    goto LABEL_36;
  this = (RecipePointRewardDialogComponent_o *)v10->fields.listRoot;
  if ( !this )
    goto LABEL_36;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_36;
  v11 = this;
  this = (RecipePointRewardDialogComponent_o *)v10->fields.scrollBar;
  if ( !this )
    goto LABEL_36;
  basePanelList_high = HIDWORD(v11->fields.basePanelList);
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
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22983/*"treasurechest_btn"*/, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButton;
  v10->fields.isShowPossessionNum = 0;
  if ( !this )
    goto LABEL_36;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_22983/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = v10->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_36;
  if ( !viewChangeButtonLabelEffectColors->max_length )
  {
    v42 = sub_B52A88(this);
    sub_B52A28(v42, 0LL);
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
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11135/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_36;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)this, 0LL);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v10->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&v10->fields.resultItemObjList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11131/*"RECIPE_EVENT_POINT"*/, 0LL);
  if ( !v10->fields.viewChangeButton )
    goto LABEL_36;
  v24 = (Il2CppObject *)this;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)v10->fields.viewChangeButton,
                                                 0LL);
  if ( !this )
    goto LABEL_36;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                                 (UnityEngine_Component_o *)this,
                                                 1,
                                                 (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  if ( !v10->fields.closeButton )
    goto LABEL_36;
  v25 = (UILabel_o *)this;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)v10->fields.closeButton,
                                                 0LL);
  if ( !this )
    goto LABEL_36;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11135/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v25 )
    goto LABEL_36;
  UILabel__set_text(v25, (System_String_o *)this, 0LL);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11125/*"RECIPE_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_36;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)this, 0LL);
  titleLabel = v10->fields.titleLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11114/*"RECIPE_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  this = (RecipePointRewardDialogComponent_o *)System_String__Format(v28, v24, 0LL);
  if ( !titleLabel )
    goto LABEL_36;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  titleNextItemLabel = v10->fields.titleNextItemLabel;
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2505/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_36;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)this, 0LL);
  titleAtLabel = v10->fields.titleAtLabel;
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11132/*"RECIPE_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_36;
  UILabel__set_text(titleAtLabel, (System_String_o *)this, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.atNameLabel;
  if ( !this )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v24, 0LL);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.pointRewardRoot;
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  AtlasManager__SetEventUI(v10->fields.eventPointBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(v10->fields.eventPointRewardBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  this = (RecipePointRewardDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  this = (RecipePointRewardDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  if ( !this
    || (this = (RecipePointRewardDialogComponent_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                       (EventRewardMaster_o *)this,
                                                       eventId,
                                                       EventPointNoGroup,
                                                       0LL),
        !eventRecipeEntity)
    || (v32 = (EventRewardEntity_o *)this,
        AtlasManager__SetItem(v10->fields.eventPointSprite, eventRecipeEntity->fields.eventPointItemId, 0LL),
        RecipePointRewardDialogComponent__SetNextItemLabel(v10, EventPointNoGroup, v32, v33),
        v10->fields.closeCallbackFunc = closeCallback,
        sub_B52920(
          (BattleServantConfConponent_o *)&v10->fields.closeCallbackFunc,
          (System_Int32_array **)closeCallback,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39),
        (this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)v10,
                                                        0LL)) == 0LL) )
  {
LABEL_36:
    sub_B52A5C(this, eventRecipeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v40 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v10, Method_RecipePointRewardDialogComponent__Open_b__26_0__, 0LL);
  RecipePointRewardDialogComponent__SetResultData(v10, RecipeRewards, v40, v41);
}


void __fastcall RecipePointRewardDialogComponent__SetNextItemLabel(
        RecipePointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  UILabel_o *v7; // x22
  System_String_o *v8; // x23
  Il2CppObject *v9; // x0
  System_String_o *isQp; // x0
  __int64 v11; // x1
  UILabel_o *nextItemLabel; // x19
  System_String_o *v13; // x1
  UILabel_o *atLabel; // x20
  int64_t v15; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42B39DF & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_B52984(&StringLiteral_2508/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_B52984(&StringLiteral_2506/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    byte_42B39DF = 1;
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
    isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2508/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, isQp, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2506/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
        goto LABEL_16;
    }
LABEL_19:
    sub_B52A5C(isQp, v11);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v7 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v15 = eventRewardEnt->fields.point - userEventPoint;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
  isQp = System_String__Format(v8, v9, 0LL);
  if ( !v7 )
    goto LABEL_19;
  UILabel__set_text(v7, isQp, 0LL);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_44570600(nameText, (System_String_o *)StringLiteral_81/*" "*/, countText, 0LL);
    if ( !nextItemLabel )
      goto LABEL_19;
LABEL_16:
    v13 = isQp;
    goto LABEL_17;
  }
  if ( !nextItemLabel )
    goto LABEL_19;
  v13 = countText;
LABEL_17:
  UILabel__set_text(nextItemLabel, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipePointRewardDialogComponent__SetResultData(
        RecipePointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  RecipePointRewardDialogComponent_o *v5; // x21
  signed int max_length; // w8
  __int64 v7; // x26
  BattleDropItem_o *v8; // x8
  int originalNum; // w19
  int32_t objectId; // w22
  int32_t type; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x24
  UnityEngine_GameObject_o *v13; // x24
  UnityEngine_Transform_o *transform; // x25
  int v15; // s0
  int32_t v18; // w3
  ItemIconComponent_o *v19; // x25
  __int64 v20; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42B39DE & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (RecipePointRewardDialogComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B39DE = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= max_length )
        {
          v20 = sub_B52A88(this);
          sub_B52A28(v20, 0LL);
        }
        v8 = rewards->m_Items[v7];
        if ( !v8 )
          break;
        originalNum = v8->fields.originalNum;
        if ( originalNum <= 0 )
          originalNum = v8->fields.num;
        type = v8->fields.type;
        objectId = v8->fields.objectId;
        prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                       prefabResultItem,
                                                       (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          break;
        v13 = (UnityEngine_GameObject_o *)this;
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
        if ( !this )
          break;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v13, 0LL);
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          break;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
        if ( !this )
          break;
        v22.fields.x = v5->fields.iconScale;
        v22.fields.y = v22.fields.x;
        v22.fields.z = v22.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v22, 0LL);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v13,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v18 = originalNum <= 1 ? -1 : originalNum;
        v19 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v18, 0, 0LL);
        ItemIconComponent__CalcSetPossession(v19, type, objectId, 0LL);
        UnityEngine_GameObject__SetActive(v13, 1, 0LL);
        this = (RecipePointRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
        this = (RecipePointRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this )
          break;
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !this )
          break;
        this = (RecipePointRewardDialogComponent_o *)((__int64 (__fastcall *)(RecipePointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                       this,
                                                       this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        if ( (int)++v7 >= max_length )
          goto LABEL_25;
      }
LABEL_28:
      sub_B52A5C(this, rewards);
    }
  }
LABEL_25:
  this = (RecipePointRewardDialogComponent_o *)v5->fields.scrollView;
  if ( !this )
    goto LABEL_28;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( !this )
    goto LABEL_28;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall RecipePointRewardDialogComponent___Open_b__26_0(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42B39E4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_RecipePointRewardDialogComponent__Open_b__26_1__);
    byte_42B39E4 = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RecipePointRewardDialogComponent__Open_b__26_1__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v3, 0, 0LL);
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

  if ( (byte_42B39E2 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B39E2 = 1;
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
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}