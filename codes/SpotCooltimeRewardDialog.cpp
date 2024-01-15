void __fastcall SpotCooltimeRewardDialog___ctor(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct UnityEngine_Color_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FADB4 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Color___TypeInfo, v4);
    byte_40FADB4 = 1;
  }
  this->fields.iconScale = 0.85;
  v5 = (struct UnityEngine_Color_array *)sub_B17014(UnityEngine_Color___TypeInfo, 2LL, v2);
  this->fields.viewChangeButtonLabelEffectColors = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SpotCooltimeRewardDialog__CheckSerializeFieldSetting(
        SpotCooltimeRewardDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SpotCooltimeRewardDialog__EndClose(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
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

  SpotCooltimeRewardDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall SpotCooltimeRewardDialog__Init(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SpotCooltimeRewardDialog__OnClickCloseButton(
        SpotCooltimeRewardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t closeBtnSe; // w20
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FADB0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&Method_SpotCooltimeRewardDialog_EndClose__, v9);
    byte_40FADB0 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    closeBtnSe = this->fields.closeBtnSe;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(closeBtnSe, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v18.fields.current;
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
        UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_SpotCooltimeRewardDialog_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
  }
}


void __fastcall SpotCooltimeRewardDialog__OnClickSwitchShowMode(
        SpotCooltimeRewardDialog_o *this,
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
  UnityEngine_Component_o *v13; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UISprite_o *v15; // x20
  System_String_o *normalSprite; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  UILabel_o *viewChangeButtonLabel; // x0
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v27; // x20
  int size; // w8
  UnityEngine_GameObject_o *v29; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FADB1 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_22700/*"treasurechest_btn"*/, v8);
    sub_B16FFC(&StringLiteral_22702/*"treasurechest_btn_on"*/, v9);
    byte_40FADB1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v12 = isShowPossessionNum ? (System_String_o **)&StringLiteral_22700/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_22702/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v12, 0LL);
  v13 = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !v13 )
    goto LABEL_30;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v13,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v15 = (UISprite_o *)Component_WebViewObject;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v15, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B170D4();
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !viewChangeButtonLabel )
        goto LABEL_30;
      goto LABEL_22;
    }
LABEL_32:
    sub_B17100(viewChangeButtonLabel, v17, v18);
    sub_B170A0();
  }
  if ( max_length <= 1 )
    goto LABEL_32;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButtonLabel )
    goto LABEL_30;
LABEL_22:
  v31.fields.b = *p_a;
  v31.fields.g = *p_b;
  v31.fields.r = *p_g;
  v31.fields.a = *p_r;
  UILabel__set_effectColor(viewChangeButtonLabel, v31, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v27 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v27 >= size )
      break;
    if ( size <= (unsigned int)v27 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v29 = resultItemObjList->fields._items->m_Items[v27];
    if ( v29 )
    {
      Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v29,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( Component_srcLineSprite )
      {
        ItemIconComponent__ShowPossession(Component_srcLineSprite, this->fields.isShowPossessionNum, 0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v27;
        if ( resultItemObjList )
          continue;
      }
    }
    goto LABEL_30;
  }
}


void __fastcall SpotCooltimeRewardDialog__Open(
        SpotCooltimeRewardDialog_o *this,
        BattleDropItem_array *rewardsInfo,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  UnityEngine_Component_o *viewChangeButton; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  UIButton_o *v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_GameObject_o *getQpRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v43; // x0
  UnityEngine_Component_o *transform; // x0
  UILabel_o *ComponentInChildren_UILabel; // x0
  UILabel_o *v46; // x22
  UnityEngine_Component_o *v47; // x0
  UILabel_o *v48; // x23
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  UILabel_o *getQpTitle; // x22
  System_String_o *v52; // x0
  UILabel_o *totalQpTitle; // x22
  System_String_o *v54; // x0
  UILabel_o *titleLabel; // x22
  System_String_o *v56; // x0
  const MethodInfo *v57; // x2
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_Component_o *v59; // x0
  UILabel_o *v60; // x22
  System_String_o *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *v70; // x0
  WebViewObject_o *v71; // x8
  UnityEngine_Component_o *scrollBar; // x0
  int onError_high; // w22
  signed int max_length; // w21
  UnityEngine_GameObject_o *v75; // x0
  const MethodInfo *v76; // x2
  struct UIPanel_o *scrollView; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_Action_o *v82; // x20

  if ( (byte_40FADAD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, rewardsInfo);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560, v8);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, v9);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_SpotCooltimeRewardDialog__Open_b__26_0__, v14);
    sub_B16FFC(&StringLiteral_12256/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, v15);
    sub_B16FFC(&StringLiteral_12261/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_QP_TITLE"*/, v16);
    sub_B16FFC(&StringLiteral_12259/*"SPOT_COOLTIME_REWARD_DIALOG_TITLE"*/, v17);
    sub_B16FFC(&StringLiteral_12262/*"SPOT_COOLTIME_REWARD_VIEW_CHANGE"*/, v18);
    sub_B16FFC(&StringLiteral_22700/*"treasurechest_btn"*/, v19);
    sub_B16FFC(&StringLiteral_22706/*"treasurechest_img_bg_reward"*/, v20);
    sub_B16FFC(&StringLiteral_12258/*"SPOT_COOLTIME_REWARD_DIALOG_GET_QP_TITLE"*/, v21);
    byte_40FADAD = 1;
  }
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_36;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              viewChangeButton,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22700/*"treasurechest_btn"*/, 0LL);
  v24 = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !v24 )
    goto LABEL_36;
  UIButton__set_normalSprite(v24, (System_String_o *)StringLiteral_22700/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_36;
  if ( !viewChangeButtonLabelEffectColors->max_length )
  {
    sub_B17100(v25, v26, v27);
    sub_B170A0();
  }
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButtonLabel )
    goto LABEL_36;
  UILabel__set_effectColor(
    viewChangeButtonLabel,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  getQpRoot = this->fields.getQpRoot;
  if ( !getQpRoot )
    goto LABEL_36;
  gameObject = UnityEngine_GameObject__get_gameObject(getQpRoot, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v43 = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !v43 )
    goto LABEL_36;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v43, 0LL);
  if ( !transform )
    goto LABEL_36;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  transform,
                                  1,
                                  (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( !this->fields.closeButton )
    goto LABEL_36;
  v46 = ComponentInChildren_UILabel;
  v47 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)this->fields.closeButton,
                                     0LL);
  if ( !v47 )
    goto LABEL_36;
  v48 = UnityEngine_Component__GetComponentInChildren_UILabel_(
          v47,
          1,
          (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12262/*"SPOT_COOLTIME_REWARD_VIEW_CHANGE"*/, 0LL);
  if ( !v46 )
    goto LABEL_36;
  UILabel__set_text(v46, v49, 0LL);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12256/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, 0LL);
  if ( !v48 )
    goto LABEL_36;
  UILabel__set_text(v48, v50, 0LL);
  getQpTitle = this->fields.getQpTitle;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12258/*"SPOT_COOLTIME_REWARD_DIALOG_GET_QP_TITLE"*/, 0LL);
  if ( !getQpTitle )
    goto LABEL_36;
  UILabel__set_text(getQpTitle, v52, 0LL);
  totalQpTitle = this->fields.totalQpTitle;
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12261/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0LL);
  if ( !totalQpTitle )
    goto LABEL_36;
  UILabel__set_text(totalQpTitle, v54, 0LL);
  titleLabel = this->fields.titleLabel;
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12259/*"SPOT_COOLTIME_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_36;
  UILabel__set_text(titleLabel, v56, 0LL);
  SpotCooltimeRewardDialog__SetQpLabel(this, rewardsInfo, v57);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !closeButton )
    goto LABEL_36;
  v59 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(closeButton, 0LL);
  if ( !v59 )
    goto LABEL_36;
  v60 = UnityEngine_Component__GetComponentInChildren_UILabel_(
          v59,
          1,
          (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12256/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, 0LL);
  if ( !v60 )
    goto LABEL_36;
  UILabel__set_text(v60, v61, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v68 )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(v68, 1, 0LL);
  if ( !rewardsInfo )
    goto LABEL_36;
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_36;
  v70 = UnityEngine_Component__GetComponent_WebViewObject_(
          listRoot,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !v70 )
    goto LABEL_36;
  v71 = v70;
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar
    || (onError_high = HIDWORD(v71->fields.onError),
        max_length = rewardsInfo->max_length,
        (v75 = UnityEngine_Component__get_gameObject(scrollBar, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(v75, 2 * onError_high < max_length, 0LL),
        SpotCooltimeRewardDialog__SetResultData(this, rewardsInfo, v76),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
LABEL_36:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))scrollView->klass->vtable._8_set_alpha.method)(
    scrollView,
    scrollView->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v82 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v78, v79, v80, v81);
  System_Action___ctor(v82, (Il2CppObject *)this, Method_SpotCooltimeRewardDialog__Open_b__26_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v82, 0, 0LL);
}


void __fastcall SpotCooltimeRewardDialog__SetPossession(
        SpotCooltimeRewardDialog_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FADB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FADB2 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, objectId, 0LL) )
    return;
  if ( !entity || !item )
LABEL_13:
    sub_B170D4();
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall SpotCooltimeRewardDialog__SetQpLabel(
        SpotCooltimeRewardDialog_o *this,
        BattleDropItem_array *dropItems,
        const MethodInfo *method)
{
  SpotCooltimeRewardDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  signed int max_length; // w8
  unsigned int v13; // w23
  int v14; // w22
  BattleDropItem_o *v15; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int32_t qp; // w23
  BalanceConfig_c *v20; // x0
  UILabel_o *getQpNumLabel; // x20
  System_String_o *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UILabel_o *totalQpNumLabel; // x19
  System_String_o *v26; // x20
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  int32_t v29; // [xsp+8h] [xbp-48h] BYREF
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_40FADAE & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, dropItems);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_12260/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_POINT_FORMAT"*/, v10);
    this = (SpotCooltimeRewardDialog_o *)sub_B16FFC(&StringLiteral_12257/*"SPOT_COOLTIME_REWARD_DIALOG_GET_POINT_FORMAT"*/, v11);
    byte_40FADAE = 1;
  }
  if ( !dropItems )
    goto LABEL_34;
  max_length = dropItems->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        sub_B17100(this, dropItems, method);
        sub_B170A0();
      }
      v15 = dropItems->m_Items[v13];
      if ( !v15 )
        break;
      if ( v15->fields.type == 2 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        this = (SpotCooltimeRewardDialog_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               MasterData_WarQuestSelectionMaster,
                                               v15->fields.objectId,
                                               (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.maskSprite) == 1 )
        {
          this = (SpotCooltimeRewardDialog_o *)BattleDropItem__getTotalNum(v15, 0LL);
          v14 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_17;
    }
LABEL_34:
    sub_B170D4();
  }
  v14 = 0;
LABEL_17:
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( SelfUserGame )
    qp = SelfUserGame->fields.qp;
  else
    qp = 0;
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  if ( qp > v20->static_fields->QpMax )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      qp = v20->static_fields->QpMax;
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        qp = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
    }
    else
    {
      qp = v20->static_fields->QpMax;
    }
  }
  getQpNumLabel = v4->fields.getQpNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12257/*"SPOT_COOLTIME_REWARD_DIALOG_GET_POINT_FORMAT"*/, 0LL);
  v30 = v14;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v24 = System_String__Format(v22, v23, 0LL);
  if ( !getQpNumLabel )
    goto LABEL_34;
  UILabel__set_text(getQpNumLabel, v24, 0LL);
  totalQpNumLabel = v4->fields.totalQpNumLabel;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12260/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_POINT_FORMAT"*/, 0LL);
  v29 = qp;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v28 = System_String__Format(v26, v27, 0LL);
  if ( !totalQpNumLabel )
    goto LABEL_34;
  UILabel__set_text(totalQpNumLabel, v28, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotCooltimeRewardDialog__SetResultData(
        SpotCooltimeRewardDialog_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  SpotCooltimeRewardDialog_o *v4; // x20
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
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v19; // x24
  int v20; // s0
  UnityEngine_Transform_o *v23; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  int32_t v25; // w3
  ItemIconComponent_o *v26; // x24
  SpotCooltimeRewardDialog_o *v27; // x0
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *resultItemObjList; // x0
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_40FADAF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (SpotCooltimeRewardDialog_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FADAF = 1;
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
          sub_B17100(this, rewards, method);
          sub_B170A0();
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
        v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            prefabResultItem,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !v16 )
          goto LABEL_26;
        v17 = v16;
        transform = UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !transform )
          goto LABEL_26;
        UnityEngine_Transform__set_parent(transform, v4->fields.listRoot, 0LL);
        v19 = UnityEngine_GameObject__get_transform(v17, 0LL);
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v19 )
          goto LABEL_26;
        UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
        v23 = UnityEngine_GameObject__get_transform(v17, 0LL);
        if ( !v23 )
          goto LABEL_26;
        v32.fields.x = v4->fields.iconScale;
        v32.fields.y = v32.fields.x;
        v32.fields.z = v32.fields.x;
        UnityEngine_Transform__set_localScale(v23, v32, 0LL);
        Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v17,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Component_srcLineSprite )
          goto LABEL_26;
        v25 = originalNum <= 1 ? -1 : originalNum;
        v26 = Component_srcLineSprite;
        ItemIconComponent__SetGift(Component_srcLineSprite, type, objectId, v25, 0, 0LL);
        SpotCooltimeRewardDialog__SetPossession(v27, v26, objectId, v28);
        UnityEngine_GameObject__SetActive(v17, 1, 0LL);
        resultItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.resultItemObjList;
        if ( !resultItemObjList
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                resultItemObjList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (listRoot = (UnityEngine_Component_o *)v4->fields.listRoot) == 0LL)
          || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                          listRoot,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B170D4();
        }
        this = (SpotCooltimeRewardDialog_o *)(*(__int64 (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
                                               Component_WebViewObject,
                                               Component_WebViewObject->klass[1]._1.element_class);
        max_length = rewards->max_length;
        ++v10;
      }
      while ( (int)v10 < max_length );
    }
  }
}


void __fastcall SpotCooltimeRewardDialog___Open_b__26_0(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  struct UIPanel_o *scrollView; // x0

  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_B170D4();
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))scrollView->klass->vtable._8_set_alpha.method)(
    scrollView,
    scrollView->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall SpotCooltimeRewardDialog__get_closeBtnObject(
        SpotCooltimeRewardDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FADB3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FADB3 = 1;
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
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}