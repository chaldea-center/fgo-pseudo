void __fastcall DiggingPointRewardDialogComponent___ctor(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_43537C8 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    sub_B70694(&UnityEngine_Color___TypeInfo);
    byte_43537C8 = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_B706AC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_B70630(
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


void __fastcall DiggingPointRewardDialogComponent__EndClose(
        DiggingPointRewardDialogComponent_o *this,
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

  if ( (byte_43537C4 & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_bool___);
    byte_43537C4 = 1;
  }
  DiggingPointRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2BFC23C *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B70630(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall DiggingPointRewardDialogComponent__Init(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__OnClickCloseButton(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v6; // x20
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43537C3 & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_bool___);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DiggingPointRewardDialogComponent_EndClose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_43537C3 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2BFC23C *)Method_ActionExtensions_Call_bool___);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B7076C(0LL, v3);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_DiggingPointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
  }
}


void __fastcall DiggingPointRewardDialogComponent__OnClickSwitchShowMode(
        DiggingPointRewardDialogComponent_o *this,
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

  if ( (byte_43537C5 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_23170/*"treasurechest_btn"*/);
    sub_B70694(&StringLiteral_23172/*"treasurechest_btn_on"*/);
    byte_43537C5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v6 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23170/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23172/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v6, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_B7076C(viewChangeButton, v3);
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
    v18 = sub_B70798(viewChangeButton);
    sub_B70738(v18, 0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v16];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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


void __fastcall DiggingPointRewardDialogComponent__Open(
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WebViewObject_o *Component_WebViewObject; // x23
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x23
  WarEntity_o *Entity; // x24
  Il2CppObject *v43; // x25
  UILabel_o *v44; // x26
  UILabel_o *ComponentInChildren_UILabel; // x27
  UILabel_o *titleLabel; // x26
  System_String_o *v47; // x0
  UILabel_o *titleNextItemLabel; // x26
  UILabel_o *titleAtLabel; // x26
  int64_t v50; // x25
  EventRewardEntity_o *v51; // x21
  const MethodInfo *v52; // x3
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Action_o *v59; // x20
  __int64 v60; // x0

  if ( (byte_43537C0 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____69250872);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B70694(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_B70694(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__);
    sub_B70694(&DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo);
    sub_B70694(&StringLiteral_13628/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/);
    sub_B70694(&StringLiteral_23170/*"treasurechest_btn"*/);
    sub_B70694(&StringLiteral_23176/*"treasurechest_img_bg_reward"*/);
    sub_B70694(&StringLiteral_4677/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_B70694(&StringLiteral_4672/*"DIGGING_EVENT_POINT_REWARD"*/);
    sub_B70694(&StringLiteral_2533/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    sub_B70694(&StringLiteral_4670/*"DIGGING_EVENT_POINT"*/);
    sub_B70694(&StringLiteral_11245/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_43537C0 = 1;
  }
  v11 = sub_B70764(DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo);
  DiggingPointRewardDialogComponent___c__DisplayClass29_0___ctor(
    (DiggingPointRewardDialogComponent___c__DisplayClass29_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_33;
  *(_QWORD *)(v11 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = diggingRewards;
  sub_B70630(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)diggingRewards,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_33;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              viewChangeButton,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_23170/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_33;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23170/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_33;
  if ( !viewChangeButtonLabelEffectColors->max_length )
  {
    v60 = sub_B70798(viewChangeButton);
    sub_B70738(v60, 0LL);
  }
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_33;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v34;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  viewChangeButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)viewChangeButton,
                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  viewChangeButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_33;
  viewChangeButton = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)viewChangeButton,
                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_33;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)viewChangeButton,
             eventId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4670/*"DIGGING_EVENT_POINT"*/, 0LL);
  if ( !this->fields.viewChangeButton )
    goto LABEL_33;
  v43 = (Il2CppObject *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.viewChangeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_33;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                                  viewChangeButton,
                                                  1,
                                                  (const MethodInfo_1BE4178 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____69250872);
  if ( !this->fields.closeButton )
    goto LABEL_33;
  v44 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.closeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_33;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  viewChangeButton,
                                  1,
                                  (const MethodInfo_1BE4178 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____69250872);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4677/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v44 )
    goto LABEL_33;
  UILabel__set_text(v44, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11245/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_33;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13628/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)System_String__Format(v47, v43, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  titleNextItemLabel = this->fields.titleNextItemLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2533/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_33;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0LL);
  titleAtLabel = this->fields.titleAtLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4672/*"DIGGING_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_33;
  UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.atNameLabel;
  if ( !viewChangeButton )
    goto LABEL_33;
  UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v43, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.pointRewardRoot;
  if ( !viewChangeButton )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointBg, (System_String_o *)StringLiteral_23176/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_23176/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  v50 = (int64_t)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                  MasterData_WarQuestSelectionMaster,
                                                  eventId,
                                                  (int64_t)viewChangeButton,
                                                  0LL);
  if ( !Entity
    || (v51 = (EventRewardEntity_o *)viewChangeButton,
        AtlasManager__SetItem(this->fields.eventPointSprite, (int32_t)Entity->fields.name, 0LL),
        AtlasManager__SetItem(this->fields.titleIcon, (int32_t)Entity->fields.name, 0LL),
        DiggingPointRewardDialogComponent__SetNextItemLabel(this, v50, v51, v52),
        this->fields.closeCallbackFunc = closeCallback,
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
          (System_Int32_array **)closeCallback,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58),
        (viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL)) == 0LL) )
  {
LABEL_33:
    sub_B7076C(viewChangeButton, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v59 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v11,
    Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__SetNextItemLabel(
        DiggingPointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  UILabel_o *v7; // x22
  System_String_o *v8; // x23
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  System_String_o *nextItemNameLabel; // x0
  __int64 v12; // x1
  char v13; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v16; // x1
  int64_t v17; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_43537C2 & 1) == 0 )
  {
    sub_B70694(&long_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_2538/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_B70694(&StringLiteral_2536/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_B70694(&StringLiteral_2534/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43537C2 = 1;
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
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2536/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2534/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0LL);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_18:
          v16 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B7076C(nextItemNameLabel, v12);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v7 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2538/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v17 = eventRewardEnt->fields.point - userEventPoint;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17, v9);
  nextItemNameLabel = System_String__Format(v8, v10, 0LL);
  if ( !v7 )
    goto LABEL_22;
  UILabel__set_text(v7, nextItemNameLabel, 0LL);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_22;
  v13 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v13 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_22;
    goto LABEL_18;
  }
  if ( !nextItemNameLabel )
    goto LABEL_22;
  v16 = nameText;
LABEL_21:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v16, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__SetPossession(
        DiggingPointRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v7; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43537C6 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43537C6 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B7076C(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingPointRewardDialogComponent__SetResultData(
        DiggingPointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  DiggingPointRewardDialogComponent_o *v4; // x20
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
  DiggingPointRewardDialogComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_43537C1 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (DiggingPointRewardDialogComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43537C1 = 1;
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
          v21 = sub_B70798(this);
          sub_B70738(v21, 0LL);
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
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                        prefabResultItem,
                                                        (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_26;
        v12 = (UnityEngine_GameObject_o *)this;
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
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
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
        if ( !this )
          goto LABEL_26;
        v22.fields.x = v4->fields.iconScale;
        v22.fields.y = v22.fields.x;
        v22.fields.z = v22.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v22, 0LL);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v12,
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_26;
        v17 = originalNum <= 1 ? -1 : originalNum;
        v18 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v17, 0, 0LL);
        DiggingPointRewardDialogComponent__SetPossession(v19, v18, objectId, v20);
        UnityEngine_GameObject__SetActive(v12, 1, 0LL);
        this = (DiggingPointRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (this = (DiggingPointRewardDialogComponent_o *)v4->fields.listRoot) == 0LL)
          || (this = (DiggingPointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B7076C(this, rewards);
        }
        this = (DiggingPointRewardDialogComponent_o *)((__int64 (__fastcall *)(DiggingPointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                        this,
                                                        this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall DiggingPointRewardDialogComponent__get_closeBtnObject(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_43537C7 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43537C7 = 1;
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
    sub_B7076C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent___c__DisplayClass29_0___ctor(
        DiggingPointRewardDialogComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent___c__DisplayClass29_0___Open_b__0(
        DiggingPointRewardDialogComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  DiggingPointRewardDialogComponent_o *_4__this; // x0
  struct DiggingPointRewardDialogComponent_o *v4; // x8
  struct DiggingPointRewardDialogComponent_o *v5; // x8

  if ( (byte_434F00E & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_bool___);
    byte_434F00E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingPointRewardDialogComponent__SetResultData(_4__this, this->fields.diggingRewards, 0LL),
        (v4 = this->fields.__4__this) == 0LL)
    || (v4->fields.state = 2, (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_B7076C(_4__this, method);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2BFC23C *)Method_ActionExtensions_Call_bool___);
}