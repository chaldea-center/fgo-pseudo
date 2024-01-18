void __fastcall ExpeditionPointRewardDialogComponent___ctor(
        ExpeditionPointRewardDialogComponent_o *this,
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

  if ( (byte_4187788 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Color___TypeInfo, v3);
    byte_4187788 = 1;
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

  if ( (byte_4187784 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_4187784 = 1;
  }
  ExpeditionPointRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
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


void __fastcall ExpeditionPointRewardDialogComponent__Init(
        ExpeditionPointRewardDialogComponent_o *this,
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


void __fastcall ExpeditionPointRewardDialogComponent__OnClickCloseButton(
        ExpeditionPointRewardDialogComponent_o *this,
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
  __int64 v11; // x1
  UnityEngine_Component_o *scrollView; // x0
  Il2CppObject *current; // x20
  System_Action_o *v14; // x20
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187783 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B2C35C(&Method_ExpeditionPointRewardDialogComponent_EndClose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    byte_4187783 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    this->fields.state = 3;
    if ( !scrollView )
      goto LABEL_22;
    scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              scrollView,
                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !scrollView )
      goto LABEL_22;
    UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    scrollView = (UnityEngine_Component_o *)this->fields.resultItemObjList;
    if ( !scrollView )
LABEL_22:
      sub_B2C434(scrollView, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields.current;
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
      &v15,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_ExpeditionPointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
  }
}


void __fastcall ExpeditionPointRewardDialogComponent__OnClickSwitchShowMode(
        ExpeditionPointRewardDialogComponent_o *this,
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

  if ( (byte_4187785 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_22793/*"treasurechest_btn"*/, v8);
    sub_B2C35C(&StringLiteral_22795/*"treasurechest_btn_on"*/, v9);
    byte_4187785 = 1;
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


void __fastcall ExpeditionPointRewardDialogComponent__Open(
        ExpeditionPointRewardDialogComponent_o *this,
        EventExpeditionEntity_o *eventExpeditionEntity,
        BattleDropItem_array *expeditionRewards,
        int32_t eventId,
        System_Action_bool__o *setMaskMethod,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
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
  __int64 v32; // x23
  UnityEngine_Component_o *listRoot; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x24
  UnityEngine_Component_o *v54; // x8
  int monitor_high; // w25
  int v56; // w24
  WebViewObject_o *Component_WebViewObject; // x24
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x24
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  Il2CppObject *v66; // x24
  UILabel_o *v67; // x25
  UILabel_o *ComponentInChildren_UILabel; // x26
  UILabel_o *titleLabel; // x25
  System_String_o *v70; // x0
  UILabel_o *titleNextItemLabel; // x25
  UILabel_o *titleAtLabel; // x25
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *v74; // x22
  const MethodInfo *v75; // x3
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Action_o *v82; // x20
  __int64 v83; // x0

  if ( (byte_4187780 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, eventExpeditionEntity);
    sub_B2C35C(&AtlasManager_TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664, v14);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, v15);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardMaster___, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&Method_ExpeditionPointRewardDialogComponent___c__DisplayClass27_0__Open_b__0__, v22);
    sub_B2C35C(&ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_5781/*"EXPEDITION_EVENT_POINT"*/, v24);
    sub_B2C35C(&StringLiteral_5766/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, v25);
    sub_B2C35C(&StringLiteral_22793/*"treasurechest_btn"*/, v26);
    sub_B2C35C(&StringLiteral_5787/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, v27);
    sub_B2C35C(&StringLiteral_22799/*"treasurechest_img_bg_reward"*/, v28);
    sub_B2C35C(&StringLiteral_2473/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v29);
    sub_B2C35C(&StringLiteral_5779/*"EXPEDITION_DIALOG_CANCEL"*/, v30);
    sub_B2C35C(&StringLiteral_5782/*"EXPEDITION_EVENT_POINT_REWARD"*/, v31);
    byte_4187780 = 1;
  }
  v32 = sub_B2C42C(ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_TypeInfo);
  ExpeditionPointRewardDialogComponent___c__DisplayClass27_0___ctor(
    (ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_o *)v32,
    0LL);
  if ( !v32 )
    goto LABEL_36;
  *(_QWORD *)(v32 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  *(_QWORD *)(v32 + 24) = expeditionRewards;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v32 + 24),
    (System_Int32_array **)expeditionRewards,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = *(_QWORD *)(v32 + 24);
  if ( !v53 )
    goto LABEL_36;
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_36;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          listRoot,
                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !listRoot )
    goto LABEL_36;
  v54 = listRoot;
  listRoot = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !listRoot )
    goto LABEL_36;
  monitor_high = HIDWORD(v54[1].monitor);
  v56 = *(_DWORD *)(v53 + 24);
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listRoot, 0LL);
  if ( !listRoot )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 2 * monitor_high < v56, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !listRoot )
    goto LABEL_36;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              listRoot,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22793/*"treasurechest_btn"*/, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !listRoot )
    goto LABEL_36;
  UIButton__set_normalSprite((UIButton_o *)listRoot, (System_String_o *)StringLiteral_22793/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_36;
  if ( !viewChangeButtonLabelEffectColors->max_length )
  {
    v83 = sub_B2C460(listRoot);
    sub_B2C400(v83, 0LL);
  }
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !listRoot )
    goto LABEL_36;
  UILabel__set_effectColor(
    (UILabel_o *)listRoot,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v59;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5781/*"EXPEDITION_EVENT_POINT"*/, 0LL);
  if ( !this->fields.viewChangeButton )
    goto LABEL_36;
  v66 = (Il2CppObject *)listRoot;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.viewChangeButton,
                                          0LL);
  if ( !listRoot )
    goto LABEL_36;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                          listRoot,
                                          1,
                                          (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  if ( !this->fields.closeButton )
    goto LABEL_36;
  v67 = (UILabel_o *)listRoot;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.closeButton,
                                          0LL);
  if ( !listRoot )
    goto LABEL_36;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  listRoot,
                                  1,
                                  (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5787/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v67 )
    goto LABEL_36;
  UILabel__set_text(v67, (System_String_o *)listRoot, 0LL);
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5779/*"EXPEDITION_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_36;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)listRoot, 0LL);
  titleLabel = this->fields.titleLabel;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_5766/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  listRoot = (UnityEngine_Component_o *)System_String__Format(v70, v66, 0LL);
  if ( !titleLabel )
    goto LABEL_36;
  UILabel__set_text(titleLabel, (System_String_o *)listRoot, 0LL);
  titleNextItemLabel = this->fields.titleNextItemLabel;
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2473/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_36;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)listRoot, 0LL);
  titleAtLabel = this->fields.titleAtLabel;
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5782/*"EXPEDITION_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_36;
  UILabel__set_text(titleAtLabel, (System_String_o *)listRoot, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.atNameLabel;
  if ( !listRoot )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)listRoot, (System_String_o *)v66, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.pointRewardRoot;
  if ( !listRoot )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  listRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !listRoot )
    goto LABEL_36;
  listRoot = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)listRoot,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardMaster___);
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                (EventRewardMaster_o *)listRoot,
                                                eventId,
                                                EventPointNoGroup,
                                                0LL),
        !eventExpeditionEntity)
    || (v74 = (EventRewardEntity_o *)listRoot,
        AtlasManager__SetItem(this->fields.eventPointSprite, eventExpeditionEntity->fields.eventPointItemId, 0LL),
        ExpeditionPointRewardDialogComponent__SetNextItemLabel(this, EventPointNoGroup, v74, v75),
        this->fields.closeCallbackFunc = closeCallback,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
          (System_Int32_array **)closeCallback,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81),
        (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL) )
  {
LABEL_36:
    sub_B2C434(listRoot, v34);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0LL);
  v82 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v82,
    (Il2CppObject *)v32,
    Method_ExpeditionPointRewardDialogComponent___c__DisplayClass27_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v82, 0, 0LL);
}


void __fastcall ExpeditionPointRewardDialogComponent__SetNextItemLabel(
        ExpeditionPointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *v11; // x22
  System_String_o *v12; // x23
  Il2CppObject *v13; // x0
  System_String_o *isQp; // x0
  __int64 v15; // x1
  UILabel_o *nextItemLabel; // x19
  System_String_o *v17; // x1
  UILabel_o *atLabel; // x20
  int64_t v19; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4187782 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, userEventPoint);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_B2C35C(&StringLiteral_2476/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_B2C35C(&StringLiteral_2474/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v10);
    byte_4187782 = 1;
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
    sub_B2C434(isQp, v15);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v11 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v19 = eventRewardEnt->fields.point - userEventPoint;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19);
  isQp = System_String__Format(v12, v13, 0LL);
  if ( !v11 )
    goto LABEL_19;
  UILabel__set_text(v11, isQp, 0LL);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_44305532(nameText, countText, 0LL);
    if ( !nextItemLabel )
      goto LABEL_19;
LABEL_16:
    v17 = isQp;
    goto LABEL_17;
  }
  if ( !nextItemLabel )
    goto LABEL_19;
  v17 = countText;
LABEL_17:
  UILabel__set_text(nextItemLabel, v17, 0LL);
}


void __fastcall ExpeditionPointRewardDialogComponent__SetPossession(
        ExpeditionPointRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  __int64 v9; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187786 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187786 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B2C434(Instance, v9);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionPointRewardDialogComponent__SetResultData(
        ExpeditionPointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  ExpeditionPointRewardDialogComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  signed int max_length; // w8
  __int64 v10; // x25
  BattleDropItem_o *v11; // x8
  int originalNum; // w28
  int32_t objectId; // w21
  int32_t type; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x22
  UnityEngine_GameObject_o *v16; // x22
  UnityEngine_Transform_o *transform; // x24
  int v18; // s0
  int32_t v21; // w3
  ItemIconComponent_o *v22; // x24
  ExpeditionPointRewardDialogComponent_o *v23; // x0
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4187781 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ExpeditionPointRewardDialogComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4187781 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( (unsigned int)v10 >= max_length )
        {
          v25 = sub_B2C460(this);
          sub_B2C400(v25, 0LL);
        }
        v11 = rewards->m_Items[v10];
        if ( !v11 )
          goto LABEL_26;
        originalNum = v11->fields.originalNum;
        if ( originalNum <= 0 )
          originalNum = v11->fields.num;
        type = v11->fields.type;
        objectId = v11->fields.objectId;
        prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v4->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                           prefabResultItem,
                                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_26;
        v16 = (UnityEngine_GameObject_o *)this;
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
        if ( !this )
          goto LABEL_26;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v16, 0LL);
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_26;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !this )
          goto LABEL_26;
        v26.fields.x = v4->fields.iconScale;
        v26.fields.y = v26.fields.x;
        v26.fields.z = v26.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v26, 0LL);
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v16,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_26;
        v21 = originalNum <= 1 ? -1 : originalNum;
        v22 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v21, 0, 0LL);
        ExpeditionPointRewardDialogComponent__SetPossession(v23, v22, objectId, v24);
        UnityEngine_GameObject__SetActive(v16, 1, 0LL);
        this = (ExpeditionPointRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (this = (ExpeditionPointRewardDialogComponent_o *)v4->fields.listRoot) == 0LL)
          || (this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B2C434(this, rewards);
        }
        this = (ExpeditionPointRewardDialogComponent_o *)((__int64 (__fastcall *)(ExpeditionPointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                           this,
                                                           this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v10;
      }
      while ( (int)v10 < max_length );
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

  if ( (byte_4187787 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187787 = 1;
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

  if ( (byte_41841B8 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_41841B8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionPointRewardDialogComponent__SetResultData(_4__this, this->fields.expeditionRewards, 0LL),
        (v4 = this->fields.__4__this) == 0LL)
    || (v4->fields.state = 2, (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(_4__this, method);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
}