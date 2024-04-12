void __fastcall DiggingRewardDialogComponent___ctor(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B2051 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&UnityEngine_Color___TypeInfo);
    byte_42B2051 = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_B5299C(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_B52920(
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


void __fastcall DiggingRewardDialogComponent__EndClose(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
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

  if ( (byte_42B204D & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    byte_42B204D = 1;
  }
  DiggingRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


int32_t __fastcall DiggingRewardDialogComponent__GetTotalEventPoint(
        DiggingRewardDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *current; // x26
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  Il2CppClass *klass; // x8
  WarEntity_o *Entity; // x0
  WarEntity_o *v12; // x20
  _DWORD *monitor; // x8
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B204A & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_B52984(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    this = (DiggingRewardDialogComponent_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B204A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !blockList )
    sub_B52A5C(this, blockList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v20 = v19;
  v4 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v20.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v7);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_B52A5C(MasterData_WarQuestSelectionMaster, v9);
    klass = current[4].klass;
    if ( !klass )
      sub_B52A5C(MasterData_WarQuestSelectionMaster, v9);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B52A5C(0LL, v9);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)klass->_1.namespaze,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v12 = Entity;
    if ( Entity )
    {
      monitor = current[4].monitor;
      if ( !monitor
        || (v14 = System_Array__IndexOf_int_(
                    (System_Int32_array *)Entity->fields.longName,
                    monitor[6],
                    (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___),
            (v14 & 0x80000000) != 0) )
      {
        v4 += HIDWORD(v12->fields.name);
      }
      else
      {
        v16 = *(_QWORD *)&v12->fields.parentWarId;
        if ( !v16 )
          sub_B52A5C(v14, v15);
        if ( (unsigned int)v14 >= *(_DWORD *)(v16 + 24) )
        {
          v18 = sub_B52A88(v14);
          sub_B52A28(v18, 0LL);
        }
        v4 += *(_DWORD *)(v16 + 4LL * (int)v14 + 32) + HIDWORD(v12->fields.name);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v4;
}


void __fastcall DiggingRewardDialogComponent__Init(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent__OnClickCloseButton(
        DiggingRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t closeBtnSe; // w20
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v7; // x20
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B204C & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DiggingRewardDialogComponent_EndClose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B204C = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
    closeBtnSe = this->fields.closeBtnSe;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(closeBtnSe, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B52A5C(0LL, v4);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v8,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v8,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v8.fields.current;
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
        UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v8,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_DiggingRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall DiggingRewardDialogComponent__OnClickSwitchShowMode(
        DiggingRewardDialogComponent_o *this,
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

  if ( (byte_42B204E & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_22983/*"treasurechest_btn"*/);
    sub_B52984(&StringLiteral_22985/*"treasurechest_btn_on"*/);
    byte_42B204E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v6 = isShowPossessionNum ? (System_String_o **)&StringLiteral_22983/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_22985/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v6, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_B52A5C(viewChangeButton, v3);
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
    v18 = sub_B52A88(viewChangeButton);
    sub_B52A28(v18, 0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v16];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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


void __fastcall DiggingRewardDialogComponent__Open(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *diggingRewards,
        UserGameEntity_array *oldUserGame,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t eventId,
        bool getPointReward,
        System_Action_bool__o *setMaskMethod,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v16; // x24
  __int64 viewChangeButton; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WebViewObject_o *Component_WebViewObject; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x2
  int32_t v41; // w26
  int v42; // w27
  bool v43; // w22
  UILabel_o *v44; // x28
  UILabel_o *ComponentInChildren_UILabel; // x21
  UILabel_o *getQpTitle; // x21
  UILabel_o *totalQpTitle; // x21
  UILabel_o *titleLabel; // x21
  UILabel_o *subTitleLabel; // x21
  UILabel_o *getTitleLabel; // x21
  UILabel_o *getNumLabel; // x21
  System_String_o *v52; // x28
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x21
  __int64 v57; // x25
  UILabel_o *totalNumLabel; // x21
  System_String_o *v59; // x28
  Il2CppObject *v60; // x0
  BattleDropItem_o *v61; // x25
  bool v62; // w20
  System_Int32_array **v63; // x0
  System_Array_o **v64; // x26
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  const MethodInfo *v78; // x3
  UILabel_o *v79; // x22
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  int32_t v86; // w8
  System_Action_o *v87; // x20
  __int64 v88; // x0
  __int64 v89; // x0
  UserGameEntity_array *v90; // [xsp+8h] [xbp-78h]
  struct System_Action_o *v91; // [xsp+10h] [xbp-70h]
  __int64 v93; // [xsp+20h] [xbp-60h] BYREF
  int v94; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42B2048 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BattleDropItem___TypeInfo);
    sub_B52984(&BattleDropItem_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_B52984(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__);
    sub_B52984(&DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo);
    sub_B52984(&StringLiteral_4627/*"DIGGING_EVENT_POINT_NUM"*/);
    sub_B52984(&StringLiteral_13559/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_B52984(&StringLiteral_4632/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/);
    sub_B52984(&StringLiteral_701/*"+"*/);
    sub_B52984(&StringLiteral_4630/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_22983/*"treasurechest_btn"*/);
    sub_B52984(&StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_B52984(&StringLiteral_22989/*"treasurechest_img_bg_reward"*/);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_4631/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/);
    sub_B52984(&StringLiteral_4633/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_B52984(&StringLiteral_4634/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/);
    sub_B52984(&StringLiteral_4629/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/);
    sub_B52984(&StringLiteral_11178/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_42B2048 = 1;
  }
  v16 = sub_B52A54(DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo);
  DiggingRewardDialogComponent___c__DisplayClass36_0___ctor(
    (DiggingRewardDialogComponent___c__DisplayClass36_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_56;
  *(_QWORD *)(v16 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22983/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_56;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_22983/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_56;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_57;
  viewChangeButton = (__int64)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_56;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v33;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  viewChangeButton = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)viewChangeButton,
                                eventId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_56;
  v41 = *(_DWORD *)(viewChangeButton + 32);
  viewChangeButton = DiggingRewardDialogComponent__GetTotalEventPoint(
                       (DiggingRewardDialogComponent_o *)viewChangeButton,
                       blockList,
                       v40);
  if ( !this->fields.getPointRoot )
    goto LABEL_56;
  v42 = viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.getQpRoot;
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  v90 = oldUserGame;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  v43 = getPointReward;
  v91 = closeCallback;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  if ( !this->fields.closeButton )
    goto LABEL_56;
  v44 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)viewChangeButton,
                                  1,
                                  (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4633/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v44 )
    goto LABEL_56;
  UILabel__set_text(v44, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11178/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_56;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)viewChangeButton, 0LL);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4631/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, 0LL);
  if ( !getQpTitle )
    goto LABEL_56;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0LL);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4632/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0LL);
  if ( !totalQpTitle )
    goto LABEL_56;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4630/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_56;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4629/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_56;
  UILabel__set_text(subTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  AtlasManager__SetItem(this->fields.totalEventPointIcon, v41, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v41, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4627/*"DIGGING_EVENT_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_56;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v94 = v42;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v94);
  v54 = System_String__Format(v52, v53, 0LL);
  viewChangeButton = (__int64)System_String__Concat_44568316((System_String_o *)StringLiteral_701/*"+"*/, v54, 0LL);
  if ( !getNumLabel )
    goto LABEL_56;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v57 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4634/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_56;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v93 = v57;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v93);
  viewChangeButton = (__int64)System_String__Format(v59, v60, 0LL);
  if ( !totalNumLabel )
    goto LABEL_56;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v61 = (BattleDropItem_o *)sub_B52A54(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v61, 0LL);
  if ( !v61 )
    goto LABEL_56;
  v61->fields.type = 2;
  v61->fields.objectId = v41;
  v62 = v43;
  v61->fields.originalNum = v42;
  if ( !diggingRewards )
    goto LABEL_56;
  v63 = (System_Int32_array **)sub_B5299C(BattleDropItem___TypeInfo, diggingRewards->max_length + 1);
  *(_QWORD *)(v16 + 24) = v63;
  v64 = (System_Array_o **)(v16 + 24);
  sub_B52920((BattleServantConfConponent_o *)(v16 + 24), v63, v65, v66, v67, v68, v69, v70);
  v71 = *(_QWORD *)(v16 + 24);
  if ( !v71 )
    goto LABEL_56;
  viewChangeButton = sub_B52A44(v61, *(_QWORD *)(*(_QWORD *)v71 + 64LL));
  if ( !viewChangeButton )
  {
    v89 = sub_B52A7C(0LL);
    sub_B52A28(v89, 0LL);
  }
  if ( !*(_DWORD *)(v71 + 24) )
  {
LABEL_57:
    v88 = sub_B52A88(viewChangeButton);
    sub_B52A28(v88, 0LL);
  }
  *(_QWORD *)(v71 + 32) = v61;
  sub_B52920((BattleServantConfConponent_o *)(v71 + 32), (System_Int32_array **)v61, v72, v73, v74, v75, v76, v77);
  System_Array__Copy_43421420((System_Array_o *)diggingRewards, 0, *v64, 1, diggingRewards->max_length, 0LL);
  DiggingRewardDialogComponent__SetQpLabel(this, (BattleDropItem_array *)*v64, v90, v78);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  v79 = UnityEngine_Component__GetComponentInChildren_UILabel_(
          (UnityEngine_Component_o *)viewChangeButton,
          1,
          (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  if ( v62 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( v79 )
    {
      UILabel__set_text(v79, (System_String_o *)viewChangeButton, 0LL);
      v86 = 8;
      goto LABEL_54;
    }
LABEL_56:
    sub_B52A5C(viewChangeButton, v18);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !v79 )
    goto LABEL_56;
  UILabel__set_text(v79, (System_String_o *)viewChangeButton, 0LL);
  v86 = 1;
LABEL_54:
  this->fields.closeBtnSe = v86;
  this->fields.closeCallbackFunc = v91;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)v91,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v87 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v87,
    (Il2CppObject *)v16,
    Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v87, 0, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetPossession(
        DiggingRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v7; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B204F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B204F = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B52A5C(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetQpLabel(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *dropItems,
        UserGameEntity_array *oldUserGame,
        const MethodInfo *method)
{
  DiggingRewardDialogComponent_o *v6; // x19
  UserGameEntity_o *v7; // x9
  signed int max_length; // w8
  int32_t qp; // w23
  unsigned int v10; // w24
  int v11; // w22
  BattleDropItem_o *v12; // x21
  BalanceConfig_c *v13; // x0
  UILabel_o *getQpNumLabel; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  UILabel_o *totalQpNumLabel; // x19
  Il2CppObject *v18; // x0
  __int64 v19; // x0
  int v20; // [xsp+8h] [xbp-48h] BYREF
  int v21; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_42B2049 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_701/*"+"*/);
    this = (DiggingRewardDialogComponent_o *)sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    byte_42B2049 = 1;
  }
  if ( !oldUserGame )
    goto LABEL_32;
  if ( !oldUserGame->max_length )
    goto LABEL_33;
  v7 = oldUserGame->m_Items[0];
  if ( !v7 || !dropItems )
    goto LABEL_32;
  max_length = dropItems->max_length;
  qp = v7->fields.qp;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = 0;
    while ( v10 < max_length )
    {
      v12 = dropItems->m_Items[v10];
      if ( !v12 )
        goto LABEL_32;
      if ( v12->fields.type == 2 )
      {
        this = (DiggingRewardDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_32;
        this = (DiggingRewardDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_32;
        this = (DiggingRewardDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                   v12->fields.objectId,
                                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.maskSprite) == 1 )
        {
          this = (DiggingRewardDialogComponent_o *)BattleDropItem__getTotalNum(v12, 0LL);
          v11 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_20;
    }
LABEL_33:
    v19 = sub_B52A88(this);
    sub_B52A28(v19, 0LL);
  }
  v11 = 0;
LABEL_20:
  v13 = BalanceConfig_TypeInfo;
  if ( (qp & 0x80000000) != 0 )
    goto LABEL_36;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( qp > v13->static_fields->QpMax )
  {
LABEL_36:
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BalanceConfig_TypeInfo;
    }
    qp = v13->static_fields->QpMax;
  }
  getQpNumLabel = v6->fields.getQpNumLabel;
  v21 = v11;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v16 = System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v15, 0LL);
  this = (DiggingRewardDialogComponent_o *)System_String__Concat_44568316(
                                             (System_String_o *)StringLiteral_701/*"+"*/,
                                             v16,
                                             0LL);
  if ( !getQpNumLabel
    || (UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0LL),
        totalQpNumLabel = v6->fields.totalQpNumLabel,
        v20 = qp + v11,
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20),
        this = (DiggingRewardDialogComponent_o *)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v18, 0LL),
        !totalQpNumLabel) )
  {
LABEL_32:
    sub_B52A5C(this, dropItems);
  }
  UILabel__set_text(totalQpNumLabel, (System_String_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingRewardDialogComponent__SetResultData(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  DiggingRewardDialogComponent_o *v4; // x20
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
  DiggingRewardDialogComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42B204B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (DiggingRewardDialogComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B204B = 1;
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
          v21 = sub_B52A88(this);
          sub_B52A28(v21, 0LL);
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
        this = (DiggingRewardDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                   prefabResultItem,
                                                   (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_26;
        v12 = (UnityEngine_GameObject_o *)this;
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
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
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
        if ( !this )
          goto LABEL_26;
        v22.fields.x = v4->fields.iconScale;
        v22.fields.y = v22.fields.x;
        v22.fields.z = v22.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v22, 0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v12,
                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_26;
        v17 = originalNum <= 1 ? -1 : originalNum;
        v18 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v17, 0, 0LL);
        DiggingRewardDialogComponent__SetPossession(v19, v18, objectId, v20);
        UnityEngine_GameObject__SetActive(v12, 1, 0LL);
        this = (DiggingRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (this = (DiggingRewardDialogComponent_o *)v4->fields.listRoot) == 0LL)
          || (this = (DiggingRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B52A5C(this, rewards);
        }
        this = (DiggingRewardDialogComponent_o *)((__int64 (__fastcall *)(DiggingRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall DiggingRewardDialogComponent__get_closeBtnObject(
        DiggingRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_42B2050 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2050 = 1;
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
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall DiggingRewardDialogComponent___c__DisplayClass36_0___ctor(
        DiggingRewardDialogComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent___c__DisplayClass36_0___Open_b__0(
        DiggingRewardDialogComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  DiggingRewardDialogComponent_o *_4__this; // x0
  struct DiggingRewardDialogComponent_o *v4; // x8
  struct DiggingRewardDialogComponent_o *v5; // x8

  if ( (byte_42AD885 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    byte_42AD885 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingRewardDialogComponent__SetResultData(_4__this, this->fields.resultIds, 0LL),
        (v4 = this->fields.__4__this) == 0LL)
    || (v4->fields.state = 2, (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(_4__this, method);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
}