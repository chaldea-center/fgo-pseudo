void SpotCooltimeRewardDialog___ctor(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct UnityEngine_Color_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_5932BF2 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&UnityEngine_Color___TypeInfo);
    byte_5932BF2 = 1;
  }
  v3 = UnityEngine_Color___TypeInfo;
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_21FFD10(v3, 2);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v11, v12);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SpotCooltimeRewardDialog__CheckSerializeFieldSetting(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  ;
}


void SpotCooltimeRewardDialog__EndClose(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SpotCooltimeRewardDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void SpotCooltimeRewardDialog__Init(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SpotCooltimeRewardDialog__OnClickCloseButton(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *current; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5932BEE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SpotCooltimeRewardDialog_EndClose__);
    sub_21FFC50(&Method_SpotCooltimeRewardDialog_OnClickCloseButton__);
    byte_5932BEE = 1;
  }
  state = this->fields.state;
  memset(&v14, 0, sizeof(v14));
  if ( state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_SpotCooltimeRewardDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_SpotCooltimeRewardDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_SpotCooltimeRewardDialog_OnClickCloseButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.closeBtnSe, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_21FFECC(0, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v14.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_SpotCooltimeRewardDialog_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0);
  }
}


void SpotCooltimeRewardDialog__OnClickSwitchShowMode(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v8; // x8
  UISprite_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v18; // w20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5932BEF & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__);
    sub_21FFC50(&StringLiteral_25463/*"treasurechest_btn"*/);
    sub_21FFC50(&StringLiteral_25465/*"treasurechest_btn_on"*/);
    byte_5932BEF = 1;
  }
  v3 = Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton
    || (isShowPossessionNum
      ? (v8 = (System_String_o **)&StringLiteral_25463/*"treasurechest_btn"*/)
      : (v8 = (System_String_o **)&StringLiteral_25465/*"treasurechest_btn_on"*/),
        (UIButton__set_normalSprite(viewChangeButton, *v8, 0), (viewChangeButton = this->fields.viewChangeButton) == 0)
     || (viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)viewChangeButton,
                                            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___),
         !this->fields.viewChangeButton)) )
  {
LABEL_27:
    sub_21FFECC(viewChangeButton, v5);
  }
  v9 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
  AtlasManager__SetEventUI(v9, normalSprite, 0);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !viewChangeButtonLabelEffectColors )
      goto LABEL_27;
    if ( LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    {
      p_r = &viewChangeButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !viewChangeButton )
        goto LABEL_27;
      goto LABEL_21;
    }
LABEL_29:
    sub_21FFED4(viewChangeButton);
  }
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_27;
  if ( (viewChangeButtonLabelEffectColors->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_29;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !viewChangeButton )
    goto LABEL_27;
LABEL_21:
  v19.fields.a = *p_a;
  v19.fields.b = *p_b;
  v19.fields.g = *p_g;
  v19.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v19, 0);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_27;
  v18 = 0;
  while ( v18 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v18,
                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession((ItemIconComponent_o *)viewChangeButton, this->fields.isShowPossessionNum, 0);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v18;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_27;
  }
}


void SpotCooltimeRewardDialog__Open(
        SpotCooltimeRewardDialog_o *this,
        BattleDropItem_array *rewardsInfo,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  UnityEngine_Component_o *viewChangeButton; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x22
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UILabel_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *ComponentInChildren_object; // x23
  UILabel_o *getQpTitle; // x22
  UILabel_o *totalQpTitle; // x22
  UILabel_o *titleLabel; // x22
  const MethodInfo *v26; // x2
  Il2CppObject *v27; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  UnityEngine_Component_o *v34; // x8
  int m_CachedPtr_high; // w22
  int max_length; // w21
  const MethodInfo *v37; // x2
  System_Action_o *v38; // x20

  if ( (byte_5932BEB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____91505240);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SpotCooltimeRewardDialog__Open_b__26_0__);
    sub_21FFC50(&StringLiteral_12780/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/);
    sub_21FFC50(&StringLiteral_12785/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_QP_TITLE"*/);
    sub_21FFC50(&StringLiteral_12783/*"SPOT_COOLTIME_REWARD_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_12786/*"SPOT_COOLTIME_REWARD_VIEW_CHANGE"*/);
    sub_21FFC50(&StringLiteral_25463/*"treasurechest_btn"*/);
    sub_21FFC50(&StringLiteral_25469/*"treasurechest_img_bg_reward"*/);
    sub_21FFC50(&StringLiteral_12782/*"SPOT_COOLTIME_REWARD_DIALOG_GET_QP_TITLE"*/);
    byte_5932BEB = 1;
  }
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       viewChangeButton,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v9);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_25463/*"treasurechest_btn"*/, 0);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_34;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_25463/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_34;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    sub_21FFED4(viewChangeButton);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_34;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultItemObjList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.getQpRoot;
  if ( !viewChangeButton )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)viewChangeButton,
                                                  0);
  if ( !viewChangeButton )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                  viewChangeButton,
                                                  1,
                                                  (const MethodInfo_37EDB8C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91505240);
  if ( !this->fields.closeButton )
    goto LABEL_34;
  v19 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.closeButton,
                                                  0);
  if ( !viewChangeButton )
    goto LABEL_34;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 viewChangeButton,
                                 1,
                                 (const MethodInfo_37EDB8C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91505240);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12786/*"SPOT_COOLTIME_REWARD_VIEW_CHANGE"*/, 0);
  if ( !v19 )
    goto LABEL_34;
  UILabel__set_text(v19, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12780/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12782/*"SPOT_COOLTIME_REWARD_DIALOG_GET_QP_TITLE"*/, 0);
  if ( !getQpTitle )
    goto LABEL_34;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12785/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0);
  if ( !totalQpTitle )
    goto LABEL_34;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12783/*"SPOT_COOLTIME_REWARD_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  SpotCooltimeRewardDialog__SetQpLabel(this, rewardsInfo, v26);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_25469/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_25469/*"treasurechest_img_bg_reward"*/, 0);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_34;
  v27 = UnityEngine_Component__GetComponentInChildren_object_(
          viewChangeButton,
          1,
          (const MethodInfo_37EDB8C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91505240);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12780/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, 0);
  if ( !v27 )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)v27, (System_String_o *)viewChangeButton, 0);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeCallback,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !viewChangeButton )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  if ( !rewardsInfo )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !viewChangeButton )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  viewChangeButton,
                                                  (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !viewChangeButton )
    goto LABEL_34;
  v34 = viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !viewChangeButton
    || (m_CachedPtr_high = HIDWORD(v34[1].fields.m_CachedPtr),
        max_length = rewardsInfo->max_length,
        (viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(viewChangeButton, 0)) == 0)
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)viewChangeButton,
          2 * m_CachedPtr_high < max_length,
          0),
        SpotCooltimeRewardDialog__SetResultData(this, rewardsInfo, v37),
        (viewChangeButton = (UnityEngine_Component_o *)this->fields.scrollView) == 0) )
  {
LABEL_34:
    sub_21FFECC(viewChangeButton, rewardsInfo);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))viewChangeButton->klass[1]._1.element_class)(
    viewChangeButton,
    viewChangeButton->klass[1]._1.castClass,
    0.0);
  v38 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_SpotCooltimeRewardDialog__Open_b__26_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0, 0);
}


void SpotCooltimeRewardDialog__SetPossession(
        SpotCooltimeRewardDialog_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5932BF0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932BF0 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                objectId,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_16:
    sub_21FFECC(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0);
}


void SpotCooltimeRewardDialog__SetQpLabel(
        SpotCooltimeRewardDialog_o *this,
        BattleDropItem_array *dropItems,
        const MethodInfo *method)
{
  SpotCooltimeRewardDialog_o *v4; // x19
  int max_length; // w8
  unsigned int v6; // w23
  int v7; // w22
  BattleDropItem_o *v8; // x21
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t qp; // x23
  BalanceConfig_c *v13; // x0
  UILabel_o *getQpNumLabel; // x20
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  UILabel_o *totalQpNumLabel; // x19
  System_String_o *v18; // x20
  Il2CppObject *v19; // x0
  int64_t v20; // [xsp+8h] [xbp-58h] BYREF
  int v21; // [xsp+1Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_5932BEC & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_12784/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_POINT_FORMAT"*/);
    this = (SpotCooltimeRewardDialog_o *)sub_21FFC50(&StringLiteral_12781/*"SPOT_COOLTIME_REWARD_DIALOG_GET_POINT_FORMAT"*/);
    byte_5932BEC = 1;
  }
  if ( !dropItems )
    goto LABEL_30;
  max_length = dropItems->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_21FFED4(this);
      v8 = dropItems->m_Items[v6];
      if ( !v8 )
        break;
      if ( v8->fields.type == 2 )
      {
        this = (SpotCooltimeRewardDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SpotCooltimeRewardDialog_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          break;
        this = (SpotCooltimeRewardDialog_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               v8->fields.objectId,
                                               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.baseWindow) == 1 )
        {
          this = (SpotCooltimeRewardDialog_o *)BattleDropItem__getTotalNum(v8, 0);
          v7 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_17;
    }
LABEL_30:
    sub_21FFECC(this, dropItems);
  }
  v7 = 0;
LABEL_17:
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( SelfUserGame )
    qp = SelfUserGame->fields.qp;
  else
    qp = 0;
  v13 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v11);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( qp > v13->static_fields->QpMax )
  {
    qp = v13->static_fields->QpMax;
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v10, v11);
      qp = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
  }
  getQpNumLabel = v4->fields.getQpNumLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12781/*"SPOT_COOLTIME_REWARD_DIALOG_GET_POINT_FORMAT"*/, 0);
  v21 = v7;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v21);
  this = (SpotCooltimeRewardDialog_o *)System_String__Format(v15, v16, 0);
  if ( !getQpNumLabel )
    goto LABEL_30;
  UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0);
  totalQpNumLabel = v4->fields.totalQpNumLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12784/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_POINT_FORMAT"*/, 0);
  v20 = qp;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v20);
  this = (SpotCooltimeRewardDialog_o *)System_String__Format(v18, v19, 0);
  if ( !totalQpNumLabel )
    goto LABEL_30;
  UILabel__set_text(totalQpNumLabel, (System_String_o *)this, 0);
}


void SpotCooltimeRewardDialog__SetResultData(
        SpotCooltimeRewardDialog_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  SpotCooltimeRewardDialog_o *v4; // x20
  int max_length; // w8
  __int64 v6; // x26
  BattleDropItem_o *v7; // x8
  Il2CppObject *prefabResultItem; // x22
  __int64 v9; // x9
  int32_t objectId; // w23
  int32_t type; // w24
  int v12; // w29
  SpotCooltimeRewardDialog_o *v13; // x22
  SpotCooltimeRewardDialog_o *v14; // x25
  int v15; // w8
  ItemIconComponent_o *v16; // x25
  SpotCooltimeRewardDialog_o *v17; // x0
  const MethodInfo *v18; // x3
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v28; // x8
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_5932BED & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (SpotCooltimeRewardDialog_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932BED = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      do
      {
        if ( (unsigned int)v6 >= max_length )
          sub_21FFED4(this);
        v7 = rewards->m_Items[v6];
        if ( !v7 )
          goto LABEL_31;
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        v9 = 44;
        if ( v7->fields.originalNum > 0 )
          v9 = 52;
        type = v7->fields.type;
        objectId = v7->fields.objectId;
        v12 = *(_DWORD *)((char *)&v7->klass + v9);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewards, method);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_Object__Instantiate_object_(
                                               prefabResultItem,
                                               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v13 = this;
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
        v14 = this;
        if ( !byte_5931940 )
        {
          this = (SpotCooltimeRewardDialog_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        if ( !v14 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v14,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
        if ( !this )
          goto LABEL_31;
        v29.fields.x = v4->fields.iconScale;
        v29.fields.y = v29.fields.x;
        v29.fields.z = v29.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v29, 0);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v13,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v15 = v12 <= 1 ? -1 : v12;
        v16 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)this, type, objectId, v15, 0, 0);
        SpotCooltimeRewardDialog__SetPossession(v17, v16, objectId, v18);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 1, 0);
        this = (SpotCooltimeRewardDialog_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        m_CachedPtr = this->fields.m_CachedPtr;
        v26 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v28 + 32) = v13;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 32), (int32_t)v13, v19, v20, v21, v22, v23, v24);
        }
        this = (SpotCooltimeRewardDialog_o *)v4->fields.listRoot;
        if ( !this
          || (this = (SpotCooltimeRewardDialog_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
        {
LABEL_31:
          sub_21FFECC(this, rewards);
        }
        this = (SpotCooltimeRewardDialog_o *)((__int64 (__fastcall *)(SpotCooltimeRewardDialog_o *, const char *))this->klass[1]._1.name)(
                                               this,
                                               this->klass[1]._1.namespaze);
        max_length = rewards->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
    }
  }
}


void SpotCooltimeRewardDialog___Open_b__26_0(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  struct UIPanel_o *scrollView; // x0

  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_21FFECC(0, method);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))scrollView->klass->vtable._8_set_alpha.methodPtr)(
    scrollView,
    scrollView->klass->vtable._8_set_alpha.method,
    1.0);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *SpotCooltimeRewardDialog__get_closeBtnObject(
        SpotCooltimeRewardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_5932BF1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932BF1 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}