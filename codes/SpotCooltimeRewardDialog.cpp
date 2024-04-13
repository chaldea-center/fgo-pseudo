void __fastcall SpotCooltimeRewardDialog___ctor(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_Color_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9249 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Color___TypeInfo, v5, v6, v7);
    byte_42E9249 = 1;
  }
  this->fields.iconScale = 0.85;
  v8 = (struct UnityEngine_Color_array *)sub_B5D5DC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall SpotCooltimeRewardDialog__Init(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SpotCooltimeRewardDialog__OnClickCloseButton(
        SpotCooltimeRewardDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int32_t closeBtnSe; // w20
  __int64 v27; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v30; // x20
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9245 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SpotCooltimeRewardDialog_EndClose__, v23, v24, v25);
    byte_42E9245 = 1;
  }
  memset(&v31, 0, sizeof(v31));
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
      sub_B5D69C(0LL, v27);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v31,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v31,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v31.fields.current;
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
        UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v31,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_SpotCooltimeRewardDialog_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v30, 0LL);
  }
}


void __fastcall SpotCooltimeRewardDialog__OnClickSwitchShowMode(
        SpotCooltimeRewardDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v29; // x8
  UISprite_o *v30; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v39; // x20
  int size; // w8
  __int64 v41; // x0
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9246 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23098/*"treasurechest_btn"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_23100/*"treasurechest_btn_on"*/, v23, v24, v25);
    byte_42E9246 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v29 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23098/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23100/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v29, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v30 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v30, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B5D69C(viewChangeButton, v26);
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
    v41 = sub_B5D6C8(viewChangeButton);
    sub_B5D668(v41, 0LL);
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
  v42.fields.b = *p_a;
  v42.fields.g = *p_b;
  v42.fields.r = *p_g;
  v42.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v42, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v39 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v39 >= size )
      break;
    if ( size <= (unsigned int)v39 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v39];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v39;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  UnityEngine_Component_o *viewChangeButton; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UILabel_o *v62; // x22
  UILabel_o *ComponentInChildren_UILabel; // x23
  UILabel_o *getQpTitle; // x22
  UILabel_o *totalQpTitle; // x22
  UILabel_o *titleLabel; // x22
  const MethodInfo *v67; // x2
  UILabel_o *v68; // x22
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  UnityEngine_Component_o *v75; // x8
  int monitor_high; // w22
  signed int max_length; // w21
  const MethodInfo *v78; // x2
  System_Action_o *v79; // x20
  __int64 v80; // x0

  if ( (byte_42E9242 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)rewardsInfo, (_DWORD)closeCallback, method);
    sub_B5D5C4(&AtlasManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SpotCooltimeRewardDialog__Open_b__26_0__, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_12456/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_12461/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_QP_TITLE"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_12459/*"SPOT_COOLTIME_REWARD_DIALOG_TITLE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_12462/*"SPOT_COOLTIME_REWARD_VIEW_CHANGE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_23098/*"treasurechest_btn"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_23104/*"treasurechest_img_bg_reward"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_12458/*"SPOT_COOLTIME_REWARD_DIALOG_GET_QP_TITLE"*/, v49, v50, v51);
    byte_42E9242 = 1;
  }
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_36;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              viewChangeButton,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_23098/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_36;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23098/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_36;
  if ( !viewChangeButtonLabelEffectColors->max_length )
  {
    v80 = sub_B5D6C8(viewChangeButton);
    sub_B5D668(v80, 0LL);
  }
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_36;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v55;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.getQpRoot;
  if ( !viewChangeButton )
    goto LABEL_36;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)viewChangeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_36;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_36;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                                  viewChangeButton,
                                                  1,
                                                  (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( !this->fields.closeButton )
    goto LABEL_36;
  v62 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.closeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_36;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  viewChangeButton,
                                  1,
                                  (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SPOT_COOLTIME_REWARD_VIEW_CHANGE"*/, 0LL);
  if ( !v62 )
    goto LABEL_36;
  UILabel__set_text(v62, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12456/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_36;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)viewChangeButton, 0LL);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12458/*"SPOT_COOLTIME_REWARD_DIALOG_GET_QP_TITLE"*/, 0LL);
  if ( !getQpTitle )
    goto LABEL_36;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0LL);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0LL);
  if ( !totalQpTitle )
    goto LABEL_36;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12459/*"SPOT_COOLTIME_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_36;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  SpotCooltimeRewardDialog__SetQpLabel(this, rewardsInfo, v67);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_36;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_36;
  v68 = UnityEngine_Component__GetComponentInChildren_UILabel_(
          viewChangeButton,
          1,
          (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12456/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, 0LL);
  if ( !v68 )
    goto LABEL_36;
  UILabel__set_text(v68, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  if ( !rewardsInfo )
    goto LABEL_36;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !viewChangeButton )
    goto LABEL_36;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  viewChangeButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !viewChangeButton )
    goto LABEL_36;
  v75 = viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !viewChangeButton
    || (monitor_high = HIDWORD(v75[1].monitor),
        max_length = rewardsInfo->max_length,
        (viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(viewChangeButton, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)viewChangeButton,
          2 * monitor_high < max_length,
          0LL),
        SpotCooltimeRewardDialog__SetResultData(this, rewardsInfo, v78),
        (viewChangeButton = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_36:
    sub_B5D69C(viewChangeButton, rewardsInfo);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))viewChangeButton->klass[1]._1.castClass)(
    viewChangeButton,
    viewChangeButton->klass[1]._1.declaringType,
    0.0);
  v79 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v79, (Il2CppObject *)this, Method_SpotCooltimeRewardDialog__Open_b__26_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v79, 0, 0LL);
}


void __fastcall SpotCooltimeRewardDialog__SetPossession(
        SpotCooltimeRewardDialog_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t Instance; // x0
  __int64 v13; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9247 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)item, objectId, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E9247 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B5D69C(Instance, v13);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall SpotCooltimeRewardDialog__SetQpLabel(
        SpotCooltimeRewardDialog_o *this,
        BattleDropItem_array *dropItems,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SpotCooltimeRewardDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  signed int max_length; // w8
  unsigned int v28; // w23
  int v29; // w22
  BattleDropItem_o *v30; // x21
  UserGameEntity_o *SelfUserGame; // x0
  int32_t qp; // w23
  BalanceConfig_c *v33; // x0
  UILabel_o *getQpNumLabel; // x20
  System_String_o *v35; // x21
  Il2CppObject *v36; // x0
  UILabel_o *totalQpNumLabel; // x19
  System_String_o *v38; // x20
  Il2CppObject *v39; // x0
  __int64 v40; // x0
  int32_t v41; // [xsp+8h] [xbp-48h] BYREF
  int v42; // [xsp+Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_42E9243 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)dropItems, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12460/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_POINT_FORMAT"*/, v21, v22, v23);
    this = (SpotCooltimeRewardDialog_o *)sub_B5D5C4(&StringLiteral_12457/*"SPOT_COOLTIME_REWARD_DIALOG_GET_POINT_FORMAT"*/, v24, v25, v26);
    byte_42E9243 = 1;
  }
  if ( !dropItems )
    goto LABEL_34;
  max_length = dropItems->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    v29 = 0;
    while ( 1 )
    {
      if ( v28 >= max_length )
      {
        v40 = sub_B5D6C8(this);
        sub_B5D668(v40, 0LL);
      }
      v30 = dropItems->m_Items[v28];
      if ( !v30 )
        break;
      if ( v30->fields.type == 2 )
      {
        this = (SpotCooltimeRewardDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SpotCooltimeRewardDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          break;
        this = (SpotCooltimeRewardDialog_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               v30->fields.objectId,
                                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.maskSprite) == 1 )
        {
          this = (SpotCooltimeRewardDialog_o *)BattleDropItem__getTotalNum(v30, 0LL);
          v29 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v28 >= max_length )
        goto LABEL_17;
    }
LABEL_34:
    sub_B5D69C(this, dropItems);
  }
  v29 = 0;
LABEL_17:
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( SelfUserGame )
    qp = SelfUserGame->fields.qp;
  else
    qp = 0;
  v33 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  if ( qp > v33->static_fields->QpMax )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      qp = v33->static_fields->QpMax;
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        qp = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
    }
    else
    {
      qp = v33->static_fields->QpMax;
    }
  }
  getQpNumLabel = v5->fields.getQpNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12457/*"SPOT_COOLTIME_REWARD_DIALOG_GET_POINT_FORMAT"*/, 0LL);
  v42 = v29;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  this = (SpotCooltimeRewardDialog_o *)System_String__Format(v35, v36, 0LL);
  if ( !getQpNumLabel )
    goto LABEL_34;
  UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0LL);
  totalQpNumLabel = v5->fields.totalQpNumLabel;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_POINT_FORMAT"*/, 0LL);
  v41 = qp;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
  this = (SpotCooltimeRewardDialog_o *)System_String__Format(v38, v39, 0LL);
  if ( !totalQpNumLabel )
    goto LABEL_34;
  UILabel__set_text(totalQpNumLabel, (System_String_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotCooltimeRewardDialog__SetResultData(
        SpotCooltimeRewardDialog_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SpotCooltimeRewardDialog_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  signed int max_length; // w8
  __int64 v19; // x25
  BattleDropItem_o *v20; // x8
  int originalNum; // w28
  int32_t objectId; // w21
  int32_t type; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x22
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_Transform_o *transform; // x24
  int v27; // s0
  int32_t v30; // w3
  ItemIconComponent_o *v31; // x24
  SpotCooltimeRewardDialog_o *v32; // x0
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E9244 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, (_DWORD)rewards, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    this = (SpotCooltimeRewardDialog_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E9244 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0LL;
      do
      {
        if ( (unsigned int)v19 >= max_length )
        {
          v34 = sub_B5D6C8(this);
          sub_B5D668(v34, 0LL);
        }
        v20 = rewards->m_Items[v19];
        if ( !v20 )
          goto LABEL_26;
        originalNum = v20->fields.originalNum;
        if ( originalNum <= 0 )
          originalNum = v20->fields.num;
        type = v20->fields.type;
        objectId = v20->fields.objectId;
        prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               prefabResultItem,
                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_26;
        v25 = (UnityEngine_GameObject_o *)this;
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
        if ( !this )
          goto LABEL_26;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v25, 0LL);
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_26;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v27, 0LL);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
        if ( !this )
          goto LABEL_26;
        v35.fields.x = v5->fields.iconScale;
        v35.fields.y = v35.fields.x;
        v35.fields.z = v35.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v35, 0LL);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v25,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_26;
        v30 = originalNum <= 1 ? -1 : originalNum;
        v31 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v30, 0, 0LL);
        SpotCooltimeRewardDialog__SetPossession(v32, v31, objectId, v33);
        UnityEngine_GameObject__SetActive(v25, 1, 0LL);
        this = (SpotCooltimeRewardDialog_o *)v5->fields.resultItemObjList;
        if ( !this
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (this = (SpotCooltimeRewardDialog_o *)v5->fields.listRoot) == 0LL)
          || (this = (SpotCooltimeRewardDialog_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B5D69C(this, rewards);
        }
        this = (SpotCooltimeRewardDialog_o *)((__int64 (__fastcall *)(SpotCooltimeRewardDialog_o *, void *))this->klass[1]._1.namespaze)(
                                               this,
                                               this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v19;
      }
      while ( (int)v19 < max_length );
    }
  }
}


void __fastcall SpotCooltimeRewardDialog___Open_b__26_0(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  struct UIPanel_o *scrollView; // x0

  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E9248 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9248 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}