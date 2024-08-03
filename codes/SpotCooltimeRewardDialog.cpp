void __fastcall SpotCooltimeRewardDialog___ctor(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A00667 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Color___TypeInfo, v3);
    byte_4A00667 = 1;
  }
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_1B64170(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.viewChangeButtonLabelEffectColors, (int32_t)v4, v5, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SpotCooltimeRewardDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall SpotCooltimeRewardDialog__Init(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A00663 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_SpotCooltimeRewardDialog_EndClose__, v8);
    sub_1B640C8(&Method_SpotCooltimeRewardDialog_OnClickCloseButton__, v9);
    byte_4A00663 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v10 = Method_SpotCooltimeRewardDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_SpotCooltimeRewardDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B640E0(Method_SpotCooltimeRewardDialog_OnClickCloseButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, this->fields.closeBtnSe, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_SpotCooltimeRewardDialog_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v14; // x8
  UISprite_o *v15; // x20
  System_String_o *normalSprite; // x21
  __int64 v17; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v24; // w20
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A00664 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B640C8(&Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__, v7);
    sub_1B640C8(&StringLiteral_23966/*"treasurechest_btn"*/, v8);
    sub_1B640C8(&StringLiteral_23968/*"treasurechest_btn_on"*/, v9);
    byte_4A00664 = 1;
  }
  v10 = Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B640E0(Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v14 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23966/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23968/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v14, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v15 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v15, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1B64324(viewChangeButton);
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
    sub_1B6432C(viewChangeButton, v17);
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
                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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
  Il2CppObject *Component_object; // x22
  __int64 v24; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  UILabel_o *v31; // x22
  Il2CppObject *ComponentInChildren_object; // x23
  UILabel_o *getQpTitle; // x22
  UILabel_o *totalQpTitle; // x22
  UILabel_o *titleLabel; // x22
  const MethodInfo *v36; // x2
  Il2CppObject *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  UnityEngine_Component_o *v40; // x8
  int v41; // w22
  signed int max_length; // w21
  const MethodInfo *v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  System_Action_o *v46; // x20

  if ( (byte_4A00660 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, rewardsInfo);
    sub_1B640C8(&AtlasManager_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760, v8);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, v9);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&Method_SpotCooltimeRewardDialog__Open_b__26_0__, v14);
    sub_1B640C8(&StringLiteral_12149/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, v15);
    sub_1B640C8(&StringLiteral_12154/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_QP_TITLE"*/, v16);
    sub_1B640C8(&StringLiteral_12152/*"SPOT_COOLTIME_REWARD_DIALOG_TITLE"*/, v17);
    sub_1B640C8(&StringLiteral_12155/*"SPOT_COOLTIME_REWARD_VIEW_CHANGE"*/, v18);
    sub_1B640C8(&StringLiteral_23966/*"treasurechest_btn"*/, v19);
    sub_1B640C8(&StringLiteral_23972/*"treasurechest_img_bg_reward"*/, v20);
    sub_1B640C8(&StringLiteral_12151/*"SPOT_COOLTIME_REWARD_DIALOG_GET_QP_TITLE"*/, v21);
    byte_4A00660 = 1;
  }
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       viewChangeButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23966/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_34;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23966/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_34;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    sub_1B6432C(viewChangeButton, v24);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_34;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultItemObjList, (int32_t)v28, v29, v30);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.getQpRoot;
  if ( !viewChangeButton )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)viewChangeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                  viewChangeButton,
                                                  1,
                                                  (const MethodInfo_2E30314 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760);
  if ( !this->fields.closeButton )
    goto LABEL_34;
  v31 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.closeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_34;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 viewChangeButton,
                                 1,
                                 (const MethodInfo_2E30314 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12155/*"SPOT_COOLTIME_REWARD_VIEW_CHANGE"*/, 0LL);
  if ( !v31 )
    goto LABEL_34;
  UILabel__set_text(v31, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12149/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0LL);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12151/*"SPOT_COOLTIME_REWARD_DIALOG_GET_QP_TITLE"*/, 0LL);
  if ( !getQpTitle )
    goto LABEL_34;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0LL);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12154/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0LL);
  if ( !totalQpTitle )
    goto LABEL_34;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12152/*"SPOT_COOLTIME_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  SpotCooltimeRewardDialog__SetQpLabel(this, rewardsInfo, v36);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_34;
  v37 = UnityEngine_Component__GetComponentInChildren_object_(
          viewChangeButton,
          1,
          (const MethodInfo_2E30314 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12149/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, 0LL);
  if ( !v37 )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)v37, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v38, v39);
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  if ( !rewardsInfo )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !viewChangeButton )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  viewChangeButton,
                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !viewChangeButton )
    goto LABEL_34;
  v40 = viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !viewChangeButton
    || (v41 = *((_DWORD *)&v40[1].fields + 1),
        max_length = rewardsInfo->max_length,
        (viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(viewChangeButton, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 2 * v41 < max_length, 0LL),
        SpotCooltimeRewardDialog__SetResultData(this, rewardsInfo, v43),
        (viewChangeButton = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_34:
    sub_1B64324(viewChangeButton);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))viewChangeButton->klass[1]._1.castClass)(
    viewChangeButton,
    viewChangeButton->klass[1]._1.declaringType,
    0.0);
  v46 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v44, v45);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_SpotCooltimeRewardDialog__Open_b__26_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
}


void __fastcall SpotCooltimeRewardDialog__SetPossession(
        SpotCooltimeRewardDialog_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A00665 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A00665 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_12:
    sub_1B64324(Instance);
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
  UserGameEntity_o *SelfUserGame; // x0
  int32_t qp; // w23
  BalanceConfig_c *v18; // x0
  UILabel_o *getQpNumLabel; // x20
  System_String_o *v20; // x21
  Il2CppObject *v21; // x0
  UILabel_o *totalQpNumLabel; // x19
  System_String_o *v23; // x20
  Il2CppObject *v24; // x0
  int32_t v25; // [xsp+8h] [xbp-48h] BYREF
  int v26; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4A00661 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, dropItems);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_12153/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_POINT_FORMAT"*/, v10);
    this = (SpotCooltimeRewardDialog_o *)sub_1B640C8(&StringLiteral_12150/*"SPOT_COOLTIME_REWARD_DIALOG_GET_POINT_FORMAT"*/, v11);
    byte_4A00661 = 1;
  }
  if ( !dropItems )
    goto LABEL_30;
  max_length = dropItems->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1B6432C(this, dropItems);
      v15 = dropItems->m_Items[v13];
      if ( !v15 )
        break;
      if ( v15->fields.type == 2 )
      {
        this = (SpotCooltimeRewardDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SpotCooltimeRewardDialog_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          break;
        this = (SpotCooltimeRewardDialog_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               v15->fields.objectId,
                                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.baseWindow) == 1 )
        {
          this = (SpotCooltimeRewardDialog_o *)BattleDropItem__getTotalNum(v15, 0LL);
          v14 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_17;
    }
LABEL_30:
    sub_1B64324(this);
  }
  v14 = 0;
LABEL_17:
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( SelfUserGame )
    qp = SelfUserGame->fields.qp;
  else
    qp = 0;
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  if ( qp > v18->static_fields->QpMax )
  {
    qp = v18->static_fields->QpMax;
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      qp = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
  }
  getQpNumLabel = v4->fields.getQpNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12150/*"SPOT_COOLTIME_REWARD_DIALOG_GET_POINT_FORMAT"*/, 0LL);
  v26 = v14;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  this = (SpotCooltimeRewardDialog_o *)System_String__Format(v20, v21, 0LL);
  if ( !getQpNumLabel )
    goto LABEL_30;
  UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0LL);
  totalQpNumLabel = v4->fields.totalQpNumLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12153/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_POINT_FORMAT"*/, 0LL);
  v25 = qp;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  this = (SpotCooltimeRewardDialog_o *)System_String__Format(v23, v24, 0LL);
  if ( !totalQpNumLabel )
    goto LABEL_30;
  UILabel__set_text(totalQpNumLabel, (System_String_o *)this, 0LL);
}


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
  __int64 v10; // x26
  BattleDropItem_o *v11; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v14; // x10
  int v15; // w29
  Il2CppObject *prefabResultItem; // x22
  SpotCooltimeRewardDialog_o *v17; // x22
  __int64 v18; // x1
  SpotCooltimeRewardDialog_o *v19; // x25
  int32_t v20; // w3
  ItemIconComponent_o *v21; // x25
  SpotCooltimeRewardDialog_o *v22; // x0
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v29; // x8
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A00662 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (SpotCooltimeRewardDialog_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_4A00662 = 1;
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
          sub_1B6432C(this, rewards);
        v11 = rewards->m_Items[v10];
        if ( !v11 )
          goto LABEL_31;
        type = v11->fields.type;
        objectId = v11->fields.objectId;
        v14 = 44LL;
        if ( v11->fields.originalNum > 0 )
          v14 = 52LL;
        v15 = *(_DWORD *)((char *)&v11->klass + v14);
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_Object__Instantiate_object_(
                                               prefabResultItem,
                                               (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v17 = this;
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v17, 0LL);
        v19 = this;
        if ( !byte_49F7111 )
        {
          this = (SpotCooltimeRewardDialog_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
          byte_49F7111 = 1;
        }
        if ( !v19 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v19,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v17, 0LL);
        if ( !this )
          goto LABEL_31;
        v30.fields.x = v4->fields.iconScale;
        v30.fields.y = v30.fields.x;
        v30.fields.z = v30.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v30, 0LL);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v17,
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v20 = v15 <= 1 ? -1 : v15;
        v21 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)this, type, objectId, v20, 0, 0LL);
        SpotCooltimeRewardDialog__SetPossession(v22, v21, objectId, v23);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, 1, 0LL);
        this = (SpotCooltimeRewardDialog_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v26 = *(_QWORD *)&this->fields.m_CachedPtr;
        v27 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v26 )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v26 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v17,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = v26 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v29 + 32) = v17;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v17, v24, v25);
        }
        this = (SpotCooltimeRewardDialog_o *)v4->fields.listRoot;
        if ( !this
          || (this = (SpotCooltimeRewardDialog_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1B64324(this);
        }
        this = (SpotCooltimeRewardDialog_o *)((__int64 (__fastcall *)(SpotCooltimeRewardDialog_o *, void *))this->klass[1]._1.namespaze)(
                                               this,
                                               this->klass[1]._1.byval_arg.data);
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
    sub_1B64324(0LL);
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

  if ( (byte_4A00666 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A00666 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}