void __fastcall DiggingPointRewardDialogComponent___ctor(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_40FBCC7 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Color___TypeInfo, v4);
    byte_40FBCC7 = 1;
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

  if ( (byte_40FBCC3 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40FBCC3 = 1;
  }
  DiggingPointRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
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


void __fastcall DiggingPointRewardDialogComponent__Init(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FBCC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_DiggingPointRewardDialogComponent_EndClose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    byte_40FBCC2 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
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
    System_Action___ctor(v17, (Il2CppObject *)this, Method_DiggingPointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
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

  if ( (byte_40FBCC4 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_22700/*"treasurechest_btn"*/, v8);
    sub_B16FFC(&StringLiteral_22702/*"treasurechest_btn_on"*/, v9);
    byte_40FBCC4 = 1;
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


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Component_o *viewChangeButton; // x0
  WebViewObject_o *Component_WebViewObject; // x23
  UIButton_o *v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x23
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  WebViewManager_o *Instance; // x0
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x23
  WebViewManager_o *v71; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v72; // x0
  WarEntity_o *Entity; // x24
  System_String_o *v74; // x0
  Il2CppObject *v75; // x25
  UnityEngine_Component_o *transform; // x0
  UILabel_o *ComponentInChildren_UILabel; // x0
  UILabel_o *v78; // x26
  UnityEngine_Component_o *v79; // x0
  UILabel_o *v80; // x27
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  UILabel_o *titleLabel; // x26
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  UILabel_o *titleNextItemLabel; // x26
  System_String_o *v87; // x0
  UILabel_o *titleAtLabel; // x26
  System_String_o *v89; // x0
  UILabel_o *atNameLabel; // x0
  UnityEngine_GameObject_o *pointRewardRoot; // x0
  int64_t EventPointNoGroup; // x0
  int64_t v93; // x25
  EventRewardEntity_o *NextEventRewardEntity; // x0
  EventRewardEntity_o *v95; // x21
  const MethodInfo *v96; // x3
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  System_Action_o *v108; // x20

  if ( (byte_40FBCBF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, diggingRewards);
    sub_B16FFC(&AtlasManager_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560, v12);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__, v21);
    sub_B16FFC(&DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_13388/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, v23);
    sub_B16FFC(&StringLiteral_22700/*"treasurechest_btn"*/, v24);
    sub_B16FFC(&StringLiteral_22706/*"treasurechest_img_bg_reward"*/, v25);
    sub_B16FFC(&StringLiteral_4578/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, v26);
    sub_B16FFC(&StringLiteral_4573/*"DIGGING_EVENT_POINT_REWARD"*/, v27);
    sub_B16FFC(&StringLiteral_2463/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v28);
    sub_B16FFC(&StringLiteral_4571/*"DIGGING_EVENT_POINT"*/, v29);
    sub_B16FFC(&StringLiteral_11055/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v30);
    byte_40FBCBF = 1;
  }
  v31 = sub_B170CC(
          DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo,
          diggingRewards,
          *(_QWORD *)&eventId,
          setMaskMethod,
          closeCallback);
  DiggingPointRewardDialogComponent___c__DisplayClass29_0___ctor(
    (DiggingPointRewardDialogComponent___c__DisplayClass29_0_o *)v31,
    0LL);
  if ( !v31 )
    goto LABEL_33;
  *(_QWORD *)(v31 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v31 + 24) = diggingRewards;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v31 + 24),
    (System_Int32_array **)diggingRewards,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_33;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              viewChangeButton,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22700/*"treasurechest_btn"*/, 0LL);
  v52 = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !v52 )
    goto LABEL_33;
  UIButton__set_normalSprite(v52, (System_String_o *)StringLiteral_22700/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_33;
  if ( !viewChangeButtonLabelEffectColors->max_length )
  {
    sub_B17100(v53, v54, v55);
    sub_B170A0();
  }
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButtonLabel )
    goto LABEL_33;
  UILabel__set_effectColor(
    viewChangeButtonLabel,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v58,
                                                                                                  v59,
                                                                                                  v60,
                                                                                                  v61);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v62;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  v71 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v71 )
    goto LABEL_33;
  v72 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v71,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !v72 )
    goto LABEL_33;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v72,
             eventId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_4571/*"DIGGING_EVENT_POINT"*/, 0LL);
  if ( !this->fields.viewChangeButton )
    goto LABEL_33;
  v75 = (Il2CppObject *)v74;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.viewChangeButton,
                                           0LL);
  if ( !transform )
    goto LABEL_33;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  transform,
                                  1,
                                  (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( !this->fields.closeButton )
    goto LABEL_33;
  v78 = ComponentInChildren_UILabel;
  v79 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)this->fields.closeButton,
                                     0LL);
  if ( !v79 )
    goto LABEL_33;
  v80 = UnityEngine_Component__GetComponentInChildren_UILabel_(
          v79,
          1,
          (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_4578/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v78 )
    goto LABEL_33;
  UILabel__set_text(v78, v81, 0LL);
  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11055/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !v80 )
    goto LABEL_33;
  UILabel__set_text(v80, v82, 0LL);
  titleLabel = this->fields.titleLabel;
  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_13388/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
  v85 = System_String__Format(v84, v75, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, v85, 0LL);
  titleNextItemLabel = this->fields.titleNextItemLabel;
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_2463/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_33;
  UILabel__set_text(titleNextItemLabel, v87, 0LL);
  titleAtLabel = this->fields.titleAtLabel;
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_4573/*"DIGGING_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_33;
  UILabel__set_text(titleAtLabel, v89, 0LL);
  atNameLabel = this->fields.atNameLabel;
  if ( !atNameLabel )
    goto LABEL_33;
  UILabel__set_text(atNameLabel, (System_String_o *)v75, 0LL);
  pointRewardRoot = this->fields.pointRewardRoot;
  if ( !pointRewardRoot )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(pointRewardRoot, 1, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  v93 = EventPointNoGroup;
  NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                            MasterData_WarQuestSelectionMaster,
                            eventId,
                            EventPointNoGroup,
                            0LL);
  if ( !Entity
    || (v95 = NextEventRewardEntity,
        AtlasManager__SetItem(this->fields.eventPointSprite, (int32_t)Entity->fields.name, 0LL),
        AtlasManager__SetItem(this->fields.titleIcon, (int32_t)Entity->fields.name, 0LL),
        DiggingPointRewardDialogComponent__SetNextItemLabel(this, v93, v95, v96),
        this->fields.closeCallbackFunc = closeCallback,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
          (System_Int32_array **)closeCallback,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_33:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v108 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v104, v105, v106, v107);
  System_Action___ctor(
    v108,
    (Il2CppObject *)v31,
    Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v108, 0, 0LL);
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
  System_String_o *v15; // x0
  bool isQp; // w0
  bool v17; // w20
  UILabel_o *nextItemNameLabel; // x0
  UILabel_o *atLabel; // x20
  System_String_o *v20; // x0
  UILabel_o *nextItemLabel; // x20
  System_String_o *v22; // x0
  System_String_o *v23; // x1
  int64_t v24; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FBCC1 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, userEventPoint);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_B16FFC(&StringLiteral_2466/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_B16FFC(&StringLiteral_2464/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40FBCC1 = 1;
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
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2466/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, v20, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2464/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, v22, 0LL);
        nextItemNameLabel = this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_18:
          v23 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v12 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v24 = eventRewardEnt->fields.point - userEventPoint;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24);
  v15 = System_String__Format(v13, v14, 0LL);
  if ( !v12 )
    goto LABEL_22;
  UILabel__set_text(v12, v15, 0LL);
  isQp = EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_22;
  v17 = isQp;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = this->fields.nextItemNameLabel;
  if ( v17 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_22;
    goto LABEL_18;
  }
  if ( !nextItemNameLabel )
    goto LABEL_22;
  v23 = nameText;
LABEL_21:
  UILabel__set_text(nextItemNameLabel, v23, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__SetPossession(
        DiggingPointRewardDialogComponent_o *this,
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

  if ( (byte_40FBCC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FBCC5 = 1;
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
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v19; // x24
  int v20; // s0
  UnityEngine_Transform_o *v23; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  int32_t v25; // w3
  ItemIconComponent_o *v26; // x24
  DiggingPointRewardDialogComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *resultItemObjList; // x0
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_40FBCC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (DiggingPointRewardDialogComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FBCC0 = 1;
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
        DiggingPointRewardDialogComponent__SetPossession(v27, v26, objectId, v28);
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
        this = (DiggingPointRewardDialogComponent_o *)(*(__int64 (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
                                                        Component_WebViewObject,
                                                        Component_WebViewObject->klass[1]._1.element_class);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FBCC6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBCC6 = 1;
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

  if ( (byte_40F8B6A & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40F8B6A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingPointRewardDialogComponent__SetResultData(_4__this, this->fields.diggingRewards, 0LL),
        (v4 = this->fields.__4__this) == 0LL)
    || (v4->fields.state = 2, (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
}