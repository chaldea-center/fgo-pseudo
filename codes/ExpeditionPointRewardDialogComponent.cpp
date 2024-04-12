void __fastcall ExpeditionPointRewardDialogComponent___ctor(
        ExpeditionPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AF04E & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&UnityEngine_Color___TypeInfo);
    byte_42AF04E = 1;
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


void __fastcall ExpeditionPointRewardDialogComponent__EndClose(
        ExpeditionPointRewardDialogComponent_o *this,
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

  if ( (byte_42AF04A & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    byte_42AF04A = 1;
  }
  ExpeditionPointRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
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


void __fastcall ExpeditionPointRewardDialogComponent__Init(
        ExpeditionPointRewardDialogComponent_o *this,
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


void __fastcall ExpeditionPointRewardDialogComponent__OnClickCloseButton(
        ExpeditionPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  Il2CppObject *current; // x20
  System_Action_o *v5; // x20
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AF049 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_ExpeditionPointRewardDialogComponent_EndClose__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF049 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    this->fields.state = 3;
    if ( !scrollView )
      goto LABEL_22;
    scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              scrollView,
                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !scrollView )
      goto LABEL_22;
    UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    scrollView = (UnityEngine_Component_o *)this->fields.resultItemObjList;
    if ( !scrollView )
LABEL_22:
      sub_B52A5C(scrollView, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v6,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v6,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v6.fields.current;
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
      &v6,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ExpeditionPointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall ExpeditionPointRewardDialogComponent__OnClickSwitchShowMode(
        ExpeditionPointRewardDialogComponent_o *this,
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

  if ( (byte_42AF04B & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_22983/*"treasurechest_btn"*/);
    sub_B52984(&StringLiteral_22985/*"treasurechest_btn_on"*/);
    byte_42AF04B = 1;
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


void __fastcall ExpeditionPointRewardDialogComponent__Open(
        ExpeditionPointRewardDialogComponent_o *this,
        EventExpeditionEntity_o *eventExpeditionEntity,
        BattleDropItem_array *expeditionRewards,
        int32_t eventId,
        System_Action_bool__o *setMaskMethod,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v13; // x23
  UnityEngine_Component_o *listRoot; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x24
  UnityEngine_Component_o *v35; // x8
  int monitor_high; // w25
  int v37; // w24
  WebViewObject_o *Component_WebViewObject; // x24
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x24
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  Il2CppObject *v47; // x24
  UILabel_o *v48; // x25
  UILabel_o *ComponentInChildren_UILabel; // x26
  UILabel_o *titleLabel; // x25
  System_String_o *v51; // x0
  UILabel_o *titleNextItemLabel; // x25
  UILabel_o *titleAtLabel; // x25
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *v55; // x22
  const MethodInfo *v56; // x3
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Action_o *v63; // x20
  __int64 v64; // x0

  if ( (byte_42AF046 & 1) == 0 )
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
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_ExpeditionPointRewardDialogComponent___c__DisplayClass27_0__Open_b__0__);
    sub_B52984(&ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_TypeInfo);
    sub_B52984(&StringLiteral_5823/*"EXPEDITION_EVENT_POINT"*/);
    sub_B52984(&StringLiteral_5808/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/);
    sub_B52984(&StringLiteral_22983/*"treasurechest_btn"*/);
    sub_B52984(&StringLiteral_5829/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_B52984(&StringLiteral_22989/*"treasurechest_img_bg_reward"*/);
    sub_B52984(&StringLiteral_2505/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    sub_B52984(&StringLiteral_5821/*"EXPEDITION_DIALOG_CANCEL"*/);
    sub_B52984(&StringLiteral_5824/*"EXPEDITION_EVENT_POINT_REWARD"*/);
    byte_42AF046 = 1;
  }
  v13 = sub_B52A54(ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_TypeInfo);
  ExpeditionPointRewardDialogComponent___c__DisplayClass27_0___ctor(
    (ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_36;
  *(_QWORD *)(v13 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = expeditionRewards;
  sub_B52920(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)expeditionRewards,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = *(_QWORD *)(v13 + 24);
  if ( !v34 )
    goto LABEL_36;
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_36;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          listRoot,
                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !listRoot )
    goto LABEL_36;
  v35 = listRoot;
  listRoot = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !listRoot )
    goto LABEL_36;
  monitor_high = HIDWORD(v35[1].monitor);
  v37 = *(_DWORD *)(v34 + 24);
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listRoot, 0LL);
  if ( !listRoot )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 2 * monitor_high < v37, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !listRoot )
    goto LABEL_36;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              listRoot,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22983/*"treasurechest_btn"*/, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !listRoot )
    goto LABEL_36;
  UIButton__set_normalSprite((UIButton_o *)listRoot, (System_String_o *)StringLiteral_22983/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_36;
  if ( !viewChangeButtonLabelEffectColors->max_length )
  {
    v64 = sub_B52A88(listRoot);
    sub_B52A28(v64, 0LL);
  }
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !listRoot )
    goto LABEL_36;
  UILabel__set_effectColor(
    (UILabel_o *)listRoot,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v40;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5823/*"EXPEDITION_EVENT_POINT"*/, 0LL);
  if ( !this->fields.viewChangeButton )
    goto LABEL_36;
  v47 = (Il2CppObject *)listRoot;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.viewChangeButton,
                                          0LL);
  if ( !listRoot )
    goto LABEL_36;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                          listRoot,
                                          1,
                                          (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  if ( !this->fields.closeButton )
    goto LABEL_36;
  v48 = (UILabel_o *)listRoot;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.closeButton,
                                          0LL);
  if ( !listRoot )
    goto LABEL_36;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  listRoot,
                                  1,
                                  (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5829/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v48 )
    goto LABEL_36;
  UILabel__set_text(v48, (System_String_o *)listRoot, 0LL);
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5821/*"EXPEDITION_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_36;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)listRoot, 0LL);
  titleLabel = this->fields.titleLabel;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_5808/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  listRoot = (UnityEngine_Component_o *)System_String__Format(v51, v47, 0LL);
  if ( !titleLabel )
    goto LABEL_36;
  UILabel__set_text(titleLabel, (System_String_o *)listRoot, 0LL);
  titleNextItemLabel = this->fields.titleNextItemLabel;
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2505/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_36;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)listRoot, 0LL);
  titleAtLabel = this->fields.titleAtLabel;
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5824/*"EXPEDITION_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_36;
  UILabel__set_text(titleAtLabel, (System_String_o *)listRoot, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.atNameLabel;
  if ( !listRoot )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)listRoot, (System_String_o *)v47, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.pointRewardRoot;
  if ( !listRoot )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  listRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !listRoot )
    goto LABEL_36;
  listRoot = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)listRoot,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                (EventRewardMaster_o *)listRoot,
                                                eventId,
                                                EventPointNoGroup,
                                                0LL),
        !eventExpeditionEntity)
    || (v55 = (EventRewardEntity_o *)listRoot,
        AtlasManager__SetItem(this->fields.eventPointSprite, eventExpeditionEntity->fields.eventPointItemId, 0LL),
        ExpeditionPointRewardDialogComponent__SetNextItemLabel(this, EventPointNoGroup, v55, v56),
        this->fields.closeCallbackFunc = closeCallback,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
          (System_Int32_array **)closeCallback,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62),
        (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL) )
  {
LABEL_36:
    sub_B52A5C(listRoot, v15);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0LL);
  v63 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v13,
    Method_ExpeditionPointRewardDialogComponent___c__DisplayClass27_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v63, 0, 0LL);
}


void __fastcall ExpeditionPointRewardDialogComponent__SetNextItemLabel(
        ExpeditionPointRewardDialogComponent_o *this,
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

  if ( (byte_42AF048 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_B52984(&StringLiteral_2508/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_B52984(&StringLiteral_2506/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    byte_42AF048 = 1;
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
    isQp = System_String__Concat_44568316(nameText, countText, 0LL);
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


void __fastcall ExpeditionPointRewardDialogComponent__SetPossession(
        ExpeditionPointRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v7; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AF04C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF04C = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_13:
    sub_B52A5C(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionPointRewardDialogComponent__SetResultData(
        ExpeditionPointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  ExpeditionPointRewardDialogComponent_o *v4; // x20
  signed int max_length; // w8
  __int64 v6; // x25
  BattleDropItem_o *v7; // x8
  int originalNum; // w28
  int32_t objectId; // w21
  int32_t type; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x22
  UnityEngine_GameObject_o *v12; // x22
  UnityEngine_Transform_o *transform; // x24
  int v14; // s0
  int32_t v17; // w3
  ItemIconComponent_o *v18; // x24
  ExpeditionPointRewardDialogComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42AF047 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ExpeditionPointRewardDialogComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF047 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( (unsigned int)v6 >= max_length )
        {
          v21 = sub_B52A88(this);
          sub_B52A28(v21, 0LL);
        }
        v7 = rewards->m_Items[v6];
        if ( !v7 )
          goto LABEL_26;
        originalNum = v7->fields.originalNum;
        if ( originalNum <= 0 )
          originalNum = v7->fields.num;
        type = v7->fields.type;
        objectId = v7->fields.objectId;
        prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v4->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                           prefabResultItem,
                                                           (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_26;
        v12 = (UnityEngine_GameObject_o *)this;
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
        if ( !this )
          goto LABEL_26;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v12, 0LL);
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_26;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
        if ( !this )
          goto LABEL_26;
        v22.fields.x = v4->fields.iconScale;
        v22.fields.y = v22.fields.x;
        v22.fields.z = v22.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v22, 0LL);
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v12,
                                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_26;
        v17 = originalNum <= 1 ? -1 : originalNum;
        v18 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v17, 0, 0LL);
        ExpeditionPointRewardDialogComponent__SetPossession(v19, v18, objectId, v20);
        UnityEngine_GameObject__SetActive(v12, 1, 0LL);
        this = (ExpeditionPointRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (this = (ExpeditionPointRewardDialogComponent_o *)v4->fields.listRoot) == 0LL)
          || (this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B52A5C(this, rewards);
        }
        this = (ExpeditionPointRewardDialogComponent_o *)((__int64 (__fastcall *)(ExpeditionPointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                           this,
                                                           this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall ExpeditionPointRewardDialogComponent__get_closeBtnObject(
        ExpeditionPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_42AF04D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF04D = 1;
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


void __fastcall ExpeditionPointRewardDialogComponent___c__DisplayClass27_0___ctor(
        ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExpeditionPointRewardDialogComponent___c__DisplayClass27_0___Open_b__0(
        ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  ExpeditionPointRewardDialogComponent_o *_4__this; // x0
  struct ExpeditionPointRewardDialogComponent_o *v4; // x8
  struct ExpeditionPointRewardDialogComponent_o *v5; // x8

  if ( (byte_42ACDFF & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    byte_42ACDFF = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionPointRewardDialogComponent__SetResultData(_4__this, this->fields.expeditionRewards, 0LL),
        (v4 = this->fields.__4__this) == 0LL)
    || (v4->fields.state = 2, (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(_4__this, method);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
}