void __fastcall ExpeditionPointRewardDialogComponent___ctor(
        ExpeditionPointRewardDialogComponent_o *this,
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

  if ( (byte_40FAD00 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Color___TypeInfo, v4);
    byte_40FAD00 = 1;
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


void __fastcall ExpeditionPointRewardDialogComponent__EndClose(
        ExpeditionPointRewardDialogComponent_o *this,
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

  if ( (byte_40FACFC & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40FACFC = 1;
  }
  ExpeditionPointRewardDialogComponent__Init(this, method);
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


void __fastcall ExpeditionPointRewardDialogComponent__Init(
        ExpeditionPointRewardDialogComponent_o *this,
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
  WebViewObject_o *Component_WebViewObject; // x0
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x20
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FACFB & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_ExpeditionPointRewardDialogComponent_EndClose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    byte_40FACFB = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    this->fields.state = 3;
    if ( !scrollView )
      goto LABEL_22;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                scrollView,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !Component_WebViewObject )
      goto LABEL_22;
    UIScrollView__ResetPosition((UIScrollView_o *)Component_WebViewObject, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
LABEL_22:
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v21.fields.current;
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
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_ExpeditionPointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v20, 0LL);
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

  if ( (byte_40FACFD & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_22700/*"treasurechest_btn"*/, v8);
    sub_B16FFC(&StringLiteral_22702/*"treasurechest_btn_on"*/, v9);
    byte_40FACFD = 1;
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
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x24
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  WebViewObject_o *v54; // x8
  UnityEngine_Component_o *scrollBar; // x0
  int onError_high; // w25
  int v57; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *viewChangeButton; // x0
  WebViewObject_o *v60; // x24
  UIButton_o *v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x24
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_o *v78; // x0
  Il2CppObject *v79; // x24
  UnityEngine_Component_o *transform; // x0
  UILabel_o *ComponentInChildren_UILabel; // x0
  UILabel_o *v82; // x25
  UnityEngine_Component_o *v83; // x0
  UILabel_o *v84; // x26
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  UILabel_o *titleLabel; // x25
  System_String_o *v88; // x0
  System_String_o *v89; // x0
  UILabel_o *titleNextItemLabel; // x25
  System_String_o *v91; // x0
  UILabel_o *titleAtLabel; // x25
  System_String_o *v93; // x0
  UILabel_o *atNameLabel; // x0
  UnityEngine_GameObject_o *pointRewardRoot; // x0
  int64_t EventPointNoGroup; // x24
  WebViewManager_o *Instance; // x0
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRewardEntity_o *NextEventRewardEntity; // x0
  EventRewardEntity_o *v100; // x22
  const MethodInfo *v101; // x3
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  UnityEngine_GameObject_o *v108; // x0
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  System_Action_o *v113; // x20

  if ( (byte_40FACF8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, eventExpeditionEntity);
    sub_B16FFC(&AtlasManager_TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560, v14);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, v15);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardMaster___, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&Method_ExpeditionPointRewardDialogComponent___c__DisplayClass27_0__Open_b__0__, v22);
    sub_B16FFC(&ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_TypeInfo, v23);
    sub_B16FFC(&StringLiteral_5764/*"EXPEDITION_EVENT_POINT"*/, v24);
    sub_B16FFC(&StringLiteral_5749/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, v25);
    sub_B16FFC(&StringLiteral_22700/*"treasurechest_btn"*/, v26);
    sub_B16FFC(&StringLiteral_5770/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, v27);
    sub_B16FFC(&StringLiteral_22706/*"treasurechest_img_bg_reward"*/, v28);
    sub_B16FFC(&StringLiteral_2463/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v29);
    sub_B16FFC(&StringLiteral_5762/*"EXPEDITION_DIALOG_CANCEL"*/, v30);
    sub_B16FFC(&StringLiteral_5765/*"EXPEDITION_EVENT_POINT_REWARD"*/, v31);
    byte_40FACF8 = 1;
  }
  v32 = sub_B170CC(
          ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_TypeInfo,
          eventExpeditionEntity,
          expeditionRewards,
          *(_QWORD *)&eventId,
          setMaskMethod);
  ExpeditionPointRewardDialogComponent___c__DisplayClass27_0___ctor(
    (ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_o *)v32,
    0LL);
  if ( !v32 )
    goto LABEL_36;
  *(_QWORD *)(v32 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v32 + 24) = expeditionRewards;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v32 + 24),
    (System_Int32_array **)expeditionRewards,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = *(_QWORD *)(v32 + 24);
  if ( !v51 )
    goto LABEL_36;
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_36;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              listRoot,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !Component_WebViewObject )
    goto LABEL_36;
  v54 = Component_WebViewObject;
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_36;
  onError_high = HIDWORD(v54->fields.onError);
  v57 = *(_DWORD *)(v51 + 24);
  gameObject = UnityEngine_Component__get_gameObject(scrollBar, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, 2 * onError_high < v57, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_36;
  v60 = UnityEngine_Component__GetComponent_WebViewObject_(
          viewChangeButton,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)v60, (System_String_o *)StringLiteral_22700/*"treasurechest_btn"*/, 0LL);
  v61 = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !v61 )
    goto LABEL_36;
  UIButton__set_normalSprite(v61, (System_String_o *)StringLiteral_22700/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_36;
  if ( !viewChangeButtonLabelEffectColors->max_length )
  {
    sub_B17100(v62, v63, v64);
    sub_B170A0();
  }
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButtonLabel )
    goto LABEL_36;
  UILabel__set_effectColor(
    viewChangeButtonLabel,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v67,
                                                                                                  v68,
                                                                                                  v69,
                                                                                                  v70);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v71;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_5764/*"EXPEDITION_EVENT_POINT"*/, 0LL);
  if ( !this->fields.viewChangeButton )
    goto LABEL_36;
  v79 = (Il2CppObject *)v78;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.viewChangeButton,
                                           0LL);
  if ( !transform )
    goto LABEL_36;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  transform,
                                  1,
                                  (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( !this->fields.closeButton )
    goto LABEL_36;
  v82 = ComponentInChildren_UILabel;
  v83 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)this->fields.closeButton,
                                     0LL);
  if ( !v83 )
    goto LABEL_36;
  v84 = UnityEngine_Component__GetComponentInChildren_UILabel_(
          v83,
          1,
          (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_5770/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v82 )
    goto LABEL_36;
  UILabel__set_text(v82, v85, 0LL);
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_5762/*"EXPEDITION_DIALOG_CANCEL"*/, 0LL);
  if ( !v84 )
    goto LABEL_36;
  UILabel__set_text(v84, v86, 0LL);
  titleLabel = this->fields.titleLabel;
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_5749/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  v89 = System_String__Format(v88, v79, 0LL);
  if ( !titleLabel )
    goto LABEL_36;
  UILabel__set_text(titleLabel, v89, 0LL);
  titleNextItemLabel = this->fields.titleNextItemLabel;
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_2463/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_36;
  UILabel__set_text(titleNextItemLabel, v91, 0LL);
  titleAtLabel = this->fields.titleAtLabel;
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_5765/*"EXPEDITION_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_36;
  UILabel__set_text(titleAtLabel, v93, 0LL);
  atNameLabel = this->fields.atNameLabel;
  if ( !atNameLabel )
    goto LABEL_36;
  UILabel__set_text(atNameLabel, (System_String_o *)v79, 0LL);
  pointRewardRoot = this->fields.pointRewardRoot;
  if ( !pointRewardRoot )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(pointRewardRoot, 1, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  if ( !MasterData_WarQuestSelectionMaster
    || (NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  eventId,
                                  EventPointNoGroup,
                                  0LL),
        !eventExpeditionEntity)
    || (v100 = NextEventRewardEntity,
        AtlasManager__SetItem(this->fields.eventPointSprite, eventExpeditionEntity->fields.eventPointItemId, 0LL),
        ExpeditionPointRewardDialogComponent__SetNextItemLabel(this, EventPointNoGroup, v100, v101),
        this->fields.closeCallbackFunc = closeCallback,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
          (System_Int32_array **)closeCallback,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107),
        (v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_36:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v108, 1, 0LL);
  v113 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v109, v110, v111, v112);
  System_Action___ctor(
    v113,
    (Il2CppObject *)v32,
    Method_ExpeditionPointRewardDialogComponent___c__DisplayClass27_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v113, 0, 0LL);
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
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  System_String_o *v17; // x1
  UILabel_o *atLabel; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  int64_t v21; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FACFA & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, userEventPoint);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_B16FFC(&StringLiteral_2466/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_B16FFC(&StringLiteral_2464/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v10);
    byte_40FACFA = 1;
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
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2466/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, v19, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2464/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
        goto LABEL_16;
    }
LABEL_19:
    sub_B170D4();
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v11 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v21 = eventRewardEnt->fields.point - userEventPoint;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
  v14 = System_String__Format(v12, v13, 0LL);
  if ( !v11 )
    goto LABEL_19;
  UILabel__set_text(v11, v14, 0LL);
  isQp = EventRewardEntity__isQp(eventRewardEnt, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  if ( !isQp )
  {
    v20 = System_String__Concat_43743732(nameText, countText, 0LL);
    if ( !nextItemLabel )
      goto LABEL_19;
LABEL_16:
    v17 = v20;
    goto LABEL_17;
  }
  if ( !nextItemLabel )
    goto LABEL_19;
  v17 = countText;
LABEL_17:
  UILabel__set_text(nextItemLabel, v17, 0LL);
}


void __fastcall ExpeditionPointRewardDialogComponent__SetPossession(
        ExpeditionPointRewardDialogComponent_o *this,
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

  if ( (byte_40FACFE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FACFE = 1;
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
  ExpeditionPointRewardDialogComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *resultItemObjList; // x0
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_40FACF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ExpeditionPointRewardDialogComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FACF9 = 1;
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
        ExpeditionPointRewardDialogComponent__SetPossession(v27, v26, objectId, v28);
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
        this = (ExpeditionPointRewardDialogComponent_o *)(*(__int64 (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
                                                           Component_WebViewObject,
                                                           Component_WebViewObject->klass[1]._1.element_class);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FACFF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FACFF = 1;
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
  ExpeditionPointRewardDialogComponent_o *_4__this; // x0
  struct ExpeditionPointRewardDialogComponent_o *v4; // x8
  struct ExpeditionPointRewardDialogComponent_o *v5; // x8

  if ( (byte_40F68A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40F68A5 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionPointRewardDialogComponent__SetResultData(_4__this, this->fields.expeditionRewards, 0LL),
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