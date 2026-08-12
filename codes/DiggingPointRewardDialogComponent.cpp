void DiggingPointRewardDialogComponent___ctor(DiggingPointRewardDialogComponent_o *this, const MethodInfo *method)
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

  if ( (byte_596AA9E & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&UnityEngine_Color___TypeInfo);
    byte_596AA9E = 1;
  }
  v3 = UnityEngine_Color___TypeInfo;
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_2213B20(v3, 2);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_2213A04(
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


void DiggingPointRewardDialogComponent__EndClose(DiggingPointRewardDialogComponent_o *this, const MethodInfo *method)
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

  if ( (byte_596AA9A & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    byte_596AA9A = 1;
  }
  DiggingPointRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void DiggingPointRewardDialogComponent__Init(DiggingPointRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DiggingPointRewardDialogComponent__OnClickCloseButton(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t state; // w8
  System_Action_T__o *eventRootMaskSetActiveAction; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *current; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596AA99 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DiggingPointRewardDialogComponent_EndClose__);
    sub_2213A60(&Method_DiggingPointRewardDialogComponent_OnClickCloseButton__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA99 = 1;
  }
  state = this->fields.state;
  memset(&v15, 0, sizeof(v15));
  if ( state == 2 )
  {
    eventRootMaskSetActiveAction = (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction;
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
    v5 = Method_DiggingPointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_DiggingPointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_DiggingPointRewardDialogComponent_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_2213CDC(0, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
        UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_DiggingPointRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0);
  }
}


void DiggingPointRewardDialogComponent__OnClickSwitchShowMode(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_596AA9B & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&StringLiteral_25511/*"treasurechest_btn"*/);
    sub_2213A60(&StringLiteral_25513/*"treasurechest_btn_on"*/);
    byte_596AA9B = 1;
  }
  v3 = Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton
    || (isShowPossessionNum
      ? (v8 = (System_String_o **)&StringLiteral_25511/*"treasurechest_btn"*/)
      : (v8 = (System_String_o **)&StringLiteral_25513/*"treasurechest_btn_on"*/),
        (UIButton__set_normalSprite(viewChangeButton, *v8, 0), (viewChangeButton = this->fields.viewChangeButton) == 0)
     || (viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)viewChangeButton,
                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___),
         !this->fields.viewChangeButton)) )
  {
LABEL_27:
    sub_2213CDC(viewChangeButton, v5);
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
    sub_2213CE4(viewChangeButton);
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
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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


void DiggingPointRewardDialogComponent__Open(
        DiggingPointRewardDialogComponent_o *this,
        BattleDropItem_array *diggingRewards,
        int32_t eventId,
        System_Action_bool__o *setMaskMethod,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v11; // x22
  UnityEngine_Component_o *viewChangeButton; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *Component_object; // x23
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v36; // x23
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  Il2CppObject *MasterData_object; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  Il2CppObject *Entity; // x24
  Il2CppObject *v47; // x25
  UILabel_o *v48; // x26
  Il2CppObject *ComponentInChildren_object; // x27
  UILabel_o *titleLabel; // x26
  System_String_o *v51; // x0
  UILabel_o *titleNextItemLabel; // x26
  UILabel_o *titleAtLabel; // x26
  int64_t v54; // x25
  EventRewardEntity_o *v55; // x21
  const MethodInfo *v56; // x3
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Action_o *v63; // x20

  if ( (byte_596AA96 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____91731488);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__);
    sub_2213A60(&DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo);
    sub_2213A60(&StringLiteral_14079/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_25511/*"treasurechest_btn"*/);
    sub_2213A60(&StringLiteral_25517/*"treasurechest_img_bg_reward"*/);
    sub_2213A60(&StringLiteral_5198/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_2213A60(&StringLiteral_5193/*"DIGGING_EVENT_POINT_REWARD"*/);
    sub_2213A60(&StringLiteral_2936/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    sub_2213A60(&StringLiteral_5191/*"DIGGING_EVENT_POINT"*/);
    sub_2213A60(&StringLiteral_11577/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_596AA96 = 1;
  }
  v11 = sub_2213CCC(DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_31;
  *(_QWORD *)(v11 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = diggingRewards;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)diggingRewards, v20, v21, v22, v23, v24, v25);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventRootMaskSetActiveAction,
    (int32_t)setMaskMethod,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_31;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       viewChangeButton,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32, v33);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_25511/*"treasurechest_btn"*/, 0);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_31;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_25511/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_31;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    sub_2213CE4(viewChangeButton);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_31;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  v36 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v36;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultItemObjList,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  viewChangeButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)viewChangeButton,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRewardMaster___);
  viewChangeButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_31;
  viewChangeButton = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)viewChangeButton,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
             eventId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44, v45);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5191/*"DIGGING_EVENT_POINT"*/, 0);
  if ( !this->fields.viewChangeButton )
    goto LABEL_31;
  v47 = (Il2CppObject *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.viewChangeButton,
                                                  0);
  if ( !viewChangeButton )
    goto LABEL_31;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                  viewChangeButton,
                                                  1,
                                                  (const MethodInfo_3821054 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91731488);
  if ( !this->fields.closeButton )
    goto LABEL_31;
  v48 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.closeButton,
                                                  0);
  if ( !viewChangeButton )
    goto LABEL_31;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 viewChangeButton,
                                 1,
                                 (const MethodInfo_3821054 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91731488);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5198/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !v48 )
    goto LABEL_31;
  UILabel__set_text(v48, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11577/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0);
  titleLabel = this->fields.titleLabel;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_14079/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0);
  viewChangeButton = (UnityEngine_Component_o *)System_String__Format(v51, v47, 0);
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  titleNextItemLabel = this->fields.titleNextItemLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2936/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0);
  if ( !titleNextItemLabel )
    goto LABEL_31;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0);
  titleAtLabel = this->fields.titleAtLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5193/*"DIGGING_EVENT_POINT_REWARD"*/, 0);
  if ( !titleAtLabel )
    goto LABEL_31;
  UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.atNameLabel;
  if ( !viewChangeButton )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v47, 0);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.pointRewardRoot;
  if ( !viewChangeButton )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  AtlasManager__SetEventUI(this->fields.eventPointBg, (System_String_o *)StringLiteral_25517/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_25517/*"treasurechest_img_bg_reward"*/, 0);
  viewChangeButton = (UnityEngine_Component_o *)UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  if ( !MasterData_object )
    goto LABEL_31;
  v54 = (int64_t)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                  (EventRewardMaster_o *)MasterData_object,
                                                  eventId,
                                                  (int64_t)viewChangeButton,
                                                  0);
  if ( !Entity
    || (v55 = (EventRewardEntity_o *)viewChangeButton,
        AtlasManager__SetItem(this->fields.eventPointSprite, (int32_t)Entity[2].klass, 0),
        AtlasManager__SetItem(this->fields.titleIcon, (int32_t)Entity[2].klass, 0),
        DiggingPointRewardDialogComponent__SetNextItemLabel(this, v54, v55, v56),
        this->fields.closeCallbackFunc = closeCallback,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
          (int32_t)closeCallback,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62),
        (viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0)) == 0) )
  {
LABEL_31:
    sub_2213CDC(viewChangeButton, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  v63 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v11,
    Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v63, 0, 0, 0);
}


void DiggingPointRewardDialogComponent__SetNextItemLabel(
        DiggingPointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *v9; // x22
  System_String_o *v10; // x23
  Il2CppObject *v11; // x0
  System_String_o *nextItemNameLabel; // x0
  __int64 v13; // x1
  bool isQp; // w8
  System_String_o *v15; // x1
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  int64_t v18; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596AA98 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_2213A60(&StringLiteral_2939/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_2213A60(&StringLiteral_2937/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AA98 = 1;
  }
  countText = 0;
  nameText = 0;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, userEventPoint, eventRewardEnt);
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2939/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2937/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
          UILabel__set_text((UILabel_o *)nextItemNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
    goto LABEL_21;
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0);
  v9 = this->fields.atLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v18 = eventRewardEnt->fields.point - userEventPoint;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v18);
  nextItemNameLabel = System_String__Format(v10, v11, 0);
  if ( !v9 )
    goto LABEL_21;
  UILabel__set_text(v9, nextItemNameLabel, 0);
  isQp = EventRewardEntity__isQp(eventRewardEnt, 0);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemLabel;
  if ( !isQp )
  {
    if ( nextItemNameLabel )
    {
      UILabel__set_text((UILabel_o *)nextItemNameLabel, countText, 0);
      nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
      if ( nextItemNameLabel )
      {
        v15 = nameText;
        goto LABEL_20;
      }
    }
LABEL_21:
    sub_2213CDC(nextItemNameLabel, v13);
  }
  if ( !nextItemNameLabel )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)nextItemNameLabel, countText, 0);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( !nextItemNameLabel )
    goto LABEL_21;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v15, 0);
}


void DiggingPointRewardDialogComponent__SetPossession(
        DiggingPointRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596AA9C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AA9C = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
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
    sub_2213CDC(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0);
}


void DiggingPointRewardDialogComponent__SetResultData(
        DiggingPointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  DiggingPointRewardDialogComponent_o *v4; // x20
  int max_length; // w8
  __int64 v6; // x26
  BattleDropItem_o *v7; // x8
  Il2CppObject *prefabResultItem; // x22
  __int64 v9; // x9
  int32_t objectId; // w23
  int32_t type; // w24
  int v12; // w29
  DiggingPointRewardDialogComponent_o *v13; // x22
  DiggingPointRewardDialogComponent_o *v14; // x25
  int v15; // w8
  ItemIconComponent_o *v16; // x25
  DiggingPointRewardDialogComponent_o *v17; // x0
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
  if ( (byte_596AA97 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (DiggingPointRewardDialogComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA97 = 1;
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
          sub_2213CE4(this);
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
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                        prefabResultItem,
                                                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v13 = this;
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)v13,
                                                        0);
        v14 = this;
        if ( !byte_5969AE0 )
        {
          this = (DiggingPointRewardDialogComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( !v14 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v14,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)v13,
                                                        0);
        if ( !this )
          goto LABEL_31;
        v29.fields.x = v4->fields.iconScale;
        v29.fields.y = v29.fields.x;
        v29.fields.z = v29.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v29, 0);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)v13,
                                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v15 = v12 <= 1 ? -1 : v12;
        v16 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)this, type, objectId, v15, 0, 0);
        DiggingPointRewardDialogComponent__SetPossession(v17, v16, objectId, v18);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 1, 0);
        this = (DiggingPointRewardDialogComponent_o *)v4->fields.resultItemObjList;
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v28 + 32) = v13;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 32), (int32_t)v13, v19, v20, v21, v22, v23, v24);
        }
        this = (DiggingPointRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (DiggingPointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
        {
LABEL_31:
          sub_2213CDC(this, rewards);
        }
        this = (DiggingPointRewardDialogComponent_o *)((__int64 (__fastcall *)(DiggingPointRewardDialogComponent_o *, const char *))this->klass[1]._1.name)(
                                                        this,
                                                        this->klass[1]._1.namespaze);
        max_length = rewards->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
    }
  }
}


UnityEngine_GameObject_o *DiggingPointRewardDialogComponent__get_closeBtnObject(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596AA9D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA9D = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void DiggingPointRewardDialogComponent___c__DisplayClass29_0___ctor(
        DiggingPointRewardDialogComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingPointRewardDialogComponent___c__DisplayClass29_0___Open_b__0(
        DiggingPointRewardDialogComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingPointRewardDialogComponent_o *_4__this; // x0
  struct DiggingPointRewardDialogComponent_o *v5; // x8
  System_Action_T__o *eventRootMaskSetActiveAction; // x0
  const MethodInfo_36FFD8C *v7; // x2

  if ( (byte_596AA9F & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    byte_596AA9F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingPointRewardDialogComponent__SetResultData(_4__this, this->fields.diggingRewards, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  eventRootMaskSetActiveAction = (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction;
  v7 = (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___;
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(eventRootMaskSetActiveAction, 0, v7);
}