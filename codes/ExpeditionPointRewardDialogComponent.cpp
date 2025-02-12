void __fastcall ExpeditionPointRewardDialogComponent___ctor(
        ExpeditionPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BCBA22 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Color___TypeInfo, v3);
    byte_4BCBA22 = 1;
  }
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_1C1AC7C(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionPointRewardDialogComponent__EndClose(
        ExpeditionPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4BCBA1E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ActionExtensions_Call_bool___, method);
    byte_4BCBA1E = 1;
  }
  ExpeditionPointRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2EF1BAC *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C1AB78(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
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
    sub_1C1AE30(0LL, v4);
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
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *current; // x20
  System_Action_o *v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BCBA1D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ActionExtensions_Call_bool___, method);
    sub_1C1ABD4(&System_Action_TypeInfo, v3);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_1C1ABD4(&Method_ExpeditionPointRewardDialogComponent_EndClose__, v8);
    sub_1C1ABD4(&Method_ExpeditionPointRewardDialogComponent_OnClickCloseButton__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    byte_4BCBA1D = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    this->fields.state = 3;
    if ( !scrollView )
      goto LABEL_19;
    scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              scrollView,
                                              (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !scrollView )
      goto LABEL_19;
    UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2EF1BAC *)Method_ActionExtensions_Call_bool___);
    v13 = Method_ExpeditionPointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_ExpeditionPointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C1ABEC(Method_ExpeditionPointRewardDialogComponent_OnClickCloseButton__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
    scrollView = (UnityEngine_Component_o *)this->fields.resultItemObjList;
    if ( !scrollView )
LABEL_19:
      sub_1C1AE30(scrollView, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)scrollView,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70794412((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v16 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ExpeditionPointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v15; // x8
  UISprite_o *v16; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v24; // w20
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BCBA1F & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, method);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1C1ABD4(&Method_ExpeditionPointRewardDialogComponent_OnClickSwitchShowMode__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1C1ABD4(&StringLiteral_24479/*"treasurechest_btn"*/, v8);
    sub_1C1ABD4(&StringLiteral_24481/*"treasurechest_btn_on"*/, v9);
    byte_4BCBA1F = 1;
  }
  v10 = Method_ExpeditionPointRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_ExpeditionPointRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C1ABEC(Method_ExpeditionPointRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24479/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24481/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v16 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v16, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1C1AE30(viewChangeButton, v12);
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
    sub_1C1AE38(viewChangeButton, v12);
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
                                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x24
  UnityEngine_Component_o *v54; // x8
  int v55; // w25
  int v56; // w24
  Il2CppObject *Component_object; // x24
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v59; // x24
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *v66; // x24
  UILabel_o *v67; // x25
  Il2CppObject *ComponentInChildren_object; // x26
  UILabel_o *titleLabel; // x25
  System_String_o *v70; // x0
  UILabel_o *titleNextItemLabel; // x25
  UILabel_o *titleAtLabel; // x25
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *v74; // x22
  const MethodInfo *v75; // x3
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_Action_o *v82; // x20

  if ( (byte_4BCBA1A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, eventExpeditionEntity);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v13);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____77566024, v14);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIGrid___, v15);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UISprite___, v16);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventRewardMaster___, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject___ctor__, v18);
    sub_1C1ABD4(&System_Collections_Generic_List_GameObject__TypeInfo, v19);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v20);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C1ABD4(&Method_ExpeditionPointRewardDialogComponent___c__DisplayClass27_0__Open_b__0__, v22);
    sub_1C1ABD4(&ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_TypeInfo, v23);
    sub_1C1ABD4(&StringLiteral_5921/*"EXPEDITION_EVENT_POINT"*/, v24);
    sub_1C1ABD4(&StringLiteral_5906/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, v25);
    sub_1C1ABD4(&StringLiteral_24479/*"treasurechest_btn"*/, v26);
    sub_1C1ABD4(&StringLiteral_5927/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, v27);
    sub_1C1ABD4(&StringLiteral_24485/*"treasurechest_img_bg_reward"*/, v28);
    sub_1C1ABD4(&StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v29);
    sub_1C1ABD4(&StringLiteral_5919/*"EXPEDITION_DIALOG_CANCEL"*/, v30);
    sub_1C1ABD4(&StringLiteral_5922/*"EXPEDITION_EVENT_POINT_REWARD"*/, v31);
    byte_4BCBA1A = 1;
  }
  v32 = sub_1C1AE20(ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_34;
  *(_QWORD *)(v32 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)this, v35, v36, v37, v38, v39, v40);
  *(_QWORD *)(v32 + 24) = expeditionRewards;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v32 + 24), (int64_t)expeditionRewards, v41, v42, v43, v44, v45, v46);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.eventRootMaskSetActiveAction,
    (int64_t)setMaskMethod,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = *(_QWORD *)(v32 + 24);
  if ( !v53 )
    goto LABEL_34;
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_34;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                          listRoot,
                                          (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !listRoot )
    goto LABEL_34;
  v54 = listRoot;
  listRoot = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !listRoot )
    goto LABEL_34;
  v55 = *((_DWORD *)&v54[1].fields + 1);
  v56 = *(_DWORD *)(v53 + 24);
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listRoot, 0LL);
  if ( !listRoot )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 2 * v55 < v56, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !listRoot )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       listRoot,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24479/*"treasurechest_btn"*/, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !listRoot )
    goto LABEL_34;
  UIButton__set_normalSprite((UIButton_o *)listRoot, (System_String_o *)StringLiteral_24479/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_34;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    sub_1C1AE38(listRoot, v34);
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !listRoot )
    goto LABEL_34;
  UILabel__set_effectColor(
    (UILabel_o *)listRoot,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v59 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v59;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resultItemObjList, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5921/*"EXPEDITION_EVENT_POINT"*/, 0LL);
  if ( !this->fields.viewChangeButton )
    goto LABEL_34;
  v66 = (Il2CppObject *)listRoot;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.viewChangeButton,
                                          0LL);
  if ( !listRoot )
    goto LABEL_34;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                          listRoot,
                                          1,
                                          (const MethodInfo_2F963B8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____77566024);
  if ( !this->fields.closeButton )
    goto LABEL_34;
  v67 = (UILabel_o *)listRoot;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.closeButton,
                                          0LL);
  if ( !listRoot )
    goto LABEL_34;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 listRoot,
                                 1,
                                 (const MethodInfo_2F963B8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____77566024);
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5927/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v67 )
    goto LABEL_34;
  UILabel__set_text(v67, (System_String_o *)listRoot, 0LL);
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5919/*"EXPEDITION_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)listRoot, 0LL);
  titleLabel = this->fields.titleLabel;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_5906/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  listRoot = (UnityEngine_Component_o *)System_String__Format(v70, v66, 0LL);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, (System_String_o *)listRoot, 0LL);
  titleNextItemLabel = this->fields.titleNextItemLabel;
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_34;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)listRoot, 0LL);
  titleAtLabel = this->fields.titleAtLabel;
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5922/*"EXPEDITION_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_34;
  UILabel__set_text(titleAtLabel, (System_String_o *)listRoot, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.atNameLabel;
  if ( !listRoot )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)listRoot, (System_String_o *)v66, 0LL);
  listRoot = (UnityEngine_Component_o *)this->fields.pointRewardRoot;
  if ( !listRoot )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointBg, (System_String_o *)StringLiteral_24485/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24485/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  listRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !listRoot )
    goto LABEL_34;
  listRoot = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)listRoot,
                                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventRewardMaster___);
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
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
          (int64_t)closeCallback,
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
LABEL_34:
    sub_1C1AE30(listRoot, v34);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0LL);
  v82 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *isQp; // x0
  __int64 v18; // x1
  UILabel_o *nextItemLabel; // x19
  System_String_o *v20; // x1
  UILabel_o *atLabel; // x20
  int64_t v22; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BCBA1C & 1) == 0 )
  {
    sub_1C1ABD4(&long_TypeInfo, userEventPoint);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_2974/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_1C1ABD4(&StringLiteral_2972/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_1C1ABD4(&StringLiteral_2970/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v10);
    byte_4BCBA1C = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2972/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, isQp, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2970/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
        goto LABEL_14;
    }
LABEL_17:
    sub_1C1AE30(isQp, v18);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v11 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2974/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v22 = eventRewardEnt->fields.point - userEventPoint;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22, v13, v14, v15);
  isQp = System_String__Format(v12, v16, 0LL);
  if ( !v11 )
    goto LABEL_17;
  UILabel__set_text(v11, isQp, 0LL);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_63040368(nameText, countText, 0LL);
    if ( !nextItemLabel )
      goto LABEL_17;
LABEL_14:
    v20 = isQp;
    goto LABEL_15;
  }
  if ( !nextItemLabel )
    goto LABEL_17;
  v20 = countText;
LABEL_15:
  UILabel__set_text(nextItemLabel, v20, 0LL);
}


void __fastcall ExpeditionPointRewardDialogComponent__SetPossession(
        ExpeditionPointRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BCBA20 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BCBA20 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
    byte_4BC2585 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                objectId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_16:
    sub_1C1AE30(Instance, v9);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


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
  __int64 v10; // x26
  BattleDropItem_o *v11; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v14; // x10
  int v15; // w29
  Il2CppObject *prefabResultItem; // x22
  ExpeditionPointRewardDialogComponent_o *v17; // x22
  ExpeditionPointRewardDialogComponent_o *v18; // x25
  int32_t v19; // w3
  ItemIconComponent_o *v20; // x25
  ExpeditionPointRewardDialogComponent_o *v21; // x0
  const MethodInfo *v22; // x3
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v32; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4BCBA1B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ExpeditionPointRewardDialogComponent_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    byte_4BCBA1B = 1;
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
          sub_1C1AE38(this, rewards);
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
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                           prefabResultItem,
                                                           (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v17 = this;
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)v17,
                                                           0LL);
        v18 = this;
        if ( !byte_4BC2141 )
        {
          this = (ExpeditionPointRewardDialogComponent_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, rewards);
          byte_4BC2141 = 1;
        }
        if ( !v18 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v18,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)v17,
                                                           0LL);
        if ( !this )
          goto LABEL_31;
        v33.fields.x = v4->fields.iconScale;
        v33.fields.y = v33.fields.x;
        v33.fields.z = v33.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v33, 0LL);
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)v17,
                                                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v19 = v15 <= 1 ? -1 : v15;
        v20 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_39340176((ItemIconComponent_o *)this, type, objectId, v19, 0, 0LL);
        ExpeditionPointRewardDialogComponent__SetPossession(v21, v20, objectId, v22);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, 1, 0LL);
        this = (ExpeditionPointRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v29 = *(_QWORD *)&this->fields.m_CachedPtr;
        v30 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v29 )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v29 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v17,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = v29 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v32 + 32) = v17;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)v17, v23, v24, v25, v26, v27, v28);
        }
        this = (ExpeditionPointRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1C1AE30(this, rewards);
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

  if ( (byte_4BCBA21 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCBA21 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C1AE30(0LL, v4);
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
  const MethodInfo *v2; // x2
  ExpeditionPointRewardDialogComponent_o *_4__this; // x0
  struct ExpeditionPointRewardDialogComponent_o *v5; // x8

  if ( (byte_4BCBA23 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ActionExtensions_Call_bool___, method);
    byte_4BCBA23 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionPointRewardDialogComponent__SetResultData(_4__this, this->fields.expeditionRewards, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1C1AE30(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2EF1BAC *)Method_ActionExtensions_Call_bool___);
}