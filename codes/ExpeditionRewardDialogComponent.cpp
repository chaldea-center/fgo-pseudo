void __fastcall ExpeditionRewardDialogComponent___ctor(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5EEAD & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&UnityEngine_Color___TypeInfo);
    byte_4A5EEAD = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_1B88658(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.viewChangeButtonLabelEffectColors, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__EndClose(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4A5EEA9 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A5EEA9 = 1;
  }
  ExpeditionRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__OnClickCloseButton(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *current; // x20
  System_Action_o *v7; // x20
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5EEA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_ExpeditionRewardDialogComponent_EndClose__);
    sub_1B885B0(&Method_ExpeditionRewardDialogComponent_OnClickCloseButton__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EEA8 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    this->fields.state = 3;
    if ( !scrollView )
      goto LABEL_19;
    scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              scrollView,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !scrollView )
      goto LABEL_19;
    UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
    v4 = Method_ExpeditionRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_ExpeditionRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_ExpeditionRewardDialogComponent_OnClickCloseButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.closeBtnSe, 0LL);
    scrollView = (UnityEngine_Component_o *)this->fields.resultItemObjList;
    if ( !scrollView )
LABEL_19:
      sub_1B8880C(scrollView, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)scrollView,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v8.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ExpeditionRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall ExpeditionRewardDialogComponent__OnClickSwitchShowMode(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v8; // x8
  UISprite_o *v9; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v17; // w20
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5EEAA & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&StringLiteral_24065/*"treasurechest_btn"*/);
    sub_1B885B0(&StringLiteral_24067/*"treasurechest_btn_on"*/);
    byte_4A5EEAA = 1;
  }
  v3 = Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v8 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24065/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24067/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v8, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v9 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v9, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1B8880C(viewChangeButton, v5);
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
    sub_1B88814(viewChangeButton, v5);
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
  v18.fields.a = *p_r;
  v18.fields.b = *p_a;
  v18.fields.g = *p_b;
  v18.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v18, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v17 = 0;
  while ( v17 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v17,
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v17;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
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
  __int64 viewChangeButton; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *Component_object; // x25
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v25; // x25
  int32_t v26; // w2
  int32_t v27; // w3
  bool v28; // w24
  int32_t v29; // w26
  ExpeditionRewardDialogComponent___c_c *v30; // x0
  System_Func_object__int__o *_9__28_0; // x25
  Il2CppObject *v32; // x27
  struct ExpeditionRewardDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  int v36; // w25
  UILabel_o *v37; // x27
  Il2CppObject *ComponentInChildren_object; // x28
  UILabel_o *titleLabel; // x27
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v43; // x27
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x24
  __int64 v51; // x26
  UILabel_o *totalNumLabel; // x24
  System_String_o *v53; // x27
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  Il2CppObject *v58; // x24
  System_String_o **v59; // x8
  int32_t v60; // w2
  int32_t v61; // w3
  BattleDropItem_o *v62; // x23
  int32_t v63; // w8
  __int64 v64; // x0
  System_Array_o **v65; // x21
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x24
  int32_t v69; // w2
  int32_t v70; // w3
  System_Array_o *v71; // x20
  __int64 v72; // x8
  int v73; // w21
  void *monitor; // x20
  System_Action_o *v75; // x20
  __int64 v76; // x0
  bool v77; // [xsp+Ch] [xbp-84h]
  int32_t eventIda; // [xsp+1Ch] [xbp-74h]
  __int64 v79; // [xsp+20h] [xbp-70h] BYREF
  int v80; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A5EEA6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BattleDropItem___TypeInfo);
    sub_1B885B0(&BattleDropItem_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___);
    sub_1B885B0(&System_Func_EventExpeditionEntity__int__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__);
    sub_1B885B0(&Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__);
    sub_1B885B0(&ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo);
    sub_1B885B0(&ExpeditionRewardDialogComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_13447/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_1B885B0(&StringLiteral_860/*"+"*/);
    sub_1B885B0(&StringLiteral_5760/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/);
    sub_1B885B0(&StringLiteral_24065/*"treasurechest_btn"*/);
    sub_1B885B0(&StringLiteral_2943/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1B885B0(&StringLiteral_5781/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_1B885B0(&StringLiteral_24071/*"treasurechest_img_bg_reward"*/);
    sub_1B885B0(&StringLiteral_5780/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_5779/*"EXPEDITION_REWARD_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_5778/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/);
    byte_4A5EEA6 = 1;
  }
  v16 = sub_1B887FC(ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_57;
  *(_QWORD *)(v16 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)this, v19, v20);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventRootMaskSetActiveAction,
    (int32_t)setMaskMethod,
    v21,
    v22);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24065/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_57;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24065/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_57;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_58;
  viewChangeButton = (__int64)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_57;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultItemObjList, (int32_t)v25, v26, v27);
  if ( !eventExpeditionEntities )
    goto LABEL_57;
  v28 = getPointReward;
  viewChangeButton = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
                                0,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
  if ( !viewChangeButton )
    goto LABEL_57;
  v29 = *(_DWORD *)(viewChangeButton + 44);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v29, 0LL);
  v30 = ExpeditionRewardDialogComponent___c_TypeInfo;
  eventIda = eventId;
  if ( !ExpeditionRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionRewardDialogComponent___c_TypeInfo);
    v30 = ExpeditionRewardDialogComponent___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v30->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = ExpeditionRewardDialogComponent___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v32, Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__, 0LL);
    static_fields = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__28_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v34, v35);
  }
  viewChangeButton = System_Linq_Enumerable__Sum_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                       (System_Func_TSource__int__o *)_9__28_0,
                       (const MethodInfo_2EB7264 *)Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___);
  if ( !this->fields.getPointRoot )
    goto LABEL_57;
  v36 = viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  v77 = v28;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_2E76830 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
  if ( !this->fields.closeButton )
    goto LABEL_57;
  v37 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)viewChangeButton,
                                 1,
                                 (const MethodInfo_2E76830 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5781/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v37 )
    goto LABEL_57;
  UILabel__set_text(v37, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5760/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_57;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5779/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_57;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, v29, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v29, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24071/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24071/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5778/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_57;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_2943/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v80 = v36;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80, v44, v45, v46);
  v48 = System_String__Format(v43, v47, 0LL);
  viewChangeButton = (__int64)System_String__Concat_61707032((System_String_o *)StringLiteral_860/*"+"*/, v48, 0LL);
  if ( !getNumLabel )
    goto LABEL_57;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventIda, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v51 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5780/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_57;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_2943/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v79 = v51;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v79, v54, v55, v56);
  viewChangeButton = (__int64)System_String__Format(v53, v57, 0LL);
  if ( !totalNumLabel )
    goto LABEL_57;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  v58 = UnityEngine_Component__GetComponentInChildren_object_(
          (UnityEngine_Component_o *)viewChangeButton,
          1,
          (const MethodInfo_2E76830 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v59 = (System_String_o **)(v77 ? &StringLiteral_13447/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/ : &StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
  viewChangeButton = (__int64)LocalizationManager__Get(*v59, 0LL);
  if ( !v58 )
    goto LABEL_57;
  UILabel__set_text((UILabel_o *)v58, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v60, v61);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v62 = (BattleDropItem_o *)sub_1B887FC(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v62, 0LL);
  if ( !v62 )
    goto LABEL_57;
  v62->fields.type = 2;
  viewChangeButton = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
                                0,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
  if ( !viewChangeButton )
    goto LABEL_57;
  v63 = *(_DWORD *)(viewChangeButton + 44);
  v62->fields.originalNum = v36;
  v62->fields.objectId = v63;
  if ( !resultExpeditionRewardInfos
    || (v64 = sub_1B88658(BattleDropItem___TypeInfo, resultExpeditionRewardInfos->max_length + 1),
        *(_QWORD *)(v16 + 24) = v64,
        v65 = (System_Array_o **)(v16 + 24),
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 24), v64, v66, v67),
        (v68 = *(_QWORD *)(v16 + 24)) == 0) )
  {
LABEL_57:
    sub_1B8880C(viewChangeButton, v18);
  }
  viewChangeButton = sub_1B886EC(v62, *(_QWORD *)(*(_QWORD *)v68 + 64LL));
  if ( !viewChangeButton )
  {
    v76 = sub_1B88830(0LL);
    sub_1B886D8(v76, 0LL);
  }
  if ( !*(_DWORD *)(v68 + 24) )
LABEL_58:
    sub_1B88814(viewChangeButton, v18);
  *(_QWORD *)(v68 + 32) = v62;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v68 + 32), (int32_t)v62, v69, v70);
  System_Array__Copy_62662400(
    (System_Array_o *)resultExpeditionRewardInfos,
    0,
    *v65,
    1,
    resultExpeditionRewardInfos->max_length,
    0LL);
  v71 = *v65;
  if ( !*v65 )
    goto LABEL_57;
  viewChangeButton = (__int64)this->fields.listRoot;
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !viewChangeButton )
    goto LABEL_57;
  v72 = viewChangeButton;
  viewChangeButton = (__int64)this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_57;
  v73 = *(_DWORD *)(v72 + 44);
  monitor = v71[1].monitor;
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, (int)monitor > 2 * v73, 0LL);
  v75 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v75,
    (Il2CppObject *)v16,
    Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v75, 0, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__SetPossession(
        ExpeditionRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5EEAB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EEAB = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_1B8880C(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__SetResultData(
        ExpeditionRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  ExpeditionRewardDialogComponent_o *v4; // x20
  signed int max_length; // w8
  __int64 v6; // x26
  BattleDropItem_o *v7; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v10; // x10
  int v11; // w29
  Il2CppObject *prefabResultItem; // x22
  ExpeditionRewardDialogComponent_o *v13; // x22
  ExpeditionRewardDialogComponent_o *v14; // x25
  int32_t v15; // w3
  ItemIconComponent_o *v16; // x25
  ExpeditionRewardDialogComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v24; // x8
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A5EEA7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ExpeditionRewardDialogComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EEA7 = 1;
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
          sub_1B88814(this, rewards);
        v7 = rewards->m_Items[v6];
        if ( !v7 )
          goto LABEL_31;
        type = v7->fields.type;
        objectId = v7->fields.objectId;
        v10 = 44LL;
        if ( v7->fields.originalNum > 0 )
          v10 = 52LL;
        v11 = *(_DWORD *)((char *)&v7->klass + v10);
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                      prefabResultItem,
                                                      (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v13 = this;
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v13,
                                                      0LL);
        v14 = this;
        if ( !byte_4A55CE1 )
        {
          this = (ExpeditionRewardDialogComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        if ( !v14 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v14,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v13,
                                                      0LL);
        if ( !this )
          goto LABEL_31;
        v25.fields.x = v4->fields.iconScale;
        v25.fields.y = v25.fields.x;
        v25.fields.z = v25.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v25, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v13,
                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v15 = v11 <= 1 ? -1 : v11;
        v16 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)this, type, objectId, v15, 0, 0LL);
        ExpeditionRewardDialogComponent__SetPossession(v17, v16, objectId, v18);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 1, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v21 = *(_QWORD *)&this->fields.m_CachedPtr;
        v22 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v21 )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v24 + 32) = v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)v13, v19, v20);
        }
        this = (ExpeditionRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1B8880C(this, rewards);
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

  if ( (byte_4A5EEAC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EEAC = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EEAE & 1) == 0 )
  {
    sub_1B885B0(&ExpeditionRewardDialogComponent___c_TypeInfo);
    byte_4A5EEAE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ExpeditionRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ExpeditionRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionRewardDialogComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ExpeditionRewardDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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
  const MethodInfo *v2; // x2
  ExpeditionRewardDialogComponent_o *_4__this; // x0
  struct ExpeditionRewardDialogComponent_o *v5; // x8

  if ( (byte_4A5EEAF & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A5EEAF = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
}