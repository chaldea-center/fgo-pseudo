void __fastcall SpotCooltimeRewardDialog___ctor(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_Color_array *v6; // x0
  __int64 v7; // x1

  if ( (byte_4B11250 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, v4, v5);
    byte_4B11250 = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_1BCA784(&this->fields.viewChangeButtonLabelEffectColors, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v7);
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
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SpotCooltimeRewardDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall SpotCooltimeRewardDialog__Init(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SpotCooltimeRewardDialog__OnClickCloseButton(
        SpotCooltimeRewardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x20
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x20
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1124C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SpotCooltimeRewardDialog_EndClose__, v14, v15);
    sub_1BCA7E0(&Method_SpotCooltimeRewardDialog_OnClickCloseButton__, v16, v17);
    byte_4B1124C = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v18 = Method_SpotCooltimeRewardDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_SpotCooltimeRewardDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1BCA7F8(Method_SpotCooltimeRewardDialog_OnClickCloseButton__);
    v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, this->fields.closeBtnSe, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1BCAA3C(0LL, v20);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v29.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
        UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_SpotCooltimeRewardDialog_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v28, 0LL);
  }
}


void __fastcall SpotCooltimeRewardDialog__OnClickSwitchShowMode(
        SpotCooltimeRewardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v23; // x8
  UISprite_o *v24; // x20
  __int64 v25; // x1
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v33; // w20
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1124D & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__, v12, v13);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24319/*"treasurechest_btn_on"*/, v16, v17);
    byte_4B1124D = 1;
  }
  v18 = Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_SpotCooltimeRewardDialog_OnClickSwitchShowMode__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v23 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24317/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24319/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v23, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v24 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v24, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1BCAA3C(viewChangeButton, v20);
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
    sub_1BCAA44(viewChangeButton, v20);
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
  v34.fields.a = *p_r;
  v34.fields.b = *p_a;
  v34.fields.g = *p_b;
  v34.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v34, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v33 = 0;
  while ( v33 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v33,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v33;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Component_o *viewChangeButton; // x0
  __int64 v38; // x1
  Il2CppObject *Component_object; // x22
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_object__o *v44; // x22
  UILabel_o *v45; // x22
  __int64 v46; // x1
  Il2CppObject *ComponentInChildren_object; // x23
  UILabel_o *getQpTitle; // x22
  UILabel_o *totalQpTitle; // x22
  UILabel_o *titleLabel; // x22
  const MethodInfo *v51; // x2
  Il2CppObject *v52; // x22
  UnityEngine_Component_o *v53; // x8
  int v54; // w22
  signed int max_length; // w21
  const MethodInfo *v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Action_o *v60; // x20

  if ( (byte_4B11249 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, rewardsInfo, closeCallback);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SpotCooltimeRewardDialog__Open_b__26_0__, v21, v22);
    sub_1BCA7E0(&StringLiteral_12360/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12365/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_QP_TITLE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12363/*"SPOT_COOLTIME_REWARD_DIALOG_TITLE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12366/*"SPOT_COOLTIME_REWARD_VIEW_CHANGE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_24323/*"treasurechest_img_bg_reward"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12362/*"SPOT_COOLTIME_REWARD_DIALOG_GET_QP_TITLE"*/, v35, v36);
    byte_4B11249 = 1;
  }
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       viewChangeButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_34;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_34;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    sub_1BCAA44(viewChangeButton, rewardsInfo);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_34;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v41,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v44;
  sub_1BCA784(&this->fields.resultItemObjList, v44);
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
                                                  (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !this->fields.closeButton )
    goto LABEL_34;
  v45 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.closeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_34;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 viewChangeButton,
                                 1,
                                 (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12366/*"SPOT_COOLTIME_REWARD_VIEW_CHANGE"*/, 0LL);
  if ( !v45 )
    goto LABEL_34;
  UILabel__set_text(v45, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0LL);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12362/*"SPOT_COOLTIME_REWARD_DIALOG_GET_QP_TITLE"*/, 0LL);
  if ( !getQpTitle )
    goto LABEL_34;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0LL);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12365/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0LL);
  if ( !totalQpTitle )
    goto LABEL_34;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12363/*"SPOT_COOLTIME_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  SpotCooltimeRewardDialog__SetQpLabel(this, rewardsInfo, v51);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_34;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_34;
  v52 = UnityEngine_Component__GetComponentInChildren_object_(
          viewChangeButton,
          1,
          (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SPOT_COOLTIME_REWARD_DIALOG_CLOSE"*/, 0LL);
  if ( !v52 )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)v52, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BCA784(&this->fields.closeCallbackFunc, closeCallback);
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
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !viewChangeButton )
    goto LABEL_34;
  v53 = viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !viewChangeButton
    || (v54 = *((_DWORD *)&v53[1].fields + 1),
        max_length = rewardsInfo->max_length,
        (viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(viewChangeButton, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 2 * v54 < max_length, 0LL),
        SpotCooltimeRewardDialog__SetResultData(this, rewardsInfo, v56),
        (viewChangeButton = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_34:
    sub_1BCAA3C(viewChangeButton, rewardsInfo);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))viewChangeButton->klass[1]._1.castClass)(
    viewChangeButton,
    viewChangeButton->klass[1]._1.declaringType,
    0.0);
  v60 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v57, v58, v59);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_SpotCooltimeRewardDialog__Open_b__26_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotCooltimeRewardDialog__SetPossession(
        SpotCooltimeRewardDialog_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1124E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, item, *(_QWORD *)&objectId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1124E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall SpotCooltimeRewardDialog__SetQpLabel(
        SpotCooltimeRewardDialog_o *this,
        BattleDropItem_array *dropItems,
        const MethodInfo *method)
{
  SpotCooltimeRewardDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  signed int max_length; // w8
  unsigned int v20; // w23
  int v21; // w22
  BattleDropItem_o *v22; // x21
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v24; // x1
  int32_t qp; // w23
  BalanceConfig_c *v26; // x0
  UILabel_o *getQpNumLabel; // x20
  System_String_o *v28; // x21
  Il2CppObject *v29; // x0
  UILabel_o *totalQpNumLabel; // x19
  System_String_o *v31; // x20
  Il2CppObject *v32; // x0
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int v34; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4B1124A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, dropItems, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_12364/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_POINT_FORMAT"*/, v15, v16);
    this = (SpotCooltimeRewardDialog_o *)sub_1BCA7E0(&StringLiteral_12361/*"SPOT_COOLTIME_REWARD_DIALOG_GET_POINT_FORMAT"*/, v17, v18);
    byte_4B1124A = 1;
  }
  if ( !dropItems )
    goto LABEL_30;
  max_length = dropItems->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1BCAA44(this, dropItems);
      v22 = dropItems->m_Items[v20];
      if ( !v22 )
        break;
      if ( v22->fields.type == 2 )
      {
        this = (SpotCooltimeRewardDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SpotCooltimeRewardDialog_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          break;
        this = (SpotCooltimeRewardDialog_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               v22->fields.objectId,
                                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.baseWindow) == 1 )
        {
          this = (SpotCooltimeRewardDialog_o *)BattleDropItem__getTotalNum(v22, 0LL);
          v21 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_17;
    }
LABEL_30:
    sub_1BCAA3C(this, dropItems);
  }
  v21 = 0;
LABEL_17:
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( SelfUserGame )
    qp = SelfUserGame->fields.qp;
  else
    qp = 0;
  v26 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v24);
    v26 = BalanceConfig_TypeInfo;
  }
  if ( qp > v26->static_fields->QpMax )
  {
    qp = v26->static_fields->QpMax;
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v24);
      qp = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
  }
  getQpNumLabel = v4->fields.getQpNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12361/*"SPOT_COOLTIME_REWARD_DIALOG_GET_POINT_FORMAT"*/, 0LL);
  v34 = v21;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  this = (SpotCooltimeRewardDialog_o *)System_String__Format(v28, v29, 0LL);
  if ( !getQpNumLabel )
    goto LABEL_30;
  UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0LL);
  totalQpNumLabel = v4->fields.totalQpNumLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12364/*"SPOT_COOLTIME_REWARD_DIALOG_TOTAL_POINT_FORMAT"*/, 0LL);
  v33 = qp;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  this = (SpotCooltimeRewardDialog_o *)System_String__Format(v31, v32, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  signed int max_length; // w8
  __int64 v14; // x26
  BattleDropItem_o *v15; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v18; // x10
  int v19; // w29
  Il2CppObject *prefabResultItem; // x22
  SpotCooltimeRewardDialog_o *v21; // x22
  __int64 v22; // x2
  SpotCooltimeRewardDialog_o *v23; // x25
  int32_t v24; // w3
  ItemIconComponent_o *v25; // x25
  SpotCooltimeRewardDialog_o *v26; // x0
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v31; // x8
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B1124B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    this = (SpotCooltimeRewardDialog_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1124B = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0LL;
      do
      {
        if ( (unsigned int)v14 >= max_length )
          sub_1BCAA44(this, rewards);
        v15 = rewards->m_Items[v14];
        if ( !v15 )
          goto LABEL_31;
        type = v15->fields.type;
        objectId = v15->fields.objectId;
        v18 = 44LL;
        if ( v15->fields.originalNum > 0 )
          v18 = 52LL;
        v19 = *(_DWORD *)((char *)&v15->klass + v18);
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewards);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_Object__Instantiate_object_(
                                               prefabResultItem,
                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v21 = this;
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0LL);
        v23 = this;
        if ( !byte_4B109C1 )
        {
          this = (SpotCooltimeRewardDialog_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, rewards, v22);
          byte_4B109C1 = 1;
        }
        if ( !v23 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v23,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0LL);
        if ( !this )
          goto LABEL_31;
        v32.fields.x = v4->fields.iconScale;
        v32.fields.y = v32.fields.x;
        v32.fields.z = v32.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v32, 0LL);
        this = (SpotCooltimeRewardDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v21,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v24 = v19 <= 1 ? -1 : v19;
        v25 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)this, type, objectId, v24, 0, 0LL);
        SpotCooltimeRewardDialog__SetPossession(v26, v25, objectId, v27);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v21, 1, 0LL);
        this = (SpotCooltimeRewardDialog_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v28 = *(_QWORD *)&this->fields.m_CachedPtr;
        v29 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v28 )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v28 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v21,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = v28 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v31 + 32) = v21;
          sub_1BCA784(v31 + 32, v21);
        }
        this = (SpotCooltimeRewardDialog_o *)v4->fields.listRoot;
        if ( !this
          || (this = (SpotCooltimeRewardDialog_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1BCAA3C(this, rewards);
        }
        this = (SpotCooltimeRewardDialog_o *)((__int64 (__fastcall *)(SpotCooltimeRewardDialog_o *, void *))this->klass[1]._1.namespaze)(
                                               this,
                                               this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v14;
      }
      while ( (int)v14 < max_length );
    }
  }
}


void __fastcall SpotCooltimeRewardDialog___Open_b__26_0(SpotCooltimeRewardDialog_o *this, const MethodInfo *method)
{
  struct UIPanel_o *scrollView; // x0

  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1124F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1124F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}