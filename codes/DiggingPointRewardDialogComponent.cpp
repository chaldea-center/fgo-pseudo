void __fastcall DiggingPointRewardDialogComponent___ctor(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418945F & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Color___TypeInfo, v3);
    byte_418945F = 1;
  }
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_B2C374(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_418945B & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_418945B = 1;
  }
  DiggingPointRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__OnClickCloseButton(
        DiggingPointRewardDialogComponent_o *this,
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
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v14; // x20
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418945A & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_DiggingPointRewardDialogComponent_EndClose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    byte_418945A = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B2C434(0LL, v11);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields.current;
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
        UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_DiggingPointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
  }
}


void __fastcall DiggingPointRewardDialogComponent__OnClickSwitchShowMode(
        DiggingPointRewardDialogComponent_o *this,
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
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v13; // x8
  UISprite_o *v14; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v23; // x20
  int size; // w8
  __int64 v25; // x0
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418945C & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_22793/*"treasurechest_btn"*/, v8);
    sub_B2C35C(&StringLiteral_22795/*"treasurechest_btn_on"*/, v9);
    byte_418945C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v13 = isShowPossessionNum ? (System_String_o **)&StringLiteral_22793/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_22795/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v13, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v14 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v14, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B2C434(viewChangeButton, v10);
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
    v25 = sub_B2C460(viewChangeButton);
    sub_B2C400(v25, 0LL);
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
  v26.fields.b = *p_a;
  v26.fields.g = *p_b;
  v26.fields.r = *p_g;
  v26.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v26, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v23 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v23 >= size )
      break;
    if ( size <= (unsigned int)v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v23];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v23;
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x22
  UnityEngine_Component_o *viewChangeButton; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  WebViewObject_o *Component_WebViewObject; // x23
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x23
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x23
  WarEntity_o *Entity; // x24
  Il2CppObject *v63; // x25
  UILabel_o *v64; // x26
  UILabel_o *ComponentInChildren_UILabel; // x27
  UILabel_o *titleLabel; // x26
  System_String_o *v67; // x0
  UILabel_o *titleNextItemLabel; // x26
  UILabel_o *titleAtLabel; // x26
  int64_t v70; // x25
  EventRewardEntity_o *v71; // x21
  const MethodInfo *v72; // x3
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Action_o *v79; // x20
  __int64 v80; // x0

  if ( (byte_4189457 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, diggingRewards);
    sub_B2C35C(&AtlasManager_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664, v12);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__, v21);
    sub_B2C35C(&DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_13444/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, v23);
    sub_B2C35C(&StringLiteral_22793/*"treasurechest_btn"*/, v24);
    sub_B2C35C(&StringLiteral_22799/*"treasurechest_img_bg_reward"*/, v25);
    sub_B2C35C(&StringLiteral_4593/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, v26);
    sub_B2C35C(&StringLiteral_4588/*"DIGGING_EVENT_POINT_REWARD"*/, v27);
    sub_B2C35C(&StringLiteral_2473/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v28);
    sub_B2C35C(&StringLiteral_4586/*"DIGGING_EVENT_POINT"*/, v29);
    sub_B2C35C(&StringLiteral_11091/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v30);
    byte_4189457 = 1;
  }
  v31 = sub_B2C42C(DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo);
  DiggingPointRewardDialogComponent___c__DisplayClass29_0___ctor(
    (DiggingPointRewardDialogComponent___c__DisplayClass29_0_o *)v31,
    0LL);
  if ( !v31 )
    goto LABEL_33;
  *(_QWORD *)(v31 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v31 + 24) = diggingRewards;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v31 + 24),
    (System_Int32_array **)diggingRewards,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_33;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              viewChangeButton,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22793/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_33;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_22793/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_33;
  if ( !viewChangeButtonLabelEffectColors->max_length )
  {
    v80 = sub_B2C460(viewChangeButton);
    sub_B2C400(v80, 0LL);
  }
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_33;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v54;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  viewChangeButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)viewChangeButton,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardMaster___);
  viewChangeButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_33;
  viewChangeButton = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)viewChangeButton,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_33;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)viewChangeButton,
             eventId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4586/*"DIGGING_EVENT_POINT"*/, 0LL);
  if ( !this->fields.viewChangeButton )
    goto LABEL_33;
  v63 = (Il2CppObject *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.viewChangeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_33;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                                  viewChangeButton,
                                                  1,
                                                  (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  if ( !this->fields.closeButton )
    goto LABEL_33;
  v64 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.closeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_33;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  viewChangeButton,
                                  1,
                                  (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4593/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v64 )
    goto LABEL_33;
  UILabel__set_text(v64, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11091/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_33;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_13444/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)System_String__Format(v67, v63, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  titleNextItemLabel = this->fields.titleNextItemLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2473/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_33;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0LL);
  titleAtLabel = this->fields.titleAtLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4588/*"DIGGING_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_33;
  UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.atNameLabel;
  if ( !viewChangeButton )
    goto LABEL_33;
  UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v63, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.pointRewardRoot;
  if ( !viewChangeButton )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  v70 = (int64_t)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                  MasterData_WarQuestSelectionMaster,
                                                  eventId,
                                                  (int64_t)viewChangeButton,
                                                  0LL);
  if ( !Entity
    || (v71 = (EventRewardEntity_o *)viewChangeButton,
        AtlasManager__SetItem(this->fields.eventPointSprite, (int32_t)Entity->fields.name, 0LL),
        AtlasManager__SetItem(this->fields.titleIcon, (int32_t)Entity->fields.name, 0LL),
        DiggingPointRewardDialogComponent__SetNextItemLabel(this, v70, v71, v72),
        this->fields.closeCallbackFunc = closeCallback,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
          (System_Int32_array **)closeCallback,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78),
        (viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL)) == 0LL) )
  {
LABEL_33:
    sub_B2C434(viewChangeButton, v33);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v79 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v79,
    (Il2CppObject *)v31,
    Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v79, 0, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__SetNextItemLabel(
        DiggingPointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *v12; // x22
  System_String_o *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *nextItemNameLabel; // x0
  __int64 v16; // x1
  char v17; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v20; // x1
  int64_t v21; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4189459 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, userEventPoint);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_B2C35C(&StringLiteral_2476/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_B2C35C(&StringLiteral_2474/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_4189459 = 1;
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
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2476/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2474/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0LL);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_18:
          v20 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B2C434(nextItemNameLabel, v16);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v12 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v21 = eventRewardEnt->fields.point - userEventPoint;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
  nextItemNameLabel = System_String__Format(v13, v14, 0LL);
  if ( !v12 )
    goto LABEL_22;
  UILabel__set_text(v12, nextItemNameLabel, 0LL);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_22;
  v17 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v17 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_22;
    goto LABEL_18;
  }
  if ( !nextItemNameLabel )
    goto LABEL_22;
  v20 = nameText;
LABEL_21:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v20, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__SetPossession(
        DiggingPointRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  __int64 v9; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418945D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418945D = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B2C434(Instance, v9);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingPointRewardDialogComponent__SetResultData(
        DiggingPointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  DiggingPointRewardDialogComponent_o *v4; // x20
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
  UnityEngine_GameObject_o *v16; // x22
  UnityEngine_Transform_o *transform; // x24
  int v18; // s0
  int32_t v21; // w3
  ItemIconComponent_o *v22; // x24
  DiggingPointRewardDialogComponent_o *v23; // x0
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4189458 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (DiggingPointRewardDialogComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4189458 = 1;
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
          v25 = sub_B2C460(this);
          sub_B2C400(v25, 0LL);
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
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                        prefabResultItem,
                                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_26;
        v16 = (UnityEngine_GameObject_o *)this;
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_26;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v16, 0LL);
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_26;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !this )
          goto LABEL_26;
        v26.fields.x = v4->fields.iconScale;
        v26.fields.y = v26.fields.x;
        v26.fields.z = v26.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v26, 0LL);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v16,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_26;
        v21 = originalNum <= 1 ? -1 : originalNum;
        v22 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v21, 0, 0LL);
        DiggingPointRewardDialogComponent__SetPossession(v23, v22, objectId, v24);
        UnityEngine_GameObject__SetActive(v16, 1, 0LL);
        this = (DiggingPointRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (this = (DiggingPointRewardDialogComponent_o *)v4->fields.listRoot) == 0LL)
          || (this = (DiggingPointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B2C434(this, rewards);
        }
        this = (DiggingPointRewardDialogComponent_o *)((__int64 (__fastcall *)(DiggingPointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                        this,
                                                        this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v10;
      }
      while ( (int)v10 < max_length );
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

  if ( (byte_418945E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418945E = 1;
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
    sub_B2C434(0LL, v4);
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

  if ( (byte_41864FB & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_41864FB = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingPointRewardDialogComponent__SetResultData(_4__this, this->fields.diggingRewards, 0LL),
        (v4 = this->fields.__4__this) == 0LL)
    || (v4->fields.state = 2, (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(_4__this, method);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
}