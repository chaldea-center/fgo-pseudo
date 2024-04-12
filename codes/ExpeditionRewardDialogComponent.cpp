void __fastcall ExpeditionRewardDialogComponent___ctor(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AF056 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&UnityEngine_Color___TypeInfo);
    byte_42AF056 = 1;
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


void __fastcall ExpeditionRewardDialogComponent__EndClose(
        ExpeditionRewardDialogComponent_o *this,
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

  if ( (byte_42AF052 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    byte_42AF052 = 1;
  }
  ExpeditionRewardDialogComponent__Init(this, method);
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


void __fastcall ExpeditionRewardDialogComponent__Init(
        ExpeditionRewardDialogComponent_o *this,
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


void __fastcall ExpeditionRewardDialogComponent__OnClickCloseButton(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  int32_t closeBtnSe; // w20
  Il2CppObject *current; // x20
  System_Action_o *v6; // x20
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AF051 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_ExpeditionRewardDialogComponent_EndClose__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF051 = 1;
  }
  memset(&v7, 0, sizeof(v7));
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
    closeBtnSe = this->fields.closeBtnSe;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(closeBtnSe, 0LL);
    scrollView = (UnityEngine_Component_o *)this->fields.resultItemObjList;
    if ( !scrollView )
LABEL_22:
      sub_B52A5C(scrollView, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
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
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ExpeditionRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
  }
}


void __fastcall ExpeditionRewardDialogComponent__OnClickSwitchShowMode(
        ExpeditionRewardDialogComponent_o *this,
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

  if ( (byte_42AF053 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_22983/*"treasurechest_btn"*/);
    sub_B52984(&StringLiteral_22985/*"treasurechest_btn_on"*/);
    byte_42AF053 = 1;
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


void __fastcall ExpeditionRewardDialogComponent__Open(
        ExpeditionRewardDialogComponent_o *this,
        System_Collections_Generic_List_EventExpeditionEntity__o *eventExpeditionEntities,
        BattleDropItem_array *resultExpeditionRewardInfos,
        BattleDropItem_array *resultEventRewardInfos,
        UserGameEntity_array *oldUserGame,
        int32_t eventId,
        bool getPointReward,
        System_Action_bool__o *setMaskMethod,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v16; // x22
  UnityEngine_Component_o *viewChangeButton; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WebViewObject_o *Component_WebViewObject; // x25
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x25
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  EventExpeditionEntity_o *v40; // x8
  int32_t eventPointItemId; // w26
  ExpeditionRewardDialogComponent___c_c *v42; // x0
  struct ExpeditionRewardDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_0; // x25
  Il2CppObject *v45; // x27
  struct ExpeditionRewardDialogComponent___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int v53; // w25
  UILabel_o *v54; // x27
  bool v55; // w20
  UILabel_o *ComponentInChildren_UILabel; // x28
  UILabel_o *titleLabel; // x27
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v61; // x27
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x24
  __int64 v66; // x26
  UILabel_o *totalNumLabel; // x24
  System_String_o *v68; // x27
  Il2CppObject *v69; // x0
  UILabel_o *v70; // x24
  __int64 *v71; // x8
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  BattleDropItem_o *v78; // x23
  EventExpeditionEntity_o *v79; // x8
  int32_t v80; // w8
  System_Int32_array **v81; // x0
  System_Array_o **v82; // x21
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x24
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Array_o *v96; // x20
  UnityEngine_Component_o *v97; // x8
  int monitor_high; // w21
  int monitor; // w20
  System_Action_o *v100; // x20
  __int64 v101; // x0
  __int64 v102; // x0
  int32_t eventIda; // [xsp+4h] [xbp-6Ch]
  BattleDropItem_array *v104; // [xsp+8h] [xbp-68h]
  __int64 v105; // [xsp+10h] [xbp-60h] BYREF
  int v106; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42AF04F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BattleDropItem___TypeInfo);
    sub_B52984(&BattleDropItem_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___);
    sub_B52984(&Method_System_Func_EventExpeditionEntity__int___ctor__);
    sub_B52984(&System_Func_EventExpeditionEntity__int__TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__);
    sub_B52984(&Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__);
    sub_B52984(&ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo);
    sub_B52984(&ExpeditionRewardDialogComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_13559/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_B52984(&StringLiteral_701/*"+"*/);
    sub_B52984(&StringLiteral_5808/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/);
    sub_B52984(&StringLiteral_22983/*"treasurechest_btn"*/);
    sub_B52984(&StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_B52984(&StringLiteral_5829/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_B52984(&StringLiteral_22989/*"treasurechest_img_bg_reward"*/);
    sub_B52984(&StringLiteral_5828/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_5827/*"EXPEDITION_REWARD_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_5826/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/);
    byte_42AF04F = 1;
  }
  v16 = sub_B52A54(ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo);
  ExpeditionRewardDialogComponent___c__DisplayClass28_0___ctor(
    (ExpeditionRewardDialogComponent___c__DisplayClass28_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_70;
  *(_QWORD *)(v16 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_70;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              viewChangeButton,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22983/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_70;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_22983/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_70;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_71;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_70;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v33;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( !eventExpeditionEntities )
    goto LABEL_70;
  if ( !eventExpeditionEntities->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  eventIda = eventId;
  v40 = eventExpeditionEntities->fields._items->m_Items[0];
  if ( !v40 )
    goto LABEL_70;
  eventPointItemId = v40->fields.eventPointItemId;
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventPointItemId, 0LL);
  v42 = ExpeditionRewardDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionRewardDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionRewardDialogComponent___c_TypeInfo);
    v42 = ExpeditionRewardDialogComponent___c_TypeInfo;
  }
  static_fields = v42->static_fields;
  _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      static_fields = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_0,
      v45,
      Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_EventExpeditionEntity__int___ctor__);
    v46 = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
    v46->__9__28_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__28_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v46->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  viewChangeButton = (UnityEngine_Component_o *)System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                                                  (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                                                  (System_Func_TSource__int__o *)_9__28_0,
                                                  (const MethodInfo_1B6DB18 *)Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___);
  if ( !this->fields.getPointRoot )
    goto LABEL_70;
  v53 = (int)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_70;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  v104 = resultExpeditionRewardInfos;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                                  viewChangeButton,
                                                  1,
                                                  (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  if ( !this->fields.closeButton )
    goto LABEL_70;
  v54 = (UILabel_o *)viewChangeButton;
  v55 = getPointReward;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.closeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  viewChangeButton,
                                  1,
                                  (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5829/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v54 )
    goto LABEL_70;
  UILabel__set_text(v54, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5808/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_70;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5827/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5826/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_70;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v106 = v53;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
  v63 = System_String__Format(v61, v62, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)System_String__Concat_44568316(
                                                  (System_String_o *)StringLiteral_701/*"+"*/,
                                                  v63,
                                                  0LL);
  if ( !getNumLabel )
    goto LABEL_70;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventIda, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v66 = EventPointNoGroup;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5828/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_70;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v105 = v66;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v105);
  viewChangeButton = (UnityEngine_Component_o *)System_String__Format(v68, v69, 0LL);
  if ( !totalNumLabel )
    goto LABEL_70;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_70;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  v70 = UnityEngine_Component__GetComponentInChildren_UILabel_(
          viewChangeButton,
          1,
          (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  if ( v55 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v71 = &StringLiteral_13559/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v71 = &StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/;
  }
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v71, 0LL);
  if ( !v70 )
    goto LABEL_70;
  UILabel__set_text(v70, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v78 = (BattleDropItem_o *)sub_B52A54(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v78, 0LL);
  if ( !v78 )
    goto LABEL_70;
  v78->fields.type = 2;
  if ( !eventExpeditionEntities->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v79 = eventExpeditionEntities->fields._items->m_Items[0];
  if ( !v79 )
    goto LABEL_70;
  v80 = v79->fields.eventPointItemId;
  v78->fields.originalNum = v53;
  v78->fields.objectId = v80;
  if ( !v104
    || (v81 = (System_Int32_array **)sub_B5299C(BattleDropItem___TypeInfo, v104->max_length + 1),
        *(_QWORD *)(v16 + 24) = v81,
        v82 = (System_Array_o **)(v16 + 24),
        sub_B52920((BattleServantConfConponent_o *)(v16 + 24), v81, v83, v84, v85, v86, v87, v88),
        (v89 = *(_QWORD *)(v16 + 24)) == 0) )
  {
LABEL_70:
    sub_B52A5C(viewChangeButton, v18);
  }
  viewChangeButton = (UnityEngine_Component_o *)sub_B52A44(v78, *(_QWORD *)(*(_QWORD *)v89 + 64LL));
  if ( !viewChangeButton )
  {
    v102 = sub_B52A7C();
    sub_B52A28(v102, 0LL);
  }
  if ( !*(_DWORD *)(v89 + 24) )
  {
LABEL_71:
    v101 = sub_B52A88(viewChangeButton);
    sub_B52A28(v101, 0LL);
  }
  *(_QWORD *)(v89 + 32) = v78;
  sub_B52920((BattleServantConfConponent_o *)(v89 + 32), (System_Int32_array **)v78, v90, v91, v92, v93, v94, v95);
  System_Array__Copy_43421420((System_Array_o *)v104, 0, *v82, 1, v104->max_length, 0LL);
  v96 = *v82;
  if ( !*v82 )
    goto LABEL_70;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !viewChangeButton )
    goto LABEL_70;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  viewChangeButton,
                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !viewChangeButton )
    goto LABEL_70;
  v97 = viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_70;
  monitor_high = HIDWORD(v97[1].monitor);
  monitor = (int)v96[1].monitor;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 2 * monitor_high < monitor, 0LL);
  v100 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v100,
    (Il2CppObject *)v16,
    Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v100, 0, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__SetPossession(
        ExpeditionRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v7; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AF054 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF054 = 1;
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
void __fastcall ExpeditionRewardDialogComponent__SetResultData(
        ExpeditionRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  ExpeditionRewardDialogComponent_o *v4; // x20
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
  ExpeditionRewardDialogComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42AF050 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ExpeditionRewardDialogComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF050 = 1;
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
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                      prefabResultItem,
                                                      (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_26;
        v12 = (UnityEngine_GameObject_o *)this;
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
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
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
        if ( !this )
          goto LABEL_26;
        v22.fields.x = v4->fields.iconScale;
        v22.fields.y = v22.fields.x;
        v22.fields.z = v22.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v22, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v12,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_26;
        v17 = originalNum <= 1 ? -1 : originalNum;
        v18 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v17, 0, 0LL);
        ExpeditionRewardDialogComponent__SetPossession(v19, v18, objectId, v20);
        UnityEngine_GameObject__SetActive(v12, 1, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (this = (ExpeditionRewardDialogComponent_o *)v4->fields.listRoot) == 0LL)
          || (this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B52A5C(this, rewards);
        }
        this = (ExpeditionRewardDialogComponent_o *)((__int64 (__fastcall *)(ExpeditionRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                      this,
                                                      this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall ExpeditionRewardDialogComponent__get_closeBtnObject(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_42AF055 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF055 = 1;
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


void __fastcall ExpeditionRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ExpeditionRewardDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42ACE00 & 1) == 0 )
  {
    sub_B52984(&ExpeditionRewardDialogComponent___c_TypeInfo);
    byte_42ACE00 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ExpeditionRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ExpeditionRewardDialogComponent___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall ExpeditionRewardDialogComponent___c___ctor(
        ExpeditionRewardDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ExpeditionRewardDialogComponent___c___Open_b__28_0(
        ExpeditionRewardDialogComponent___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.eventPoint;
}


void __fastcall ExpeditionRewardDialogComponent___c__DisplayClass28_0___ctor(
        ExpeditionRewardDialogComponent___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent___c__DisplayClass28_0___Open_b__1(
        ExpeditionRewardDialogComponent___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  ExpeditionRewardDialogComponent_o *_4__this; // x0
  struct ExpeditionRewardDialogComponent_o *v4; // x8
  struct ExpeditionRewardDialogComponent_o *v5; // x8

  if ( (byte_42ACE01 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    byte_42ACE01 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, 0LL),
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